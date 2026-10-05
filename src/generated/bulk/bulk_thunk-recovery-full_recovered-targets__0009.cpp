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
struct __RFLD2 { int wDay; int wHour; int wMinute; int wMonth; int wSecond; int wYear; };
struct __RFLD { int wDay; int wHour; int wMinute; int wMonth; int wSecond; int wYear; };
namespace std { template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xlength_error(A...); typedef int _Iterator_base0; }
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct AddMultipleURIsToQueue { char _pad; AddMultipleURIsToQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CreateDirectoryA { char _pad; CreateDirectoryA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CreateFileA { char _pad; CreateFileA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CreateSavedQueue { char _pad; CreateSavedQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DStack_228 { char _pad; DStack_228(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DVar1 { char _pad; DVar1(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DVar2 { char _pad; DVar2(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DestroyObject { char _pad; DestroyObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetCurrentProcess { char _pad; GetCurrentProcess(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetCurrentProcessId { char _pad; GetCurrentProcessId(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetCurrentThreadId { char _pad; GetCurrentThreadId(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetLocalTime { char _pad; GetLocalTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetTempPathA { char _pad; GetTempPathA(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Now { char _pad; Now(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Playing { char _pad; Playing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionWithBoolDescriptor { char _pad; SCIActionWithBoolDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInfoViewHeaderDataSource { char _pad; SCIInfoViewHeaderDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAddFavorites { char _pad; SCIOpAddFavorites(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpLoadLogo { char _pad; SCIOpLoadLogo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIPlayQueue { char _pad; SCIPlayQueue(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIPlayQueueMgr { char _pad; SCIPlayQueueMgr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIWizard { char _pad; SCIWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ServiceOutageManager { char _pad; ServiceOutageManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetAVTransportURI { char _pad; SetAVTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetAccountNicknameX { char _pad; SetAccountNicknameX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unable { char _pad; Unable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UpdateObject { char _pad; UpdateObject(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Wrote { char _pad; Wrote(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct _SYSTEMTIME { char _pad; _SYSTEMTIME(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int wDay; static int wHour; static int wMinute; static int wMonth; static int wSecond; static int wYear; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *CHAR;
typedef void *E9;
typedef void *LPSECURITY_ATTRIBUTES;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; void __thiscall m_FUN_1051a400(int *param_2); template<class... A> int m_FUN_1051a400(A...); int * __thiscall m_FUN_1051a490(int *param_2); template<class... A> int m_FUN_1051a490(A...); undefined4 * __thiscall m_FUN_1051c170(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_1051c170(A...); int * __thiscall m_FUN_10525040(int *param_2); template<class... A> int m_FUN_10525040(A...); int * __thiscall m_FUN_105250c0(int *param_2); template<class... A> int m_FUN_105250c0(A...); int * __thiscall m_FUN_10525440(int *param_2); template<class... A> int m_FUN_10525440(A...); int * __thiscall m_FUN_105254b0(int *param_2); template<class... A> int m_FUN_105254b0(A...); int * __thiscall m_FUN_10525520(int *param_2); template<class... A> int m_FUN_10525520(A...); int * __thiscall m_FUN_10525590(int *param_2); template<class... A> int m_FUN_10525590(A...); void __thiscall m_FUN_10525730(undefined4 *param_2); template<class... A> int m_FUN_10525730(A...); void __thiscall m_FUN_105259f0(undefined4 *param_2); template<class... A> int m_FUN_105259f0(A...); undefined4 * __thiscall m_FUN_10525b20(undefined4 *param_2); template<class... A> int m_FUN_10525b20(A...); undefined4 * __thiscall m_FUN_10525b90(undefined4 *param_2); template<class... A> int m_FUN_10525b90(A...); undefined4 * __thiscall m_FUN_10525cc0(undefined4 param_2); template<class... A> int m_FUN_10525cc0(A...); undefined4 * __thiscall m_FUN_10525ce0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10525ce0(A...); undefined4 * __thiscall m_FUN_10525d60(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10525d60(A...); undefined4 * __thiscall m_FUN_10525ed0(undefined4 param_2); template<class... A> int m_FUN_10525ed0(A...); undefined4 * __thiscall m_FUN_10526060(undefined4 param_2); template<class... A> int m_FUN_10526060(A...); undefined4 * __thiscall m_FUN_10526080(undefined4 param_2); template<class... A> int m_FUN_10526080(A...); undefined4 * __thiscall m_FUN_10526160(undefined4 param_2); template<class... A> int m_FUN_10526160(A...); undefined4 * __thiscall m_FUN_105261f0(undefined4 param_2); template<class... A> int m_FUN_105261f0(A...); undefined4 * __thiscall m_FUN_10526210(undefined4 param_2); template<class... A> int m_FUN_10526210(A...); undefined4 * __thiscall m_FUN_105269f0(undefined4 param_2); template<class... A> int m_FUN_105269f0(A...); undefined4 * __thiscall m_FUN_10526a30(undefined4 param_2); template<class... A> int m_FUN_10526a30(A...); undefined4 * __thiscall m_FUN_10526b90(undefined4 param_2); template<class... A> int m_FUN_10526b90(A...); undefined4 * __thiscall m_FUN_10526bd0(undefined4 param_2); template<class... A> int m_FUN_10526bd0(A...); undefined4 * __thiscall m_FUN_10526d80(undefined4 param_2,undefined4 param_3,undefined2 param_4); template<class... A> int m_FUN_10526d80(A...); undefined4 * __thiscall m_FUN_10526dc0(undefined4 param_2); template<class... A> int m_FUN_10526dc0(A...); undefined4 * __thiscall m_FUN_10527150(undefined4 param_2); template<class... A> int m_FUN_10527150(A...); undefined4 * __thiscall m_FUN_10528c10(undefined4 param_2); template<class... A> int m_FUN_10528c10(A...); undefined4 * __thiscall m_FUN_10528c50(undefined4 param_2); template<class... A> int m_FUN_10528c50(A...); undefined4 * __thiscall m_FUN_10528d70(undefined4 param_2); template<class... A> int m_FUN_10528d70(A...); int * __thiscall m_FUN_1052a940(int *param_2); template<class... A> int m_FUN_1052a940(A...); int * __thiscall m_FUN_1052aa10(int *param_2); template<class... A> int m_FUN_1052aa10(A...); uint __thiscall m_FUN_1052c740(uint param_2); template<class... A> int m_FUN_1052c740(A...); uint __thiscall m_FUN_1052c850(uint param_2); template<class... A> int m_FUN_1052c850(A...); void __thiscall m_FUN_1052c9a0(int *param_2); template<class... A> int m_FUN_1052c9a0(A...); void __thiscall m_FUN_1052dcd0(undefined4 *param_2); template<class... A> int m_FUN_1052dcd0(A...); SCStr * __thiscall m_FUN_10533f60(SCStr *param_2); template<class... A> int m_FUN_10533f60(A...); SCStr * __thiscall m_FUN_10534000(SCStr *param_2); template<class... A> int m_FUN_10534000(A...); SCStr * __thiscall m_FUN_10535240(SCStr *param_2); template<class... A> int m_FUN_10535240(A...); SCStr * __thiscall m_FUN_105354f0(SCStr *param_2); template<class... A> int m_FUN_105354f0(A...); SCStr * __thiscall m_FUN_10535610(SCStr *param_2); template<class... A> int m_FUN_10535610(A...); SCStr * __thiscall m_FUN_10535660(SCStr *param_2); template<class... A> int m_FUN_10535660(A...); SCStr * __thiscall m_FUN_10535a70(SCStr *param_2); template<class... A> int m_FUN_10535a70(A...); SCStr * __thiscall m_FUN_10535d60(SCStr *param_2); template<class... A> int m_FUN_10535d60(A...); SCStr * __thiscall m_FUN_10535e40(SCStr *param_2); template<class... A> int m_FUN_10535e40(A...); SCStr * __thiscall m_FUN_1053d520(SCStr *param_2); template<class... A> int m_FUN_1053d520(A...); void __thiscall m_FUN_105452e0(undefined4 *param_2); template<class... A> int m_FUN_105452e0(A...); void __thiscall m_FUN_1054b4f0(SCStr *param_2); template<class... A> int m_FUN_1054b4f0(A...); void __thiscall m_FUN_1054b5e0(undefined1 param_2); template<class... A> int m_FUN_1054b5e0(A...); void __thiscall m_FUN_1054b5f0(undefined1 param_2); template<class... A> int m_FUN_1054b5f0(A...); void __thiscall m_FUN_1054b600(undefined4 param_2); template<class... A> int m_FUN_1054b600(A...); void __thiscall m_FUN_1054b6e0(SCStr *param_2); template<class... A> int m_FUN_1054b6e0(A...); void __thiscall m_FUN_1054b780(SCStr *param_2); template<class... A> int m_FUN_1054b780(A...); void __thiscall m_FUN_1054b850(undefined1 param_2); template<class... A> int m_FUN_1054b850(A...); void __thiscall m_FUN_1054b860(SCStr *param_2); template<class... A> int m_FUN_1054b860(A...); void __thiscall m_FUN_1054bec0(undefined4 param_2); template<class... A> int m_FUN_1054bec0(A...); void __thiscall m_FUN_1054c0e0(int *param_2); template<class... A> int m_FUN_1054c0e0(A...); void __thiscall m_FUN_1054c300(int *param_2); template<class... A> int m_FUN_1054c300(A...); int * __thiscall m_FUN_1054d040(int *param_2); template<class... A> int m_FUN_1054d040(A...); undefined4 * __thiscall m_FUN_1054d730(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_1054d730(A...); undefined4 * __thiscall m_FUN_1054d750(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1054d750(A...); SCStr * __thiscall m_FUN_1054d860(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1054d860(A...); undefined4 * __thiscall m_FUN_1054d890(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1054d890(A...); SCStr * __thiscall m_FUN_1054d8b0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_1054d8b0(A...); int * __thiscall m_FUN_1054d8f0(int *param_2); template<class... A> int m_FUN_1054d8f0(A...); int * __thiscall m_FUN_1054d970(int *param_2); template<class... A> int m_FUN_1054d970(A...); int * __thiscall m_FUN_1054d990(int *param_2); template<class... A> int m_FUN_1054d990(A...); void __thiscall m_FUN_1054daf0(undefined4 *param_2); template<class... A> int m_FUN_1054daf0(A...); void __thiscall m_FUN_1054db20(undefined4 *param_2); template<class... A> int m_FUN_1054db20(A...); void __thiscall m_FUN_1054db50(undefined4 *param_2); template<class... A> int m_FUN_1054db50(A...); void __thiscall m_FUN_1054db70(undefined4 *param_2); template<class... A> int m_FUN_1054db70(A...); void __thiscall m_FUN_1054ea30(undefined4 *param_2); template<class... A> int m_FUN_1054ea30(A...); undefined4 * __thiscall m_FUN_1054ed70(undefined4 *param_2); template<class... A> int m_FUN_1054ed70(A...); undefined4 * __thiscall m_FUN_1054eda0(undefined4 *param_2); template<class... A> int m_FUN_1054eda0(A...); undefined4 * __thiscall m_FUN_1054eeb0(undefined4 param_2); template<class... A> int m_FUN_1054eeb0(A...); undefined4 * __thiscall m_FUN_1054ef10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1054ef10(A...); undefined4 * __thiscall m_FUN_1054efa0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1054efa0(A...); undefined4 * __thiscall m_FUN_1054efb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1054efb0(A...); undefined4 * __thiscall m_FUN_1054efe0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1054efe0(A...); undefined4 * __thiscall m_FUN_1054f000(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1054f000(A...); undefined4 * __thiscall m_FUN_1054f010(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1054f010(A...); undefined4 * __thiscall m_FUN_1054f020(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1054f020(A...); undefined4 * __thiscall m_FUN_1054f030(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1054f030(A...); int * __thiscall m_FUN_105502c0(int *param_2); template<class... A> int m_FUN_105502c0(A...); int * __thiscall m_FUN_10550390(int *param_2); template<class... A> int m_FUN_10550390(A...); bool __thiscall m_FUN_10550460(int *param_2); template<class... A> int m_FUN_10550460(A...); bool __thiscall m_FUN_10550480(int *param_2); template<class... A> int m_FUN_10550480(A...); bool __thiscall m_FUN_105504a0(int *param_2); template<class... A> int m_FUN_105504a0(A...); bool __thiscall m_FUN_105504c0(int *param_2); template<class... A> int m_FUN_105504c0(A...); bool __thiscall m_FUN_105504e0(int *param_2); template<class... A> int m_FUN_105504e0(A...); bool __thiscall m_FUN_10550500(int *param_2); template<class... A> int m_FUN_10550500(A...); bool __thiscall m_FUN_10550520(int *param_2); template<class... A> int m_FUN_10550520(A...); bool __thiscall m_FUN_10550540(int *param_2); template<class... A> int m_FUN_10550540(A...); undefined4 * __thiscall m_FUN_10550710(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10550710(A...); uint __thiscall m_FUN_10550cd0(uint param_2); template<class... A> int m_FUN_10550cd0(A...); uint __thiscall m_FUN_10550d10(uint param_2); template<class... A> int m_FUN_10550d10(A...); void __thiscall m_FUN_10551ca0(undefined4 *param_2); template<class... A> int m_FUN_10551ca0(A...); void __thiscall m_FUN_10551fd0(int param_2); template<class... A> int m_FUN_10551fd0(A...); void __thiscall m_FUN_105521c0(undefined4 *param_2); template<class... A> int m_FUN_105521c0(A...); void __thiscall m_FUN_105521d0(undefined4 *param_2); template<class... A> int m_FUN_105521d0(A...); void __thiscall m_FUN_10552c00(undefined4 *param_2); template<class... A> int m_FUN_10552c00(A...); void __thiscall m_FUN_10552c10(undefined4 *param_2); template<class... A> int m_FUN_10552c10(A...); void __thiscall m_FUN_10552c20(undefined4 *param_2); template<class... A> int m_FUN_10552c20(A...); void __thiscall m_FUN_10552ea0(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10552ea0(A...); undefined4 __thiscall m_FUN_10553b10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10553b10(A...); SCStr * __thiscall m_FUN_10553f50(SCStr *param_2); template<class... A> int m_FUN_10553f50(A...); SCStr * __thiscall m_FUN_10553f70(SCStr *param_2); template<class... A> int m_FUN_10553f70(A...); SCStr * __thiscall m_FUN_10553f90(SCStr *param_2); template<class... A> int m_FUN_10553f90(A...); SCStr * __thiscall m_FUN_10553fd0(SCStr *param_2); template<class... A> int m_FUN_10553fd0(A...); SCStr * __thiscall m_FUN_10553ff0(SCStr *param_2); template<class... A> int m_FUN_10553ff0(A...); SCStr * __thiscall m_FUN_10554010(SCStr *param_2); template<class... A> int m_FUN_10554010(A...); undefined4 __thiscall m_FUN_10554050(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10554050(A...); SCStr * __thiscall m_FUN_10554490(SCStr *param_2); template<class... A> int m_FUN_10554490(A...); SCStr * __thiscall m_FUN_105544b0(SCStr *param_2); template<class... A> int m_FUN_105544b0(A...); SCStr * __thiscall m_FUN_105544d0(SCStr *param_2); template<class... A> int m_FUN_105544d0(A...); void __thiscall m_FUN_105547e0(SCStr *param_2,SCStr *param_3,undefined4 param_4); template<class... A> int m_FUN_105547e0(A...); void __thiscall m_FUN_10556c10(undefined4 *param_2); template<class... A> int m_FUN_10556c10(A...); void __thiscall m_FUN_10557070(int param_2); template<class... A> int m_FUN_10557070(A...); void __thiscall m_FUN_10558410(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_10558410(A...); int * __thiscall m_FUN_105585f0(int *param_2); template<class... A> int m_FUN_105585f0(A...); int * __thiscall m_FUN_10558670(int *param_2); template<class... A> int m_FUN_10558670(A...); int * __thiscall m_FUN_105586b0(int *param_2); template<class... A> int m_FUN_105586b0(A...); undefined4 * __thiscall m_FUN_10558940(undefined1 *param_2,int param_3); template<class... A> int m_FUN_10558940(A...); undefined4 * __thiscall m_FUN_105590e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_105590e0(A...); int * __thiscall m_FUN_10561a20(int *param_2); template<class... A> int m_FUN_10561a20(A...); int * __thiscall m_FUN_10561cc0(int *param_2); template<class... A> int m_FUN_10561cc0(A...); int * __thiscall m_FUN_10561e80(int *param_2); template<class... A> int m_FUN_10561e80(A...); int * __thiscall m_FUN_105622f0(int *param_2); template<class... A> int m_FUN_105622f0(A...); int * __thiscall m_FUN_105627a0(int *param_2); template<class... A> int m_FUN_105627a0(A...); undefined4 * __thiscall m_FUN_10563240(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10563240(A...); undefined4 * __thiscall m_FUN_105632e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_105632e0(A...); undefined4 * __thiscall m_FUN_10563380(undefined4 param_2); template<class... A> int m_FUN_10563380(A...); undefined4 * __thiscall m_FUN_10563600(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10563600(A...); void __thiscall m_FUN_10563780(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10563780(A...); byte * __thiscall m_FUN_10565070(byte param_2,byte param_3,undefined4 param_4); template<class... A> int m_FUN_10565070(A...); undefined4 __thiscall m_FUN_1056d4e0(int param_2); template<class... A> int m_FUN_1056d4e0(A...); SCStr * __thiscall m_FUN_10574860(SCStr *param_2); template<class... A> int m_FUN_10574860(A...); SCStr * __thiscall m_FUN_10574fb0(SCStr *param_2); template<class... A> int m_FUN_10574fb0(A...); int * __thiscall m_FUN_105796c0(int *param_2); template<class... A> int m_FUN_105796c0(A...); int * __thiscall m_FUN_10579740(int *param_2); template<class... A> int m_FUN_10579740(A...); int * __thiscall m_FUN_10579760(int *param_2); template<class... A> int m_FUN_10579760(A...); undefined4 * __thiscall m_FUN_10579930(undefined4 *param_2); template<class... A> int m_FUN_10579930(A...); undefined4 * __thiscall m_FUN_105799c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_105799c0(A...); undefined4 * __thiscall m_FUN_10579a90(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10579a90(A...); undefined4 * __thiscall m_FUN_10579b40(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10579b40(A...); undefined4 * __thiscall m_FUN_10579bf0(undefined4 param_2,undefined4 param_3,byte param_4); template<class... A> int m_FUN_10579bf0(A...); undefined4 * __thiscall m_FUN_10579c40(undefined4 param_2,undefined4 param_3,byte param_4,
            undefined4 param_5); template<class... A> int m_FUN_10579c40(A...); undefined4 __thiscall m_FUN_1057d810(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); template<class... A> int m_FUN_1057d810(A...); undefined4 __thiscall m_FUN_1057d820(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1057d820(A...); undefined4 __thiscall m_FUN_1057fc20(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_1057fc20(A...); void __thiscall m_FUN_10586140(uint param_2,int *param_3); template<class... A> int m_FUN_10586140(A...); uint * __thiscall m_FUN_10586750(int param_2,char *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10586750(A...); undefined4 * __thiscall m_FUN_105868a0(uint param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105868a0(A...); int * __thiscall m_FUN_10588cf0(int *param_2); template<class... A> int m_FUN_10588cf0(A...); int __thiscall m_FUN_10588e60(int param_2); template<class... A> int m_FUN_10588e60(A...); int __thiscall m_FUN_10588e90(int param_2); template<class... A> int m_FUN_10588e90(A...); void __thiscall m_FUN_105899d0(uint param_2); template<class... A> int m_FUN_105899d0(A...); void __thiscall m_FUN_10589a80(uint param_2); template<class... A> int m_FUN_10589a80(A...); void __thiscall m_FUN_10589bd0(undefined4 *param_2); template<class... A> int m_FUN_10589bd0(A...); SCStr * __thiscall m_FUN_1058deb0(SCStr *param_2); template<class... A> int m_FUN_1058deb0(A...); int * __thiscall m_FUN_1058f5e0(int *param_2); template<class... A> int m_FUN_1058f5e0(A...); int * __thiscall m_FUN_1058f620(int *param_2); template<class... A> int m_FUN_1058f620(A...); SCStr * __thiscall m_FUN_10590790(SCStr *param_2); template<class... A> int m_FUN_10590790(A...); int * __thiscall m_FUN_10592940(int *param_2); template<class... A> int m_FUN_10592940(A...); undefined4 * __thiscall m_FUN_10593060(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10593060(A...); undefined4 * __thiscall m_FUN_105931e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105931e0(A...); undefined4 * __thiscall m_FUN_105932e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105932e0(A...); int * __thiscall m_FUN_105934e0(int *param_2); template<class... A> int m_FUN_105934e0(A...); int * __thiscall m_FUN_10593560(int *param_2); template<class... A> int m_FUN_10593560(A...); void __thiscall m_FUN_10593cc0(undefined4 param_2); template<class... A> int m_FUN_10593cc0(A...); undefined4 * __thiscall m_FUN_10594a30(undefined4 param_2); template<class... A> int m_FUN_10594a30(A...); undefined4 * __thiscall m_FUN_10594a90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10594a90(A...); undefined4 * __thiscall m_FUN_10594aa0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10594aa0(A...); undefined4 * __thiscall m_FUN_10594b30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10594b30(A...); undefined4 * __thiscall m_FUN_10594b60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10594b60(A...); undefined4 * __thiscall m_FUN_10594b80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10594b80(A...); undefined4 * __thiscall m_FUN_10595800(undefined4 *param_2); template<class... A> int m_FUN_10595800(A...); bool __thiscall m_FUN_105958b0(int *param_2); template<class... A> int m_FUN_105958b0(A...); bool __thiscall m_FUN_105958d0(int *param_2); template<class... A> int m_FUN_105958d0(A...); undefined4 * __thiscall m_FUN_10595940(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10595940(A...); void __thiscall m_FUN_10595bf0(uint param_2); template<class... A> int m_FUN_10595bf0(A...); void __thiscall m_FUN_10595ca0(uint param_2); template<class... A> int m_FUN_10595ca0(A...); uint __thiscall m_FUN_10595d50(uint param_2); template<class... A> int m_FUN_10595d50(A...); void __thiscall m_FUN_10596a50(undefined4 *param_2); template<class... A> int m_FUN_10596a50(A...); int __thiscall m_FUN_10596c60(uint param_2); template<class... A> int m_FUN_10596c60(A...); int __thiscall m_FUN_10596ca0(uint param_2); template<class... A> int m_FUN_10596ca0(A...); void __thiscall m_FUN_10596d30(undefined4 *param_2); template<class... A> int m_FUN_10596d30(A...); void __thiscall m_FUN_105973a0(undefined4 *param_2); template<class... A> int m_FUN_105973a0(A...); SCStr * __thiscall m_FUN_105978b0(SCStr *param_2); template<class... A> int m_FUN_105978b0(A...); SCStr * __thiscall m_FUN_105978d0(SCStr *param_2); template<class... A> int m_FUN_105978d0(A...); SCStr * __thiscall m_FUN_105978f0(SCStr *param_2); template<class... A> int m_FUN_105978f0(A...); void __thiscall m_FUN_1059a5d0(undefined4 param_2); template<class... A> int m_FUN_1059a5d0(A...); undefined4 * __thiscall m_FUN_1059b3e0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1059b3e0(A...); undefined4 * __thiscall m_FUN_1059b400(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1059b400(A...); undefined4 * __thiscall m_FUN_1059b500(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1059b500(A...); undefined4 * __thiscall m_FUN_1059b520(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_1059b520(A...); void __thiscall m_FUN_1059b840(undefined4 *param_2); template<class... A> int m_FUN_1059b840(A...); void __thiscall m_FUN_1059b870(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1059b870(A...); undefined4 * __thiscall m_FUN_1059baf0(undefined4 param_2); template<class... A> int m_FUN_1059baf0(A...); undefined4 * __thiscall m_FUN_1059bb30(undefined4 param_2); template<class... A> int m_FUN_1059bb30(A...); undefined4 * __thiscall m_FUN_1059bb60(undefined4 param_2); template<class... A> int m_FUN_1059bb60(A...); undefined4 * __thiscall m_FUN_1059bbb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1059bbb0(A...); undefined4 * __thiscall m_FUN_1059bbc0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1059bbc0(A...); undefined4 * __thiscall m_FUN_1059bc50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1059bc50(A...); undefined4 * __thiscall m_FUN_1059bc60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1059bc60(A...); undefined4 * __thiscall m_FUN_1059bcf0(undefined4 *param_2); template<class... A> int m_FUN_1059bcf0(A...); bool __thiscall m_FUN_1059c1e0(int *param_2); template<class... A> int m_FUN_1059c1e0(A...); bool __thiscall m_FUN_1059c200(int *param_2); template<class... A> int m_FUN_1059c200(A...); void __thiscall m_FUN_1059cec0(undefined4 *param_2); template<class... A> int m_FUN_1059cec0(A...); void __thiscall m_FUN_1059cf50(undefined4 *param_2); template<class... A> int m_FUN_1059cf50(A...); void __thiscall m_FUN_1059d020(undefined4 *param_2); template<class... A> int m_FUN_1059d020(A...); undefined4 * __thiscall m_FUN_1059e650(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1059e650(A...); undefined4 * __thiscall m_FUN_1059e6e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1059e6e0(A...); undefined4 * __thiscall m_FUN_1059e7e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1059e7e0(A...); undefined4 * __thiscall m_FUN_1059e800(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1059e800(A...); undefined4 * __thiscall m_FUN_1059e850(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_1059e850(A...); undefined4 * __thiscall m_FUN_1059e880(undefined4 param_2); template<class... A> int m_FUN_1059e880(A...); undefined4 * __thiscall m_FUN_1059e890(undefined4 param_2); template<class... A> int m_FUN_1059e890(A...); void __thiscall m_FUN_1059edb0(undefined4 param_2); template<class... A> int m_FUN_1059edb0(A...); void __thiscall m_FUN_1059edd0(undefined4 *param_2); template<class... A> int m_FUN_1059edd0(A...); void __thiscall m_FUN_1059edf0(undefined4 *param_2); template<class... A> int m_FUN_1059edf0(A...); void __thiscall m_FUN_1059f880(undefined4 *param_2); template<class... A> int m_FUN_1059f880(A...); void __thiscall m_FUN_1059f8b0(undefined4 *param_2); template<class... A> int m_FUN_1059f8b0(A...); undefined4 * __thiscall m_FUN_1059fa20(undefined4 param_2); template<class... A> int m_FUN_1059fa20(A...); undefined4 * __thiscall m_FUN_1059fa80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1059fa80(A...); undefined4 * __thiscall m_FUN_1059fa90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1059fa90(A...); undefined4 * __thiscall m_FUN_1059fb20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1059fb20(A...); undefined4 * __thiscall m_FUN_1059fb50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1059fb50(A...); undefined4 * __thiscall m_FUN_1059fc30(undefined4 *param_2); template<class... A> int m_FUN_1059fc30(A...); undefined4 * __thiscall m_FUN_105a07e0(undefined4 *param_2); template<class... A> int m_FUN_105a07e0(A...); undefined4 * __thiscall m_FUN_105a0810(undefined4 *param_2); template<class... A> int m_FUN_105a0810(A...); bool __thiscall m_FUN_105a0970(int *param_2); template<class... A> int m_FUN_105a0970(A...); bool __thiscall m_FUN_105a0990(int *param_2); template<class... A> int m_FUN_105a0990(A...); int __thiscall m_FUN_105a0ab0(int param_2); template<class... A> int m_FUN_105a0ab0(A...); int __thiscall m_FUN_105a0ac0(int param_2); template<class... A> int m_FUN_105a0ac0(A...); void __thiscall m_FUN_105a0e20(int param_2); template<class... A> int m_FUN_105a0e20(A...); void __thiscall m_FUN_105a0e50(int param_2); template<class... A> int m_FUN_105a0e50(A...); void __thiscall m_FUN_105a0e80(uint param_2); template<class... A> int m_FUN_105a0e80(A...); void __thiscall m_FUN_105a0f30(uint param_2); template<class... A> int m_FUN_105a0f30(A...); uint __thiscall m_FUN_105a0fe0(uint param_2); template<class... A> int m_FUN_105a0fe0(A...); uint __thiscall m_FUN_105a1020(uint param_2); template<class... A> int m_FUN_105a1020(A...); uint __thiscall m_FUN_105a1060(uint param_2); template<class... A> int m_FUN_105a1060(A...); uint __thiscall m_FUN_105a10a0(uint param_2); template<class... A> int m_FUN_105a10a0(A...); void __thiscall m_FUN_105a11f0(uint param_2); template<class... A> int m_FUN_105a11f0(A...); void __thiscall m_FUN_105a19e0(int param_2); template<class... A> int m_FUN_105a19e0(A...); void __thiscall m_FUN_105a1ac0(int *param_2); template<class... A> int m_FUN_105a1ac0(A...); void __thiscall m_FUN_105a2190(undefined4 *param_2); template<class... A> int m_FUN_105a2190(A...); void __thiscall m_FUN_105a2430(undefined4 *param_2); template<class... A> int m_FUN_105a2430(A...); void __thiscall m_FUN_105a2440(undefined4 *param_2); template<class... A> int m_FUN_105a2440(A...); void __thiscall m_FUN_105a3300(undefined4 *param_2); template<class... A> int m_FUN_105a3300(A...); void __thiscall m_FUN_105a3330(undefined4 *param_2); template<class... A> int m_FUN_105a3330(A...); undefined4 * __thiscall m_FUN_105a3520(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_105a3520(A...); undefined4 * __thiscall m_FUN_105a3540(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a3540(A...); undefined4 * __thiscall m_FUN_105a3560(undefined4 param_2); template<class... A> int m_FUN_105a3560(A...); undefined4 * __thiscall m_FUN_105a3570(undefined4 param_2); template<class... A> int m_FUN_105a3570(A...); undefined4 * __thiscall m_FUN_105a3580(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105a3580(A...); undefined4 * __thiscall m_FUN_105a35a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105a35a0(A...); undefined4 * __thiscall m_FUN_105a35c0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105a35c0(A...); undefined4 * __thiscall m_FUN_105a35e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105a35e0(A...); undefined4 * __thiscall m_FUN_105a36a0(undefined4 param_2); template<class... A> int m_FUN_105a36a0(A...); undefined4 * __thiscall m_FUN_105a36b0(undefined4 param_2); template<class... A> int m_FUN_105a36b0(A...); undefined4 * __thiscall m_FUN_105a3c30(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105a3c30(A...); undefined4 * __thiscall m_FUN_105a3c50(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105a3c50(A...); undefined4 * __thiscall m_FUN_105a3c70(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105a3c70(A...); undefined4 * __thiscall m_FUN_105a3c90(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_105a3c90(A...); undefined4 * __thiscall m_FUN_105a3cf0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_105a3cf0(A...); undefined4 * __thiscall m_FUN_105a3d00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_105a3d00(A...); undefined4 * __thiscall m_FUN_105a4010(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_105a4010(A...); int * __thiscall m_FUN_105a4150(int *param_2); template<class... A> int m_FUN_105a4150(A...); void __thiscall m_FUN_105a49f0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_105a49f0(A...); void __thiscall m_FUN_105a4f30(int *param_2,uint *param_3); template<class... A> int m_FUN_105a4f30(A...); undefined4 * __thiscall m_FUN_105a6d40(undefined4 param_2); template<class... A> int m_FUN_105a6d40(A...); undefined4 * __thiscall m_FUN_105a6d60(undefined4 param_2); template<class... A> int m_FUN_105a6d60(A...); undefined4 * __thiscall m_FUN_105a6d80(undefined4 param_2); template<class... A> int m_FUN_105a6d80(A...); undefined4 * __thiscall m_FUN_105a6da0(undefined4 param_2); template<class... A> int m_FUN_105a6da0(A...); undefined4 * __thiscall m_FUN_105a6ec0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a6ec0(A...); undefined4 * __thiscall m_FUN_105a6ed0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a6ed0(A...); undefined4 * __thiscall m_FUN_105a6ee0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a6ee0(A...); undefined4 * __thiscall m_FUN_105a6ef0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a6ef0(A...); undefined4 * __thiscall m_FUN_105a6f00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_105a6f00(A...); undefined4 * __thiscall m_FUN_105a6f40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_105a6f40(A...); undefined4 * __thiscall m_FUN_105a6f80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a6f80(A...); undefined4 * __thiscall m_FUN_105a6f90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a6f90(A...); undefined4 * __thiscall m_FUN_105a6fa0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a6fa0(A...); undefined4 * __thiscall m_FUN_105a71b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a71b0(A...); undefined4 * __thiscall m_FUN_105a71c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a71c0(A...); undefined4 * __thiscall m_FUN_105a71d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a71d0(A...); undefined4 * __thiscall m_FUN_105a71e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a71e0(A...); undefined4 * __thiscall m_FUN_105a71f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a71f0(A...); undefined4 * __thiscall m_FUN_105a7200(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a7200(A...); undefined4 * __thiscall m_FUN_105a7210(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a7210(A...); SCStr * __thiscall m_FUN_105a7670(SCStr *param_2); template<class... A> int m_FUN_105a7670(A...); undefined4 * __thiscall m_FUN_105a76b0(undefined4 *param_2); template<class... A> int m_FUN_105a76b0(A...); undefined4 * __thiscall m_FUN_105a76c0(undefined4 *param_2); template<class... A> int m_FUN_105a76c0(A...); SCStr * __thiscall m_FUN_105a76d0(SCStr *param_2,SCStr param_3); template<class... A> int m_FUN_105a76d0(A...); undefined4 * __thiscall m_FUN_105a77c0(undefined4 param_2); template<class... A> int m_FUN_105a77c0(A...); undefined4 * __thiscall m_FUN_105a7810(undefined4 param_2); template<class... A> int m_FUN_105a7810(A...); undefined4 * __thiscall m_FUN_105a7860(undefined4 param_2); template<class... A> int m_FUN_105a7860(A...); undefined4 * __thiscall m_FUN_105a78b0(undefined4 *param_2); template<class... A> int m_FUN_105a78b0(A...); undefined4 * __thiscall m_FUN_105a78f0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_105a78f0(A...); undefined4 * __thiscall m_FUN_105a7c10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_105a7c10(A...); int * __thiscall m_FUN_105a8920(int *param_2); template<class... A> int m_FUN_105a8920(A...); int * __thiscall m_FUN_105a8980(int *param_2); template<class... A> int m_FUN_105a8980(A...); int * __thiscall m_FUN_105a89d0(int *param_2); template<class... A> int m_FUN_105a89d0(A...); int * __thiscall m_FUN_105a8a20(int *param_2); template<class... A> int m_FUN_105a8a20(A...); undefined4 * __thiscall m_FUN_105a8ad0(undefined4 *param_2); template<class... A> int m_FUN_105a8ad0(A...); SCStr * __thiscall m_FUN_105a8b20(SCStr *param_2); template<class... A> int m_FUN_105a8b20(A...); int * __thiscall m_FUN_105a8bc0(int *param_2); template<class... A> int m_FUN_105a8bc0(A...); bool __thiscall m_FUN_105a8df0(int *param_2); template<class... A> int m_FUN_105a8df0(A...); bool __thiscall m_FUN_105a8e10(int *param_2); template<class... A> int m_FUN_105a8e10(A...); bool __thiscall m_FUN_105a8e30(int *param_2); template<class... A> int m_FUN_105a8e30(A...); bool __thiscall m_FUN_105a8e50(int *param_2); template<class... A> int m_FUN_105a8e50(A...); bool __thiscall m_FUN_105a8e70(int *param_2); template<class... A> int m_FUN_105a8e70(A...); bool __thiscall m_FUN_105a8e90(int *param_2); template<class... A> int m_FUN_105a8e90(A...); bool __thiscall m_FUN_105a8eb0(int *param_2); template<class... A> int m_FUN_105a8eb0(A...); bool __thiscall m_FUN_105a8ed0(int *param_2); template<class... A> int m_FUN_105a8ed0(A...); bool __thiscall m_FUN_105a8ef0(int *param_2); template<class... A> int m_FUN_105a8ef0(A...); bool __thiscall m_FUN_105a8f20(int *param_2); template<class... A> int m_FUN_105a8f20(A...); undefined4 * __thiscall m_FUN_105a9880(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_105a9880(A...); void __thiscall m_FUN_105ab480(int param_2); template<class... A> int m_FUN_105ab480(A...); void __thiscall m_FUN_105ab4f0(int param_2); template<class... A> int m_FUN_105ab4f0(A...); void __thiscall m_FUN_105ab950(int *param_2); template<class... A> int m_FUN_105ab950(A...); void __thiscall m_FUN_105ab9c0(int *param_2); template<class... A> int m_FUN_105ab9c0(A...); void __thiscall m_FUN_105abaa0(undefined4 *param_2); template<class... A> int m_FUN_105abaa0(A...); void __thiscall m_FUN_105abae0(undefined4 *param_2); template<class... A> int m_FUN_105abae0(A...); void __thiscall m_FUN_105abb20(undefined4 *param_2); template<class... A> int m_FUN_105abb20(A...); void __thiscall m_FUN_105abb30(undefined4 *param_2); template<class... A> int m_FUN_105abb30(A...); void __thiscall m_FUN_105abb70(undefined4 *param_2); template<class... A> int m_FUN_105abb70(A...); void __thiscall m_FUN_105abb80(undefined4 *param_2); template<class... A> int m_FUN_105abb80(A...); void __thiscall m_FUN_105ac370(undefined4 *param_2); template<class... A> int m_FUN_105ac370(A...); void __thiscall m_FUN_105ad2e0(undefined4 *param_2); template<class... A> int m_FUN_105ad2e0(A...); void __thiscall m_FUN_105ad2f0(undefined4 *param_2); template<class... A> int m_FUN_105ad2f0(A...); void __thiscall m_FUN_105ad300(undefined4 *param_2); template<class... A> int m_FUN_105ad300(A...); void __thiscall m_FUN_105ad310(undefined4 *param_2); template<class... A> int m_FUN_105ad310(A...); void __thiscall m_FUN_105ad320(undefined4 *param_2); template<class... A> int m_FUN_105ad320(A...); bool __thiscall m_FUN_105af670(uint param_2); template<class... A> int m_FUN_105af670(A...); undefined4 * __thiscall m_FUN_105b0580(int *param_2); template<class... A> int m_FUN_105b0580(A...); undefined4 * __thiscall m_FUN_105b07b0(int *param_2); template<class... A> int m_FUN_105b07b0(A...); int * __thiscall m_FUN_105b0950(int *param_2); template<class... A> int m_FUN_105b0950(A...); int * __thiscall m_FUN_105b09d0(int *param_2); template<class... A> int m_FUN_105b09d0(A...); void __thiscall m_FUN_105b0ef0(int *param_2); template<class... A> int m_FUN_105b0ef0(A...); };

extern __declspec(dllimport) int CreateDirectoryA(...);
extern __declspec(dllimport) int CreateFileA(...);
extern int FUN_1051c790(...);
extern int FUN_1051c7a0(...);
extern int FUN_1051c7c0(...);
extern int FUN_1051c7f0(...);
extern int FUN_10528d90(...);
extern int FUN_10528db0(...);
extern int FUN_1054f910(...);
extern int FUN_105650a0(...);
extern int FUN_10588050(...);
extern int FUN_10588060(...);
extern __declspec(dllimport) int GetCurrentProcess(...);
extern __declspec(dllimport) int GetCurrentProcessId(...);
extern __declspec(dllimport) int GetCurrentThreadId(...);
extern __declspec(dllimport) int GetLocalTime(...);
extern __declspec(dllimport) int GetTempPathA(...);
extern int LOCK(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int __stdio_common_vsprintf_p(...);
extern __declspec(dllimport) int _errno(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int fclose(...);
extern int func_0x100108a2(...);
extern int func_0x1005ee94(...);
extern int func_0x11489dc0(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a6c80(...);
extern int thunk_FUN_101a9be0(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101ba530(...);
template<class... A> int __stdcall thunk_FUN_10200aa0(A...);
extern int thunk_FUN_10203dc0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_103beae0(...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_103d6a60(...);
template<class... A> int __stdcall thunk_FUN_1050f680(A...);
extern int thunk_FUN_105106c0(...);
extern int thunk_FUN_105142b0(...);
extern int thunk_FUN_105142d0(...);
extern int thunk_FUN_10525750(...);
extern int thunk_FUN_10533e90(...);
template<class... A> int __stdcall thunk_FUN_1054dba0(A...);
template<class... A> int __stdcall thunk_FUN_1057a360(A...);
extern int thunk_FUN_10593590(...);
template<class... A> int __stdcall thunk_FUN_10594e60(A...);
template<class... A> int __stdcall thunk_FUN_10596a70(A...);
template<class... A> int __stdcall thunk_FUN_10596a80(A...);
extern int thunk_FUN_1059b6d0(...);
extern int thunk_FUN_1059b760(...);
extern int thunk_FUN_1059c6f0(...);
template<class... A> int __stdcall thunk_FUN_1059e8c0(A...);
extern int thunk_FUN_1059ea10(...);
template<class... A> int __stdcall thunk_FUN_1059ee10(A...);
extern int thunk_FUN_1059ef60(...);
extern int thunk_FUN_1059f110(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
template<class... A> int __stdcall thunk_FUN_105a1f20(A...);
template<class... A> int __stdcall thunk_FUN_105a1f40(A...);
extern int thunk_FUN_105a1fb0(...);
template<class... A> int __stdcall thunk_FUN_105a4960(A...);
template<class... A> int __stdcall thunk_FUN_105a4bf0(A...);
template<class... A> int __stdcall thunk_FUN_105a5110(A...);
extern int thunk_FUN_105aa0f0(...);
extern int thunk_FUN_105ad910(...);
extern int thunk_FUN_106dc530(...);
extern int thunk_FUN_10de8ec0(...);
extern int thunk_FUN_10dec580(...);
template<class... A> int __stdcall thunk_FUN_10deea50(A...);
extern int thunk_FUN_10deeb70(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def210(...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106f6e0(...);
extern int thunk_FUN_11082860(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110c1f30(...);
extern int thunk_FUN_110c2c60(...);
template<class... A> int __stdcall thunk_FUN_111a06b0(A...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
template<class... A> int __stdcall thunk_FUN_111ca9f0(A...);
extern int thunk_FUN_111ccae0(...);
extern int thunk_FUN_111cd540(...);
extern int thunk_FUN_111d15e0(...);
extern int thunk_FUN_111dd660(...);
extern int thunk_FUN_11202480(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a160(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_112859a0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145cb70(...);
extern int thunk_FUN_1145cf60(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11882ff0;
extern int DAT_11884fb0;
extern int DAT_1188e99c;
extern int DAT_118b3060;
extern int DAT_12126b84;
extern int DAT_122f1250;
extern int g_lSCObjCount;
extern int ghidra_vftable_RCPBrowseOperationCB;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RLocationNameExtractorCB;
extern int ghidra_vftable_RProgressInfoForSCOp;
extern int ghidra_vftable_RServiceManifestCB;
extern int ghidra_vftable_RServiceManifestGetRequest;
extern int ghidra_vftable_RSvcManifestDownloadCompletionCB;
extern int ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp;
extern int ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp;
extern int ghidra_vftable_RUpnpAVTPlayAIOOp;
extern int ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDDestroyObjectAIOOp;
extern int ghidra_vftable_RUpnpCDUpdateObjectAIOOp;
extern int ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp;
extern int ghidra_vftable_SCAddPlaylistAction;
extern int ghidra_vftable_SCAddQueueOp;
extern int ghidra_vftable_SCAddToQueueAtNumberDescriptor;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAsyncBrowseItem;
extern int ghidra_vftable_SCIActionWithBoolDescriptor;
extern int ghidra_vftable_SCINewWizController;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAddFavorites;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpLoadLogo;
extern int ghidra_vftable_SCIOperationProgress;
extern int ghidra_vftable_SCIStackedItemImpl;
extern int ghidra_vftable_SCInfoViewDescriptor;
extern int ghidra_vftable_SCMusicServiceAccountNeededState;
extern int ghidra_vftable_SCMusicServiceCompleteState;
extern int ghidra_vftable_SCMusicServiceGetAppLinkRetryState;
extern int ghidra_vftable_SCMusicServiceGetShareUsageState;
extern int ghidra_vftable_SCMusicServiceInitState;
extern int ghidra_vftable_SCMusicServiceIntroState;
extern int ghidra_vftable_SCMusicServiceLoginPasswordState;
extern int ghidra_vftable_SCMusicServiceMultipleAccountsAddedState;
extern int ghidra_vftable_SCMusicServicePasswordState;
extern int ghidra_vftable_SCMusicServicePromotedIntroState;
extern int ghidra_vftable_SCMusicServiceResultState;
extern int ghidra_vftable_SCMusicServiceSetNicknameErrorState;
extern int ghidra_vftable_SCMusicServiceSetShareUsageState;
extern int ghidra_vftable_SCNamePlaylistAction;
extern int ghidra_vftable_SCNullParamRX;
extern int ghidra_vftable_SCOpAddFavorites;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpLookupMetadata;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpWithProgressInfo;
extern int ghidra_vftable_SCRadioPickCityBrowseItem;
extern int ghidra_vftable_SCRadioSetZIPDescriptor;
extern int ghidra_vftable_SCRenamePlaylistAction;
extern int ghidra_vftable_SCServiceDescriptorManagerEventSinkInternal;
extern int ghidra_vftable_SCServiceInfoDownloadRetryState;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int ghidra_vftable_std_Ref_count;
extern int in_EAX;
extern int uStack_14b;
extern int uStack_14c;
extern int uStack_220;
extern int uStack_224;
extern int uStack_4;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_10552558[];
extern undefined1 LAB_105584bb[];
extern undefined1 LAB_105a12ad[];
extern undefined1 LAB_114f5b00[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_1159bde8[];
extern undefined1 LAB_1159c5d0[];
extern undefined1 LAB_115a0a10[];
extern undefined1 LAB_115a2ce0[];
extern undefined1 LAB_1172c5b0[];
extern undefined1 LAB_1172d640[];
extern undefined1 LAB_117c45e8[];
extern undefined1 LAB_117c46c8[];
extern undefined1 LAB_117c4c58[];
extern int *PTR_DAT_12126b6c;
extern int *PTR_s_https___www__119e5428;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10516e90(int *param_1);
template<class... A> int FUN_10516e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10519af0(undefined4 *param_1);
template<class... A> int FUN_10519af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10519b00(undefined4 *param_1);
template<class... A> int FUN_10519b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10519b10(undefined4 *param_1);
template<class... A> int FUN_10519b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10519b20(undefined4 *param_1);
template<class... A> int FUN_10519b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10519b30(undefined4 *param_1);
template<class... A> int FUN_10519b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051a290(undefined4 *param_1);
template<class... A> int FUN_1051a290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051a2c0(undefined4 *param_1);
template<class... A> int FUN_1051a2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051a2f0(undefined4 *param_1);
template<class... A> int FUN_1051a2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051a320(int *param_1);
template<class... A> int FUN_1051a320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1051a4f0(int param_1);
template<class... A> int FUN_1051a4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b7f0(undefined4 *param_1);
template<class... A> int FUN_1051b7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b820(undefined4 *param_1);
template<class... A> int FUN_1051b820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b850(undefined4 *param_1);
template<class... A> int FUN_1051b850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051b8c0(undefined4 *param_1);
template<class... A> int FUN_1051b8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051c240(undefined4 *param_1);
template<class... A> int FUN_1051c240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1051c780(undefined4 *param_1);
template<class... A> int FUN_1051c780(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_1051c790(undefined4 *param_1);
/* WARNING: Removing unreachable block_1051c7a0 (ram,0x101ba14a) */ void __fastcall FUN_1051c7a0(undefined4 *param_1);
/* WARNING: Removing unreachable block_1051c7c0 (ram,0x101ba14a) */ void __fastcall FUN_1051c7c0(undefined4 *param_1);
/* WARNING: Removing unreachable block_1051c7f0 (ram,0x101ba14a) */ void __fastcall FUN_1051c7f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051d150(undefined4 *param_1);
template<class... A> int FUN_1051d150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051d180(undefined4 *param_1);
template<class... A> int FUN_1051d180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1051d190(undefined4 *param_1);
template<class... A> int FUN_1051d190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1051d4d0(int *param_1);
template<class... A> int FUN_1051d4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1051d4e0(int param_1);
template<class... A> int FUN_1051d4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1051d4f0(int param_1);
template<class... A> int FUN_1051d4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1051d500(int param_1);
template<class... A> int FUN_1051d500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1051d510(int param_1);
template<class... A> int FUN_1051d510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1051d520(int param_1);
template<class... A> int FUN_1051d520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1051d530(int param_1);
template<class... A> int FUN_1051d530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1051d540(undefined4 *param_1);
template<class... A> int FUN_1051d540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105208a0(int param_1);
template<class... A> int FUN_105208a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105208b0(int param_1);
template<class... A> int FUN_105208b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105208c0(int param_1);
template<class... A> int FUN_105208c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10520960(SCStr *param_1);
template<class... A> int FUN_10520960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105209c0(int param_1);
template<class... A> int FUN_105209c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105209d0(int param_1);
template<class... A> int FUN_105209d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105209e0(int param_1);
template<class... A> int FUN_105209e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10520d00(int param_1);
template<class... A> int FUN_10520d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10520d10(int param_1);
template<class... A> int FUN_10520d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10520d20(int param_1);
template<class... A> int FUN_10520d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10520d30(int param_1);
template<class... A> int FUN_10520d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10520d40(int param_1);
template<class... A> int FUN_10520d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10520d50(int param_1);
template<class... A> int FUN_10520d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10520d60(int param_1);
template<class... A> int FUN_10520d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10520d70(int param_1);
template<class... A> int FUN_10520d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10520d90(int param_1);
template<class... A> int FUN_10520d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10520da0(int param_1);
template<class... A> int FUN_10520da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10520db0(int param_1);
template<class... A> int FUN_10520db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10520dc0(int param_1);
template<class... A> int FUN_10520dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10520de0(int param_1);
template<class... A> int FUN_10520de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105226a0(int *param_1);
template<class... A> int FUN_105226a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105226c0(int param_1);
template<class... A> int FUN_105226c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105226d0(int param_1);
template<class... A> int FUN_105226d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10522720(int param_1);
template<class... A> int FUN_10522720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10523d30(int param_1);
template<class... A> int FUN_10523d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10523d40(int param_1);
template<class... A> int FUN_10523d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10524720(undefined4 *param_1);
template<class... A> int FUN_10524720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105247c0(int *param_1);
template<class... A> int FUN_105247c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10524890(int param_1);
template<class... A> int FUN_10524890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10524cf0(int param_1);
template<class... A> int FUN_10524cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10524d00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10524d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105256f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_105256f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10525720(void);
template<class... A> int FUN_10525720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10525900(undefined4 *param_1);
template<class... A> int FUN_10525900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10525910(undefined4 *param_1,undefined4 param_2,int param_3);
template<class... A> int FUN_10525910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10525930(undefined4 param_1);
template<class... A> int FUN_10525930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10525940(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10525940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10525970(undefined4 param_1);
template<class... A> int FUN_10525970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105259e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_105259e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10525a20(undefined4 param_1);
template<class... A> int FUN_10525a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10525a30(void);
template<class... A> int FUN_10525a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525a40(undefined4 *param_1);
template<class... A> int FUN_10525a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525a70(undefined4 *param_1);
template<class... A> int FUN_10525a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525aa0(undefined4 *param_1);
template<class... A> int FUN_10525aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525ad0(undefined4 *param_1);
template<class... A> int FUN_10525ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525bc0(undefined4 *param_1);
template<class... A> int FUN_10525bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525be0(undefined4 *param_1);
template<class... A> int FUN_10525be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525c80(undefined4 *param_1);
template<class... A> int FUN_10525c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525d00(undefined4 *param_1);
template<class... A> int FUN_10525d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10525d20(undefined4 param_1);
template<class... A> int FUN_10525d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525d30(undefined4 *param_1);
template<class... A> int FUN_10525d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10525d50(undefined4 *param_1);
template<class... A> int FUN_10525d50(A...);
/* WARNING: Removing unreachable block_10528d90 (ram,0x101ba14a) */ void __fastcall FUN_10528d90(undefined4 *param_1);
/* WARNING: Removing unreachable block_10528db0 (ram,0x101ba14a) */ void __fastcall FUN_10528db0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10529230(void);
template<class... A> int FUN_10529230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10529240(undefined4 *param_1);
template<class... A> int FUN_10529240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10529520(undefined4 *param_1);
template<class... A> int FUN_10529520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10529530(undefined4 *param_1);
template<class... A> int FUN_10529530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10529740(undefined4 *param_1);
template<class... A> int FUN_10529740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10529d70(undefined4 *param_1);
template<class... A> int FUN_10529d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1052a0a0(undefined4 *param_1);
template<class... A> int FUN_1052a0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1052a800(undefined4 *param_1);
template<class... A> int FUN_1052a800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1052a820(undefined4 *param_1);
template<class... A> int FUN_1052a820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1052aae0(int *param_1);
template<class... A> int FUN_1052aae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052aaf0(undefined4 *param_1);
template<class... A> int FUN_1052aaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1052ab00(int *param_1);
template<class... A> int FUN_1052ab00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1052ab10(int *param_1);
template<class... A> int FUN_1052ab10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1052ab20(int *param_1);
template<class... A> int FUN_1052ab20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1052ab30(int *param_1);
template<class... A> int FUN_1052ab30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ab40(int param_1);
template<class... A> int FUN_1052ab40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ab50(int param_1);
template<class... A> int FUN_1052ab50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ab60(int param_1);
template<class... A> int FUN_1052ab60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ab70(undefined4 *param_1);
template<class... A> int FUN_1052ab70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ab80(undefined4 *param_1);
template<class... A> int FUN_1052ab80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ab90(undefined4 *param_1);
template<class... A> int FUN_1052ab90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052aba0(undefined4 *param_1);
template<class... A> int FUN_1052aba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052abb0(undefined4 *param_1);
template<class... A> int FUN_1052abb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052abc0(undefined4 *param_1);
template<class... A> int FUN_1052abc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052abd0(undefined4 *param_1);
template<class... A> int FUN_1052abd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052abe0(undefined4 *param_1);
template<class... A> int FUN_1052abe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052abf0(undefined4 *param_1);
template<class... A> int FUN_1052abf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ac00(undefined4 *param_1);
template<class... A> int FUN_1052ac00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ac10(undefined4 *param_1);
template<class... A> int FUN_1052ac10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ac20(undefined4 *param_1);
template<class... A> int FUN_1052ac20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052ac30(undefined4 *param_1);
template<class... A> int FUN_1052ac30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1052ac40(int *param_1);
template<class... A> int FUN_1052ac40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1052ac70(int param_1);
template<class... A> int FUN_1052ac70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1052c7f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1052c7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052c800(undefined4 param_1);
template<class... A> int FUN_1052c800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052c810(undefined4 param_1);
template<class... A> int FUN_1052c810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052c820(undefined4 param_1);
template<class... A> int FUN_1052c820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052c830(undefined4 param_1);
template<class... A> int FUN_1052c830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1052c840(undefined4 param_1);
template<class... A> int FUN_1052c840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1052c870(int param_1);
template<class... A> int FUN_1052c870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1052c880(int param_1);
template<class... A> int FUN_1052c880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1052c890(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1052c890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_1052c910(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1052c910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1052c940(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1052c940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1052c970(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1052c970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1052dc60(uint param_1);
template<class... A> int FUN_1052dc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1052e140(int param_1);
template<class... A> int FUN_1052e140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1052e920(int *param_1);
template<class... A> int FUN_1052e920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1052e930(int param_1);
template<class... A> int FUN_1052e930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1052e940(undefined4 *param_1);
template<class... A> int FUN_1052e940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10532840(int param_1,int param_2);
template<class... A> int FUN_10532840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10532ed0(int param_1);
template<class... A> int FUN_10532ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10532ee0(int param_1);
template<class... A> int FUN_10532ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10532ef0(int *param_1);
template<class... A> int FUN_10532ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105333b0(int param_1);
template<class... A> int FUN_105333b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105333c0(int param_1);
template<class... A> int FUN_105333c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10533bc0(undefined1 *param_1,undefined4 param_2);
template<class... A> int FUN_10533bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10533c50(int param_1);
template<class... A> int FUN_10533c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10533c60(int param_1);
template<class... A> int FUN_10533c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10533f80(int param_1);
template<class... A> int FUN_10533f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10533f90(int param_1);
template<class... A> int FUN_10533f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10533fc0(int param_1);
template<class... A> int FUN_10533fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10533fd0(int param_1);
template<class... A> int FUN_10533fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10533fe0(int param_1);
template<class... A> int FUN_10533fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105345d0(int param_1);
template<class... A> int FUN_105345d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105345e0(int param_1);
template<class... A> int FUN_105345e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10534610(int param_1);
template<class... A> int FUN_10534610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10534640(int param_1);
template<class... A> int FUN_10534640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10534650(int param_1);
template<class... A> int FUN_10534650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10534ee0(int param_1);
template<class... A> int FUN_10534ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10534ef0(int param_1);
template<class... A> int FUN_10534ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10534f90(int param_1);
template<class... A> int FUN_10534f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10535040(int param_1);
template<class... A> int FUN_10535040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105354d0(int param_1);
template<class... A> int FUN_105354d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105354e0(int param_1);
template<class... A> int FUN_105354e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105355f0(int param_1);
template<class... A> int FUN_105355f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10535600(int param_1);
template<class... A> int FUN_10535600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10535d80(int param_1);
template<class... A> int FUN_10535d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10536030(void);
template<class... A> int FUN_10536030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10536040(void);
template<class... A> int FUN_10536040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105367f0(int param_1);
template<class... A> int FUN_105367f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10536830(int param_1);
template<class... A> int FUN_10536830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10536840(undefined4 param_1);
template<class... A> int FUN_10536840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10536de0(int param_1);
template<class... A> int FUN_10536de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1053d750(int param_1);
template<class... A> int FUN_1053d750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1053d760(int param_1);
template<class... A> int FUN_1053d760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1053d900(int param_1);
template<class... A> int FUN_1053d900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1053e480(int param_1);
template<class... A> int FUN_1053e480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1053e490(void);
template<class... A> int FUN_1053e490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1053f420(int param_1);
template<class... A> int FUN_1053f420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10540fe0(int param_1);
template<class... A> int FUN_10540fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10540ff0(int *param_1);
template<class... A> int FUN_10540ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10541000(int *param_1);
template<class... A> int FUN_10541000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10541010(int *param_1);
template<class... A> int FUN_10541010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10541020(int param_1);
template<class... A> int FUN_10541020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10541070(int param_1);
template<class... A> int FUN_10541070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10541230(int *param_1);
template<class... A> int FUN_10541230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10541240(int *param_1);
template<class... A> int FUN_10541240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10541250(int *param_1);
template<class... A> int FUN_10541250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10541260(int *param_1);
template<class... A> int FUN_10541260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10541270(int *param_1);
template<class... A> int FUN_10541270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10541280(int *param_1);
template<class... A> int FUN_10541280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10541690(int param_1);
template<class... A> int FUN_10541690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_105416a0(int param_1);
template<class... A> int FUN_105416a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105418b0(uint param_1);
template<class... A> int FUN_105418b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10541c20(int param_1);
template<class... A> int FUN_10541c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10541e80(void);
template<class... A> int FUN_10541e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10541e90(void);
template<class... A> int FUN_10541e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105452b0(undefined4 *param_1);
template<class... A> int FUN_105452b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105452c0(undefined4 *param_1);
template<class... A> int FUN_105452c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105452d0(undefined4 *param_1);
template<class... A> int FUN_105452d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10545a20(undefined4 *param_1);
template<class... A> int FUN_10545a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10545a50(undefined4 *param_1);
template<class... A> int FUN_10545a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10545a80(undefined4 *param_1);
template<class... A> int FUN_10545a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10545ab0(undefined4 *param_1);
template<class... A> int FUN_10545ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10545ae0(undefined4 *param_1);
template<class... A> int FUN_10545ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10545b10(undefined4 *param_1);
template<class... A> int FUN_10545b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10545b40(int *param_1);
template<class... A> int FUN_10545b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10545b60(int *param_1);
template<class... A> int FUN_10545b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1054b270(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1054b270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1054b290(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1054b290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1054b2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1054b2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1054c320(void);
template<class... A> int FUN_1054c320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054c330(undefined4 *param_1);
template<class... A> int FUN_1054c330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054c360(undefined4 *param_1);
template<class... A> int FUN_1054c360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054c3d0(undefined4 *param_1);
template<class... A> int FUN_1054c3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1054c940(undefined4 *param_1);
template<class... A> int FUN_1054c940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1054caa0(int param_1);
template<class... A> int FUN_1054caa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1054d020(void);
template<class... A> int FUN_1054d020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1054d600(undefined4 *param_1);
template<class... A> int FUN_1054d600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054d6d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1054d6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054d6f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1054d6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054d710(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1054d710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054d770(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1054d770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054d9b0(void);
template<class... A> int FUN_1054d9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054d9c0(void);
template<class... A> int FUN_1054d9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054d9e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1054d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054d9f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1054d9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1054da00(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1054da00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054da30(void);
template<class... A> int FUN_1054da30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054da40(void);
template<class... A> int FUN_1054da40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054e2b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1054e2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e370(undefined4 param_1);
template<class... A> int FUN_1054e370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e380(undefined4 *param_1);
template<class... A> int FUN_1054e380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e390(undefined4 *param_1);
template<class... A> int FUN_1054e390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e3a0(undefined4 param_1);
template<class... A> int FUN_1054e3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e3b0(int param_1,SCStr *param_2);
template<class... A> int FUN_1054e3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1054e3e0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1054e3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1054e410(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_1054e410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e5d0(undefined4 param_1);
template<class... A> int FUN_1054e5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e5e0(undefined4 param_1);
template<class... A> int FUN_1054e5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1054e690(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1054e690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e760(undefined4 param_1);
template<class... A> int FUN_1054e760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e770(undefined4 param_1);
template<class... A> int FUN_1054e770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e780(undefined4 param_1);
template<class... A> int FUN_1054e780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e790(undefined4 param_1);
template<class... A> int FUN_1054e790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e7a0(undefined4 param_1);
template<class... A> int FUN_1054e7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e7b0(undefined4 param_1);
template<class... A> int FUN_1054e7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e7c0(undefined4 param_1);
template<class... A> int FUN_1054e7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054e7d0(undefined4 param_1);
template<class... A> int FUN_1054e7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054e7e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1054e7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054e7f0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_1054e7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054e820(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1054e820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054e850(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1054e850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054e880(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1054e880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1054e8b0(void);
template<class... A> int FUN_1054e8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1054e9c0(int *param_1,int *param_2);
template<class... A> int FUN_1054e9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eab0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1054eab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054ead0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1054ead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eaf0(undefined4 param_1);
template<class... A> int FUN_1054eaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eb00(undefined4 param_1);
template<class... A> int FUN_1054eb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eb10(undefined4 param_1);
template<class... A> int FUN_1054eb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eb20(undefined4 param_1);
template<class... A> int FUN_1054eb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eb30(undefined4 param_1);
template<class... A> int FUN_1054eb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eb40(undefined4 param_1);
template<class... A> int FUN_1054eb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eb50(undefined4 param_1);
template<class... A> int FUN_1054eb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eb60(undefined4 param_1);
template<class... A> int FUN_1054eb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1054eb70(undefined4 param_1);
template<class... A> int FUN_1054eb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054ee10(undefined4 *param_1);
template<class... A> int FUN_1054ee10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054efc0(undefined4 *param_1);
template<class... A> int FUN_1054efc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f040(undefined4 *param_1);
template<class... A> int FUN_1054f040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f060(undefined4 *param_1);
template<class... A> int FUN_1054f060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1054f080(undefined4 param_1);
template<class... A> int FUN_1054f080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1054f090(undefined4 param_1);
template<class... A> int FUN_1054f090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1054f0a0(undefined4 param_1);
template<class... A> int FUN_1054f0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f0b0(undefined4 *param_1);
template<class... A> int FUN_1054f0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f100(undefined4 *param_1);
template<class... A> int FUN_1054f100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f120(undefined4 *param_1);
template<class... A> int FUN_1054f120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f460(undefined4 *param_1);
template<class... A> int FUN_1054f460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1054f470(undefined4 *param_1);
template<class... A> int FUN_1054f470(A...);
/* WARNING: Removing unreachable block_1054f910 (ram,0x101ba14a) */ void __fastcall FUN_1054f910(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10550670(undefined4 *param_1);
template<class... A> int FUN_10550670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10550680(undefined4 *param_1);
template<class... A> int FUN_10550680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10550690(int param_1);
template<class... A> int FUN_10550690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105506a0(undefined4 *param_1);
template<class... A> int FUN_105506a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105506b0(int *param_1);
template<class... A> int FUN_105506b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105506c0(int *param_1);
template<class... A> int FUN_105506c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105506d0(undefined4 *param_1);
template<class... A> int FUN_105506d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105506e0(undefined4 *param_1);
template<class... A> int FUN_105506e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105506f0(undefined4 *param_1);
template<class... A> int FUN_105506f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10550700(undefined4 *param_1);
template<class... A> int FUN_10550700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_105507a0(int *param_1);
template<class... A> int FUN_105507a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_105507b0(int *param_1);
template<class... A> int FUN_105507b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_105507c0(int *param_1);
template<class... A> int FUN_105507c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_105507d0(int *param_1);
template<class... A> int FUN_105507d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10550c80(undefined4 *param_1);
template<class... A> int FUN_10550c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10550e50(int param_1);
template<class... A> int FUN_10550e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10550e70(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10550e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10550e80(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10550e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10550e90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10550e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551420(undefined4 param_1);
template<class... A> int FUN_10551420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551430(undefined4 param_1);
template<class... A> int FUN_10551430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551440(undefined4 param_1);
template<class... A> int FUN_10551440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551450(undefined4 param_1);
template<class... A> int FUN_10551450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551460(undefined4 param_1);
template<class... A> int FUN_10551460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551470(undefined4 param_1);
template<class... A> int FUN_10551470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551480(undefined4 param_1);
template<class... A> int FUN_10551480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551490(undefined4 param_1);
template<class... A> int FUN_10551490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105514a0(undefined4 param_1);
template<class... A> int FUN_105514a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105514b0(undefined4 param_1);
template<class... A> int FUN_105514b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105514c0(undefined4 param_1);
template<class... A> int FUN_105514c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105514d0(undefined4 param_1);
template<class... A> int FUN_105514d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105514e0(undefined4 param_1);
template<class... A> int FUN_105514e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105514f0(undefined4 param_1);
template<class... A> int FUN_105514f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551500(undefined4 param_1);
template<class... A> int FUN_10551500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10551510(undefined4 param_1);
template<class... A> int FUN_10551510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10551820(int param_1);
template<class... A> int FUN_10551820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10551880(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10551880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10551890(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10551890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105518a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105518a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105518b0(int param_1);
template<class... A> int FUN_105518b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105518c0(undefined4 *param_1);
template<class... A> int FUN_105518c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10551a30(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10551a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10551b00(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10551b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10551bd0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10551bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10552060(uint param_1);
template<class... A> int FUN_10552060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105520d0(uint param_1);
template<class... A> int FUN_105520d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10552150(uint param_1);
template<class... A> int FUN_10552150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10552440(int *param_1);
template<class... A> int FUN_10552440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10552450(int *param_1);
template<class... A> int FUN_10552450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10552490(undefined4 *param_1);
template<class... A> int FUN_10552490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105524c0(int param_1);
template<class... A> int FUN_105524c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105525b0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_105525b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10552600(int param_1,int param_2);
template<class... A> int FUN_10552600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10552650(int param_1,int param_2);
template<class... A> int FUN_10552650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10552850(undefined4 *param_1);
template<class... A> int FUN_10552850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10553a10(undefined4 param_1);
template<class... A> int FUN_10553a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10553af0(int param_1);
template<class... A> int FUN_10553af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10554030(int param_1);
template<class... A> int FUN_10554030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105544f0(int param_1);
template<class... A> int FUN_105544f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10554500(int param_1);
template<class... A> int FUN_10554500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10554510(int param_1);
template<class... A> int FUN_10554510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10555a50(int *param_1);
template<class... A> int FUN_10555a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10555a60(char *param_1);
template<class... A> int FUN_10555a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10556430(int param_1);
template<class... A> int FUN_10556430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10556440(void);
template<class... A> int FUN_10556440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10556450(void);
template<class... A> int FUN_10556450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10556460(void);
template<class... A> int FUN_10556460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10556470(void);
template<class... A> int FUN_10556470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10556480(void);
template<class... A> int FUN_10556480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10556490(void);
template<class... A> int FUN_10556490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10556bd0(undefined4 param_1);
template<class... A> int FUN_10556bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10556be0(int param_1);
template<class... A> int FUN_10556be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10556bf0(undefined4 *param_1);
template<class... A> int FUN_10556bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10556c00(undefined4 *param_1);
template<class... A> int FUN_10556c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10557040(undefined4 *param_1);
template<class... A> int FUN_10557040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10557920(int param_1);
template<class... A> int FUN_10557920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10557930(int param_1);
template<class... A> int FUN_10557930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10557cd0(int param_1);
template<class... A> int FUN_10557cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10557d90(int param_1);
template<class... A> int FUN_10557d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10557fa0(int param_1);
template<class... A> int FUN_10557fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10557fb0(int param_1);
template<class... A> int FUN_10557fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10558160(int param_1);
template<class... A> int FUN_10558160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105586d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_105586d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10558710(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10558710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10558750(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10558750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10558790(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10558790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10558890(undefined4 *param_1);
template<class... A> int FUN_10558890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10558930(undefined4 *param_1);
template<class... A> int FUN_10558930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105593f0(undefined4 *param_1);
template<class... A> int FUN_105593f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10559e70(undefined4 *param_1);
template<class... A> int FUN_10559e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1055a1c0(undefined4 *param_1);
template<class... A> int FUN_1055a1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055a3e0(undefined4 *param_1);
template<class... A> int FUN_1055a3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055a3f0(undefined4 *param_1);
template<class... A> int FUN_1055a3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055a400(undefined4 *param_1);
template<class... A> int FUN_1055a400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055a410(undefined4 *param_1);
template<class... A> int FUN_1055a410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055a420(undefined4 *param_1);
template<class... A> int FUN_1055a420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055a430(undefined4 *param_1);
template<class... A> int FUN_1055a430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055cb50(undefined4 *param_1);
template<class... A> int FUN_1055cb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055cb70(undefined4 *param_1);
template<class... A> int FUN_1055cb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055cb90(undefined4 *param_1);
template<class... A> int FUN_1055cb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055cbb0(undefined4 *param_1);
template<class... A> int FUN_1055cbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055cbd0(undefined4 *param_1);
template<class... A> int FUN_1055cbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1055f450(int *param_1);
template<class... A> int FUN_1055f450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1055f460(int *param_1);
template<class... A> int FUN_1055f460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055fc50(undefined4 *param_1);
template<class... A> int FUN_1055fc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055fc60(undefined4 *param_1);
template<class... A> int FUN_1055fc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055fc70(undefined4 *param_1);
template<class... A> int FUN_1055fc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1055fc80(undefined4 *param_1);
template<class... A> int FUN_1055fc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1055fd10(undefined4 *param_1);
template<class... A> int FUN_1055fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1055fd40(undefined4 *param_1);
template<class... A> int FUN_1055fd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1055fd70(undefined4 *param_1);
template<class... A> int FUN_1055fd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1055fda0(undefined4 *param_1);
template<class... A> int FUN_1055fda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1055fdd0(undefined4 *param_1);
template<class... A> int FUN_1055fdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1055fe00(undefined4 *param_1);
template<class... A> int FUN_1055fe00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1055fe30(undefined4 *param_1);
template<class... A> int FUN_1055fe30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105616f0(undefined4 *param_1);
template<class... A> int FUN_105616f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562a00(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10562a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562ac0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10562ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562b40(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10562b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562b80(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10562b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562bc0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10562bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10562c00(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10562c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10562c40(void);
template<class... A> int FUN_10562c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10562c50(void);
template<class... A> int FUN_10562c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10562c60(void);
template<class... A> int FUN_10562c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10562d00(undefined4 *param_1);
template<class... A> int FUN_10562d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10562fd0(undefined4 *param_1);
template<class... A> int FUN_10562fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105630f0(undefined4 *param_1);
template<class... A> int FUN_105630f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10563110(undefined4 *param_1);
template<class... A> int FUN_10563110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10563770(undefined4 *param_1);
template<class... A> int FUN_10563770(A...);
/* WARNING: Removing unreachable block_105650a0 (ram,0x101ba14a) */ void __fastcall FUN_105650a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10565950(undefined4 *param_1);
template<class... A> int FUN_10565950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10565980(undefined4 *param_1);
template<class... A> int FUN_10565980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105659b0(undefined4 *param_1);
template<class... A> int FUN_105659b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105659e0(undefined4 *param_1);
template<class... A> int FUN_105659e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10565c70(undefined4 *param_1);
template<class... A> int FUN_10565c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10565d70(undefined4 *param_1);
template<class... A> int FUN_10565d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10566360(undefined4 *param_1);
template<class... A> int FUN_10566360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566c40(undefined4 *param_1);
template<class... A> int FUN_10566c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10566c50(int *param_1);
template<class... A> int FUN_10566c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566c60(undefined4 *param_1);
template<class... A> int FUN_10566c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10566c70(int *param_1);
template<class... A> int FUN_10566c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566c80(undefined4 *param_1);
template<class... A> int FUN_10566c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566c90(undefined4 *param_1);
template<class... A> int FUN_10566c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566ca0(undefined4 *param_1);
template<class... A> int FUN_10566ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566cb0(undefined4 *param_1);
template<class... A> int FUN_10566cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10566cc0(int *param_1);
template<class... A> int FUN_10566cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10566cd0(int *param_1);
template<class... A> int FUN_10566cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10566ce0(int *param_1);
template<class... A> int FUN_10566ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10566cf0(int *param_1);
template<class... A> int FUN_10566cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d00(int param_1);
template<class... A> int FUN_10566d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d10(undefined4 *param_1);
template<class... A> int FUN_10566d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d20(undefined4 *param_1);
template<class... A> int FUN_10566d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d30(undefined4 *param_1);
template<class... A> int FUN_10566d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d40(undefined4 *param_1);
template<class... A> int FUN_10566d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d50(undefined4 *param_1);
template<class... A> int FUN_10566d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d60(undefined4 *param_1);
template<class... A> int FUN_10566d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d70(undefined4 *param_1);
template<class... A> int FUN_10566d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d80(undefined4 *param_1);
template<class... A> int FUN_10566d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566d90(undefined4 *param_1);
template<class... A> int FUN_10566d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10566da0(undefined4 *param_1);
template<class... A> int FUN_10566da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105723f0(undefined4 *param_1);
template<class... A> int FUN_105723f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10572410(undefined4 *param_1);
template<class... A> int FUN_10572410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10572430(undefined4 *param_1);
template<class... A> int FUN_10572430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10572450(undefined4 *param_1);
template<class... A> int FUN_10572450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10572470(undefined4 *param_1);
template<class... A> int FUN_10572470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10572490(undefined4 *param_1);
template<class... A> int FUN_10572490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105724b0(undefined4 *param_1);
template<class... A> int FUN_105724b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105724d0(undefined4 *param_1);
template<class... A> int FUN_105724d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105724f0(undefined4 *param_1);
template<class... A> int FUN_105724f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10574850(int param_1);
template<class... A> int FUN_10574850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10574a20(int param_1);
template<class... A> int FUN_10574a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10574fa0(int param_1);
template<class... A> int FUN_10574fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10575f20(void);
template<class... A> int FUN_10575f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10575f30(void);
template<class... A> int FUN_10575f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10575f40(void);
template<class... A> int FUN_10575f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10576060(int param_1);
template<class... A> int FUN_10576060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10576070(int *param_1);
template<class... A> int FUN_10576070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105782f0(undefined4 *param_1);
template<class... A> int FUN_105782f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10578300(undefined4 *param_1);
template<class... A> int FUN_10578300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10578310(undefined4 *param_1);
template<class... A> int FUN_10578310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10578320(undefined4 *param_1);
template<class... A> int FUN_10578320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10578330(undefined4 *param_1);
template<class... A> int FUN_10578330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10578340(undefined4 *param_1);
template<class... A> int FUN_10578340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105785b0(undefined4 *param_1);
template<class... A> int FUN_105785b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105785e0(undefined4 *param_1);
template<class... A> int FUN_105785e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578610(undefined4 *param_1);
template<class... A> int FUN_10578610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578640(undefined4 *param_1);
template<class... A> int FUN_10578640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578670(undefined4 *param_1);
template<class... A> int FUN_10578670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105786a0(undefined4 *param_1);
template<class... A> int FUN_105786a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105786d0(undefined4 *param_1);
template<class... A> int FUN_105786d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578700(undefined4 *param_1);
template<class... A> int FUN_10578700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578730(undefined4 *param_1);
template<class... A> int FUN_10578730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578760(undefined4 *param_1);
template<class... A> int FUN_10578760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578790(undefined4 *param_1);
template<class... A> int FUN_10578790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105787c0(undefined4 *param_1);
template<class... A> int FUN_105787c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105787f0(undefined4 *param_1);
template<class... A> int FUN_105787f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578820(int *param_1);
template<class... A> int FUN_10578820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578840(int *param_1);
template<class... A> int FUN_10578840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578860(int *param_1);
template<class... A> int FUN_10578860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10578880(int *param_1);
template<class... A> int FUN_10578880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105797d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_105797d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10579810(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10579810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105798d0(undefined4 *param_1);
template<class... A> int FUN_105798d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1057a330(undefined4 *param_1);
template<class... A> int FUN_1057a330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057b150(undefined4 *param_1);
template<class... A> int FUN_1057b150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057b180(undefined4 *param_1);
template<class... A> int FUN_1057b180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057b1b0(undefined4 *param_1);
template<class... A> int FUN_1057b1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1057bd90(undefined4 *param_1);
template<class... A> int FUN_1057bd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1057c080(undefined4 *param_1);
template<class... A> int FUN_1057c080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1057c090(undefined4 *param_1);
template<class... A> int FUN_1057c090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1057c0a0(int *param_1);
template<class... A> int FUN_1057c0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1057c0b0(int *param_1);
template<class... A> int FUN_1057c0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1057c0c0(undefined4 *param_1);
template<class... A> int FUN_1057c0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105807c0(undefined4 *param_1);
template<class... A> int FUN_105807c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105807e0(undefined4 *param_1);
template<class... A> int FUN_105807e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105855a0(int *param_1);
template<class... A> int FUN_105855a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10585680(int *param_1);
template<class... A> int FUN_10585680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10585740(uint *param_1);
template<class... A> int FUN_10585740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105858e0(undefined4 *param_1);
template<class... A> int FUN_105858e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105858f0(undefined4 *param_1);
template<class... A> int FUN_105858f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10585bc0(undefined4 *param_1);
template<class... A> int FUN_10585bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10585bf0(undefined4 *param_1);
template<class... A> int FUN_10585bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10585c20(undefined4 *param_1);
template<class... A> int FUN_10585c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10586000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10586000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10586020(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10586020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586030(int *param_1,int *param_2);
template<class... A> int FUN_10586030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105860a0(int *param_1,int *param_2);
template<class... A> int FUN_105860a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10586110(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10586110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10586130(void);
template<class... A> int FUN_10586130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586240(undefined4 *param_1);
template<class... A> int FUN_10586240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586250(undefined4 *param_1);
template<class... A> int FUN_10586250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10586260(int *param_1,int *param_2);
template<class... A> int FUN_10586260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10586280(void);
template<class... A> int FUN_10586280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586290(undefined4 param_1);
template<class... A> int FUN_10586290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105862a0(undefined4 param_1);
template<class... A> int FUN_105862a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105862b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_105862b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105862f0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_105862f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586330(int param_1,int param_2,int param_3);
template<class... A> int FUN_10586330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586380(int param_1,int param_2,int param_3);
template<class... A> int FUN_10586380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105863d0(undefined4 param_1);
template<class... A> int FUN_105863d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105863e0(void);
template<class... A> int FUN_105863e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_105863f0(void);
template<class... A> int FUN_105863f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586400(undefined4 param_1);
template<class... A> int FUN_10586400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10586410(undefined4 param_1);
template<class... A> int FUN_10586410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105864b0(undefined4 *param_1);
template<class... A> int FUN_105864b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105864e0(undefined4 *param_1);
template<class... A> int FUN_105864e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105866f0(undefined4 *param_1);
template<class... A> int FUN_105866f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10586890(undefined4 param_1);
template<class... A> int FUN_10586890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10587d40(undefined4 *param_1);
template<class... A> int FUN_10587d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10587d50(undefined4 *param_1);
template<class... A> int FUN_10587d50(A...);
/* WARNING: Removing unreachable block_10588050 (ram,0x101ba14a) */ void __fastcall FUN_10588050(undefined4 *param_1);
/* WARNING: Removing unreachable block_10588060 (ram,0x101ba14a) */ void __fastcall FUN_10588060(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105883a0(undefined4 *param_1);
template<class... A> int FUN_105883a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10588b10(undefined4 *param_1);
template<class... A> int FUN_10588b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10588b30(undefined4 *param_1);
template<class... A> int FUN_10588b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10588eb0(undefined4 *param_1);
template<class... A> int FUN_10588eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10588ec0(int *param_1);
template<class... A> int FUN_10588ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10588ed0(int param_1);
template<class... A> int FUN_10588ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10588ee0(undefined4 *param_1);
template<class... A> int FUN_10588ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10589c10(undefined4 *param_1);
template<class... A> int FUN_10589c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10589c20(int param_1);
template<class... A> int FUN_10589c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1058c240(int param_1);
template<class... A> int FUN_1058c240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1058c250(undefined4 *param_1);
template<class... A> int FUN_1058c250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1058c270(undefined4 *param_1);
template<class... A> int FUN_1058c270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1058c450(int param_1);
template<class... A> int FUN_1058c450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1058dfd0(int param_1);
template<class... A> int FUN_1058dfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10590fa0(void);
template<class... A> int FUN_10590fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10591830(int param_1);
template<class... A> int FUN_10591830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10591840(int param_1);
template<class... A> int FUN_10591840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_105918b0(int param_1);
template<class... A> int FUN_105918b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105922d0(undefined4 *param_1);
template<class... A> int FUN_105922d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105922e0(undefined4 *param_1);
template<class... A> int FUN_105922e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10592530(undefined4 *param_1);
template<class... A> int FUN_10592530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10592560(undefined4 *param_1);
template<class... A> int FUN_10592560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10592590(undefined4 *param_1);
template<class... A> int FUN_10592590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105925c0(undefined4 *param_1);
template<class... A> int FUN_105925c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105926b0(int param_1);
template<class... A> int FUN_105926b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10592920(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10592920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10592950(undefined4 param_1);
template<class... A> int FUN_10592950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10593020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10593020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10593040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10593040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105931c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_105931c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10593300(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10593300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593580(void);
template<class... A> int FUN_10593580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593750(void);
template<class... A> int FUN_10593750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593770(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10593770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593780(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10593780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593840(void);
template<class... A> int FUN_10593840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593930(int param_1,int param_2);
template<class... A> int FUN_10593930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593e90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10593e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10593f30(undefined4 *param_1);
template<class... A> int FUN_10593f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10593f40(undefined4 *param_1);
template<class... A> int FUN_10593f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10593f50(undefined4 *param_1);
template<class... A> int FUN_10593f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10593f60(undefined4 param_1);
template<class... A> int FUN_10593f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10593f70(int param_1,SCStr *param_2);
template<class... A> int FUN_10593f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10593fa0(void);
template<class... A> int FUN_10593fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10594120(undefined4 param_1);
template<class... A> int FUN_10594120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10594130(undefined4 param_1);
template<class... A> int FUN_10594130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105942a0(undefined4 param_1);
template<class... A> int FUN_105942a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105942b0(undefined4 param_1);
template<class... A> int FUN_105942b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105942c0(undefined4 param_1);
template<class... A> int FUN_105942c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105942d0(undefined4 param_1);
template<class... A> int FUN_105942d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105942e0(undefined4 param_1);
template<class... A> int FUN_105942e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105942f0(undefined4 param_1);
template<class... A> int FUN_105942f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10594300(undefined4 param_1);
template<class... A> int FUN_10594300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10594310(int *param_1,int param_2);
template<class... A> int FUN_10594310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10594330(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10594330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105944c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_105944c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105945f0(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_105945f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10594600(int param_1,int param_2);
template<class... A> int FUN_10594600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10594760(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10594760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10594780(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10594780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105947a0(undefined4 param_1);
template<class... A> int FUN_105947a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105947b0(undefined4 param_1);
template<class... A> int FUN_105947b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105947c0(undefined4 param_1);
template<class... A> int FUN_105947c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105947d0(undefined4 param_1);
template<class... A> int FUN_105947d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105947e0(undefined4 param_1);
template<class... A> int FUN_105947e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105947f0(undefined4 param_1);
template<class... A> int FUN_105947f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10594800(undefined4 param_1);
template<class... A> int FUN_10594800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10594810(undefined4 param_1);
template<class... A> int FUN_10594810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10594960(undefined4 param_1);
template<class... A> int FUN_10594960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10594970(int param_1,int param_2);
template<class... A> int FUN_10594970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105949d0(undefined4 *param_1);
template<class... A> int FUN_105949d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10594b40(undefined4 *param_1);
template<class... A> int FUN_10594b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10594ba0(undefined4 *param_1);
template<class... A> int FUN_10594ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10594bc0(undefined4 *param_1);
template<class... A> int FUN_10594bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10594be0(undefined4 param_1);
template<class... A> int FUN_10594be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10594bf0(undefined4 param_1);
template<class... A> int FUN_10594bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10594c00(undefined4 *param_1);
template<class... A> int FUN_10594c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10594cd0(undefined4 *param_1);
template<class... A> int FUN_10594cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105958f0(int *param_1);
template<class... A> int FUN_105958f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10595900(undefined4 *param_1);
template<class... A> int FUN_10595900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10595910(undefined4 *param_1);
template<class... A> int FUN_10595910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10595920(int *param_1);
template<class... A> int FUN_10595920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10595930(int *param_1);
template<class... A> int FUN_10595930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10595ba0(undefined4 *param_1);
template<class... A> int FUN_10595ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10595da0(int param_1);
template<class... A> int FUN_10595da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __stdcall FUN_10595f50(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10595f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10596070(undefined4 param_1);
template<class... A> int FUN_10596070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10596080(undefined4 param_1);
template<class... A> int FUN_10596080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105963f0(undefined4 param_1);
template<class... A> int FUN_105963f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596400(undefined4 param_1);
template<class... A> int FUN_10596400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596410(undefined4 param_1);
template<class... A> int FUN_10596410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596420(undefined4 param_1);
template<class... A> int FUN_10596420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596430(undefined4 param_1);
template<class... A> int FUN_10596430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596440(undefined4 param_1);
template<class... A> int FUN_10596440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596450(undefined4 param_1);
template<class... A> int FUN_10596450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596460(undefined4 param_1);
template<class... A> int FUN_10596460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596470(undefined4 param_1);
template<class... A> int FUN_10596470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596480(undefined4 param_1);
template<class... A> int FUN_10596480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596490(undefined4 param_1);
template<class... A> int FUN_10596490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105964a0(undefined4 param_1);
template<class... A> int FUN_105964a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105964b0(undefined4 param_1);
template<class... A> int FUN_105964b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105964c0(undefined4 param_1);
template<class... A> int FUN_105964c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105964d0(undefined4 param_1);
template<class... A> int FUN_105964d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105964e0(undefined4 param_1);
template<class... A> int FUN_105964e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105967f0(int param_1);
template<class... A> int FUN_105967f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10596850(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10596850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10596860(int param_1);
template<class... A> int FUN_10596860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10596870(undefined4 *param_1);
template<class... A> int FUN_10596870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10596880(undefined4 *param_1);
template<class... A> int FUN_10596880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10596ae0(uint param_1);
template<class... A> int FUN_10596ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10596b60(uint param_1);
template<class... A> int FUN_10596b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10596be0(uint param_1);
template<class... A> int FUN_10596be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10596d40(int *param_1);
template<class... A> int FUN_10596d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10597050(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10597050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105970a0(int param_1,int param_2);
template<class... A> int FUN_105970a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10597390(int param_1);
template<class... A> int FUN_10597390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10597910(undefined4 param_1);
template<class... A> int FUN_10597910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10597920(int param_1);
template<class... A> int FUN_10597920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10597c20(int param_1);
template<class... A> int FUN_10597c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10598490(void);
template<class... A> int FUN_10598490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105984a0(void);
template<class... A> int FUN_105984a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105984b0(void);
template<class... A> int FUN_105984b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105984c0(void);
template<class... A> int FUN_105984c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105987e0(undefined4 param_1);
template<class... A> int FUN_105987e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10598f40(undefined4 *param_1);
template<class... A> int FUN_10598f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10599150(undefined4 *param_1);
template<class... A> int FUN_10599150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059a140(undefined4 param_1);
template<class... A> int FUN_1059a140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059a5e0(int param_1);
template<class... A> int FUN_1059a5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1059a5f0(int *param_1);
template<class... A> int FUN_1059a5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1059a610(int *param_1);
template<class... A> int FUN_1059a610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059a820(void);
template<class... A> int FUN_1059a820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * FUN_1059a930(uint *param_1,uint *param_2);
template<class... A> int FUN_1059a930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_1059b0b0(undefined4 param_1);
template<class... A> int FUN_1059b0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059b380(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1059b380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059b3c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1059b3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059b420(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1059b420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1059b600(int param_1);
template<class... A> int FUN_1059b600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059b610(undefined4 *param_1);
template<class... A> int FUN_1059b610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059b620(void);
template<class... A> int FUN_1059b620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059b640(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1059b640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059b650(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1059b650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059b660(void);
template<class... A> int FUN_1059b660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059b7c0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1059b7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059b7e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1059b7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059b800(undefined4 param_1);
template<class... A> int FUN_1059b800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1059b810(int param_1,uint *param_2);
template<class... A> int FUN_1059b810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059b9a0(undefined4 param_1);
template<class... A> int FUN_1059b9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059b9b0(undefined4 param_1);
template<class... A> int FUN_1059b9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059b9c0(undefined4 param_1);
template<class... A> int FUN_1059b9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059b9d0(undefined4 param_1);
template<class... A> int FUN_1059b9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059b9e0(undefined4 param_1);
template<class... A> int FUN_1059b9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059b9f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_1059b9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ba10(void);
template<class... A> int FUN_1059ba10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1059ba20(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_1059ba20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059ba70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1059ba70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059ba90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1059ba90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059bab0(undefined4 param_1);
template<class... A> int FUN_1059bab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059bac0(undefined4 param_1);
template<class... A> int FUN_1059bac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059bad0(undefined4 param_1);
template<class... A> int FUN_1059bad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059bae0(undefined4 param_1);
template<class... A> int FUN_1059bae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059bb10(undefined4 *param_1);
template<class... A> int FUN_1059bb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059bc70(undefined4 *param_1);
template<class... A> int FUN_1059bc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059bc90(undefined4 param_1);
template<class... A> int FUN_1059bc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059bca0(undefined4 *param_1);
template<class... A> int FUN_1059bca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059bf50(void);
template<class... A> int FUN_1059bf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059bfc0(int param_1);
template<class... A> int FUN_1059bfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059bfe0(int param_1);
template<class... A> int FUN_1059bfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */void __fastcall FUN_1059c000(int *param_1);
template<class... A> int FUN_1059c000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1059c310(int param_1);
template<class... A> int FUN_1059c310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1059c320(int *param_1);
template<class... A> int FUN_1059c320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1059c330(int *param_1);
template<class... A> int FUN_1059c330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1059c340(int *param_1);
template<class... A> int FUN_1059c340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059c5d0(undefined4 *param_1);
template<class... A> int FUN_1059c5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059c620(int param_1);
template<class... A> int FUN_1059c620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059c640(int param_1);
template<class... A> int FUN_1059c640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1059c6b0(undefined4 param_1);
template<class... A> int FUN_1059c6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059ca50(undefined4 param_1);
template<class... A> int FUN_1059ca50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059ca60(undefined4 param_1);
template<class... A> int FUN_1059ca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059ca70(undefined4 param_1);
template<class... A> int FUN_1059ca70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059ca80(undefined4 param_1);
template<class... A> int FUN_1059ca80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059ca90(undefined4 param_1);
template<class... A> int FUN_1059ca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059caa0(undefined4 param_1);
template<class... A> int FUN_1059caa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059cab0(undefined4 param_1);
template<class... A> int FUN_1059cab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059cac0(undefined4 param_1);
template<class... A> int FUN_1059cac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059cdd0(int param_1);
template<class... A> int FUN_1059cdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1059ce30(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1059ce30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059ce40(int param_1);
template<class... A> int FUN_1059ce40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059ced0(uint param_1);
template<class... A> int FUN_1059ced0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 __fastcall FUN_1059cf60(undefined8 *param_1);
template<class... A> int FUN_1059cf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059cf70(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1059cf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1059cfc0(int param_1,int param_2);
template<class... A> int FUN_1059cfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1059d010(int param_1);
template<class... A> int FUN_1059d010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059d090(undefined4 *param_1);
template<class... A> int FUN_1059d090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1059d110(int param_1);
template<class... A> int FUN_1059d110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059d1c0(void);
template<class... A> int FUN_1059d1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059d1d0(void);
template<class... A> int FUN_1059d1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059d2e0(undefined4 param_1);
template<class... A> int FUN_1059d2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059d310(int param_1);
template<class... A> int FUN_1059d310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1059d320(int param_1);
template<class... A> int FUN_1059d320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059e2b0(undefined4 *param_1);
template<class... A> int FUN_1059e2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059e680(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1059e680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059e6a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1059e6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059e6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1059e6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059e700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1059e700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059e810(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1059e810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059e830(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1059e830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059e8a0(void);
template<class... A> int FUN_1059e8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059e8b0(void);
template<class... A> int FUN_1059e8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ebf0(void);
template<class... A> int FUN_1059ebf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ec10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1059ec10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ec20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1059ec20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ec30(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1059ec30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ec60(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1059ec60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ec90(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1059ec90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059ecc0(int param_1,int param_2,int param_3);
template<class... A> int FUN_1059ecc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ed00(void);
template<class... A> int FUN_1059ed00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ed10(void);
template<class... A> int FUN_1059ed10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ed20(void);
template<class... A> int FUN_1059ed20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ed30(void);
template<class... A> int FUN_1059ed30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059ed70(int param_1,int param_2);
template<class... A> int FUN_1059ed70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f200(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1059f200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f220(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1059f220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f240(undefined4 *param_1);
template<class... A> int FUN_1059f240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f250(undefined4 *param_1);
template<class... A> int FUN_1059f250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f260(undefined4 *param_1);
template<class... A> int FUN_1059f260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f270(undefined4 *param_1);
template<class... A> int FUN_1059f270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f280(undefined4 *param_1);
template<class... A> int FUN_1059f280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f290(undefined4 param_1);
template<class... A> int FUN_1059f290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1059f2a0(int param_1,uint *param_2);
template<class... A> int FUN_1059f2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f2d0(void);
template<class... A> int FUN_1059f2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f2e0(void);
template<class... A> int FUN_1059f2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f2f0(undefined4 param_1);
template<class... A> int FUN_1059f2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f430(undefined4 *param_1);
template<class... A> int FUN_1059f430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_1059f440(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1059f440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_1059f470(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1059f470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f530(undefined4 param_1);
template<class... A> int FUN_1059f530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f540(undefined4 param_1);
template<class... A> int FUN_1059f540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f550(undefined4 param_1);
template<class... A> int FUN_1059f550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f560(undefined4 param_1);
template<class... A> int FUN_1059f560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f570(undefined4 param_1);
template<class... A> int FUN_1059f570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f580(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1059f580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f5b0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1059f5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f670(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1059f670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1059f6a0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1059f6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f6d0(undefined4 param_1);
template<class... A> int FUN_1059f6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f6e0(undefined4 param_1);
template<class... A> int FUN_1059f6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f6f0(undefined4 param_1);
template<class... A> int FUN_1059f6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f700(undefined4 param_1);
template<class... A> int FUN_1059f700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f710(undefined4 param_1);
template<class... A> int FUN_1059f710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f720(undefined4 param_1);
template<class... A> int FUN_1059f720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f730(undefined4 param_1);
template<class... A> int FUN_1059f730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f740(undefined4 param_1);
template<class... A> int FUN_1059f740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f750(int *param_1,int param_2);
template<class... A> int FUN_1059f750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1059f770(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1059f770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1059f790(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1059f790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f7b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1059f7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f7c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1059f7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f7d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_1059f7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1059f7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f810(void);
template<class... A> int FUN_1059f810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f820(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_1059f820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f830(undefined4 param_1,int param_2);
template<class... A> int FUN_1059f830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059f850(int param_1,int param_2);
template<class... A> int FUN_1059f850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059f860(int param_1,int param_2);
template<class... A> int FUN_1059f860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f8e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1059f8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1059f900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f920(undefined4 param_1);
template<class... A> int FUN_1059f920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f930(undefined4 param_1);
template<class... A> int FUN_1059f930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f940(undefined4 param_1);
template<class... A> int FUN_1059f940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f950(undefined4 param_1);
template<class... A> int FUN_1059f950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f960(undefined4 param_1);
template<class... A> int FUN_1059f960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f970(undefined4 param_1);
template<class... A> int FUN_1059f970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f980(undefined4 param_1);
template<class... A> int FUN_1059f980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f990(undefined4 param_1);
template<class... A> int FUN_1059f990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f9a0(undefined4 param_1);
template<class... A> int FUN_1059f9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f9b0(undefined4 param_1);
template<class... A> int FUN_1059f9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f9c0(undefined4 param_1);
template<class... A> int FUN_1059f9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1059f9d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_1059f9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f9e0(undefined4 param_1);
template<class... A> int FUN_1059f9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1059f9f0(undefined4 param_1);
template<class... A> int FUN_1059f9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1059fa00(int param_1,int param_2);
template<class... A> int FUN_1059fa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fb30(undefined4 *param_1);
template<class... A> int FUN_1059fb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fb70(undefined4 *param_1);
template<class... A> int FUN_1059fb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fb90(undefined4 *param_1);
template<class... A> int FUN_1059fb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059fbb0(undefined4 param_1);
template<class... A> int FUN_1059fbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059fbc0(undefined4 param_1);
template<class... A> int FUN_1059fbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1059fbd0(undefined4 param_1);
template<class... A> int FUN_1059fbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fbe0(undefined4 *param_1);
template<class... A> int FUN_1059fbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fcc0(undefined4 *param_1);
template<class... A> int FUN_1059fcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fd60(undefined4 *param_1);
template<class... A> int FUN_1059fd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1059fed0(undefined4 *param_1);
template<class... A> int FUN_1059fed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a00a0(undefined4 *param_1);
template<class... A> int FUN_105a00a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a00b0(undefined4 *param_1);
template<class... A> int FUN_105a00b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a0110(int param_1);
template<class... A> int FUN_105a0110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */void __fastcall FUN_105a0180(int *param_1);
template<class... A> int FUN_105a0180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a0ad0(int *param_1);
template<class... A> int FUN_105a0ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a0ae0(int *param_1);
template<class... A> int FUN_105a0ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a0af0(int *param_1);
template<class... A> int FUN_105a0af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a0b00(int *param_1);
template<class... A> int FUN_105a0b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_105a0c60(int *param_1,int *param_2);
template<class... A> int FUN_105a0c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a0dd0(undefined4 *param_1);
template<class... A> int FUN_105a0dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a11d0(int param_1);
template<class... A> int FUN_105a11d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a14d0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105a14d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __stdcall FUN_105a14f0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105a14f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1510(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a1510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1520(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a1520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1530(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a1530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a15b0(undefined4 param_1);
template<class... A> int FUN_105a15b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a15c0(undefined4 param_1);
template<class... A> int FUN_105a15c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a15d0(undefined4 param_1);
template<class... A> int FUN_105a15d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a15e0(undefined4 param_1);
template<class... A> int FUN_105a15e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a15f0(undefined4 param_1);
template<class... A> int FUN_105a15f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1600(undefined4 param_1);
template<class... A> int FUN_105a1600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1610(undefined4 param_1);
template<class... A> int FUN_105a1610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1620(undefined4 param_1);
template<class... A> int FUN_105a1620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1630(undefined4 param_1);
template<class... A> int FUN_105a1630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1640(undefined4 param_1);
template<class... A> int FUN_105a1640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1650(undefined4 param_1);
template<class... A> int FUN_105a1650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1660(undefined4 param_1);
template<class... A> int FUN_105a1660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1670(undefined4 param_1);
template<class... A> int FUN_105a1670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1680(undefined4 param_1);
template<class... A> int FUN_105a1680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1690(undefined4 param_1);
template<class... A> int FUN_105a1690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a16a0(undefined4 param_1);
template<class... A> int FUN_105a16a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a16b0(undefined4 param_1);
template<class... A> int FUN_105a16b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a16c0(undefined4 param_1);
template<class... A> int FUN_105a16c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a16d0(undefined4 param_1);
template<class... A> int FUN_105a16d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a16e0(undefined4 param_1);
template<class... A> int FUN_105a16e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a16f0(undefined4 param_1);
template<class... A> int FUN_105a16f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1700(undefined4 param_1);
template<class... A> int FUN_105a1700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1720(undefined4 param_1);
template<class... A> int FUN_105a1720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1740(undefined4 param_1);
template<class... A> int FUN_105a1740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_105a1a50(int *param_1);
template<class... A> int FUN_105a1a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1a80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a1a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1a90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a1a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a1aa0(int param_1);
template<class... A> int FUN_105a1aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a1ab0(undefined4 *param_1);
template<class... A> int FUN_105a1ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_105a1de0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_105a1de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_105a1e10(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_105a1e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1e40(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105a1e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1e70(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105a1e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1ea0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_105a1ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a1ed0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_105a1ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105a2020(uint param_1);
template<class... A> int FUN_105a2020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105a20a0(uint param_1);
template<class... A> int FUN_105a20a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a21a0(int *param_1);
template<class... A> int FUN_105a21a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a21b0(int *param_1);
template<class... A> int FUN_105a21b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a21c0(int *param_1);
template<class... A> int FUN_105a21c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a21d0(int *param_1);
template<class... A> int FUN_105a21d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a21f0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_105a21f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a2240(int param_1,int param_2);
template<class... A> int FUN_105a2240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a2290(int param_1,int param_2);
template<class... A> int FUN_105a2290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a22e0(int param_1,int param_2);
template<class... A> int FUN_105a22e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a2330(int param_1,int param_2);
template<class... A> int FUN_105a2330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a2a50(int *param_1);
template<class... A> int FUN_105a2a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a3240(void);
template<class... A> int FUN_105a3240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a3250(void);
template<class... A> int FUN_105a3250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a3260(void);
template<class... A> int FUN_105a3260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a3270(void);
template<class... A> int FUN_105a3270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a3280(void);
template<class... A> int FUN_105a3280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a3290(void);
template<class... A> int FUN_105a3290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a32a0(void);
template<class... A> int FUN_105a32a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a32b0(void);
template<class... A> int FUN_105a32b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a32c0(void);
template<class... A> int FUN_105a32c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a32d0(void);
template<class... A> int FUN_105a32d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a32e0(undefined4 param_1);
template<class... A> int FUN_105a32e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a32f0(undefined4 param_1);
template<class... A> int FUN_105a32f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a3360(undefined4 param_1);
template<class... A> int FUN_105a3360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a3370(undefined4 param_1);
template<class... A> int FUN_105a3370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a3380(int *param_1);
template<class... A> int FUN_105a3380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a3390(int *param_1);
template<class... A> int FUN_105a3390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a34a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a34a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a34c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a34c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a34e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a34e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a3500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a3500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a36c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_105a36c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a36e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_105a36e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a3700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_105a3700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a3720(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_105a3720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a3cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_105a3cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a3cd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_105a3cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a3d10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_105a3d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a3dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_105a3dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4530(void);
template<class... A> int FUN_105a4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4540(void);
template<class... A> int FUN_105a4540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4560(void);
template<class... A> int FUN_105a4560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4580(void);
template<class... A> int FUN_105a4580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a45a0(void);
template<class... A> int FUN_105a45a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a48e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a48e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a48f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a48f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a4900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4910(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a4910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4920(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a4920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4930(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a4930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4940(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a4940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4950(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a4950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4ef0(void);
template<class... A> int FUN_105a4ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4f00(void);
template<class... A> int FUN_105a4f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4f10(void);
template<class... A> int FUN_105a4f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a4f20(void);
template<class... A> int FUN_105a4f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a57d0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_105a57d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a57f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_105a57f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a5810(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_105a5810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a5830(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_105a5830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a5850(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_105a5850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5a10(undefined4 param_1);
template<class... A> int FUN_105a5a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5a20(undefined4 param_1);
template<class... A> int FUN_105a5a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5a30(undefined4 param_1);
template<class... A> int FUN_105a5a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5a40(undefined4 param_1);
template<class... A> int FUN_105a5a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5a50(undefined4 param_1);
template<class... A> int FUN_105a5a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105a5a60(int param_1,uint *param_2);
template<class... A> int FUN_105a5a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_105a5a90(int param_1,uint *param_2);
template<class... A> int FUN_105a5a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5ac0(int param_1,SCStr *param_2);
template<class... A> int FUN_105a5ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a5af0(int param_1,SCStr *param_2);
template<class... A> int FUN_105a5af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a5b20(void);
template<class... A> int FUN_105a5b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a5b30(void);
template<class... A> int FUN_105a5b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a5b40(void);
template<class... A> int FUN_105a5b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a61e0(undefined4 *param_1);
template<class... A> int FUN_105a61e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a61f0(undefined4 *param_1);
template<class... A> int FUN_105a61f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6200(undefined4 param_1);
template<class... A> int FUN_105a6200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6210(undefined4 param_1);
template<class... A> int FUN_105a6210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6220(undefined4 param_1);
template<class... A> int FUN_105a6220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6230(undefined4 param_1);
template<class... A> int FUN_105a6230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6240(undefined4 param_1);
template<class... A> int FUN_105a6240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6250(undefined4 param_1);
template<class... A> int FUN_105a6250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6260(undefined4 param_1);
template<class... A> int FUN_105a6260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6270(undefined4 param_1);
template<class... A> int FUN_105a6270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6280(undefined4 param_1);
template<class... A> int FUN_105a6280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6290(undefined4 param_1);
template<class... A> int FUN_105a6290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a62a0(undefined4 param_1);
template<class... A> int FUN_105a62a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a62b0(undefined4 param_1);
template<class... A> int FUN_105a62b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a62c0(undefined4 param_1);
template<class... A> int FUN_105a62c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a62d0(undefined4 param_1);
template<class... A> int FUN_105a62d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a62e0(undefined4 param_1);
template<class... A> int FUN_105a62e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a62f0(undefined4 param_1);
template<class... A> int FUN_105a62f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6300(undefined4 param_1);
template<class... A> int FUN_105a6300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6310(undefined4 param_1);
template<class... A> int FUN_105a6310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6320(undefined4 param_1);
template<class... A> int FUN_105a6320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6330(undefined4 param_1);
template<class... A> int FUN_105a6330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6340(undefined4 param_1);
template<class... A> int FUN_105a6340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6350(undefined4 param_1);
template<class... A> int FUN_105a6350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6360(undefined4 param_1);
template<class... A> int FUN_105a6360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6370(undefined4 param_1);
template<class... A> int FUN_105a6370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6380(undefined4 param_1);
template<class... A> int FUN_105a6380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a63c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_105a63c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a6570(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_105a6570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a66c0(void);
template<class... A> int FUN_105a66c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105a6840(int *param_1,int *param_2);
template<class... A> int FUN_105a6840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105a68b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_105a68b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a69a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a69a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a69c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a69c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a69e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a69e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6a00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a6a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6a20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a6a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6a40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a6a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6a60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a6a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6a80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_105a6a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6aa0(undefined4 param_1);
template<class... A> int FUN_105a6aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6ab0(undefined4 param_1);
template<class... A> int FUN_105a6ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6ac0(undefined4 param_1);
template<class... A> int FUN_105a6ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6ad0(undefined4 param_1);
template<class... A> int FUN_105a6ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6ae0(undefined4 param_1);
template<class... A> int FUN_105a6ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6af0(undefined4 param_1);
template<class... A> int FUN_105a6af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b00(undefined4 param_1);
template<class... A> int FUN_105a6b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b10(undefined4 param_1);
template<class... A> int FUN_105a6b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b20(undefined4 param_1);
template<class... A> int FUN_105a6b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b30(undefined4 param_1);
template<class... A> int FUN_105a6b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b40(undefined4 param_1);
template<class... A> int FUN_105a6b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b50(undefined4 param_1);
template<class... A> int FUN_105a6b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b60(undefined4 param_1);
template<class... A> int FUN_105a6b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b70(undefined4 param_1);
template<class... A> int FUN_105a6b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b80(undefined4 param_1);
template<class... A> int FUN_105a6b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6b90(undefined4 param_1);
template<class... A> int FUN_105a6b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6ba0(undefined4 param_1);
template<class... A> int FUN_105a6ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6bb0(undefined4 param_1);
template<class... A> int FUN_105a6bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6bc0(undefined4 param_1);
template<class... A> int FUN_105a6bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6bd0(undefined4 param_1);
template<class... A> int FUN_105a6bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6be0(undefined4 param_1);
template<class... A> int FUN_105a6be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a6bf0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_105a6bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105a6c00(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_105a6c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6c10(undefined4 param_1);
template<class... A> int FUN_105a6c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6c20(undefined4 param_1);
template<class... A> int FUN_105a6c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6c30(undefined4 param_1);
template<class... A> int FUN_105a6c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105a6c40(undefined4 param_1);
template<class... A> int FUN_105a6c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a6c50(undefined4 *param_1);
template<class... A> int FUN_105a6c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7220(undefined4 *param_1);
template<class... A> int FUN_105a7220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7240(undefined4 *param_1);
template<class... A> int FUN_105a7240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7260(undefined4 *param_1);
template<class... A> int FUN_105a7260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7280(undefined4 *param_1);
template<class... A> int FUN_105a7280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a72a0(undefined4 param_1);
template<class... A> int FUN_105a72a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a72b0(undefined4 param_1);
template<class... A> int FUN_105a72b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a72c0(undefined4 param_1);
template<class... A> int FUN_105a72c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a72d0(undefined4 param_1);
template<class... A> int FUN_105a72d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a72e0(undefined4 *param_1);
template<class... A> int FUN_105a72e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7330(undefined4 *param_1);
template<class... A> int FUN_105a7330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7420(undefined4 *param_1);
template<class... A> int FUN_105a7420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7590(undefined4 *param_1);
template<class... A> int FUN_105a7590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_105a7940(undefined4 *param_1);
template<class... A> int FUN_105a7940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a7f60(int param_1);
template<class... A> int FUN_105a7f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a8150(int param_1);
template<class... A> int FUN_105a8150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a8550(undefined4 *param_1);
template<class... A> int FUN_105a8550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a8f10(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_105a8f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105a9520(int *param_1);
template<class... A> int FUN_105a9520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a9530(undefined4 *param_1);
template<class... A> int FUN_105a9530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105a9540(int *param_1);
template<class... A> int FUN_105a9540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a9550(undefined4 *param_1);
template<class... A> int FUN_105a9550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105a9560(undefined4 *param_1);
template<class... A> int FUN_105a9560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a9570(int *param_1);
template<class... A> int FUN_105a9570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a9580(int *param_1);
template<class... A> int FUN_105a9580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a9590(int *param_1);
template<class... A> int FUN_105a9590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a95a0(int *param_1);
template<class... A> int FUN_105a95a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a95b0(int *param_1);
template<class... A> int FUN_105a95b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a95c0(int *param_1);
template<class... A> int FUN_105a95c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a95d0(int *param_1);
template<class... A> int FUN_105a95d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a95e0(int *param_1);
template<class... A> int FUN_105a95e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a95f0(int *param_1);
template<class... A> int FUN_105a95f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a9600(int *param_1);
template<class... A> int FUN_105a9600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a9610(int *param_1);
template<class... A> int FUN_105a9610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a9620(int *param_1);
template<class... A> int FUN_105a9620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a9630(int *param_1);
template<class... A> int FUN_105a9630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_105a9640(int *param_1);
template<class... A> int FUN_105a9640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_105a9980(int *param_1,int *param_2);
template<class... A> int FUN_105a9980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_105a99a0(uint *param_1,uint *param_2);
template<class... A> int FUN_105a99a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9d10(undefined4 *param_1);
template<class... A> int FUN_105a9d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9d40(undefined4 *param_1);
template<class... A> int FUN_105a9d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9d70(undefined4 *param_1);
template<class... A> int FUN_105a9d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9da0(undefined4 *param_1);
template<class... A> int FUN_105a9da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9e50(int param_1);
template<class... A> int FUN_105a9e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9e70(int param_1);
template<class... A> int FUN_105a9e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9e90(int param_1);
template<class... A> int FUN_105a9e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105a9eb0(int param_1);
template<class... A> int FUN_105a9eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105a9f10(undefined4 param_1);
template<class... A> int FUN_105a9f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa7b0(undefined4 param_1);
template<class... A> int FUN_105aa7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa7c0(undefined4 param_1);
template<class... A> int FUN_105aa7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa7d0(undefined4 param_1);
template<class... A> int FUN_105aa7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa7e0(undefined4 param_1);
template<class... A> int FUN_105aa7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa7f0(undefined4 param_1);
template<class... A> int FUN_105aa7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa800(undefined4 param_1);
template<class... A> int FUN_105aa800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa810(undefined4 param_1);
template<class... A> int FUN_105aa810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa820(undefined4 param_1);
template<class... A> int FUN_105aa820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa830(undefined4 param_1);
template<class... A> int FUN_105aa830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa840(undefined4 param_1);
template<class... A> int FUN_105aa840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa850(undefined4 param_1);
template<class... A> int FUN_105aa850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa860(undefined4 param_1);
template<class... A> int FUN_105aa860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa870(undefined4 param_1);
template<class... A> int FUN_105aa870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa880(undefined4 param_1);
template<class... A> int FUN_105aa880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa890(undefined4 param_1);
template<class... A> int FUN_105aa890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa8a0(undefined4 param_1);
template<class... A> int FUN_105aa8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa8b0(undefined4 param_1);
template<class... A> int FUN_105aa8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa8c0(undefined4 param_1);
template<class... A> int FUN_105aa8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa8d0(undefined4 param_1);
template<class... A> int FUN_105aa8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa8e0(undefined4 param_1);
template<class... A> int FUN_105aa8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa8f0(undefined4 param_1);
template<class... A> int FUN_105aa8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa900(undefined4 param_1);
template<class... A> int FUN_105aa900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa910(undefined4 param_1);
template<class... A> int FUN_105aa910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa920(undefined4 param_1);
template<class... A> int FUN_105aa920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa930(undefined4 param_1);
template<class... A> int FUN_105aa930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa950(undefined4 param_1);
template<class... A> int FUN_105aa950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa970(undefined4 param_1);
template<class... A> int FUN_105aa970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa980(undefined4 param_1);
template<class... A> int FUN_105aa980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa990(undefined4 param_1);
template<class... A> int FUN_105aa990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa9a0(undefined4 param_1);
template<class... A> int FUN_105aa9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa9b0(undefined4 param_1);
template<class... A> int FUN_105aa9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105aa9c0(undefined4 param_1);
template<class... A> int FUN_105aa9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab5d0(int param_1);
template<class... A> int FUN_105ab5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab600(int param_1);
template<class... A> int FUN_105ab600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab630(int param_1);
template<class... A> int FUN_105ab630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_105ab660(int param_1);
template<class... A> int FUN_105ab660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_105ab6c0(int *param_1);
template<class... A> int FUN_105ab6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_105ab6f0(int *param_1);
template<class... A> int FUN_105ab6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ab840(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105ab840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ab850(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105ab850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ab860(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105ab860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ab870(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_105ab870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ab880(int param_1);
template<class... A> int FUN_105ab880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ab890(int param_1);
template<class... A> int FUN_105ab890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ab8a0(int param_1);
template<class... A> int FUN_105ab8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ab8b0(int param_1);
template<class... A> int FUN_105ab8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ab8c0(int param_1);
template<class... A> int FUN_105ab8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105ab8d0(int param_1);
template<class... A> int FUN_105ab8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105abb40(undefined4 *param_1);
template<class... A> int FUN_105abb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105abb50(undefined1 *param_1);
template<class... A> int FUN_105abb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105abb60(int param_1);
template<class... A> int FUN_105abb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac080(uint param_1);
template<class... A> int FUN_105ac080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac100(uint param_1);
template<class... A> int FUN_105ac100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac170(uint param_1);
template<class... A> int FUN_105ac170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_105ac1f0(uint param_1);
template<class... A> int FUN_105ac1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105aceb0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_105aceb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acf00(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_105acf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acf50(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_105acf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105acfa0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_105acfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105acff0(int param_1,int param_2);
template<class... A> int FUN_105acff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ad040(int param_1,int param_2);
template<class... A> int FUN_105ad040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ad090(int param_1,int param_2);
template<class... A> int FUN_105ad090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_105ad0f0(int param_1,int param_2);
template<class... A> int FUN_105ad0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105ad150(undefined4 *param_1);
template<class... A> int FUN_105ad150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105ae440(int param_1);
template<class... A> int FUN_105ae440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105af640(int *param_1);
template<class... A> int FUN_105af640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105af650(int *param_1);
template<class... A> int FUN_105af650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_105af660(int *param_1);
template<class... A> int FUN_105af660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105af690(undefined4 param_1);
template<class... A> int FUN_105af690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_105af6a0(undefined4 param_1);
template<class... A> int FUN_105af6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105af6b0(void);
template<class... A> int FUN_105af6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105af6c0(void);
template<class... A> int FUN_105af6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105af6d0(void);
template<class... A> int FUN_105af6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105af6e0(void);
template<class... A> int FUN_105af6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105af6f0(void);
template<class... A> int FUN_105af6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105af700(void);
template<class... A> int FUN_105af700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105af710(void);
template<class... A> int FUN_105af710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105af720(void);
template<class... A> int FUN_105af720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105aff90(undefined4 param_1);
template<class... A> int FUN_105aff90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105affa0(undefined4 param_1);
template<class... A> int FUN_105affa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105affb0(undefined4 param_1);
template<class... A> int FUN_105affb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105affc0(undefined4 param_1);
template<class... A> int FUN_105affc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105affd0(undefined4 param_1);
template<class... A> int FUN_105affd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_105b0200(undefined4 *param_1);
template<class... A> int FUN_105b0200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b0210(undefined4 *param_1);
template<class... A> int FUN_105b0210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b0240(undefined4 *param_1);
template<class... A> int FUN_105b0240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_105b0270(int *param_1);
template<class... A> int FUN_105b0270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b0290(undefined4 param_1);
template<class... A> int FUN_105b0290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b02a0(undefined4 param_1);
template<class... A> int FUN_105b02a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_105b0a40(int param_1);
template<class... A> int FUN_105b0a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b0a50(int param_1,undefined4 *param_2);
template<class... A> int FUN_105b0a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_105b0b90(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_105b0b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_105b0f90(void);
template<class... A> int FUN_105b0f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_105b0fd0(int param_1);
template<class... A> int FUN_105b0fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b0fe0(undefined4 param_1);
template<class... A> int FUN_105b0fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_105b1020(undefined4 param_1);
template<class... A> int FUN_105b1020(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);
extern void __fastcall FUN_1057b850(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);
extern void __fastcall thunk_FUN_1057b850(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RAddFavoritesAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RDownloadServiceManifestFilesAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RLookupMetadataAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSelectedItemsAddToQueueAtIdxOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSelectedItemsPlayNextOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSelectedItemsReplaceQueueOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSonosAppLinkOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSonosGetLinkCodeOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpCDUpdateObjectAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpReplaceQueueOp_;
extern int ghidra_vftable_SCOpRef_SCIOp_;

extern int ghidra_vftable_SCOpRef_SCIOp__SCIOp_;

// Reference entry 10516e90; body size 7 bytes.
#line 1 "ENTRY_10516e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10516e90(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10519af0; body size 3 bytes.
#line 1 "ENTRY_10519af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10519af0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10519b00; body size 3 bytes.
#line 1 "ENTRY_10519b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10519b00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10519b10; body size 3 bytes.
#line 1 "ENTRY_10519b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10519b10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10519b20; body size 3 bytes.
#line 1 "ENTRY_10519b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10519b20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10519b30; body size 3 bytes.
#line 1 "ENTRY_10519b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10519b30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1051a290; body size 28 bytes.
#line 1 "ENTRY_1051a290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051a290(undefined4 *param_1)

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


// Reference entry 1051a2c0; body size 28 bytes.
#line 1 "ENTRY_1051a2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051a2c0(undefined4 *param_1)

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


// Reference entry 1051a2f0; body size 28 bytes.
#line 1 "ENTRY_1051a2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051a2f0(undefined4 *param_1)

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


// Reference entry 1051a320; body size 20 bytes.
#line 1 "ENTRY_1051a320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051a320(int *param_1)

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


// Reference entry 1051a400; body size 105 bytes.
#line 1 "ENTRY_1051a400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1051a400(int *param_2)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  SCStr aSStack_14 [4];
  int *piStack_10;
  undefined4 uStack_c;
  
  if (((int *)(param_2) != (int *)(0x0)) && ((int *)param_1[0xc] != (int *)((param_2)))) {
    piVar2 = (int *)((int *)param_1[0xd]);
    if ((int *)(piVar2) != (int *)(0x0)) {
      param_1[0xc] = (int)(0);
      param_1[0xd] = (int)(0);
      uStack_c = (undefined4)(0x1051a42b);
      (*(code ***)piVar2)[2]();
    }
    param_1[0xc] = (int)((int)param_2);
    uStack_c = (undefined4)(0x1051a435);
    piVar2 = (int *)((int *)(*(code ***)param_2)[3](), 0);
    param_1[0xd] = (int)((int)piVar2);
    uStack_c = (undefined4)(0x1051a43f);
    (*(code ***)piVar2)[1]();
    uStack_c = (undefined4)(0x1051a448);
    cVar1 = (char)((*(code ***)param_1)[8](), 0);
    if (cVar1 != '\0') {
      uStack_c = (undefined4)(0);
      piStack_10 = (int *)(param_1);
      ((SCStr *)((uint)&aSStack_14))->int_allocRep("SCIInfoViewHeaderDataSource:onChanged");
      thunk_FUN_103d65f0<>();
    }
  }
  return;
}


// Reference entry 1051a490; body size 5 bytes.
#line 1 "ENTRY_1051a490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1051a490(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  
  if ((int *)((param_2)) != (int *)(param_1)) {
    iVar1 = (int)(*param_1);
    if (((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) &&
       (iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0), iVar2 == 0)) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
    iVar1 = (int)(*param_2);
    *param_1 = (int)(iVar1);
    if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
      thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
    }
  }
  return (int *)(param_1);
}


// Reference entry 1051a4f0; body size 10 bytes.
#line 1 "ENTRY_1051a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1051a4f0(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 1051b7f0; body size 28 bytes.
#line 1 "ENTRY_1051b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1051b7f0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1051b820; body size 28 bytes.
#line 1 "ENTRY_1051b820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1051b820(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1051b850; body size 28 bytes.
#line 1 "ENTRY_1051b850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1051b850(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1051b8c0; body size 9 bytes.
#line 1 "ENTRY_1051b8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1051b8c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RProgressInfoForSCOp);
  return (undefined4 *)(param_1);
}


// Reference entry 1051c170; body size 167 bytes.
#line 1 "ENTRY_1051c170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1051c170(int param_2,undefined4 param_3,undefined4 param_4,
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
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50)) (param_3,param_4,param_5,param_6), 0);
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","AddMultipleURIsToQueue", uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x35f4] = (undefined4)(0);
  param_1[0x35f5] = (undefined4)(0);
  param_1[0x35f6] = (undefined4)(0);
  param_1[0x35f7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1051c240; body size 9 bytes.
#line 1 "ENTRY_1051c240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1051c240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOperationProgress);
  return (undefined4 *)(param_1);
}


// Reference entry 1051c780; body size 9 bytes.
#line 1 "ENTRY_1051c780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1051c780(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1051c790; body size 11 bytes.
#line 1 "ENTRY_1051c790"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051c790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSelectedItemsAddToQueueAtIdxOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 1051c7a0; body size 11 bytes.
#line 1 "ENTRY_1051c7a0"

/* WARNING: Removing unreachable block_1051c7a0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051c7a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSelectedItemsPlayNextOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 1051c7c0; body size 11 bytes.
#line 1 "ENTRY_1051c7c0"

/* WARNING: Removing unreachable block_1051c7c0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051c7c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSelectedItemsReplaceQueueOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 1051c7f0; body size 11 bytes.
#line 1 "ENTRY_1051c7f0"

/* WARNING: Removing unreachable block_1051c7f0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051c7f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpReplaceQueueOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 1051d150; body size 28 bytes.
#line 1 "ENTRY_1051d150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051d150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTAddMultipleURIsToQueueAIOOp);
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


// Reference entry 1051d180; body size 7 bytes.
#line 1 "ENTRY_1051d180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051d180(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1051d190; body size 25 bytes.
#line 1 "ENTRY_1051d190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1051d190(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpWithProgressInfo);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_SCIObj);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObj);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1051d4d0; body size 7 bytes.
#line 1 "ENTRY_1051d4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1051d4d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1051d4e0; body size 4 bytes.
#line 1 "ENTRY_1051d4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1051d4e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1051d4f0; body size 4 bytes.
#line 1 "ENTRY_1051d4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1051d4f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1051d500; body size 4 bytes.
#line 1 "ENTRY_1051d500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1051d500(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1051d510; body size 4 bytes.
#line 1 "ENTRY_1051d510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1051d510(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1051d520; body size 4 bytes.
#line 1 "ENTRY_1051d520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1051d520(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1051d530; body size 4 bytes.
#line 1 "ENTRY_1051d530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1051d530(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1051d540; body size 3 bytes.
#line 1 "ENTRY_1051d540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1051d540(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105208a0; body size 7 bytes.
#line 1 "ENTRY_105208a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105208a0(int param_1)

{
  return (int)(param_1 + 0xa0);
}


// Reference entry 105208b0; body size 7 bytes.
#line 1 "ENTRY_105208b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105208b0(int param_1)

{
  return (int)(param_1 + 0x9c);
}


// Reference entry 105208c0; body size 7 bytes.
#line 1 "ENTRY_105208c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105208c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc4));
}


// Reference entry 10520960; body size 35 bytes.
#line 1 "ENTRY_10520960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10520960(SCStr *param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(0x2227,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 105209c0; body size 7 bytes.
#line 1 "ENTRY_105209c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105209c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7dc));
}


// Reference entry 105209d0; body size 7 bytes.
#line 1 "ENTRY_105209d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105209d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d4));
}


// Reference entry 105209e0; body size 4 bytes.
#line 1 "ENTRY_105209e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105209e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x60));
}


// Reference entry 10520d00; body size 4 bytes.
#line 1 "ENTRY_10520d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10520d00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10520d10; body size 4 bytes.
#line 1 "ENTRY_10520d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10520d10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10520d20; body size 4 bytes.
#line 1 "ENTRY_10520d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10520d20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10520d30; body size 4 bytes.
#line 1 "ENTRY_10520d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10520d30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10520d40; body size 7 bytes.
#line 1 "ENTRY_10520d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10520d40(int param_1)

{
  return (int)(param_1 + 0xa4);
}


// Reference entry 10520d50; body size 7 bytes.
#line 1 "ENTRY_10520d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10520d50(int param_1)

{
  return (int)(param_1 + 0xa0);
}


// Reference entry 10520d60; body size 7 bytes.
#line 1 "ENTRY_10520d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10520d60(int param_1)

{
  return (int)(param_1 + 0xa0);
}


// Reference entry 10520d70; body size 7 bytes.
#line 1 "ENTRY_10520d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10520d70(int param_1)

{
  return (int)(param_1 + 0x9c);
}


// Reference entry 10520d90; body size 7 bytes.
#line 1 "ENTRY_10520d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10520d90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xb0));
}


// Reference entry 10520da0; body size 7 bytes.
#line 1 "ENTRY_10520da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10520da0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xac));
}


// Reference entry 10520db0; body size 7 bytes.
#line 1 "ENTRY_10520db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10520db0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xa4));
}


// Reference entry 10520dc0; body size 22 bytes.
#line 1 "ENTRY_10520dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10520dc0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6c));
  if (iVar1 < 0) {
    if (*(int **)(param_1 + 0x38) != (int *)((0x0))) {
                    
                    
      iVar1 = (int)((**(code **)(**(int **)(param_1 + 0x38) + 0x24))(), 0);
      return (int)(iVar1);
    }
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 10520de0; body size 4 bytes.
#line 1 "ENTRY_10520de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10520de0(int param_1)

{
  return (int)(param_1 + 0x20);
}


// Reference entry 105226a0; body size 16 bytes.
#line 1 "ENTRY_105226a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105226a0(int *param_1)

{
  if (param_1[0xe] != 0) {
    *(undefined1*)(param_1[0xe] + 0x30) = (undefined1)(0);
  }
                    
                    
  (**(code **)(*param_1 + 0x3c))();
  return;
}


// Reference entry 105226c0; body size 4 bytes.
#line 1 "ENTRY_105226c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105226c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x7c));
}


// Reference entry 105226d0; body size 4 bytes.
#line 1 "ENTRY_105226d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105226d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x68));
}


// Reference entry 10522720; body size 45 bytes.
#line 1 "ENTRY_10522720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10522720(int param_1)

{
  if (*(char *)(param_1 + 0x94) != '\0') {
    return (int)(2000);
  }
  return (int)((*(int *)(param_1 + 0x7c) * 18000 - 18000U) / 0xf + 6000);
}


// Reference entry 10523d30; body size 5 bytes.
#line 1 "ENTRY_10523d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10523d30(int param_1)

{
  *(undefined1*)(param_1 + 0x30) = (undefined1)(1);
  return;
}


// Reference entry 10523d40; body size 4 bytes.
#line 1 "ENTRY_10523d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10523d40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10524720; body size 3 bytes.
#line 1 "ENTRY_10524720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10524720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105247c0; body size 20 bytes.
#line 1 "ENTRY_105247c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105247c0(int *param_1)

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


// Reference entry 10524890; body size 8 bytes.
#line 1 "ENTRY_10524890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10524890(int param_1)

{
  *(undefined4*)(param_1 + 0x2c) = (undefined4)(0xffffffff);
  return;
}


// Reference entry 10524cf0; body size 5 bytes.
#line 1 "ENTRY_10524cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10524cf0(int param_1)

{
  *(undefined1*)(param_1 + 0x30) = (undefined1)(0);
  return;
}


// Reference entry 10524d00; body size 25 bytes.
#line 1 "ENTRY_10524d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10524d00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10525040; body size 91 bytes.
#line 1 "ENTRY_10525040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10525040(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 105250c0; body size 91 bytes.
#line 1 "ENTRY_105250c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105250c0(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10525440; body size 83 bytes.
#line 1 "ENTRY_10525440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10525440(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (*(code ***)piVar1)[2]();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(*(code ***)param_2)[3](), 0);
      param_1[1] = (int)((int)piVar1);
      (*(code ***)piVar1)[1]();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 105254b0; body size 78 bytes.
#line 1 "ENTRY_105254b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105254b0(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10525520; body size 78 bytes.
#line 1 "ENTRY_10525520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10525520(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10525590; body size 78 bytes.
#line 1 "ENTRY_10525590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10525590(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 105256f0; body size 33 bytes.
#line 1 "ENTRY_105256f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105256f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10525720; body size 3 bytes.
#line 1 "ENTRY_10525720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10525720(void)

{
  return;
}


// Reference entry 10525730; body size 18 bytes.
#line 1 "ENTRY_10525730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10525730(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10525900; body size 7 bytes.
#line 1 "ENTRY_10525900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10525900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10525910; body size 19 bytes.
#line 1 "ENTRY_10525910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10525910(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3 + -1);
  return (undefined4 *)(param_1);
}


// Reference entry 10525930; body size 5 bytes.
#line 1 "ENTRY_10525930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10525930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10525940; body size 36 bytes.
#line 1 "ENTRY_10525940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10525940(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10525970; body size 5 bytes.
#line 1 "ENTRY_10525970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10525970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105259e0; body size 13 bytes.
#line 1 "ENTRY_105259e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105259e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 105259f0; body size 36 bytes.
#line 1 "ENTRY_105259f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105259f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10525750(puVar1,param_2);
  return;
}


// Reference entry 10525a20; body size 5 bytes.
#line 1 "ENTRY_10525a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10525a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10525a30; body size 6 bytes.
#line 1 "ENTRY_10525a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10525a30(void)

{
  return (char *)("SCIWizard");
}


// Reference entry 10525a40; body size 28 bytes.
#line 1 "ENTRY_10525a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525a40(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10525a70; body size 28 bytes.
#line 1 "ENTRY_10525a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525a70(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10525aa0; body size 28 bytes.
#line 1 "ENTRY_10525aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525aa0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10525ad0; body size 54 bytes.
#line 1 "ENTRY_10525ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCArray);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10525b20; body size 32 bytes.
#line 1 "ENTRY_10525b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10525b20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (*(code ***)piVar1)[1]();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10525b90; body size 32 bytes.
#line 1 "ENTRY_10525b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10525b90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (*(code ***)piVar1)[1]();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10525bc0; body size 16 bytes.
#line 1 "ENTRY_10525bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10525be0; body size 16 bytes.
#line 1 "ENTRY_10525be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525be0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10525c80; body size 16 bytes.
#line 1 "ENTRY_10525c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525c80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10525cc0; body size 26 bytes.
#line 1 "ENTRY_10525cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10525cc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10525ce0; body size 18 bytes.
#line 1 "ENTRY_10525ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10525ce0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10525d00; body size 23 bytes.
#line 1 "ENTRY_10525d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525d00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10525d20; body size 3 bytes.
#line 1 "ENTRY_10525d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10525d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10525d30; body size 23 bytes.
#line 1 "ENTRY_10525d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525d30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10525d50; body size 9 bytes.
#line 1 "ENTRY_10525d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10525d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSvcManifestDownloadCompletionCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10525d60; body size 127 bytes.
#line 1 "ENTRY_10525d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10525d60(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))(), 0);
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))(), 0);
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50)) (param_3,param_4,param_5,param_6), 0);
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:SystemProperties:1","SetAccountNicknameX", uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10525ed0; body size 33 bytes.
#line 1 "ENTRY_10525ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10525ed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceAccountNeededState);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10526060; body size 26 bytes.
#line 1 "ENTRY_10526060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10526060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526080; body size 26 bytes.
#line 1 "ENTRY_10526080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10526080(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetAppLinkRetryState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526160; body size 110 bytes.
#line 1 "ENTRY_10526160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10526160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetShareUsageState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceGetShareUsageState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x15] = (undefined4)(0);
  param_1[0x1f] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105261f0; body size 26 bytes.
#line 1 "ENTRY_105261f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105261f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526210; body size 54 bytes.
#line 1 "ENTRY_10526210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10526210(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceIntroState);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105269f0; body size 40 bytes.
#line 1 "ENTRY_105269f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105269f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceLoginPasswordState);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10526a30; body size 26 bytes.
#line 1 "ENTRY_10526a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10526a30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceMultipleAccountsAddedState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526b90; body size 40 bytes.
#line 1 "ENTRY_10526b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10526b90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServicePasswordState);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10526bd0; body size 216 bytes.
#line 1 "ENTRY_10526bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10526bd0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServicePromotedIntroState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServicePromotedIntroState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef_SCIOp__SCIOp_);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x15] = (undefined4)(0);
  param_1[0x1f] = (undefined4)(0);
  param_1[0x21] = (undefined4)(0);
  param_1[0x22] = (undefined4)(0);
  param_1[0x24] = (undefined4)(0);
  param_1[0x25] = (undefined4)(0);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x2f] = (undefined4)(0);
  param_1[0x39] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x3a) = (undefined2)(0);
  *(undefined1*)((int)param_1 + 0xea) = (undefined1)(0);
  param_1[0x3b] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10526d80; body size 42 bytes.
#line 1 "ENTRY_10526d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10526d80(undefined4 param_2,undefined4 param_3,undefined2 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)(param_3);
  *(undefined2*)(param_1 + 4) = (undefined2)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceResultState);
  return (undefined4 *)(param_1);
}


// Reference entry 10526dc0; body size 26 bytes.
#line 1 "ENTRY_10526dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10526dc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetNicknameErrorState);
  return (undefined4 *)(param_1);
}


// Reference entry 10527150; body size 117 bytes.
#line 1 "ENTRY_10527150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10527150(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetShareUsageState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCMusicServiceSetShareUsageState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[9] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x15] = (undefined4)(0);
  param_1[0x1f] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x20) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10528c10; body size 42 bytes.
#line 1 "ENTRY_10528c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10528c10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptorManagerEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 10528c50; body size 26 bytes.
#line 1 "ENTRY_10528c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10528c50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceInfoDownloadRetryState);
  return (undefined4 *)(param_1);
}


// Reference entry 10528d70; body size 18 bytes.
#line 1 "ENTRY_10528d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10528d70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return (undefined4 *)(param_1);
}


// Reference entry 10528d90; body size 11 bytes.
#line 1 "ENTRY_10528d90"

/* WARNING: Removing unreachable block_10528d90 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10528d90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSonosAppLinkOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10528db0; body size 11 bytes.
#line 1 "ENTRY_10528db0"

/* WARNING: Removing unreachable block_10528db0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10528db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSonosGetLinkCodeOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10529230; body size 3 bytes.
#line 1 "ENTRY_10529230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10529230(void)

{
  return;
}


// Reference entry 10529240; body size 28 bytes.
#line 1 "ENTRY_10529240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10529240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetAccountNicknameXAIOOp);
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


// Reference entry 10529520; body size 7 bytes.
#line 1 "ENTRY_10529520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10529520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10529530; body size 7 bytes.
#line 1 "ENTRY_10529530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10529530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10529740; body size 7 bytes.
#line 1 "ENTRY_10529740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10529740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10529d70; body size 7 bytes.
#line 1 "ENTRY_10529d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10529d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 1052a0a0; body size 7 bytes.
#line 1 "ENTRY_1052a0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1052a0a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 1052a800; body size 19 bytes.
#line 1 "ENTRY_1052a800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1052a800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1052a820; body size 7 bytes.
#line 1 "ENTRY_1052a820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1052a820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 1052a940; body size 65 bytes.
#line 1 "ENTRY_1052a940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1052a940(int *param_2)
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
      (*(code ***)piVar1)[2]();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (*(code ***)piVar1)[1]();
    }
  }
  return (int *)(param_1);
}


// Reference entry 1052aa10; body size 65 bytes.
#line 1 "ENTRY_1052aa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1052aa10(int *param_2)
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
      (*(code ***)piVar1)[2]();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (*(code ***)piVar1)[1]();
    }
  }
  return (int *)(param_1);
}


// Reference entry 1052aae0; body size 7 bytes.
#line 1 "ENTRY_1052aae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1052aae0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1052aaf0; body size 3 bytes.
#line 1 "ENTRY_1052aaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052aaf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052ab00; body size 7 bytes.
#line 1 "ENTRY_1052ab00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1052ab00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1052ab10; body size 7 bytes.
#line 1 "ENTRY_1052ab10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1052ab10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1052ab20; body size 7 bytes.
#line 1 "ENTRY_1052ab20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1052ab20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1052ab30; body size 7 bytes.
#line 1 "ENTRY_1052ab30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1052ab30(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1052ab40; body size 4 bytes.
#line 1 "ENTRY_1052ab40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ab40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1052ab50; body size 4 bytes.
#line 1 "ENTRY_1052ab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ab50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1052ab60; body size 4 bytes.
#line 1 "ENTRY_1052ab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ab60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1052ab70; body size 3 bytes.
#line 1 "ENTRY_1052ab70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ab70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052ab80; body size 3 bytes.
#line 1 "ENTRY_1052ab80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ab80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052ab90; body size 3 bytes.
#line 1 "ENTRY_1052ab90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ab90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052aba0; body size 3 bytes.
#line 1 "ENTRY_1052aba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052aba0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052abb0; body size 3 bytes.
#line 1 "ENTRY_1052abb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052abb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052abc0; body size 3 bytes.
#line 1 "ENTRY_1052abc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052abc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052abd0; body size 3 bytes.
#line 1 "ENTRY_1052abd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052abd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052abe0; body size 3 bytes.
#line 1 "ENTRY_1052abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052abe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052abf0; body size 3 bytes.
#line 1 "ENTRY_1052abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052abf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052ac00; body size 3 bytes.
#line 1 "ENTRY_1052ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ac00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052ac10; body size 3 bytes.
#line 1 "ENTRY_1052ac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ac10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052ac20; body size 3 bytes.
#line 1 "ENTRY_1052ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ac20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052ac30; body size 3 bytes.
#line 1 "ENTRY_1052ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052ac30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1052ac40; body size 31 bytes.
#line 1 "ENTRY_1052ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1052ac40(int *param_1)

{
  return (int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 2) * 4
                 ) + (param_1[1] & 3U) * 4);
}


// Reference entry 1052ac70; body size 6 bytes.
#line 1 "ENTRY_1052ac70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1052ac70(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 1052c740; body size 49 bytes.
#line 1 "ENTRY_1052c740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_1052c740(uint param_2)
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


// Reference entry 1052c7f0; body size 3 bytes.
#line 1 "ENTRY_1052c7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1052c7f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1052c800; body size 3 bytes.
#line 1 "ENTRY_1052c800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052c800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1052c810; body size 3 bytes.
#line 1 "ENTRY_1052c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052c810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1052c820; body size 3 bytes.
#line 1 "ENTRY_1052c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052c820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1052c830; body size 3 bytes.
#line 1 "ENTRY_1052c830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052c830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1052c840; body size 3 bytes.
#line 1 "ENTRY_1052c840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1052c840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1052c850; body size 16 bytes.
#line 1 "ENTRY_1052c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_1052c850(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 2);
}


// Reference entry 1052c870; body size 4 bytes.
#line 1 "ENTRY_1052c870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1052c870(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 1052c880; body size 4 bytes.
#line 1 "ENTRY_1052c880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1052c880(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 1052c890; body size 3 bytes.
#line 1 "ENTRY_1052c890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1052c890(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1052c910; body size 38 bytes.
#line 1 "ENTRY_1052c910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_1052c910(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1052c940; body size 27 bytes.
#line 1 "ENTRY_1052c940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1052c940(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 1052c970; body size 27 bytes.
#line 1 "ENTRY_1052c970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1052c970(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 1052c9a0; body size 18 bytes.
#line 1 "ENTRY_1052c9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1052c9a0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10));
  iVar2 = (int)(*(int *)(param_1 + 0xc));
  *param_2 = (int)(param_1);
  param_2[1] = (int)(iVar1 + iVar2);
  return;
}


// Reference entry 1052dc60; body size 87 bytes.
#line 1 "ENTRY_1052dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1052dc60(uint param_1)

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


// Reference entry 1052dcd0; body size 39 bytes.
#line 1 "ENTRY_1052dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1052dcd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 4);
    return;
  }
  thunk_FUN_10525750(puVar1,param_2);
  return;
}


// Reference entry 1052e140; body size 8 bytes.
#line 1 "ENTRY_1052e140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1052e140(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 300));
}


// Reference entry 1052e920; body size 9 bytes.
#line 1 "ENTRY_1052e920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1052e920(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 1052e930; body size 7 bytes.
#line 1 "ENTRY_1052e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1052e930(int param_1)

{
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_1 + 8));
  return;
}


// Reference entry 1052e940; body size 6 bytes.
#line 1 "ENTRY_1052e940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1052e940(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10532840; body size 61 bytes.
#line 1 "ENTRY_10532840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10532840(int param_1,int param_2)

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


// Reference entry 10532ed0; body size 8 bytes.
#line 1 "ENTRY_10532ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10532ed0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10532ee0; body size 8 bytes.
#line 1 "ENTRY_10532ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10532ee0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10532ef0; body size 9 bytes.
#line 1 "ENTRY_10532ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10532ef0(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 105333b0; body size 7 bytes.
#line 1 "ENTRY_105333b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105333b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xea14));
}


// Reference entry 105333c0; body size 4 bytes.
#line 1 "ENTRY_105333c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105333c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x5c));
}


// Reference entry 10533bc0; body size 66 bytes.
#line 1 "ENTRY_10533bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10533bc0(undefined1 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if ((undefined1 *)(param_1) != (undefined1 *)(0x0)) {
    *param_1 = (undefined1)(0);
    iVar1 = (int)(thunk_FUN_110828b0(), 0);
    if ((iVar1 != 0) && (piVar2 = (int *)((int *)thunk_FUN_11082860(), 0),(int *)( piVar2) != (int *)(0x0))) {
      iVar1 = (int)(*piVar2);
      uVar3 = (undefined4)(thunk_FUN_10533e90(param_1,param_2), 0);
      (**(code **)(iVar1 + 0x24))(uVar3);
    }
  }
  return;
}


// Reference entry 10533c50; body size 7 bytes.
#line 1 "ENTRY_10533c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10533c50(int param_1)

{
  return (int)(param_1 + 0xd09);
}


// Reference entry 10533c60; body size 19 bytes.
#line 1 "ENTRY_10533c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10533c60(int param_1)

{
  if (*(char *)(param_1 + 0x11814) != '\0') {
    return (int)(param_1 + 0xf813);
  }
  return (int)(0);
}


// Reference entry 10533f60; body size 23 bytes.
#line 1 "ENTRY_10533f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10533f60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xe7b0));
  return (SCStr *)(param_2);
}


// Reference entry 10533f80; body size 7 bytes.
#line 1 "ENTRY_10533f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10533f80(int param_1)

{
  return (int)(param_1 + 0xc723);
}


// Reference entry 10533f90; body size 19 bytes.
#line 1 "ENTRY_10533f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10533f90(int param_1)

{
  if (*(char *)(param_1 + 0x1de74) != '\0') {
    return (int)(param_1 + 0x1be32);
  }
  return (int)(0);
}


// Reference entry 10533fc0; body size 4 bytes.
#line 1 "ENTRY_10533fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10533fc0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10533fd0; body size 7 bytes.
#line 1 "ENTRY_10533fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10533fd0(int param_1)

{
  return (int)(param_1 + 0x59d4);
}


// Reference entry 10533fe0; body size 19 bytes.
#line 1 "ENTRY_10533fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10533fe0(int param_1)

{
  if (*(char *)(param_1 + 0x170e4) != '\0') {
    return (int)(param_1 + 0x150e3);
  }
  return (int)(0);
}


// Reference entry 10534000; body size 23 bytes.
#line 1 "ENTRY_10534000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10534000(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xe7b8));
  return (SCStr *)(param_2);
}


// Reference entry 105345d0; body size 7 bytes.
#line 1 "ENTRY_105345d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105345d0(int param_1)

{
  return (int)(param_1 + 0xd850);
}


// Reference entry 105345e0; body size 27 bytes.
#line 1 "ENTRY_105345e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105345e0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(param_1 + 0xd7d0);
  if ((*(char *)(param_1 + 0xd7d0) == '\0') || (*(char *)(param_1 + 0xdbd1) == '\0')) {
    iVar1 = (int)(0);
  }
  return (int)(iVar1);
}


// Reference entry 10534610; body size 7 bytes.
#line 1 "ENTRY_10534610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10534610(int param_1)

{
  return (int)(param_1 + 0x104);
}


// Reference entry 10534640; body size 7 bytes.
#line 1 "ENTRY_10534640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10534640(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf812));
}


// Reference entry 10534650; body size 7 bytes.
#line 1 "ENTRY_10534650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10534650(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xe7b4));
}


// Reference entry 10534ee0; body size 7 bytes.
#line 1 "ENTRY_10534ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10534ee0(int param_1)

{
  return (int)(param_1 + 0xa69f);
}


// Reference entry 10534ef0; body size 19 bytes.
#line 1 "ENTRY_10534ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10534ef0(int param_1)

{
  if (*(char *)(param_1 + 0x1bdf0) != '\0') {
    return (int)(param_1 + 0x19dae);
  }
  return (int)(0);
}


// Reference entry 10534f90; body size 7 bytes.
#line 1 "ENTRY_10534f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10534f90(int param_1)

{
  return (int)(param_1 + 0xe051);
}


// Reference entry 10535040; body size 7 bytes.
#line 1 "ENTRY_10535040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10535040(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd4));
}


// Reference entry 10535240; body size 23 bytes.
#line 1 "ENTRY_10535240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10535240(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf8));
  return (SCStr *)(param_2);
}


// Reference entry 105354d0; body size 7 bytes.
#line 1 "ENTRY_105354d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105354d0(int param_1)

{
  return (int)(param_1 + 0xe9d1);
}


// Reference entry 105354e0; body size 4 bytes.
#line 1 "ENTRY_105354e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105354e0(int param_1)

{
  return (int)(param_1 + 0x19);
}


// Reference entry 105354f0; body size 23 bytes.
#line 1 "ENTRY_105354f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_105354f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x100));
  return (SCStr *)(param_2);
}


// Reference entry 105355f0; body size 7 bytes.
#line 1 "ENTRY_105355f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105355f0(int param_1)

{
  return (int)(param_1 + 0xf7d1);
}


// Reference entry 10535600; body size 7 bytes.
#line 1 "ENTRY_10535600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10535600(int param_1)

{
  return (int)(param_1 + 0xe455);
}


// Reference entry 10535610; body size 23 bytes.
#line 1 "ENTRY_10535610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10535610(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xe7ac));
  return (SCStr *)(param_2);
}


// Reference entry 10535660; body size 23 bytes.
#line 1 "ENTRY_10535660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10535660(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xfc));
  return (SCStr *)(param_2);
}


// Reference entry 10535a70; body size 23 bytes.
#line 1 "ENTRY_10535a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10535a70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xe7a8));
  return (SCStr *)(param_2);
}


// Reference entry 10535d60; body size 23 bytes.
#line 1 "ENTRY_10535d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10535d60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf4));
  return (SCStr *)(param_2);
}


// Reference entry 10535d80; body size 11 bytes.
#line 1 "ENTRY_10535d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10535d80(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0xd8) + 0x28))();
  return;
}


// Reference entry 10535e40; body size 23 bytes.
#line 1 "ENTRY_10535e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10535e40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xf0));
  return (SCStr *)(param_2);
}


// Reference entry 10536030; body size 6 bytes.
#line 1 "ENTRY_10536030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10536030(void)

{
  return (undefined4)(8);
}


// Reference entry 10536040; body size 6 bytes.
#line 1 "ENTRY_10536040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10536040(void)

{
  return (undefined4)(0x12);
}


// Reference entry 105367f0; body size 41 bytes.
#line 1 "ENTRY_105367f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105367f0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xe8));
  if (iVar1 == 8) {
    return (undefined4)(3);
  }
  if (iVar1 == 9) {
    return (undefined4)(4);
  }
  uVar2 = (undefined4)(1);
  if (iVar1 == 10) {
    uVar2 = (undefined4)(6);
  }
  return (undefined4)(uVar2);
}


// Reference entry 10536830; body size 7 bytes.
#line 1 "ENTRY_10536830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10536830(int param_1)

{
  return (int)(param_1 + 0xe9b8);
}


// Reference entry 10536840; body size 3 bytes.
#line 1 "ENTRY_10536840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10536840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10536de0; body size 7 bytes.
#line 1 "ENTRY_10536de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10536de0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xe8));
}


// Reference entry 1053d520; body size 53 bytes.
#line 1 "ENTRY_1053d520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1053d520(SCStr *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xec) == 5) {
    uVar2 = (undefined4)(0x2077);
  }
  else {
    uVar2 = (undefined4)(0x206e);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(uVar2,&DAT_11882ff0), 0);
  ((SCStr *)(param_2))->int_allocRep(pcVar1);
  return (SCStr *)(param_2);
}


// Reference entry 1053d750; body size 7 bytes.
#line 1 "ENTRY_1053d750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1053d750(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd1));
}


// Reference entry 1053d760; body size 7 bytes.
#line 1 "ENTRY_1053d760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1053d760(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xe7b6));
}


// Reference entry 1053d900; body size 31 bytes.
#line 1 "ENTRY_1053d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1053d900(int param_1)

{
  *(undefined1*)(param_1 + 0x104) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x505) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x906) = (undefined1)(0);
  *(undefined2*)(param_1 + 0xd07) = (undefined2)(1);
  return;
}


// Reference entry 1053e480; body size 13 bytes.
#line 1 "ENTRY_1053e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1053e480(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x6c) + 8));
  return (undefined4)(((uint)((int3)((uint)iVar1 >> 8)) << 8 | (uint)((int)(iVar1) != *(int *)(*(int *)(param_1 + 0x6c) + 0xc))));
}


// Reference entry 1053e490; body size 6 bytes.
#line 1 "ENTRY_1053e490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1053e490(void)

{
  return (char *)("SCIWizard");
}


// Reference entry 1053f420; body size 8 bytes.
#line 1 "ENTRY_1053f420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1053f420(int param_1)

{
  *(undefined1*)(param_1 + 0xac) = (undefined1)(1);
  return;
}


// Reference entry 10540fe0; body size 10 bytes.
#line 1 "ENTRY_10540fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10540fe0(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 8) >> 8)) << 8 | (uint)(*(int *)((param_1 + 8)) == *(int *)((param_1 + 0xc)))));
}


// Reference entry 10540ff0; body size 7 bytes.
#line 1 "ENTRY_10540ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10540ff0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10541000; body size 7 bytes.
#line 1 "ENTRY_10541000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10541000(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10541010; body size 7 bytes.
#line 1 "ENTRY_10541010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10541010(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10541020; body size 8 bytes.
#line 1 "ENTRY_10541020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10541020(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10541070; body size 17 bytes.
#line 1 "ENTRY_10541070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10541070(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(uint *)(param_1 + 4) & 0x7f) - 1 & 0xfffffffe);
  return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(uVar1 == 10)));
}


// Reference entry 10541230; body size 7 bytes.
#line 1 "ENTRY_10541230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10541230(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10541240; body size 7 bytes.
#line 1 "ENTRY_10541240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10541240(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10541250; body size 7 bytes.
#line 1 "ENTRY_10541250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10541250(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10541260; body size 7 bytes.
#line 1 "ENTRY_10541260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10541260(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10541270; body size 7 bytes.
#line 1 "ENTRY_10541270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10541270(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10541280; body size 7 bytes.
#line 1 "ENTRY_10541280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10541280(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10541690; body size 7 bytes.
#line 1 "ENTRY_10541690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10541690(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd0));
}


// Reference entry 105416a0; body size 7 bytes.
#line 1 "ENTRY_105416a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_105416a0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x29a9c));
}


// Reference entry 105418b0; body size 27 bytes.
#line 1 "ENTRY_105418b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105418b0(uint param_1)

{
  uint in_EAX;
  
  if (((param_1 != 0) && (in_EAX = (uint)(param_1 & 0xffffff81), (char)in_EAX != -0x80)) &&
     ((param_1 & 1) == 0)) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10541c20; body size 7 bytes.
#line 1 "ENTRY_10541c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10541c20(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd3));
}


// Reference entry 10541e80; body size 6 bytes.
#line 1 "ENTRY_10541e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10541e80(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10541e90; body size 6 bytes.
#line 1 "ENTRY_10541e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10541e90(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 105452b0; body size 3 bytes.
#line 1 "ENTRY_105452b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105452b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105452c0; body size 3 bytes.
#line 1 "ENTRY_105452c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105452c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105452d0; body size 3 bytes.
#line 1 "ENTRY_105452d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105452d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105452e0; body size 36 bytes.
#line 1 "ENTRY_105452e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105452e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10525750(puVar1,param_2);
  return;
}


// Reference entry 10545a20; body size 28 bytes.
#line 1 "ENTRY_10545a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10545a20(undefined4 *param_1)

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


// Reference entry 10545a50; body size 28 bytes.
#line 1 "ENTRY_10545a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10545a50(undefined4 *param_1)

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


// Reference entry 10545a80; body size 28 bytes.
#line 1 "ENTRY_10545a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10545a80(undefined4 *param_1)

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


// Reference entry 10545ab0; body size 28 bytes.
#line 1 "ENTRY_10545ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10545ab0(undefined4 *param_1)

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


// Reference entry 10545ae0; body size 28 bytes.
#line 1 "ENTRY_10545ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10545ae0(undefined4 *param_1)

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


// Reference entry 10545b10; body size 28 bytes.
#line 1 "ENTRY_10545b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10545b10(undefined4 *param_1)

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


// Reference entry 10545b40; body size 20 bytes.
#line 1 "ENTRY_10545b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10545b40(int *param_1)

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


// Reference entry 10545b60; body size 20 bytes.
#line 1 "ENTRY_10545b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10545b60(int *param_1)

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


// Reference entry 1054b270; body size 24 bytes.
#line 1 "ENTRY_1054b270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1054b270(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1054b290; body size 24 bytes.
#line 1 "ENTRY_1054b290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1054b290(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1054b2b0; body size 24 bytes.
#line 1 "ENTRY_1054b2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1054b2b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1054b4f0; body size 39 bytes.
#line 1 "ENTRY_1054b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054b4f0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xe7b0));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1054b5e0; body size 13 bytes.
#line 1 "ENTRY_1054b5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054b5e0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xe7b4) = (undefined1)(param_2);
  return;
}


// Reference entry 1054b5f0; body size 13 bytes.
#line 1 "ENTRY_1054b5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054b5f0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xd1) = (undefined1)(param_2);
  return;
}


// Reference entry 1054b600; body size 40 bytes.
#line 1 "ENTRY_1054b600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054b600(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",param_2);
  *(undefined4*)(param_1 + 0x94) = (undefined4)(param_2);
  return;
}


// Reference entry 1054b6e0; body size 39 bytes.
#line 1 "ENTRY_1054b6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054b6e0(SCStr *param_2)
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


// Reference entry 1054b780; body size 39 bytes.
#line 1 "ENTRY_1054b780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054b780(SCStr *param_2)
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


// Reference entry 1054b850; body size 13 bytes.
#line 1 "ENTRY_1054b850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054b850(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xd0) = (undefined1)(param_2);
  return;
}


// Reference entry 1054b860; body size 39 bytes.
#line 1 "ENTRY_1054b860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054b860(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xe7a8));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 1054bec0; body size 13 bytes.
#line 1 "ENTRY_1054bec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054bec0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xec) = (undefined4)(param_2);
  return;
}


// Reference entry 1054c0e0; body size 21 bytes.
#line 1 "ENTRY_1054c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054c0e0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[5](*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1054c300; body size 21 bytes.
#line 1 "ENTRY_1054c300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054c300(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[6](*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 1054c320; body size 6 bytes.
#line 1 "ENTRY_1054c320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1054c320(void)

{
  return (char *)("SCIOpLoadLogo");
}


// Reference entry 1054c330; body size 28 bytes.
#line 1 "ENTRY_1054c330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054c330(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 1054c360; body size 27 bytes.
#line 1 "ENTRY_1054c360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054c360(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 1054c3d0; body size 9 bytes.
#line 1 "ENTRY_1054c3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054c3d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpLoadLogo);
  return (undefined4 *)(param_1);
}


// Reference entry 1054c940; body size 7 bytes.
#line 1 "ENTRY_1054c940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1054c940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1054caa0; body size 4 bytes.
#line 1 "ENTRY_1054caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1054caa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1054d020; body size 6 bytes.
#line 1 "ENTRY_1054d020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1054d020(void)

{
  return (char *)("SCIOpLoadLogo");
}


// Reference entry 1054d040; body size 40 bytes.
#line 1 "ENTRY_1054d040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1054d040(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x20));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 1054d600; body size 28 bytes.
#line 1 "ENTRY_1054d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1054d600(undefined4 *param_1)

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


// Reference entry 1054d6d0; body size 25 bytes.
#line 1 "ENTRY_1054d6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054d6d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054d6f0; body size 18 bytes.
#line 1 "ENTRY_1054d6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054d6f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054d710; body size 25 bytes.
#line 1 "ENTRY_1054d710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054d710(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054d730; body size 22 bytes.
#line 1 "ENTRY_1054d730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054d730(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1054d750; body size 22 bytes.
#line 1 "ENTRY_1054d750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054d750(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1054d770; body size 18 bytes.
#line 1 "ENTRY_1054d770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054d770(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054d860; body size 38 bytes.
#line 1 "ENTRY_1054d860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1054d860(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1054d890; body size 22 bytes.
#line 1 "ENTRY_1054d890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054d890(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1054d8b0; body size 40 bytes.
#line 1 "ENTRY_1054d8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1054d8b0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1054d8f0; body size 91 bytes.
#line 1 "ENTRY_1054d8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1054d8f0(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 1054d970; body size 26 bytes.
#line 1 "ENTRY_1054d970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1054d970(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1054d990; body size 26 bytes.
#line 1 "ENTRY_1054d990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1054d990(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1054d9b0; body size 3 bytes.
#line 1 "ENTRY_1054d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054d9b0(void)

{
  return;
}


// Reference entry 1054d9c0; body size 25 bytes.
#line 1 "ENTRY_1054d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054d9c0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1054d9e0; body size 13 bytes.
#line 1 "ENTRY_1054d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054d9e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1054d9f0; body size 13 bytes.
#line 1 "ENTRY_1054d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054d9f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1054da00; body size 33 bytes.
#line 1 "ENTRY_1054da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1054da00(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1054da30; body size 3 bytes.
#line 1 "ENTRY_1054da30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054da30(void)

{
  return;
}


// Reference entry 1054da40; body size 3 bytes.
#line 1 "ENTRY_1054da40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054da40(void)

{
  return;
}


// Reference entry 1054daf0; body size 39 bytes.
#line 1 "ENTRY_1054daf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054daf0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (*(code ***)piVar2)[1]();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 1054db20; body size 39 bytes.
#line 1 "ENTRY_1054db20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054db20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (*(code ***)piVar2)[1]();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 1054db50; body size 18 bytes.
#line 1 "ENTRY_1054db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054db50(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 1054db70; body size 39 bytes.
#line 1 "ENTRY_1054db70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054db70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    (*(code ***)piVar2)[1]();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 1054e2b0; body size 15 bytes.
#line 1 "ENTRY_1054e2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054e2b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 1054e370; body size 5 bytes.
#line 1 "ENTRY_1054e370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e380; body size 7 bytes.
#line 1 "ENTRY_1054e380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1054e390; body size 7 bytes.
#line 1 "ENTRY_1054e390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1054e3a0; body size 5 bytes.
#line 1 "ENTRY_1054e3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e3b0; body size 37 bytes.
#line 1 "ENTRY_1054e3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e3b0(int param_1,SCStr *param_2)

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


// Reference entry 1054e3e0; body size 33 bytes.
#line 1 "ENTRY_1054e3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1054e3e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1054e410; body size 92 bytes.
#line 1 "ENTRY_1054e410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1054e410(int *param_1,int *param_2,int *param_3)

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
        (*(code ***)piVar1)[2]();
        iVar2 = (int)(*param_1);
      }
      *param_3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_1[1]);
      param_3[1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (*(code ***)piVar1)[1]();
      }
    }
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while ((int *)(param_1) != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 1054e5d0; body size 5 bytes.
#line 1 "ENTRY_1054e5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e5d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e5e0; body size 5 bytes.
#line 1 "ENTRY_1054e5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e5e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e690; body size 36 bytes.
#line 1 "ENTRY_1054e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1054e690(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1054e760; body size 5 bytes.
#line 1 "ENTRY_1054e760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e770; body size 5 bytes.
#line 1 "ENTRY_1054e770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e780; body size 5 bytes.
#line 1 "ENTRY_1054e780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e790; body size 5 bytes.
#line 1 "ENTRY_1054e790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e7a0; body size 5 bytes.
#line 1 "ENTRY_1054e7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e7a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e7b0; body size 5 bytes.
#line 1 "ENTRY_1054e7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e7c0; body size 5 bytes.
#line 1 "ENTRY_1054e7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e7c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e7d0; body size 5 bytes.
#line 1 "ENTRY_1054e7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054e7d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054e7e0; body size 13 bytes.
#line 1 "ENTRY_1054e7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054e7e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 1054e7f0; body size 34 bytes.
#line 1 "ENTRY_1054e7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054e7f0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 1054e820; body size 28 bytes.
#line 1 "ENTRY_1054e820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054e820(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1054e850; body size 28 bytes.
#line 1 "ENTRY_1054e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054e850(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1054e880; body size 28 bytes.
#line 1 "ENTRY_1054e880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054e880(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 1054e8b0; body size 3 bytes.
#line 1 "ENTRY_1054e8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1054e8b0(void)

{
  return;
}


// Reference entry 1054e9c0; body size 86 bytes.
#line 1 "ENTRY_1054e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1054e9c0(int *param_1,int *param_2)

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


// Reference entry 1054ea30; body size 36 bytes.
#line 1 "ENTRY_1054ea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1054ea30(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1054dba0<>(puVar1,param_2);
  return;
}


// Reference entry 1054eab0; body size 15 bytes.
#line 1 "ENTRY_1054eab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eab0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1054ead0; body size 15 bytes.
#line 1 "ENTRY_1054ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054ead0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1054eaf0; body size 5 bytes.
#line 1 "ENTRY_1054eaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eaf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054eb00; body size 5 bytes.
#line 1 "ENTRY_1054eb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eb00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054eb10; body size 5 bytes.
#line 1 "ENTRY_1054eb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eb10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054eb20; body size 5 bytes.
#line 1 "ENTRY_1054eb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054eb30; body size 5 bytes.
#line 1 "ENTRY_1054eb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eb30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054eb40; body size 5 bytes.
#line 1 "ENTRY_1054eb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eb40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054eb50; body size 5 bytes.
#line 1 "ENTRY_1054eb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054eb60; body size 5 bytes.
#line 1 "ENTRY_1054eb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054eb70; body size 5 bytes.
#line 1 "ENTRY_1054eb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1054eb70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054ed70; body size 32 bytes.
#line 1 "ENTRY_1054ed70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054ed70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (*(code ***)piVar1)[1]();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054eda0; body size 32 bytes.
#line 1 "ENTRY_1054eda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054eda0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (*(code ***)piVar1)[1]();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1054ee10; body size 16 bytes.
#line 1 "ENTRY_1054ee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054ee10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054eeb0; body size 18 bytes.
#line 1 "ENTRY_1054eeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054eeb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054ef10; body size 11 bytes.
#line 1 "ENTRY_1054ef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054ef10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1054efa0; body size 11 bytes.
#line 1 "ENTRY_1054efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054efa0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1054efb0; body size 11 bytes.
#line 1 "ENTRY_1054efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054efb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1054efc0; body size 16 bytes.
#line 1 "ENTRY_1054efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054efc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054efe0; body size 21 bytes.
#line 1 "ENTRY_1054efe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054efe0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f000; body size 11 bytes.
#line 1 "ENTRY_1054f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054f000(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f010; body size 11 bytes.
#line 1 "ENTRY_1054f010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054f010(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f020; body size 11 bytes.
#line 1 "ENTRY_1054f020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054f020(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f030; body size 11 bytes.
#line 1 "ENTRY_1054f030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1054f030(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f040; body size 23 bytes.
#line 1 "ENTRY_1054f040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054f040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f060; body size 23 bytes.
#line 1 "ENTRY_1054f060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054f060(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f080; body size 3 bytes.
#line 1 "ENTRY_1054f080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1054f080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054f090; body size 3 bytes.
#line 1 "ENTRY_1054f090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1054f090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054f0a0; body size 3 bytes.
#line 1 "ENTRY_1054f0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1054f0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1054f0b0; body size 52 bytes.
#line 1 "ENTRY_1054f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054f0b0(undefined4 *param_1)

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


// Reference entry 1054f100; body size 23 bytes.
#line 1 "ENTRY_1054f100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054f100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f120; body size 23 bytes.
#line 1 "ENTRY_1054f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054f120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f460; body size 9 bytes.
#line 1 "ENTRY_1054f460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054f460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceManifestCB);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f470; body size 84 bytes.
#line 1 "ENTRY_1054f470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1054f470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPDataIO);
  thunk_FUN_1124a160(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceManifestGetRequest);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_RServiceManifestGetRequest);
  param_1[0x1844] = (undefined4)(0);
  param_1[0x1845] = (undefined4)(0);
  param_1[0x1846] = (undefined4)(0);
  param_1[0x1847] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1054f910; body size 11 bytes.
#line 1 "ENTRY_1054f910"

/* WARNING: Removing unreachable block_1054f910 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1054f910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RDownloadServiceManifestFilesAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 105502c0; body size 65 bytes.
#line 1 "ENTRY_105502c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105502c0(int *param_2)
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
      (*(code ***)piVar1)[2]();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (*(code ***)piVar1)[1]();
    }
  }
  return (int *)(param_1);
}


// Reference entry 10550390; body size 65 bytes.
#line 1 "ENTRY_10550390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10550390(int *param_2)
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
      (*(code ***)piVar1)[2]();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (*(code ***)piVar1)[1]();
    }
  }
  return (int *)(param_1);
}


// Reference entry 10550460; body size 14 bytes.
#line 1 "ENTRY_10550460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10550460(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10550480; body size 14 bytes.
#line 1 "ENTRY_10550480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10550480(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105504a0; body size 14 bytes.
#line 1 "ENTRY_105504a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105504a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105504c0; body size 14 bytes.
#line 1 "ENTRY_105504c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105504c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105504e0; body size 14 bytes.
#line 1 "ENTRY_105504e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105504e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10550500; body size 14 bytes.
#line 1 "ENTRY_10550500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10550500(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10550520; body size 14 bytes.
#line 1 "ENTRY_10550520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10550520(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10550540; body size 14 bytes.
#line 1 "ENTRY_10550540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10550540(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10550670; body size 3 bytes.
#line 1 "ENTRY_10550670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10550670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10550680; body size 3 bytes.
#line 1 "ENTRY_10550680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10550680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10550690; body size 4 bytes.
#line 1 "ENTRY_10550690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10550690(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 105506a0; body size 3 bytes.
#line 1 "ENTRY_105506a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105506a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105506b0; body size 6 bytes.
#line 1 "ENTRY_105506b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105506b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105506c0; body size 6 bytes.
#line 1 "ENTRY_105506c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105506c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105506d0; body size 3 bytes.
#line 1 "ENTRY_105506d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105506d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105506e0; body size 3 bytes.
#line 1 "ENTRY_105506e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105506e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105506f0; body size 3 bytes.
#line 1 "ENTRY_105506f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105506f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10550700; body size 3 bytes.
#line 1 "ENTRY_10550700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10550700(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10550710; body size 20 bytes.
#line 1 "ENTRY_10550710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10550710(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 105507a0; body size 6 bytes.
#line 1 "ENTRY_105507a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_105507a0(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 105507b0; body size 6 bytes.
#line 1 "ENTRY_105507b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_105507b0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 105507c0; body size 6 bytes.
#line 1 "ENTRY_105507c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_105507c0(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 105507d0; body size 6 bytes.
#line 1 "ENTRY_105507d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_105507d0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10550c80; body size 31 bytes.
#line 1 "ENTRY_10550c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10550c80(undefined4 *param_1)

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


// Reference entry 10550cd0; body size 49 bytes.
#line 1 "ENTRY_10550cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10550cd0(uint param_2)
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


// Reference entry 10550d10; body size 49 bytes.
#line 1 "ENTRY_10550d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10550d10(uint param_2)
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


// Reference entry 10550e50; body size 14 bytes.
#line 1 "ENTRY_10550e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10550e50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10550e70; body size 3 bytes.
#line 1 "ENTRY_10550e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10550e70(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10550e80; body size 3 bytes.
#line 1 "ENTRY_10550e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10550e80(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10550e90; body size 3 bytes.
#line 1 "ENTRY_10550e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10550e90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10551420; body size 3 bytes.
#line 1 "ENTRY_10551420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551430; body size 3 bytes.
#line 1 "ENTRY_10551430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551440; body size 3 bytes.
#line 1 "ENTRY_10551440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551450; body size 3 bytes.
#line 1 "ENTRY_10551450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551460; body size 3 bytes.
#line 1 "ENTRY_10551460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551470; body size 3 bytes.
#line 1 "ENTRY_10551470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551480; body size 3 bytes.
#line 1 "ENTRY_10551480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551490; body size 3 bytes.
#line 1 "ENTRY_10551490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105514a0; body size 3 bytes.
#line 1 "ENTRY_105514a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105514a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105514b0; body size 3 bytes.
#line 1 "ENTRY_105514b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105514b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105514c0; body size 3 bytes.
#line 1 "ENTRY_105514c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105514c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105514d0; body size 3 bytes.
#line 1 "ENTRY_105514d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105514d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105514e0; body size 3 bytes.
#line 1 "ENTRY_105514e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105514e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105514f0; body size 3 bytes.
#line 1 "ENTRY_105514f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105514f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551500; body size 3 bytes.
#line 1 "ENTRY_10551500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551510; body size 3 bytes.
#line 1 "ENTRY_10551510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10551510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10551820; body size 30 bytes.
#line 1 "ENTRY_10551820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10551820(int param_1)

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


// Reference entry 10551880; body size 3 bytes.
#line 1 "ENTRY_10551880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10551880(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10551890; body size 3 bytes.
#line 1 "ENTRY_10551890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10551890(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 105518a0; body size 3 bytes.
#line 1 "ENTRY_105518a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105518a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 105518b0; body size 11 bytes.
#line 1 "ENTRY_105518b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105518b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105518c0; body size 6 bytes.
#line 1 "ENTRY_105518c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105518c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10551a30; body size 38 bytes.
#line 1 "ENTRY_10551a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10551a30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10551b00; body size 27 bytes.
#line 1 "ENTRY_10551b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10551b00(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10551bd0; body size 27 bytes.
#line 1 "ENTRY_10551bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10551bd0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10551ca0; body size 13 bytes.
#line 1 "ENTRY_10551ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10551ca0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10551fd0; body size 42 bytes.
#line 1 "ENTRY_10551fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10551fd0(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 != 0) {
    piVar1 = (int *)(*(int **)(param_1 + 0x4c), 0);
    if ((int *)(piVar1) != *(int **)(param_1 + 0x50)) {
      *piVar1 = (int)(param_2);
      *(int*)(param_1 + 0x4c) = (int)(*(int *)(param_1 + 0x4c) + 4);
      return;
    }
    thunk_FUN_1054dba0<>(piVar1,&param_2);
  }
  return;
}


// Reference entry 10552060; body size 87 bytes.
#line 1 "ENTRY_10552060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10552060(uint param_1)

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


// Reference entry 105520d0; body size 97 bytes.
#line 1 "ENTRY_105520d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105520d0(uint param_1)

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


// Reference entry 10552150; body size 87 bytes.
#line 1 "ENTRY_10552150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10552150(uint param_1)

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


// Reference entry 105521c0; body size 11 bytes.
#line 1 "ENTRY_105521c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105521c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105521d0; body size 11 bytes.
#line 1 "ENTRY_105521d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105521d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10552440; body size 9 bytes.
#line 1 "ENTRY_10552440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10552440(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10552450; body size 9 bytes.
#line 1 "ENTRY_10552450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10552450(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10552490; body size 6 bytes.
#line 1 "ENTRY_10552490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10552490(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 105524c0; body size 183 bytes.
#line 1 "ENTRY_105524c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105524c0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_108 [260];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_108);
  if (*(char *)(param_1 + 0x34) == '\0') {
    thunk_FUN_1145c720((uint)&auStack_108,0x101,"%s/%s",PTR_DAT_12126b6c,"manifests");
    iVar4 = (int)(0);
    do {
      iVar2 = (int)(thunk_FUN_1145cf60((uint)&auStack_108,0x1ed), 0);
      piVar3 = (int *)(_errno(), 0);
      iVar1 = (int)(*piVar3);
      if ((iVar2 == 0) || (iVar1 == 0x11)) {
        *(undefined1*)(param_1 + 0x34) = (undefined1)(1);
        goto LAB_10552558;
      }
      iVar4 = (int)(iVar4 + 1);
    } while ((iVar1 == 0xb) && (iVar4 < 5));
    if (*(char *)(param_1 + 0x34) == '\0') {
      thunk_FUN_112af4e0("svcmanifest",1,"Could not create manifest directory, error: %d",iVar1);
    }
  }
LAB_10552558:
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 105525b0; body size 63 bytes.
#line 1 "ENTRY_105525b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105525b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10552600; body size 61 bytes.
#line 1 "ENTRY_10552600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10552600(int param_1,int param_2)

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


// Reference entry 10552650; body size 66 bytes.
#line 1 "ENTRY_10552650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10552650(int param_1,int param_2)

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


// Reference entry 10552850; body size 9 bytes.
#line 1 "ENTRY_10552850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10552850(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10552c00; body size 11 bytes.
#line 1 "ENTRY_10552c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10552c00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10552c10; body size 12 bytes.
#line 1 "ENTRY_10552c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10552c10(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10552c20; body size 12 bytes.
#line 1 "ENTRY_10552c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10552c20(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10552ea0; body size 42 bytes.
#line 1 "ENTRY_10552ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10552ea0(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(char *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10553a10; body size 31 bytes.
#line 1 "ENTRY_10553a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10553a10(undefined4 param_1)

{
  int iVar1;
  
  thunk_FUN_110c2c60();
  iVar1 = (int)(thunk_FUN_110c1f30(param_1), 0);
  if (iVar1 != 0) {
    return (undefined4)(*(undefined4 *)(iVar1 + 4));
  }
  return (undefined4)(0);
}


// Reference entry 10553af0; body size 4 bytes.
#line 1 "ENTRY_10553af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10553af0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 10553b10; body size 11 bytes.
#line 1 "ENTRY_10553b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10553b10(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(&PTR_s_https___www__119e5428);
  if ((int *)(PTR_s_https___www__119e5428) != (int *)(0x0)) {
    do {
      if (*(char *)((ppuVar1 + 2)) == *(char *)((param_1 + 0xa0))) {
        thunk_FUN_1145c720(param_2,param_3,&DAT_1188e99c,*ppuVar1,param_1 + 0xa1);
        return (undefined4)(param_2);
      }
      ppuVar1 = (undefined **)(ppuVar1 + 3);
    } while ((undefined *)(*ppuVar1) != (undefined *)(0x0));
  }
  thunk_FUN_1106a8d0(param_2,(char *)(param_1 + 0xa0),param_3);
  return (undefined4)(param_2);
}


// Reference entry 10553f50; body size 23 bytes.
#line 1 "ENTRY_10553f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10553f50(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6278));
  return (SCStr *)(param_2);
}


// Reference entry 10553f70; body size 23 bytes.
#line 1 "ENTRY_10553f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10553f70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6110));
  return (SCStr *)(param_2);
}


// Reference entry 10553f90; body size 25 bytes.
#line 1 "ENTRY_10553f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10553f90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6278));
  return (SCStr *)(param_2);
}


// Reference entry 10553fd0; body size 23 bytes.
#line 1 "ENTRY_10553fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10553fd0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6280));
  return (SCStr *)(param_2);
}


// Reference entry 10553ff0; body size 23 bytes.
#line 1 "ENTRY_10553ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10553ff0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6118));
  return (SCStr *)(param_2);
}


// Reference entry 10554010; body size 25 bytes.
#line 1 "ENTRY_10554010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10554010(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6280));
  return (SCStr *)(param_2);
}


// Reference entry 10554030; body size 16 bytes.
#line 1 "ENTRY_10554030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10554030(int param_1)

{
  return (uint)(-(uint)(*(int *)(param_1 + 0x198c) != 0) & *(int *)(param_1 + 0x198c) + 8U);
}


// Reference entry 10554050; body size 8 bytes.
#line 1 "ENTRY_10554050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10554050(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  undefined **ppuVar1;
  
  ppuVar1 = (undefined **)(&PTR_s_https___www__119e5428);
  if ((int *)(PTR_s_https___www__119e5428) != (int *)(0x0)) {
    do {
      if (*(char *)((ppuVar1 + 2)) == *(char *)((param_1 + 0x60))) {
        thunk_FUN_1145c720(param_2,param_3,&DAT_1188e99c,*ppuVar1,param_1 + 0x61);
        return (undefined4)(param_2);
      }
      ppuVar1 = (undefined **)(ppuVar1 + 3);
    } while ((undefined *)(*ppuVar1) != (undefined *)(0x0));
  }
  thunk_FUN_1106a8d0(param_2,(char *)(param_1 + 0x60),param_3);
  return (undefined4)(param_2);
}


// Reference entry 10554490; body size 23 bytes.
#line 1 "ENTRY_10554490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10554490(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x627c));
  return (SCStr *)(param_2);
}


// Reference entry 105544b0; body size 23 bytes.
#line 1 "ENTRY_105544b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_105544b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6114));
  return (SCStr *)(param_2);
}


// Reference entry 105544d0; body size 25 bytes.
#line 1 "ENTRY_105544d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_105544d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x627c));
  return (SCStr *)(param_2);
}


// Reference entry 105544f0; body size 7 bytes.
#line 1 "ENTRY_105544f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105544f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6284));
}


// Reference entry 10554500; body size 7 bytes.
#line 1 "ENTRY_10554500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10554500(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x611c));
}


// Reference entry 10554510; body size 10 bytes.
#line 1 "ENTRY_10554510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10554510(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x6284));
}


// Reference entry 105547e0; body size 85 bytes.
#line 1 "ENTRY_105547e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105547e0(SCStr *param_2,SCStr *param_3,undefined4 param_4)
{
  int param_1 = (int )this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 0x6114));
  if ((SCStr *)((param_2)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 0x6118));
  if ((SCStr *)((param_3)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)param_3));
    ((SCStr *)(pSVar1))->int_addref();
  }
  *(undefined4*)(param_1 + 0x611c) = (undefined4)(param_4);
  return;
}


// Reference entry 10555a50; body size 7 bytes.
#line 1 "ENTRY_10555a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10555a50(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10555a60; body size 7 bytes.
#line 1 "ENTRY_10555a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10555a60(char *param_1)

{
  return (bool)(*param_1 == (char)(('\0')));
}


// Reference entry 10556430; body size 8 bytes.
#line 1 "ENTRY_10556430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10556430(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x128));
}


// Reference entry 10556440; body size 6 bytes.
#line 1 "ENTRY_10556440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10556440(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10556450; body size 6 bytes.
#line 1 "ENTRY_10556450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10556450(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10556460; body size 6 bytes.
#line 1 "ENTRY_10556460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10556460(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10556470; body size 6 bytes.
#line 1 "ENTRY_10556470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10556470(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10556480; body size 6 bytes.
#line 1 "ENTRY_10556480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10556480(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10556490; body size 6 bytes.
#line 1 "ENTRY_10556490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10556490(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10556bd0; body size 5 bytes.
#line 1 "ENTRY_10556bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10556bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10556be0; body size 8 bytes.
#line 1 "ENTRY_10556be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10556be0(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x126));
}


// Reference entry 10556bf0; body size 3 bytes.
#line 1 "ENTRY_10556bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10556bf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10556c00; body size 3 bytes.
#line 1 "ENTRY_10556c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10556c00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10556c10; body size 36 bytes.
#line 1 "ENTRY_10556c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10556c10(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1054dba0<>(puVar1,param_2);
  return;
}


// Reference entry 10557040; body size 28 bytes.
#line 1 "ENTRY_10557040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10557040(undefined4 *param_1)

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


// Reference entry 10557070; body size 58 bytes.
#line 1 "ENTRY_10557070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10557070(int param_2)
{
  int param_1 = (int )this;
  int *_Src;
  int *piVar1;
  int *_Dst;
  
  _Dst = (int *)(*(int **)(param_1 + 0x48), 0);
  piVar1 = (int *)(*(int **)(param_1 + 0x4c), 0);
  if ((int *)((_Dst)) != (int *)(piVar1)) {
    while (_Src = (int *)(_Dst + 1), *_Dst != (int)((param_2))) {
      _Dst = (int *)(_Src);
      if ((int *)(_Src) == (int *)(piVar1)) {
        return;
      }
    }
    memmove(_Dst,_Src,(int)piVar1 - (int)_Src);
    *(int*)(param_1 + 0x4c) = (int)(*(int *)(param_1 + 0x4c) + -4);
  }
  return;
}


// Reference entry 10557920; body size 7 bytes.
#line 1 "ENTRY_10557920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10557920(int param_1)

{
  return (int)(param_1 + 0x1528);
}


// Reference entry 10557930; body size 7 bytes.
#line 1 "ENTRY_10557930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10557930(int param_1)

{
  return (int)(param_1 + 0x1540);
}


// Reference entry 10557cd0; body size 8 bytes.
#line 1 "ENTRY_10557cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10557cd0(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x124));
}


// Reference entry 10557d90; body size 12 bytes.
#line 1 "ENTRY_10557d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10557d90(int param_1)

{
  return (bool)((*(uint *)(param_1 + 0x130) >> 0x16) & 1);
}


// Reference entry 10557fa0; body size 12 bytes.
#line 1 "ENTRY_10557fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10557fa0(int param_1)

{
  return (bool)((*(uint *)(param_1 + 0x130) >> 0x16) & 1);
}


// Reference entry 10557fb0; body size 11 bytes.
#line 1 "ENTRY_10557fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10557fb0(int param_1)

{
  return (bool)(*(char *)(param_1 + 0xa0) != '\0');
}


// Reference entry 10558160; body size 8 bytes.
#line 1 "ENTRY_10558160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10558160(int param_1)

{
  return (bool)(*(char *)(param_1 + 0x60) != '\0');
}


// Reference entry 10558410; body size 376 bytes.
#line 1 "ENTRY_10558410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10558410(undefined4 *param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  SCStr *this_;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  FILE *_File;
  uint uVar5;
  size_t sVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  FILE *_File_00;
  SCStr *pSStack_110;
  undefined4 *puStack_10c;
  undefined1 auStack_108 [260];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&pSStack_110);
  puStack_10c = (undefined4 *)(param_2);
  pSStack_110 = (SCStr *)(param_3);
  if (*(char *)(param_1 + 0x34) == '\0') {
    thunk_FUN_1145c720((uint)&auStack_108,0x101,"%s/%s",PTR_DAT_12126b6c,"manifests");
    iVar8 = (int)(0);
    do {
      iVar3 = (int)(thunk_FUN_1145cf60((uint)&auStack_108,0x1ed), 0);
      piVar4 = (int *)(_errno(), 0);
      iVar1 = (int)(*piVar4);
      if ((iVar3 == 0) || (iVar1 == 0x11)) {
        *(undefined1*)(param_1 + 0x34) = (undefined1)(1);
        goto LAB_105584bb;
      }
      iVar8 = (int)(iVar8 + 1);
    } while ((iVar1 == 0xb) && (iVar8 < 5));
    if (*(char *)(param_1 + 0x34) == '\0') {
      thunk_FUN_112af4e0("svcmanifest",1,"Could not create manifest directory, error: %d",iVar1);
    }
  }
LAB_105584bb:
  puVar2 = (undefined4 *)(puStack_10c);
  puVar7 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*puStack_10c != (undefined1 *)((0x0))) {
    puVar7 = (undefined1 *)((undefined1 *)*puStack_10c);
  }
  _File = (FILE *)((FILE *)thunk_FUN_1145cb70(puVar7,&DAT_118b3060), 0);
  if ((FILE *)(_File) == (FILE *)(0x0)) {
    puVar7 = (undefined1 *)((undefined1 *)*puVar2);
    puVar9 = (undefined1 *)(&DAT_1186d2ee);
    if ((undefined1 *)(puVar7) != (undefined1 *)(0x0)) {
      puVar9 = (undefined1 *)(puVar7);
    }
    thunk_FUN_112af4e0("svcmanifest",1,"Could not open manifest file for writing: %s",puVar9);
  }
  else {
    puVar7 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)pSStack_110 != (undefined1 *)((0x0))) {
      puVar7 = (undefined1 *)(*(undefined1 **)pSStack_110);
    }
    _File_00 = (FILE *)(_File);
    uVar5 = (uint)(((SCStr *)(pSStack_110))->length(), 0);
    sVar6 = (size_t)(fwrite(puVar7,1,uVar5,_File_00), 0);
    fclose(_File);
    this_ = (SCStr *)(pSStack_110);
    uVar5 = (uint)(((SCStr *)(pSStack_110))->length(), 0);
    if (sVar6 != uVar5) {
      puVar7 = (undefined1 *)((undefined1 *)*puVar2);
      puVar9 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)(puVar7) != (undefined1 *)(0x0)) {
        puVar9 = (undefined1 *)(puVar7);
      }
      uVar5 = (uint)(((SCStr *)(this_))->length(), 0);
      thunk_FUN_112af4e0("svcmanifest",1, "Failed to write manifest file %s. Wrote %lu out of %lu bytes",puVar9,sVar6
                         ,uVar5);
    }
  }
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 105585f0; body size 91 bytes.
#line 1 "ENTRY_105585f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105585f0(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10558670; body size 43 bytes.
#line 1 "ENTRY_10558670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10558670(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(*(code ***)param_2)[3](), 0);
    param_1[1] = (int)((int)piVar1);
    (*(code ***)piVar1)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 105586b0; body size 26 bytes.
#line 1 "ENTRY_105586b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105586b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 105586d0; body size 40 bytes.
#line 1 "ENTRY_105586d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105586d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10558710; body size 40 bytes.
#line 1 "ENTRY_10558710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10558710(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10558750; body size 40 bytes.
#line 1 "ENTRY_10558750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10558750(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10558790; body size 40 bytes.
#line 1 "ENTRY_10558790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10558790(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10558890; body size 16 bytes.
#line 1 "ENTRY_10558890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10558890(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10558930; body size 9 bytes.
#line 1 "ENTRY_10558930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10558930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCPBrowseOperationCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10558940; body size 47 bytes.
#line 1 "ENTRY_10558940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10558940(undefined1 *param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11202480();
  param_1[2] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RLocationNameExtractorCB);
  param_1[1] = (undefined4)(param_2);
  if (param_3 != 0) {
    *param_2 = (undefined1)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105590e0; body size 87 bytes.
#line 1 "ENTRY_105590e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105590e0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10200aa0<>(param_2,param_3,param_4,param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 105593f0; body size 33 bytes.
#line 1 "ENTRY_105593f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105593f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioSetZIPDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10559e70; body size 56 bytes.
#line 1 "ENTRY_10559e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10559e70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[0x46] = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRadioPickCityBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0x10] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseItem);
  thunk_FUN_110a9ef0();
  thunk_FUN_10203dc0();
  return;
}


// Reference entry 1055a1c0; body size 19 bytes.
#line 1 "ENTRY_1055a1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1055a1c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1055a3e0; body size 3 bytes.
#line 1 "ENTRY_1055a3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055a3e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055a3f0; body size 3 bytes.
#line 1 "ENTRY_1055a3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055a3f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055a400; body size 3 bytes.
#line 1 "ENTRY_1055a400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055a400(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055a410; body size 3 bytes.
#line 1 "ENTRY_1055a410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055a410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055a420; body size 3 bytes.
#line 1 "ENTRY_1055a420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055a420(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055a430; body size 3 bytes.
#line 1 "ENTRY_1055a430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055a430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055cb50; body size 16 bytes.
#line 1 "ENTRY_1055cb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055cb50(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1055cb70; body size 16 bytes.
#line 1 "ENTRY_1055cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055cb70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1055cb90; body size 16 bytes.
#line 1 "ENTRY_1055cb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055cb90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1055cbb0; body size 16 bytes.
#line 1 "ENTRY_1055cbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055cbb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1055cbd0; body size 9 bytes.
#line 1 "ENTRY_1055cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055cbd0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1055f450; body size 7 bytes.
#line 1 "ENTRY_1055f450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1055f450(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1055f460; body size 7 bytes.
#line 1 "ENTRY_1055f460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1055f460(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1055fc50; body size 3 bytes.
#line 1 "ENTRY_1055fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055fc50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055fc60; body size 3 bytes.
#line 1 "ENTRY_1055fc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055fc60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055fc70; body size 3 bytes.
#line 1 "ENTRY_1055fc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055fc70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055fc80; body size 3 bytes.
#line 1 "ENTRY_1055fc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1055fc80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1055fd10; body size 28 bytes.
#line 1 "ENTRY_1055fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1055fd10(undefined4 *param_1)

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


// Reference entry 1055fd40; body size 28 bytes.
#line 1 "ENTRY_1055fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1055fd40(undefined4 *param_1)

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


// Reference entry 1055fd70; body size 28 bytes.
#line 1 "ENTRY_1055fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1055fd70(undefined4 *param_1)

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


// Reference entry 1055fda0; body size 28 bytes.
#line 1 "ENTRY_1055fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1055fda0(undefined4 *param_1)

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


// Reference entry 1055fdd0; body size 28 bytes.
#line 1 "ENTRY_1055fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1055fdd0(undefined4 *param_1)

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


// Reference entry 1055fe00; body size 28 bytes.
#line 1 "ENTRY_1055fe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1055fe00(undefined4 *param_1)

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


// Reference entry 1055fe30; body size 28 bytes.
#line 1 "ENTRY_1055fe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1055fe30(undefined4 *param_1)

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


// Reference entry 105616f0; body size 28 bytes.
#line 1 "ENTRY_105616f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105616f0(undefined4 *param_1)

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


// Reference entry 10561a20; body size 91 bytes.
#line 1 "ENTRY_10561a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10561a20(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10561cc0; body size 91 bytes.
#line 1 "ENTRY_10561cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10561cc0(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10561e80; body size 83 bytes.
#line 1 "ENTRY_10561e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10561e80(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (*(code ***)piVar1)[2]();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(*(code ***)param_2)[3](), 0);
      param_1[1] = (int)((int)piVar1);
      (*(code ***)piVar1)[1]();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 105622f0; body size 83 bytes.
#line 1 "ENTRY_105622f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105622f0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (*(code ***)piVar1)[2]();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(*(code ***)param_2)[3](), 0);
      param_1[1] = (int)((int)piVar1);
      (*(code ***)piVar1)[1]();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 105627a0; body size 83 bytes.
#line 1 "ENTRY_105627a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105627a0(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (*(code ***)piVar1)[2]();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(*(code ***)param_2)[3](), 0);
      param_1[1] = (int)((int)piVar1);
      (*(code ***)piVar1)[1]();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10562a00; body size 40 bytes.
#line 1 "ENTRY_10562a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562a00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562ac0; body size 40 bytes.
#line 1 "ENTRY_10562ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562ac0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562b40; body size 40 bytes.
#line 1 "ENTRY_10562b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562b40(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562b80; body size 40 bytes.
#line 1 "ENTRY_10562b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562b80(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562bc0; body size 40 bytes.
#line 1 "ENTRY_10562bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562bc0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562c00; body size 40 bytes.
#line 1 "ENTRY_10562c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10562c00(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10562c40; body size 6 bytes.
#line 1 "ENTRY_10562c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10562c40(void)

{
  return (char *)("SCIActionWithBoolDescriptor");
}


// Reference entry 10562c50; body size 6 bytes.
#line 1 "ENTRY_10562c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10562c50(void)

{
  return (char *)("SCIPlayQueue");
}


// Reference entry 10562c60; body size 6 bytes.
#line 1 "ENTRY_10562c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10562c60(void)

{
  return (char *)("SCIPlayQueueMgr");
}


// Reference entry 10562d00; body size 27 bytes.
#line 1 "ENTRY_10562d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10562d00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10562fd0; body size 16 bytes.
#line 1 "ENTRY_10562fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10562fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105630f0; body size 16 bytes.
#line 1 "ENTRY_105630f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105630f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10563110; body size 9 bytes.
#line 1 "ENTRY_10563110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10563110(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10563240; body size 127 bytes.
#line 1 "ENTRY_10563240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10563240(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))(), 0);
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))(), 0);
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50)) (param_3,param_4,param_5,param_6), 0);
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AVTransport:1",&DAT_11884fb0,uVar3,param_3, param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 105632e0; body size 127 bytes.
#line 1 "ENTRY_105632e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105632e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))(), 0);
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))(), 0);
  }
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50)) (param_3,param_4,param_5,param_6), 0);
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","SetAVTransportURI",uVar3, param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10563380; body size 37 bytes.
#line 1 "ENTRY_10563380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10563380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_101b94f0(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10563600; body size 82 bytes.
#line 1 "ENTRY_10563600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10563600(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddToQueueAtNumberDescriptor);
  thunk_FUN_1145c250(param_1 + 2,param_2,0x401);
  thunk_FUN_1145c250((int)param_1 + 0x409,param_3,0x1001);
  return (undefined4 *)(param_1);
}


// Reference entry 10563770; body size 9 bytes.
#line 1 "ENTRY_10563770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10563770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionWithBoolDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10563780; body size 250 bytes.
#line 1 "ENTRY_10563780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10563780(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  SCStr *this_;
  uint uVar1;
  SCStr *pSVar2;
  undefined4 uVar3;
  undefined4 *puStack_158;
  void *pvStack_154;
  undefined1 *puStack_150;
  undefined1 uStack_14c;
  undefined3 uStack_14b;
  undefined1 auStack_148 [320];
  uint uStack_8;

  uVar1 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_148);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  this_ = (SCStr *)((SCStr *)(param_1 + 2));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCInfoViewDescriptor);
  *(undefined4*)this_ = (undefined4)((SCStr *)(0));


  puStack_158 = (undefined4 *)(param_1);
  uStack_8 = (uint)(uVar1);
  thunk_FUN_1050f680<>(param_2,param_3);

  pSVar2 = (SCStr *)((SCStr *)thunk_FUN_105142d0(&puStack_158), 0);

  if ((SCStr *)((pSVar2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar2));
    ((SCStr *)(this_))->int_addref();
  }

  ((SCStr *)((SCStr *)&puStack_158))->int_release();
  uStack_14c = (undefined1)(((uint)(uStack_14b) << 8 | (uint)(2)));
  uVar3 = (undefined4)(thunk_FUN_105142b0(uVar1), 0);
  param_1[3] = (undefined4)(uVar3);
  thunk_FUN_105106c0();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10565070; body size 29 bytes.
#line 1 "ENTRY_10565070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte * __thiscall Recovered_Bulk::m_FUN_10565070(byte param_2,byte param_3,undefined4 param_4)
{
  byte *param_1 = (byte *)this;
  *param_1 = (byte)(*param_1 & 0xf8);
  param_1[1] = (byte)(param_2);
  param_1[2] = (byte)(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(param_4);
  return (byte *)(param_1);
}


// Reference entry 105650a0; body size 11 bytes.
#line 1 "ENTRY_105650a0"

/* WARNING: Removing unreachable block_105650a0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105650a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RLookupMetadataAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10565950; body size 28 bytes.
#line 1 "ENTRY_10565950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10565950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTGetMediaInfoAIOOp);
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


// Reference entry 10565980; body size 28 bytes.
#line 1 "ENTRY_10565980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10565980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPlayAIOOp);
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


// Reference entry 105659b0; body size 28 bytes.
#line 1 "ENTRY_105659b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105659b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTSetAVTransportURIAIOOp);
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


// Reference entry 105659e0; body size 18 bytes.
#line 1 "ENTRY_105659e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105659e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAddQueueOp);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObj);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10565c70; body size 19 bytes.
#line 1 "ENTRY_10565c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10565c70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10565d70; body size 7 bytes.
#line 1 "ENTRY_10565d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10565d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10566360; body size 18 bytes.
#line 1 "ENTRY_10566360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10566360(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpLookupMetadata);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpLookupMetadata);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObj);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10566c40; body size 3 bytes.
#line 1 "ENTRY_10566c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566c40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566c50; body size 7 bytes.
#line 1 "ENTRY_10566c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10566c50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10566c60; body size 3 bytes.
#line 1 "ENTRY_10566c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566c60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566c70; body size 7 bytes.
#line 1 "ENTRY_10566c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10566c70(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10566c80; body size 3 bytes.
#line 1 "ENTRY_10566c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566c80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566c90; body size 3 bytes.
#line 1 "ENTRY_10566c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566c90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566ca0; body size 3 bytes.
#line 1 "ENTRY_10566ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566ca0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566cb0; body size 3 bytes.
#line 1 "ENTRY_10566cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566cb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566cc0; body size 7 bytes.
#line 1 "ENTRY_10566cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10566cc0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10566cd0; body size 7 bytes.
#line 1 "ENTRY_10566cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10566cd0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10566ce0; body size 7 bytes.
#line 1 "ENTRY_10566ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10566ce0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10566cf0; body size 7 bytes.
#line 1 "ENTRY_10566cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10566cf0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10566d00; body size 4 bytes.
#line 1 "ENTRY_10566d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10566d10; body size 3 bytes.
#line 1 "ENTRY_10566d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566d20; body size 3 bytes.
#line 1 "ENTRY_10566d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566d30; body size 3 bytes.
#line 1 "ENTRY_10566d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566d40; body size 3 bytes.
#line 1 "ENTRY_10566d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566d50; body size 3 bytes.
#line 1 "ENTRY_10566d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566d60; body size 3 bytes.
#line 1 "ENTRY_10566d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566d70; body size 3 bytes.
#line 1 "ENTRY_10566d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566d80; body size 3 bytes.
#line 1 "ENTRY_10566d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566d90; body size 3 bytes.
#line 1 "ENTRY_10566d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566d90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10566da0; body size 3 bytes.
#line 1 "ENTRY_10566da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10566da0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1056d4e0; body size 59 bytes.
#line 1 "ENTRY_1056d4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_1056d4e0(int param_2)
{
  int param_1 = (int )this;
  if (*(byte *)((param_2 + 1)) < *(byte *)((param_1 + 1))) {
    return (undefined4)(1);
  }
  if (*(byte *)((param_1 + 1)) == *(byte *)((param_2 + 1))) {
    if (*(byte *)((param_2 + 2)) < *(byte *)((param_1 + 2))) {
      return (undefined4)(1);
    }
    if (*(byte *)((param_1 + 2)) == *(byte *)((param_2 + 2))) {
      if (*(uint *)((param_2 + 4)) < *(uint *)((param_1 + 4))) {
        return (undefined4)(1);
      }
      if (*(uint *)((param_1 + 4)) == *(uint *)((param_2 + 4))) {
        return (undefined4)(0);
      }
    }
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 105723f0; body size 16 bytes.
#line 1 "ENTRY_105723f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105723f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10572410; body size 16 bytes.
#line 1 "ENTRY_10572410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10572410(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10572430; body size 16 bytes.
#line 1 "ENTRY_10572430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10572430(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10572450; body size 16 bytes.
#line 1 "ENTRY_10572450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10572450(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10572470; body size 16 bytes.
#line 1 "ENTRY_10572470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10572470(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10572490; body size 16 bytes.
#line 1 "ENTRY_10572490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10572490(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105724b0; body size 16 bytes.
#line 1 "ENTRY_105724b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105724b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105724d0; body size 16 bytes.
#line 1 "ENTRY_105724d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105724d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105724f0; body size 16 bytes.
#line 1 "ENTRY_105724f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105724f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10574850; body size 7 bytes.
#line 1 "ENTRY_10574850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10574850(int param_1)

{
  return (int)(param_1 + 0xb5);
}


// Reference entry 10574860; body size 25 bytes.
#line 1 "ENTRY_10574860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10574860(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0xb5));
  return (SCStr *)(param_2);
}


// Reference entry 10574a20; body size 7 bytes.
#line 1 "ENTRY_10574a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10574a20(int param_1)

{
  return (int)(param_1 + 0xdbd4);
}


// Reference entry 10574fa0; body size 7 bytes.
#line 1 "ENTRY_10574fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10574fa0(int param_1)

{
  return (int)(param_1 + 0x21bf);
}


// Reference entry 10574fb0; body size 25 bytes.
#line 1 "ENTRY_10574fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10574fb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0x21bf));
  return (SCStr *)(param_2);
}


// Reference entry 10575f20; body size 6 bytes.
#line 1 "ENTRY_10575f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10575f20(void)

{
  return (char *)("SCIActionWithBoolDescriptor");
}


// Reference entry 10575f30; body size 6 bytes.
#line 1 "ENTRY_10575f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10575f30(void)

{
  return (char *)("SCIPlayQueue");
}


// Reference entry 10575f40; body size 6 bytes.
#line 1 "ENTRY_10575f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10575f40(void)

{
  return (char *)("SCIPlayQueueMgr");
}


// Reference entry 10576060; body size 4 bytes.
#line 1 "ENTRY_10576060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10576060(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x74));
}


// Reference entry 10576070; body size 7 bytes.
#line 1 "ENTRY_10576070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10576070(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 105782f0; body size 3 bytes.
#line 1 "ENTRY_105782f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105782f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10578300; body size 3 bytes.
#line 1 "ENTRY_10578300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10578300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10578310; body size 3 bytes.
#line 1 "ENTRY_10578310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10578310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10578320; body size 3 bytes.
#line 1 "ENTRY_10578320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10578320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10578330; body size 3 bytes.
#line 1 "ENTRY_10578330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10578330(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10578340; body size 3 bytes.
#line 1 "ENTRY_10578340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10578340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105785b0; body size 28 bytes.
#line 1 "ENTRY_105785b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105785b0(undefined4 *param_1)

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


// Reference entry 105785e0; body size 28 bytes.
#line 1 "ENTRY_105785e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105785e0(undefined4 *param_1)

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


// Reference entry 10578610; body size 28 bytes.
#line 1 "ENTRY_10578610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578610(undefined4 *param_1)

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


// Reference entry 10578640; body size 28 bytes.
#line 1 "ENTRY_10578640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578640(undefined4 *param_1)

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


// Reference entry 10578670; body size 28 bytes.
#line 1 "ENTRY_10578670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578670(undefined4 *param_1)

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


// Reference entry 105786a0; body size 28 bytes.
#line 1 "ENTRY_105786a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105786a0(undefined4 *param_1)

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


// Reference entry 105786d0; body size 28 bytes.
#line 1 "ENTRY_105786d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105786d0(undefined4 *param_1)

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


// Reference entry 10578700; body size 28 bytes.
#line 1 "ENTRY_10578700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578700(undefined4 *param_1)

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


// Reference entry 10578730; body size 28 bytes.
#line 1 "ENTRY_10578730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578730(undefined4 *param_1)

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


// Reference entry 10578760; body size 28 bytes.
#line 1 "ENTRY_10578760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578760(undefined4 *param_1)

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


// Reference entry 10578790; body size 28 bytes.
#line 1 "ENTRY_10578790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578790(undefined4 *param_1)

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


// Reference entry 105787c0; body size 28 bytes.
#line 1 "ENTRY_105787c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105787c0(undefined4 *param_1)

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


// Reference entry 105787f0; body size 28 bytes.
#line 1 "ENTRY_105787f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105787f0(undefined4 *param_1)

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


// Reference entry 10578820; body size 20 bytes.
#line 1 "ENTRY_10578820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578820(int *param_1)

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


// Reference entry 10578840; body size 20 bytes.
#line 1 "ENTRY_10578840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578840(int *param_1)

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


// Reference entry 10578860; body size 20 bytes.
#line 1 "ENTRY_10578860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578860(int *param_1)

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


// Reference entry 10578880; body size 20 bytes.
#line 1 "ENTRY_10578880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10578880(int *param_1)

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


// Reference entry 105796c0; body size 91 bytes.
#line 1 "ENTRY_105796c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105796c0(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10579740; body size 26 bytes.
#line 1 "ENTRY_10579740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10579740(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10579760; body size 83 bytes.
#line 1 "ENTRY_10579760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10579760(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      (*(code ***)piVar1)[2]();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)(*(code ***)param_2)[3](), 0);
      param_1[1] = (int)((int)piVar1);
      (*(code ***)piVar1)[1]();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 105797d0; body size 40 bytes.
#line 1 "ENTRY_105797d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105797d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10579810; body size 40 bytes.
#line 1 "ENTRY_10579810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10579810(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 105798d0; body size 16 bytes.
#line 1 "ENTRY_105798d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105798d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10579930; body size 32 bytes.
#line 1 "ENTRY_10579930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10579930(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (*(code ***)piVar1)[1]();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105799c0; body size 164 bytes.
#line 1 "ENTRY_105799c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105799c0(int param_2,undefined4 param_3,undefined4 param_4,
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
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50)) (param_3,param_4,param_5,param_6), 0);
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AVTransport:1","CreateSavedQueue",uVar3, param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x35f4] = (undefined4)(0);
  param_1[0x35f5] = (undefined4)(0);
  param_1[0x36f6] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x35f6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10579a90; body size 140 bytes.
#line 1 "ENTRY_10579a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10579a90(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))(), 0);
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))(), 0);
  }
  iVar1 = (int)(*(int *)(*(int *)(param_2 + 4) + 4));
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50)) (param_3,param_4,param_5,param_6), 0);
  pcVar5 = (char *)("DestroyObject");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("DestroyObject",uVar3), 0);
  thunk_FUN_111c0760<>(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10579b40; body size 140 bytes.
#line 1 "ENTRY_10579b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10579b40(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar1 = (int)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)));
  if (param_7 == '\0') {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x48))(), 0);
  }
  else {
    uVar2 = (undefined4)((**(code **)(iVar1 + 0x4c))(), 0);
  }
  iVar1 = (int)(*(int *)(*(int *)(param_2 + 4) + 4));
  uVar3 = (undefined4)((**(code **)(*(int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4)) + 0x50)) (param_3,param_4,param_5,param_6), 0);
  pcVar5 = (char *)("UpdateObject");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("UpdateObject",uVar3), 0);
  thunk_FUN_111c0760<>(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10579bf0; body size 53 bytes.
#line 1 "ENTRY_10579bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10579bf0(undefined4 param_2,undefined4 param_3,byte param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1057a360<>(param_2,param_3,param_4 ^ 1,0);
  *(byte*)(param_1 + 0x18) = (byte)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistAction);
  return (undefined4 *)(param_1);
}


// Reference entry 10579c40; body size 55 bytes.
#line 1 "ENTRY_10579c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10579c40(undefined4 param_2,undefined4 param_3,byte param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1057a360<>(param_2,param_3,param_4 ^ 1,param_5);
  *(byte*)(param_1 + 0x18) = (byte)(param_4);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistAction);
  return (undefined4 *)(param_1);
}


// Reference entry 1057a330; body size 28 bytes.
#line 1 "ENTRY_1057a330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1057a330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIStackedItemImpl);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1057b150; body size 28 bytes.
#line 1 "ENTRY_1057b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1057b150(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTCreateSavedQueueAIOOp);
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


// Reference entry 1057b180; body size 28 bytes.
#line 1 "ENTRY_1057b180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1057b180(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDDestroyObjectAIOOp);
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


// Reference entry 1057b1b0; body size 28 bytes.
#line 1 "ENTRY_1057b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1057b1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDUpdateObjectAIOOp);
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


// Reference entry 1057bd90; body size 11 bytes.
#line 1 "ENTRY_1057bd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1057bd90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCRenamePlaylistAction);

  thunk_FUN_1057b850(param_1);

}


// Reference entry 1057c080; body size 3 bytes.
#line 1 "ENTRY_1057c080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1057c080(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1057c090; body size 3 bytes.
#line 1 "ENTRY_1057c090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1057c090(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1057c0a0; body size 7 bytes.
#line 1 "ENTRY_1057c0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1057c0a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1057c0b0; body size 7 bytes.
#line 1 "ENTRY_1057c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1057c0b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1057c0c0; body size 3 bytes.
#line 1 "ENTRY_1057c0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1057c0c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1057d810; body size 11 bytes.
#line 1 "ENTRY_1057d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_1057d810(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1688), 0);


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x11e38), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_2);
    uVar6 = (undefined4)(param_3);
    uVar7 = (undefined4)(param_4);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,param_4,iVar8,uVar2), 0);
    uVar5 = (undefined4)(thunk_FUN_111ccae0(uVar4,uVar5,uVar6,uVar7,iVar8), 0);
  }

  pvVar3 = (void *)(operator_new(0x11e38), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar6 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar6 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,param_4,iVar8), 0);
    uVar6 = (undefined4)(thunk_FUN_111ccae0(uVar6,param_2,param_3,param_4,iVar8), 0);
  }

  uVar7 = (undefined4)(thunk_FUN_111dd660(), 0);
  uVar4 = (undefined4)((**(code **)(*piVar1 + 0xc))(), 0);
  pvVar3 = (void *)(operator_new(100), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0<>(uVar5,uVar6,uVar7,uVar4,&DAT_122f1250), 0);
  }
  *param_5 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1057d820; body size 11 bytes.
#line 1 "ENTRY_1057d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_1057d820(undefined4 param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1688), 0);


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x11908), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_2);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,iVar8,uVar2), 0);
    uVar5 = (undefined4)(thunk_FUN_111cd540(uVar4,uVar5,iVar8), 0);
  }

  pvVar3 = (void *)(operator_new(0x11908), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar4 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,iVar8), 0);
    uVar4 = (undefined4)(thunk_FUN_111cd540(uVar4,param_2,iVar8), 0);
  }

  uVar6 = (undefined4)(thunk_FUN_111dd660(), 0);
  uVar7 = (undefined4)((**(code **)(*piVar1 + 0xc))(), 0);
  pvVar3 = (void *)(operator_new(100), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0<>(uVar5,uVar4,uVar6,uVar7,&DAT_122f1250), 0);
  }
  *param_3 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 1057fc20; body size 11 bytes.
#line 1 "ENTRY_1057fc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_1057fc20(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
 try {
  int *piVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1688), 0);


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x11908), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_2);
    uVar6 = (undefined4)(param_3);
    uVar4 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,iVar8,uVar2), 0);
    uVar5 = (undefined4)(thunk_FUN_111d15e0(uVar4,uVar5,uVar6,iVar8), 0);
  }

  pvVar3 = (void *)(operator_new(0x11908), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar6 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar6 = (undefined4)((**(code **)(*piVar1 + 8))(param_2,param_3,iVar8), 0);
    uVar6 = (undefined4)(thunk_FUN_111d15e0(uVar6,param_2,param_3,iVar8), 0);
  }

  uVar4 = (undefined4)(thunk_FUN_111dd660(), 0);
  uVar7 = (undefined4)((**(code **)(*piVar1 + 0xc))(), 0);
  pvVar3 = (void *)(operator_new(100), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0<>(uVar5,uVar6,uVar4,uVar7,&DAT_122f1250), 0);
  }
  *param_4 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 105807c0; body size 16 bytes.
#line 1 "ENTRY_105807c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105807c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105807e0; body size 16 bytes.
#line 1 "ENTRY_105807e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105807e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105855a0; body size 7 bytes.
#line 1 "ENTRY_105855a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105855a0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10585680; body size 7 bytes.
#line 1 "ENTRY_10585680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10585680(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10585740; body size 8 bytes.
#line 1 "ENTRY_10585740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10585740(uint *param_1)

{
  return (bool)((*param_1 >> 0xb) & 1);
}


// Reference entry 105858e0; body size 3 bytes.
#line 1 "ENTRY_105858e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105858e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105858f0; body size 3 bytes.
#line 1 "ENTRY_105858f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105858f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10585bc0; body size 28 bytes.
#line 1 "ENTRY_10585bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10585bc0(undefined4 *param_1)

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


// Reference entry 10585bf0; body size 28 bytes.
#line 1 "ENTRY_10585bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10585bf0(undefined4 *param_1)

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


// Reference entry 10585c20; body size 28 bytes.
#line 1 "ENTRY_10585c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10585c20(undefined4 *param_1)

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


// Reference entry 10586000; body size 25 bytes.
#line 1 "ENTRY_10586000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10586000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10586020; body size 5 bytes.
#line 1 "ENTRY_10586020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10586020(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10586030; body size 82 bytes.
#line 1 "ENTRY_10586030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586030(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_1[1]);
  iVar3 = (int)(*param_1);
  if (((param_2[1] - iVar4 ^ iVar1 - iVar3) & 0xfffffffcU) == 0) {
    while( true ) {
      if (iVar3 == iVar1) {
        return (undefined4)(1);
      }
      cVar2 = (char)(thunk_FUN_111a06b0<>(iVar4), 0);
      if (cVar2 == '\0') break;
      iVar3 = (int)(iVar3 + 4);
      iVar4 = (int)(iVar4 + 4);
    }
  }
  return (undefined4)(0);
}


// Reference entry 105860a0; body size 82 bytes.
#line 1 "ENTRY_105860a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105860a0(int *param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = (int)(*param_2);
  iVar1 = (int)(param_1[1]);
  iVar3 = (int)(*param_1);
  if (((param_2[1] - iVar4 ^ iVar1 - iVar3) & 0xfffffffcU) == 0) {
    while( true ) {
      if (iVar3 == iVar1) {
        return (undefined4)(0);
      }
      cVar2 = (char)(thunk_FUN_111a06b0<>(iVar4), 0);
      if (cVar2 == '\0') break;
      iVar3 = (int)(iVar3 + 4);
      iVar4 = (int)(iVar4 + 4);
    }
  }
  return (undefined4)(1);
}


// Reference entry 10586110; body size 16 bytes.
#line 1 "ENTRY_10586110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10586110(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_111a06b0<>(param_2);
  return;
}


// Reference entry 10586130; body size 3 bytes.
#line 1 "ENTRY_10586130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10586130(void)

{
  return;
}


// Reference entry 10586140; body size 195 bytes.
#line 1 "ENTRY_10586140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10586140(uint param_2,int *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint _Size;
  void *pvVar1;
  int *_Dst;
  
  if (param_2 != 0) {
    if (0x3fffffff < param_2) {
                    
      thunk_FUN_101a9be0();
    }
    _Size = (uint)(param_2 * 4);
    if (_Size < 0x1000) {
      if (_Size == 0) {
        _Dst = (int *)((int *)0x0);
      }
      else {
        _Dst = (int *)(operator_new(_Size), 0);
      }
    }
    else {
      if (_Size + 0x23 <= _Size) {
                    
        thunk_FUN_1012a2a0();
      }
      pvVar1 = (char *)(operator_new(_Size + 0x23), 0);
      if ((void *)(pvVar1) == (void *)(0x0)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (int *)((int *)((int)pvVar1 + 0x23U & 0xffffffe0));
      _Dst[-1] = (int)((int)pvVar1);
    }
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)(_Dst + param_2);
    if (*param_3 == (int)((0))) {
      memset(_Dst,0,_Size);
      param_1[1] = (undefined4)(_Dst + param_2);
      return;
    }
    do {
      *_Dst = (int)(*param_3);
      _Dst = (int *)(_Dst + 1);
      param_2 = (uint)(param_2 - 1);
    } while (param_2 != 0);
    param_1[1] = (undefined4)(_Dst);
  }
  return;
}


// Reference entry 10586240; body size 7 bytes.
#line 1 "ENTRY_10586240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10586250; body size 7 bytes.
#line 1 "ENTRY_10586250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10586260; body size 16 bytes.
#line 1 "ENTRY_10586260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10586260(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 10586280; body size 3 bytes.
#line 1 "ENTRY_10586280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10586280(void)

{
  return;
}


// Reference entry 10586290; body size 5 bytes.
#line 1 "ENTRY_10586290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105862a0; body size 5 bytes.
#line 1 "ENTRY_105862a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105862a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105862b0; body size 40 bytes.
#line 1 "ENTRY_105862b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105862b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 105862f0; body size 40 bytes.
#line 1 "ENTRY_105862f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105862f0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10586330; body size 55 bytes.
#line 1 "ENTRY_10586330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586330(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (param_1 != param_2) {
    param_3 = (int)(param_3 - param_1);
    do {
      cVar1 = (char)(thunk_FUN_111a06b0<>(param_3 + param_1), 0);
      if (cVar1 == '\0') {
        return (undefined4)(0);
      }
      param_1 = (int)(param_1 + 4);
    } while (param_1 != param_2);
  }
  return (undefined4)(1);
}


// Reference entry 10586380; body size 55 bytes.
#line 1 "ENTRY_10586380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586380(int param_1,int param_2,int param_3)

{
  char cVar1;
  
  if (param_1 != param_2) {
    param_3 = (int)(param_3 - param_1);
    do {
      cVar1 = (char)(thunk_FUN_111a06b0<>(param_3 + param_1), 0);
      if (cVar1 == '\0') {
        return (undefined4)(0);
      }
      param_1 = (int)(param_1 + 4);
    } while (param_1 != param_2);
  }
  return (undefined4)(1);
}


// Reference entry 105863d0; body size 5 bytes.
#line 1 "ENTRY_105863d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105863d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105863e0; body size 6 bytes.
#line 1 "ENTRY_105863e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105863e0(void)

{
  return (undefined4)(5);
}


// Reference entry 105863f0; body size 6 bytes.
#line 1 "ENTRY_105863f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_105863f0(void)

{
  return (char *)("SCIOpAddFavorites");
}


// Reference entry 10586400; body size 5 bytes.
#line 1 "ENTRY_10586400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10586410; body size 5 bytes.
#line 1 "ENTRY_10586410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10586410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105864b0; body size 28 bytes.
#line 1 "ENTRY_105864b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105864b0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 105864e0; body size 27 bytes.
#line 1 "ENTRY_105864e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105864e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 105866f0; body size 16 bytes.
#line 1 "ENTRY_105866f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105866f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10586750; body size 251 bytes.
#line 1 "ENTRY_10586750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint * __thiscall Recovered_Bulk::m_FUN_10586750(int param_2,char *param_3, unsigned int recovered_unused_stack_0)
{
  uint *param_1 = (uint *)this;
  uint _Size;
  char cVar1;
  int *_Dst;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  cVar1 = (char)(*param_3);
  uVar5 = (uint)(param_2 + 0x1fU >> 5);
  *param_1 = (uint)(0);
  param_1[1] = (uint)(0);
  param_1[2] = (uint)(0);
  if (uVar5 != 0) {
    _Size = (uint)(uVar5 * 4);
    if (_Size < 0x1000) {
      if (uVar5 == 0) {
        pvVar3 = (void *)((void *)0x0);
      }
      else {
        pvVar3 = (void *)(operator_new(_Size), 0);
      }
    }
    else {
      if (_Size + 0x23 <= _Size) {
                    
        thunk_FUN_1012a2a0();
      }
      pvVar2 = (char *)(operator_new(_Size + 0x23), 0);
      if ((void *)(pvVar2) == (void *)(0x0)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      pvVar3 = (char *)((char *)((int)pvVar2 + 0x23U & 0xffffffe0));
      *(void**)((int)pvVar3 - 4) = (void *)(pvVar2);
    }
    *param_1 = (uint)((uint)pvVar3);
    param_1[1] = (uint)((uint)pvVar3);
    param_1[2] = (uint)((uint)((int)pvVar3 + _Size));
    _Dst = (int *)((int *)*param_1);
    uVar4 = (uint)(uVar5);
    piVar6 = (int *)(_Dst);
    if (-(uint)(cVar1 != '\0') == 0) {
      memset(_Dst,0,_Size);
      param_1[1] = (uint)((uint)(_Dst + uVar5));
      param_1[3] = (uint)(0);
      return (uint *)(param_1);
    }
    for (; uVar4 != 0; uVar4 = uVar4 - 1) {
      *piVar6 = (int)(-(uint)(cVar1 != '\0'));
      piVar6 = (int *)(piVar6 + 1);
    }
    param_1[1] = (uint)((uint)(_Dst + uVar5));
  }
  param_1[3] = (uint)(0);
  return (uint *)(param_1);
}


// Reference entry 10586890; body size 3 bytes.
#line 1 "ENTRY_10586890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10586890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105868a0; body size 220 bytes.
#line 1 "ENTRY_105868a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105868a0(uint param_2,int *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  uint _Size;
  void *pvVar1;
  int *_Dst;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  if (param_2 != 0) {
    if (0x3fffffff < param_2) {
                    
      thunk_FUN_101a9be0();
    }
    _Size = (uint)(param_2 * 4);
    if (_Size < 0x1000) {
      if (_Size == 0) {
        _Dst = (int *)((int *)0x0);
      }
      else {
        _Dst = (int *)(operator_new(_Size), 0);
      }
    }
    else {
      if (_Size + 0x23 <= _Size) {
                    
        thunk_FUN_1012a2a0();
      }
      pvVar1 = (char *)(operator_new(_Size + 0x23), 0);
      if ((void *)(pvVar1) == (void *)(0x0)) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
      _Dst = (int *)((int *)((int)pvVar1 + 0x23U & 0xffffffe0));
      _Dst[-1] = (int)((int)pvVar1);
    }
    *param_1 = (undefined4)(_Dst);
    param_1[1] = (undefined4)(_Dst);
    param_1[2] = (undefined4)(_Dst + param_2);
    if (*param_3 == (int)((0))) {
      memset(_Dst,0,_Size);
      param_1[1] = (undefined4)(_Dst + param_2);
      return (undefined4 *)(param_1);
    }
    do {
      *_Dst = (int)(*param_3);
      _Dst = (int *)(_Dst + 1);
      param_2 = (uint)(param_2 - 1);
    } while (param_2 != 0);
    param_1[1] = (undefined4)(_Dst);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10587d40; body size 9 bytes.
#line 1 "ENTRY_10587d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10587d40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAddFavorites);
  return (undefined4 *)(param_1);
}


// Reference entry 10587d50; body size 24 bytes.
#line 1 "ENTRY_10587d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10587d50(undefined4 *param_1)

{
  thunk_FUN_112859a0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNullParamRX);
  return (undefined4 *)(param_1);
}


// Reference entry 10588050; body size 11 bytes.
#line 1 "ENTRY_10588050"

/* WARNING: Removing unreachable block_10588050 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10588050(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RAddFavoritesAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10588060; body size 11 bytes.
#line 1 "ENTRY_10588060"

/* WARNING: Removing unreachable block_10588060 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10588060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpCDUpdateObjectAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 105883a0; body size 16 bytes.
#line 1 "ENTRY_105883a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105883a0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  piVar2 = (int *)((int *)*param_1);
  if ((int *)(piVar2) == (int *)(0x0)) {
    return;
  }
  iVar1 = (int)(*piVar2);
  if (iVar1 != 0) {
    uVar4 = (uint)(piVar2[2] - iVar1 & 0xfffffffc);
    iVar3 = (int)(iVar1);
    if (0xfff < uVar4) {
      iVar3 = (int)(*(int *)(iVar1 + -4));
      uVar4 = (uint)(uVar4 + 0x23);
      if (0x1f < (iVar1 - iVar3) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar3,uVar4);
    *piVar2 = (int)(0);
    piVar2[1] = (int)(0);
    piVar2[2] = (int)(0);
  }
  return;
}


// Reference entry 10588b10; body size 7 bytes.
#line 1 "ENTRY_10588b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10588b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10588b30; body size 18 bytes.
#line 1 "ENTRY_10588b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10588b30(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAddFavorites);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      (**(code **)(*piVar1 + 8))(uVar2);
    }
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
  }
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0xc] = (undefined4)((uint)&ghidra_vftable_SCIObj);

  ((SCStr *)((SCStr *)(param_1 + 0xb)))->int_release();
  param_1[0xb] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 10)))->int_release();
  param_1[10] = (undefined4)(0);
  param_1[5] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  piVar1 = (int *)((int *)param_1[4]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[3] = (undefined4)(0);
    param_1[4] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10588cf0; body size 132 bytes.
#line 1 "ENTRY_10588cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10588cf0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    if (iVar1 != 0) {
      uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffffc);
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
    *param_1 = (int)(*param_2);
    param_1[1] = (int)(param_2[1]);
    param_1[2] = (int)(param_2[2]);
    *param_2 = (int)(0);
    param_2[1] = (int)(0);
    param_2[2] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10588e60; body size 39 bytes.
#line 1 "ENTRY_10588e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10588e60(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  *(undefined4*)(param_1 + 0x10) = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  *(undefined1*)(param_1 + 0x14) = (undefined1)(*(undefined1 *)(param_2 + 0x14));
  return (int)(param_1);
}


// Reference entry 10588e90; body size 15 bytes.
#line 1 "ENTRY_10588e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10588e90(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (int)(param_1);
}


// Reference entry 10588eb0; body size 3 bytes.
#line 1 "ENTRY_10588eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10588eb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10588ec0; body size 7 bytes.
#line 1 "ENTRY_10588ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10588ec0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10588ed0; body size 4 bytes.
#line 1 "ENTRY_10588ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10588ed0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10588ee0; body size 3 bytes.
#line 1 "ENTRY_10588ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10588ee0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105899d0; body size 134 bytes.
#line 1 "ENTRY_105899d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105899d0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (0x3fffffff < param_2) {
                    
    thunk_FUN_101a9be0();
  }
  param_2 = (uint)(param_2 * 4);
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
  if (param_2 + 0x23 <= param_2) {
                    
    thunk_FUN_1012a2a0();
  }
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


// Reference entry 10589a80; body size 129 bytes.
#line 1 "ENTRY_10589a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10589a80(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x40000000) {
    param_2 = (uint)(param_2 * 4);
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


// Reference entry 10589bd0; body size 43 bytes.
#line 1 "ENTRY_10589bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10589bd0(undefined4 *param_2)
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


// Reference entry 10589c10; body size 3 bytes.
#line 1 "ENTRY_10589c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10589c10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10589c20; body size 4 bytes.
#line 1 "ENTRY_10589c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10589c20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1058c240; body size 7 bytes.
#line 1 "ENTRY_1058c240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1058c240(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 4) + 0x4c));
}


// Reference entry 1058c250; body size 16 bytes.
#line 1 "ENTRY_1058c250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1058c250(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1058c270; body size 16 bytes.
#line 1 "ENTRY_1058c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1058c270(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1058c450; body size 39 bytes.
#line 1 "ENTRY_1058c450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1058c450(int param_1)

{
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(-(uint)(param_1 != 0) & param_1 + 0x118U);
  return;
}


// Reference entry 1058deb0; body size 20 bytes.
#line 1 "ENTRY_1058deb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1058deb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 1058dfd0; body size 7 bytes.
#line 1 "ENTRY_1058dfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1058dfd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x14c));
}


// Reference entry 1058f5e0; body size 43 bytes.
#line 1 "ENTRY_1058f5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1058f5e0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xfc));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 1058f620; body size 43 bytes.
#line 1 "ENTRY_1058f620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1058f620(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x100));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10590790; body size 20 bytes.
#line 1 "ENTRY_10590790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10590790(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10590fa0; body size 6 bytes.
#line 1 "ENTRY_10590fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10590fa0(void)

{
  return (char *)("SCIOpAddFavorites");
}


// Reference entry 10591830; body size 8 bytes.
#line 1 "ENTRY_10591830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10591830(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10591840; body size 18 bytes.
#line 1 "ENTRY_10591840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10591840(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 8,"object.item.audioItem.musicTrack.recentShow");
  return;
}


// Reference entry 105918b0; body size 7 bytes.
#line 1 "ENTRY_105918b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_105918b0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x162));
}


// Reference entry 105922d0; body size 3 bytes.
#line 1 "ENTRY_105922d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105922d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105922e0; body size 3 bytes.
#line 1 "ENTRY_105922e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105922e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10592530; body size 28 bytes.
#line 1 "ENTRY_10592530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10592530(undefined4 *param_1)

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


// Reference entry 10592560; body size 28 bytes.
#line 1 "ENTRY_10592560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10592560(undefined4 *param_1)

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


// Reference entry 10592590; body size 28 bytes.
#line 1 "ENTRY_10592590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10592590(undefined4 *param_1)

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


// Reference entry 105925c0; body size 28 bytes.
#line 1 "ENTRY_105925c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105925c0(undefined4 *param_1)

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


// Reference entry 105926b0; body size 7 bytes.
#line 1 "ENTRY_105926b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105926b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xf4));
}


// Reference entry 10592920; body size 24 bytes.
#line 1 "ENTRY_10592920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10592920(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10592940; body size 8 bytes.
#line 1 "ENTRY_10592940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10592940(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = (int *)((int *)(param_1 + 0x2c));
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


// Reference entry 10592950; body size 26 bytes.
#line 1 "ENTRY_10592950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10592950(undefined4 param_1)

{
  thunk_FUN_101ba530(param_1);
  thunk_FUN_1106f6e0();
  return;
}


// Reference entry 10593020; body size 18 bytes.
#line 1 "ENTRY_10593020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10593020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10593040; body size 25 bytes.
#line 1 "ENTRY_10593040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10593040(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10593060; body size 22 bytes.
#line 1 "ENTRY_10593060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10593060(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105931c0; body size 18 bytes.
#line 1 "ENTRY_105931c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105931c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105931e0; body size 22 bytes.
#line 1 "ENTRY_105931e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105931e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105932e0; body size 22 bytes.
#line 1 "ENTRY_105932e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105932e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10593300; body size 25 bytes.
#line 1 "ENTRY_10593300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10593300(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105934e0; body size 91 bytes.
#line 1 "ENTRY_105934e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105934e0(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10593560; body size 26 bytes.
#line 1 "ENTRY_10593560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10593560(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10593580; body size 3 bytes.
#line 1 "ENTRY_10593580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593580(void)

{
  return;
}


// Reference entry 10593750; body size 25 bytes.
#line 1 "ENTRY_10593750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593750(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10593770; body size 13 bytes.
#line 1 "ENTRY_10593770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593770(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10593780; body size 13 bytes.
#line 1 "ENTRY_10593780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593780(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10593840; body size 3 bytes.
#line 1 "ENTRY_10593840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593840(void)

{
  return;
}


// Reference entry 10593930; body size 33 bytes.
#line 1 "ENTRY_10593930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593930(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    thunk_FUN_10de8ec0();
  }
  return;
}


// Reference entry 10593cc0; body size 23 bytes.
#line 1 "ENTRY_10593cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10593cc0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10594e60<>(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x1c);
  return;
}


// Reference entry 10593e90; body size 15 bytes.
#line 1 "ENTRY_10593e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593e90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 10593f30; body size 7 bytes.
#line 1 "ENTRY_10593f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10593f30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10593f40; body size 7 bytes.
#line 1 "ENTRY_10593f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10593f40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10593f50; body size 7 bytes.
#line 1 "ENTRY_10593f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10593f50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10593f60; body size 5 bytes.
#line 1 "ENTRY_10593f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10593f60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10593f70; body size 37 bytes.
#line 1 "ENTRY_10593f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10593f70(int param_1,SCStr *param_2)

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


// Reference entry 10593fa0; body size 3 bytes.
#line 1 "ENTRY_10593fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10593fa0(void)

{
  return;
}


// Reference entry 10594120; body size 5 bytes.
#line 1 "ENTRY_10594120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10594120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10594130; body size 5 bytes.
#line 1 "ENTRY_10594130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10594130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105942a0; body size 5 bytes.
#line 1 "ENTRY_105942a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105942a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105942b0; body size 5 bytes.
#line 1 "ENTRY_105942b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105942b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105942c0; body size 5 bytes.
#line 1 "ENTRY_105942c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105942c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105942d0; body size 5 bytes.
#line 1 "ENTRY_105942d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105942d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105942e0; body size 5 bytes.
#line 1 "ENTRY_105942e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105942e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105942f0; body size 5 bytes.
#line 1 "ENTRY_105942f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105942f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10594300; body size 5 bytes.
#line 1 "ENTRY_10594300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10594300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10594310; body size 17 bytes.
#line 1 "ENTRY_10594310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10594310(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 0xc);
  return;
}


// Reference entry 10594330; body size 20 bytes.
#line 1 "ENTRY_10594330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10594330(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10593590(param_1,param_2,param_2);
  return;
}


// Reference entry 105944c0; body size 14 bytes.
#line 1 "ENTRY_105944c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105944c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10594e60<>(param_3);
  return;
}


// Reference entry 105945f0; body size 9 bytes.
#line 1 "ENTRY_105945f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105945f0(undefined4 param_1,SCStr *param_2)

{
 try {
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  ((SCStr *)(param_2 + 0x14))->int_release();
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);

  ((SCStr *)(param_2 + 0xc))->int_release();
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);

  ((SCStr *)(param_2 + 8))->int_release();
  *(undefined4*)(param_2 + 8) = (undefined4)(0);

  ((SCStr *)(param_2 + 4))->int_release();
  *(undefined4*)(param_2 + 4) = (undefined4)(0);

  ((SCStr *)(param_2))->int_release();
  *(undefined4*)param_2 = (undefined4)((SCStr *)(0));

  return;

 } catch (...) { }
}


// Reference entry 10594600; body size 25 bytes.
#line 1 "ENTRY_10594600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10594600(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0xc);
}


// Reference entry 10594760; body size 15 bytes.
#line 1 "ENTRY_10594760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10594760(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10594780; body size 15 bytes.
#line 1 "ENTRY_10594780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10594780(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 105947a0; body size 5 bytes.
#line 1 "ENTRY_105947a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105947a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105947b0; body size 5 bytes.
#line 1 "ENTRY_105947b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105947b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105947c0; body size 5 bytes.
#line 1 "ENTRY_105947c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105947c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105947d0; body size 5 bytes.
#line 1 "ENTRY_105947d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105947d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105947e0; body size 5 bytes.
#line 1 "ENTRY_105947e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105947e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105947f0; body size 5 bytes.
#line 1 "ENTRY_105947f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105947f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10594800; body size 5 bytes.
#line 1 "ENTRY_10594800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10594800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10594810; body size 5 bytes.
#line 1 "ENTRY_10594810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10594810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10594960; body size 5 bytes.
#line 1 "ENTRY_10594960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10594960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10594970; body size 15 bytes.
#line 1 "ENTRY_10594970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10594970(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 0xc);
}


// Reference entry 105949d0; body size 16 bytes.
#line 1 "ENTRY_105949d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105949d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10594a30; body size 18 bytes.
#line 1 "ENTRY_10594a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10594a30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10594a90; body size 11 bytes.
#line 1 "ENTRY_10594a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10594a90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10594aa0; body size 11 bytes.
#line 1 "ENTRY_10594aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10594aa0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10594b30; body size 11 bytes.
#line 1 "ENTRY_10594b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10594b30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10594b40; body size 16 bytes.
#line 1 "ENTRY_10594b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10594b40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10594b60; body size 21 bytes.
#line 1 "ENTRY_10594b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10594b60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10594b80; body size 21 bytes.
#line 1 "ENTRY_10594b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10594b80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10594ba0; body size 23 bytes.
#line 1 "ENTRY_10594ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10594ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10594bc0; body size 23 bytes.
#line 1 "ENTRY_10594bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10594bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10594be0; body size 3 bytes.
#line 1 "ENTRY_10594be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10594be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10594bf0; body size 3 bytes.
#line 1 "ENTRY_10594bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10594bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10594c00; body size 52 bytes.
#line 1 "ENTRY_10594c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10594c00(undefined4 *param_1)

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


// Reference entry 10594cd0; body size 23 bytes.
#line 1 "ENTRY_10594cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10594cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10595800; body size 31 bytes.
#line 1 "ENTRY_10595800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10595800(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10593590(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105958b0; body size 14 bytes.
#line 1 "ENTRY_105958b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105958b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105958d0; body size 14 bytes.
#line 1 "ENTRY_105958d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105958d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 105958f0; body size 7 bytes.
#line 1 "ENTRY_105958f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105958f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10595900; body size 3 bytes.
#line 1 "ENTRY_10595900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10595900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10595910; body size 3 bytes.
#line 1 "ENTRY_10595910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10595910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10595920; body size 6 bytes.
#line 1 "ENTRY_10595920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10595920(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10595930; body size 6 bytes.
#line 1 "ENTRY_10595930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10595930(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10595940; body size 20 bytes.
#line 1 "ENTRY_10595940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10595940(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 10595ba0; body size 31 bytes.
#line 1 "ENTRY_10595ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10595ba0(undefined4 *param_1)

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


// Reference entry 10595bf0; body size 131 bytes.
#line 1 "ENTRY_10595bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10595bf0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x15555556) {
    param_2 = (uint)(param_2 * 0xc);
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


// Reference entry 10595ca0; body size 137 bytes.
#line 1 "ENTRY_10595ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10595ca0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x924924a) {
    param_2 = (uint)(param_2 * 0x1c);
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


// Reference entry 10595d50; body size 62 bytes.
#line 1 "ENTRY_10595d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10595d50(uint param_2)
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


// Reference entry 10595da0; body size 14 bytes.
#line 1 "ENTRY_10595da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10595da0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x5555555) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10595f50; body size 21 bytes.
#line 1 "ENTRY_10595f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  __stdcall FUN_10595f50(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10593590(*param_1,param_1[1],param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10596070; body size 5 bytes.
#line 1 "ENTRY_10596070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10596070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596080; body size 5 bytes.
#line 1 "ENTRY_10596080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10596080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105963f0; body size 3 bytes.
#line 1 "ENTRY_105963f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105963f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596400; body size 3 bytes.
#line 1 "ENTRY_10596400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596410; body size 3 bytes.
#line 1 "ENTRY_10596410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596420; body size 3 bytes.
#line 1 "ENTRY_10596420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596430; body size 3 bytes.
#line 1 "ENTRY_10596430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596440; body size 3 bytes.
#line 1 "ENTRY_10596440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596450; body size 3 bytes.
#line 1 "ENTRY_10596450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596460; body size 3 bytes.
#line 1 "ENTRY_10596460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596470; body size 3 bytes.
#line 1 "ENTRY_10596470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596480; body size 3 bytes.
#line 1 "ENTRY_10596480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10596490; body size 3 bytes.
#line 1 "ENTRY_10596490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105964a0; body size 3 bytes.
#line 1 "ENTRY_105964a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105964a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105964b0; body size 3 bytes.
#line 1 "ENTRY_105964b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105964b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105964c0; body size 3 bytes.
#line 1 "ENTRY_105964c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105964c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105964d0; body size 3 bytes.
#line 1 "ENTRY_105964d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105964d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105964e0; body size 3 bytes.
#line 1 "ENTRY_105964e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105964e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105967f0; body size 30 bytes.
#line 1 "ENTRY_105967f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105967f0(int param_1)

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


// Reference entry 10596850; body size 3 bytes.
#line 1 "ENTRY_10596850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10596850(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10596860; body size 11 bytes.
#line 1 "ENTRY_10596860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10596860(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10596870; body size 6 bytes.
#line 1 "ENTRY_10596870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10596870(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10596880; body size 6 bytes.
#line 1 "ENTRY_10596880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10596880(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10596a50; body size 11 bytes.
#line 1 "ENTRY_10596a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10596a50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10596ae0; body size 90 bytes.
#line 1 "ENTRY_10596ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10596ae0(uint param_1)

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


// Reference entry 10596b60; body size 90 bytes.
#line 1 "ENTRY_10596b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10596b60(uint param_1)

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


// Reference entry 10596be0; body size 97 bytes.
#line 1 "ENTRY_10596be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10596be0(uint param_1)

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


// Reference entry 10596c60; body size 47 bytes.
#line 1 "ENTRY_10596c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10596c60(uint param_2)
{
  int *param_1 = (int *)this;
  if (param_2 < (uint)((param_1[1] - *param_1) / 0xc)) {
    return (int)(*param_1 + param_2 * 0xc);
  }
                    
  thunk_FUN_10596a70<>();
}


// Reference entry 10596ca0; body size 56 bytes.
#line 1 "ENTRY_10596ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10596ca0(uint param_2)
{
  int *param_1 = (int *)this;
  if (param_2 < (uint)((param_1[1] - *param_1) / 0x1c)) {
    return (int)(*param_1 + param_2 * 0x1c);
  }
                    
  thunk_FUN_10596a80<>();
}


// Reference entry 10596d30; body size 13 bytes.
#line 1 "ENTRY_10596d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10596d30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10596d40; body size 22 bytes.
#line 1 "ENTRY_10596d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10596d40(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 10597050; body size 57 bytes.
#line 1 "ENTRY_10597050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10597050(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105970a0; body size 60 bytes.
#line 1 "ENTRY_105970a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105970a0(int param_1,int param_2)

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


// Reference entry 10597390; body size 8 bytes.
#line 1 "ENTRY_10597390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10597390(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 105973a0; body size 11 bytes.
#line 1 "ENTRY_105973a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105973a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105978b0; body size 17 bytes.
#line 1 "ENTRY_105978b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_105978b0(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_2))->m_op_ctor(param_1);
  return (SCStr *)(param_2);
}


// Reference entry 105978d0; body size 20 bytes.
#line 1 "ENTRY_105978d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_105978d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 4));
  return (SCStr *)(param_2);
}


// Reference entry 105978f0; body size 20 bytes.
#line 1 "ENTRY_105978f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_105978f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10597910; body size 3 bytes.
#line 1 "ENTRY_10597910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10597910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10597920; body size 4 bytes.
#line 1 "ENTRY_10597920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10597920(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 10597c20; body size 4 bytes.
#line 1 "ENTRY_10597c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10597c20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x18));
}


// Reference entry 10598490; body size 6 bytes.
#line 1 "ENTRY_10598490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10598490(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 105984a0; body size 6 bytes.
#line 1 "ENTRY_105984a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105984a0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 105984b0; body size 6 bytes.
#line 1 "ENTRY_105984b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105984b0(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 105984c0; body size 6 bytes.
#line 1 "ENTRY_105984c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105984c0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 105987e0; body size 5 bytes.
#line 1 "ENTRY_105987e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105987e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10598f40; body size 3 bytes.
#line 1 "ENTRY_10598f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10598f40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10599150; body size 28 bytes.
#line 1 "ENTRY_10599150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10599150(undefined4 *param_1)

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


// Reference entry 1059a140; body size 5 bytes.
#line 1 "ENTRY_1059a140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059a140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059a5d0; body size 10 bytes.
#line 1 "ENTRY_1059a5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059a5d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1059a5e0; body size 4 bytes.
#line 1 "ENTRY_1059a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059a5e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1059a5f0; body size 22 bytes.
#line 1 "ENTRY_1059a5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1059a5f0(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 1059a610; body size 27 bytes.
#line 1 "ENTRY_1059a610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1059a610(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x1c);
}


// Reference entry 1059a820; body size 30 bytes.
#line 1 "ENTRY_1059a820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059a820(void)

{
  char cVar1;
  
  cVar1 = (char)(func_0x1005ee94(), 0);
  if (cVar1 == '\0') {
    thunk_FUN_112af4e0("ServiceOutageManager",1,"Unable to subscribe to Now Playing events.");
  }
  return;
}


// Reference entry 1059a930; body size 16 bytes.
#line 1 "ENTRY_1059a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint * FUN_1059a930(uint *param_1,uint *param_2)

{
  if (*param_1 < (uint)(*(param_2))) {
    param_1 = (uint *)(param_2);
  }
  return (uint *)(param_1);
}


// Reference entry 1059b0b0; body size 303 bytes.
#line 1 "ENTRY_1059b0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_1059b0b0(undefined4 param_1)

{
  DWORD DVar1;
  DWORD DVar2;
  HANDLE pvVar3;
  HANDLE pvVar4;
  undefined4 uVar5;
  DWORD *pDVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  DWORD DStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  _SYSTEMTIME _Stack_21c;
  CHAR aCStack_20c [260];
  CHAR aCStack_108 [260];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&DStack_228);
  GetLocalTime(&_Stack_21c);
  GetTempPathA(0x104,(uint)&aCStack_108);
  func_0x100108a2((uint)&aCStack_20c,0x104,&DAT_1188e99c,(uint)&aCStack_108,"Sonos");
  CreateDirectoryA((uint)&aCStack_20c,(LPSECURITY_ATTRIBUTES)0x0);
  DVar1 = (DWORD)(GetCurrentThreadId(), 0);
  DVar2 = (DWORD)(GetCurrentProcessId(), 0);
  func_0x100108a2((uint)&aCStack_20c,0x104,"%s%s\\%04d%02d%02d-%02d%02d%02d-%ld-%ld.dmp",(uint)&aCStack_108, "Sonos",(*(struct __RFLD *)&_Stack_21c).wYear,(*(struct __RFLD *)&_Stack_21c).wMonth,(*(struct __RFLD *)&_Stack_21c).wDay,(*(struct __RFLD *)&_Stack_21c).wHour, (*(struct __RFLD *)&_Stack_21c).wMinute,(*(struct __RFLD *)&_Stack_21c).wSecond,DVar2,DVar1);
  pvVar3 = (HANDLE)(CreateFileA((uint)&aCStack_20c,0xc0000000,3,(LPSECURITY_ATTRIBUTES)0x0,2,0,(HANDLE)0x0), 0);
  DStack_228 = (DWORD)(GetCurrentThreadId(), 0);
  uVar8 = (undefined4)(0);
  uVar7 = (undefined4)(0);
  pDVar6 = (DWORD *)(&DStack_228);
  uVar5 = (undefined4)(1);
  uStack_224 = (undefined4)(param_1);
  uStack_220 = (undefined4)(1);
  DVar1 = (DWORD)(GetCurrentProcessId(), 0);
  pvVar4 = (HANDLE)(GetCurrentProcess(), 0);
  func_0x11489dc0(pvVar4,DVar1,pvVar3,uVar5,pDVar6,uVar7,uVar8);
  thunk_FUN_1148ac28();
  return (undefined4 *)(param_1);
}


// Reference entry 1059b380; body size 47 bytes.
#line 1 "ENTRY_1059b380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059b380(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{ int stack0x00000010;
 try {
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)thunk_FUN_101a6c80(param_1,param_2,param_3,0,&stack0x00000010), 0);
  iVar2 = (int)(__stdio_common_vsprintf_p(*puVar1,puVar1[1]), 0);
  if (iVar2 < 0) {
    iVar2 = (int)(-1);
  }
  return (int)(iVar2);

 } catch (...) { }
}


// Reference entry 1059b3c0; body size 18 bytes.
#line 1 "ENTRY_1059b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059b3c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059b3e0; body size 20 bytes.
#line 1 "ENTRY_1059b3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059b3e0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059b400; body size 22 bytes.
#line 1 "ENTRY_1059b400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059b400(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1059b420; body size 18 bytes.
#line 1 "ENTRY_1059b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059b420(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059b500; body size 22 bytes.
#line 1 "ENTRY_1059b500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059b500(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1059b520; body size 22 bytes.
#line 1 "ENTRY_1059b520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059b520(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059b600; body size 12 bytes.
#line 1 "ENTRY_1059b600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1059b600(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1059b610; body size 3 bytes.
#line 1 "ENTRY_1059b610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059b610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1059b620; body size 25 bytes.
#line 1 "ENTRY_1059b620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059b620(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1059b640; body size 13 bytes.
#line 1 "ENTRY_1059b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059b640(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1059b650; body size 13 bytes.
#line 1 "ENTRY_1059b650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059b650(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1059b660; body size 3 bytes.
#line 1 "ENTRY_1059b660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059b660(void)

{
  return;
}


// Reference entry 1059b7c0; body size 15 bytes.
#line 1 "ENTRY_1059b7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059b7c0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 1059b7e0; body size 15 bytes.
#line 1 "ENTRY_1059b7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059b7e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 1059b800; body size 5 bytes.
#line 1 "ENTRY_1059b800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059b800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059b810; body size 31 bytes.
#line 1 "ENTRY_1059b810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1059b810(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1059b840; body size 30 bytes.
#line 1 "ENTRY_1059b840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059b840(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 1059b870; body size 16 bytes.
#line 1 "ENTRY_1059b870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059b870(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return;
}


// Reference entry 1059b9a0; body size 5 bytes.
#line 1 "ENTRY_1059b9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059b9a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059b9b0; body size 5 bytes.
#line 1 "ENTRY_1059b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059b9b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059b9c0; body size 5 bytes.
#line 1 "ENTRY_1059b9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059b9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059b9d0; body size 5 bytes.
#line 1 "ENTRY_1059b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059b9d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059b9e0; body size 5 bytes.
#line 1 "ENTRY_1059b9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059b9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059b9f0; body size 22 bytes.
#line 1 "ENTRY_1059b9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059b9f0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 1059ba10; body size 3 bytes.
#line 1 "ENTRY_1059ba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ba10(void)

{
  return;
}


// Reference entry 1059ba20; body size 57 bytes.
#line 1 "ENTRY_1059ba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1059ba20(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_2);
  ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                *)&uStack_4))->op_inc();
  uVar1 = (undefined4)(thunk_FUN_1059c6f0(param_2), 0);
  thunk_FUN_1148a50e(uVar1,0x18);
  *param_1 = (undefined4)(uStack_4);
  return;
}


// Reference entry 1059ba70; body size 15 bytes.
#line 1 "ENTRY_1059ba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059ba70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1059ba90; body size 15 bytes.
#line 1 "ENTRY_1059ba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059ba90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1059bab0; body size 5 bytes.
#line 1 "ENTRY_1059bab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059bab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059bac0; body size 5 bytes.
#line 1 "ENTRY_1059bac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059bac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059bad0; body size 5 bytes.
#line 1 "ENTRY_1059bad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059bad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059bae0; body size 5 bytes.
#line 1 "ENTRY_1059bae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059bae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059baf0; body size 18 bytes.
#line 1 "ENTRY_1059baf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059baf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059bb10; body size 16 bytes.
#line 1 "ENTRY_1059bb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059bb10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059bb30; body size 32 bytes.
#line 1 "ENTRY_1059bb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059bb30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[3] = (undefined4)(param_2);
  param_1[1] = (undefined4)(1);
  param_1[2] = (undefined4)(1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Ref_count);
  return (undefined4 *)(param_1);
}


// Reference entry 1059bb60; body size 11 bytes.
#line 1 "ENTRY_1059bb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059bb60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059bbb0; body size 11 bytes.
#line 1 "ENTRY_1059bbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059bbb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059bbc0; body size 11 bytes.
#line 1 "ENTRY_1059bbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059bbc0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059bc50; body size 11 bytes.
#line 1 "ENTRY_1059bc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059bc50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059bc60; body size 11 bytes.
#line 1 "ENTRY_1059bc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059bc60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059bc70; body size 16 bytes.
#line 1 "ENTRY_1059bc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059bc70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059bc90; body size 3 bytes.
#line 1 "ENTRY_1059bc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059bc90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059bca0; body size 52 bytes.
#line 1 "ENTRY_1059bca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059bca0(undefined4 *param_1)

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


// Reference entry 1059bcf0; body size 45 bytes.
#line 1 "ENTRY_1059bcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059bcf0(undefined4 *param_2)
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


// Reference entry 1059bf50; body size 3 bytes.
#line 1 "ENTRY_1059bf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059bf50(void)

{
  return;
}


// Reference entry 1059bfc0; body size 19 bytes.
#line 1 "ENTRY_1059bfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1059bfc0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1059bfe0; body size 19 bytes.
#line 1 "ENTRY_1059bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1059bfe0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 1059c000; body size 5 bytes.
#line 1 "ENTRY_1059c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */void __fastcall  FUN_1059c000(int *param_1){
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4), 0);
  if (*(char *)((int)*(int **)(iVar2 + 4) + 0xd) == '\0') {
    do {
      thunk_FUN_1059b6d0(param_1,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x18);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x18);
  return;
}


// Reference entry 1059c1e0; body size 14 bytes.
#line 1 "ENTRY_1059c1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1059c1e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1059c200; body size 14 bytes.
#line 1 "ENTRY_1059c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1059c200(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1059c310; body size 8 bytes.
#line 1 "ENTRY_1059c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1059c310(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1059c320; body size 6 bytes.
#line 1 "ENTRY_1059c320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1059c320(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 1059c330; body size 6 bytes.
#line 1 "ENTRY_1059c330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1059c330(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 1059c340; body size 6 bytes.
#line 1 "ENTRY_1059c340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1059c340(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 1059c5d0; body size 31 bytes.
#line 1 "ENTRY_1059c5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1059c5d0(undefined4 *param_1)

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


// Reference entry 1059c620; body size 14 bytes.
#line 1 "ENTRY_1059c620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1059c620(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 1059c640; body size 47 bytes.
#line 1 "ENTRY_1059c640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1059c640(int param_1)

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


// Reference entry 1059c6b0; body size 51 bytes.
#line 1 "ENTRY_1059c6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1059c6b0(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_1);
  ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                *)&uStack_4))->op_inc();
  uVar1 = (undefined4)(thunk_FUN_1059c6f0(param_1), 0);
  thunk_FUN_1148a50e(uVar1,0x18);
  return (undefined4)(uStack_4);
}


// Reference entry 1059ca50; body size 3 bytes.
#line 1 "ENTRY_1059ca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059ca50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059ca60; body size 3 bytes.
#line 1 "ENTRY_1059ca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059ca60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059ca70; body size 3 bytes.
#line 1 "ENTRY_1059ca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059ca70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059ca80; body size 3 bytes.
#line 1 "ENTRY_1059ca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059ca80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059ca90; body size 3 bytes.
#line 1 "ENTRY_1059ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059ca90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059caa0; body size 3 bytes.
#line 1 "ENTRY_1059caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059caa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059cab0; body size 3 bytes.
#line 1 "ENTRY_1059cab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059cab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059cac0; body size 3 bytes.
#line 1 "ENTRY_1059cac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059cac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059cdd0; body size 30 bytes.
#line 1 "ENTRY_1059cdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059cdd0(int param_1)

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


// Reference entry 1059ce30; body size 3 bytes.
#line 1 "ENTRY_1059ce30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1059ce30(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1059ce40; body size 11 bytes.
#line 1 "ENTRY_1059ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059ce40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1059cec0; body size 11 bytes.
#line 1 "ENTRY_1059cec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059cec0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1059ced0; body size 90 bytes.
#line 1 "ENTRY_1059ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059ced0(uint param_1)

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


// Reference entry 1059cf50; body size 13 bytes.
#line 1 "ENTRY_1059cf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059cf50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1059cf60; body size 6 bytes.
#line 1 "ENTRY_1059cf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 __fastcall FUN_1059cf60(undefined8 *param_1)

{
  return (undefined8)(*param_1);
}


// Reference entry 1059cf70; body size 57 bytes.
#line 1 "ENTRY_1059cf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059cf70(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1059cfc0; body size 60 bytes.
#line 1 "ENTRY_1059cfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1059cfc0(int param_1,int param_2)

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


// Reference entry 1059d010; body size 8 bytes.
#line 1 "ENTRY_1059d010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1059d010(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 1059d020; body size 11 bytes.
#line 1 "ENTRY_1059d020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059d020(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1059d090; body size 3 bytes.
#line 1 "ENTRY_1059d090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059d090(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1059d110; body size 4 bytes.
#line 1 "ENTRY_1059d110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1059d110(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x20));
}


// Reference entry 1059d1c0; body size 6 bytes.
#line 1 "ENTRY_1059d1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059d1c0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 1059d1d0; body size 6 bytes.
#line 1 "ENTRY_1059d1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059d1d0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 1059d2e0; body size 5 bytes.
#line 1 "ENTRY_1059d2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059d2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059d310; body size 4 bytes.
#line 1 "ENTRY_1059d310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059d310(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1059d320; body size 23 bytes.
#line 1 "ENTRY_1059d320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1059d320(int param_1)

{
  thunk_FUN_1106b190(-(uint)(param_1 != 0) & param_1 + 0x1cU,0,0);
  return;
}


// Reference entry 1059e2b0; body size 3 bytes.
#line 1 "ENTRY_1059e2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059e2b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1059e650; body size 27 bytes.
#line 1 "ENTRY_1059e650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059e650(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  thunk_FUN_103d6a60(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e680; body size 25 bytes.
#line 1 "ENTRY_1059e680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059e680(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e6a0; body size 25 bytes.
#line 1 "ENTRY_1059e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059e6a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e6c0; body size 18 bytes.
#line 1 "ENTRY_1059e6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059e6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e6e0; body size 22 bytes.
#line 1 "ENTRY_1059e6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059e6e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e700; body size 18 bytes.
#line 1 "ENTRY_1059e700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059e700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e7e0; body size 22 bytes.
#line 1 "ENTRY_1059e7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059e7e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e800; body size 11 bytes.
#line 1 "ENTRY_1059e800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059e800(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e810; body size 25 bytes.
#line 1 "ENTRY_1059e810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059e810(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e830; body size 25 bytes.
#line 1 "ENTRY_1059e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059e830(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e850; body size 29 bytes.
#line 1 "ENTRY_1059e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059e850(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  thunk_FUN_103d6a60(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e880; body size 11 bytes.
#line 1 "ENTRY_1059e880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059e880(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e890; body size 11 bytes.
#line 1 "ENTRY_1059e890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059e890(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059e8a0; body size 3 bytes.
#line 1 "ENTRY_1059e8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059e8a0(void)

{
  return;
}


// Reference entry 1059e8b0; body size 3 bytes.
#line 1 "ENTRY_1059e8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059e8b0(void)

{
  return;
}


// Reference entry 1059ebf0; body size 25 bytes.
#line 1 "ENTRY_1059ebf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ebf0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 1059ec10; body size 13 bytes.
#line 1 "ENTRY_1059ec10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ec10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1059ec20; body size 13 bytes.
#line 1 "ENTRY_1059ec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ec20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1059ec30; body size 33 bytes.
#line 1 "ENTRY_1059ec30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059ec30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1059ec60; body size 33 bytes.
#line 1 "ENTRY_1059ec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059ec60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1059ec90; body size 33 bytes.
#line 1 "ENTRY_1059ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059ec90(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1059ecc0; body size 50 bytes.
#line 1 "ENTRY_1059ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059ecc0(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return (int)(param_3);
  }
  do {
    thunk_FUN_10def210(param_1);
    param_1 = (int)(param_1 + 0x18);
    param_3 = (int)(param_3 + 0x18);
  } while (param_1 != param_2);
  return (int)(param_3);
}


// Reference entry 1059ed00; body size 3 bytes.
#line 1 "ENTRY_1059ed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ed00(void)

{
  return;
}


// Reference entry 1059ed10; body size 3 bytes.
#line 1 "ENTRY_1059ed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ed10(void)

{
  return;
}


// Reference entry 1059ed20; body size 3 bytes.
#line 1 "ENTRY_1059ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ed20(void)

{
  return;
}


// Reference entry 1059ed30; body size 3 bytes.
#line 1 "ENTRY_1059ed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ed30(void)

{
  return;
}


// Reference entry 1059ed70; body size 45 bytes.
#line 1 "ENTRY_1059ed70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059ed70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 != param_2) {
    iVar2 = (int)(param_1 + 4);
    do {
      thunk_FUN_105a1d20();
      thunk_FUN_105a1c80();
      iVar1 = (int)(iVar2 + 0x18);
      iVar2 = (int)(iVar2 + 0x1c);
    } while (iVar1 != param_2);
  }
  return;
}


// Reference entry 1059edb0; body size 23 bytes.
#line 1 "ENTRY_1059edb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059edb0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10deea50<>(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x18);
  return;
}


// Reference entry 1059edd0; body size 18 bytes.
#line 1 "ENTRY_1059edd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059edd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 1059edf0; body size 18 bytes.
#line 1 "ENTRY_1059edf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059edf0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 1059f200; body size 15 bytes.
#line 1 "ENTRY_1059f200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f200(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 1059f220; body size 15 bytes.
#line 1 "ENTRY_1059f220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f220(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 1059f240; body size 7 bytes.
#line 1 "ENTRY_1059f240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1059f250; body size 7 bytes.
#line 1 "ENTRY_1059f250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1059f260; body size 7 bytes.
#line 1 "ENTRY_1059f260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f260(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1059f270; body size 7 bytes.
#line 1 "ENTRY_1059f270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f270(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1059f280; body size 7 bytes.
#line 1 "ENTRY_1059f280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f280(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1059f290; body size 5 bytes.
#line 1 "ENTRY_1059f290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f2a0; body size 31 bytes.
#line 1 "ENTRY_1059f2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_1059f2a0(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1059f2d0; body size 3 bytes.
#line 1 "ENTRY_1059f2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f2d0(void)

{
  return;
}


// Reference entry 1059f2e0; body size 3 bytes.
#line 1 "ENTRY_1059f2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f2e0(void)

{
  return;
}


// Reference entry 1059f2f0; body size 5 bytes.
#line 1 "ENTRY_1059f2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f2f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f430; body size 7 bytes.
#line 1 "ENTRY_1059f430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1059f440; body size 38 bytes.
#line 1 "ENTRY_1059f440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_1059f440(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f470; body size 38 bytes.
#line 1 "ENTRY_1059f470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_1059f470(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f530; body size 5 bytes.
#line 1 "ENTRY_1059f530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f540; body size 5 bytes.
#line 1 "ENTRY_1059f540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f550; body size 5 bytes.
#line 1 "ENTRY_1059f550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f560; body size 5 bytes.
#line 1 "ENTRY_1059f560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f570; body size 5 bytes.
#line 1 "ENTRY_1059f570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f580; body size 36 bytes.
#line 1 "ENTRY_1059f580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059f580(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f5b0; body size 36 bytes.
#line 1 "ENTRY_1059f5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059f5b0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f670; body size 36 bytes.
#line 1 "ENTRY_1059f670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059f670(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f6a0; body size 36 bytes.
#line 1 "ENTRY_1059f6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_1059f6a0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 1059f6d0; body size 5 bytes.
#line 1 "ENTRY_1059f6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f6d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f6e0; body size 5 bytes.
#line 1 "ENTRY_1059f6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f6e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f6f0; body size 5 bytes.
#line 1 "ENTRY_1059f6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f6f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f700; body size 5 bytes.
#line 1 "ENTRY_1059f700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f710; body size 5 bytes.
#line 1 "ENTRY_1059f710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f720; body size 5 bytes.
#line 1 "ENTRY_1059f720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f730; body size 5 bytes.
#line 1 "ENTRY_1059f730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f740; body size 5 bytes.
#line 1 "ENTRY_1059f740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f750; body size 17 bytes.
#line 1 "ENTRY_1059f750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f750(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 0x18);
  return;
}


// Reference entry 1059f770; body size 20 bytes.
#line 1 "ENTRY_1059f770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1059f770(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1059e8c0<>(param_1,param_2,param_2);
  return;
}


// Reference entry 1059f790; body size 20 bytes.
#line 1 "ENTRY_1059f790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1059f790(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1059ea10(param_1,param_2,param_2);
  return;
}


// Reference entry 1059f7b0; body size 13 bytes.
#line 1 "ENTRY_1059f7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f7b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 1059f7c0; body size 13 bytes.
#line 1 "ENTRY_1059f7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f7c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 1059f7d0; body size 25 bytes.
#line 1 "ENTRY_1059f7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f7d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  thunk_FUN_103d6a60(0);
  return;
}


// Reference entry 1059f7f0; body size 14 bytes.
#line 1 "ENTRY_1059f7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f7f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10deea50<>(param_3);
  return;
}


// Reference entry 1059f810; body size 3 bytes.
#line 1 "ENTRY_1059f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f810(void)

{
  return;
}


// Reference entry 1059f820; body size 9 bytes.
#line 1 "ENTRY_1059f820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f820(undefined4 param_1,SCStr *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar2 = (uint)(DAT_12126b84);

  thunk_FUN_10dec580(param_2 + 0x10,*(undefined4 *)(*(int *)(param_2 + 0x10) + 4));
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


// Reference entry 1059f830; body size 22 bytes.
#line 1 "ENTRY_1059f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f830(undefined4 param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  thunk_FUN_105a1d20();
  piVar1 = (int *)((int *)(param_2 + 4));
  iVar3 = (int)(*piVar1);
  if (iVar3 != 0) {
    iVar4 = (int)(*(int *)(param_2 + 8));
    if (iVar3 != iVar4) {
      do {
        thunk_FUN_10def0d0();
        iVar3 = (int)(iVar3 + 0x18);
      } while (iVar3 != iVar4);
      iVar3 = (int)(*piVar1);
    }
    uVar2 = (uint)(((*(int *)(param_2 + 0xc) - iVar3) / 0x18) * 0x18);
    iVar4 = (int)(iVar3);
    if (0xfff < uVar2) {
      iVar4 = (int)(*(int *)(iVar3 + -4));
      uVar2 = (uint)(uVar2 + 0x23);
      if (0x1f < (iVar3 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar2);
    *piVar1 = (int)(0);
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  }
  return;
}


// Reference entry 1059f850; body size 12 bytes.
#line 1 "ENTRY_1059f850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059f850(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 4);
}


// Reference entry 1059f860; body size 26 bytes.
#line 1 "ENTRY_1059f860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059f860(int param_1,int param_2)

{
  return (int)((param_2 - param_1) / 0x18);
}


// Reference entry 1059f880; body size 36 bytes.
#line 1 "ENTRY_1059f880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059f880(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1059ee10<>(puVar1,param_2);
  return;
}


// Reference entry 1059f8b0; body size 36 bytes.
#line 1 "ENTRY_1059f8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1059f8b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1059ef60(puVar1,param_2);
  return;
}


// Reference entry 1059f8e0; body size 15 bytes.
#line 1 "ENTRY_1059f8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f8e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1059f900; body size 15 bytes.
#line 1 "ENTRY_1059f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f900(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1059f920; body size 5 bytes.
#line 1 "ENTRY_1059f920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f930; body size 5 bytes.
#line 1 "ENTRY_1059f930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f940; body size 5 bytes.
#line 1 "ENTRY_1059f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f950; body size 5 bytes.
#line 1 "ENTRY_1059f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f960; body size 5 bytes.
#line 1 "ENTRY_1059f960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f970; body size 5 bytes.
#line 1 "ENTRY_1059f970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f980; body size 5 bytes.
#line 1 "ENTRY_1059f980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f990; body size 5 bytes.
#line 1 "ENTRY_1059f990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f9a0; body size 5 bytes.
#line 1 "ENTRY_1059f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f9a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f9b0; body size 5 bytes.
#line 1 "ENTRY_1059f9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f9b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f9c0; body size 5 bytes.
#line 1 "ENTRY_1059f9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f9d0; body size 11 bytes.
#line 1 "ENTRY_1059f9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1059f9d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1059f9e0; body size 5 bytes.
#line 1 "ENTRY_1059f9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059f9f0; body size 5 bytes.
#line 1 "ENTRY_1059f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1059f9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059fa00; body size 15 bytes.
#line 1 "ENTRY_1059fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1059fa00(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 0x18);
}


// Reference entry 1059fa20; body size 18 bytes.
#line 1 "ENTRY_1059fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059fa20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fa80; body size 11 bytes.
#line 1 "ENTRY_1059fa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059fa80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fa90; body size 11 bytes.
#line 1 "ENTRY_1059fa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059fa90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fb20; body size 11 bytes.
#line 1 "ENTRY_1059fb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059fb20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fb30; body size 16 bytes.
#line 1 "ENTRY_1059fb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059fb30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fb50; body size 21 bytes.
#line 1 "ENTRY_1059fb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059fb50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fb70; body size 23 bytes.
#line 1 "ENTRY_1059fb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059fb70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fb90; body size 23 bytes.
#line 1 "ENTRY_1059fb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059fb90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fbb0; body size 3 bytes.
#line 1 "ENTRY_1059fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059fbb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059fbc0; body size 3 bytes.
#line 1 "ENTRY_1059fbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059fbc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059fbd0; body size 3 bytes.
#line 1 "ENTRY_1059fbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1059fbd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1059fbe0; body size 52 bytes.
#line 1 "ENTRY_1059fbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059fbe0(undefined4 *param_1)

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


// Reference entry 1059fc30; body size 13 bytes.
#line 1 "ENTRY_1059fc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1059fc30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fcc0; body size 23 bytes.
#line 1 "ENTRY_1059fcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059fcc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fd60; body size 23 bytes.
#line 1 "ENTRY_1059fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059fd60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1059fed0; body size 49 bytes.
#line 1 "ENTRY_1059fed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1059fed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a00a0; body size 16 bytes.
#line 1 "ENTRY_105a00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a00a0(undefined4 *param_1)

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


// Reference entry 105a00b0; body size 16 bytes.
#line 1 "ENTRY_105a00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a00b0(undefined4 *param_1)

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


// Reference entry 105a0110; body size 19 bytes.
#line 1 "ENTRY_105a0110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a0110(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x30);
  }
  return;
}


// Reference entry 105a0180; body size 5 bytes.
#line 1 "ENTRY_105a0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */void __fastcall  FUN_105a0180(int *param_1){
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = (int)(*param_1);
  piVar3 = (int *)(*(int **)(iVar2 + 4), 0);
  if (*(char *)((int)*(int **)(iVar2 + 4) + 0xd) == '\0') {
    do {
      thunk_FUN_1059f110(param_1,piVar3[2]);
      piVar1 = (int *)((int *)*piVar3);
      thunk_FUN_1148a50e(piVar3,0x30);
      piVar3 = (int *)(piVar1);
    } while (*(char *)((int)piVar1 + 0xd) == '\0');
    iVar2 = (int)(*param_1);
  }
  thunk_FUN_1148a50e(iVar2,0x30);
  return;
}


// Reference entry 105a07e0; body size 31 bytes.
#line 1 "ENTRY_105a07e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a07e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_1059e8c0<>(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105a0810; body size 31 bytes.
#line 1 "ENTRY_105a0810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a0810(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_1059ea10(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105a0970; body size 14 bytes.
#line 1 "ENTRY_105a0970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a0970(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105a0990; body size 14 bytes.
#line 1 "ENTRY_105a0990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a0990(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 105a0ab0; body size 12 bytes.
#line 1 "ENTRY_105a0ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_105a0ab0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 105a0ac0; body size 12 bytes.
#line 1 "ENTRY_105a0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_105a0ac0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 105a0ad0; body size 6 bytes.
#line 1 "ENTRY_105a0ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a0ad0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a0ae0; body size 6 bytes.
#line 1 "ENTRY_105a0ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a0ae0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a0af0; body size 6 bytes.
#line 1 "ENTRY_105a0af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a0af0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a0b00; body size 6 bytes.
#line 1 "ENTRY_105a0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a0b00(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a0c60; body size 18 bytes.
#line 1 "ENTRY_105a0c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_105a0c60(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 105a0dd0; body size 31 bytes.
#line 1 "ENTRY_105a0dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a0dd0(undefined4 *param_1)

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


// Reference entry 105a0e20; body size 30 bytes.
#line 1 "ENTRY_105a0e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a0e20(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_105a1f40<>(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 105a0e50; body size 30 bytes.
#line 1 "ENTRY_105a0e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a0e50(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_105a1fb0(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 4);
  return;
}


// Reference entry 105a0e80; body size 129 bytes.
#line 1 "ENTRY_105a0e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a0e80(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x10000000) {
    param_2 = (uint)(param_2 * 0x10);
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


// Reference entry 105a0f30; body size 131 bytes.
#line 1 "ENTRY_105a0f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a0f30(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0xaaaaaab) {
    param_2 = (uint)(param_2 * 0x18);
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


// Reference entry 105a0fe0; body size 49 bytes.
#line 1 "ENTRY_105a0fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_105a0fe0(uint param_2)
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


// Reference entry 105a1020; body size 49 bytes.
#line 1 "ENTRY_105a1020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_105a1020(uint param_2)
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


// Reference entry 105a1060; body size 49 bytes.
#line 1 "ENTRY_105a1060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_105a1060(uint param_2)
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


// Reference entry 105a10a0; body size 63 bytes.
#line 1 "ENTRY_105a10a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_105a10a0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x18);
  if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
    return (uint)(0xaaaaaaa);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 105a11d0; body size 14 bytes.
#line 1 "ENTRY_105a11d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a11d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x5555555) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105a11f0; body size 252 bytes.
#line 1 "ENTRY_105a11f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a11f0(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0xfffffff < param_2) {
                    
    thunk_FUN_105a1f20<>();
  }
  uVar2 = (uint)(*param_1);
  uVar3 = (uint)((int)(param_1[2] - uVar2) >> 4);
  if (0xfffffff - (uVar3 >> 1) < uVar3) {
    uVar5 = (uint)(0xfffffff);
  }
  else {
    uVar5 = (uint)((uVar3 >> 1) + uVar3);
    if (uVar5 < param_2) {
      uVar5 = (uint)(param_2);
    }
  }
  if (uVar2 != 0) {
    uVar3 = (uint)(uVar3 * 0x10);
    uVar4 = (uint)(uVar2);
    if (0xfff < uVar3) {
      uVar4 = (uint)(*(uint *)(uVar2 - 4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (uVar2 - uVar4) - 4) goto LAB_105a12ad;
    }
    thunk_FUN_1148a50e(uVar4,uVar3);
    *param_1 = (uint)(0);
    param_1[1] = (uint)(0);
    param_1[2] = (uint)(0);
  }
  if (uVar5 < 0x10000000) {
    uVar5 = (uint)(uVar5 * 0x10);
    if (uVar5 < 0x1000) {
      if (uVar5 == 0) {
        *param_1 = (uint)(0);
        param_1[1] = (uint)(0);
        param_1[2] = (uint)(0);
        return;
      }
      pvVar1 = (void *)(operator_new(uVar5), 0);
      *param_1 = (uint)((uint)pvVar1);
      param_1[1] = (uint)((uint)pvVar1);
      param_1[2] = (uint)((uint)((int)pvVar1 + uVar5));
      return;
    }
    if (uVar5 < uVar5 + 0x23) {
      pvVar1 = (char *)(operator_new(uVar5 + 0x23), 0);
      if ((void *)(pvVar1) != (void *)(0x0)) {
        uVar2 = (uint)((int)pvVar1 + 0x23U & 0xffffffe0);
        *(void**)(uVar2 - 4) = (void *)(pvVar1);
        *param_1 = (uint)(uVar2);
        param_1[1] = (uint)(uVar2);
        param_1[2] = (uint)(uVar2 + uVar5);
        return;
      }
LAB_105a12ad:
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 105a14d0; body size 21 bytes.
#line 1 "ENTRY_105a14d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a14d0(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1059e8c0<>(*param_1,param_1[1],param_1);
  return;
}


// Reference entry 105a14f0; body size 21 bytes.
#line 1 "ENTRY_105a14f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  __stdcall FUN_105a14f0(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1059ea10(*param_1,param_1[1],param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 105a1510; body size 3 bytes.
#line 1 "ENTRY_105a1510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1510(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 105a1520; body size 3 bytes.
#line 1 "ENTRY_105a1520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1520(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 105a1530; body size 3 bytes.
#line 1 "ENTRY_105a1530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1530(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 105a15b0; body size 3 bytes.
#line 1 "ENTRY_105a15b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a15b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a15c0; body size 3 bytes.
#line 1 "ENTRY_105a15c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a15c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a15d0; body size 3 bytes.
#line 1 "ENTRY_105a15d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a15d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a15e0; body size 3 bytes.
#line 1 "ENTRY_105a15e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a15e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a15f0; body size 3 bytes.
#line 1 "ENTRY_105a15f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a15f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1600; body size 3 bytes.
#line 1 "ENTRY_105a1600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1610; body size 3 bytes.
#line 1 "ENTRY_105a1610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1620; body size 3 bytes.
#line 1 "ENTRY_105a1620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1620(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1630; body size 3 bytes.
#line 1 "ENTRY_105a1630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1640; body size 3 bytes.
#line 1 "ENTRY_105a1640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1650; body size 3 bytes.
#line 1 "ENTRY_105a1650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1660; body size 3 bytes.
#line 1 "ENTRY_105a1660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1670; body size 3 bytes.
#line 1 "ENTRY_105a1670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1680; body size 3 bytes.
#line 1 "ENTRY_105a1680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1690; body size 3 bytes.
#line 1 "ENTRY_105a1690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a16a0; body size 3 bytes.
#line 1 "ENTRY_105a16a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a16a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a16b0; body size 3 bytes.
#line 1 "ENTRY_105a16b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a16b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a16c0; body size 3 bytes.
#line 1 "ENTRY_105a16c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a16c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a16d0; body size 3 bytes.
#line 1 "ENTRY_105a16d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a16d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a16e0; body size 3 bytes.
#line 1 "ENTRY_105a16e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a16e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a16f0; body size 3 bytes.
#line 1 "ENTRY_105a16f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a16f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1700; body size 3 bytes.
#line 1 "ENTRY_105a1700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1720; body size 3 bytes.
#line 1 "ENTRY_105a1720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a1740; body size 3 bytes.
#line 1 "ENTRY_105a1740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a19e0; body size 79 bytes.
#line 1 "ENTRY_105a19e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a19e0(int param_2)
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


// Reference entry 105a1a50; body size 31 bytes.
#line 1 "ENTRY_105a1a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_105a1a50(int *param_1)

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


// Reference entry 105a1a80; body size 3 bytes.
#line 1 "ENTRY_105a1a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1a80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 105a1a90; body size 3 bytes.
#line 1 "ENTRY_105a1a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1a90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 105a1aa0; body size 11 bytes.
#line 1 "ENTRY_105a1aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a1aa0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105a1ab0; body size 6 bytes.
#line 1 "ENTRY_105a1ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a1ab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 105a1ac0; body size 83 bytes.
#line 1 "ENTRY_105a1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a1ac0(int *param_2)
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


// Reference entry 105a1de0; body size 38 bytes.
#line 1 "ENTRY_105a1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_105a1de0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 105a1e10; body size 38 bytes.
#line 1 "ENTRY_105a1e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_105a1e10(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 105a1e40; body size 27 bytes.
#line 1 "ENTRY_105a1e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1e40(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 105a1e70; body size 27 bytes.
#line 1 "ENTRY_105a1e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1e70(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 105a1ea0; body size 27 bytes.
#line 1 "ENTRY_105a1ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1ea0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 105a1ed0; body size 27 bytes.
#line 1 "ENTRY_105a1ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a1ed0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 105a2020; body size 90 bytes.
#line 1 "ENTRY_105a2020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105a2020(uint param_1)

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


// Reference entry 105a20a0; body size 87 bytes.
#line 1 "ENTRY_105a20a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105a20a0(uint param_1)

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


// Reference entry 105a2190; body size 13 bytes.
#line 1 "ENTRY_105a2190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a2190(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 105a21a0; body size 9 bytes.
#line 1 "ENTRY_105a21a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a21a0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 105a21b0; body size 9 bytes.
#line 1 "ENTRY_105a21b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a21b0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 105a21c0; body size 9 bytes.
#line 1 "ENTRY_105a21c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a21c0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 4);
}


// Reference entry 105a21d0; body size 23 bytes.
#line 1 "ENTRY_105a21d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a21d0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x18);
}


// Reference entry 105a21f0; body size 57 bytes.
#line 1 "ENTRY_105a21f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a21f0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105a2240; body size 61 bytes.
#line 1 "ENTRY_105a2240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a2240(int param_1,int param_2)

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


// Reference entry 105a2290; body size 61 bytes.
#line 1 "ENTRY_105a2290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a2290(int param_1,int param_2)

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


// Reference entry 105a22e0; body size 60 bytes.
#line 1 "ENTRY_105a22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a22e0(int param_1,int param_2)

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


// Reference entry 105a2330; body size 57 bytes.
#line 1 "ENTRY_105a2330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a2330(int param_1,int param_2)

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


// Reference entry 105a2430; body size 11 bytes.
#line 1 "ENTRY_105a2430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a2430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105a2440; body size 11 bytes.
#line 1 "ENTRY_105a2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a2440(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105a2a50; body size 26 bytes.
#line 1 "ENTRY_105a2a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a2a50(int *param_1)

{
  int *piVar1;
  
  (*(code ***)param_1)[2]();
  thunk_FUN_105ad910();
  piVar1 = (int *)((int *)thunk_FUN_106dc530(), 0);
                    
                    
  (*(code ***)piVar1)[1]();
  return;
}


// Reference entry 105a3240; body size 6 bytes.
#line 1 "ENTRY_105a3240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a3240(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 105a3250; body size 6 bytes.
#line 1 "ENTRY_105a3250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a3250(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 105a3260; body size 6 bytes.
#line 1 "ENTRY_105a3260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a3260(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 105a3270; body size 6 bytes.
#line 1 "ENTRY_105a3270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a3270(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 105a3280; body size 6 bytes.
#line 1 "ENTRY_105a3280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a3280(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 105a3290; body size 6 bytes.
#line 1 "ENTRY_105a3290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a3290(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 105a32a0; body size 6 bytes.
#line 1 "ENTRY_105a32a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a32a0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 105a32b0; body size 6 bytes.
#line 1 "ENTRY_105a32b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a32b0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 105a32c0; body size 6 bytes.
#line 1 "ENTRY_105a32c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a32c0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 105a32d0; body size 6 bytes.
#line 1 "ENTRY_105a32d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a32d0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 105a32e0; body size 5 bytes.
#line 1 "ENTRY_105a32e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a32e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a32f0; body size 5 bytes.
#line 1 "ENTRY_105a32f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a32f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a3300; body size 36 bytes.
#line 1 "ENTRY_105a3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a3300(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1059ee10<>(puVar1,param_2);
  return;
}


// Reference entry 105a3330; body size 36 bytes.
#line 1 "ENTRY_105a3330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a3330(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1059ef60(puVar1,param_2);
  return;
}


// Reference entry 105a3360; body size 5 bytes.
#line 1 "ENTRY_105a3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a3360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a3370; body size 5 bytes.
#line 1 "ENTRY_105a3370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a3370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a3380; body size 9 bytes.
#line 1 "ENTRY_105a3380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a3380(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 105a3390; body size 9 bytes.
#line 1 "ENTRY_105a3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a3390(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 105a34a0; body size 18 bytes.
#line 1 "ENTRY_105a34a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a34a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a34c0; body size 18 bytes.
#line 1 "ENTRY_105a34c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a34c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a34e0; body size 18 bytes.
#line 1 "ENTRY_105a34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a34e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3500; body size 18 bytes.
#line 1 "ENTRY_105a3500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a3500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3520; body size 22 bytes.
#line 1 "ENTRY_105a3520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3520(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3540; body size 20 bytes.
#line 1 "ENTRY_105a3540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3540(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3560; body size 11 bytes.
#line 1 "ENTRY_105a3560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3560(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3570; body size 11 bytes.
#line 1 "ENTRY_105a3570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3570(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3580; body size 22 bytes.
#line 1 "ENTRY_105a3580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3580(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a35a0; body size 22 bytes.
#line 1 "ENTRY_105a35a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a35a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a35c0; body size 22 bytes.
#line 1 "ENTRY_105a35c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a35c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a35e0; body size 22 bytes.
#line 1 "ENTRY_105a35e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a35e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a36a0; body size 11 bytes.
#line 1 "ENTRY_105a36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a36a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a36b0; body size 11 bytes.
#line 1 "ENTRY_105a36b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a36b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a36c0; body size 18 bytes.
#line 1 "ENTRY_105a36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a36c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a36e0; body size 18 bytes.
#line 1 "ENTRY_105a36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a36e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3700; body size 18 bytes.
#line 1 "ENTRY_105a3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a3700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3720; body size 18 bytes.
#line 1 "ENTRY_105a3720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a3720(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3c30; body size 22 bytes.
#line 1 "ENTRY_105a3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3c30(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3c50; body size 22 bytes.
#line 1 "ENTRY_105a3c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3c50(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3c70; body size 22 bytes.
#line 1 "ENTRY_105a3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3c70(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3c90; body size 22 bytes.
#line 1 "ENTRY_105a3c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3c90(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3cb0; body size 18 bytes.
#line 1 "ENTRY_105a3cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a3cb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3cd0; body size 18 bytes.
#line 1 "ENTRY_105a3cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a3cd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3cf0; body size 11 bytes.
#line 1 "ENTRY_105a3cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3cf0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3d00; body size 11 bytes.
#line 1 "ENTRY_105a3d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a3d00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3d10; body size 18 bytes.
#line 1 "ENTRY_105a3d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a3d10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a3dd0; body size 18 bytes.
#line 1 "ENTRY_105a3dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a3dd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a4010; body size 22 bytes.
#line 1 "ENTRY_105a4010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a4010(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a4150; body size 91 bytes.
#line 1 "ENTRY_105a4150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105a4150(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 105a4530; body size 3 bytes.
#line 1 "ENTRY_105a4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4530(void)

{
  return;
}


// Reference entry 105a4540; body size 25 bytes.
#line 1 "ENTRY_105a4540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4540(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105a4560; body size 25 bytes.
#line 1 "ENTRY_105a4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4560(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105a4580; body size 25 bytes.
#line 1 "ENTRY_105a4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4580(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x38), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105a45a0; body size 25 bytes.
#line 1 "ENTRY_105a45a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a45a0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 105a48e0; body size 13 bytes.
#line 1 "ENTRY_105a48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a48e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105a48f0; body size 13 bytes.
#line 1 "ENTRY_105a48f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a48f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105a4900; body size 13 bytes.
#line 1 "ENTRY_105a4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4900(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105a4910; body size 13 bytes.
#line 1 "ENTRY_105a4910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4910(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105a4920; body size 13 bytes.
#line 1 "ENTRY_105a4920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4920(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105a4930; body size 13 bytes.
#line 1 "ENTRY_105a4930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4930(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105a4940; body size 13 bytes.
#line 1 "ENTRY_105a4940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4940(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105a4950; body size 13 bytes.
#line 1 "ENTRY_105a4950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4950(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 105a49f0; body size 113 bytes.
#line 1 "ENTRY_105a49f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a49f0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_105a4bf0<>(*(undefined4 *)(*param_2 + 4),*param_1,param_3), 0);
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


// Reference entry 105a4ef0; body size 3 bytes.
#line 1 "ENTRY_105a4ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4ef0(void)

{
  return;
}


// Reference entry 105a4f00; body size 3 bytes.
#line 1 "ENTRY_105a4f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4f00(void)

{
  return;
}


// Reference entry 105a4f10; body size 3 bytes.
#line 1 "ENTRY_105a4f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4f10(void)

{
  return;
}


// Reference entry 105a4f20; body size 3 bytes.
#line 1 "ENTRY_105a4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a4f20(void)

{
  return;
}


// Reference entry 105a4f30; body size 118 bytes.
#line 1 "ENTRY_105a4f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105a4f30(int *param_2,uint *param_3)
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


// Reference entry 105a57d0; body size 15 bytes.
#line 1 "ENTRY_105a57d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a57d0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 105a57f0; body size 15 bytes.
#line 1 "ENTRY_105a57f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a57f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 105a5810; body size 15 bytes.
#line 1 "ENTRY_105a5810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a5810(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x38);
  return;
}


// Reference entry 105a5830; body size 15 bytes.
#line 1 "ENTRY_105a5830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a5830(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 105a5850; body size 15 bytes.
#line 1 "ENTRY_105a5850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a5850(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 105a5a10; body size 5 bytes.
#line 1 "ENTRY_105a5a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a5a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a5a20; body size 5 bytes.
#line 1 "ENTRY_105a5a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a5a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a5a30; body size 5 bytes.
#line 1 "ENTRY_105a5a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a5a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a5a40; body size 5 bytes.
#line 1 "ENTRY_105a5a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a5a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a5a50; body size 5 bytes.
#line 1 "ENTRY_105a5a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a5a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a5a60; body size 31 bytes.
#line 1 "ENTRY_105a5a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105a5a60(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 105a5a90; body size 31 bytes.
#line 1 "ENTRY_105a5a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_105a5a90(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 105a5ac0; body size 37 bytes.
#line 1 "ENTRY_105a5ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a5ac0(int param_1,SCStr *param_2)

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


// Reference entry 105a5af0; body size 37 bytes.
#line 1 "ENTRY_105a5af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a5af0(int param_1,SCStr *param_2)

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


// Reference entry 105a5b20; body size 3 bytes.
#line 1 "ENTRY_105a5b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a5b20(void)

{
  return;
}


// Reference entry 105a5b30; body size 3 bytes.
#line 1 "ENTRY_105a5b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a5b30(void)

{
  return;
}


// Reference entry 105a5b40; body size 3 bytes.
#line 1 "ENTRY_105a5b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a5b40(void)

{
  return;
}


// Reference entry 105a61e0; body size 7 bytes.
#line 1 "ENTRY_105a61e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a61e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105a61f0; body size 7 bytes.
#line 1 "ENTRY_105a61f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a61f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105a6200; body size 5 bytes.
#line 1 "ENTRY_105a6200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6210; body size 5 bytes.
#line 1 "ENTRY_105a6210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6220; body size 5 bytes.
#line 1 "ENTRY_105a6220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6230; body size 5 bytes.
#line 1 "ENTRY_105a6230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6240; body size 5 bytes.
#line 1 "ENTRY_105a6240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6250; body size 5 bytes.
#line 1 "ENTRY_105a6250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6260; body size 5 bytes.
#line 1 "ENTRY_105a6260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6270; body size 5 bytes.
#line 1 "ENTRY_105a6270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6280; body size 5 bytes.
#line 1 "ENTRY_105a6280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6290; body size 5 bytes.
#line 1 "ENTRY_105a6290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a62a0; body size 5 bytes.
#line 1 "ENTRY_105a62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a62a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a62b0; body size 5 bytes.
#line 1 "ENTRY_105a62b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a62b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a62c0; body size 5 bytes.
#line 1 "ENTRY_105a62c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a62c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a62d0; body size 5 bytes.
#line 1 "ENTRY_105a62d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a62d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a62e0; body size 5 bytes.
#line 1 "ENTRY_105a62e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a62e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a62f0; body size 5 bytes.
#line 1 "ENTRY_105a62f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a62f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6300; body size 5 bytes.
#line 1 "ENTRY_105a6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6310; body size 5 bytes.
#line 1 "ENTRY_105a6310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6320; body size 5 bytes.
#line 1 "ENTRY_105a6320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6330; body size 5 bytes.
#line 1 "ENTRY_105a6330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6340; body size 5 bytes.
#line 1 "ENTRY_105a6340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6350; body size 5 bytes.
#line 1 "ENTRY_105a6350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6360; body size 5 bytes.
#line 1 "ENTRY_105a6360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6370; body size 5 bytes.
#line 1 "ENTRY_105a6370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6380; body size 5 bytes.
#line 1 "ENTRY_105a6380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a63c0; body size 22 bytes.
#line 1 "ENTRY_105a63c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a63c0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 105a6570; body size 37 bytes.
#line 1 "ENTRY_105a6570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a6570(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x10));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x14));
  *(undefined4*)(param_2 + 8) = (undefined4)(*(undefined4 *)(param_3 + 8));
  *(undefined4*)(param_2 + 0xc) = (undefined4)(uVar1);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(uVar3);
  uVar1 = (undefined4)(*(undefined4 *)(param_3 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_3 + 0x20));
  uVar3 = (undefined4)(*(undefined4 *)(param_3 + 0x24));
  *(undefined4*)(param_2 + 0x18) = (undefined4)(*(undefined4 *)(param_3 + 0x18));
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(uVar1);
  *(undefined4*)(param_2 + 0x20) = (undefined4)(uVar2);
  *(undefined4*)(param_2 + 0x24) = (undefined4)(uVar3);
  return;
}


// Reference entry 105a66c0; body size 3 bytes.
#line 1 "ENTRY_105a66c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a66c0(void)

{
  return;
}


// Reference entry 105a6840; body size 86 bytes.
#line 1 "ENTRY_105a6840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105a6840(int *param_1,int *param_2)

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


// Reference entry 105a68b0; body size 57 bytes.
#line 1 "ENTRY_105a68b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105a68b0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_2);
  ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                *)&uStack_4))->op_inc();
  uVar1 = (undefined4)(thunk_FUN_105aa0f0(param_2), 0);
  thunk_FUN_1148a50e(uVar1,0x18);
  *param_1 = (undefined4)(uStack_4);
  return;
}


// Reference entry 105a69a0; body size 15 bytes.
#line 1 "ENTRY_105a69a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a69a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 105a69c0; body size 15 bytes.
#line 1 "ENTRY_105a69c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a69c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 105a69e0; body size 15 bytes.
#line 1 "ENTRY_105a69e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a69e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 105a6a00; body size 15 bytes.
#line 1 "ENTRY_105a6a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6a00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 105a6a20; body size 15 bytes.
#line 1 "ENTRY_105a6a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6a20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 105a6a40; body size 15 bytes.
#line 1 "ENTRY_105a6a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6a40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 105a6a60; body size 15 bytes.
#line 1 "ENTRY_105a6a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6a60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 105a6a80; body size 15 bytes.
#line 1 "ENTRY_105a6a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6a80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 105a6aa0; body size 5 bytes.
#line 1 "ENTRY_105a6aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6ab0; body size 5 bytes.
#line 1 "ENTRY_105a6ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6ac0; body size 5 bytes.
#line 1 "ENTRY_105a6ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6ad0; body size 5 bytes.
#line 1 "ENTRY_105a6ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6ae0; body size 5 bytes.
#line 1 "ENTRY_105a6ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6af0; body size 5 bytes.
#line 1 "ENTRY_105a6af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b00; body size 5 bytes.
#line 1 "ENTRY_105a6b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b10; body size 5 bytes.
#line 1 "ENTRY_105a6b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b20; body size 5 bytes.
#line 1 "ENTRY_105a6b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b30; body size 5 bytes.
#line 1 "ENTRY_105a6b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b40; body size 5 bytes.
#line 1 "ENTRY_105a6b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b50; body size 5 bytes.
#line 1 "ENTRY_105a6b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b60; body size 5 bytes.
#line 1 "ENTRY_105a6b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b70; body size 5 bytes.
#line 1 "ENTRY_105a6b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b80; body size 5 bytes.
#line 1 "ENTRY_105a6b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6b90; body size 5 bytes.
#line 1 "ENTRY_105a6b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6ba0; body size 5 bytes.
#line 1 "ENTRY_105a6ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6bb0; body size 5 bytes.
#line 1 "ENTRY_105a6bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6bc0; body size 5 bytes.
#line 1 "ENTRY_105a6bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6bd0; body size 5 bytes.
#line 1 "ENTRY_105a6bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6be0; body size 5 bytes.
#line 1 "ENTRY_105a6be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6bf0; body size 11 bytes.
#line 1 "ENTRY_105a6bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a6bf0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 105a6c00; body size 11 bytes.
#line 1 "ENTRY_105a6c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105a6c00(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 105a6c10; body size 5 bytes.
#line 1 "ENTRY_105a6c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6c20; body size 5 bytes.
#line 1 "ENTRY_105a6c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6c30; body size 5 bytes.
#line 1 "ENTRY_105a6c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6c40; body size 5 bytes.
#line 1 "ENTRY_105a6c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105a6c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a6c50; body size 27 bytes.
#line 1 "ENTRY_105a6c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a6c50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6d40; body size 18 bytes.
#line 1 "ENTRY_105a6d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6d40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6d60; body size 18 bytes.
#line 1 "ENTRY_105a6d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6d80; body size 18 bytes.
#line 1 "ENTRY_105a6d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6d80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6da0; body size 18 bytes.
#line 1 "ENTRY_105a6da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6da0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6ec0; body size 11 bytes.
#line 1 "ENTRY_105a6ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6ec0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6ed0; body size 11 bytes.
#line 1 "ENTRY_105a6ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6ed0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6ee0; body size 11 bytes.
#line 1 "ENTRY_105a6ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6ee0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6ef0; body size 11 bytes.
#line 1 "ENTRY_105a6ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6ef0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6f00; body size 51 bytes.
#line 1 "ENTRY_105a6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6f00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 105a6f40; body size 51 bytes.
#line 1 "ENTRY_105a6f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6f40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x38), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 105a6f80; body size 11 bytes.
#line 1 "ENTRY_105a6f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6f80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6f90; body size 11 bytes.
#line 1 "ENTRY_105a6f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6f90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a6fa0; body size 11 bytes.
#line 1 "ENTRY_105a6fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a6fa0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a71b0; body size 11 bytes.
#line 1 "ENTRY_105a71b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a71b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a71c0; body size 11 bytes.
#line 1 "ENTRY_105a71c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a71c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a71d0; body size 11 bytes.
#line 1 "ENTRY_105a71d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a71d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a71e0; body size 11 bytes.
#line 1 "ENTRY_105a71e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a71e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a71f0; body size 11 bytes.
#line 1 "ENTRY_105a71f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a71f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7200; body size 11 bytes.
#line 1 "ENTRY_105a7200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a7200(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7210; body size 11 bytes.
#line 1 "ENTRY_105a7210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a7210(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7220; body size 16 bytes.
#line 1 "ENTRY_105a7220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7220(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7240; body size 16 bytes.
#line 1 "ENTRY_105a7240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7260; body size 16 bytes.
#line 1 "ENTRY_105a7260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7280; body size 16 bytes.
#line 1 "ENTRY_105a7280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7280(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a72a0; body size 3 bytes.
#line 1 "ENTRY_105a72a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a72a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a72b0; body size 3 bytes.
#line 1 "ENTRY_105a72b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a72b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a72c0; body size 3 bytes.
#line 1 "ENTRY_105a72c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a72c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a72d0; body size 3 bytes.
#line 1 "ENTRY_105a72d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a72d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105a72e0; body size 52 bytes.
#line 1 "ENTRY_105a72e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a72e0(undefined4 *param_1)

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


// Reference entry 105a7330; body size 52 bytes.
#line 1 "ENTRY_105a7330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7330(undefined4 *param_1)

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


// Reference entry 105a7420; body size 52 bytes.
#line 1 "ENTRY_105a7420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7420(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7590; body size 52 bytes.
#line 1 "ENTRY_105a7590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7590(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x38), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7670; body size 43 bytes.
#line 1 "ENTRY_105a7670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_105a7670(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x10));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x14));
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
  *(undefined4*)(param_1 + 0xc) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(uVar3);
  uVar1 = (undefined4)(*(undefined4 *)(param_2 + 0x1c));
  uVar2 = (undefined4)(*(undefined4 *)(param_2 + 0x20));
  uVar3 = (undefined4)(*(undefined4 *)(param_2 + 0x24));
  *(undefined4*)(param_1 + 0x18) = (undefined4)(*(undefined4 *)(param_2 + 0x18));
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(uVar1);
  *(undefined4*)(param_1 + 0x20) = (undefined4)(uVar2);
  *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar3);
  return (SCStr *)(param_1);
}


// Reference entry 105a76b0; body size 13 bytes.
#line 1 "ENTRY_105a76b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a76b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a76c0; body size 13 bytes.
#line 1 "ENTRY_105a76c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a76c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 105a76d0; body size 31 bytes.
#line 1 "ENTRY_105a76d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_105a76d0(SCStr *param_2,SCStr param_3)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  param_1[4] = (SCStr)(param_3);
  return (SCStr *)(param_1);
}


// Reference entry 105a77c0; body size 61 bytes.
#line 1 "ENTRY_105a77c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a77c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(1);
  thunk_FUN_10deea50<>(param_2);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7810; body size 64 bytes.
#line 1 "ENTRY_105a7810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a7810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(2);
  param_1[2] = (undefined4)(param_2);
  thunk_FUN_10deeb70();
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7860; body size 64 bytes.
#line 1 "ENTRY_105a7860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a7860(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(param_2);
  thunk_FUN_10deeb70();
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a78b0; body size 46 bytes.
#line 1 "ENTRY_105a78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a78b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(*param_2);
  piVar1 = (int *)((int *)param_2[1]);
  param_1[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (*(code ***)piVar1)[1]();
  }
  param_1[2] = (undefined4)(param_2[2]);
  return (undefined4 *)(param_1);
}


// Reference entry 105a78f0; body size 54 bytes.
#line 1 "ENTRY_105a78f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a78f0(int *param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(*(code ***)param_2)[3](), 0);
    param_1[1] = (undefined4)(piVar1);
    (*(code ***)piVar1)[1]();
  }
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7940; body size 9 bytes.
#line 1 "ENTRY_105a7940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_105a7940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINewWizController);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7c10; body size 32 bytes.
#line 1 "ENTRY_105a7c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a7c10(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  thunk_FUN_103d6a60(0);
  return (undefined4 *)(param_1);
}


// Reference entry 105a7f60; body size 19 bytes.
#line 1 "ENTRY_105a7f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a7f60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 105a8150; body size 19 bytes.
#line 1 "ENTRY_105a8150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a8150(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 105a8550; body size 7 bytes.
#line 1 "ENTRY_105a8550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a8550(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 105a8920; body size 65 bytes.
#line 1 "ENTRY_105a8920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105a8920(int *param_2)
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
      (*(code ***)piVar1)[2]();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (*(code ***)piVar1)[1]();
    }
  }
  return (int *)(param_1);
}


// Reference entry 105a8980; body size 58 bytes.
#line 1 "ENTRY_105a8980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105a8980(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_105a5110<>(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    thunk_FUN_105a4960<>(param_2,param_2);
  }
  return (int *)(param_1);
}


// Reference entry 105a89d0; body size 58 bytes.
#line 1 "ENTRY_105a89d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105a89d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_105a5110<>(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    thunk_FUN_105a4960<>(param_2,param_2);
  }
  return (int *)(param_1);
}


// Reference entry 105a8a20; body size 132 bytes.
#line 1 "ENTRY_105a8a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105a8a20(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    if (iVar1 != 0) {
      uVar3 = (uint)(param_1[2] - iVar1 & 0xfffffff0);
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
    *param_1 = (int)(*param_2);
    param_1[1] = (int)(param_2[1]);
    param_1[2] = (int)(param_2[2]);
    *param_2 = (int)(0);
    param_2[1] = (int)(0);
    param_2[2] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 105a8ad0; body size 60 bytes.
#line 1 "ENTRY_105a8ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a8ad0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_105a1c80();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 105a8b20; body size 41 bytes.
#line 1 "ENTRY_105a8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_105a8b20(SCStr *param_2)
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


// Reference entry 105a8bc0; body size 71 bytes.
#line 1 "ENTRY_105a8bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105a8bc0(int *param_2)
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
      (*(code ***)piVar1)[2]();
      iVar2 = (int)(*param_2);
    }
    *param_1 = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[1]);
    param_1[1] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (*(code ***)piVar1)[1]();
    }
  }
  param_1[2] = (int)(param_2[2]);
  return (int *)(param_1);
}


// Reference entry 105a8df0; body size 14 bytes.
#line 1 "ENTRY_105a8df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8df0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105a8e10; body size 14 bytes.
#line 1 "ENTRY_105a8e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8e10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105a8e30; body size 14 bytes.
#line 1 "ENTRY_105a8e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8e30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105a8e50; body size 14 bytes.
#line 1 "ENTRY_105a8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8e50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105a8e70; body size 14 bytes.
#line 1 "ENTRY_105a8e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8e70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 105a8e90; body size 14 bytes.
#line 1 "ENTRY_105a8e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8e90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 105a8eb0; body size 14 bytes.
#line 1 "ENTRY_105a8eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8eb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 105a8ed0; body size 14 bytes.
#line 1 "ENTRY_105a8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8ed0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 105a8ef0; body size 14 bytes.
#line 1 "ENTRY_105a8ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8ef0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 105a8f10; body size 12 bytes.
#line 1 "ENTRY_105a8f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a8f10(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 105a8f20; body size 14 bytes.
#line 1 "ENTRY_105a8f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105a8f20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 105a9520; body size 7 bytes.
#line 1 "ENTRY_105a9520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105a9520(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 105a9530; body size 3 bytes.
#line 1 "ENTRY_105a9530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a9530(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105a9540; body size 7 bytes.
#line 1 "ENTRY_105a9540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105a9540(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 105a9550; body size 3 bytes.
#line 1 "ENTRY_105a9550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a9550(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105a9560; body size 3 bytes.
#line 1 "ENTRY_105a9560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105a9560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105a9570; body size 6 bytes.
#line 1 "ENTRY_105a9570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a9570(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a9580; body size 6 bytes.
#line 1 "ENTRY_105a9580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a9580(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a9590; body size 6 bytes.
#line 1 "ENTRY_105a9590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a9590(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a95a0; body size 6 bytes.
#line 1 "ENTRY_105a95a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a95a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a95b0; body size 6 bytes.
#line 1 "ENTRY_105a95b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a95b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a95c0; body size 6 bytes.
#line 1 "ENTRY_105a95c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a95c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a95d0; body size 6 bytes.
#line 1 "ENTRY_105a95d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a95d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a95e0; body size 6 bytes.
#line 1 "ENTRY_105a95e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a95e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a95f0; body size 6 bytes.
#line 1 "ENTRY_105a95f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a95f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a9600; body size 6 bytes.
#line 1 "ENTRY_105a9600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a9600(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a9610; body size 6 bytes.
#line 1 "ENTRY_105a9610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a9610(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a9620; body size 6 bytes.
#line 1 "ENTRY_105a9620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a9620(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a9630; body size 6 bytes.
#line 1 "ENTRY_105a9630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a9630(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a9640; body size 6 bytes.
#line 1 "ENTRY_105a9640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_105a9640(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 105a9880; body size 20 bytes.
#line 1 "ENTRY_105a9880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105a9880(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 105a9980; body size 18 bytes.
#line 1 "ENTRY_105a9980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_105a9980(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 105a99a0; body size 18 bytes.
#line 1 "ENTRY_105a99a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_105a99a0(uint *param_1,uint *param_2)

{
  return (bool)(*param_1 < (uint)(*(param_2)));
}


// Reference entry 105a9d10; body size 31 bytes.
#line 1 "ENTRY_105a9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9d10(undefined4 *param_1)

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


// Reference entry 105a9d40; body size 31 bytes.
#line 1 "ENTRY_105a9d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9d40(undefined4 *param_1)

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


// Reference entry 105a9d70; body size 31 bytes.
#line 1 "ENTRY_105a9d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9d70(undefined4 *param_1)

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


// Reference entry 105a9da0; body size 31 bytes.
#line 1 "ENTRY_105a9da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9da0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x38), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 105a9e50; body size 14 bytes.
#line 1 "ENTRY_105a9e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9e50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105a9e70; body size 14 bytes.
#line 1 "ENTRY_105a9e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9e70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105a9e90; body size 14 bytes.
#line 1 "ENTRY_105a9e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9e90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105a9eb0; body size 14 bytes.
#line 1 "ENTRY_105a9eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105a9eb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x4924924) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 105a9f10; body size 51 bytes.
#line 1 "ENTRY_105a9f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105a9f10(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_1);
  ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                *)&uStack_4))->op_inc();
  uVar1 = (undefined4)(thunk_FUN_105aa0f0(param_1), 0);
  thunk_FUN_1148a50e(uVar1,0x18);
  return (undefined4)(uStack_4);
}


// Reference entry 105aa7b0; body size 3 bytes.
#line 1 "ENTRY_105aa7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa7c0; body size 3 bytes.
#line 1 "ENTRY_105aa7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa7c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa7d0; body size 3 bytes.
#line 1 "ENTRY_105aa7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa7d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa7e0; body size 3 bytes.
#line 1 "ENTRY_105aa7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa7e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa7f0; body size 3 bytes.
#line 1 "ENTRY_105aa7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa800; body size 3 bytes.
#line 1 "ENTRY_105aa800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa810; body size 3 bytes.
#line 1 "ENTRY_105aa810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa820; body size 3 bytes.
#line 1 "ENTRY_105aa820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa830; body size 3 bytes.
#line 1 "ENTRY_105aa830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa840; body size 3 bytes.
#line 1 "ENTRY_105aa840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa850; body size 3 bytes.
#line 1 "ENTRY_105aa850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa860; body size 3 bytes.
#line 1 "ENTRY_105aa860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa870; body size 3 bytes.
#line 1 "ENTRY_105aa870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa880; body size 3 bytes.
#line 1 "ENTRY_105aa880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa890; body size 3 bytes.
#line 1 "ENTRY_105aa890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa8a0; body size 3 bytes.
#line 1 "ENTRY_105aa8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa8a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa8b0; body size 3 bytes.
#line 1 "ENTRY_105aa8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa8b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa8c0; body size 3 bytes.
#line 1 "ENTRY_105aa8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa8d0; body size 3 bytes.
#line 1 "ENTRY_105aa8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa8d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa8e0; body size 3 bytes.
#line 1 "ENTRY_105aa8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa8f0; body size 3 bytes.
#line 1 "ENTRY_105aa8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa900; body size 3 bytes.
#line 1 "ENTRY_105aa900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa910; body size 3 bytes.
#line 1 "ENTRY_105aa910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa920; body size 3 bytes.
#line 1 "ENTRY_105aa920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa930; body size 3 bytes.
#line 1 "ENTRY_105aa930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa950; body size 3 bytes.
#line 1 "ENTRY_105aa950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa970; body size 3 bytes.
#line 1 "ENTRY_105aa970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa980; body size 3 bytes.
#line 1 "ENTRY_105aa980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa990; body size 3 bytes.
#line 1 "ENTRY_105aa990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa9a0; body size 3 bytes.
#line 1 "ENTRY_105aa9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa9a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa9b0; body size 3 bytes.
#line 1 "ENTRY_105aa9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa9b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105aa9c0; body size 3 bytes.
#line 1 "ENTRY_105aa9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105aa9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105ab480; body size 79 bytes.
#line 1 "ENTRY_105ab480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ab480(int param_2)
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


// Reference entry 105ab4f0; body size 79 bytes.
#line 1 "ENTRY_105ab4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ab4f0(int param_2)
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


// Reference entry 105ab5d0; body size 30 bytes.
#line 1 "ENTRY_105ab5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105ab5d0(int param_1)

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


// Reference entry 105ab600; body size 30 bytes.
#line 1 "ENTRY_105ab600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105ab600(int param_1)

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


// Reference entry 105ab630; body size 30 bytes.
#line 1 "ENTRY_105ab630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105ab630(int param_1)

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


// Reference entry 105ab660; body size 30 bytes.
#line 1 "ENTRY_105ab660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_105ab660(int param_1)

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


// Reference entry 105ab6c0; body size 31 bytes.
#line 1 "ENTRY_105ab6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_105ab6c0(int *param_1)

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


// Reference entry 105ab6f0; body size 31 bytes.
#line 1 "ENTRY_105ab6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_105ab6f0(int *param_1)

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


// Reference entry 105ab840; body size 3 bytes.
#line 1 "ENTRY_105ab840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ab840(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 105ab850; body size 3 bytes.
#line 1 "ENTRY_105ab850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ab850(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 105ab860; body size 3 bytes.
#line 1 "ENTRY_105ab860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ab860(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 105ab870; body size 3 bytes.
#line 1 "ENTRY_105ab870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ab870(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 105ab880; body size 11 bytes.
#line 1 "ENTRY_105ab880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ab880(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105ab890; body size 11 bytes.
#line 1 "ENTRY_105ab890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ab890(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105ab8a0; body size 11 bytes.
#line 1 "ENTRY_105ab8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ab8a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105ab8b0; body size 11 bytes.
#line 1 "ENTRY_105ab8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ab8b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105ab8c0; body size 8 bytes.
#line 1 "ENTRY_105ab8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ab8c0(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 105ab8d0; body size 8 bytes.
#line 1 "ENTRY_105ab8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105ab8d0(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 105ab950; body size 83 bytes.
#line 1 "ENTRY_105ab950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ab950(int *param_2)
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


// Reference entry 105ab9c0; body size 83 bytes.
#line 1 "ENTRY_105ab9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ab9c0(int *param_2)
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


// Reference entry 105abaa0; body size 43 bytes.
#line 1 "ENTRY_105abaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105abaa0(undefined4 *param_2)
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


// Reference entry 105abae0; body size 43 bytes.
#line 1 "ENTRY_105abae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105abae0(undefined4 *param_2)
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


// Reference entry 105abb20; body size 13 bytes.
#line 1 "ENTRY_105abb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105abb20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 105abb30; body size 13 bytes.
#line 1 "ENTRY_105abb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105abb30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 105abb40; body size 3 bytes.
#line 1 "ENTRY_105abb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105abb40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105abb50; body size 10 bytes.
#line 1 "ENTRY_105abb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105abb50(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 105abb60; body size 4 bytes.
#line 1 "ENTRY_105abb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105abb60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 105abb70; body size 11 bytes.
#line 1 "ENTRY_105abb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105abb70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105abb80; body size 11 bytes.
#line 1 "ENTRY_105abb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105abb80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105ac080; body size 90 bytes.
#line 1 "ENTRY_105ac080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105ac080(uint param_1)

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


// Reference entry 105ac100; body size 87 bytes.
#line 1 "ENTRY_105ac100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105ac100(uint param_1)

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


// Reference entry 105ac170; body size 97 bytes.
#line 1 "ENTRY_105ac170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105ac170(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x4924925) {
    param_1 = (uint)(param_1 * 0x38);
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


// Reference entry 105ac1f0; body size 97 bytes.
#line 1 "ENTRY_105ac1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_105ac1f0(uint param_1)

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


// Reference entry 105ac370; body size 13 bytes.
#line 1 "ENTRY_105ac370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ac370(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 105aceb0; body size 57 bytes.
#line 1 "ENTRY_105aceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105aceb0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105acf00; body size 54 bytes.
#line 1 "ENTRY_105acf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105acf00(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105acf50; body size 63 bytes.
#line 1 "ENTRY_105acf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105acf50(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x38);
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


// Reference entry 105acfa0; body size 63 bytes.
#line 1 "ENTRY_105acfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105acfa0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 105acff0; body size 60 bytes.
#line 1 "ENTRY_105acff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105acff0(int param_1,int param_2)

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


// Reference entry 105ad040; body size 57 bytes.
#line 1 "ENTRY_105ad040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ad040(int param_1,int param_2)

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


// Reference entry 105ad090; body size 66 bytes.
#line 1 "ENTRY_105ad090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ad090(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x38);
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


// Reference entry 105ad0f0; body size 66 bytes.
#line 1 "ENTRY_105ad0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_105ad0f0(int param_1,int param_2)

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


// Reference entry 105ad150; body size 9 bytes.
#line 1 "ENTRY_105ad150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105ad150(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 105ad2e0; body size 11 bytes.
#line 1 "ENTRY_105ad2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ad2e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105ad2f0; body size 11 bytes.
#line 1 "ENTRY_105ad2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ad2f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105ad300; body size 11 bytes.
#line 1 "ENTRY_105ad300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ad300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105ad310; body size 11 bytes.
#line 1 "ENTRY_105ad310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ad310(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105ad320; body size 11 bytes.
#line 1 "ENTRY_105ad320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105ad320(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 105ae440; body size 11 bytes.
#line 1 "ENTRY_105ae440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105ae440(int param_1)

{
  return (bool)(*(int *)(param_1 + 0xb0) != 0);
}


// Reference entry 105af640; body size 7 bytes.
#line 1 "ENTRY_105af640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105af640(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 105af650; body size 7 bytes.
#line 1 "ENTRY_105af650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105af650(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 105af660; body size 7 bytes.
#line 1 "ENTRY_105af660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_105af660(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 105af670; body size 8 bytes.
#line 1 "ENTRY_105af670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_105af670(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  char cVar2;
  bool bVar3;
  undefined1 auStack_c [8];
  int iStack_4;
  
  uVar1 = (uint)(param_2);
  if (param_2 == 0) {
    return (bool)(false);
  }
  cVar2 = (char)(thunk_FUN_112a7f50(param_1 + 0x14), 0);
  thunk_FUN_1059b760((uint)&auStack_c,&param_2);
  if (((*(char *)(iStack_4 + 0xd) == '\0') && (*(uint *)(iStack_4 + 0x10) <= (uint)(uVar1))) &&
     ((int)(iStack_4) != *(int *)(param_1 + 0xc))) {
    bVar3 = (bool)(*(int *)(*(int *)(iStack_4 + 0x14) + 8) != 0);
  }
  else {
    bVar3 = (bool)(false);
  }
  if (cVar2 != '\0') {
    thunk_FUN_112a8010(param_1 + 0x14);
  }
  return (bool)(bVar3);
}


// Reference entry 105af690; body size 7 bytes.
#line 1 "ENTRY_105af690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105af690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105af6a0; body size 7 bytes.
#line 1 "ENTRY_105af6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_105af6a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105af6b0; body size 6 bytes.
#line 1 "ENTRY_105af6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105af6b0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 105af6c0; body size 6 bytes.
#line 1 "ENTRY_105af6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105af6c0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 105af6d0; body size 6 bytes.
#line 1 "ENTRY_105af6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105af6d0(void)

{
  return (undefined4)(0x4924924);
}


// Reference entry 105af6e0; body size 6 bytes.
#line 1 "ENTRY_105af6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105af6e0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 105af6f0; body size 6 bytes.
#line 1 "ENTRY_105af6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105af6f0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 105af700; body size 6 bytes.
#line 1 "ENTRY_105af700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105af700(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 105af710; body size 6 bytes.
#line 1 "ENTRY_105af710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105af710(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 105af720; body size 6 bytes.
#line 1 "ENTRY_105af720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105af720(void)

{
  return (undefined4)(0x4924924);
}


// Reference entry 105aff90; body size 5 bytes.
#line 1 "ENTRY_105aff90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105aff90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105affa0; body size 5 bytes.
#line 1 "ENTRY_105affa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105affa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105affb0; body size 5 bytes.
#line 1 "ENTRY_105affb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105affb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105affc0; body size 5 bytes.
#line 1 "ENTRY_105affc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105affc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105affd0; body size 5 bytes.
#line 1 "ENTRY_105affd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105affd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105b0200; body size 3 bytes.
#line 1 "ENTRY_105b0200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_105b0200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 105b0210; body size 28 bytes.
#line 1 "ENTRY_105b0210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b0210(undefined4 *param_1)

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


// Reference entry 105b0240; body size 28 bytes.
#line 1 "ENTRY_105b0240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b0240(undefined4 *param_1)

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


// Reference entry 105b0270; body size 20 bytes.
#line 1 "ENTRY_105b0270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_105b0270(int *param_1)

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


// Reference entry 105b0290; body size 5 bytes.
#line 1 "ENTRY_105b0290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b0290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105b02a0; body size 5 bytes.
#line 1 "ENTRY_105b02a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b02a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105b0580; body size 106 bytes.
#line 1 "ENTRY_105b0580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105b0580(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((*(code ***)piVar1)[1](param_1 + 2), 0);
      param_1[0xb] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (*(code ***)piVar1)[4]((int *)(piVar1) != (int *)(param_2));
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


// Reference entry 105b07b0; body size 106 bytes.
#line 1 "ENTRY_105b07b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_105b07b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[0xb] = (undefined4)(0);
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((*(code ***)piVar1)[1](param_1 + 2), 0);
      param_1[0xb] = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (*(code ***)piVar1)[4]((int *)(piVar1) != (int *)(param_2));
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


// Reference entry 105b0950; body size 91 bytes.
#line 1 "ENTRY_105b0950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105b0950(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 105b09d0; body size 78 bytes.
#line 1 "ENTRY_105b09d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_105b09d0(int *param_2)
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
    (*(code ***)piVar2)[2]();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 105b0a40; body size 12 bytes.
#line 1 "ENTRY_105b0a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_105b0a40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 105b0a50; body size 38 bytes.
#line 1 "ENTRY_105b0a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b0a50(int param_1,undefined4 *param_2)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 105b0b90; body size 40 bytes.
#line 1 "ENTRY_105b0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_105b0b90(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 105b0ef0; body size 122 bytes.
#line 1 "ENTRY_105b0ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_105b0ef0(int *param_2)
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
        uVar3 = (undefined4)((*(code ***)piVar1)[1](puVar2 + 2), 0);
        puVar2[0xb] = (undefined4)(uVar3);
        piVar1 = (int *)((int *)param_2[9]);
        if ((int *)(piVar1) != (int *)(0x0)) {
          (*(code ***)piVar1)[4]((int *)(piVar1) != (int *)(param_2));
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


// Reference entry 105b0f90; body size 3 bytes.
#line 1 "ENTRY_105b0f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_105b0f90(void)

{
  return (undefined1)(1);
}


// Reference entry 105b0fd0; body size 12 bytes.
#line 1 "ENTRY_105b0fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_105b0fd0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 105b0fe0; body size 5 bytes.
#line 1 "ENTRY_105b0fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b0fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 105b1020; body size 5 bytes.
#line 1 "ENTRY_105b1020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_105b1020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


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
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } template<class... A> int stringWithFormat(A...); };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct Arial { char _pad; Arial(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct EditAccountPasswordX { char _pad; EditAccountPasswordX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct EnterConfigMode { char _pad; EnterConfigMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Helvetica { char _pad; Helvetica(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Perform { char _pad; Perform(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RemoveAccount { char _pad; RemoveAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseService { char _pad; SCIBrowseService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIGroupVolume { char _pad; SCIGroupVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAVTransportEndDirectControlSession { char _pad; SCIOpAVTransportEndDirectControlSession(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpReplaceAccount { char _pad; SCIOpReplaceAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIScrobblingService { char _pad; SCIScrobblingService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISimpleMessagingService { char _pad; SCISimpleMessagingService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *LITERAL;
typedef void *M43;
typedef void *STRING;
typedef void *TRUNCATED;
typedef void *WARNING;
using namespace std;
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e30e(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_1001f8cf(void);
extern "C" void LAB_10021931(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_100325a6(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003c4f2(void);
extern "C" void LAB_1003eac7(void);
extern "C" void LAB_100421e5(void);
extern "C" void LAB_10045110(void);
extern "C" void LAB_1004e2f1(void);
extern "C" void LAB_10052482(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_1005fd21(void);
extern "C" void LAB_10061fcc(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_1006a316(void);
extern "C" void LAB_1006e4ed(void);
extern "C" void LAB_1006e600(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007d83a(void);
extern "C" void LAB_10082ab0(void);
extern "C" void LAB_1008dbcc(void);
extern "C" void LAB_10094102(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_11879084(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11889d1c(void);
extern "C" void LAB_11889d24(void);
extern "C" void LAB_11893ddc(void);
extern "C" void LAB_11896aa0(void);
extern "C" void LAB_118b8f8c(void);
extern "C" void LAB_118fd144(void);
extern "C" void LAB_118fd184(void);
extern "C" void LAB_118fd1c0(void);
extern "C" void LAB_118fd1fc(void);
extern "C" void LAB_118fd240(void);
extern "C" void LAB_118fd290(void);
extern "C" void LAB_118fd2dc(void);
extern "C" void LAB_118fd334(void);
extern "C" void LAB_118fd37c(void);
extern "C" void LAB_118fd3d0(void);
extern "C" void LAB_118fd41c(void);
extern "C" void LAB_118fd464(void);
extern "C" void LAB_118fd4ac(void);
extern "C" void LAB_118fd500(void);
extern "C" void LAB_118fd53c(void);
extern "C" void LAB_118fd588(void);
extern "C" void LAB_118fd5d4(void);
extern "C" void LAB_118fd62c(void);
extern "C" void LAB_118fd690(void);
extern "C" void LAB_118fd6d4(void);
extern "C" void LAB_118fd720(void);
extern "C" void LAB_118fd764(void);
extern "C" void LAB_118fd7ac(void);
extern "C" void LAB_118fd7f4(void);
extern "C" void LAB_118fd838(void);
extern "C" void LAB_118fd880(void);
extern "C" void LAB_118fd8c4(void);
extern "C" void LAB_118fd908(void);
extern "C" void LAB_118fd94c(void);
extern "C" void LAB_118fd990(void);
extern "C" void LAB_118fd9d4(void);
extern "C" void LAB_118fda28(void);
extern "C" void LAB_118fda80(void);
extern "C" void LAB_118fdacc(void);
extern "C" void LAB_118fdb14(void);
extern "C" void LAB_118fdb60(void);
extern "C" void LAB_118fdbb4(void);
extern "C" void LAB_11900d24(void);
extern "C" void LAB_11900d78(void);
extern "C" void LAB_11900d84(void);
extern "C" void LAB_11900d90(void);
extern "C" void LAB_11900dcc(void);
extern "C" void LAB_11900e0c(void);
extern "C" void LAB_11900e50(void);
extern "C" void LAB_11900ea4(void);
extern "C" void LAB_11900f00(void);
extern "C" void LAB_11900f0c(void);
extern "C" void LAB_11900f18(void);
extern "C" void LAB_11900f3c(void);
extern "C" void LAB_11900f98(void);
extern "C" void LAB_11900fa4(void);
extern "C" void LAB_11900fb0(void);
extern "C" void LAB_11900ffc(void);
extern "C" void LAB_11901058(void);
extern "C" void LAB_11901064(void);
extern "C" void LAB_11901070(void);
extern "C" void LAB_119010b8(void);
extern "C" void LAB_11901114(void);
extern "C" void LAB_11901120(void);
extern "C" void LAB_1190112c(void);
extern "C" void LAB_1190117c(void);
extern "C" void LAB_119011d0(void);
extern "C" void LAB_119011dc(void);
extern "C" void LAB_119011e8(void);
extern "C" void LAB_11901224(void);
extern "C" void LAB_1190126c(void);
extern "C" void LAB_119012b0(void);
extern "C" void LAB_119012f4(void);
extern "C" void LAB_11901338(void);
extern "C" void LAB_1190137c(void);
extern "C" void LAB_119013c0(void);
extern "C" void LAB_11901404(void);
extern "C" void LAB_11901460(void);
extern "C" void LAB_119014bc(void);
extern "C" void LAB_119014c8(void);
extern "C" void LAB_119014d4(void);
extern "C" void LAB_119014f8(void);
extern "C" void LAB_11901554(void);
extern "C" void LAB_11901560(void);
extern "C" void LAB_1190156c(void);
extern "C" void LAB_11901630(void);
extern "C" void LAB_1190168c(void);
extern "C" void LAB_11901698(void);
extern "C" void LAB_119016a4(void);
extern "C" void LAB_119016e8(void);
extern "C" void LAB_11901744(void);
extern "C" void LAB_11901750(void);
extern "C" void LAB_1190175c(void);
extern "C" void LAB_1190179c(void);
extern "C" void LAB_119017f8(void);
extern "C" void LAB_11901804(void);
extern "C" void LAB_11901810(void);
extern "C" void LAB_11901834(void);
extern "C" void LAB_11901890(void);
extern "C" void LAB_1190189c(void);
extern "C" void LAB_119018a8(void);
extern "C" void LAB_11901948(void);
extern "C" void LAB_119019a4(void);
extern "C" void LAB_119019b0(void);
extern "C" void LAB_119019bc(void);
extern "C" void LAB_11901a60(void);
extern "C" void LAB_11901abc(void);
extern "C" void LAB_11901ac8(void);
extern "C" void LAB_11901ad4(void);
extern "C" void LAB_11901b2c(void);
extern "C" void LAB_11901b88(void);
extern "C" void LAB_11901b94(void);
extern "C" void LAB_11901ba0(void);
extern "C" void LAB_1190205c(void);
extern "C" void LAB_119020b0(void);
extern "C" void LAB_119020bc(void);
extern "C" void LAB_119020c8(void);
extern "C" void LAB_11902104(void);
extern "C" void LAB_1190214c(void);
extern "C" void LAB_11902198(void);
extern "C" void LAB_119021e4(void);
extern "C" void LAB_11902230(void);
extern "C" void LAB_1190229c(void);
extern "C" void LAB_119022f8(void);
extern "C" void LAB_11902304(void);
extern "C" void LAB_11902310(void);
extern "C" void LAB_11902334(void);
extern "C" void LAB_11902390(void);
extern "C" void LAB_1190239c(void);
extern "C" void LAB_119023a8(void);
extern "C" void LAB_119023e0(void);
extern "C" void LAB_1190243c(void);
extern "C" void LAB_11902448(void);
extern "C" void LAB_11902454(void);
extern "C" void LAB_11902590(void);
extern "C" void LAB_119025ec(void);
extern "C" void LAB_119025f8(void);
extern "C" void LAB_11902604(void);
extern "C" void LAB_1190271c(void);
extern "C" void LAB_11902770(void);
extern "C" void LAB_1190277c(void);
extern "C" void LAB_11902788(void);
extern "C" void LAB_119027c4(void);
extern "C" void LAB_11902804(void);
extern "C" void LAB_11902848(void);
extern "C" void LAB_119028ac(void);
extern "C" void LAB_11902908(void);
extern "C" void LAB_11902914(void);
extern "C" void LAB_11902920(void);
extern "C" void LAB_11902a84(void);
extern "C" void LAB_11902ae0(void);
extern "C" void LAB_11902aec(void);
extern "C" void LAB_11902af8(void);
extern "C" void LAB_11902b30(void);
extern "C" void LAB_11902b8c(void);
extern "C" void LAB_11902b98(void);
extern "C" void LAB_11902ba4(void);
extern "C" void LAB_11902c98(void);
extern "C" void LAB_11902cdc(void);
extern "C" void LAB_11902d30(void);
extern "C" void LAB_11902dec(void);
extern "C" void LAB_11902e48(void);
extern "C" void LAB_11902e54(void);
extern "C" void LAB_11902e60(void);
extern "C" void LAB_11902e84(void);
extern "C" void LAB_11902ee0(void);
extern "C" void LAB_11902eec(void);
extern "C" void LAB_11902ef8(void);
extern "C" void LAB_11903070(void);
extern "C" void LAB_119030cc(void);
extern "C" void LAB_119030d8(void);
extern "C" void LAB_119030e4(void);
extern "C" void LAB_11903238(void);
extern "C" void LAB_11903244(void);
extern "C" void LAB_11903254(void);
extern "C" void LAB_119032a0(void);
extern "C" void LAB_119032f8(void);
extern "C" void LAB_1190334c(void);
extern "C" void LAB_119033a8(void);
extern "C" void LAB_1190340c(void);
extern "C" void LAB_11903460(void);
extern "C" void LAB_119034b4(void);
extern "C" void LAB_1190350c(void);
extern "C" void LAB_1190356c(void);
extern "C" void LAB_119035c8(void);
extern "C" void LAB_11903614(void);
extern "C" void LAB_11903664(void);
extern "C" void LAB_119036bc(void);
extern "C" void LAB_11903730(void);
extern "C" void LAB_1190378c(void);
extern "C" void LAB_11903798(void);
extern "C" void LAB_119037a4(void);
extern "C" void LAB_119037c8(void);
extern "C" void LAB_11903824(void);
extern "C" void LAB_11903830(void);
extern "C" void LAB_1190383c(void);
extern "C" void LAB_11903874(void);
extern "C" void LAB_119038d0(void);
extern "C" void LAB_119038dc(void);
extern "C" void LAB_119038e8(void);
extern "C" void LAB_11903948(void);
extern "C" void LAB_119039a4(void);
extern "C" void LAB_119039b0(void);
extern "C" void LAB_119039bc(void);
extern "C" void LAB_11903a54(void);
extern "C" void LAB_11903ab0(void);
extern "C" void LAB_11903abc(void);
extern "C" void LAB_11903ac8(void);
extern "C" void LAB_11903ba0(void);
extern "C" void LAB_11903bfc(void);
extern "C" void LAB_11903c08(void);
extern "C" void LAB_11903c14(void);
extern "C" void LAB_11903c54(void);
extern "C" void LAB_11903cb0(void);
extern "C" void LAB_11903cbc(void);
extern "C" void LAB_11903cc8(void);
extern "C" void LAB_11903d70(void);
extern "C" void LAB_11903dcc(void);
extern "C" void LAB_11903dd8(void);
extern "C" void LAB_11903de4(void);
extern "C" void LAB_11903e80(void);
extern "C" void LAB_11903edc(void);
extern "C" void LAB_11903ee8(void);
extern "C" void LAB_11903ef4(void);
extern "C" void LAB_11903f18(void);
extern "C" void LAB_11903f88(void);
extern "C" void LAB_11903fe4(void);
extern "C" void LAB_11903ff0(void);
extern "C" void LAB_11903ffc(void);
extern "C" void LAB_11904150(void);
extern "C" void LAB_119041ac(void);
extern "C" void LAB_119041b8(void);
extern "C" void LAB_119041c4(void);
extern "C" void LAB_11904228(void);
extern "C" void LAB_11904284(void);
extern "C" void LAB_11904290(void);
extern "C" void LAB_1190429c(void);
extern "C" void LAB_11904558(void);
extern "C" void LAB_119045ac(void);
extern "C" void LAB_119045b8(void);
extern "C" void LAB_119045c4(void);
extern "C" void LAB_119045e8(void);
extern "C" void LAB_11904630(void);
extern "C" void LAB_119046b0(void);
extern "C" void LAB_119046f4(void);
extern "C" void LAB_11904738(void);
extern "C" void LAB_11904780(void);
extern "C" void LAB_119047c8(void);
extern "C" void LAB_1190482c(void);
extern "C" void LAB_11904888(void);
extern "C" void LAB_11904894(void);
extern "C" void LAB_119048a0(void);
extern "C" void LAB_119048c4(void);
extern "C" void LAB_11904920(void);
extern "C" void LAB_1190492c(void);
extern "C" void LAB_11904938(void);
extern "C" void LAB_11904a00(void);
extern "C" void LAB_11904a5c(void);
extern "C" void LAB_11904a68(void);
extern "C" void LAB_11904a74(void);
extern "C" void LAB_11904b4c(void);
extern "C" void LAB_11904ba8(void);
extern "C" void LAB_11904bb4(void);
extern "C" void LAB_11904bc0(void);
extern "C" void LAB_11904c10(void);
extern "C" void LAB_11904c6c(void);
extern "C" void LAB_11904c78(void);
extern "C" void LAB_11904c84(void);
extern "C" void LAB_11904e04(void);
extern "C" void LAB_11904e60(void);
extern "C" void LAB_11904e6c(void);
extern "C" void LAB_11904e78(void);
extern "C" void LAB_11904ec4(void);
extern "C" void LAB_11904f18(void);
extern "C" void LAB_11904f24(void);
extern "C" void LAB_11904f30(void);
extern "C" void LAB_11904f84(void);
extern "C" void LAB_11904fc8(void);
extern "C" void LAB_11905020(void);
extern "C" void LAB_1190506c(void);
extern "C" void LAB_119050bc(void);
extern "C" void LAB_1190510c(void);
extern "C" void LAB_1190515c(void);
extern "C" void LAB_119051b4(void);
extern "C" void LAB_1190520c(void);
extern "C" void LAB_11905268(void);
extern "C" void LAB_119052c4(void);
extern "C" void LAB_11905328(void);
extern "C" void LAB_11905384(void);
extern "C" void LAB_11905390(void);
extern "C" void LAB_1190539c(void);
extern "C" void LAB_119053c0(void);
extern "C" void LAB_1190541c(void);
extern "C" void LAB_11905428(void);
extern "C" void LAB_11905434(void);
extern "C" void LAB_11905624(void);
extern "C" void LAB_11905680(void);
extern "C" void LAB_1190568c(void);
extern "C" void LAB_11905698(void);
extern "C" void LAB_11905708(void);
extern "C" void LAB_11905764(void);
extern "C" void LAB_11905770(void);
extern "C" void LAB_1190577c(void);
extern "C" void LAB_11905810(void);
extern "C" void LAB_1190586c(void);
extern "C" void LAB_11905878(void);
extern "C" void LAB_11905884(void);
extern "C" void LAB_11905928(void);
extern "C" void LAB_11905984(void);
extern "C" void LAB_11905990(void);
extern "C" void LAB_1190599c(void);
extern "C" void LAB_11905a1c(void);
extern "C" void LAB_11905a78(void);
extern "C" void LAB_11905a84(void);
extern "C" void LAB_11905a90(void);
extern "C" void LAB_11905b10(void);
extern "C" void LAB_11905b6c(void);
extern "C" void LAB_11905b78(void);
extern "C" void LAB_11905b84(void);
extern "C" void LAB_11905bb8(void);
extern "C" void LAB_11905c14(void);
extern "C" void LAB_11905c20(void);
extern "C" void LAB_11905c2c(void);
extern "C" void LAB_11905c50(void);
extern "C" void LAB_11905cac(void);
extern "C" void LAB_11905cb8(void);
extern "C" void LAB_11905cc4(void);
extern "C" void LAB_11905ce8(void);
extern "C" void LAB_11905d44(void);
extern "C" void LAB_11905d50(void);
extern "C" void LAB_11905d5c(void);
extern "C" void LAB_11905d80(void);
extern "C" void LAB_11905ddc(void);
extern "C" void LAB_11905de8(void);
extern "C" void LAB_11905df4(void);
extern "C" void LAB_11905fdc(void);
extern "C" void LAB_11906030(void);
extern "C" void LAB_1190603c(void);
extern "C" void LAB_11906048(void);
extern "C" void LAB_11906084(void);
extern "C" void LAB_119060c8(void);
extern "C" void LAB_1190610c(void);
extern "C" void LAB_11906164(void);
extern "C" void LAB_119061c0(void);
extern "C" void LAB_119061cc(void);
extern "C" void LAB_119061d8(void);
extern "C" void LAB_119061fc(void);
extern "C" void LAB_11906258(void);
extern "C" void LAB_11906264(void);
extern "C" void LAB_11906270(void);
extern "C" void LAB_119062ac(void);
extern "C" void LAB_11906308(void);
extern "C" void LAB_11906314(void);
extern "C" void LAB_11906320(void);
extern "C" void LAB_11906344(void);
extern "C" void LAB_119063a0(void);
extern "C" void LAB_119063ac(void);
extern "C" void LAB_119063b8(void);
extern "C" void LAB_119063dc(void);
extern "C" void LAB_11906424(void);
extern "C" void LAB_11906460(void);
extern "C" void LAB_1190646c(void);
extern "C" void LAB_1190660c(void);
extern "C" void LAB_1190665c(void);
extern "C" void LAB_119066b0(void);
extern "C" void LAB_1190670c(void);
extern "C" void LAB_11906780(void);
extern "C" void LAB_11906800(void);
extern "C" void LAB_11906878(void);
extern "C" void LAB_119068e0(void);
extern "C" void LAB_11906948(void);
extern "C" void LAB_119069cc(void);
extern "C" void LAB_11906a2c(void);
extern "C" void LAB_11906a7c(void);
extern "C" void LAB_11906b60(void);
extern "C" void LAB_11906bbc(void);
extern "C" void LAB_11906bc8(void);
extern "C" void LAB_11906bd4(void);
extern "C" void LAB_11906bf8(void);
extern "C" void LAB_11906c54(void);
extern "C" void LAB_11906c60(void);
extern "C" void LAB_11906c6c(void);
extern "C" void LAB_11906c90(void);
extern "C" void LAB_11906cec(void);
extern "C" void LAB_11906cf8(void);
extern "C" void LAB_11906d04(void);
extern "C" void LAB_11906e8c(void);
extern "C" void LAB_11906ee8(void);
extern "C" void LAB_11906ef4(void);
extern "C" void LAB_11906f00(void);
extern "C" void LAB_11906f3c(void);
extern "C" void LAB_11906f98(void);
extern "C" void LAB_11906fa4(void);
extern "C" void LAB_11906fb0(void);
extern "C" void LAB_11906fe0(void);
extern "C" void LAB_1190703c(void);
extern "C" void LAB_11907048(void);
extern "C" void LAB_11907054(void);
extern "C" void LAB_1190708c(void);
extern "C" void LAB_119070e8(void);
extern "C" void LAB_119070f4(void);
extern "C" void LAB_11907100(void);
extern "C" void LAB_11907124(void);
extern "C" void LAB_11907180(void);
extern "C" void LAB_1190718c(void);
extern "C" void LAB_11907198(void);
extern "C" void LAB_119071bc(void);
extern "C" void LAB_11907218(void);
extern "C" void LAB_11907224(void);
extern "C" void LAB_11907230(void);
extern "C" void LAB_11907254(void);
extern "C" void LAB_119072b0(void);
extern "C" void LAB_119072bc(void);
extern "C" void LAB_119072c8(void);
extern "C" void LAB_119072ec(void);
extern "C" void LAB_11907348(void);
extern "C" void LAB_11907354(void);
extern "C" void LAB_11907360(void);
extern "C" void LAB_119073bc(void);
extern "C" void LAB_11907418(void);
extern "C" void LAB_11907424(void);
extern "C" void LAB_11907430(void);
extern "C" void LAB_11907598(void);
extern "C" void LAB_119075ec(void);
extern "C" void LAB_119075f8(void);
extern "C" void LAB_11907604(void);
extern "C" void LAB_11907640(void);
extern "C" void LAB_11907680(void);
extern "C" void LAB_119076c8(void);
extern "C" void LAB_11907714(void);
extern "C" void LAB_11907760(void);
extern "C" void LAB_119077b4(void);
extern "C" void LAB_11907808(void);
extern "C" void LAB_1190785c(void);
extern "C" void LAB_119078c4(void);
extern "C" void LAB_11907920(void);
extern "C" void LAB_1190792c(void);
extern "C" void LAB_11907938(void);
extern "C" void LAB_1190795c(void);
extern "C" void LAB_119079b8(void);
extern "C" void LAB_119079c4(void);
extern "C" void LAB_119079d0(void);
extern "C" void LAB_11907b54(void);
extern "C" void LAB_11907bb0(void);
extern "C" void LAB_11907bbc(void);
extern "C" void LAB_11907bc8(void);
extern "C" void LAB_11907c1c(void);
extern "C" void LAB_11907c78(void);
extern "C" void LAB_11907c84(void);
extern "C" void LAB_11907c90(void);
extern "C" void LAB_11907cd4(void);
extern "C" void LAB_11907d30(void);
extern "C" void LAB_11907d3c(void);
extern "C" void LAB_11907d48(void);
extern "C" void LAB_11907d8c(void);
extern "C" void LAB_11907de8(void);
extern "C" void LAB_11907df4(void);
extern "C" void LAB_11907e00(void);
extern "C" void LAB_11907e30(void);
extern "C" void LAB_11907e8c(void);
extern "C" void LAB_11907e98(void);
extern "C" void LAB_11907ea4(void);
extern "C" void LAB_11907ed8(void);
extern "C" void LAB_11907f34(void);
extern "C" void LAB_11907f40(void);
extern "C" void LAB_11907f4c(void);
extern "C" void LAB_11907f84(void);
extern "C" void LAB_11907fe0(void);
extern "C" void LAB_11907fec(void);
extern "C" void LAB_11907ff8(void);
extern "C" void LAB_11908058(void);
extern "C" void LAB_119080ac(void);
extern "C" void LAB_119080b8(void);
extern "C" void LAB_119080c4(void);
extern "C" void LAB_11908100(void);
extern "C" void LAB_1190813c(void);
extern "C" void LAB_1190817c(void);
extern "C" void LAB_119081c0(void);
extern "C" void LAB_11908200(void);
extern "C" void LAB_11908248(void);
extern "C" void LAB_11908294(void);
extern "C" void LAB_119082f0(void);
extern "C" void LAB_119082fc(void);
extern "C" void LAB_11908308(void);
extern "C" void LAB_1190832c(void);
extern "C" void LAB_11908388(void);
extern "C" void LAB_11908394(void);
extern "C" void LAB_119083a0(void);
extern "C" void LAB_119084d4(void);
extern "C" void LAB_11908530(void);
extern "C" void LAB_1190853c(void);
extern "C" void LAB_11908548(void);
extern "C" void LAB_1190856c(void);
extern "C" void LAB_119085c8(void);
extern "C" void LAB_119085d4(void);
extern "C" void LAB_119085e0(void);
extern "C" void LAB_11908864(void);
extern "C" void LAB_119088c0(void);
extern "C" void LAB_119088cc(void);
extern "C" void LAB_119088d8(void);
extern "C" void LAB_1190891c(void);
extern "C" void LAB_11908970(void);
extern "C" void LAB_1190897c(void);
extern "C" void LAB_11908988(void);
extern "C" void LAB_119089c4(void);
extern "C" void LAB_11908a04(void);
extern "C" void LAB_11908a44(void);
extern "C" void LAB_11908a9c(void);
extern "C" void LAB_11908af8(void);
extern "C" void LAB_11908b04(void);
extern "C" void LAB_11908b10(void);
extern "C" void LAB_11908b34(void);
extern "C" void LAB_11908b90(void);
extern "C" void LAB_11908b9c(void);
extern "C" void LAB_11908ba8(void);
extern "C" void LAB_11908c0c(void);
extern "C" void LAB_11908c68(void);
extern "C" void LAB_11908c74(void);
extern "C" void LAB_11908c80(void);
extern "C" void LAB_11908cf0(void);
extern "C" void LAB_11908d4c(void);
extern "C" void LAB_11908d58(void);
extern "C" void LAB_11908d64(void);
extern "C" void LAB_11908f40(void);
extern "C" void LAB_1190966c(void);
extern "C" void LAB_119096c0(void);
extern "C" void LAB_119096cc(void);
extern "C" void LAB_119096d8(void);
extern "C" void LAB_11909714(void);
extern "C" void LAB_1190975c(void);
extern "C" void LAB_119097b8(void);
extern "C" void LAB_11909810(void);
extern "C" void LAB_11909860(void);
extern "C" void LAB_119098b0(void);
extern "C" void LAB_11909900(void);
extern "C" void LAB_11909944(void);
extern "C" void LAB_11909988(void);
extern "C" void LAB_119099cc(void);
extern "C" void LAB_11909a10(void);
extern "C" void LAB_11909a54(void);
extern "C" void LAB_11909a98(void);
extern "C" void LAB_11909adc(void);
extern "C" void LAB_11909b20(void);
extern "C" void LAB_11909b7c(void);
extern "C" void LAB_11909bd8(void);
extern "C" void LAB_11909be4(void);
extern "C" void LAB_11909bf0(void);
extern "C" void LAB_11909c14(void);
extern "C" void LAB_11909c70(void);
extern "C" void LAB_11909c7c(void);
extern "C" void LAB_11909c88(void);
extern "C" void LAB_11909d44(void);
extern "C" void LAB_11909da0(void);
extern "C" void LAB_11909dac(void);
extern "C" void LAB_11909db8(void);
extern "C" void LAB_11909dfc(void);
extern "C" void LAB_11909e58(void);
extern "C" void LAB_11909e64(void);
extern "C" void LAB_11909e70(void);
extern "C" void LAB_11909e94(void);
extern "C" void LAB_11909ef0(void);
extern "C" void LAB_11909efc(void);
extern "C" void LAB_11909f08(void);
extern "C" void LAB_11909f40(void);
extern "C" void LAB_11909f9c(void);
extern "C" void LAB_11909fa8(void);
extern "C" void LAB_11909fb4(void);
extern "C" void LAB_11909fe0(void);
extern "C" void LAB_1190a03c(void);
extern "C" void LAB_1190a048(void);
extern "C" void LAB_1190a054(void);
extern "C" void LAB_1190a088(void);
extern "C" void LAB_1190a0e4(void);
extern "C" void LAB_1190a0f0(void);
extern "C" void LAB_1190a0fc(void);
extern "C" void LAB_1190a154(void);
extern "C" void LAB_1190a1b0(void);
extern "C" void LAB_1190a1bc(void);
extern "C" void LAB_1190a1c8(void);
extern "C" void LAB_1190a22c(void);
extern "C" void LAB_1190a288(void);
extern "C" void LAB_1190a294(void);
extern "C" void LAB_1190a2a0(void);
extern "C" void LAB_1190a300(void);
extern "C" void LAB_1190a35c(void);
extern "C" void LAB_1190a368(void);
extern "C" void LAB_1190a374(void);
extern "C" void LAB_1190a3b4(void);
extern "C" void LAB_1190a410(void);
extern "C" void LAB_1190a41c(void);
extern "C" void LAB_1190a428(void);
extern "C" void LAB_1190a458(void);
extern "C" void LAB_1190a4b4(void);
extern "C" void LAB_1190a4c0(void);
extern "C" void LAB_1190a4cc(void);
extern "C" void LAB_1190a4f0(void);
extern "C" void LAB_1190a54c(void);
extern "C" void LAB_1190a558(void);
extern "C" void LAB_1190a564(void);
extern "C" void LAB_1190a588(void);
extern "C" void LAB_1190a5e4(void);
extern "C" void LAB_1190a5f0(void);
extern "C" void LAB_1190a5fc(void);
extern "C" void LAB_1190a63c(void);
extern "C" void LAB_1190a698(void);
extern "C" void LAB_1190a6a4(void);
extern "C" void LAB_1190a6b0(void);
extern "C" void LAB_1190a7a0(void);
extern "C" void LAB_1190a82c(void);
extern "C" void LAB_1190a964(void);
extern "C" void LAB_1190aa08(void);
extern "C" void LAB_1190aa50(void);
extern "C" void LAB_1190ac70(void);
extern "C" void LAB_1190ae78(void);
extern "C" void LAB_1190b038(void);
extern "C" void LAB_1190c5a0(void);
extern "C" void LAB_1190d9c8(void);
extern "C" void LAB_1190da10(void);
extern "C" void LAB_1190da4c(void);
extern "C" void LAB_1190da58(void);
extern "C" void LAB_1190da6c(void);
extern "C" void LAB_1190dab4(void);
extern "C" void LAB_1190daf0(void);
extern "C" void LAB_1190dafc(void);
extern "C" void LAB_1190ddc4(void);
extern "C" void LAB_1190de58(void);
extern "C" void LAB_1190dfa4(void);
extern "C" void LAB_1190dfc0(void);
extern "C" void LAB_1190dfe8(void);
extern "C" void LAB_1190e010(void);
extern "C" void LAB_1190e038(void);
extern "C" void LAB_1190e054(void);
extern "C" void LAB_1190e07c(void);
extern "C" void LAB_1190e0a4(void);
extern "C" void LAB_1190e0cc(void);
extern "C" void LAB_1190e0f4(void);
extern "C" void LAB_1190e124(void);
extern "C" void LAB_1190e154(void);
extern "C" void LAB_1190e198(void);
extern "C" void LAB_1190e244(void);
extern "C" void LAB_1190e298(void);
extern "C" void LAB_12119c20(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a490c(void);
extern "C" void LAB_121a4910(void);
extern "C" void LAB_121a4914(void);
extern "C" void LAB_121a4918(void);
extern "C" void LAB_121a491c(void);
extern "C" void LAB_121a4920(void);
extern "C" void LAB_121a4924(void);
extern "C" void LAB_121a4928(void);
extern "C" void LAB_121a492c(void);
extern "C" void LAB_121a4930(void);
extern "C" void LAB_121a4934(void);
extern "C" void LAB_121a4938(void);
extern "C" void LAB_121a493c(void);
extern "C" void LAB_121a4940(void);
extern "C" void LAB_121a4944(void);
extern "C" void LAB_121a4948(void);
extern "C" void LAB_121a494c(void);
extern "C" void LAB_121a4950(void);
extern "C" void LAB_121a4954(void);
extern "C" void LAB_121a4958(void);
extern "C" void LAB_121a495c(void);
extern "C" void LAB_121a4960(void);
extern "C" void LAB_121a4964(void);
extern "C" void LAB_121a4968(void);
extern "C" void LAB_121a496c(void);
extern "C" void LAB_121a4970(void);
extern "C" void LAB_121a4974(void);
extern "C" void LAB_121a4978(void);
extern "C" void LAB_121a497c(void);
extern "C" void LAB_121a4980(void);
extern "C" void LAB_121a4984(void);
extern "C" void LAB_121a4988(void);
extern "C" void LAB_121a498c(void);
extern "C" void LAB_121a4990(void);
extern "C" void LAB_121a4994(void);
extern "C" void LAB_121a4998(void);
extern "C" void LAB_121a499c(void);
extern "C" void LAB_121a4a0c(void);
extern "C" void LAB_121a4a10(void);
extern "C" void LAB_121a4a14(void);
extern "C" void LAB_121a4a38(void);
extern "C" void LAB_121a4a3c(void);
extern "C" void LAB_121a4a40(void);
extern "C" void LAB_121a4a44(void);
extern "C" void LAB_121a4a48(void);
extern "C" void LAB_121a4a4c(void);
extern "C" void LAB_121a4a50(void);
extern "C" void LAB_121a4a54(void);
extern "C" void LAB_121a4a74(void);
extern "C" void LAB_121a4a78(void);
extern "C" void LAB_121a4a7c(void);
extern "C" void LAB_121a4a80(void);
extern "C" void LAB_121a4a84(void);
extern "C" void LAB_121a4ae8(void);
extern "C" void LAB_121a4aec(void);
extern "C" void LAB_121a4af0(void);
extern "C" void LAB_121a4b0c(void);
extern "C" void LAB_121a4b10(void);
extern "C" void LAB_121a4b14(void);
extern "C" void LAB_121a4b64(void);
extern "C" void LAB_121a4b68(void);
extern "C" void LAB_121a4b6c(void);
extern "C" void LAB_121a4b70(void);
extern "C" void LAB_121a4b74(void);
extern "C" void LAB_121a4b78(void);
extern "C" void LAB_121a4b7c(void);
extern "C" void LAB_121a4b80(void);
extern "C" void LAB_121a4b84(void);
extern "C" void LAB_121a4b88(void);
extern "C" void LAB_121a4b8c(void);
extern "C" void LAB_121a4b90(void);
extern "C" void LAB_121a4b94(void);
extern "C" void LAB_121a4b98(void);
extern "C" void LAB_121a4c0c(void);
extern "C" void LAB_121a4c10(void);
extern "C" void LAB_121a4c14(void);
extern "C" void LAB_121a4c18(void);
extern "C" void LAB_121a4c1c(void);
extern "C" void LAB_121a4c3c(void);
extern "C" void LAB_121a4c40(void);
extern "C" void LAB_121a4c44(void);
extern "C" void LAB_121a4c48(void);
extern "C" void LAB_121a4c4c(void);
extern "C" void LAB_121a4c50(void);
extern "C" void LAB_121a4c54(void);
extern "C" void LAB_121a4c58(void);
extern "C" void LAB_121a4c5c(void);
extern "C" void LAB_121a4c60(void);
extern "C" void LAB_121a4c64(void);
extern "C" void LAB_121a4c84(void);
extern "C" void LAB_121a4c88(void);
extern "C" void LAB_121a4c8c(void);
extern "C" void LAB_121a4ca4(void);
extern "C" void LAB_121a4ca8(void);
extern "C" void LAB_121a4cac(void);
extern "C" void LAB_121a4cb0(void);
extern "C" void LAB_121a4cb4(void);
extern "C" void LAB_121a4cb8(void);
extern "C" void LAB_121a4cbc(void);
extern "C" void LAB_121a4cc0(void);
extern "C" void LAB_121a4cc4(void);
extern "C" void LAB_121a4cc8(void);
extern "C" void LAB_121a4ccc(void);
extern "C" void LAB_121a4cd0(void);
extern "C" void LAB_121a4d28(void);
extern "C" void LAB_121a4d2c(void);
extern "C" void LAB_121a4d30(void);
extern "C" void LAB_121a4d34(void);
extern "C" void LAB_121a4d38(void);
extern "C" void LAB_121a4d3c(void);
extern "C" void LAB_121a4d40(void);
extern "C" void LAB_121a4d44(void);
extern "C" void LAB_121a4d64(void);
extern "C" void LAB_121a4d68(void);
extern "C" void LAB_121a4d6c(void);
extern "C" void LAB_121a4d70(void);
extern "C" void LAB_121a4d74(void);
extern "C" void LAB_121a4d78(void);
extern "C" void LAB_121a4d94(void);
extern "C" void LAB_121a4d98(void);
extern "C" void LAB_121a4d9c(void);
extern "C" void LAB_121a4dbc(void);
extern "C" void LAB_121a4dcc(void);
extern "C" void LAB_121a4dd0(void);
extern "C" void LAB_121a4dd4(void);
extern "C" void LAB_121a4dd8(void);
extern "C" void LAB_121a4ddc(void);
extern "C" void LAB_121a4de0(void);
extern "C" void LAB_121a4de4(void);
extern "C" void LAB_121a4de8(void);
extern "C" void LAB_121a4dec(void);
extern "C" void LAB_121a4df0(void);
extern "C" void LAB_121a4df4(void);
extern "C" void LAB_121a4df8(void);
extern "C" void LAB_121a4dfc(void);
extern "C" void LAB_121a4e00(void);
extern "C" void LAB_121a4e04(void);
extern "C" void LAB_122fc888(void);

extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e30e(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_1001f8cf(void);
extern "C" void LAB_10021931(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_100325a6(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003c4f2(void);
extern "C" void LAB_1003eac7(void);
extern "C" void LAB_100421e5(void);
extern "C" void LAB_10045110(void);
extern "C" void LAB_1004e2f1(void);
extern "C" void LAB_10052482(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_1005fd21(void);
extern "C" void LAB_10061fcc(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_1006a316(void);
extern "C" void LAB_1006e4ed(void);
extern "C" void LAB_1006e600(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007d83a(void);
extern "C" void LAB_10082ab0(void);
extern "C" void LAB_1008dbcc(void);
extern "C" void LAB_10094102(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_11879084(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11889d1c(void);
extern "C" void LAB_11889d24(void);
extern "C" void LAB_11893ddc(void);
extern "C" void LAB_11896aa0(void);
extern "C" void LAB_118b8f8c(void);
extern "C" void LAB_118fd144(void);
extern "C" void LAB_118fd184(void);
extern "C" void LAB_118fd1c0(void);
extern "C" void LAB_118fd1fc(void);
extern "C" void LAB_118fd240(void);
extern "C" void LAB_118fd290(void);
extern "C" void LAB_118fd2dc(void);
extern "C" void LAB_118fd334(void);
extern "C" void LAB_118fd37c(void);
extern "C" void LAB_118fd3d0(void);
extern "C" void LAB_118fd41c(void);
extern "C" void LAB_118fd464(void);
extern "C" void LAB_118fd4ac(void);
extern "C" void LAB_118fd500(void);
extern "C" void LAB_118fd53c(void);
extern "C" void LAB_118fd588(void);
extern "C" void LAB_118fd5d4(void);
extern "C" void LAB_118fd62c(void);
extern "C" void LAB_118fd690(void);
extern "C" void LAB_118fd6d4(void);
extern "C" void LAB_118fd720(void);
extern "C" void LAB_118fd764(void);
extern "C" void LAB_118fd7ac(void);
extern "C" void LAB_118fd7f4(void);
extern "C" void LAB_118fd838(void);
extern "C" void LAB_118fd880(void);
extern "C" void LAB_118fd8c4(void);
extern "C" void LAB_118fd908(void);
extern "C" void LAB_118fd94c(void);
extern "C" void LAB_118fd990(void);
extern "C" void LAB_118fd9d4(void);
extern "C" void LAB_118fda28(void);
extern "C" void LAB_118fda80(void);
extern "C" void LAB_118fdacc(void);
extern "C" void LAB_118fdb14(void);
extern "C" void LAB_118fdb60(void);
extern "C" void LAB_118fdbb4(void);
extern "C" void LAB_11900d24(void);
extern "C" void LAB_11900d78(void);
extern "C" void LAB_11900d84(void);
extern "C" void LAB_11900d90(void);
extern "C" void LAB_11900dcc(void);
extern "C" void LAB_11900e0c(void);
extern "C" void LAB_11900e50(void);
extern "C" void LAB_11900ea4(void);
extern "C" void LAB_11900f00(void);
extern "C" void LAB_11900f0c(void);
extern "C" void LAB_11900f18(void);
extern "C" void LAB_11900f3c(void);
extern "C" void LAB_11900f98(void);
extern "C" void LAB_11900fa4(void);
extern "C" void LAB_11900fb0(void);
extern "C" void LAB_11900ffc(void);
extern "C" void LAB_11901058(void);
extern "C" void LAB_11901064(void);
extern "C" void LAB_11901070(void);
extern "C" void LAB_119010b8(void);
extern "C" void LAB_11901114(void);
extern "C" void LAB_11901120(void);
extern "C" void LAB_1190112c(void);
extern "C" void LAB_1190117c(void);
extern "C" void LAB_119011d0(void);
extern "C" void LAB_119011dc(void);
extern "C" void LAB_119011e8(void);
extern "C" void LAB_11901224(void);
extern "C" void LAB_1190126c(void);
extern "C" void LAB_119012b0(void);
extern "C" void LAB_119012f4(void);
extern "C" void LAB_11901338(void);
extern "C" void LAB_1190137c(void);
extern "C" void LAB_119013c0(void);
extern "C" void LAB_11901404(void);
extern "C" void LAB_11901460(void);
extern "C" void LAB_119014bc(void);
extern "C" void LAB_119014c8(void);
extern "C" void LAB_119014d4(void);
extern "C" void LAB_119014f8(void);
extern "C" void LAB_11901554(void);
extern "C" void LAB_11901560(void);
extern "C" void LAB_1190156c(void);
extern "C" void LAB_11901630(void);
extern "C" void LAB_1190168c(void);
extern "C" void LAB_11901698(void);
extern "C" void LAB_119016a4(void);
extern "C" void LAB_119016e8(void);
extern "C" void LAB_11901744(void);
extern "C" void LAB_11901750(void);
extern "C" void LAB_1190175c(void);
extern "C" void LAB_1190179c(void);
extern "C" void LAB_119017f8(void);
extern "C" void LAB_11901804(void);
extern "C" void LAB_11901810(void);
extern "C" void LAB_11901834(void);
extern "C" void LAB_11901890(void);
extern "C" void LAB_1190189c(void);
extern "C" void LAB_119018a8(void);
extern "C" void LAB_11901948(void);
extern "C" void LAB_119019a4(void);
extern "C" void LAB_119019b0(void);
extern "C" void LAB_119019bc(void);
extern "C" void LAB_11901a60(void);
extern "C" void LAB_11901abc(void);
extern "C" void LAB_11901ac8(void);
extern "C" void LAB_11901ad4(void);
extern "C" void LAB_11901b2c(void);
extern "C" void LAB_11901b88(void);
extern "C" void LAB_11901b94(void);
extern "C" void LAB_11901ba0(void);
extern "C" void LAB_1190205c(void);
extern "C" void LAB_119020b0(void);
extern "C" void LAB_119020bc(void);
extern "C" void LAB_119020c8(void);
extern "C" void LAB_11902104(void);
extern "C" void LAB_1190214c(void);
extern "C" void LAB_11902198(void);
extern "C" void LAB_119021e4(void);
extern "C" void LAB_11902230(void);
extern "C" void LAB_1190229c(void);
extern "C" void LAB_119022f8(void);
extern "C" void LAB_11902304(void);
extern "C" void LAB_11902310(void);
extern "C" void LAB_11902334(void);
extern "C" void LAB_11902390(void);
extern "C" void LAB_1190239c(void);
extern "C" void LAB_119023a8(void);
extern "C" void LAB_119023e0(void);
extern "C" void LAB_1190243c(void);
extern "C" void LAB_11902448(void);
extern "C" void LAB_11902454(void);
extern "C" void LAB_11902590(void);
extern "C" void LAB_119025ec(void);
extern "C" void LAB_119025f8(void);
extern "C" void LAB_11902604(void);
extern "C" void LAB_1190271c(void);
extern "C" void LAB_11902770(void);
extern "C" void LAB_1190277c(void);
extern "C" void LAB_11902788(void);
extern "C" void LAB_119027c4(void);
extern "C" void LAB_11902804(void);
extern "C" void LAB_11902848(void);
extern "C" void LAB_119028ac(void);
extern "C" void LAB_11902908(void);
extern "C" void LAB_11902914(void);
extern "C" void LAB_11902920(void);
extern "C" void LAB_11902a84(void);
extern "C" void LAB_11902ae0(void);
extern "C" void LAB_11902aec(void);
extern "C" void LAB_11902af8(void);
extern "C" void LAB_11902b30(void);
extern "C" void LAB_11902b8c(void);
extern "C" void LAB_11902b98(void);
extern "C" void LAB_11902ba4(void);
extern "C" void LAB_11902c98(void);
extern "C" void LAB_11902cdc(void);
extern "C" void LAB_11902d30(void);
extern "C" void LAB_11902dec(void);
extern "C" void LAB_11902e48(void);
extern "C" void LAB_11902e54(void);
extern "C" void LAB_11902e60(void);
extern "C" void LAB_11902e84(void);
extern "C" void LAB_11902ee0(void);
extern "C" void LAB_11902eec(void);
extern "C" void LAB_11902ef8(void);
extern "C" void LAB_11903070(void);
extern "C" void LAB_119030cc(void);
extern "C" void LAB_119030d8(void);
extern "C" void LAB_119030e4(void);
extern "C" void LAB_11903238(void);
extern "C" void LAB_11903244(void);
extern "C" void LAB_11903254(void);
extern "C" void LAB_119032a0(void);
extern "C" void LAB_119032f8(void);
extern "C" void LAB_1190334c(void);
extern "C" void LAB_119033a8(void);
extern "C" void LAB_1190340c(void);
extern "C" void LAB_11903460(void);
extern "C" void LAB_119034b4(void);
extern "C" void LAB_1190350c(void);
extern "C" void LAB_1190356c(void);
extern "C" void LAB_119035c8(void);
extern "C" void LAB_11903614(void);
extern "C" void LAB_11903664(void);
extern "C" void LAB_119036bc(void);
extern "C" void LAB_11903730(void);
extern "C" void LAB_1190378c(void);
extern "C" void LAB_11903798(void);
extern "C" void LAB_119037a4(void);
extern "C" void LAB_119037c8(void);
extern "C" void LAB_11903824(void);
extern "C" void LAB_11903830(void);
extern "C" void LAB_1190383c(void);
extern "C" void LAB_11903874(void);
extern "C" void LAB_119038d0(void);
extern "C" void LAB_119038dc(void);
extern "C" void LAB_119038e8(void);
extern "C" void LAB_11903948(void);
extern "C" void LAB_119039a4(void);
extern "C" void LAB_119039b0(void);
extern "C" void LAB_119039bc(void);
extern "C" void LAB_11903a54(void);
extern "C" void LAB_11903ab0(void);
extern "C" void LAB_11903abc(void);
extern "C" void LAB_11903ac8(void);
extern "C" void LAB_11903ba0(void);
extern "C" void LAB_11903bfc(void);
extern "C" void LAB_11903c08(void);
extern "C" void LAB_11903c14(void);
extern "C" void LAB_11903c54(void);
extern "C" void LAB_11903cb0(void);
extern "C" void LAB_11903cbc(void);
extern "C" void LAB_11903cc8(void);
extern "C" void LAB_11903d70(void);
extern "C" void LAB_11903dcc(void);
extern "C" void LAB_11903dd8(void);
extern "C" void LAB_11903de4(void);
extern "C" void LAB_11903e80(void);
extern "C" void LAB_11903edc(void);
extern "C" void LAB_11903ee8(void);
extern "C" void LAB_11903ef4(void);
extern "C" void LAB_11903f18(void);
extern "C" void LAB_11903f88(void);
extern "C" void LAB_11903fe4(void);
extern "C" void LAB_11903ff0(void);
extern "C" void LAB_11903ffc(void);
extern "C" void LAB_11904150(void);
extern "C" void LAB_119041ac(void);
extern "C" void LAB_119041b8(void);
extern "C" void LAB_119041c4(void);
extern "C" void LAB_11904228(void);
extern "C" void LAB_11904284(void);
extern "C" void LAB_11904290(void);
extern "C" void LAB_1190429c(void);
extern "C" void LAB_11904558(void);
extern "C" void LAB_119045ac(void);
extern "C" void LAB_119045b8(void);
extern "C" void LAB_119045c4(void);
extern "C" void LAB_119045e8(void);
extern "C" void LAB_11904630(void);
extern "C" void LAB_119046b0(void);
extern "C" void LAB_119046f4(void);
extern "C" void LAB_11904738(void);
extern "C" void LAB_11904780(void);
extern "C" void LAB_119047c8(void);
extern "C" void LAB_1190482c(void);
extern "C" void LAB_11904888(void);
extern "C" void LAB_11904894(void);
extern "C" void LAB_119048a0(void);
extern "C" void LAB_119048c4(void);
extern "C" void LAB_11904920(void);
extern "C" void LAB_1190492c(void);
extern "C" void LAB_11904938(void);
extern "C" void LAB_11904a00(void);
extern "C" void LAB_11904a5c(void);
extern "C" void LAB_11904a68(void);
extern "C" void LAB_11904a74(void);
extern "C" void LAB_11904b4c(void);
extern "C" void LAB_11904ba8(void);
extern "C" void LAB_11904bb4(void);
extern "C" void LAB_11904bc0(void);
extern "C" void LAB_11904c10(void);
extern "C" void LAB_11904c6c(void);
extern "C" void LAB_11904c78(void);
extern "C" void LAB_11904c84(void);
extern "C" void LAB_11904e04(void);
extern "C" void LAB_11904e60(void);
extern "C" void LAB_11904e6c(void);
extern "C" void LAB_11904e78(void);
extern "C" void LAB_11904ec4(void);
extern "C" void LAB_11904f18(void);
extern "C" void LAB_11904f24(void);
extern "C" void LAB_11904f30(void);
extern "C" void LAB_11904f84(void);
extern "C" void LAB_11904fc8(void);
extern "C" void LAB_11905020(void);
extern "C" void LAB_1190506c(void);
extern "C" void LAB_119050bc(void);
extern "C" void LAB_1190510c(void);
extern "C" void LAB_1190515c(void);
extern "C" void LAB_119051b4(void);
extern "C" void LAB_1190520c(void);
extern "C" void LAB_11905268(void);
extern "C" void LAB_119052c4(void);
extern "C" void LAB_11905328(void);
extern "C" void LAB_11905384(void);
extern "C" void LAB_11905390(void);
extern "C" void LAB_1190539c(void);
extern "C" void LAB_119053c0(void);
extern "C" void LAB_1190541c(void);
extern "C" void LAB_11905428(void);
extern "C" void LAB_11905434(void);
extern "C" void LAB_11905624(void);
extern "C" void LAB_11905680(void);
extern "C" void LAB_1190568c(void);
extern "C" void LAB_11905698(void);
extern "C" void LAB_11905708(void);
extern "C" void LAB_11905764(void);
extern "C" void LAB_11905770(void);
extern "C" void LAB_1190577c(void);
extern "C" void LAB_11905810(void);
extern "C" void LAB_1190586c(void);
extern "C" void LAB_11905878(void);
extern "C" void LAB_11905884(void);
extern "C" void LAB_11905928(void);
extern "C" void LAB_11905984(void);
extern "C" void LAB_11905990(void);
extern "C" void LAB_1190599c(void);
extern "C" void LAB_11905a1c(void);
extern "C" void LAB_11905a78(void);
extern "C" void LAB_11905a84(void);
extern "C" void LAB_11905a90(void);
extern "C" void LAB_11905b10(void);
extern "C" void LAB_11905b6c(void);
extern "C" void LAB_11905b78(void);
extern "C" void LAB_11905b84(void);
extern "C" void LAB_11905bb8(void);
extern "C" void LAB_11905c14(void);
extern "C" void LAB_11905c20(void);
extern "C" void LAB_11905c2c(void);
extern "C" void LAB_11905c50(void);
extern "C" void LAB_11905cac(void);
extern "C" void LAB_11905cb8(void);
extern "C" void LAB_11905cc4(void);
extern "C" void LAB_11905ce8(void);
extern "C" void LAB_11905d44(void);
extern "C" void LAB_11905d50(void);
extern "C" void LAB_11905d5c(void);
extern "C" void LAB_11905d80(void);
extern "C" void LAB_11905ddc(void);
extern "C" void LAB_11905de8(void);
extern "C" void LAB_11905df4(void);
extern "C" void LAB_11905fdc(void);
extern "C" void LAB_11906030(void);
extern "C" void LAB_1190603c(void);
extern "C" void LAB_11906048(void);
extern "C" void LAB_11906084(void);
extern "C" void LAB_119060c8(void);
extern "C" void LAB_1190610c(void);
extern "C" void LAB_11906164(void);
extern "C" void LAB_119061c0(void);
extern "C" void LAB_119061cc(void);
extern "C" void LAB_119061d8(void);
extern "C" void LAB_119061fc(void);
extern "C" void LAB_11906258(void);
extern "C" void LAB_11906264(void);
extern "C" void LAB_11906270(void);
extern "C" void LAB_119062ac(void);
extern "C" void LAB_11906308(void);
extern "C" void LAB_11906314(void);
extern "C" void LAB_11906320(void);
extern "C" void LAB_11906344(void);
extern "C" void LAB_119063a0(void);
extern "C" void LAB_119063ac(void);
extern "C" void LAB_119063b8(void);
extern "C" void LAB_119063dc(void);
extern "C" void LAB_11906424(void);
extern "C" void LAB_11906460(void);
extern "C" void LAB_1190646c(void);
extern "C" void LAB_1190660c(void);
extern "C" void LAB_1190665c(void);
extern "C" void LAB_119066b0(void);
extern "C" void LAB_1190670c(void);
extern "C" void LAB_11906780(void);
extern "C" void LAB_11906800(void);
extern "C" void LAB_11906878(void);
extern "C" void LAB_119068e0(void);
extern "C" void LAB_11906948(void);
extern "C" void LAB_119069cc(void);
extern "C" void LAB_11906a2c(void);
extern "C" void LAB_11906a7c(void);
extern "C" void LAB_11906b60(void);
extern "C" void LAB_11906bbc(void);
extern "C" void LAB_11906bc8(void);
extern "C" void LAB_11906bd4(void);
extern "C" void LAB_11906bf8(void);
extern "C" void LAB_11906c54(void);
extern "C" void LAB_11906c60(void);
extern "C" void LAB_11906c6c(void);
extern "C" void LAB_11906c90(void);
extern "C" void LAB_11906cec(void);
extern "C" void LAB_11906cf8(void);
extern "C" void LAB_11906d04(void);
extern "C" void LAB_11906e8c(void);
extern "C" void LAB_11906ee8(void);
extern "C" void LAB_11906ef4(void);
extern "C" void LAB_11906f00(void);
extern "C" void LAB_11906f3c(void);
extern "C" void LAB_11906f98(void);
extern "C" void LAB_11906fa4(void);
extern "C" void LAB_11906fb0(void);
extern "C" void LAB_11906fe0(void);
extern "C" void LAB_1190703c(void);
extern "C" void LAB_11907048(void);
extern "C" void LAB_11907054(void);
extern "C" void LAB_1190708c(void);
extern "C" void LAB_119070e8(void);
extern "C" void LAB_119070f4(void);
extern "C" void LAB_11907100(void);
extern "C" void LAB_11907124(void);
extern "C" void LAB_11907180(void);
extern "C" void LAB_1190718c(void);
extern "C" void LAB_11907198(void);
extern "C" void LAB_119071bc(void);
extern "C" void LAB_11907218(void);
extern "C" void LAB_11907224(void);
extern "C" void LAB_11907230(void);
extern "C" void LAB_11907254(void);
extern "C" void LAB_119072b0(void);
extern "C" void LAB_119072bc(void);
extern "C" void LAB_119072c8(void);
extern "C" void LAB_119072ec(void);
extern "C" void LAB_11907348(void);
extern "C" void LAB_11907354(void);
extern "C" void LAB_11907360(void);
extern "C" void LAB_119073bc(void);
extern "C" void LAB_11907418(void);
extern "C" void LAB_11907424(void);
extern "C" void LAB_11907430(void);
extern "C" void LAB_11907598(void);
extern "C" void LAB_119075ec(void);
extern "C" void LAB_119075f8(void);
extern "C" void LAB_11907604(void);
extern "C" void LAB_11907640(void);
extern "C" void LAB_11907680(void);
extern "C" void LAB_119076c8(void);
extern "C" void LAB_11907714(void);
extern "C" void LAB_11907760(void);
extern "C" void LAB_119077b4(void);
extern "C" void LAB_11907808(void);
extern "C" void LAB_1190785c(void);
extern "C" void LAB_119078c4(void);
extern "C" void LAB_11907920(void);
extern "C" void LAB_1190792c(void);
extern "C" void LAB_11907938(void);
extern "C" void LAB_1190795c(void);
extern "C" void LAB_119079b8(void);
extern "C" void LAB_119079c4(void);
extern "C" void LAB_119079d0(void);
extern "C" void LAB_11907b54(void);
extern "C" void LAB_11907bb0(void);
extern "C" void LAB_11907bbc(void);
extern "C" void LAB_11907bc8(void);
extern "C" void LAB_11907c1c(void);
extern "C" void LAB_11907c78(void);
extern "C" void LAB_11907c84(void);
extern "C" void LAB_11907c90(void);
extern "C" void LAB_11907cd4(void);
extern "C" void LAB_11907d30(void);
extern "C" void LAB_11907d3c(void);
extern "C" void LAB_11907d48(void);
extern "C" void LAB_11907d8c(void);
extern "C" void LAB_11907de8(void);
extern "C" void LAB_11907df4(void);
extern "C" void LAB_11907e00(void);
extern "C" void LAB_11907e30(void);
extern "C" void LAB_11907e8c(void);
extern "C" void LAB_11907e98(void);
extern "C" void LAB_11907ea4(void);
extern "C" void LAB_11907ed8(void);
extern "C" void LAB_11907f34(void);
extern "C" void LAB_11907f40(void);
extern "C" void LAB_11907f4c(void);
extern "C" void LAB_11907f84(void);
extern "C" void LAB_11907fe0(void);
extern "C" void LAB_11907fec(void);
extern "C" void LAB_11907ff8(void);
extern "C" void LAB_11908058(void);
extern "C" void LAB_119080ac(void);
extern "C" void LAB_119080b8(void);
extern "C" void LAB_119080c4(void);
extern "C" void LAB_11908100(void);
extern "C" void LAB_1190813c(void);
extern "C" void LAB_1190817c(void);
extern "C" void LAB_119081c0(void);
extern "C" void LAB_11908200(void);
extern "C" void LAB_11908248(void);
extern "C" void LAB_11908294(void);
extern "C" void LAB_119082f0(void);
extern "C" void LAB_119082fc(void);
extern "C" void LAB_11908308(void);
extern "C" void LAB_1190832c(void);
extern "C" void LAB_11908388(void);
extern "C" void LAB_11908394(void);
extern "C" void LAB_119083a0(void);
extern "C" void LAB_119084d4(void);
extern "C" void LAB_11908530(void);
extern "C" void LAB_1190853c(void);
extern "C" void LAB_11908548(void);
extern "C" void LAB_1190856c(void);
extern "C" void LAB_119085c8(void);
extern "C" void LAB_119085d4(void);
extern "C" void LAB_119085e0(void);
extern "C" void LAB_11908864(void);
extern "C" void LAB_119088c0(void);
extern "C" void LAB_119088cc(void);
extern "C" void LAB_119088d8(void);
extern "C" void LAB_1190891c(void);
extern "C" void LAB_11908970(void);
extern "C" void LAB_1190897c(void);
extern "C" void LAB_11908988(void);
extern "C" void LAB_119089c4(void);
extern "C" void LAB_11908a04(void);
extern "C" void LAB_11908a44(void);
extern "C" void LAB_11908a9c(void);
extern "C" void LAB_11908af8(void);
extern "C" void LAB_11908b04(void);
extern "C" void LAB_11908b10(void);
extern "C" void LAB_11908b34(void);
extern "C" void LAB_11908b90(void);
extern "C" void LAB_11908b9c(void);
extern "C" void LAB_11908ba8(void);
extern "C" void LAB_11908c0c(void);
extern "C" void LAB_11908c68(void);
extern "C" void LAB_11908c74(void);
extern "C" void LAB_11908c80(void);
extern "C" void LAB_11908cf0(void);
extern "C" void LAB_11908d4c(void);
extern "C" void LAB_11908d58(void);
extern "C" void LAB_11908d64(void);
extern "C" void LAB_11908f40(void);
extern "C" void LAB_1190966c(void);
extern "C" void LAB_119096c0(void);
extern "C" void LAB_119096cc(void);
extern "C" void LAB_119096d8(void);
extern "C" void LAB_11909714(void);
extern "C" void LAB_1190975c(void);
extern "C" void LAB_119097b8(void);
extern "C" void LAB_11909810(void);
extern "C" void LAB_11909860(void);
extern "C" void LAB_119098b0(void);
extern "C" void LAB_11909900(void);
extern "C" void LAB_11909944(void);
extern "C" void LAB_11909988(void);
extern "C" void LAB_119099cc(void);
extern "C" void LAB_11909a10(void);
extern "C" void LAB_11909a54(void);
extern "C" void LAB_11909a98(void);
extern "C" void LAB_11909adc(void);
extern "C" void LAB_11909b20(void);
extern "C" void LAB_11909b7c(void);
extern "C" void LAB_11909bd8(void);
extern "C" void LAB_11909be4(void);
extern "C" void LAB_11909bf0(void);
extern "C" void LAB_11909c14(void);
extern "C" void LAB_11909c70(void);
extern "C" void LAB_11909c7c(void);
extern "C" void LAB_11909c88(void);
extern "C" void LAB_11909d44(void);
extern "C" void LAB_11909da0(void);
extern "C" void LAB_11909dac(void);
extern "C" void LAB_11909db8(void);
extern "C" void LAB_11909dfc(void);
extern "C" void LAB_11909e58(void);
extern "C" void LAB_11909e64(void);
extern "C" void LAB_11909e70(void);
extern "C" void LAB_11909e94(void);
extern "C" void LAB_11909ef0(void);
extern "C" void LAB_11909efc(void);
extern "C" void LAB_11909f08(void);
extern "C" void LAB_11909f40(void);
extern "C" void LAB_11909f9c(void);
extern "C" void LAB_11909fa8(void);
extern "C" void LAB_11909fb4(void);
extern "C" void LAB_11909fe0(void);
extern "C" void LAB_1190a03c(void);
extern "C" void LAB_1190a048(void);
extern "C" void LAB_1190a054(void);
extern "C" void LAB_1190a088(void);
extern "C" void LAB_1190a0e4(void);
extern "C" void LAB_1190a0f0(void);
extern "C" void LAB_1190a0fc(void);
extern "C" void LAB_1190a154(void);
extern "C" void LAB_1190a1b0(void);
extern "C" void LAB_1190a1bc(void);
extern "C" void LAB_1190a1c8(void);
extern "C" void LAB_1190a22c(void);
extern "C" void LAB_1190a288(void);
extern "C" void LAB_1190a294(void);
extern "C" void LAB_1190a2a0(void);
extern "C" void LAB_1190a300(void);
extern "C" void LAB_1190a35c(void);
extern "C" void LAB_1190a368(void);
extern "C" void LAB_1190a374(void);
extern "C" void LAB_1190a3b4(void);
extern "C" void LAB_1190a410(void);
extern "C" void LAB_1190a41c(void);
extern "C" void LAB_1190a428(void);
extern "C" void LAB_1190a458(void);
extern "C" void LAB_1190a4b4(void);
extern "C" void LAB_1190a4c0(void);
extern "C" void LAB_1190a4cc(void);
extern "C" void LAB_1190a4f0(void);
extern "C" void LAB_1190a54c(void);
extern "C" void LAB_1190a558(void);
extern "C" void LAB_1190a564(void);
extern "C" void LAB_1190a588(void);
extern "C" void LAB_1190a5e4(void);
extern "C" void LAB_1190a5f0(void);
extern "C" void LAB_1190a5fc(void);
extern "C" void LAB_1190a63c(void);
extern "C" void LAB_1190a698(void);
extern "C" void LAB_1190a6a4(void);
extern "C" void LAB_1190a6b0(void);
extern "C" void LAB_1190a7a0(void);
extern "C" void LAB_1190a82c(void);
extern "C" void LAB_1190a964(void);
extern "C" void LAB_1190aa08(void);
extern "C" void LAB_1190aa50(void);
extern "C" void LAB_1190ac70(void);
extern "C" void LAB_1190ae78(void);
extern "C" void LAB_1190b038(void);
extern "C" void LAB_1190c5a0(void);
extern "C" void LAB_1190d9c8(void);
extern "C" void LAB_1190da10(void);
extern "C" void LAB_1190da4c(void);
extern "C" void LAB_1190da58(void);
extern "C" void LAB_1190da6c(void);
extern "C" void LAB_1190dab4(void);
extern "C" void LAB_1190daf0(void);
extern "C" void LAB_1190dafc(void);
extern "C" void LAB_1190ddc4(void);
extern "C" void LAB_1190de58(void);
extern "C" void LAB_1190dfa4(void);
extern "C" void LAB_1190dfc0(void);
extern "C" void LAB_1190dfe8(void);
extern "C" void LAB_1190e010(void);
extern "C" void LAB_1190e038(void);
extern "C" void LAB_1190e054(void);
extern "C" void LAB_1190e07c(void);
extern "C" void LAB_1190e0a4(void);
extern "C" void LAB_1190e0cc(void);
extern "C" void LAB_1190e0f4(void);
extern "C" void LAB_1190e124(void);
extern "C" void LAB_1190e154(void);
extern "C" void LAB_1190e198(void);
extern "C" void LAB_1190e244(void);
extern "C" void LAB_1190e298(void);
extern "C" void LAB_12119c20(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a490c(void);
extern "C" void LAB_121a4910(void);
extern "C" void LAB_121a4914(void);
extern "C" void LAB_121a4918(void);
extern "C" void LAB_121a491c(void);
extern "C" void LAB_121a4920(void);
extern "C" void LAB_121a4924(void);
extern "C" void LAB_121a4928(void);
extern "C" void LAB_121a492c(void);
extern "C" void LAB_121a4930(void);
extern "C" void LAB_121a4934(void);
extern "C" void LAB_121a4938(void);
extern "C" void LAB_121a493c(void);
extern "C" void LAB_121a4940(void);
extern "C" void LAB_121a4944(void);
extern "C" void LAB_121a4948(void);
extern "C" void LAB_121a494c(void);
extern "C" void LAB_121a4950(void);
extern "C" void LAB_121a4954(void);
extern "C" void LAB_121a4958(void);
extern "C" void LAB_121a495c(void);
extern "C" void LAB_121a4960(void);
extern "C" void LAB_121a4964(void);
extern "C" void LAB_121a4968(void);
extern "C" void LAB_121a496c(void);
extern "C" void LAB_121a4970(void);
extern "C" void LAB_121a4974(void);
extern "C" void LAB_121a4978(void);
extern "C" void LAB_121a497c(void);
extern "C" void LAB_121a4980(void);
extern "C" void LAB_121a4984(void);
extern "C" void LAB_121a4988(void);
extern "C" void LAB_121a498c(void);
extern "C" void LAB_121a4990(void);
extern "C" void LAB_121a4994(void);
extern "C" void LAB_121a4998(void);
extern "C" void LAB_121a499c(void);
extern "C" void LAB_121a4a0c(void);
extern "C" void LAB_121a4a10(void);
extern "C" void LAB_121a4a14(void);
extern "C" void LAB_121a4a38(void);
extern "C" void LAB_121a4a3c(void);
extern "C" void LAB_121a4a40(void);
extern "C" void LAB_121a4a44(void);
extern "C" void LAB_121a4a48(void);
extern "C" void LAB_121a4a4c(void);
extern "C" void LAB_121a4a50(void);
extern "C" void LAB_121a4a54(void);
extern "C" void LAB_121a4a74(void);
extern "C" void LAB_121a4a78(void);
extern "C" void LAB_121a4a7c(void);
extern "C" void LAB_121a4a80(void);
extern "C" void LAB_121a4a84(void);
extern "C" void LAB_121a4ae8(void);
extern "C" void LAB_121a4aec(void);
extern "C" void LAB_121a4af0(void);
extern "C" void LAB_121a4b0c(void);
extern "C" void LAB_121a4b10(void);
extern "C" void LAB_121a4b14(void);
extern "C" void LAB_121a4b64(void);
extern "C" void LAB_121a4b68(void);
extern "C" void LAB_121a4b6c(void);
extern "C" void LAB_121a4b70(void);
extern "C" void LAB_121a4b74(void);
extern "C" void LAB_121a4b78(void);
extern "C" void LAB_121a4b7c(void);
extern "C" void LAB_121a4b80(void);
extern "C" void LAB_121a4b84(void);
extern "C" void LAB_121a4b88(void);
extern "C" void LAB_121a4b8c(void);
extern "C" void LAB_121a4b90(void);
extern "C" void LAB_121a4b94(void);
extern "C" void LAB_121a4b98(void);
extern "C" void LAB_121a4c0c(void);
extern "C" void LAB_121a4c10(void);
extern "C" void LAB_121a4c14(void);
extern "C" void LAB_121a4c18(void);
extern "C" void LAB_121a4c1c(void);
extern "C" void LAB_121a4c3c(void);
extern "C" void LAB_121a4c40(void);
extern "C" void LAB_121a4c44(void);
extern "C" void LAB_121a4c48(void);
extern "C" void LAB_121a4c4c(void);
extern "C" void LAB_121a4c50(void);
extern "C" void LAB_121a4c54(void);
extern "C" void LAB_121a4c58(void);
extern "C" void LAB_121a4c5c(void);
extern "C" void LAB_121a4c60(void);
extern "C" void LAB_121a4c64(void);
extern "C" void LAB_121a4c84(void);
extern "C" void LAB_121a4c88(void);
extern "C" void LAB_121a4c8c(void);
extern "C" void LAB_121a4ca4(void);
extern "C" void LAB_121a4ca8(void);
extern "C" void LAB_121a4cac(void);
extern "C" void LAB_121a4cb0(void);
extern "C" void LAB_121a4cb4(void);
extern "C" void LAB_121a4cb8(void);
extern "C" void LAB_121a4cbc(void);
extern "C" void LAB_121a4cc0(void);
extern "C" void LAB_121a4cc4(void);
extern "C" void LAB_121a4cc8(void);
extern "C" void LAB_121a4ccc(void);
extern "C" void LAB_121a4cd0(void);
extern "C" void LAB_121a4d28(void);
extern "C" void LAB_121a4d2c(void);
extern "C" void LAB_121a4d30(void);
extern "C" void LAB_121a4d34(void);
extern "C" void LAB_121a4d38(void);
extern "C" void LAB_121a4d3c(void);
extern "C" void LAB_121a4d40(void);
extern "C" void LAB_121a4d44(void);
extern "C" void LAB_121a4d64(void);
extern "C" void LAB_121a4d68(void);
extern "C" void LAB_121a4d6c(void);
extern "C" void LAB_121a4d70(void);
extern "C" void LAB_121a4d74(void);
extern "C" void LAB_121a4d78(void);
extern "C" void LAB_121a4d94(void);
extern "C" void LAB_121a4d98(void);
extern "C" void LAB_121a4d9c(void);
extern "C" void LAB_121a4dbc(void);
extern "C" void LAB_121a4dcc(void);
extern "C" void LAB_121a4dd0(void);
extern "C" void LAB_121a4dd4(void);
extern "C" void LAB_121a4dd8(void);
extern "C" void LAB_121a4ddc(void);
extern "C" void LAB_121a4de0(void);
extern "C" void LAB_121a4de4(void);
extern "C" void LAB_121a4de8(void);
extern "C" void LAB_121a4dec(void);
extern "C" void LAB_121a4df0(void);
extern "C" void LAB_121a4df4(void);
extern "C" void LAB_121a4df8(void);
extern "C" void LAB_121a4dfc(void);
extern "C" void LAB_121a4e00(void);
extern "C" void LAB_121a4e04(void);
extern "C" void LAB_122fc888(void);

extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e30e(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_1001f8cf(void);
extern "C" void LAB_10021931(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_100325a6(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003c4f2(void);
extern "C" void LAB_1003eac7(void);
extern "C" void LAB_100421e5(void);
extern "C" void LAB_10045110(void);
extern "C" void LAB_1004e2f1(void);
extern "C" void LAB_10052482(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_1005fd21(void);
extern "C" void LAB_10061fcc(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_1006a316(void);
extern "C" void LAB_1006e4ed(void);
extern "C" void LAB_1006e600(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007d83a(void);
extern "C" void LAB_10082ab0(void);
extern "C" void LAB_1008dbcc(void);
extern "C" void LAB_10094102(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_11879084(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11889d1c(void);
extern "C" void LAB_11889d24(void);
extern "C" void LAB_11893ddc(void);
extern "C" void LAB_11896aa0(void);
extern "C" void LAB_118b8f8c(void);
extern "C" void LAB_118fd144(void);
extern "C" void LAB_118fd184(void);
extern "C" void LAB_118fd1c0(void);
extern "C" void LAB_118fd1fc(void);
extern "C" void LAB_118fd240(void);
extern "C" void LAB_118fd290(void);
extern "C" void LAB_118fd2dc(void);
extern "C" void LAB_118fd334(void);
extern "C" void LAB_118fd37c(void);
extern "C" void LAB_118fd3d0(void);
extern "C" void LAB_118fd41c(void);
extern "C" void LAB_118fd464(void);
extern "C" void LAB_118fd4ac(void);
extern "C" void LAB_118fd500(void);
extern "C" void LAB_118fd53c(void);
extern "C" void LAB_118fd588(void);
extern "C" void LAB_118fd5d4(void);
extern "C" void LAB_118fd62c(void);
extern "C" void LAB_118fd690(void);
extern "C" void LAB_118fd6d4(void);
extern "C" void LAB_118fd720(void);
extern "C" void LAB_118fd764(void);
extern "C" void LAB_118fd7ac(void);
extern "C" void LAB_118fd7f4(void);
extern "C" void LAB_118fd838(void);
extern "C" void LAB_118fd880(void);
extern "C" void LAB_118fd8c4(void);
extern "C" void LAB_118fd908(void);
extern "C" void LAB_118fd94c(void);
extern "C" void LAB_118fd990(void);
extern "C" void LAB_118fd9d4(void);
extern "C" void LAB_118fda28(void);
extern "C" void LAB_118fda80(void);
extern "C" void LAB_118fdacc(void);
extern "C" void LAB_118fdb14(void);
extern "C" void LAB_118fdb60(void);
extern "C" void LAB_118fdbb4(void);
extern "C" void LAB_11900d24(void);
extern "C" void LAB_11900d78(void);
extern "C" void LAB_11900d84(void);
extern "C" void LAB_11900d90(void);
extern "C" void LAB_11900dcc(void);
extern "C" void LAB_11900e0c(void);
extern "C" void LAB_11900e50(void);
extern "C" void LAB_11900ea4(void);
extern "C" void LAB_11900f00(void);
extern "C" void LAB_11900f0c(void);
extern "C" void LAB_11900f18(void);
extern "C" void LAB_11900f3c(void);
extern "C" void LAB_11900f98(void);
extern "C" void LAB_11900fa4(void);
extern "C" void LAB_11900fb0(void);
extern "C" void LAB_11900ffc(void);
extern "C" void LAB_11901058(void);
extern "C" void LAB_11901064(void);
extern "C" void LAB_11901070(void);
extern "C" void LAB_119010b8(void);
extern "C" void LAB_11901114(void);
extern "C" void LAB_11901120(void);
extern "C" void LAB_1190112c(void);
extern "C" void LAB_1190117c(void);
extern "C" void LAB_119011d0(void);
extern "C" void LAB_119011dc(void);
extern "C" void LAB_119011e8(void);
extern "C" void LAB_11901224(void);
extern "C" void LAB_1190126c(void);
extern "C" void LAB_119012b0(void);
extern "C" void LAB_119012f4(void);
extern "C" void LAB_11901338(void);
extern "C" void LAB_1190137c(void);
extern "C" void LAB_119013c0(void);
extern "C" void LAB_11901404(void);
extern "C" void LAB_11901460(void);
extern "C" void LAB_119014bc(void);
extern "C" void LAB_119014c8(void);
extern "C" void LAB_119014d4(void);
extern "C" void LAB_119014f8(void);
extern "C" void LAB_11901554(void);
extern "C" void LAB_11901560(void);
extern "C" void LAB_1190156c(void);
extern "C" void LAB_11901630(void);
extern "C" void LAB_1190168c(void);
extern "C" void LAB_11901698(void);
extern "C" void LAB_119016a4(void);
extern "C" void LAB_119016e8(void);
extern "C" void LAB_11901744(void);
extern "C" void LAB_11901750(void);
extern "C" void LAB_1190175c(void);
extern "C" void LAB_1190179c(void);
extern "C" void LAB_119017f8(void);
extern "C" void LAB_11901804(void);
extern "C" void LAB_11901810(void);
extern "C" void LAB_11901834(void);
extern "C" void LAB_11901890(void);
extern "C" void LAB_1190189c(void);
extern "C" void LAB_119018a8(void);
extern "C" void LAB_11901948(void);
extern "C" void LAB_119019a4(void);
extern "C" void LAB_119019b0(void);
extern "C" void LAB_119019bc(void);
extern "C" void LAB_11901a60(void);
extern "C" void LAB_11901abc(void);
extern "C" void LAB_11901ac8(void);
extern "C" void LAB_11901ad4(void);
extern "C" void LAB_11901b2c(void);
extern "C" void LAB_11901b88(void);
extern "C" void LAB_11901b94(void);
extern "C" void LAB_11901ba0(void);
extern "C" void LAB_1190205c(void);
extern "C" void LAB_119020b0(void);
extern "C" void LAB_119020bc(void);
extern "C" void LAB_119020c8(void);
extern "C" void LAB_11902104(void);
extern "C" void LAB_1190214c(void);
extern "C" void LAB_11902198(void);
extern "C" void LAB_119021e4(void);
extern "C" void LAB_11902230(void);
extern "C" void LAB_1190229c(void);
extern "C" void LAB_119022f8(void);
extern "C" void LAB_11902304(void);
extern "C" void LAB_11902310(void);
extern "C" void LAB_11902334(void);
extern "C" void LAB_11902390(void);
extern "C" void LAB_1190239c(void);
extern "C" void LAB_119023a8(void);
extern "C" void LAB_119023e0(void);
extern "C" void LAB_1190243c(void);
extern "C" void LAB_11902448(void);
extern "C" void LAB_11902454(void);
extern "C" void LAB_11902590(void);
extern "C" void LAB_119025ec(void);
extern "C" void LAB_119025f8(void);
extern "C" void LAB_11902604(void);
extern "C" void LAB_1190271c(void);
extern "C" void LAB_11902770(void);
extern "C" void LAB_1190277c(void);
extern "C" void LAB_11902788(void);
extern "C" void LAB_119027c4(void);
extern "C" void LAB_11902804(void);
extern "C" void LAB_11902848(void);
extern "C" void LAB_119028ac(void);
extern "C" void LAB_11902908(void);
extern "C" void LAB_11902914(void);
extern "C" void LAB_11902920(void);
extern "C" void LAB_11902a84(void);
extern "C" void LAB_11902ae0(void);
extern "C" void LAB_11902aec(void);
extern "C" void LAB_11902af8(void);
extern "C" void LAB_11902b30(void);
extern "C" void LAB_11902b8c(void);
extern "C" void LAB_11902b98(void);
extern "C" void LAB_11902ba4(void);
extern "C" void LAB_11902c98(void);
extern "C" void LAB_11902cdc(void);
extern "C" void LAB_11902d30(void);
extern "C" void LAB_11902dec(void);
extern "C" void LAB_11902e48(void);
extern "C" void LAB_11902e54(void);
extern "C" void LAB_11902e60(void);
extern "C" void LAB_11902e84(void);
extern "C" void LAB_11902ee0(void);
extern "C" void LAB_11902eec(void);
extern "C" void LAB_11902ef8(void);
extern "C" void LAB_11903070(void);
extern "C" void LAB_119030cc(void);
extern "C" void LAB_119030d8(void);
extern "C" void LAB_119030e4(void);
extern "C" void LAB_11903238(void);
extern "C" void LAB_11903244(void);
extern "C" void LAB_11903254(void);
extern "C" void LAB_119032a0(void);
extern "C" void LAB_119032f8(void);
extern "C" void LAB_1190334c(void);
extern "C" void LAB_119033a8(void);
extern "C" void LAB_1190340c(void);
extern "C" void LAB_11903460(void);
extern "C" void LAB_119034b4(void);
extern "C" void LAB_1190350c(void);
extern "C" void LAB_1190356c(void);
extern "C" void LAB_119035c8(void);
extern "C" void LAB_11903614(void);
extern "C" void LAB_11903664(void);
extern "C" void LAB_119036bc(void);
extern "C" void LAB_11903730(void);
extern "C" void LAB_1190378c(void);
extern "C" void LAB_11903798(void);
extern "C" void LAB_119037a4(void);
extern "C" void LAB_119037c8(void);
extern "C" void LAB_11903824(void);
extern "C" void LAB_11903830(void);
extern "C" void LAB_1190383c(void);
extern "C" void LAB_11903874(void);
extern "C" void LAB_119038d0(void);
extern "C" void LAB_119038dc(void);
extern "C" void LAB_119038e8(void);
extern "C" void LAB_11903948(void);
extern "C" void LAB_119039a4(void);
extern "C" void LAB_119039b0(void);
extern "C" void LAB_119039bc(void);
extern "C" void LAB_11903a54(void);
extern "C" void LAB_11903ab0(void);
extern "C" void LAB_11903abc(void);
extern "C" void LAB_11903ac8(void);
extern "C" void LAB_11903ba0(void);
extern "C" void LAB_11903bfc(void);
extern "C" void LAB_11903c08(void);
extern "C" void LAB_11903c14(void);
extern "C" void LAB_11903c54(void);
extern "C" void LAB_11903cb0(void);
extern "C" void LAB_11903cbc(void);
extern "C" void LAB_11903cc8(void);
extern "C" void LAB_11903d70(void);
extern "C" void LAB_11903dcc(void);
extern "C" void LAB_11903dd8(void);
extern "C" void LAB_11903de4(void);
extern "C" void LAB_11903e80(void);
extern "C" void LAB_11903edc(void);
extern "C" void LAB_11903ee8(void);
extern "C" void LAB_11903ef4(void);
extern "C" void LAB_11903f18(void);
extern "C" void LAB_11903f88(void);
extern "C" void LAB_11903fe4(void);
extern "C" void LAB_11903ff0(void);
extern "C" void LAB_11903ffc(void);
extern "C" void LAB_11904150(void);
extern "C" void LAB_119041ac(void);
extern "C" void LAB_119041b8(void);
extern "C" void LAB_119041c4(void);
extern "C" void LAB_11904228(void);
extern "C" void LAB_11904284(void);
extern "C" void LAB_11904290(void);
extern "C" void LAB_1190429c(void);
extern "C" void LAB_11904558(void);
extern "C" void LAB_119045ac(void);
extern "C" void LAB_119045b8(void);
extern "C" void LAB_119045c4(void);
extern "C" void LAB_119045e8(void);
extern "C" void LAB_11904630(void);
extern "C" void LAB_119046b0(void);
extern "C" void LAB_119046f4(void);
extern "C" void LAB_11904738(void);
extern "C" void LAB_11904780(void);
extern "C" void LAB_119047c8(void);
extern "C" void LAB_1190482c(void);
extern "C" void LAB_11904888(void);
extern "C" void LAB_11904894(void);
extern "C" void LAB_119048a0(void);
extern "C" void LAB_119048c4(void);
extern "C" void LAB_11904920(void);
extern "C" void LAB_1190492c(void);
extern "C" void LAB_11904938(void);
extern "C" void LAB_11904a00(void);
extern "C" void LAB_11904a5c(void);
extern "C" void LAB_11904a68(void);
extern "C" void LAB_11904a74(void);
extern "C" void LAB_11904b4c(void);
extern "C" void LAB_11904ba8(void);
extern "C" void LAB_11904bb4(void);
extern "C" void LAB_11904bc0(void);
extern "C" void LAB_11904c10(void);
extern "C" void LAB_11904c6c(void);
extern "C" void LAB_11904c78(void);
extern "C" void LAB_11904c84(void);
extern "C" void LAB_11904e04(void);
extern "C" void LAB_11904e60(void);
extern "C" void LAB_11904e6c(void);
extern "C" void LAB_11904e78(void);
extern "C" void LAB_11904ec4(void);
extern "C" void LAB_11904f18(void);
extern "C" void LAB_11904f24(void);
extern "C" void LAB_11904f30(void);
extern "C" void LAB_11904f84(void);
extern "C" void LAB_11904fc8(void);
extern "C" void LAB_11905020(void);
extern "C" void LAB_1190506c(void);
extern "C" void LAB_119050bc(void);
extern "C" void LAB_1190510c(void);
extern "C" void LAB_1190515c(void);
extern "C" void LAB_119051b4(void);
extern "C" void LAB_1190520c(void);
extern "C" void LAB_11905268(void);
extern "C" void LAB_119052c4(void);
extern "C" void LAB_11905328(void);
extern "C" void LAB_11905384(void);
extern "C" void LAB_11905390(void);
extern "C" void LAB_1190539c(void);
extern "C" void LAB_119053c0(void);
extern "C" void LAB_1190541c(void);
extern "C" void LAB_11905428(void);
extern "C" void LAB_11905434(void);
extern "C" void LAB_11905624(void);
extern "C" void LAB_11905680(void);
extern "C" void LAB_1190568c(void);
extern "C" void LAB_11905698(void);
extern "C" void LAB_11905708(void);
extern "C" void LAB_11905764(void);
extern "C" void LAB_11905770(void);
extern "C" void LAB_1190577c(void);
extern "C" void LAB_11905810(void);
extern "C" void LAB_1190586c(void);
extern "C" void LAB_11905878(void);
extern "C" void LAB_11905884(void);
extern "C" void LAB_11905928(void);
extern "C" void LAB_11905984(void);
extern "C" void LAB_11905990(void);
extern "C" void LAB_1190599c(void);
extern "C" void LAB_11905a1c(void);
extern "C" void LAB_11905a78(void);
extern "C" void LAB_11905a84(void);
extern "C" void LAB_11905a90(void);
extern "C" void LAB_11905b10(void);
extern "C" void LAB_11905b6c(void);
extern "C" void LAB_11905b78(void);
extern "C" void LAB_11905b84(void);
extern "C" void LAB_11905bb8(void);
extern "C" void LAB_11905c14(void);
extern "C" void LAB_11905c20(void);
extern "C" void LAB_11905c2c(void);
extern "C" void LAB_11905c50(void);
extern "C" void LAB_11905cac(void);
extern "C" void LAB_11905cb8(void);
extern "C" void LAB_11905cc4(void);
extern "C" void LAB_11905ce8(void);
extern "C" void LAB_11905d44(void);
extern "C" void LAB_11905d50(void);
extern "C" void LAB_11905d5c(void);
extern "C" void LAB_11905d80(void);
extern "C" void LAB_11905ddc(void);
extern "C" void LAB_11905de8(void);
extern "C" void LAB_11905df4(void);
extern "C" void LAB_11905fdc(void);
extern "C" void LAB_11906030(void);
extern "C" void LAB_1190603c(void);
extern "C" void LAB_11906048(void);
extern "C" void LAB_11906084(void);
extern "C" void LAB_119060c8(void);
extern "C" void LAB_1190610c(void);
extern "C" void LAB_11906164(void);
extern "C" void LAB_119061c0(void);
extern "C" void LAB_119061cc(void);
extern "C" void LAB_119061d8(void);
extern "C" void LAB_119061fc(void);
extern "C" void LAB_11906258(void);
extern "C" void LAB_11906264(void);
extern "C" void LAB_11906270(void);
extern "C" void LAB_119062ac(void);
extern "C" void LAB_11906308(void);
extern "C" void LAB_11906314(void);
extern "C" void LAB_11906320(void);
extern "C" void LAB_11906344(void);
extern "C" void LAB_119063a0(void);
extern "C" void LAB_119063ac(void);
extern "C" void LAB_119063b8(void);
extern "C" void LAB_119063dc(void);
extern "C" void LAB_11906424(void);
extern "C" void LAB_11906460(void);
extern "C" void LAB_1190646c(void);
extern "C" void LAB_1190660c(void);
extern "C" void LAB_1190665c(void);
extern "C" void LAB_119066b0(void);
extern "C" void LAB_1190670c(void);
extern "C" void LAB_11906780(void);
extern "C" void LAB_11906800(void);
extern "C" void LAB_11906878(void);
extern "C" void LAB_119068e0(void);
extern "C" void LAB_11906948(void);
extern "C" void LAB_119069cc(void);
extern "C" void LAB_11906a2c(void);
extern "C" void LAB_11906a7c(void);
extern "C" void LAB_11906b60(void);
extern "C" void LAB_11906bbc(void);
extern "C" void LAB_11906bc8(void);
extern "C" void LAB_11906bd4(void);
extern "C" void LAB_11906bf8(void);
extern "C" void LAB_11906c54(void);
extern "C" void LAB_11906c60(void);
extern "C" void LAB_11906c6c(void);
extern "C" void LAB_11906c90(void);
extern "C" void LAB_11906cec(void);
extern "C" void LAB_11906cf8(void);
extern "C" void LAB_11906d04(void);
extern "C" void LAB_11906e8c(void);
extern "C" void LAB_11906ee8(void);
extern "C" void LAB_11906ef4(void);
extern "C" void LAB_11906f00(void);
extern "C" void LAB_11906f3c(void);
extern "C" void LAB_11906f98(void);
extern "C" void LAB_11906fa4(void);
extern "C" void LAB_11906fb0(void);
extern "C" void LAB_11906fe0(void);
extern "C" void LAB_1190703c(void);
extern "C" void LAB_11907048(void);
extern "C" void LAB_11907054(void);
extern "C" void LAB_1190708c(void);
extern "C" void LAB_119070e8(void);
extern "C" void LAB_119070f4(void);
extern "C" void LAB_11907100(void);
extern "C" void LAB_11907124(void);
extern "C" void LAB_11907180(void);
extern "C" void LAB_1190718c(void);
extern "C" void LAB_11907198(void);
extern "C" void LAB_119071bc(void);
extern "C" void LAB_11907218(void);
extern "C" void LAB_11907224(void);
extern "C" void LAB_11907230(void);
extern "C" void LAB_11907254(void);
extern "C" void LAB_119072b0(void);
extern "C" void LAB_119072bc(void);
extern "C" void LAB_119072c8(void);
extern "C" void LAB_119072ec(void);
extern "C" void LAB_11907348(void);
extern "C" void LAB_11907354(void);
extern "C" void LAB_11907360(void);
extern "C" void LAB_119073bc(void);
extern "C" void LAB_11907418(void);
extern "C" void LAB_11907424(void);
extern "C" void LAB_11907430(void);
extern "C" void LAB_11907598(void);
extern "C" void LAB_119075ec(void);
extern "C" void LAB_119075f8(void);
extern "C" void LAB_11907604(void);
extern "C" void LAB_11907640(void);
extern "C" void LAB_11907680(void);
extern "C" void LAB_119076c8(void);
extern "C" void LAB_11907714(void);
extern "C" void LAB_11907760(void);
extern "C" void LAB_119077b4(void);
extern "C" void LAB_11907808(void);
extern "C" void LAB_1190785c(void);
extern "C" void LAB_119078c4(void);
extern "C" void LAB_11907920(void);
extern "C" void LAB_1190792c(void);
extern "C" void LAB_11907938(void);
extern "C" void LAB_1190795c(void);
extern "C" void LAB_119079b8(void);
extern "C" void LAB_119079c4(void);
extern "C" void LAB_119079d0(void);
extern "C" void LAB_11907b54(void);
extern "C" void LAB_11907bb0(void);
extern "C" void LAB_11907bbc(void);
extern "C" void LAB_11907bc8(void);
extern "C" void LAB_11907c1c(void);
extern "C" void LAB_11907c78(void);
extern "C" void LAB_11907c84(void);
extern "C" void LAB_11907c90(void);
extern "C" void LAB_11907cd4(void);
extern "C" void LAB_11907d30(void);
extern "C" void LAB_11907d3c(void);
extern "C" void LAB_11907d48(void);
extern "C" void LAB_11907d8c(void);
extern "C" void LAB_11907de8(void);
extern "C" void LAB_11907df4(void);
extern "C" void LAB_11907e00(void);
extern "C" void LAB_11907e30(void);
extern "C" void LAB_11907e8c(void);
extern "C" void LAB_11907e98(void);
extern "C" void LAB_11907ea4(void);
extern "C" void LAB_11907ed8(void);
extern "C" void LAB_11907f34(void);
extern "C" void LAB_11907f40(void);
extern "C" void LAB_11907f4c(void);
extern "C" void LAB_11907f84(void);
extern "C" void LAB_11907fe0(void);
extern "C" void LAB_11907fec(void);
extern "C" void LAB_11907ff8(void);
extern "C" void LAB_11908058(void);
extern "C" void LAB_119080ac(void);
extern "C" void LAB_119080b8(void);
extern "C" void LAB_119080c4(void);
extern "C" void LAB_11908100(void);
extern "C" void LAB_1190813c(void);
extern "C" void LAB_1190817c(void);
extern "C" void LAB_119081c0(void);
extern "C" void LAB_11908200(void);
extern "C" void LAB_11908248(void);
extern "C" void LAB_11908294(void);
extern "C" void LAB_119082f0(void);
extern "C" void LAB_119082fc(void);
extern "C" void LAB_11908308(void);
extern "C" void LAB_1190832c(void);
extern "C" void LAB_11908388(void);
extern "C" void LAB_11908394(void);
extern "C" void LAB_119083a0(void);
extern "C" void LAB_119084d4(void);
extern "C" void LAB_11908530(void);
extern "C" void LAB_1190853c(void);
extern "C" void LAB_11908548(void);
extern "C" void LAB_1190856c(void);
extern "C" void LAB_119085c8(void);
extern "C" void LAB_119085d4(void);
extern "C" void LAB_119085e0(void);
extern "C" void LAB_11908864(void);
extern "C" void LAB_119088c0(void);
extern "C" void LAB_119088cc(void);
extern "C" void LAB_119088d8(void);
extern "C" void LAB_1190891c(void);
extern "C" void LAB_11908970(void);
extern "C" void LAB_1190897c(void);
extern "C" void LAB_11908988(void);
extern "C" void LAB_119089c4(void);
extern "C" void LAB_11908a04(void);
extern "C" void LAB_11908a44(void);
extern "C" void LAB_11908a9c(void);
extern "C" void LAB_11908af8(void);
extern "C" void LAB_11908b04(void);
extern "C" void LAB_11908b10(void);
extern "C" void LAB_11908b34(void);
extern "C" void LAB_11908b90(void);
extern "C" void LAB_11908b9c(void);
extern "C" void LAB_11908ba8(void);
extern "C" void LAB_11908c0c(void);
extern "C" void LAB_11908c68(void);
extern "C" void LAB_11908c74(void);
extern "C" void LAB_11908c80(void);
extern "C" void LAB_11908cf0(void);
extern "C" void LAB_11908d4c(void);
extern "C" void LAB_11908d58(void);
extern "C" void LAB_11908d64(void);
extern "C" void LAB_11908f40(void);
extern "C" void LAB_1190966c(void);
extern "C" void LAB_119096c0(void);
extern "C" void LAB_119096cc(void);
extern "C" void LAB_119096d8(void);
extern "C" void LAB_11909714(void);
extern "C" void LAB_1190975c(void);
extern "C" void LAB_119097b8(void);
extern "C" void LAB_11909810(void);
extern "C" void LAB_11909860(void);
extern "C" void LAB_119098b0(void);
extern "C" void LAB_11909900(void);
extern "C" void LAB_11909944(void);
extern "C" void LAB_11909988(void);
extern "C" void LAB_119099cc(void);
extern "C" void LAB_11909a10(void);
extern "C" void LAB_11909a54(void);
extern "C" void LAB_11909a98(void);
extern "C" void LAB_11909adc(void);
extern "C" void LAB_11909b20(void);
extern "C" void LAB_11909b7c(void);
extern "C" void LAB_11909bd8(void);
extern "C" void LAB_11909be4(void);
extern "C" void LAB_11909bf0(void);
extern "C" void LAB_11909c14(void);
extern "C" void LAB_11909c70(void);
extern "C" void LAB_11909c7c(void);
extern "C" void LAB_11909c88(void);
extern "C" void LAB_11909d44(void);
extern "C" void LAB_11909da0(void);
extern "C" void LAB_11909dac(void);
extern "C" void LAB_11909db8(void);
extern "C" void LAB_11909dfc(void);
extern "C" void LAB_11909e58(void);
extern "C" void LAB_11909e64(void);
extern "C" void LAB_11909e70(void);
extern "C" void LAB_11909e94(void);
extern "C" void LAB_11909ef0(void);
extern "C" void LAB_11909efc(void);
extern "C" void LAB_11909f08(void);
extern "C" void LAB_11909f40(void);
extern "C" void LAB_11909f9c(void);
extern "C" void LAB_11909fa8(void);
extern "C" void LAB_11909fb4(void);
extern "C" void LAB_11909fe0(void);
extern "C" void LAB_1190a03c(void);
extern "C" void LAB_1190a048(void);
extern "C" void LAB_1190a054(void);
extern "C" void LAB_1190a088(void);
extern "C" void LAB_1190a0e4(void);
extern "C" void LAB_1190a0f0(void);
extern "C" void LAB_1190a0fc(void);
extern "C" void LAB_1190a154(void);
extern "C" void LAB_1190a1b0(void);
extern "C" void LAB_1190a1bc(void);
extern "C" void LAB_1190a1c8(void);
extern "C" void LAB_1190a22c(void);
extern "C" void LAB_1190a288(void);
extern "C" void LAB_1190a294(void);
extern "C" void LAB_1190a2a0(void);
extern "C" void LAB_1190a300(void);
extern "C" void LAB_1190a35c(void);
extern "C" void LAB_1190a368(void);
extern "C" void LAB_1190a374(void);
extern "C" void LAB_1190a3b4(void);
extern "C" void LAB_1190a410(void);
extern "C" void LAB_1190a41c(void);
extern "C" void LAB_1190a428(void);
extern "C" void LAB_1190a458(void);
extern "C" void LAB_1190a4b4(void);
extern "C" void LAB_1190a4c0(void);
extern "C" void LAB_1190a4cc(void);
extern "C" void LAB_1190a4f0(void);
extern "C" void LAB_1190a54c(void);
extern "C" void LAB_1190a558(void);
extern "C" void LAB_1190a564(void);
extern "C" void LAB_1190a588(void);
extern "C" void LAB_1190a5e4(void);
extern "C" void LAB_1190a5f0(void);
extern "C" void LAB_1190a5fc(void);
extern "C" void LAB_1190a63c(void);
extern "C" void LAB_1190a698(void);
extern "C" void LAB_1190a6a4(void);
extern "C" void LAB_1190a6b0(void);
extern "C" void LAB_1190a7a0(void);
extern "C" void LAB_1190a82c(void);
extern "C" void LAB_1190a964(void);
extern "C" void LAB_1190aa08(void);
extern "C" void LAB_1190aa50(void);
extern "C" void LAB_1190ac70(void);
extern "C" void LAB_1190ae78(void);
extern "C" void LAB_1190b038(void);
extern "C" void LAB_1190c5a0(void);
extern "C" void LAB_1190d9c8(void);
extern "C" void LAB_1190da10(void);
extern "C" void LAB_1190da4c(void);
extern "C" void LAB_1190da58(void);
extern "C" void LAB_1190da6c(void);
extern "C" void LAB_1190dab4(void);
extern "C" void LAB_1190daf0(void);
extern "C" void LAB_1190dafc(void);
extern "C" void LAB_1190ddc4(void);
extern "C" void LAB_1190de58(void);
extern "C" void LAB_1190dfa4(void);
extern "C" void LAB_1190dfc0(void);
extern "C" void LAB_1190dfe8(void);
extern "C" void LAB_1190e010(void);
extern "C" void LAB_1190e038(void);
extern "C" void LAB_1190e054(void);
extern "C" void LAB_1190e07c(void);
extern "C" void LAB_1190e0a4(void);
extern "C" void LAB_1190e0cc(void);
extern "C" void LAB_1190e0f4(void);
extern "C" void LAB_1190e124(void);
extern "C" void LAB_1190e154(void);
extern "C" void LAB_1190e198(void);
extern "C" void LAB_1190e244(void);
extern "C" void LAB_1190e298(void);
extern "C" void LAB_12119c20(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a490c(void);
extern "C" void LAB_121a4910(void);
extern "C" void LAB_121a4914(void);
extern "C" void LAB_121a4918(void);
extern "C" void LAB_121a491c(void);
extern "C" void LAB_121a4920(void);
extern "C" void LAB_121a4924(void);
extern "C" void LAB_121a4928(void);
extern "C" void LAB_121a492c(void);
extern "C" void LAB_121a4930(void);
extern "C" void LAB_121a4934(void);
extern "C" void LAB_121a4938(void);
extern "C" void LAB_121a493c(void);
extern "C" void LAB_121a4940(void);
extern "C" void LAB_121a4944(void);
extern "C" void LAB_121a4948(void);
extern "C" void LAB_121a494c(void);
extern "C" void LAB_121a4950(void);
extern "C" void LAB_121a4954(void);
extern "C" void LAB_121a4958(void);
extern "C" void LAB_121a495c(void);
extern "C" void LAB_121a4960(void);
extern "C" void LAB_121a4964(void);
extern "C" void LAB_121a4968(void);
extern "C" void LAB_121a496c(void);
extern "C" void LAB_121a4970(void);
extern "C" void LAB_121a4974(void);
extern "C" void LAB_121a4978(void);
extern "C" void LAB_121a497c(void);
extern "C" void LAB_121a4980(void);
extern "C" void LAB_121a4984(void);
extern "C" void LAB_121a4988(void);
extern "C" void LAB_121a498c(void);
extern "C" void LAB_121a4990(void);
extern "C" void LAB_121a4994(void);
extern "C" void LAB_121a4998(void);
extern "C" void LAB_121a499c(void);
extern "C" void LAB_121a4a0c(void);
extern "C" void LAB_121a4a10(void);
extern "C" void LAB_121a4a14(void);
extern "C" void LAB_121a4a38(void);
extern "C" void LAB_121a4a3c(void);
extern "C" void LAB_121a4a40(void);
extern "C" void LAB_121a4a44(void);
extern "C" void LAB_121a4a48(void);
extern "C" void LAB_121a4a4c(void);
extern "C" void LAB_121a4a50(void);
extern "C" void LAB_121a4a54(void);
extern "C" void LAB_121a4a74(void);
extern "C" void LAB_121a4a78(void);
extern "C" void LAB_121a4a7c(void);
extern "C" void LAB_121a4a80(void);
extern "C" void LAB_121a4a84(void);
extern "C" void LAB_121a4ae8(void);
extern "C" void LAB_121a4aec(void);
extern "C" void LAB_121a4af0(void);
extern "C" void LAB_121a4b0c(void);
extern "C" void LAB_121a4b10(void);
extern "C" void LAB_121a4b14(void);
extern "C" void LAB_121a4b64(void);
extern "C" void LAB_121a4b68(void);
extern "C" void LAB_121a4b6c(void);
extern "C" void LAB_121a4b70(void);
extern "C" void LAB_121a4b74(void);
extern "C" void LAB_121a4b78(void);
extern "C" void LAB_121a4b7c(void);
extern "C" void LAB_121a4b80(void);
extern "C" void LAB_121a4b84(void);
extern "C" void LAB_121a4b88(void);
extern "C" void LAB_121a4b8c(void);
extern "C" void LAB_121a4b90(void);
extern "C" void LAB_121a4b94(void);
extern "C" void LAB_121a4b98(void);
extern "C" void LAB_121a4c0c(void);
extern "C" void LAB_121a4c10(void);
extern "C" void LAB_121a4c14(void);
extern "C" void LAB_121a4c18(void);
extern "C" void LAB_121a4c1c(void);
extern "C" void LAB_121a4c3c(void);
extern "C" void LAB_121a4c40(void);
extern "C" void LAB_121a4c44(void);
extern "C" void LAB_121a4c48(void);
extern "C" void LAB_121a4c4c(void);
extern "C" void LAB_121a4c50(void);
extern "C" void LAB_121a4c54(void);
extern "C" void LAB_121a4c58(void);
extern "C" void LAB_121a4c5c(void);
extern "C" void LAB_121a4c60(void);
extern "C" void LAB_121a4c64(void);
extern "C" void LAB_121a4c84(void);
extern "C" void LAB_121a4c88(void);
extern "C" void LAB_121a4c8c(void);
extern "C" void LAB_121a4ca4(void);
extern "C" void LAB_121a4ca8(void);
extern "C" void LAB_121a4cac(void);
extern "C" void LAB_121a4cb0(void);
extern "C" void LAB_121a4cb4(void);
extern "C" void LAB_121a4cb8(void);
extern "C" void LAB_121a4cbc(void);
extern "C" void LAB_121a4cc0(void);
extern "C" void LAB_121a4cc4(void);
extern "C" void LAB_121a4cc8(void);
extern "C" void LAB_121a4ccc(void);
extern "C" void LAB_121a4cd0(void);
extern "C" void LAB_121a4d28(void);
extern "C" void LAB_121a4d2c(void);
extern "C" void LAB_121a4d30(void);
extern "C" void LAB_121a4d34(void);
extern "C" void LAB_121a4d38(void);
extern "C" void LAB_121a4d3c(void);
extern "C" void LAB_121a4d40(void);
extern "C" void LAB_121a4d44(void);
extern "C" void LAB_121a4d64(void);
extern "C" void LAB_121a4d68(void);
extern "C" void LAB_121a4d6c(void);
extern "C" void LAB_121a4d70(void);
extern "C" void LAB_121a4d74(void);
extern "C" void LAB_121a4d78(void);
extern "C" void LAB_121a4d94(void);
extern "C" void LAB_121a4d98(void);
extern "C" void LAB_121a4d9c(void);
extern "C" void LAB_121a4dbc(void);
extern "C" void LAB_121a4dcc(void);
extern "C" void LAB_121a4dd0(void);
extern "C" void LAB_121a4dd4(void);
extern "C" void LAB_121a4dd8(void);
extern "C" void LAB_121a4ddc(void);
extern "C" void LAB_121a4de0(void);
extern "C" void LAB_121a4de4(void);
extern "C" void LAB_121a4de8(void);
extern "C" void LAB_121a4dec(void);
extern "C" void LAB_121a4df0(void);
extern "C" void LAB_121a4df4(void);
extern "C" void LAB_121a4df8(void);
extern "C" void LAB_121a4dfc(void);
extern "C" void LAB_121a4e00(void);
extern "C" void LAB_121a4e04(void);
extern "C" void LAB_122fc888(void);


struct Recovered_Bulk { char _pad; SCStr * __thiscall m_FUN_10ad6ed0(SCStr *param_2); template<class... A> int m_FUN_10ad6ed0(A...); void __thiscall m_FUN_10ae5f70(SCStr *param_2); template<class... A> int m_FUN_10ae5f70(A...); undefined4 * __thiscall m_FUN_10ae5fe0(undefined4 param_2); template<class... A> int m_FUN_10ae5fe0(A...); undefined4 * __thiscall m_FUN_10ae6300(undefined4 param_2); template<class... A> int m_FUN_10ae6300(A...); undefined4 * __thiscall m_FUN_10ae6450(undefined4 param_2); template<class... A> int m_FUN_10ae6450(A...); undefined4 * __thiscall m_FUN_10ae65a0(undefined4 param_2); template<class... A> int m_FUN_10ae65a0(A...); undefined4 * __thiscall m_FUN_10ae66f0(undefined4 param_2); template<class... A> int m_FUN_10ae66f0(A...); undefined4 * __thiscall m_FUN_10ae6a90(undefined4 *param_2); template<class... A> int m_FUN_10ae6a90(A...); undefined4 * __thiscall m_FUN_10ae9010(undefined4 param_2); template<class... A> int m_FUN_10ae9010(A...); undefined4 * __thiscall m_FUN_10ae97e0(undefined4 param_2); template<class... A> int m_FUN_10ae97e0(A...); undefined4 * __thiscall m_FUN_10ae9930(undefined4 param_2); template<class... A> int m_FUN_10ae9930(A...); undefined4 * __thiscall m_FUN_10ae9a80(undefined4 param_2); template<class... A> int m_FUN_10ae9a80(A...); undefined4 * __thiscall m_FUN_10ae9bd0(undefined4 param_2); template<class... A> int m_FUN_10ae9bd0(A...); undefined4 * __thiscall m_FUN_10ae9d20(undefined4 param_2); template<class... A> int m_FUN_10ae9d20(A...); undefined4 * __thiscall m_FUN_10ae9e70(undefined4 param_2); template<class... A> int m_FUN_10ae9e70(A...); undefined4 * __thiscall m_FUN_10ae9fc0(undefined4 param_2); template<class... A> int m_FUN_10ae9fc0(A...); undefined4 * __thiscall m_FUN_10aea110(undefined4 param_2); template<class... A> int m_FUN_10aea110(A...); undefined4 * __thiscall m_FUN_10aea260(undefined4 param_2); template<class... A> int m_FUN_10aea260(A...); undefined4 * __thiscall m_FUN_10af35c0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af35c0(A...); undefined4 * __thiscall m_FUN_10af3620(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10af3620(A...); undefined4 * __thiscall m_FUN_10af3800(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10af3800(A...); undefined4 * __thiscall m_FUN_10af3840(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10af3840(A...); undefined4 * __thiscall m_FUN_10af3990(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10af3990(A...); undefined4 * __thiscall m_FUN_10af39c0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af39c0(A...); undefined4 * __thiscall m_FUN_10af39f0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af39f0(A...); undefined4 * __thiscall m_FUN_10af3a20(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3a20(A...); undefined4 * __thiscall m_FUN_10af3a50(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3a50(A...); undefined4 * __thiscall m_FUN_10af3a80(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3a80(A...); undefined4 * __thiscall m_FUN_10af3ab0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3ab0(A...); undefined4 * __thiscall m_FUN_10af3ae0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3ae0(A...); undefined4 * __thiscall m_FUN_10af3b10(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3b10(A...); undefined4 * __thiscall m_FUN_10af3b40(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3b40(A...); undefined4 * __thiscall m_FUN_10af3b70(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3b70(A...); undefined4 * __thiscall m_FUN_10af3ba0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3ba0(A...); undefined4 * __thiscall m_FUN_10af3bd0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3bd0(A...); undefined4 * __thiscall m_FUN_10af3c00(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3c00(A...); undefined4 * __thiscall m_FUN_10af3c30(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3c30(A...); undefined4 * __thiscall m_FUN_10af3c60(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3c60(A...); undefined4 * __thiscall m_FUN_10af3c90(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3c90(A...); undefined4 * __thiscall m_FUN_10af3cc0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10af3cc0(A...); undefined4 * __thiscall m_FUN_10af3cf0(undefined4 param_2); template<class... A> int m_FUN_10af3cf0(A...); undefined4 * __thiscall m_FUN_10af3d00(undefined4 param_2); template<class... A> int m_FUN_10af3d00(A...); void __thiscall m_FUN_10af3ee0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10af3ee0(A...); int * __thiscall m_FUN_10af4770(int *param_2,int *param_3); template<class... A> int m_FUN_10af4770(A...); undefined4 * __thiscall m_FUN_10af50a0(undefined4 param_2); template<class... A> int m_FUN_10af50a0(A...); undefined4 * __thiscall m_FUN_10af55a0(undefined4 param_2); template<class... A> int m_FUN_10af55a0(A...); undefined4 * __thiscall m_FUN_10af55c0(undefined4 param_2); template<class... A> int m_FUN_10af55c0(A...); undefined4 * __thiscall m_FUN_10af5660(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af5660(A...); undefined4 * __thiscall m_FUN_10af5670(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af5670(A...); undefined4 * __thiscall m_FUN_10af5680(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10af5680(A...); undefined4 * __thiscall m_FUN_10af56c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af56c0(A...); undefined4 * __thiscall m_FUN_10af56d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af56d0(A...); undefined4 * __thiscall m_FUN_10af57e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af57e0(A...); undefined4 * __thiscall m_FUN_10af57f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af57f0(A...); undefined4 * __thiscall m_FUN_10af5860(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10af5860(A...); undefined4 * __thiscall m_FUN_10af5b70(undefined4 *param_2); template<class... A> int m_FUN_10af5b70(A...); undefined4 * __thiscall m_FUN_10af5ba0(undefined4 *param_2); template<class... A> int m_FUN_10af5ba0(A...); undefined4 * __thiscall m_FUN_10af5bd0(undefined4 *param_2); template<class... A> int m_FUN_10af5bd0(A...); undefined4 * __thiscall m_FUN_10af5d80(undefined4 param_2); template<class... A> int m_FUN_10af5d80(A...); undefined4 * __thiscall m_FUN_10af5ed0(undefined4 param_2); template<class... A> int m_FUN_10af5ed0(A...); undefined4 * __thiscall m_FUN_10af61c0(undefined4 param_2); template<class... A> int m_FUN_10af61c0(A...); undefined4 * __thiscall m_FUN_10af6310(undefined4 param_2); template<class... A> int m_FUN_10af6310(A...); bool __thiscall m_FUN_10af6ea0(int *param_2); template<class... A> int m_FUN_10af6ea0(A...); bool __thiscall m_FUN_10af6ec0(int *param_2); template<class... A> int m_FUN_10af6ec0(A...); bool __thiscall m_FUN_10af6ee0(int *param_2); template<class... A> int m_FUN_10af6ee0(A...); bool __thiscall m_FUN_10af6f00(int *param_2); template<class... A> int m_FUN_10af6f00(A...); undefined4 * __thiscall m_FUN_10af7090(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af7090(A...); undefined4 * __thiscall m_FUN_10af7120(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af7120(A...); undefined4 * __thiscall m_FUN_10af7140(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10af7140(A...); void __thiscall m_FUN_10af8170(int param_2); template<class... A> int m_FUN_10af8170(A...); void __thiscall m_FUN_10af81e0(int param_2); template<class... A> int m_FUN_10af81e0(A...); void __thiscall m_FUN_10af8350(int *param_2); template<class... A> int m_FUN_10af8350(A...); void __thiscall m_FUN_10af83c0(int *param_2); template<class... A> int m_FUN_10af83c0(A...); void __thiscall m_FUN_10af85d0(undefined4 *param_2); template<class... A> int m_FUN_10af85d0(A...); void __thiscall m_FUN_10af85e0(undefined4 *param_2); template<class... A> int m_FUN_10af85e0(A...); void __thiscall m_FUN_10af85f0(undefined4 *param_2); template<class... A> int m_FUN_10af85f0(A...); void __thiscall m_FUN_10af8d00(undefined4 *param_2); template<class... A> int m_FUN_10af8d00(A...); void __thiscall m_FUN_10af8d10(undefined4 *param_2); template<class... A> int m_FUN_10af8d10(A...); void __thiscall m_FUN_10af8d20(undefined4 *param_2); template<class... A> int m_FUN_10af8d20(A...); undefined4 __thiscall m_FUN_10afd550(undefined4 param_2); template<class... A> int m_FUN_10afd550(A...); void __thiscall m_FUN_10aff1d0(undefined4 param_2); template<class... A> int m_FUN_10aff1d0(A...); void __thiscall m_FUN_10aff1e0(undefined4 param_2); template<class... A> int m_FUN_10aff1e0(A...); void __thiscall m_FUN_10aff1f0(undefined4 param_2); template<class... A> int m_FUN_10aff1f0(A...); undefined4 * __thiscall m_FUN_10aff250(undefined4 param_2); template<class... A> int m_FUN_10aff250(A...); undefined4 * __thiscall m_FUN_10aff570(undefined4 param_2); template<class... A> int m_FUN_10aff570(A...); undefined4 * __thiscall m_FUN_10aff890(undefined4 param_2); template<class... A> int m_FUN_10aff890(A...); undefined4 * __thiscall m_FUN_10aff9e0(undefined4 param_2); template<class... A> int m_FUN_10aff9e0(A...); undefined4 * __thiscall m_FUN_10b02b30(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b02b30(A...); undefined4 * __thiscall m_FUN_10b02c20(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b02c20(A...); undefined4 * __thiscall m_FUN_10b02d80(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b02d80(A...); undefined4 * __thiscall m_FUN_10b03cd0(undefined4 param_2); template<class... A> int m_FUN_10b03cd0(A...); undefined4 * __thiscall m_FUN_10b04100(undefined4 param_2); template<class... A> int m_FUN_10b04100(A...); undefined4 * __thiscall m_FUN_10b04160(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b04160(A...); undefined4 * __thiscall m_FUN_10b041f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b041f0(A...); undefined4 * __thiscall m_FUN_10b04220(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10b04220(A...); undefined4 * __thiscall m_FUN_10b04410(undefined4 param_2); template<class... A> int m_FUN_10b04410(A...); undefined4 * __thiscall m_FUN_10b04770(undefined4 param_2); template<class... A> int m_FUN_10b04770(A...); int __thiscall m_FUN_10b05180(int param_2); template<class... A> int m_FUN_10b05180(A...); uint __thiscall m_FUN_10b057d0(uint param_2); template<class... A> int m_FUN_10b057d0(A...); void __thiscall m_FUN_10b09840(undefined1 param_2); template<class... A> int m_FUN_10b09840(A...); undefined4 * __thiscall m_FUN_10b09ef0(undefined4 param_2); template<class... A> int m_FUN_10b09ef0(A...); undefined4 * __thiscall m_FUN_10b0af90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10b0af90(A...); undefined4 * __thiscall m_FUN_10b0b360(undefined4 param_2); template<class... A> int m_FUN_10b0b360(A...); undefined4 * __thiscall m_FUN_10b0b4b0(undefined4 param_2); template<class... A> int m_FUN_10b0b4b0(A...); undefined4 * __thiscall m_FUN_10b0b620(undefined4 param_2); template<class... A> int m_FUN_10b0b620(A...); undefined4 * __thiscall m_FUN_10b0b980(undefined4 param_2); template<class... A> int m_FUN_10b0b980(A...); undefined4 * __thiscall m_FUN_10b0bad0(undefined4 param_2); template<class... A> int m_FUN_10b0bad0(A...); undefined4 * __thiscall m_FUN_10b0be30(undefined4 param_2); template<class... A> int m_FUN_10b0be30(A...); undefined4 * __thiscall m_FUN_10b0bfa0(undefined4 param_2); template<class... A> int m_FUN_10b0bfa0(A...); undefined4 * __thiscall m_FUN_10b0c100(undefined4 param_2); template<class... A> int m_FUN_10b0c100(A...); undefined4 * __thiscall m_FUN_10b0c250(undefined4 param_2); template<class... A> int m_FUN_10b0c250(A...); undefined4 * __thiscall m_FUN_10b0c3a0(undefined4 param_2); template<class... A> int m_FUN_10b0c3a0(A...); undefined4 * __thiscall m_FUN_10b0c520(undefined4 param_2); template<class... A> int m_FUN_10b0c520(A...); SCStr * __thiscall m_FUN_10b149d0(SCStr *param_2); template<class... A> int m_FUN_10b149d0(A...); int * __thiscall m_FUN_10b18c00(int *param_2); template<class... A> int m_FUN_10b18c00(A...); SCStr * __thiscall m_FUN_10b18d60(SCStr *param_2); template<class... A> int m_FUN_10b18d60(A...); void __thiscall m_FUN_10b1a4b0(undefined2 param_2); template<class... A> int m_FUN_10b1a4b0(A...); void __thiscall m_FUN_10b1a5f0(undefined4 param_2); template<class... A> int m_FUN_10b1a5f0(A...); void __thiscall m_FUN_10b1a600(undefined1 param_2); template<class... A> int m_FUN_10b1a600(A...); undefined4 * __thiscall m_FUN_10b1a7a0(undefined4 param_2); template<class... A> int m_FUN_10b1a7a0(A...); undefined4 * __thiscall m_FUN_10b1ae70(undefined4 param_2); template<class... A> int m_FUN_10b1ae70(A...); undefined4 * __thiscall m_FUN_10b1afe0(undefined4 param_2); template<class... A> int m_FUN_10b1afe0(A...); undefined4 * __thiscall m_FUN_10b1b130(undefined4 param_2); template<class... A> int m_FUN_10b1b130(A...); undefined4 * __thiscall m_FUN_10b1b280(undefined4 param_2); template<class... A> int m_FUN_10b1b280(A...); undefined4 * __thiscall m_FUN_10b1b3d0(undefined4 param_2); template<class... A> int m_FUN_10b1b3d0(A...); undefined4 * __thiscall m_FUN_10b1b520(undefined4 param_2); template<class... A> int m_FUN_10b1b520(A...); undefined4 * __thiscall m_FUN_10b224b0(undefined4 param_2); template<class... A> int m_FUN_10b224b0(A...); undefined4 * __thiscall m_FUN_10b23020(undefined4 param_2); template<class... A> int m_FUN_10b23020(A...); undefined4 * __thiscall m_FUN_10b23170(undefined4 param_2); template<class... A> int m_FUN_10b23170(A...); undefined4 * __thiscall m_FUN_10b232c0(undefined4 param_2); template<class... A> int m_FUN_10b232c0(A...); undefined4 * __thiscall m_FUN_10b23410(undefined4 param_2); template<class... A> int m_FUN_10b23410(A...); undefined4 * __thiscall m_FUN_10b23560(undefined4 param_2); template<class... A> int m_FUN_10b23560(A...); undefined4 * __thiscall m_FUN_10b236b0(undefined4 param_2); template<class... A> int m_FUN_10b236b0(A...); undefined4 * __thiscall m_FUN_10b23800(undefined4 param_2); template<class... A> int m_FUN_10b23800(A...); undefined4 * __thiscall m_FUN_10b23950(undefined4 param_2); template<class... A> int m_FUN_10b23950(A...); undefined4 * __thiscall m_FUN_10b23ab0(undefined4 param_2); template<class... A> int m_FUN_10b23ab0(A...); undefined4 * __thiscall m_FUN_10b23c00(undefined4 param_2); template<class... A> int m_FUN_10b23c00(A...); undefined4 * __thiscall m_FUN_10b23d50(undefined4 param_2); template<class... A> int m_FUN_10b23d50(A...); undefined4 * __thiscall m_FUN_10b23ea0(undefined4 param_2); template<class... A> int m_FUN_10b23ea0(A...); void __thiscall m_FUN_10b2e490(undefined4 param_2); template<class... A> int m_FUN_10b2e490(A...); undefined4 * __thiscall m_FUN_10b2e500(undefined4 param_2); template<class... A> int m_FUN_10b2e500(A...); undefined4 * __thiscall m_FUN_10b2e820(undefined4 param_2); template<class... A> int m_FUN_10b2e820(A...); undefined4 * __thiscall m_FUN_10b2e970(undefined4 param_2); template<class... A> int m_FUN_10b2e970(A...); undefined4 * __thiscall m_FUN_10b2eac0(undefined4 param_2); template<class... A> int m_FUN_10b2eac0(A...); undefined4 * __thiscall m_FUN_10b2ec20(undefined4 param_2); template<class... A> int m_FUN_10b2ec20(A...); SCStr * __thiscall m_FUN_10b30c50(SCStr *param_2); template<class... A> int m_FUN_10b30c50(A...); void __thiscall m_FUN_10b31c60(undefined4 param_2); template<class... A> int m_FUN_10b31c60(A...); int * __thiscall m_FUN_10b31c70(int *param_2); template<class... A> int m_FUN_10b31c70(A...); int * __thiscall m_FUN_10b31c90(int *param_2); template<class... A> int m_FUN_10b31c90(A...); undefined4 * __thiscall m_FUN_10b31df0(undefined4 param_2); template<class... A> int m_FUN_10b31df0(A...); undefined4 * __thiscall m_FUN_10b32a90(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10b32a90(A...); undefined4 * __thiscall m_FUN_10b32c70(int *param_2); template<class... A> int m_FUN_10b32c70(A...); undefined4 * __thiscall m_FUN_10b330d0(undefined4 param_2); template<class... A> int m_FUN_10b330d0(A...); undefined4 * __thiscall m_FUN_10b33290(undefined4 param_2); template<class... A> int m_FUN_10b33290(A...); undefined4 * __thiscall m_FUN_10b333e0(undefined4 param_2); template<class... A> int m_FUN_10b333e0(A...); undefined4 * __thiscall m_FUN_10b33530(undefined4 param_2); template<class... A> int m_FUN_10b33530(A...); undefined4 * __thiscall m_FUN_10b33680(undefined4 param_2); template<class... A> int m_FUN_10b33680(A...); undefined4 * __thiscall m_FUN_10b337d0(undefined4 param_2); template<class... A> int m_FUN_10b337d0(A...); undefined4 * __thiscall m_FUN_10b33920(undefined4 param_2); template<class... A> int m_FUN_10b33920(A...); undefined4 * __thiscall m_FUN_10b33a70(undefined4 param_2); template<class... A> int m_FUN_10b33a70(A...); undefined4 * __thiscall m_FUN_10b33bc0(undefined4 param_2); template<class... A> int m_FUN_10b33bc0(A...); undefined4 * __thiscall m_FUN_10b33d10(undefined4 param_2); template<class... A> int m_FUN_10b33d10(A...); undefined4 * __thiscall m_FUN_10b33e60(undefined4 param_2); template<class... A> int m_FUN_10b33e60(A...); undefined4 * __thiscall m_FUN_10b41e60(undefined4 *param_2); template<class... A> int m_FUN_10b41e60(A...); undefined4 * __thiscall m_FUN_10b41e90(undefined4 *param_2); template<class... A> int m_FUN_10b41e90(A...); undefined4 * __thiscall m_FUN_10b45ec0(undefined4 *param_2); template<class... A> int m_FUN_10b45ec0(A...); undefined4 * __thiscall m_FUN_10b45ef0(undefined4 *param_2); template<class... A> int m_FUN_10b45ef0(A...); void __thiscall m_FUN_10b48630(undefined1 param_2); template<class... A> int m_FUN_10b48630(A...); void __thiscall m_FUN_10b48640(undefined1 param_2); template<class... A> int m_FUN_10b48640(A...); void __thiscall m_FUN_10b48650(undefined1 param_2); template<class... A> int m_FUN_10b48650(A...); void __thiscall m_FUN_10b48660(undefined1 param_2); template<class... A> int m_FUN_10b48660(A...); void __thiscall m_FUN_10b48750(undefined1 param_2); template<class... A> int m_FUN_10b48750(A...); void __thiscall m_FUN_10b48860(undefined1 param_2); template<class... A> int m_FUN_10b48860(A...); undefined4 * __thiscall m_FUN_10b48900(undefined4 param_2); template<class... A> int m_FUN_10b48900(A...); undefined4 * __thiscall m_FUN_10b490d0(undefined4 param_2); template<class... A> int m_FUN_10b490d0(A...); undefined4 * __thiscall m_FUN_10b49220(undefined4 param_2); template<class... A> int m_FUN_10b49220(A...); undefined4 * __thiscall m_FUN_10b49370(undefined4 param_2); template<class... A> int m_FUN_10b49370(A...); undefined4 * __thiscall m_FUN_10b494c0(undefined4 param_2); template<class... A> int m_FUN_10b494c0(A...); undefined4 * __thiscall m_FUN_10b49610(undefined4 param_2); template<class... A> int m_FUN_10b49610(A...); undefined4 * __thiscall m_FUN_10b49760(undefined4 param_2); template<class... A> int m_FUN_10b49760(A...); undefined4 * __thiscall m_FUN_10b498c0(undefined4 param_2); template<class... A> int m_FUN_10b498c0(A...); undefined4 * __thiscall m_FUN_10b49a10(undefined4 param_2); template<class... A> int m_FUN_10b49a10(A...); undefined4 * __thiscall m_FUN_10b49b60(undefined4 param_2); template<class... A> int m_FUN_10b49b60(A...); undefined4 * __thiscall m_FUN_10b4fd90(undefined4 param_2); template<class... A> int m_FUN_10b4fd90(A...); undefined4 * __thiscall m_FUN_10b506b0(undefined4 param_2); template<class... A> int m_FUN_10b506b0(A...); undefined4 * __thiscall m_FUN_10b50800(undefined4 param_2); template<class... A> int m_FUN_10b50800(A...); undefined4 * __thiscall m_FUN_10b50b60(undefined4 param_2); template<class... A> int m_FUN_10b50b60(A...); undefined4 * __thiscall m_FUN_10b50cb0(undefined4 param_2); template<class... A> int m_FUN_10b50cb0(A...); undefined4 * __thiscall m_FUN_10b51010(undefined4 param_2); template<class... A> int m_FUN_10b51010(A...); undefined4 * __thiscall m_FUN_10b54ce0(undefined4 param_2); template<class... A> int m_FUN_10b54ce0(A...); undefined4 * __thiscall m_FUN_10b55000(undefined4 param_2); template<class... A> int m_FUN_10b55000(A...); undefined4 * __thiscall m_FUN_10b55150(undefined4 param_2); template<class... A> int m_FUN_10b55150(A...); undefined4 * __thiscall m_FUN_10b552a0(undefined4 param_2); template<class... A> int m_FUN_10b552a0(A...); undefined4 * __thiscall m_FUN_10b553f0(undefined4 param_2); template<class... A> int m_FUN_10b553f0(A...); SCStr * __thiscall m_FUN_10b59470(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b59470(A...); SCStr * __thiscall m_FUN_10b594a0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b594a0(A...); SCStr * __thiscall m_FUN_10b594d0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b594d0(A...); SCStr * __thiscall m_FUN_10b59500(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b59500(A...); SCStr * __thiscall m_FUN_10b59530(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b59530(A...); SCStr * __thiscall m_FUN_10b59560(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b59560(A...); SCStr * __thiscall m_FUN_10b59590(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b59590(A...); SCStr * __thiscall m_FUN_10b595c0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b595c0(A...); SCStr * __thiscall m_FUN_10b595f0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b595f0(A...); SCStr * __thiscall m_FUN_10b59620(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b59620(A...); SCStr * __thiscall m_FUN_10b59650(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b59650(A...); SCStr * __thiscall m_FUN_10b59680(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b59680(A...); SCStr * __thiscall m_FUN_10b596b0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b596b0(A...); SCStr * __thiscall m_FUN_10b596e0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b596e0(A...); undefined4 * __thiscall m_FUN_10b59710(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b59710(A...); SCStr * __thiscall m_FUN_10b598f0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b598f0(A...); undefined4 * __thiscall m_FUN_10b59920(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b59920(A...); SCStr * __thiscall m_FUN_10b59940(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10b59940(A...); undefined4 * __thiscall m_FUN_10b59980(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10b59980(A...); undefined4 * __thiscall m_FUN_10b5a5e0(undefined4 param_2); template<class... A> int m_FUN_10b5a5e0(A...); undefined4 * __thiscall m_FUN_10b5b440(undefined4 param_2); template<class... A> int m_FUN_10b5b440(A...); undefined4 * __thiscall m_FUN_10b5b4a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b5b4a0(A...); undefined4 * __thiscall m_FUN_10b5b4b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b5b4b0(A...); undefined4 * __thiscall m_FUN_10b5b540(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b5b540(A...); undefined4 * __thiscall m_FUN_10b5b580(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10b5b580(A...); SCStr * __thiscall m_FUN_10b5b720(SCStr *param_2); template<class... A> int m_FUN_10b5b720(A...); undefined4 * __thiscall m_FUN_10b5b750(undefined4 param_2); template<class... A> int m_FUN_10b5b750(A...); undefined4 * __thiscall m_FUN_10b5b8a0(undefined4 param_2); template<class... A> int m_FUN_10b5b8a0(A...); undefined4 * __thiscall m_FUN_10b5b9f0(undefined4 param_2); template<class... A> int m_FUN_10b5b9f0(A...); undefined4 * __thiscall m_FUN_10b5bb40(undefined4 param_2); template<class... A> int m_FUN_10b5bb40(A...); undefined4 * __thiscall m_FUN_10b5bc90(undefined4 param_2); template<class... A> int m_FUN_10b5bc90(A...); undefined4 * __thiscall m_FUN_10b5bde0(undefined4 param_2); template<class... A> int m_FUN_10b5bde0(A...); undefined4 * __thiscall m_FUN_10b5bf30(undefined4 param_2); template<class... A> int m_FUN_10b5bf30(A...); undefined4 * __thiscall m_FUN_10b5c080(undefined4 param_2); template<class... A> int m_FUN_10b5c080(A...); undefined4 * __thiscall m_FUN_10b5c1d0(undefined4 param_2); template<class... A> int m_FUN_10b5c1d0(A...); undefined4 * __thiscall m_FUN_10b5c320(undefined4 param_2); template<class... A> int m_FUN_10b5c320(A...); undefined4 * __thiscall m_FUN_10b5c470(undefined4 param_2); template<class... A> int m_FUN_10b5c470(A...); undefined4 * __thiscall m_FUN_10b5c5c0(undefined4 param_2); template<class... A> int m_FUN_10b5c5c0(A...); undefined4 * __thiscall m_FUN_10b5c710(undefined4 param_2); template<class... A> int m_FUN_10b5c710(A...); undefined4 * __thiscall m_FUN_10b5c860(undefined4 param_2); template<class... A> int m_FUN_10b5c860(A...); undefined4 * __thiscall m_FUN_10b5c9b0(undefined4 param_2); template<class... A> int m_FUN_10b5c9b0(A...); undefined4 * __thiscall m_FUN_10b5cb00(undefined4 param_2); template<class... A> int m_FUN_10b5cb00(A...); bool __thiscall m_FUN_10b5e1d0(int *param_2); template<class... A> int m_FUN_10b5e1d0(A...); bool __thiscall m_FUN_10b5e1f0(int *param_2); template<class... A> int m_FUN_10b5e1f0(A...); undefined4 * __thiscall m_FUN_10b5e360(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b5e360(A...); void __thiscall m_FUN_10b5f920(int param_2); template<class... A> int m_FUN_10b5f920(A...); void __thiscall m_FUN_10b5fa00(int *param_2); template<class... A> int m_FUN_10b5fa00(A...); void __thiscall m_FUN_10b5faf0(undefined4 *param_2); template<class... A> int m_FUN_10b5faf0(A...); void __thiscall m_FUN_10b609d0(undefined4 *param_2); template<class... A> int m_FUN_10b609d0(A...); undefined4 * __thiscall m_FUN_10b6c200(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10b6c200(A...); int * __thiscall m_FUN_10b6c230(int *param_2); template<class... A> int m_FUN_10b6c230(A...); int * __thiscall m_FUN_10b6c390(int *param_2); template<class... A> int m_FUN_10b6c390(A...); int * __thiscall m_FUN_10b6c3b0(int *param_2); template<class... A> int m_FUN_10b6c3b0(A...); int * __thiscall m_FUN_10b6c3d0(int *param_2); template<class... A> int m_FUN_10b6c3d0(A...); int * __thiscall m_FUN_10b6c3f0(int *param_2); template<class... A> int m_FUN_10b6c3f0(A...); int * __thiscall m_FUN_10b6c550(int *param_2); template<class... A> int m_FUN_10b6c550(A...); int * __thiscall m_FUN_10b6c570(int *param_2); template<class... A> int m_FUN_10b6c570(A...); int * __thiscall m_FUN_10b6c6d0(int *param_2); template<class... A> int m_FUN_10b6c6d0(A...); int * __thiscall m_FUN_10b6c960(int *param_2); template<class... A> int m_FUN_10b6c960(A...); int * __thiscall m_FUN_10b6c9d0(int *param_2); template<class... A> int m_FUN_10b6c9d0(A...); undefined4 * __thiscall m_FUN_10b6ced0(undefined4 *param_2); template<class... A> int m_FUN_10b6ced0(A...); undefined4 * __thiscall m_FUN_10b6d040(undefined4 param_2); template<class... A> int m_FUN_10b6d040(A...); int __thiscall m_FUN_10b6dae0(int param_2); template<class... A> int m_FUN_10b6dae0(A...); undefined4 * __thiscall m_FUN_10b72f60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b72f60(A...); undefined4 * __thiscall m_FUN_10b72f70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b72f70(A...); undefined4 * __thiscall m_FUN_10b72f80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b72f80(A...); undefined4 * __thiscall m_FUN_10b72f90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b72f90(A...); bool __thiscall m_FUN_10b73180(int *param_2); template<class... A> int m_FUN_10b73180(A...); bool __thiscall m_FUN_10b731a0(int *param_2); template<class... A> int m_FUN_10b731a0(A...); undefined4 * __thiscall m_FUN_10b732e0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b732e0(A...); void __thiscall m_FUN_10b73380(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b73380(A...); void __thiscall m_FUN_10b734e0(undefined4 param_2); template<class... A> int m_FUN_10b734e0(A...); void __thiscall m_FUN_10b734f0(undefined4 *param_2); template<class... A> int m_FUN_10b734f0(A...); void __thiscall m_FUN_10b73650(undefined4 *param_2); template<class... A> int m_FUN_10b73650(A...); void __thiscall m_FUN_10b73660(undefined4 *param_2); template<class... A> int m_FUN_10b73660(A...); void __thiscall m_FUN_10b75160(undefined4 *param_2); template<class... A> int m_FUN_10b75160(A...); void __thiscall m_FUN_10b75170(undefined4 *param_2); template<class... A> int m_FUN_10b75170(A...); undefined4 __thiscall m_FUN_10b75340(undefined4 param_2); template<class... A> int m_FUN_10b75340(A...); SCStr * __thiscall m_FUN_10b75510(SCStr *param_2); template<class... A> int m_FUN_10b75510(A...); SCStr * __thiscall m_FUN_10b75530(SCStr *param_2); template<class... A> int m_FUN_10b75530(A...); SCStr * __thiscall m_FUN_10b75550(SCStr *param_2); template<class... A> int m_FUN_10b75550(A...); SCStr * __thiscall m_FUN_10b75820(SCStr *param_2); template<class... A> int m_FUN_10b75820(A...); undefined4 __thiscall m_FUN_10b75890(undefined4 param_2); template<class... A> int m_FUN_10b75890(A...); int * __thiscall m_FUN_10b759e0(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b759e0(A...); undefined4 * __thiscall m_FUN_10b75a30(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b75a30(A...); undefined4 * __thiscall m_FUN_10b75b10(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b75b10(A...); int * __thiscall m_FUN_10b75b30(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10b75b30(A...); int * __thiscall m_FUN_10b75b80(int *param_2); template<class... A> int m_FUN_10b75b80(A...); undefined4 * __thiscall m_FUN_10b75fe0(undefined4 *param_2); template<class... A> int m_FUN_10b75fe0(A...); undefined4 * __thiscall m_FUN_10b76050(undefined4 param_2); template<class... A> int m_FUN_10b76050(A...); undefined4 * __thiscall m_FUN_10b76070(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b76070(A...); undefined4 * __thiscall m_FUN_10b76080(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b76080(A...); undefined4 * __thiscall m_FUN_10b76680(undefined4 param_2); template<class... A> int m_FUN_10b76680(A...); int * __thiscall m_FUN_10b76d30(int *param_2); template<class... A> int m_FUN_10b76d30(A...); bool __thiscall m_FUN_10b76e00(int *param_2); template<class... A> int m_FUN_10b76e00(A...); bool __thiscall m_FUN_10b76e20(int *param_2); template<class... A> int m_FUN_10b76e20(A...); bool __thiscall m_FUN_10b76e40(int *param_2); template<class... A> int m_FUN_10b76e40(A...); bool __thiscall m_FUN_10b76e60(int *param_2); template<class... A> int m_FUN_10b76e60(A...); int * __thiscall m_FUN_10b777f0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10b777f0(A...); void __thiscall m_FUN_10b779c0(undefined4 *param_2); template<class... A> int m_FUN_10b779c0(A...); void __thiscall m_FUN_10b779e0(undefined4 *param_2); template<class... A> int m_FUN_10b779e0(A...); void __thiscall m_FUN_10b779f0(undefined4 *param_2); template<class... A> int m_FUN_10b779f0(A...); void __thiscall m_FUN_10b77a40(undefined4 *param_2); template<class... A> int m_FUN_10b77a40(A...); void __thiscall m_FUN_10b77a60(undefined4 *param_2); template<class... A> int m_FUN_10b77a60(A...); uint __thiscall m_FUN_10b77a70(undefined4 *param_2); template<class... A> int m_FUN_10b77a70(A...); void __thiscall m_FUN_10b77ee0(undefined4 *param_2); template<class... A> int m_FUN_10b77ee0(A...); void __thiscall m_FUN_10b77ef0(undefined4 *param_2); template<class... A> int m_FUN_10b77ef0(A...); int * __thiscall m_FUN_10b79aa0(int *param_2); template<class... A> int m_FUN_10b79aa0(A...); int * __thiscall m_FUN_10b7b6f0(int *param_2); template<class... A> int m_FUN_10b7b6f0(A...); int * __thiscall m_FUN_10b7b7f0(int *param_2); template<class... A> int m_FUN_10b7b7f0(A...); int * __thiscall m_FUN_10b7b830(int *param_2); template<class... A> int m_FUN_10b7b830(A...); int * __thiscall m_FUN_10b7b850(int *param_2); template<class... A> int m_FUN_10b7b850(A...); int * __thiscall m_FUN_10b7b950(int *param_2); template<class... A> int m_FUN_10b7b950(A...); int * __thiscall m_FUN_10b7b9c0(int *param_2); template<class... A> int m_FUN_10b7b9c0(A...); int * __thiscall m_FUN_10b7ba30(int *param_2); template<class... A> int m_FUN_10b7ba30(A...); undefined4 * __thiscall m_FUN_10b7bdd0(undefined4 param_2); template<class... A> int m_FUN_10b7bdd0(A...); undefined4 * __thiscall m_FUN_10b7be10(undefined4 param_2); template<class... A> int m_FUN_10b7be10(A...); undefined4 * __thiscall m_FUN_10b7be50(undefined4 param_2); template<class... A> int m_FUN_10b7be50(A...); undefined4 * __thiscall m_FUN_10b7be90(undefined4 param_2); template<class... A> int m_FUN_10b7be90(A...); undefined4 * __thiscall m_FUN_10b7bed0(undefined4 param_2); template<class... A> int m_FUN_10b7bed0(A...); undefined4 * __thiscall m_FUN_10b7bf10(undefined4 param_2); template<class... A> int m_FUN_10b7bf10(A...); undefined4 * __thiscall m_FUN_10b7c150(undefined4 *param_2); template<class... A> int m_FUN_10b7c150(A...); undefined4 * __thiscall m_FUN_10b7c320(undefined4 param_2); template<class... A> int m_FUN_10b7c320(A...); undefined4 * __thiscall m_FUN_10b7c360(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10b7c360(A...); undefined4 * __thiscall m_FUN_10b7c400(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10b7c400(A...); undefined4 * __thiscall m_FUN_10b7c550(undefined4 param_2); template<class... A> int m_FUN_10b7c550(A...); undefined4 * __thiscall m_FUN_10b7c8a0(undefined4 param_2); template<class... A> int m_FUN_10b7c8a0(A...); undefined4 * __thiscall m_FUN_10b7ca20(undefined4 param_2); template<class... A> int m_FUN_10b7ca20(A...); };

extern int FUN_10b6d370(...);
extern int FUN_10b7cb20(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int function(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_102e9720(...);
extern int thunk_FUN_102ec850(...);
extern int thunk_FUN_103beae0(...);
template<class... A> int __stdcall thunk_FUN_103cf4f0(A...);
extern int thunk_FUN_105a05f0(...);
extern int thunk_FUN_105a0660(...);
extern int thunk_FUN_106d91c0(...);
template<class... A> int __stdcall thunk_FUN_106da030(A...);
extern int thunk_FUN_106da540(...);
extern int thunk_FUN_106da680(...);
extern int thunk_FUN_106da820(...);
extern int thunk_FUN_10af3f70(...);
template<class... A> int __stdcall thunk_FUN_10b50380(A...);
template<class... A> int __stdcall thunk_FUN_10bcef80(A...);
extern int thunk_FUN_10c5f430(...);
extern int thunk_FUN_10eb4020(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eb41c0(...);
template<class... A> int __stdcall thunk_FUN_10eb4cc0(A...);
template<class... A> int __stdcall thunk_FUN_10eb4d80(A...);
extern int thunk_FUN_10eb4e80(...);
extern int thunk_FUN_10eb64f0(...);
extern int thunk_FUN_10ebc1d0(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11240650(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_12126b84;
extern int DAT_121a4908;
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
extern int DAT_121a4a0c;
extern int DAT_121a4a10;
extern int DAT_121a4a14;
extern int DAT_121a4a18;
extern int DAT_121a4a38;
extern int DAT_121a4a3c;
extern int DAT_121a4a40;
extern int DAT_121a4a44;
extern int DAT_121a4a48;
extern int DAT_121a4a4c;
extern int DAT_121a4a50;
extern int DAT_121a4a54;
extern int DAT_121a4a58;
extern int DAT_121a4a74;
extern int DAT_121a4a78;
extern int DAT_121a4a7c;
extern int DAT_121a4a80;
extern int DAT_121a4a84;
extern int DAT_121a4a88;
extern int DAT_121a4ae8;
extern int DAT_121a4aec;
extern int DAT_121a4af0;
extern int DAT_121a4af4;
extern int DAT_121a4b0c;
extern int DAT_121a4b10;
extern int DAT_121a4b14;
extern int DAT_121a4b18;
extern int DAT_121a4b64;
extern int DAT_121a4b68;
extern int DAT_121a4b6c;
extern int DAT_121a4b70;
extern int DAT_121a4b74;
extern int DAT_121a4b78;
extern int DAT_121a4b7c;
extern int DAT_121a4b80;
extern int DAT_121a4b84;
extern int DAT_121a4b88;
extern int DAT_121a4b8c;
extern int DAT_121a4b90;
extern int DAT_121a4b94;
extern int DAT_121a4b98;
extern int DAT_121a4b9c;
extern int DAT_121a4c0c;
extern int DAT_121a4c10;
extern int DAT_121a4c14;
extern int DAT_121a4c18;
extern int DAT_121a4c1c;
extern int DAT_121a4c20;
extern int DAT_121a4c38;
extern int DAT_121a4c3c;
extern int DAT_121a4c40;
extern int DAT_121a4c44;
extern int DAT_121a4c48;
extern int DAT_121a4c4c;
extern int DAT_121a4c50;
extern int DAT_121a4c54;
extern int DAT_121a4c58;
extern int DAT_121a4c5c;
extern int DAT_121a4c60;
extern int DAT_121a4c64;
extern int DAT_121a4c80;
extern int DAT_121a4c84;
extern int DAT_121a4c88;
extern int DAT_121a4c8c;
extern int DAT_121a4ca4;
extern int DAT_121a4ca8;
extern int DAT_121a4cac;
extern int DAT_121a4cb0;
extern int DAT_121a4cb4;
extern int DAT_121a4cb8;
extern int DAT_121a4cbc;
extern int DAT_121a4cc0;
extern int DAT_121a4cc4;
extern int DAT_121a4cc8;
extern int DAT_121a4ccc;
extern int DAT_121a4cd0;
extern int DAT_121a4cd4;
extern int DAT_121a4d28;
extern int DAT_121a4d2c;
extern int DAT_121a4d30;
extern int DAT_121a4d34;
extern int DAT_121a4d38;
extern int DAT_121a4d3c;
extern int DAT_121a4d40;
extern int DAT_121a4d44;
extern int DAT_121a4d48;
extern int DAT_121a4d64;
extern int DAT_121a4d68;
extern int DAT_121a4d6c;
extern int DAT_121a4d70;
extern int DAT_121a4d74;
extern int DAT_121a4d78;
extern int DAT_121a4d7c;
extern int DAT_121a4d94;
extern int DAT_121a4d98;
extern int DAT_121a4d9c;
extern int DAT_121a4da0;
extern int DAT_121a4db8;
extern int DAT_121a4dbc;
extern int DAT_121a4dc8;
extern int DAT_121a4dcc;
extern int DAT_121a4dd0;
extern int DAT_121a4dd4;
extern int DAT_121a4dd8;
extern int DAT_121a4ddc;
extern int DAT_121a4de0;
extern int DAT_121a4de4;
extern int DAT_121a4de8;
extern int DAT_121a4dec;
extern int DAT_121a4df0;
extern int DAT_121a4df4;
extern int DAT_121a4df8;
extern int DAT_121a4dfc;
extern int DAT_121a4e00;
extern int DAT_121a4e04;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpDPEnterConfigModeAIOOp;
extern int ghidra_vftable_RUpnpDPExitConfigModeAIOOp;
extern int ghidra_vftable_RUpnpSPEditAccountPasswordXAIOOp;
extern int ghidra_vftable_RUpnpSPRemoveAccountAIOOp;
extern int ghidra_vftable_RUpnpSPReplaceAccountXAIOOp;
extern int ghidra_vftable_SCBrowseService;
extern int ghidra_vftable_SCDetectionSonarDescriptor;
extern int ghidra_vftable_SCDisplayWizardActionDescriptorBase;
extern int ghidra_vftable_SCFirmwareDownloadCallback;
extern int ghidra_vftable_SCFirmwareDownloadManager;
extern int ghidra_vftable_SCIBrowseService;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAVTransportEndDirectControlSession;
extern int ghidra_vftable_SCIOpReplaceAccount;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCIScrobblingService;
extern int ghidra_vftable_SCIServiceAccount;
extern int ghidra_vftable_SCISimpleMessagingService;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCIZoneGroup;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCMolassesFirstPage;
extern int ghidra_vftable_SCMolassesSecondPage;
extern int ghidra_vftable_SCMolassesThirdPage;
extern int ghidra_vftable_SCMolassesWizard;
extern int ghidra_vftable_SCNewWiz;
extern int ghidra_vftable_SCNewWizPage;
extern int ghidra_vftable_SCNewWizPageFor;
extern int ghidra_vftable_SCNewWizParams;
extern int ghidra_vftable_SCNewWizStateType;
extern int ghidra_vftable_SCNewWizStateTypeFor;
extern int ghidra_vftable_SCNfcTestAbilityNotAvailablePage;
extern int ghidra_vftable_SCNfcTestPermissionPage;
extern int ghidra_vftable_SCNfcTestWizard;
extern int ghidra_vftable_SCNfcUserTestIntroPage;
extern int ghidra_vftable_SCNfcUserTestOutroPage;
extern int ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadErrorPage;
extern int ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadPage;
extern int ghidra_vftable_SCOffLanUpdateTestFirmwareDownloadSuccessPage;
extern int ghidra_vftable_SCOffLanUpdateTestIntroPage;
extern int ghidra_vftable_SCOffLanUpdateTestOutroPage;
extern int ghidra_vftable_SCOffLanUpdateTestProductSelectionPage;
extern int ghidra_vftable_SCOffLanUpdateTestSNSApConnectPage;
extern int ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressConfirmPage;
extern int ghidra_vftable_SCOffLanUpdateTestSonosApButtonPressPage;
extern int ghidra_vftable_SCOffLanUpdateTestSonosApConnectPage;
extern int ghidra_vftable_SCOffLanUpdateTestSonosApWaitingPage;
extern int ghidra_vftable_SCOpAVTransportEndDirectControlSession;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpReplaceAccountX;
extern int ghidra_vftable_SCOperationsFakeOpPage;
extern int ghidra_vftable_SCOperationsFaultyOpPage;
extern int ghidra_vftable_SCOperationsInstantExitPage;
extern int ghidra_vftable_SCOperationsIntroPage;
extern int ghidra_vftable_SCOperationsWhackAMolePage;
extern int ghidra_vftable_SCOperationsWizard;
extern int ghidra_vftable_SCPopupDemoSelectionPage;
extern int ghidra_vftable_SCPopupDemoTest1APage;
extern int ghidra_vftable_SCPopupDemoTest1BPage;
extern int ghidra_vftable_SCPopupDemoTest1CPage;
extern int ghidra_vftable_SCPopupDemoTest2APage;
extern int ghidra_vftable_SCPopupDemoTest3Page;
extern int ghidra_vftable_SCPopupDemoTest4APage;
extern int ghidra_vftable_SCPopupDemoTest4BPage;
extern int ghidra_vftable_SCPopupDemoWizard;
extern int ghidra_vftable_SCProductAssetsColorListPage;
extern int ghidra_vftable_SCProductAssetsIntroPage;
extern int ghidra_vftable_SCProductAssetsVideoListPage;
extern int ghidra_vftable_SCProductAssetsWizard;
extern int ghidra_vftable_SCRiveDemoAnimationTransitionFirstPage;
extern int ghidra_vftable_SCRiveDemoAnimationTransitionSecondPage;
extern int ghidra_vftable_SCRiveDemoBasicAnimationDurationSetPage;
extern int ghidra_vftable_SCRiveDemoBasicAnimationPage;
extern int ghidra_vftable_SCRiveDemoCanvasOnlyLayoutPage;
extern int ghidra_vftable_SCRiveDemoSelectionPage;
extern int ghidra_vftable_SCRiveDemoStateMachineBoolPage;
extern int ghidra_vftable_SCRiveDemoStateMachineNumberPage;
extern int ghidra_vftable_SCRiveDemoStateMachineTransitionFirstPage;
extern int ghidra_vftable_SCRiveDemoStateMachineTransitionSecondPage;
extern int ghidra_vftable_SCRiveDemoStateMachineTriggerPage;
extern int ghidra_vftable_SCRiveDemoWizard;
extern int ghidra_vftable_SCScrobblingService;
extern int ghidra_vftable_SCSimpleMessagingService;
extern int ghidra_vftable_SCSlideshowDonePage;
extern int ghidra_vftable_SCSlideshowIntroPage;
extern int ghidra_vftable_SCSlideshowProductPage;
extern int ghidra_vftable_SCSlideshowWizard;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsFailurePage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithSurroundsPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedHomeTheaterWithoutSurroundsPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedOutdoorPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedPrimaryTrueplayPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayPage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectedSurroundsTrueplayWithPrimaryFailurePage;
extern int ghidra_vftable_SCSonanceDetectionWizardDetectionFailurePage;
extern int ghidra_vftable_SCSonanceDetectionWizardErrorPage;
extern int ghidra_vftable_SCSonanceDetectionWizardIntroPage;
extern int ghidra_vftable_SCSonarWizardActionDescriptor;
extern int ghidra_vftable_SCSpeedyFastTransitionPage;
extern int ghidra_vftable_SCSpeedyFasterTransitionPage;
extern int ghidra_vftable_SCSpeedyFastestTransitionPage;
extern int ghidra_vftable_SCSpeedyIntroPage;
extern int ghidra_vftable_SCSpeedyQueuedTransitionsFirstPage;
extern int ghidra_vftable_SCSpeedyQueuedTransitionsFourthPage;
extern int ghidra_vftable_SCSpeedyQueuedTransitionsSecondPage;
extern int ghidra_vftable_SCSpeedyQueuedTransitionsThirdPage;
extern int ghidra_vftable_SCSpeedyWizard;
extern int ghidra_vftable_SCSubwizState;
extern int ghidra_vftable_SCSubwizStateFor;
extern int ghidra_vftable_SCSuperBasicOmitSubwiz;
extern int ghidra_vftable_SCSuperBasicSubwiz;
extern int ghidra_vftable_SCSuperIntroPage;
extern int ghidra_vftable_SCSuperOutroPage;
extern int ghidra_vftable_SCSuperWizard;
extern int ghidra_vftable_SCTimingIntroPage;
extern int ghidra_vftable_SCTimingSpinnerPage;
extern int ghidra_vftable_SCTimingStopwatchPage;
extern int ghidra_vftable_SCTimingWizard;
extern int ghidra_vftable_SCVideoDemoSelectionPage;
extern int ghidra_vftable_SCVideoDemoStaggeringTestAPage;
extern int ghidra_vftable_SCVideoDemoStaggeringTestBPage;
extern int ghidra_vftable_SCVideoDemoStaggeringTestCPage;
extern int ghidra_vftable_SCVideoDemoTest1APage;
extern int ghidra_vftable_SCVideoDemoTest1BPage;
extern int ghidra_vftable_SCVideoDemoTest1CPage;
extern int ghidra_vftable_SCVideoDemoTest1DPage;
extern int ghidra_vftable_SCVideoDemoTest2APage;
extern int ghidra_vftable_SCVideoDemoTest2BPage;
extern int ghidra_vftable_SCVideoDemoTest2CPage;
extern int ghidra_vftable_SCVideoDemoTest3APage;
extern int ghidra_vftable_SCVideoDemoTest3BPage;
extern int ghidra_vftable_SCVideoDemoTimingsTestProductSelectionPage;
extern int ghidra_vftable_SCVideoDemoTimingsTestVideoSequencePage;
extern int ghidra_vftable_SCVideoDemoWizard;
extern int ghidra_vftable_SCWrappedCBOp;
extern int ghidra_vftable_SCWrapperObj;
extern int in_EAX;
extern int uStack_8;
extern undefined1 LAB_114f5b00[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_115793e0[];
extern undefined1 LAB_115e0920[];
extern undefined1 LAB_115e0ff0[];
extern undefined1 LAB_116b9650[];
extern undefined1 LAB_116bc400[];
extern int *PTR_s_anvil_black_12119c20;
extern void *ExceptionList;
extern int FUN_10ebc110(...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdac0(undefined4 *param_1);
template<class... A> int FUN_10abdac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdad0(undefined4 *param_1);
template<class... A> int FUN_10abdad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdae0(undefined4 *param_1);
template<class... A> int FUN_10abdae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdaf0(undefined4 *param_1);
template<class... A> int FUN_10abdaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb00(undefined4 *param_1);
template<class... A> int FUN_10abdb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb10(undefined4 *param_1);
template<class... A> int FUN_10abdb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb20(undefined4 *param_1);
template<class... A> int FUN_10abdb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb30(undefined4 *param_1);
template<class... A> int FUN_10abdb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb40(undefined4 *param_1);
template<class... A> int FUN_10abdb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb50(undefined4 *param_1);
template<class... A> int FUN_10abdb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb60(undefined4 *param_1);
template<class... A> int FUN_10abdb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb70(undefined4 *param_1);
template<class... A> int FUN_10abdb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb80(undefined4 *param_1);
template<class... A> int FUN_10abdb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdb90(undefined4 *param_1);
template<class... A> int FUN_10abdb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdba0(undefined4 *param_1);
template<class... A> int FUN_10abdba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdbb0(undefined4 *param_1);
template<class... A> int FUN_10abdbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdbc0(undefined4 *param_1);
template<class... A> int FUN_10abdbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdbd0(undefined4 *param_1);
template<class... A> int FUN_10abdbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdbe0(undefined4 *param_1);
template<class... A> int FUN_10abdbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdbf0(undefined4 *param_1);
template<class... A> int FUN_10abdbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc00(undefined4 *param_1);
template<class... A> int FUN_10abdc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc10(undefined4 *param_1);
template<class... A> int FUN_10abdc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc20(undefined4 *param_1);
template<class... A> int FUN_10abdc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc30(undefined4 *param_1);
template<class... A> int FUN_10abdc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc40(undefined4 *param_1);
template<class... A> int FUN_10abdc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc50(undefined4 *param_1);
template<class... A> int FUN_10abdc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc60(undefined4 *param_1);
template<class... A> int FUN_10abdc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc70(undefined4 *param_1);
template<class... A> int FUN_10abdc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc80(undefined4 *param_1);
template<class... A> int FUN_10abdc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdc90(undefined4 *param_1);
template<class... A> int FUN_10abdc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdca0(undefined4 *param_1);
template<class... A> int FUN_10abdca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdcb0(undefined4 *param_1);
template<class... A> int FUN_10abdcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdcc0(undefined4 *param_1);
template<class... A> int FUN_10abdcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdcd0(undefined4 *param_1);
template<class... A> int FUN_10abdcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdce0(undefined4 *param_1);
template<class... A> int FUN_10abdce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdcf0(undefined4 *param_1);
template<class... A> int FUN_10abdcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdd00(undefined4 *param_1);
template<class... A> int FUN_10abdd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdd10(undefined4 *param_1);
template<class... A> int FUN_10abdd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdd40(undefined4 *param_1);
template<class... A> int FUN_10abdd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdd60(undefined4 *param_1);
template<class... A> int FUN_10abdd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdd90(undefined4 *param_1);
template<class... A> int FUN_10abdd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abddb0(undefined4 *param_1);
template<class... A> int FUN_10abddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdde0(undefined4 *param_1);
template<class... A> int FUN_10abdde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abde00(undefined4 *param_1);
template<class... A> int FUN_10abde00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abde30(undefined4 *param_1);
template<class... A> int FUN_10abde30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abde50(undefined4 *param_1);
template<class... A> int FUN_10abde50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abde80(undefined4 *param_1);
template<class... A> int FUN_10abde80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdea0(undefined4 *param_1);
template<class... A> int FUN_10abdea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abded0(undefined4 *param_1);
template<class... A> int FUN_10abded0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdef0(undefined4 *param_1);
template<class... A> int FUN_10abdef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdf20(undefined4 *param_1);
template<class... A> int FUN_10abdf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdf40(undefined4 *param_1);
template<class... A> int FUN_10abdf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdf70(undefined4 *param_1);
template<class... A> int FUN_10abdf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdf90(undefined4 *param_1);
template<class... A> int FUN_10abdf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdfc0(undefined4 *param_1);
template<class... A> int FUN_10abdfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abdfe0(undefined4 *param_1);
template<class... A> int FUN_10abdfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe010(undefined4 *param_1);
template<class... A> int FUN_10abe010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe030(undefined4 *param_1);
template<class... A> int FUN_10abe030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe060(undefined4 *param_1);
template<class... A> int FUN_10abe060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe080(undefined4 *param_1);
template<class... A> int FUN_10abe080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe0b0(undefined4 *param_1);
template<class... A> int FUN_10abe0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe0d0(undefined4 *param_1);
template<class... A> int FUN_10abe0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe100(undefined4 *param_1);
template<class... A> int FUN_10abe100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe120(undefined4 *param_1);
template<class... A> int FUN_10abe120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe150(undefined4 *param_1);
template<class... A> int FUN_10abe150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe170(undefined4 *param_1);
template<class... A> int FUN_10abe170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe1a0(undefined4 *param_1);
template<class... A> int FUN_10abe1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe1c0(undefined4 *param_1);
template<class... A> int FUN_10abe1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe1f0(undefined4 *param_1);
template<class... A> int FUN_10abe1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe210(undefined4 *param_1);
template<class... A> int FUN_10abe210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe240(undefined4 *param_1);
template<class... A> int FUN_10abe240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe260(undefined4 *param_1);
template<class... A> int FUN_10abe260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe290(undefined4 *param_1);
template<class... A> int FUN_10abe290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe2b0(undefined4 *param_1);
template<class... A> int FUN_10abe2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe2e0(undefined4 *param_1);
template<class... A> int FUN_10abe2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe300(undefined4 *param_1);
template<class... A> int FUN_10abe300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe330(undefined4 *param_1);
template<class... A> int FUN_10abe330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe350(undefined4 *param_1);
template<class... A> int FUN_10abe350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe380(undefined4 *param_1);
template<class... A> int FUN_10abe380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe3a0(undefined4 *param_1);
template<class... A> int FUN_10abe3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe3d0(undefined4 *param_1);
template<class... A> int FUN_10abe3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe3f0(undefined4 *param_1);
template<class... A> int FUN_10abe3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe420(undefined4 *param_1);
template<class... A> int FUN_10abe420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe440(undefined4 *param_1);
template<class... A> int FUN_10abe440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe470(undefined4 *param_1);
template<class... A> int FUN_10abe470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe490(undefined4 *param_1);
template<class... A> int FUN_10abe490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe4c0(undefined4 *param_1);
template<class... A> int FUN_10abe4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe4e0(undefined4 *param_1);
template<class... A> int FUN_10abe4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe510(undefined4 *param_1);
template<class... A> int FUN_10abe510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe530(undefined4 *param_1);
template<class... A> int FUN_10abe530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe560(undefined4 *param_1);
template<class... A> int FUN_10abe560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe580(undefined4 *param_1);
template<class... A> int FUN_10abe580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe5b0(undefined4 *param_1);
template<class... A> int FUN_10abe5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe5d0(undefined4 *param_1);
template<class... A> int FUN_10abe5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe600(undefined4 *param_1);
template<class... A> int FUN_10abe600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe620(undefined4 *param_1);
template<class... A> int FUN_10abe620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe650(undefined4 *param_1);
template<class... A> int FUN_10abe650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe670(undefined4 *param_1);
template<class... A> int FUN_10abe670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe6a0(undefined4 *param_1);
template<class... A> int FUN_10abe6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe6c0(undefined4 *param_1);
template<class... A> int FUN_10abe6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe6f0(undefined4 *param_1);
template<class... A> int FUN_10abe6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe710(undefined4 *param_1);
template<class... A> int FUN_10abe710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe740(undefined4 *param_1);
template<class... A> int FUN_10abe740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe760(undefined4 *param_1);
template<class... A> int FUN_10abe760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe790(undefined4 *param_1);
template<class... A> int FUN_10abe790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe7b0(undefined4 *param_1);
template<class... A> int FUN_10abe7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe7e0(undefined4 *param_1);
template<class... A> int FUN_10abe7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe800(undefined4 *param_1);
template<class... A> int FUN_10abe800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe830(undefined4 *param_1);
template<class... A> int FUN_10abe830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe850(undefined4 *param_1);
template<class... A> int FUN_10abe850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10abe880(undefined4 *param_1);
template<class... A> int FUN_10abe880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4ad0(void);
template<class... A> int FUN_10ae4ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4ae0(void);
template<class... A> int FUN_10ae4ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4af0(void);
template<class... A> int FUN_10ae4af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b00(void);
template<class... A> int FUN_10ae4b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b10(void);
template<class... A> int FUN_10ae4b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b20(void);
template<class... A> int FUN_10ae4b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b30(void);
template<class... A> int FUN_10ae4b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b40(void);
template<class... A> int FUN_10ae4b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b50(void);
template<class... A> int FUN_10ae4b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b60(void);
template<class... A> int FUN_10ae4b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b70(void);
template<class... A> int FUN_10ae4b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b80(void);
template<class... A> int FUN_10ae4b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4b90(void);
template<class... A> int FUN_10ae4b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4ba0(void);
template<class... A> int FUN_10ae4ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4bb0(void);
template<class... A> int FUN_10ae4bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4bc0(void);
template<class... A> int FUN_10ae4bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4bd0(void);
template<class... A> int FUN_10ae4bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4be0(void);
template<class... A> int FUN_10ae4be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4bf0(void);
template<class... A> int FUN_10ae4bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c00(void);
template<class... A> int FUN_10ae4c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c10(void);
template<class... A> int FUN_10ae4c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c20(void);
template<class... A> int FUN_10ae4c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c30(void);
template<class... A> int FUN_10ae4c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c40(void);
template<class... A> int FUN_10ae4c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c50(void);
template<class... A> int FUN_10ae4c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c60(void);
template<class... A> int FUN_10ae4c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c70(void);
template<class... A> int FUN_10ae4c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c80(void);
template<class... A> int FUN_10ae4c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4c90(void);
template<class... A> int FUN_10ae4c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4ca0(void);
template<class... A> int FUN_10ae4ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4cb0(void);
template<class... A> int FUN_10ae4cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4cc0(void);
template<class... A> int FUN_10ae4cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4cd0(void);
template<class... A> int FUN_10ae4cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4ce0(void);
template<class... A> int FUN_10ae4ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4cf0(void);
template<class... A> int FUN_10ae4cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4d00(void);
template<class... A> int FUN_10ae4d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4d10(void);
template<class... A> int FUN_10ae4d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae4d20(void);
template<class... A> int FUN_10ae4d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ae5810(int param_1);
template<class... A> int FUN_10ae5810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ae5820(int param_1);
template<class... A> int FUN_10ae5820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae5fa0(void);
template<class... A> int FUN_10ae5fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae5fb0(void);
template<class... A> int FUN_10ae5fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae5fc0(void);
template<class... A> int FUN_10ae5fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6ac0(undefined4 *param_1);
template<class... A> int FUN_10ae6ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6af0(undefined4 *param_1);
template<class... A> int FUN_10ae6af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6b00(undefined4 *param_1);
template<class... A> int FUN_10ae6b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6b10(undefined4 *param_1);
template<class... A> int FUN_10ae6b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6b20(undefined4 *param_1);
template<class... A> int FUN_10ae6b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6b50(undefined4 *param_1);
template<class... A> int FUN_10ae6b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6b70(undefined4 *param_1);
template<class... A> int FUN_10ae6b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6ba0(undefined4 *param_1);
template<class... A> int FUN_10ae6ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6bc0(undefined4 *param_1);
template<class... A> int FUN_10ae6bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6bf0(undefined4 *param_1);
template<class... A> int FUN_10ae6bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ae6c10(undefined4 *param_1);
template<class... A> int FUN_10ae6c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8ef0(void);
template<class... A> int FUN_10ae8ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8f00(void);
template<class... A> int FUN_10ae8f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8f10(void);
template<class... A> int FUN_10ae8f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8f20(void);
template<class... A> int FUN_10ae8f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8f80(void);
template<class... A> int FUN_10ae8f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8f90(void);
template<class... A> int FUN_10ae8f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8fa0(void);
template<class... A> int FUN_10ae8fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8fb0(void);
template<class... A> int FUN_10ae8fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8fc0(void);
template<class... A> int FUN_10ae8fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8fd0(void);
template<class... A> int FUN_10ae8fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8fe0(void);
template<class... A> int FUN_10ae8fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ae8ff0(void);
template<class... A> int FUN_10ae8ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaa50(undefined4 *param_1);
template<class... A> int FUN_10aeaa50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaa80(undefined4 *param_1);
template<class... A> int FUN_10aeaa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaa90(undefined4 *param_1);
template<class... A> int FUN_10aeaa90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaaa0(undefined4 *param_1);
template<class... A> int FUN_10aeaaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaab0(undefined4 *param_1);
template<class... A> int FUN_10aeaab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaac0(undefined4 *param_1);
template<class... A> int FUN_10aeaac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaad0(undefined4 *param_1);
template<class... A> int FUN_10aeaad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaae0(undefined4 *param_1);
template<class... A> int FUN_10aeaae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaaf0(undefined4 *param_1);
template<class... A> int FUN_10aeaaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeab00(undefined4 *param_1);
template<class... A> int FUN_10aeab00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeab30(undefined4 *param_1);
template<class... A> int FUN_10aeab30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeab50(undefined4 *param_1);
template<class... A> int FUN_10aeab50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeab80(undefined4 *param_1);
template<class... A> int FUN_10aeab80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeaba0(undefined4 *param_1);
template<class... A> int FUN_10aeaba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeabd0(undefined4 *param_1);
template<class... A> int FUN_10aeabd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeabf0(undefined4 *param_1);
template<class... A> int FUN_10aeabf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeac20(undefined4 *param_1);
template<class... A> int FUN_10aeac20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeac40(undefined4 *param_1);
template<class... A> int FUN_10aeac40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeac70(undefined4 *param_1);
template<class... A> int FUN_10aeac70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeac90(undefined4 *param_1);
template<class... A> int FUN_10aeac90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeacc0(undefined4 *param_1);
template<class... A> int FUN_10aeacc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aeace0(undefined4 *param_1);
template<class... A> int FUN_10aeace0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aead10(undefined4 *param_1);
template<class... A> int FUN_10aead10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aead30(undefined4 *param_1);
template<class... A> int FUN_10aead30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aead60(undefined4 *param_1);
template<class... A> int FUN_10aead60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10aead80(undefined4 *param_1);
template<class... A> int FUN_10aead80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af3430(void);
template<class... A> int FUN_10af3430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af3440(void);
template<class... A> int FUN_10af3440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af3450(void);
template<class... A> int FUN_10af3450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af3460(void);
template<class... A> int FUN_10af3460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af3470(void);
template<class... A> int FUN_10af3470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af3480(void);
template<class... A> int FUN_10af3480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af3490(void);
template<class... A> int FUN_10af3490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af34a0(void);
template<class... A> int FUN_10af34a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af34b0(void);
template<class... A> int FUN_10af34b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10af35e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10af35e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10af3600(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10af3600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10af3640(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10af3640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10af3660(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10af3660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10af3820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10af3820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10af3850(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10af3850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af3d10(void);
template<class... A> int FUN_10af3d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af3d20(void);
template<class... A> int FUN_10af3d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af3d40(void);
template<class... A> int FUN_10af3d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af3ea0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10af3ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af3eb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10af3eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af3ec0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10af3ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af3ed0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10af3ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af4150(void);
template<class... A> int FUN_10af4150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af4160(void);
template<class... A> int FUN_10af4160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af4830(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10af4830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af4850(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10af4850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4970(undefined4 *param_1);
template<class... A> int FUN_10af4970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4980(undefined4 param_1);
template<class... A> int FUN_10af4980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4990(undefined4 param_1);
template<class... A> int FUN_10af4990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10af49a0(int param_1,uint *param_2);
template<class... A> int FUN_10af49a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10af49d0(int param_1,uint *param_2);
template<class... A> int FUN_10af49d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4b10(undefined4 *param_1);
template<class... A> int FUN_10af4b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4b20(undefined4 param_1);
template<class... A> int FUN_10af4b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4b30(undefined4 param_1);
template<class... A> int FUN_10af4b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4b40(undefined4 param_1);
template<class... A> int FUN_10af4b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4b50(undefined4 param_1);
template<class... A> int FUN_10af4b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4b60(undefined4 param_1);
template<class... A> int FUN_10af4b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4b70(undefined4 param_1);
template<class... A> int FUN_10af4b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4b80(undefined4 param_1);
template<class... A> int FUN_10af4b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4b90(undefined4 param_1);
template<class... A> int FUN_10af4b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4ba0(undefined4 param_1);
template<class... A> int FUN_10af4ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4bb0(undefined4 param_1);
template<class... A> int FUN_10af4bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4bc0(undefined4 param_1);
template<class... A> int FUN_10af4bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af4bd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10af4bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af4bf0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10af4bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af4c10(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10af4c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4d10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10af4d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4d30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10af4d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4d50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10af4d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4d70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10af4d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4d90(undefined4 param_1);
template<class... A> int FUN_10af4d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4da0(undefined4 param_1);
template<class... A> int FUN_10af4da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4db0(undefined4 param_1);
template<class... A> int FUN_10af4db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4dc0(undefined4 param_1);
template<class... A> int FUN_10af4dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4dd0(undefined4 param_1);
template<class... A> int FUN_10af4dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4de0(undefined4 param_1);
template<class... A> int FUN_10af4de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4df0(undefined4 param_1);
template<class... A> int FUN_10af4df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e00(undefined4 param_1);
template<class... A> int FUN_10af4e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e10(undefined4 param_1);
template<class... A> int FUN_10af4e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e20(undefined4 param_1);
template<class... A> int FUN_10af4e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e30(undefined4 param_1);
template<class... A> int FUN_10af4e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e40(undefined4 param_1);
template<class... A> int FUN_10af4e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e50(undefined4 param_1);
template<class... A> int FUN_10af4e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e60(undefined4 param_1);
template<class... A> int FUN_10af4e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e70(undefined4 param_1);
template<class... A> int FUN_10af4e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e80(undefined4 param_1);
template<class... A> int FUN_10af4e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4e90(undefined4 param_1);
template<class... A> int FUN_10af4e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4ea0(undefined4 param_1);
template<class... A> int FUN_10af4ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4eb0(undefined4 param_1);
template<class... A> int FUN_10af4eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4ec0(undefined4 param_1);
template<class... A> int FUN_10af4ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af4ed0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10af4ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4ee0(void);
template<class... A> int FUN_10af4ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4ef0(void);
template<class... A> int FUN_10af4ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4f00(void);
template<class... A> int FUN_10af4f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4f10(void);
template<class... A> int FUN_10af4f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af4f20(void);
template<class... A> int FUN_10af4f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af5080(undefined4 param_1);
template<class... A> int FUN_10af5080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af5090(undefined4 param_1);
template<class... A> int FUN_10af5090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10af5800(undefined4 *param_1);
template<class... A> int FUN_10af5800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10af5820(undefined4 *param_1);
template<class... A> int FUN_10af5820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af5840(undefined4 param_1);
template<class... A> int FUN_10af5840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af5850(undefined4 param_1);
template<class... A> int FUN_10af5850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10af5b20(undefined4 *param_1);
template<class... A> int FUN_10af5b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af68c0(undefined4 *param_1);
template<class... A> int FUN_10af68c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af68d0(undefined4 *param_1);
template<class... A> int FUN_10af68d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af68e0(undefined4 *param_1);
template<class... A> int FUN_10af68e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af68f0(undefined4 *param_1);
template<class... A> int FUN_10af68f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6900(undefined4 *param_1);
template<class... A> int FUN_10af6900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6b20(int param_1);
template<class... A> int FUN_10af6b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6c80(undefined4 *param_1);
template<class... A> int FUN_10af6c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6cb0(undefined4 *param_1);
template<class... A> int FUN_10af6cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6cd0(undefined4 *param_1);
template<class... A> int FUN_10af6cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6d00(undefined4 *param_1);
template<class... A> int FUN_10af6d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6d20(undefined4 *param_1);
template<class... A> int FUN_10af6d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6d50(undefined4 *param_1);
template<class... A> int FUN_10af6d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6d70(undefined4 *param_1);
template<class... A> int FUN_10af6d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6da0(undefined4 *param_1);
template<class... A> int FUN_10af6da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6dc0(undefined4 *param_1);
template<class... A> int FUN_10af6dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6df0(undefined4 *param_1);
template<class... A> int FUN_10af6df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af6e10(undefined4 *param_1);
template<class... A> int FUN_10af6e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10af7010(int *param_1);
template<class... A> int FUN_10af7010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10af7020(int *param_1);
template<class... A> int FUN_10af7020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10af7030(int *param_1);
template<class... A> int FUN_10af7030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10af7040(int *param_1);
template<class... A> int FUN_10af7040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10af7050(int *param_1);
template<class... A> int FUN_10af7050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10af7060(int *param_1);
template<class... A> int FUN_10af7060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10af7070(int *param_1);
template<class... A> int FUN_10af7070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10af72e0(int *param_1,int *param_2);
template<class... A> int FUN_10af72e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10af7300(int *param_1,int *param_2);
template<class... A> int FUN_10af7300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af7a60(undefined4 *param_1);
template<class... A> int FUN_10af7a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af7a90(undefined4 *param_1);
template<class... A> int FUN_10af7a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af7b00(int param_1);
template<class... A> int FUN_10af7b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af7b20(int param_1);
template<class... A> int FUN_10af7b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10af7b40(undefined4 param_1);
template<class... A> int FUN_10af7b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7b50(undefined4 param_1);
template<class... A> int FUN_10af7b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7b60(undefined4 param_1);
template<class... A> int FUN_10af7b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7b70(undefined4 param_1);
template<class... A> int FUN_10af7b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7b80(undefined4 param_1);
template<class... A> int FUN_10af7b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7b90(undefined4 param_1);
template<class... A> int FUN_10af7b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7ba0(undefined4 param_1);
template<class... A> int FUN_10af7ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7bb0(undefined4 param_1);
template<class... A> int FUN_10af7bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7bc0(undefined4 param_1);
template<class... A> int FUN_10af7bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7bd0(undefined4 param_1);
template<class... A> int FUN_10af7bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7be0(undefined4 param_1);
template<class... A> int FUN_10af7be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7bf0(undefined4 param_1);
template<class... A> int FUN_10af7bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7c00(undefined4 param_1);
template<class... A> int FUN_10af7c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7c20(undefined4 param_1);
template<class... A> int FUN_10af7c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7c30(undefined4 param_1);
template<class... A> int FUN_10af7c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af7c40(undefined4 param_1);
template<class... A> int FUN_10af7c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10af8250(int param_1);
template<class... A> int FUN_10af8250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10af8280(int param_1);
template<class... A> int FUN_10af8280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10af82b0(int *param_1);
template<class... A> int FUN_10af82b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10af82e0(int *param_1);
template<class... A> int FUN_10af82e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10af8310(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10af8310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af8320(int param_1);
template<class... A> int FUN_10af8320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af8330(int param_1);
template<class... A> int FUN_10af8330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10af8340(int param_1);
template<class... A> int FUN_10af8340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10af8430(uint param_1);
template<class... A> int FUN_10af8430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10af84b0(uint param_1);
template<class... A> int FUN_10af84b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af8600(undefined4 *param_1);
template<class... A> int FUN_10af8600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af8bb0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10af8bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10af8c00(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10af8c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10af8c50(int param_1,int param_2);
template<class... A> int FUN_10af8c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10af8ca0(int param_1,int param_2);
template<class... A> int FUN_10af8ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10af8cf0(int param_1);
template<class... A> int FUN_10af8cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10af8d30(int param_1);
template<class... A> int FUN_10af8d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10afd530(int param_1);
template<class... A> int FUN_10afd530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10afd540(int param_1);
template<class... A> int FUN_10afd540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10afd580(int param_1);
template<class... A> int FUN_10afd580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afd590(void);
template<class... A> int FUN_10afd590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afd5a0(void);
template<class... A> int FUN_10afd5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afd5b0(void);
template<class... A> int FUN_10afd5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afd5c0(void);
template<class... A> int FUN_10afd5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afd5d0(void);
template<class... A> int FUN_10afd5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afd5e0(void);
template<class... A> int FUN_10afd5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10afe8a0(int param_1);
template<class... A> int FUN_10afe8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10afe8b0(int param_1);
template<class... A> int FUN_10afe8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10afea70(undefined4 param_1);
template<class... A> int __stdcall FUN_10afea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afea80(void);
template<class... A> int FUN_10afea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afea90(void);
template<class... A> int FUN_10afea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afeaa0(void);
template<class... A> int FUN_10afeaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10afeab0(void);
template<class... A> int FUN_10afeab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aff190(undefined4 param_1);
template<class... A> int FUN_10aff190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aff1a0(undefined4 param_1);
template<class... A> int FUN_10aff1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aff1b0(undefined4 param_1);
template<class... A> int FUN_10aff1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aff1c0(undefined4 param_1);
template<class... A> int FUN_10aff1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10aff200(int param_1);
template<class... A> int FUN_10aff200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aff210(void);
template<class... A> int FUN_10aff210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aff220(void);
template<class... A> int FUN_10aff220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10aff230(void);
template<class... A> int FUN_10aff230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10affdb0(undefined4 *param_1);
template<class... A> int FUN_10affdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10affdc0(undefined4 *param_1);
template<class... A> int FUN_10affdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10affdd0(undefined4 *param_1);
template<class... A> int FUN_10affdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10affde0(undefined4 *param_1);
template<class... A> int FUN_10affde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10affe10(undefined4 *param_1);
template<class... A> int FUN_10affe10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10afff00(undefined4 *param_1);
template<class... A> int FUN_10afff00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10afff20(undefined4 *param_1);
template<class... A> int FUN_10afff20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10afff50(undefined4 *param_1);
template<class... A> int FUN_10afff50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10afff70(undefined4 *param_1);
template<class... A> int FUN_10afff70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b023f0(void);
template<class... A> int FUN_10b023f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b02400(void);
template<class... A> int FUN_10b02400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b02410(void);
template<class... A> int FUN_10b02410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b02420(void);
template<class... A> int FUN_10b02420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b02af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b02af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b02b10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b02b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b02c00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10b02c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b02da0(void);
template<class... A> int FUN_10b02da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b02dc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b02dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b02dd0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b02dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b02de0(void);
template<class... A> int FUN_10b02de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b035e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10b035e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b03600(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10b03600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03620(undefined4 *param_1);
template<class... A> int FUN_10b03620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10b03630(int param_1,uint *param_2);
template<class... A> int FUN_10b03630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03660(undefined4 param_1);
template<class... A> int FUN_10b03660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03810(undefined4 param_1);
template<class... A> int FUN_10b03810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03820(undefined4 param_1);
template<class... A> int FUN_10b03820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03830(undefined4 param_1);
template<class... A> int FUN_10b03830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03840(undefined4 param_1);
template<class... A> int FUN_10b03840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03850(undefined4 param_1);
template<class... A> int FUN_10b03850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b03860(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10b03860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b03970(void);
template<class... A> int FUN_10b03970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03ad0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b03ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03af0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b03af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03b10(undefined4 param_1);
template<class... A> int FUN_10b03b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03b20(undefined4 param_1);
template<class... A> int FUN_10b03b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03b30(undefined4 param_1);
template<class... A> int FUN_10b03b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03b40(undefined4 param_1);
template<class... A> int FUN_10b03b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03b50(undefined4 param_1);
template<class... A> int FUN_10b03b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03b60(undefined4 param_1);
template<class... A> int FUN_10b03b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03b70(undefined4 param_1);
template<class... A> int FUN_10b03b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03b80(void);
template<class... A> int FUN_10b03b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03b90(void);
template<class... A> int FUN_10b03b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03ba0(void);
template<class... A> int FUN_10b03ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b03cc0(undefined4 param_1);
template<class... A> int FUN_10b03cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b04200(undefined4 *param_1);
template<class... A> int FUN_10b04200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b04240(undefined4 *param_1);
template<class... A> int FUN_10b04240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b04260(undefined4 param_1);
template<class... A> int FUN_10b04260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b04270(undefined4 param_1);
template<class... A> int FUN_10b04270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b043a0(undefined4 *param_1);
template<class... A> int FUN_10b043a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b043f0(undefined4 *param_1);
template<class... A> int FUN_10b043f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04cf0(undefined4 *param_1);
template<class... A> int FUN_10b04cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04d20(undefined4 *param_1);
template<class... A> int FUN_10b04d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04d30(undefined4 *param_1);
template<class... A> int FUN_10b04d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04d40(undefined4 *param_1);
template<class... A> int FUN_10b04d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04d50(undefined4 *param_1);
template<class... A> int FUN_10b04d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04df0(int param_1);
template<class... A> int FUN_10b04df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04e10(int param_1);
template<class... A> int FUN_10b04e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04f90(undefined4 *param_1);
template<class... A> int FUN_10b04f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04fc0(undefined4 *param_1);
template<class... A> int FUN_10b04fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b04fe0(undefined4 *param_1);
template<class... A> int FUN_10b04fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b05010(undefined4 *param_1);
template<class... A> int FUN_10b05010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b05030(undefined4 *param_1);
template<class... A> int FUN_10b05030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b05060(undefined4 *param_1);
template<class... A> int FUN_10b05060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b05780(undefined4 *param_1);
template<class... A> int FUN_10b05780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b058d0(int param_1);
template<class... A> int FUN_10b058d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b05910(undefined4 param_1);
template<class... A> int FUN_10b05910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b05920(undefined4 param_1);
template<class... A> int FUN_10b05920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b05930(undefined4 param_1);
template<class... A> int FUN_10b05930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b05940(undefined4 param_1);
template<class... A> int FUN_10b05940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b05950(undefined4 param_1);
template<class... A> int FUN_10b05950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b05960(undefined4 param_1);
template<class... A> int FUN_10b05960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b05970(undefined4 param_1);
template<class... A> int FUN_10b05970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b05980(undefined4 param_1);
template<class... A> int FUN_10b05980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b059a0(undefined4 param_1);
template<class... A> int FUN_10b059a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b059b0(undefined4 param_1);
template<class... A> int FUN_10b059b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b059c0(undefined4 param_1);
template<class... A> int FUN_10b059c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b059d0(undefined4 param_1);
template<class... A> int FUN_10b059d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b05c70(undefined4 param_1);
template<class... A> int FUN_10b05c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b05cf0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10b05cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b05d00(int param_1);
template<class... A> int FUN_10b05d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b05d10(undefined4 *param_1);
template<class... A> int FUN_10b05d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b060a0(undefined4 *param_1);
template<class... A> int FUN_10b060a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b060b0(int param_1);
template<class... A> int FUN_10b060b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b06400(uint param_1);
template<class... A> int FUN_10b06400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b06480(uint param_1);
template<class... A> int FUN_10b06480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b06500(int *param_1);
template<class... A> int FUN_10b06500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b069f0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10b069f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b06a40(int param_1,int param_2);
template<class... A> int FUN_10b06a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b08360(int param_1);
template<class... A> int FUN_10b08360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b08b20(void);
template<class... A> int FUN_10b08b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b08b30(void);
template<class... A> int FUN_10b08b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b08b40(void);
template<class... A> int FUN_10b08b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b08b50(void);
template<class... A> int FUN_10b08b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b08b60(int param_1);
template<class... A> int FUN_10b08b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b08b80(int param_1);
template<class... A> int FUN_10b08b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b08b90(int param_1);
template<class... A> int FUN_10b08b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b08ba0(int param_1);
template<class... A> int FUN_10b08ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b08bb0(int param_1);
template<class... A> int FUN_10b08bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b08c00(void);
template<class... A> int FUN_10b08c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b08c10(void);
template<class... A> int FUN_10b08c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b08c20(void);
template<class... A> int FUN_10b08c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b08c30(void);
template<class... A> int FUN_10b08c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b09830(int param_1);
template<class... A> int FUN_10b09830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b09850(int *param_1);
template<class... A> int FUN_10b09850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b09920(void);
template<class... A> int FUN_10b09920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09cb0(undefined4 *param_1);
template<class... A> int FUN_10b09cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b09cc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10b09cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09cd0(undefined4 param_1);
template<class... A> int FUN_10b09cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09ce0(void);
template<class... A> int FUN_10b09ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09cf0(void);
template<class... A> int FUN_10b09cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d00(void);
template<class... A> int FUN_10b09d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d10(void);
template<class... A> int FUN_10b09d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d20(void);
template<class... A> int FUN_10b09d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d30(void);
template<class... A> int FUN_10b09d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d40(void);
template<class... A> int FUN_10b09d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d50(void);
template<class... A> int FUN_10b09d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d60(void);
template<class... A> int FUN_10b09d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d70(void);
template<class... A> int FUN_10b09d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d80(void);
template<class... A> int FUN_10b09d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09d90(void);
template<class... A> int FUN_10b09d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09da0(void);
template<class... A> int FUN_10b09da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b09db0(void);
template<class... A> int FUN_10b09db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b0b100(undefined4 *param_1);
template<class... A> int FUN_10b0b100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b0b110(undefined4 *param_1);
template<class... A> int FUN_10b0b110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d5d0(undefined4 *param_1);
template<class... A> int FUN_10b0d5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d600(undefined4 *param_1);
template<class... A> int FUN_10b0d600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d610(undefined4 *param_1);
template<class... A> int FUN_10b0d610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d620(undefined4 *param_1);
template<class... A> int FUN_10b0d620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d630(undefined4 *param_1);
template<class... A> int FUN_10b0d630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d640(undefined4 *param_1);
template<class... A> int FUN_10b0d640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d650(undefined4 *param_1);
template<class... A> int FUN_10b0d650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d660(undefined4 *param_1);
template<class... A> int FUN_10b0d660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d670(undefined4 *param_1);
template<class... A> int FUN_10b0d670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d680(undefined4 *param_1);
template<class... A> int FUN_10b0d680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d690(undefined4 *param_1);
template<class... A> int FUN_10b0d690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d6a0(undefined4 *param_1);
template<class... A> int FUN_10b0d6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d6b0(undefined4 *param_1);
template<class... A> int FUN_10b0d6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d6c0(undefined4 *param_1);
template<class... A> int FUN_10b0d6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d6d0(undefined4 *param_1);
template<class... A> int FUN_10b0d6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d6e0(undefined4 *param_1);
template<class... A> int FUN_10b0d6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d710(undefined4 *param_1);
template<class... A> int FUN_10b0d710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d740(undefined4 *param_1);
template<class... A> int FUN_10b0d740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d7a0(undefined4 *param_1);
template<class... A> int FUN_10b0d7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d7d0(undefined4 *param_1);
template<class... A> int FUN_10b0d7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d7f0(undefined4 *param_1);
template<class... A> int FUN_10b0d7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d820(undefined4 *param_1);
template<class... A> int FUN_10b0d820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d840(undefined4 *param_1);
template<class... A> int FUN_10b0d840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d870(undefined4 *param_1);
template<class... A> int FUN_10b0d870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d890(undefined4 *param_1);
template<class... A> int FUN_10b0d890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d8c0(undefined4 *param_1);
template<class... A> int FUN_10b0d8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d8e0(undefined4 *param_1);
template<class... A> int FUN_10b0d8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d910(undefined4 *param_1);
template<class... A> int FUN_10b0d910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d930(undefined4 *param_1);
template<class... A> int FUN_10b0d930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d960(undefined4 *param_1);
template<class... A> int FUN_10b0d960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d980(undefined4 *param_1);
template<class... A> int FUN_10b0d980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d9b0(undefined4 *param_1);
template<class... A> int FUN_10b0d9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0d9d0(undefined4 *param_1);
template<class... A> int FUN_10b0d9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0da00(undefined4 *param_1);
template<class... A> int FUN_10b0da00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0da70(undefined4 *param_1);
template<class... A> int FUN_10b0da70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0da90(undefined4 *param_1);
template<class... A> int FUN_10b0da90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0dac0(undefined4 *param_1);
template<class... A> int FUN_10b0dac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0dae0(undefined4 *param_1);
template<class... A> int FUN_10b0dae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0db10(undefined4 *param_1);
template<class... A> int FUN_10b0db10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0db30(undefined4 *param_1);
template<class... A> int FUN_10b0db30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0db60(undefined4 *param_1);
template<class... A> int FUN_10b0db60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0dc30(undefined4 *param_1);
template<class... A> int FUN_10b0dc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0dc50(undefined4 *param_1);
template<class... A> int FUN_10b0dc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b0dc80(undefined4 *param_1);
template<class... A> int FUN_10b0dc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b0f340(undefined4 *param_1);
template<class... A> int FUN_10b0f340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b10680(int param_1);
template<class... A> int FUN_10b10680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b10690(int param_1);
template<class... A> int FUN_10b10690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10b14200(int param_1);
template<class... A> int FUN_10b14200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b148d0(int param_1);
template<class... A> int FUN_10b148d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18c30(void);
template<class... A> int FUN_10b18c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18c40(void);
template<class... A> int FUN_10b18c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18c50(void);
template<class... A> int FUN_10b18c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18c60(void);
template<class... A> int FUN_10b18c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18c70(void);
template<class... A> int FUN_10b18c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18c80(void);
template<class... A> int FUN_10b18c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18c90(void);
template<class... A> int FUN_10b18c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18ca0(void);
template<class... A> int FUN_10b18ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18cb0(void);
template<class... A> int FUN_10b18cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18cc0(void);
template<class... A> int FUN_10b18cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18cd0(void);
template<class... A> int FUN_10b18cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18ce0(void);
template<class... A> int FUN_10b18ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18cf0(void);
template<class... A> int FUN_10b18cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18d00(void);
template<class... A> int FUN_10b18d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b18d10(void);
template<class... A> int FUN_10b18d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b18d20(int param_1);
template<class... A> int FUN_10b18d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b18d30(int param_1);
template<class... A> int FUN_10b18d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b18d40(int param_1);
template<class... A> int FUN_10b18d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b18d80(int param_1);
template<class... A> int FUN_10b18d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b18d90(int param_1);
template<class... A> int FUN_10b18d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b18da0(int param_1);
template<class... A> int FUN_10b18da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b18db0(int param_1);
template<class... A> int FUN_10b18db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b18dc0(int param_1);
template<class... A> int FUN_10b18dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b1a740(void);
template<class... A> int FUN_10b1a740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b1a750(void);
template<class... A> int FUN_10b1a750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b1a760(void);
template<class... A> int FUN_10b1a760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b1a770(void);
template<class... A> int FUN_10b1a770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b1a780(void);
template<class... A> int FUN_10b1a780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b1aca0(undefined4 *param_1);
template<class... A> int FUN_10b1aca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bc00(undefined4 *param_1);
template<class... A> int FUN_10b1bc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bc30(undefined4 *param_1);
template<class... A> int FUN_10b1bc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bc40(undefined4 *param_1);
template<class... A> int FUN_10b1bc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bc50(undefined4 *param_1);
template<class... A> int FUN_10b1bc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bc60(undefined4 *param_1);
template<class... A> int FUN_10b1bc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bc70(undefined4 *param_1);
template<class... A> int FUN_10b1bc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bcf0(undefined4 *param_1);
template<class... A> int FUN_10b1bcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bea0(undefined4 *param_1);
template<class... A> int FUN_10b1bea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bec0(undefined4 *param_1);
template<class... A> int FUN_10b1bec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bef0(undefined4 *param_1);
template<class... A> int FUN_10b1bef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bf10(undefined4 *param_1);
template<class... A> int FUN_10b1bf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bf40(undefined4 *param_1);
template<class... A> int FUN_10b1bf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bf60(undefined4 *param_1);
template<class... A> int FUN_10b1bf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bf90(undefined4 *param_1);
template<class... A> int FUN_10b1bf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bfb0(undefined4 *param_1);
template<class... A> int FUN_10b1bfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1bfe0(undefined4 *param_1);
template<class... A> int FUN_10b1bfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b1c000(undefined4 *param_1);
template<class... A> int FUN_10b1c000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b1c120(undefined4 *param_1);
template<class... A> int FUN_10b1c120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b1c130(undefined4 *param_1);
template<class... A> int FUN_10b1c130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b21570(void);
template<class... A> int FUN_10b21570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b21580(void);
template<class... A> int FUN_10b21580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b21590(void);
template<class... A> int FUN_10b21590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b215a0(void);
template<class... A> int FUN_10b215a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b215b0(void);
template<class... A> int FUN_10b215b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b215c0(void);
template<class... A> int FUN_10b215c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b215d0(void);
template<class... A> int FUN_10b215d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b215f0(int param_1);
template<class... A> int FUN_10b215f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b22150(undefined4 *param_1);
template<class... A> int FUN_10b22150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b22160(undefined4 *param_1);
template<class... A> int FUN_10b22160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b22350(void);
template<class... A> int FUN_10b22350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b22360(void);
template<class... A> int FUN_10b22360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b22370(void);
template<class... A> int FUN_10b22370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b22380(void);
template<class... A> int FUN_10b22380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b22390(void);
template<class... A> int FUN_10b22390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b223a0(void);
template<class... A> int FUN_10b223a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b223b0(void);
template<class... A> int FUN_10b223b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b223c0(void);
template<class... A> int FUN_10b223c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b223d0(void);
template<class... A> int FUN_10b223d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b223e0(void);
template<class... A> int FUN_10b223e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b223f0(void);
template<class... A> int FUN_10b223f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24940(undefined4 *param_1);
template<class... A> int FUN_10b24940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24970(undefined4 *param_1);
template<class... A> int FUN_10b24970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24980(undefined4 *param_1);
template<class... A> int FUN_10b24980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24990(undefined4 *param_1);
template<class... A> int FUN_10b24990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b249a0(undefined4 *param_1);
template<class... A> int FUN_10b249a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b249b0(undefined4 *param_1);
template<class... A> int FUN_10b249b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b249c0(undefined4 *param_1);
template<class... A> int FUN_10b249c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b249d0(undefined4 *param_1);
template<class... A> int FUN_10b249d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b249e0(undefined4 *param_1);
template<class... A> int FUN_10b249e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b249f0(undefined4 *param_1);
template<class... A> int FUN_10b249f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24a00(undefined4 *param_1);
template<class... A> int FUN_10b24a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24a10(undefined4 *param_1);
template<class... A> int FUN_10b24a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24a20(undefined4 *param_1);
template<class... A> int FUN_10b24a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24a50(undefined4 *param_1);
template<class... A> int FUN_10b24a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24a70(undefined4 *param_1);
template<class... A> int FUN_10b24a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24aa0(undefined4 *param_1);
template<class... A> int FUN_10b24aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24ac0(undefined4 *param_1);
template<class... A> int FUN_10b24ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24af0(undefined4 *param_1);
template<class... A> int FUN_10b24af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24b10(undefined4 *param_1);
template<class... A> int FUN_10b24b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24b40(undefined4 *param_1);
template<class... A> int FUN_10b24b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24b60(undefined4 *param_1);
template<class... A> int FUN_10b24b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24b90(undefined4 *param_1);
template<class... A> int FUN_10b24b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24bb0(undefined4 *param_1);
template<class... A> int FUN_10b24bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24be0(undefined4 *param_1);
template<class... A> int FUN_10b24be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24c00(undefined4 *param_1);
template<class... A> int FUN_10b24c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24c30(undefined4 *param_1);
template<class... A> int FUN_10b24c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24c50(undefined4 *param_1);
template<class... A> int FUN_10b24c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24c80(undefined4 *param_1);
template<class... A> int FUN_10b24c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24ca0(undefined4 *param_1);
template<class... A> int FUN_10b24ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24cd0(undefined4 *param_1);
template<class... A> int FUN_10b24cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24cf0(undefined4 *param_1);
template<class... A> int FUN_10b24cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24d20(undefined4 *param_1);
template<class... A> int FUN_10b24d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24d40(undefined4 *param_1);
template<class... A> int FUN_10b24d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24d70(undefined4 *param_1);
template<class... A> int FUN_10b24d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b24d90(undefined4 *param_1);
template<class... A> int FUN_10b24d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b2ae00(int param_1);
template<class... A> int FUN_10b2ae00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b2b0c0(int param_1);
template<class... A> int FUN_10b2b0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dc80(void);
template<class... A> int FUN_10b2dc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dc90(void);
template<class... A> int FUN_10b2dc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dca0(void);
template<class... A> int FUN_10b2dca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dcb0(void);
template<class... A> int FUN_10b2dcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dcc0(void);
template<class... A> int FUN_10b2dcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dcd0(void);
template<class... A> int FUN_10b2dcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dce0(void);
template<class... A> int FUN_10b2dce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dcf0(void);
template<class... A> int FUN_10b2dcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dd00(void);
template<class... A> int FUN_10b2dd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dd10(void);
template<class... A> int FUN_10b2dd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dd20(void);
template<class... A> int FUN_10b2dd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2dd30(void);
template<class... A> int FUN_10b2dd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b2dd50(int param_1);
template<class... A> int FUN_10b2dd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b2dd60(int param_1);
template<class... A> int FUN_10b2dd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2e4a0(int param_1);
template<class... A> int FUN_10b2e4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2e4c0(void);
template<class... A> int FUN_10b2e4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2e4d0(void);
template<class... A> int FUN_10b2e4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b2e4e0(void);
template<class... A> int FUN_10b2e4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2efd0(undefined4 *param_1);
template<class... A> int FUN_10b2efd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2f000(undefined4 *param_1);
template<class... A> int FUN_10b2f000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2f010(undefined4 *param_1);
template<class... A> int FUN_10b2f010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2f020(undefined4 *param_1);
template<class... A> int FUN_10b2f020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2f030(undefined4 *param_1);
template<class... A> int FUN_10b2f030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2f060(undefined4 *param_1);
template<class... A> int FUN_10b2f060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2f080(undefined4 *param_1);
template<class... A> int FUN_10b2f080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2f0b0(undefined4 *param_1);
template<class... A> int FUN_10b2f0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2f170(undefined4 *param_1);
template<class... A> int FUN_10b2f170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b2f190(undefined4 *param_1);
template<class... A> int FUN_10b2f190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31780(void);
template<class... A> int FUN_10b31780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31790(void);
template<class... A> int FUN_10b31790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b317a0(void);
template<class... A> int FUN_10b317a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b317b0(void);
template<class... A> int FUN_10b317b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b317d0(int param_1);
template<class... A> int FUN_10b317d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b317e0(int param_1);
template<class... A> int FUN_10b317e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b317f0(int param_1);
template<class... A> int FUN_10b317f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b31800(int param_1);
template<class... A> int FUN_10b31800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31d20(void);
template<class... A> int FUN_10b31d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31d40(void);
template<class... A> int FUN_10b31d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31d50(void);
template<class... A> int FUN_10b31d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31d60(void);
template<class... A> int FUN_10b31d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31d70(void);
template<class... A> int FUN_10b31d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31d80(void);
template<class... A> int FUN_10b31d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31d90(void);
template<class... A> int FUN_10b31d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31da0(void);
template<class... A> int FUN_10b31da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31db0(void);
template<class... A> int FUN_10b31db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31dc0(void);
template<class... A> int FUN_10b31dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31dd0(void);
template<class... A> int FUN_10b31dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b31de0(void);
template<class... A> int FUN_10b31de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34ad0(undefined4 *param_1);
template<class... A> int FUN_10b34ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b00(undefined4 *param_1);
template<class... A> int FUN_10b34b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b10(undefined4 *param_1);
template<class... A> int FUN_10b34b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b20(undefined4 *param_1);
template<class... A> int FUN_10b34b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b30(undefined4 *param_1);
template<class... A> int FUN_10b34b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b40(undefined4 *param_1);
template<class... A> int FUN_10b34b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b50(undefined4 *param_1);
template<class... A> int FUN_10b34b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b60(undefined4 *param_1);
template<class... A> int FUN_10b34b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b70(undefined4 *param_1);
template<class... A> int FUN_10b34b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b80(undefined4 *param_1);
template<class... A> int FUN_10b34b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34b90(undefined4 *param_1);
template<class... A> int FUN_10b34b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34ba0(undefined4 *param_1);
template<class... A> int FUN_10b34ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34bb0(undefined4 *param_1);
template<class... A> int FUN_10b34bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34c30(undefined4 *param_1);
template<class... A> int FUN_10b34c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34c60(undefined4 *param_1);
template<class... A> int FUN_10b34c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34c90(undefined4 *param_1);
template<class... A> int FUN_10b34c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34cc0(undefined4 *param_1);
template<class... A> int FUN_10b34cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34d40(undefined4 *param_1);
template<class... A> int FUN_10b34d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b34d70(undefined4 *param_1);
template<class... A> int FUN_10b34d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35060(undefined4 *param_1);
template<class... A> int FUN_10b35060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35080(undefined4 *param_1);
template<class... A> int FUN_10b35080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b350b0(undefined4 *param_1);
template<class... A> int FUN_10b350b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b350d0(undefined4 *param_1);
template<class... A> int FUN_10b350d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35100(undefined4 *param_1);
template<class... A> int FUN_10b35100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35120(undefined4 *param_1);
template<class... A> int FUN_10b35120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35150(undefined4 *param_1);
template<class... A> int FUN_10b35150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35170(undefined4 *param_1);
template<class... A> int FUN_10b35170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b351a0(undefined4 *param_1);
template<class... A> int FUN_10b351a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b351c0(undefined4 *param_1);
template<class... A> int FUN_10b351c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b351f0(undefined4 *param_1);
template<class... A> int FUN_10b351f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35210(undefined4 *param_1);
template<class... A> int FUN_10b35210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35240(undefined4 *param_1);
template<class... A> int FUN_10b35240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35260(undefined4 *param_1);
template<class... A> int FUN_10b35260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35290(undefined4 *param_1);
template<class... A> int FUN_10b35290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b352b0(undefined4 *param_1);
template<class... A> int FUN_10b352b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b352e0(undefined4 *param_1);
template<class... A> int FUN_10b352e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35300(undefined4 *param_1);
template<class... A> int FUN_10b35300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35330(undefined4 *param_1);
template<class... A> int FUN_10b35330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35350(undefined4 *param_1);
template<class... A> int FUN_10b35350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b35380(undefined4 *param_1);
template<class... A> int FUN_10b35380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b354b0(undefined4 *param_1);
template<class... A> int FUN_10b354b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b41ac0(int param_1);
template<class... A> int FUN_10b41ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b41e30(int param_1);
template<class... A> int FUN_10b41e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b41e40(int param_1);
template<class... A> int FUN_10b41e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b41e50(int param_1);
template<class... A> int FUN_10b41e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b41ec0(int param_1);
template<class... A> int FUN_10b41ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45de0(void);
template<class... A> int FUN_10b45de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45df0(void);
template<class... A> int FUN_10b45df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e00(void);
template<class... A> int FUN_10b45e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e10(void);
template<class... A> int FUN_10b45e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e20(void);
template<class... A> int FUN_10b45e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e30(void);
template<class... A> int FUN_10b45e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e40(void);
template<class... A> int FUN_10b45e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e50(void);
template<class... A> int FUN_10b45e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e60(void);
template<class... A> int FUN_10b45e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e70(void);
template<class... A> int FUN_10b45e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e80(void);
template<class... A> int FUN_10b45e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45e90(void);
template<class... A> int FUN_10b45e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b45ea0(void);
template<class... A> int FUN_10b45ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b45eb0(int param_1);
template<class... A> int FUN_10b45eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b45f20(int param_1);
template<class... A> int FUN_10b45f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b45f40(int param_1);
template<class... A> int FUN_10b45f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b45f50(int param_1);
template<class... A> int FUN_10b45f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b45f60(int param_1);
template<class... A> int FUN_10b45f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b48870(void);
template<class... A> int FUN_10b48870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b48880(void);
template<class... A> int FUN_10b48880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b48890(void);
template<class... A> int FUN_10b48890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b488a0(void);
template<class... A> int FUN_10b488a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b488b0(void);
template<class... A> int FUN_10b488b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b488c0(void);
template<class... A> int FUN_10b488c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b488d0(void);
template<class... A> int FUN_10b488d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b488e0(void);
template<class... A> int FUN_10b488e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a350(undefined4 *param_1);
template<class... A> int FUN_10b4a350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a380(undefined4 *param_1);
template<class... A> int FUN_10b4a380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a390(undefined4 *param_1);
template<class... A> int FUN_10b4a390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a3a0(undefined4 *param_1);
template<class... A> int FUN_10b4a3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a3b0(undefined4 *param_1);
template<class... A> int FUN_10b4a3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a3c0(undefined4 *param_1);
template<class... A> int FUN_10b4a3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a3d0(undefined4 *param_1);
template<class... A> int FUN_10b4a3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a3e0(undefined4 *param_1);
template<class... A> int FUN_10b4a3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a3f0(undefined4 *param_1);
template<class... A> int FUN_10b4a3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a400(undefined4 *param_1);
template<class... A> int FUN_10b4a400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a430(undefined4 *param_1);
template<class... A> int FUN_10b4a430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a450(undefined4 *param_1);
template<class... A> int FUN_10b4a450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a480(undefined4 *param_1);
template<class... A> int FUN_10b4a480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a4a0(undefined4 *param_1);
template<class... A> int FUN_10b4a4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a4d0(undefined4 *param_1);
template<class... A> int FUN_10b4a4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a4f0(undefined4 *param_1);
template<class... A> int FUN_10b4a4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a520(undefined4 *param_1);
template<class... A> int FUN_10b4a520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a540(undefined4 *param_1);
template<class... A> int FUN_10b4a540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a570(undefined4 *param_1);
template<class... A> int FUN_10b4a570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a590(undefined4 *param_1);
template<class... A> int FUN_10b4a590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a5c0(undefined4 *param_1);
template<class... A> int FUN_10b4a5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a5e0(undefined4 *param_1);
template<class... A> int FUN_10b4a5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a610(undefined4 *param_1);
template<class... A> int FUN_10b4a610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a630(undefined4 *param_1);
template<class... A> int FUN_10b4a630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a660(undefined4 *param_1);
template<class... A> int FUN_10b4a660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b4a680(undefined4 *param_1);
template<class... A> int FUN_10b4a680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4f8e0(void);
template<class... A> int FUN_10b4f8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4f8f0(void);
template<class... A> int FUN_10b4f8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4f900(void);
template<class... A> int FUN_10b4f900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4f910(void);
template<class... A> int FUN_10b4f910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4f920(void);
template<class... A> int FUN_10b4f920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4f930(void);
template<class... A> int FUN_10b4f930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4f940(void);
template<class... A> int FUN_10b4f940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4f950(void);
template<class... A> int FUN_10b4f950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4f960(void);
template<class... A> int FUN_10b4f960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4fd20(void);
template<class... A> int FUN_10b4fd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4fd30(void);
template<class... A> int FUN_10b4fd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4fd40(void);
template<class... A> int FUN_10b4fd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4fd50(void);
template<class... A> int FUN_10b4fd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4fd60(void);
template<class... A> int FUN_10b4fd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b4fd70(void);
template<class... A> int FUN_10b4fd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b515f0(undefined4 *param_1);
template<class... A> int FUN_10b515f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51620(undefined4 *param_1);
template<class... A> int FUN_10b51620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51630(undefined4 *param_1);
template<class... A> int FUN_10b51630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51640(undefined4 *param_1);
template<class... A> int FUN_10b51640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51650(undefined4 *param_1);
template<class... A> int FUN_10b51650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51660(undefined4 *param_1);
template<class... A> int FUN_10b51660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51670(undefined4 *param_1);
template<class... A> int FUN_10b51670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51680(undefined4 *param_1);
template<class... A> int FUN_10b51680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b516b0(undefined4 *param_1);
template<class... A> int FUN_10b516b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b516e0(undefined4 *param_1);
template<class... A> int FUN_10b516e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51710(undefined4 *param_1);
template<class... A> int FUN_10b51710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51740(undefined4 *param_1);
template<class... A> int FUN_10b51740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51760(undefined4 *param_1);
template<class... A> int FUN_10b51760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51790(undefined4 *param_1);
template<class... A> int FUN_10b51790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b517b0(undefined4 *param_1);
template<class... A> int FUN_10b517b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b517e0(undefined4 *param_1);
template<class... A> int FUN_10b517e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51800(undefined4 *param_1);
template<class... A> int FUN_10b51800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51830(undefined4 *param_1);
template<class... A> int FUN_10b51830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51850(undefined4 *param_1);
template<class... A> int FUN_10b51850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b51880(undefined4 *param_1);
template<class... A> int FUN_10b51880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b518a0(undefined4 *param_1);
template<class... A> int FUN_10b518a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b518d0(undefined4 *param_1);
template<class... A> int FUN_10b518d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b518f0(undefined4 *param_1);
template<class... A> int FUN_10b518f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54bb0(void);
template<class... A> int FUN_10b54bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54bc0(void);
template<class... A> int FUN_10b54bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54bd0(void);
template<class... A> int FUN_10b54bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54be0(void);
template<class... A> int FUN_10b54be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54bf0(void);
template<class... A> int FUN_10b54bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54c00(void);
template<class... A> int FUN_10b54c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54c10(void);
template<class... A> int FUN_10b54c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54ca0(void);
template<class... A> int FUN_10b54ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54cb0(void);
template<class... A> int FUN_10b54cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b54cc0(void);
template<class... A> int FUN_10b54cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b55790(undefined4 *param_1);
template<class... A> int FUN_10b55790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b557c0(undefined4 *param_1);
template<class... A> int FUN_10b557c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b557d0(undefined4 *param_1);
template<class... A> int FUN_10b557d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b557e0(undefined4 *param_1);
template<class... A> int FUN_10b557e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b557f0(undefined4 *param_1);
template<class... A> int FUN_10b557f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b55820(undefined4 *param_1);
template<class... A> int FUN_10b55820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b55840(undefined4 *param_1);
template<class... A> int FUN_10b55840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b55870(undefined4 *param_1);
template<class... A> int FUN_10b55870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b55890(undefined4 *param_1);
template<class... A> int FUN_10b55890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b558c0(undefined4 *param_1);
template<class... A> int FUN_10b558c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b558e0(undefined4 *param_1);
template<class... A> int FUN_10b558e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b58270(void);
template<class... A> int FUN_10b58270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b58280(void);
template<class... A> int FUN_10b58280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b58290(void);
template<class... A> int FUN_10b58290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b582a0(void);
template<class... A> int FUN_10b582a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b582c0(int param_1);
template<class... A> int FUN_10b582c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b585c0(void);
template<class... A> int FUN_10b585c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b58bc0(undefined4 *param_1);
template<class... A> int FUN_10b58bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b58bd0(undefined4 *param_1);
template<class... A> int FUN_10b58bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b58c00(undefined4 *param_1);
template<class... A> int FUN_10b58c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b58c30(undefined4 *param_1);
template<class... A> int FUN_10b58c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b58c50(undefined4 *param_1);
template<class... A> int FUN_10b58c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b59400(void);
template<class... A> int FUN_10b59400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b59410(void);
template<class... A> int FUN_10b59410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b59450(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b59450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b59730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10b59730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b599a0(undefined4 *param_1);
template<class... A> int FUN_10b599a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b599c0(void);
template<class... A> int FUN_10b599c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b599d0(void);
template<class... A> int FUN_10b599d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b599f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b599f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b59a00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b59a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b59a10(void);
template<class... A> int FUN_10b59a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b59f50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10b59f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b59ff0(undefined4 *param_1);
template<class... A> int FUN_10b59ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a000(undefined4 param_1);
template<class... A> int FUN_10b5a000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10b5a010(int param_1,SCStr *param_2);
template<class... A> int FUN_10b5a010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a180(undefined4 param_1);
template<class... A> int FUN_10b5a180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a190(undefined4 param_1);
template<class... A> int FUN_10b5a190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a1a0(undefined4 param_1);
template<class... A> int FUN_10b5a1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a1b0(undefined4 param_1);
template<class... A> int FUN_10b5a1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a1c0(undefined4 param_1);
template<class... A> int FUN_10b5a1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b5a1d0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10b5a1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b5a200(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10b5a200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a2a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b5a2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a2c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b5a2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a2e0(undefined4 param_1);
template<class... A> int FUN_10b5a2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a2f0(undefined4 param_1);
template<class... A> int FUN_10b5a2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a300(undefined4 param_1);
template<class... A> int FUN_10b5a300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a310(undefined4 param_1);
template<class... A> int FUN_10b5a310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a320(undefined4 param_1);
template<class... A> int FUN_10b5a320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a330(undefined4 param_1);
template<class... A> int FUN_10b5a330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a340(undefined4 param_1);
template<class... A> int FUN_10b5a340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a350(undefined4 param_1);
template<class... A> int FUN_10b5a350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a360(undefined4 param_1);
template<class... A> int FUN_10b5a360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a370(void);
template<class... A> int FUN_10b5a370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a380(void);
template<class... A> int FUN_10b5a380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a390(void);
template<class... A> int FUN_10b5a390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a3a0(void);
template<class... A> int FUN_10b5a3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a3b0(void);
template<class... A> int FUN_10b5a3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a3c0(void);
template<class... A> int FUN_10b5a3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a3d0(void);
template<class... A> int FUN_10b5a3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a3e0(void);
template<class... A> int FUN_10b5a3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a3f0(void);
template<class... A> int FUN_10b5a3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a400(void);
template<class... A> int FUN_10b5a400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a410(void);
template<class... A> int FUN_10b5a410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a420(void);
template<class... A> int FUN_10b5a420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a430(void);
template<class... A> int FUN_10b5a430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a440(void);
template<class... A> int FUN_10b5a440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5a450(void);
template<class... A> int FUN_10b5a450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10b5a5c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10b5a5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b5b550(undefined4 *param_1);
template<class... A> int FUN_10b5b550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5b570(undefined4 param_1);
template<class... A> int FUN_10b5b570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d910(undefined4 *param_1);
template<class... A> int FUN_10b5d910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d940(undefined4 *param_1);
template<class... A> int FUN_10b5d940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d950(undefined4 *param_1);
template<class... A> int FUN_10b5d950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d960(undefined4 *param_1);
template<class... A> int FUN_10b5d960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d970(undefined4 *param_1);
template<class... A> int FUN_10b5d970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d980(undefined4 *param_1);
template<class... A> int FUN_10b5d980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d990(undefined4 *param_1);
template<class... A> int FUN_10b5d990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d9a0(undefined4 *param_1);
template<class... A> int FUN_10b5d9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d9b0(undefined4 *param_1);
template<class... A> int FUN_10b5d9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d9c0(undefined4 *param_1);
template<class... A> int FUN_10b5d9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d9d0(undefined4 *param_1);
template<class... A> int FUN_10b5d9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d9e0(undefined4 *param_1);
template<class... A> int FUN_10b5d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5d9f0(undefined4 *param_1);
template<class... A> int FUN_10b5d9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5da00(undefined4 *param_1);
template<class... A> int FUN_10b5da00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5da10(undefined4 *param_1);
template<class... A> int FUN_10b5da10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5da20(undefined4 *param_1);
template<class... A> int FUN_10b5da20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dbc0(undefined4 *param_1);
template<class... A> int FUN_10b5dbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dbf0(undefined4 *param_1);
template<class... A> int FUN_10b5dbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dc10(undefined4 *param_1);
template<class... A> int FUN_10b5dc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dc40(undefined4 *param_1);
template<class... A> int FUN_10b5dc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dc60(undefined4 *param_1);
template<class... A> int FUN_10b5dc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dc90(undefined4 *param_1);
template<class... A> int FUN_10b5dc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dcb0(undefined4 *param_1);
template<class... A> int FUN_10b5dcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dce0(undefined4 *param_1);
template<class... A> int FUN_10b5dce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dd00(undefined4 *param_1);
template<class... A> int FUN_10b5dd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dd30(undefined4 *param_1);
template<class... A> int FUN_10b5dd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dd50(undefined4 *param_1);
template<class... A> int FUN_10b5dd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dd80(undefined4 *param_1);
template<class... A> int FUN_10b5dd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dda0(undefined4 *param_1);
template<class... A> int FUN_10b5dda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5ddd0(undefined4 *param_1);
template<class... A> int FUN_10b5ddd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5ddf0(undefined4 *param_1);
template<class... A> int FUN_10b5ddf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5de20(undefined4 *param_1);
template<class... A> int FUN_10b5de20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5de40(undefined4 *param_1);
template<class... A> int FUN_10b5de40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5de70(undefined4 *param_1);
template<class... A> int FUN_10b5de70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5de90(undefined4 *param_1);
template<class... A> int FUN_10b5de90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dec0(undefined4 *param_1);
template<class... A> int FUN_10b5dec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dee0(undefined4 *param_1);
template<class... A> int FUN_10b5dee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5df10(undefined4 *param_1);
template<class... A> int FUN_10b5df10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5df30(undefined4 *param_1);
template<class... A> int FUN_10b5df30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5df60(undefined4 *param_1);
template<class... A> int FUN_10b5df60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5df80(undefined4 *param_1);
template<class... A> int FUN_10b5df80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dfb0(undefined4 *param_1);
template<class... A> int FUN_10b5dfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5dfd0(undefined4 *param_1);
template<class... A> int FUN_10b5dfd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5e000(undefined4 *param_1);
template<class... A> int FUN_10b5e000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5e020(undefined4 *param_1);
template<class... A> int FUN_10b5e020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5e050(undefined4 *param_1);
template<class... A> int FUN_10b5e050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5e070(undefined4 *param_1);
template<class... A> int FUN_10b5e070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b5e320(int *param_1);
template<class... A> int FUN_10b5e320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b5e330(int *param_1);
template<class... A> int FUN_10b5e330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b5e340(int *param_1);
template<class... A> int FUN_10b5e340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5f590(undefined4 *param_1);
template<class... A> int FUN_10b5f590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b5f5e0(int param_1);
template<class... A> int FUN_10b5f5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b5f600(undefined4 param_1);
template<class... A> int FUN_10b5f600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5f610(undefined4 param_1);
template<class... A> int FUN_10b5f610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5f620(undefined4 param_1);
template<class... A> int FUN_10b5f620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5f630(undefined4 param_1);
template<class... A> int FUN_10b5f630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5f640(undefined4 param_1);
template<class... A> int FUN_10b5f640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5f650(undefined4 param_1);
template<class... A> int FUN_10b5f650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5f660(undefined4 param_1);
template<class... A> int FUN_10b5f660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5f670(undefined4 param_1);
template<class... A> int FUN_10b5f670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5f680(undefined4 param_1);
template<class... A> int FUN_10b5f680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10b5f990(int param_1);
template<class... A> int FUN_10b5f990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10b5f9c0(int *param_1);
template<class... A> int FUN_10b5f9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5f9f0(int param_1);
template<class... A> int FUN_10b5f9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b5fa70(uint param_1);
template<class... A> int FUN_10b5fa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b5fb00(undefined4 *param_1);
template<class... A> int FUN_10b5fb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b60920(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10b60920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b60970(int param_1,int param_2);
template<class... A> int FUN_10b60970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b609e0(int param_1);
template<class... A> int FUN_10b609e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b470(void);
template<class... A> int FUN_10b6b470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b480(void);
template<class... A> int FUN_10b6b480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b490(void);
template<class... A> int FUN_10b6b490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b4a0(void);
template<class... A> int FUN_10b6b4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b4b0(void);
template<class... A> int FUN_10b6b4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b4c0(void);
template<class... A> int FUN_10b6b4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b4d0(void);
template<class... A> int FUN_10b6b4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b4e0(void);
template<class... A> int FUN_10b6b4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b4f0(void);
template<class... A> int FUN_10b6b4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b500(void);
template<class... A> int FUN_10b6b500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b510(void);
template<class... A> int FUN_10b6b510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b520(void);
template<class... A> int FUN_10b6b520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b530(void);
template<class... A> int FUN_10b6b530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b540(void);
template<class... A> int FUN_10b6b540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b550(void);
template<class... A> int FUN_10b6b550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6b560(void);
template<class... A> int FUN_10b6b560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b6b880(int param_1);
template<class... A> int FUN_10b6b880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6bae0(void);
template<class... A> int FUN_10b6bae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6baf0(void);
template<class... A> int FUN_10b6baf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6c1f0(undefined4 param_1);
template<class... A> int FUN_10b6c1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b6ca40(undefined4 param_1);
template<class... A> int FUN_10b6ca40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b6cc20(void);
template<class... A> int FUN_10b6cc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b6cc30(void);
template<class... A> int FUN_10b6cc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b6ccd0(undefined4 *param_1);
template<class... A> int FUN_10b6ccd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b6cd00(undefined4 *param_1);
template<class... A> int FUN_10b6cd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b6cf40(undefined4 *param_1);
template<class... A> int FUN_10b6cf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b6cf60(undefined4 *param_1);
template<class... A> int FUN_10b6cf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b6cf80(undefined4 *param_1);
template<class... A> int FUN_10b6cf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b6cfa0(undefined4 *param_1);
template<class... A> int FUN_10b6cfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b6d080(undefined4 *param_1);
template<class... A> int FUN_10b6d080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b6d090(undefined4 *param_1);
template<class... A> int FUN_10b6d090(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10b6d370(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b6d810(undefined4 *param_1);
template<class... A> int FUN_10b6d810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b6d820(undefined4 *param_1);
template<class... A> int FUN_10b6d820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b6d830(undefined4 *param_1);
template<class... A> int FUN_10b6d830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b6daf0(undefined4 *param_1);
template<class... A> int FUN_10b6daf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b6db00(undefined4 *param_1);
template<class... A> int FUN_10b6db00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b6db10(undefined4 *param_1);
template<class... A> int FUN_10b6db10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b6db20(int *param_1);
template<class... A> int FUN_10b6db20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b6db30(undefined4 *param_1);
template<class... A> int FUN_10b6db30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b6db40(int *param_1);
template<class... A> int FUN_10b6db40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b6db50(undefined4 *param_1);
template<class... A> int FUN_10b6db50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b6dd70(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10b6dd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b6e340(undefined4 *param_1);
template<class... A> int FUN_10b6e340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b6e350(undefined4 *param_1);
template<class... A> int FUN_10b6e350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b6fea0(int param_1);
template<class... A> int FUN_10b6fea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b6ff00(int param_1);
template<class... A> int FUN_10b6ff00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b71250(void);
template<class... A> int FUN_10b71250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b71260(void);
template<class... A> int FUN_10b71260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b716f0(int param_1);
template<class... A> int FUN_10b716f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b719c0(int *param_1);
template<class... A> int FUN_10b719c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b719d0(int *param_1);
template<class... A> int FUN_10b719d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b719e0(int *param_1);
template<class... A> int FUN_10b719e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b71b00(int *param_1);
template<class... A> int FUN_10b71b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b71b10(int *param_1);
template<class... A> int FUN_10b71b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b71b20(int *param_1);
template<class... A> int FUN_10b71b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b71b50(int param_1);
template<class... A> int FUN_10b71b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b721a0(undefined4 *param_1);
template<class... A> int FUN_10b721a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b721b0(undefined4 *param_1);
template<class... A> int FUN_10b721b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b721c0(undefined4 *param_1);
template<class... A> int FUN_10b721c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b72760(undefined4 *param_1);
template<class... A> int FUN_10b72760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b72790(undefined4 *param_1);
template<class... A> int FUN_10b72790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b727c0(undefined4 *param_1);
template<class... A> int FUN_10b727c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b727f0(int *param_1);
template<class... A> int FUN_10b727f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b72d90(undefined4 param_1);
template<class... A> int FUN_10b72d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b72da0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b72da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b72db0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b72db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b72dc0(undefined4 param_1);
template<class... A> int FUN_10b72dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b72dd0(undefined4 *param_1,int *param_2);
template<class... A> int FUN_10b72dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b72e80(undefined4 param_1);
template<class... A> int FUN_10b72e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b72e90(undefined4 param_1);
template<class... A> int FUN_10b72e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b72ea0(undefined4 param_1);
template<class... A> int FUN_10b72ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_10b72eb0(undefined4 *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10b72eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b731c0(int *param_1);
template<class... A> int FUN_10b731c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b731d0(undefined4 *param_1);
template<class... A> int FUN_10b731d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b731e0(int *param_1);
template<class... A> int FUN_10b731e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b731f0(int *param_1);
template<class... A> int FUN_10b731f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b750d0(char *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                   char param_5);
template<class... A> int FUN_10b750d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b75330(int param_1);
template<class... A> int FUN_10b75330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10b754f0(SCStr *param_1);
template<class... A> int FUN_10b754f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10b756c0(SCStr *param_1);
template<class... A> int FUN_10b756c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10b756e0(SCStr *param_1);
template<class... A> int FUN_10b756e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b75840(int param_1);
template<class... A> int FUN_10b75840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b75850(int param_1);
template<class... A> int FUN_10b75850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10b75860(SCStr *param_1);
template<class... A> int FUN_10b75860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b75880(undefined4 *param_1);
template<class... A> int FUN_10b75880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b759d0(undefined4 param_1);
template<class... A> int FUN_10b759d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b75ba0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b75ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b75c80(undefined4 param_1);
template<class... A> int FUN_10b75c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b75f20(undefined4 param_1);
template<class... A> int FUN_10b75f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b75f30(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10b75f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b75f80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b75f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b75fa0(undefined4 param_1);
template<class... A> int FUN_10b75fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b75fb0(undefined4 param_1);
template<class... A> int FUN_10b75fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b75fc0(undefined4 *param_1);
template<class... A> int FUN_10b75fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b76010(undefined4 *param_1);
template<class... A> int FUN_10b76010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b76eb0(int *param_1);
template<class... A> int FUN_10b76eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b76ec0(undefined4 *param_1);
template<class... A> int FUN_10b76ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b76ed0(int *param_1);
template<class... A> int FUN_10b76ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b76ee0(undefined4 *param_1);
template<class... A> int FUN_10b76ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b76ef0(undefined4 *param_1);
template<class... A> int FUN_10b76ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b76f00(int *param_1);
template<class... A> int FUN_10b76f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b76f10(int *param_1);
template<class... A> int FUN_10b76f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b76f20(int *param_1);
template<class... A> int FUN_10b76f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b76f30(int *param_1);
template<class... A> int FUN_10b76f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b76f40(int *param_1);
template<class... A> int FUN_10b76f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b76f50(undefined4 *param_1);
template<class... A> int FUN_10b76f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b76f60(undefined4 *param_1);
template<class... A> int FUN_10b76f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b76f70(undefined4 *param_1);
template<class... A> int FUN_10b76f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b76f80(undefined4 *param_1);
template<class... A> int FUN_10b76f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b76f90(int *param_1);
template<class... A> int FUN_10b76f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b772c0(int param_1);
template<class... A> int FUN_10b772c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b772e0(float *param_1);
template<class... A> int FUN_10b772e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b777c0(undefined4 param_1);
template<class... A> int FUN_10b777c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b777d0(undefined4 param_1);
template<class... A> int FUN_10b777d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b777e0(undefined4 param_1);
template<class... A> int FUN_10b777e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b77870(undefined4 param_1);
template<class... A> int FUN_10b77870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b778f0(void);
template<class... A> int FUN_10b778f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b779b0(int param_1);
template<class... A> int FUN_10b779b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b77a00(int param_1,int param_2,int param_3);
template<class... A> int FUN_10b77a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b77aa0(int param_1);
template<class... A> int FUN_10b77aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b77ab0(int param_1);
template<class... A> int FUN_10b77ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b77b30(int param_1);
template<class... A> int FUN_10b77b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b77e50(int param_1,int param_2);
template<class... A> int FUN_10b77e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10b7a700(float *param_1);
template<class... A> int FUN_10b7a700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b7a710(void);
template<class... A> int FUN_10b7a710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b7a720(void);
template<class... A> int FUN_10b7a720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b7a730(void);
template<class... A> int FUN_10b7a730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b7a740(void);
template<class... A> int FUN_10b7a740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b7aa80(undefined4 param_1);
template<class... A> int FUN_10b7aa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b7aa90(undefined4 *param_1);
template<class... A> int FUN_10b7aa90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b7ad40(int param_1);
template<class... A> int FUN_10b7ad40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b7b640(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10b7b640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b7bad0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10b7bad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b7bb10(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10b7bb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b7bb50(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10b7bb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b7bb90(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10b7bb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b7bbd0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10b7bbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b7bc10(void);
template<class... A> int FUN_10b7bc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b7bc20(void);
template<class... A> int FUN_10b7bc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b7bc30(void);
template<class... A> int FUN_10b7bc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b7bc40(void);
template<class... A> int FUN_10b7bc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7bce0(undefined4 *param_1);
template<class... A> int FUN_10b7bce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7bd10(undefined4 *param_1);
template<class... A> int FUN_10b7bd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7bd40(undefined4 *param_1);
template<class... A> int FUN_10b7bd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7bd70(undefined4 *param_1);
template<class... A> int FUN_10b7bd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7bda0(undefined4 *param_1);
template<class... A> int FUN_10b7bda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7c130(undefined4 *param_1);
template<class... A> int FUN_10b7c130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7c180(undefined4 *param_1);
template<class... A> int FUN_10b7c180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7c1a0(undefined4 *param_1);
template<class... A> int FUN_10b7c1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7c200(undefined4 *param_1);
template<class... A> int FUN_10b7c200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7c650(undefined4 *param_1);
template<class... A> int FUN_10b7c650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7c660(undefined4 *param_1);
template<class... A> int FUN_10b7c660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7c670(undefined4 *param_1);
template<class... A> int FUN_10b7c670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7c680(undefined4 *param_1);
template<class... A> int FUN_10b7c680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b7c690(undefined4 *param_1);
template<class... A> int FUN_10b7c690(A...);
/* WARNING: Removing unreachable block_10b7cb20 (ram,0x101ba14a) */ void __fastcall FUN_10b7cb20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cb30(undefined4 *param_1);
template<class... A> int FUN_10b7cb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cb70(undefined4 *param_1);
template<class... A> int FUN_10b7cb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cb90(undefined4 *param_1);
template<class... A> int FUN_10b7cb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cbb0(undefined4 *param_1);
template<class... A> int FUN_10b7cbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cbd0(undefined4 *param_1);
template<class... A> int FUN_10b7cbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cbf0(undefined4 *param_1);
template<class... A> int FUN_10b7cbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cc10(undefined4 *param_1);
template<class... A> int FUN_10b7cc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cc30(undefined4 *param_1);
template<class... A> int FUN_10b7cc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cc50(undefined4 *param_1);
template<class... A> int FUN_10b7cc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7cc70(undefined4 *param_1);
template<class... A> int FUN_10b7cc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d300(undefined4 *param_1);
template<class... A> int FUN_10b7d300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d330(undefined4 *param_1);
template<class... A> int FUN_10b7d330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d360(undefined4 *param_1);
template<class... A> int FUN_10b7d360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d390(undefined4 *param_1);
template<class... A> int FUN_10b7d390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d490(undefined4 *param_1);
template<class... A> int FUN_10b7d490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d4a0(undefined4 *param_1);
template<class... A> int FUN_10b7d4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d4b0(undefined4 *param_1);
template<class... A> int FUN_10b7d4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d4c0(undefined4 *param_1);
template<class... A> int FUN_10b7d4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d4d0(undefined4 *param_1);
template<class... A> int FUN_10b7d4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d4e0(undefined4 *param_1);
template<class... A> int FUN_10b7d4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d590(undefined4 *param_1);
template<class... A> int FUN_10b7d590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b7d6d0(undefined4 *param_1);
template<class... A> int FUN_10b7d6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b7d7f0(undefined4 *param_1);
template<class... A> int FUN_10b7d7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b7d800(undefined4 *param_1);
template<class... A> int FUN_10b7d800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b7d810(undefined4 *param_1);
template<class... A> int FUN_10b7d810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b7d820(int *param_1);
template<class... A> int FUN_10b7d820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b7d830(int *param_1);
template<class... A> int FUN_10b7d830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b7d840(int param_1);
template<class... A> int FUN_10b7d840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b7d850(undefined4 *param_1);
template<class... A> int FUN_10b7d850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_10b7fbf0(undefined4 *param_1,int param_2);
template<class... A> int FUN_10b7fbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_10b7fc60(undefined4 *param_1,int param_2);
template<class... A> int FUN_10b7fc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_10b7fcd0(undefined4 *param_1,int param_2);
template<class... A> int FUN_10b7fcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b80300(undefined4 *param_1);
template<class... A> int FUN_10b80300(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);
extern void __fastcall FUN_1049fae0(void *param_1);
extern void __fastcall FUN_106de7d0(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RUpnpAVTEndDirectControlSessionAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpSPReplaceAccountXAIOOp_;
extern int ghidra_vftable_SCNewWizPageFor_SCMockWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCMolassesWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNfcTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNfcUserTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCOffLanUpdateTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCOperationsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCPopupDemoWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCProductAssetsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRiveDemoWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSlideshowWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonanceDetectionWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSpeedyWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSuperWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCTimingWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCVideoDemoWizard_;

extern int ghidra_vftable_SCNewWizPageFor_SCMockWizard__SCMockWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCMolassesWizard__SCMolassesWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNfcTestWizard__SCNfcTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCNfcUserTestWizard__SCNfcUserTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCOffLanUpdateTestWizard__SCOffLanUpdateTestWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCOperationsWizard__SCOperationsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCPopupDemoWizard__SCPopupDemoWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCProductAssetsWizard__SCProductAssetsWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCRiveDemoWizard__SCRiveDemoWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSlideshowWizard__SCSlideshowWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSonanceDetectionWizard__SCSonanceDetectionWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSpeedyWizard__SCSpeedyWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCSuperWizard__SCSuperWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCTimingWizard__SCTimingWizard_;
extern int ghidra_vftable_SCNewWizPageFor_SCVideoDemoWizard__SCVideoDemoWizard_;

// Reference entry 10abdac0; body size 11 bytes.
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_106d91c0(int a1,int a2);
extern int __stdcall thunk_FUN_10af3f70(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10bcef80(int a1,int a2);
extern int __stdcall thunk_FUN_10c5f430(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4cc0(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4d80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb4e80(int a1,int a2);
extern int __stdcall thunk_FUN_10eb64f0(int a1);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_6_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_11_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1); };
struct SCVtbl_11_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1,int a2); };
struct SCVtbl_15_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(void); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
int FUN_1008cfec();
int FUN_1000d2bf();
int FUN_1005f5e2();
int FUN_10002e55();
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
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
template<class... A> int FUN_10024127(A...);
template<class... A> int FUN_1005c743(A...);
#line 1 "ENTRY_10abdac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdad0; body size 11 bytes.
#line 1 "ENTRY_10abdad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdae0; body size 11 bytes.
#line 1 "ENTRY_10abdae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdaf0; body size 11 bytes.
#line 1 "ENTRY_10abdaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdaf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb00; body size 11 bytes.
#line 1 "ENTRY_10abdb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb10; body size 11 bytes.
#line 1 "ENTRY_10abdb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb20; body size 11 bytes.
#line 1 "ENTRY_10abdb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb30; body size 11 bytes.
#line 1 "ENTRY_10abdb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb40; body size 11 bytes.
#line 1 "ENTRY_10abdb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb50; body size 11 bytes.
#line 1 "ENTRY_10abdb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb60; body size 11 bytes.
#line 1 "ENTRY_10abdb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb70; body size 11 bytes.
#line 1 "ENTRY_10abdb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb80; body size 11 bytes.
#line 1 "ENTRY_10abdb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdb90; body size 11 bytes.
#line 1 "ENTRY_10abdb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdb90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdba0; body size 11 bytes.
#line 1 "ENTRY_10abdba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdbb0; body size 11 bytes.
#line 1 "ENTRY_10abdbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdbb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdbc0; body size 11 bytes.
#line 1 "ENTRY_10abdbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdbc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdbd0; body size 11 bytes.
#line 1 "ENTRY_10abdbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdbd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdbe0; body size 11 bytes.
#line 1 "ENTRY_10abdbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdbe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdbf0; body size 11 bytes.
#line 1 "ENTRY_10abdbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdbf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc00; body size 11 bytes.
#line 1 "ENTRY_10abdc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc10; body size 11 bytes.
#line 1 "ENTRY_10abdc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc20; body size 11 bytes.
#line 1 "ENTRY_10abdc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc30; body size 11 bytes.
#line 1 "ENTRY_10abdc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc40; body size 11 bytes.
#line 1 "ENTRY_10abdc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc50; body size 11 bytes.
#line 1 "ENTRY_10abdc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc60; body size 11 bytes.
#line 1 "ENTRY_10abdc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc70; body size 11 bytes.
#line 1 "ENTRY_10abdc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc80; body size 11 bytes.
#line 1 "ENTRY_10abdc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdc90; body size 11 bytes.
#line 1 "ENTRY_10abdc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdc90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdca0; body size 11 bytes.
#line 1 "ENTRY_10abdca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdcb0; body size 11 bytes.
#line 1 "ENTRY_10abdcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdcb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdcc0; body size 11 bytes.
#line 1 "ENTRY_10abdcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdcc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdcd0; body size 11 bytes.
#line 1 "ENTRY_10abdcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdcd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdce0; body size 11 bytes.
#line 1 "ENTRY_10abdce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdcf0; body size 11 bytes.
#line 1 "ENTRY_10abdcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdcf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdd00; body size 11 bytes.
#line 1 "ENTRY_10abdd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdd00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10abdd10; body size 38 bytes.
#line 1 "ENTRY_10abdd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdd10(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abdd40; body size 21 bytes.
#line 1 "ENTRY_10abdd40"

__declspec(naked) void FUN_10abdd40(void)

{
  __asm mov dword ptr [LAB_121a4938], 0
  __asm mov dword ptr [ecx], offset LAB_118fd464
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abdd60; body size 38 bytes.
#line 1 "ENTRY_10abdd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdd60(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abdd90; body size 21 bytes.
#line 1 "ENTRY_10abdd90"

__declspec(naked) void FUN_10abdd90(void)

{
  __asm mov dword ptr [LAB_121a4974], 0
  __asm mov dword ptr [ecx], offset LAB_118fd8c4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abddb0; body size 38 bytes.
#line 1 "ENTRY_10abddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abddb0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abdde0; body size 21 bytes.
#line 1 "ENTRY_10abdde0"

__declspec(naked) void FUN_10abdde0(void)

{
  __asm mov dword ptr [LAB_121a4980], 0
  __asm mov dword ptr [ecx], offset LAB_118fd990
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abde00; body size 38 bytes.
#line 1 "ENTRY_10abde00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abde00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abde30; body size 21 bytes.
#line 1 "ENTRY_10abde30"

__declspec(naked) void FUN_10abde30(void)

{
  __asm mov dword ptr [LAB_121a4978], 0
  __asm mov dword ptr [ecx], offset LAB_118fd908
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abde50; body size 38 bytes.
#line 1 "ENTRY_10abde50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abde50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abde80; body size 21 bytes.
#line 1 "ENTRY_10abde80"

__declspec(naked) void FUN_10abde80(void)

{
  __asm mov dword ptr [LAB_121a4984], 0
  __asm mov dword ptr [ecx], offset LAB_118fd9d4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abdea0; body size 38 bytes.
#line 1 "ENTRY_10abdea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdea0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abded0; body size 21 bytes.
#line 1 "ENTRY_10abded0"

__declspec(naked) void FUN_10abded0(void)

{
  __asm mov dword ptr [LAB_121a4988], 0
  __asm mov dword ptr [ecx], offset LAB_118fda28
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abdef0; body size 38 bytes.
#line 1 "ENTRY_10abdef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdef0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abdf20; body size 21 bytes.
#line 1 "ENTRY_10abdf20"

__declspec(naked) void FUN_10abdf20(void)

{
  __asm mov dword ptr [LAB_121a497c], 0
  __asm mov dword ptr [ecx], offset LAB_118fd94c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abdf40; body size 38 bytes.
#line 1 "ENTRY_10abdf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdf40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abdf70; body size 21 bytes.
#line 1 "ENTRY_10abdf70"

__declspec(naked) void FUN_10abdf70(void)

{
  __asm mov dword ptr [LAB_121a499c], 0
  __asm mov dword ptr [ecx], offset LAB_118fdbb4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abdf90; body size 38 bytes.
#line 1 "ENTRY_10abdf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdf90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abdfc0; body size 21 bytes.
#line 1 "ENTRY_10abdfc0"

__declspec(naked) void FUN_10abdfc0(void)

{
  __asm mov dword ptr [LAB_121a4998], 0
  __asm mov dword ptr [ecx], offset LAB_118fdb60
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abdfe0; body size 38 bytes.
#line 1 "ENTRY_10abdfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abdfe0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe010; body size 21 bytes.
#line 1 "ENTRY_10abe010"

__declspec(naked) void FUN_10abe010(void)

{
  __asm mov dword ptr [LAB_121a4994], 0
  __asm mov dword ptr [ecx], offset LAB_118fdb14
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe030; body size 38 bytes.
#line 1 "ENTRY_10abe030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe030(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe060; body size 21 bytes.
#line 1 "ENTRY_10abe060"

__declspec(naked) void FUN_10abe060(void)

{
  __asm mov dword ptr [LAB_121a4990], 0
  __asm mov dword ptr [ecx], offset LAB_118fdacc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe080; body size 38 bytes.
#line 1 "ENTRY_10abe080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe080(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe0b0; body size 21 bytes.
#line 1 "ENTRY_10abe0b0"

__declspec(naked) void FUN_10abe0b0(void)

{
  __asm mov dword ptr [LAB_121a498c], 0
  __asm mov dword ptr [ecx], offset LAB_118fda80
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe0d0; body size 38 bytes.
#line 1 "ENTRY_10abe0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe0d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe100; body size 21 bytes.
#line 1 "ENTRY_10abe100"

__declspec(naked) void FUN_10abe100(void)

{
  __asm mov dword ptr [LAB_121a4918], 0
  __asm mov dword ptr [ecx], offset LAB_118fd1fc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe120; body size 38 bytes.
#line 1 "ENTRY_10abe120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe120(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe150; body size 21 bytes.
#line 1 "ENTRY_10abe150"

__declspec(naked) void FUN_10abe150(void)

{
  __asm mov dword ptr [LAB_121a4924], 0
  __asm mov dword ptr [ecx], offset LAB_118fd2dc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe170; body size 38 bytes.
#line 1 "ENTRY_10abe170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe170(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe1a0; body size 21 bytes.
#line 1 "ENTRY_10abe1a0"

__declspec(naked) void FUN_10abe1a0(void)

{
  __asm mov dword ptr [LAB_121a4920], 0
  __asm mov dword ptr [ecx], offset LAB_118fd290
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe1c0; body size 38 bytes.
#line 1 "ENTRY_10abe1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe1c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe1f0; body size 21 bytes.
#line 1 "ENTRY_10abe1f0"

__declspec(naked) void FUN_10abe1f0(void)

{
  __asm mov dword ptr [LAB_121a491c], 0
  __asm mov dword ptr [ecx], offset LAB_118fd240
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe210; body size 38 bytes.
#line 1 "ENTRY_10abe210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe210(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe240; body size 21 bytes.
#line 1 "ENTRY_10abe240"

__declspec(naked) void FUN_10abe240(void)

{
  __asm mov dword ptr [LAB_121a4910], 0
  __asm mov dword ptr [ecx], offset LAB_118fd184
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe260; body size 38 bytes.
#line 1 "ENTRY_10abe260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe260(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe290; body size 21 bytes.
#line 1 "ENTRY_10abe290"

__declspec(naked) void FUN_10abe290(void)

{
  __asm mov dword ptr [LAB_121a4914], 0
  __asm mov dword ptr [ecx], offset LAB_118fd1c0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe2b0; body size 38 bytes.
#line 1 "ENTRY_10abe2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe2b0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe2e0; body size 21 bytes.
#line 1 "ENTRY_10abe2e0"

__declspec(naked) void FUN_10abe2e0(void)

{
  __asm mov dword ptr [LAB_121a4940], 0
  __asm mov dword ptr [ecx], offset LAB_118fd500
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe300; body size 38 bytes.
#line 1 "ENTRY_10abe300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe300(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe330; body size 21 bytes.
#line 1 "ENTRY_10abe330"

__declspec(naked) void FUN_10abe330(void)

{
  __asm mov dword ptr [LAB_121a4944], 0
  __asm mov dword ptr [ecx], offset LAB_118fd53c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe350; body size 38 bytes.
#line 1 "ENTRY_10abe350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe350(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe380; body size 21 bytes.
#line 1 "ENTRY_10abe380"

__declspec(naked) void FUN_10abe380(void)

{
  __asm mov dword ptr [LAB_121a4948], 0
  __asm mov dword ptr [ecx], offset LAB_118fd588
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe3a0; body size 38 bytes.
#line 1 "ENTRY_10abe3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe3a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe3d0; body size 21 bytes.
#line 1 "ENTRY_10abe3d0"

__declspec(naked) void FUN_10abe3d0(void)

{
  __asm mov dword ptr [LAB_121a4968], 0
  __asm mov dword ptr [ecx], offset LAB_118fd7f4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe3f0; body size 38 bytes.
#line 1 "ENTRY_10abe3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe3f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe420; body size 21 bytes.
#line 1 "ENTRY_10abe420"

__declspec(naked) void FUN_10abe420(void)

{
  __asm mov dword ptr [LAB_121a495c], 0
  __asm mov dword ptr [ecx], offset LAB_118fd720
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe440; body size 38 bytes.
#line 1 "ENTRY_10abe440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe440(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe470; body size 21 bytes.
#line 1 "ENTRY_10abe470"

__declspec(naked) void FUN_10abe470(void)

{
  __asm mov dword ptr [LAB_121a4964], 0
  __asm mov dword ptr [ecx], offset LAB_118fd7ac
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe490; body size 38 bytes.
#line 1 "ENTRY_10abe490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe490(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe4c0; body size 21 bytes.
#line 1 "ENTRY_10abe4c0"

__declspec(naked) void FUN_10abe4c0(void)

{
  __asm mov dword ptr [LAB_121a4960], 0
  __asm mov dword ptr [ecx], offset LAB_118fd764
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe4e0; body size 38 bytes.
#line 1 "ENTRY_10abe4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe4e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe510; body size 21 bytes.
#line 1 "ENTRY_10abe510"

__declspec(naked) void FUN_10abe510(void)

{
  __asm mov dword ptr [LAB_121a496c], 0
  __asm mov dword ptr [ecx], offset LAB_118fd838
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe530; body size 38 bytes.
#line 1 "ENTRY_10abe530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe530(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe560; body size 21 bytes.
#line 1 "ENTRY_10abe560"

__declspec(naked) void FUN_10abe560(void)

{
  __asm mov dword ptr [LAB_121a4970], 0
  __asm mov dword ptr [ecx], offset LAB_118fd880
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe580; body size 38 bytes.
#line 1 "ENTRY_10abe580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe580(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe5b0; body size 21 bytes.
#line 1 "ENTRY_10abe5b0"

__declspec(naked) void FUN_10abe5b0(void)

{
  __asm mov dword ptr [LAB_121a4934], 0
  __asm mov dword ptr [ecx], offset LAB_118fd41c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe5d0; body size 38 bytes.
#line 1 "ENTRY_10abe5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe5d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe600; body size 21 bytes.
#line 1 "ENTRY_10abe600"

__declspec(naked) void FUN_10abe600(void)

{
  __asm mov dword ptr [LAB_121a4930], 0
  __asm mov dword ptr [ecx], offset LAB_118fd3d0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe620; body size 38 bytes.
#line 1 "ENTRY_10abe620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe620(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe650; body size 21 bytes.
#line 1 "ENTRY_10abe650"

__declspec(naked) void FUN_10abe650(void)

{
  __asm mov dword ptr [LAB_121a493c], 0
  __asm mov dword ptr [ecx], offset LAB_118fd4ac
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe670; body size 38 bytes.
#line 1 "ENTRY_10abe670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe670(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe6a0; body size 21 bytes.
#line 1 "ENTRY_10abe6a0"

__declspec(naked) void FUN_10abe6a0(void)

{
  __asm mov dword ptr [LAB_121a4950], 0
  __asm mov dword ptr [ecx], offset LAB_118fd62c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe6c0; body size 38 bytes.
#line 1 "ENTRY_10abe6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe6c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe6f0; body size 21 bytes.
#line 1 "ENTRY_10abe6f0"

__declspec(naked) void FUN_10abe6f0(void)

{
  __asm mov dword ptr [LAB_121a494c], 0
  __asm mov dword ptr [ecx], offset LAB_118fd5d4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe710; body size 38 bytes.
#line 1 "ENTRY_10abe710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe710(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe740; body size 21 bytes.
#line 1 "ENTRY_10abe740"

__declspec(naked) void FUN_10abe740(void)

{
  __asm mov dword ptr [LAB_121a4958], 0
  __asm mov dword ptr [ecx], offset LAB_118fd6d4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe760; body size 38 bytes.
#line 1 "ENTRY_10abe760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe760(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe790; body size 21 bytes.
#line 1 "ENTRY_10abe790"

__declspec(naked) void FUN_10abe790(void)

{
  __asm mov dword ptr [LAB_121a490c], 0
  __asm mov dword ptr [ecx], offset LAB_118fd144
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe7b0; body size 38 bytes.
#line 1 "ENTRY_10abe7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe7b0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe7e0; body size 21 bytes.
#line 1 "ENTRY_10abe7e0"

__declspec(naked) void FUN_10abe7e0(void)

{
  __asm mov dword ptr [LAB_121a4928], 0
  __asm mov dword ptr [ecx], offset LAB_118fd334
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe800; body size 38 bytes.
#line 1 "ENTRY_10abe800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe800(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe830; body size 21 bytes.
#line 1 "ENTRY_10abe830"

__declspec(naked) void FUN_10abe830(void)

{
  __asm mov dword ptr [LAB_121a492c], 0
  __asm mov dword ptr [ecx], offset LAB_118fd37c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10abe850; body size 38 bytes.
#line 1 "ENTRY_10abe850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10abe850(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10abe880; body size 21 bytes.
#line 1 "ENTRY_10abe880"

__declspec(naked) void FUN_10abe880(void)

{
  __asm mov dword ptr [LAB_121a4954], 0
  __asm mov dword ptr [ecx], offset LAB_118fd690
  __asm jmp LAB_1003c4f2
}





// Reference entry 10ad6ed0; body size 23 bytes.
#line 1 "ENTRY_10ad6ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ad6ed0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xe8));
  return (SCStr *)(param_2);
}


// Reference entry 10ae4ad0; body size 6 bytes.
#line 1 "ENTRY_10ae4ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4ad0(void)

{
  return (undefined4)(DAT_121a4938);
}


// Reference entry 10ae4ae0; body size 6 bytes.
#line 1 "ENTRY_10ae4ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4ae0(void)

{
  return (undefined4)(DAT_121a4974);
}


// Reference entry 10ae4af0; body size 6 bytes.
#line 1 "ENTRY_10ae4af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4af0(void)

{
  return (undefined4)(DAT_121a4980);
}


// Reference entry 10ae4b00; body size 6 bytes.
#line 1 "ENTRY_10ae4b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b00(void)

{
  return (undefined4)(DAT_121a4978);
}


// Reference entry 10ae4b10; body size 6 bytes.
#line 1 "ENTRY_10ae4b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b10(void)

{
  return (undefined4)(DAT_121a4984);
}


// Reference entry 10ae4b20; body size 6 bytes.
#line 1 "ENTRY_10ae4b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b20(void)

{
  return (undefined4)(DAT_121a4988);
}


// Reference entry 10ae4b30; body size 6 bytes.
#line 1 "ENTRY_10ae4b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b30(void)

{
  return (undefined4)(DAT_121a497c);
}


// Reference entry 10ae4b40; body size 6 bytes.
#line 1 "ENTRY_10ae4b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b40(void)

{
  return (undefined4)(DAT_121a499c);
}


// Reference entry 10ae4b50; body size 6 bytes.
#line 1 "ENTRY_10ae4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b50(void)

{
  return (undefined4)(DAT_121a4998);
}


// Reference entry 10ae4b60; body size 6 bytes.
#line 1 "ENTRY_10ae4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b60(void)

{
  return (undefined4)(DAT_121a4994);
}


// Reference entry 10ae4b70; body size 6 bytes.
#line 1 "ENTRY_10ae4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b70(void)

{
  return (undefined4)(DAT_121a4990);
}


// Reference entry 10ae4b80; body size 6 bytes.
#line 1 "ENTRY_10ae4b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b80(void)

{
  return (undefined4)(DAT_121a498c);
}


// Reference entry 10ae4b90; body size 6 bytes.
#line 1 "ENTRY_10ae4b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4b90(void)

{
  return (undefined4)(DAT_121a4918);
}


// Reference entry 10ae4ba0; body size 6 bytes.
#line 1 "ENTRY_10ae4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4ba0(void)

{
  return (undefined4)(DAT_121a4924);
}


// Reference entry 10ae4bb0; body size 6 bytes.
#line 1 "ENTRY_10ae4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4bb0(void)

{
  return (undefined4)(DAT_121a4920);
}


// Reference entry 10ae4bc0; body size 6 bytes.
#line 1 "ENTRY_10ae4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4bc0(void)

{
  return (undefined4)(DAT_121a491c);
}


// Reference entry 10ae4bd0; body size 6 bytes.
#line 1 "ENTRY_10ae4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4bd0(void)

{
  return (undefined4)(DAT_121a4910);
}


// Reference entry 10ae4be0; body size 6 bytes.
#line 1 "ENTRY_10ae4be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4be0(void)

{
  return (undefined4)(DAT_121a4914);
}


// Reference entry 10ae4bf0; body size 6 bytes.
#line 1 "ENTRY_10ae4bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4bf0(void)

{
  return (undefined4)(DAT_121a4940);
}


// Reference entry 10ae4c00; body size 6 bytes.
#line 1 "ENTRY_10ae4c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c00(void)

{
  return (undefined4)(DAT_121a4944);
}


// Reference entry 10ae4c10; body size 6 bytes.
#line 1 "ENTRY_10ae4c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c10(void)

{
  return (undefined4)(DAT_121a4948);
}


// Reference entry 10ae4c20; body size 6 bytes.
#line 1 "ENTRY_10ae4c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c20(void)

{
  return (undefined4)(DAT_121a4968);
}


// Reference entry 10ae4c30; body size 6 bytes.
#line 1 "ENTRY_10ae4c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c30(void)

{
  return (undefined4)(DAT_121a495c);
}


// Reference entry 10ae4c40; body size 6 bytes.
#line 1 "ENTRY_10ae4c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c40(void)

{
  return (undefined4)(DAT_121a4964);
}


// Reference entry 10ae4c50; body size 6 bytes.
#line 1 "ENTRY_10ae4c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c50(void)

{
  return (undefined4)(DAT_121a4960);
}


// Reference entry 10ae4c60; body size 6 bytes.
#line 1 "ENTRY_10ae4c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c60(void)

{
  return (undefined4)(DAT_121a496c);
}


// Reference entry 10ae4c70; body size 6 bytes.
#line 1 "ENTRY_10ae4c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c70(void)

{
  return (undefined4)(DAT_121a4970);
}


// Reference entry 10ae4c80; body size 6 bytes.
#line 1 "ENTRY_10ae4c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c80(void)

{
  return (undefined4)(DAT_121a4934);
}


// Reference entry 10ae4c90; body size 6 bytes.
#line 1 "ENTRY_10ae4c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4c90(void)

{
  return (undefined4)(DAT_121a4930);
}


// Reference entry 10ae4ca0; body size 6 bytes.
#line 1 "ENTRY_10ae4ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4ca0(void)

{
  return (undefined4)(DAT_121a493c);
}


// Reference entry 10ae4cb0; body size 6 bytes.
#line 1 "ENTRY_10ae4cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4cb0(void)

{
  return (undefined4)(DAT_121a4950);
}


// Reference entry 10ae4cc0; body size 6 bytes.
#line 1 "ENTRY_10ae4cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4cc0(void)

{
  return (undefined4)(DAT_121a494c);
}


// Reference entry 10ae4cd0; body size 6 bytes.
#line 1 "ENTRY_10ae4cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4cd0(void)

{
  return (undefined4)(DAT_121a4958);
}


// Reference entry 10ae4ce0; body size 6 bytes.
#line 1 "ENTRY_10ae4ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4ce0(void)

{
  return (undefined4)(DAT_121a490c);
}


// Reference entry 10ae4cf0; body size 6 bytes.
#line 1 "ENTRY_10ae4cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4cf0(void)

{
  return (undefined4)(DAT_121a4928);
}


// Reference entry 10ae4d00; body size 6 bytes.
#line 1 "ENTRY_10ae4d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4d00(void)

{
  return (undefined4)(DAT_121a492c);
}


// Reference entry 10ae4d10; body size 6 bytes.
#line 1 "ENTRY_10ae4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4d10(void)

{
  return (undefined4)(DAT_121a4954);
}


// Reference entry 10ae4d20; body size 6 bytes.
#line 1 "ENTRY_10ae4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae4d20(void)

{
  return (undefined4)(DAT_121a4908);
}


// Reference entry 10ae5810; body size 5 bytes.
#line 1 "ENTRY_10ae5810"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ae5810(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10ae5820; body size 5 bytes.
#line 1 "ENTRY_10ae5820"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ae5820(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10ae5f70; body size 39 bytes.
#line 1 "ENTRY_10ae5f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ae5f70(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xe8));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10ae5fa0; body size 6 bytes.
#line 1 "ENTRY_10ae5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae5fa0(void)

{
  return (undefined4)(DAT_121a4a0c);
}


// Reference entry 10ae5fb0; body size 6 bytes.
#line 1 "ENTRY_10ae5fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae5fb0(void)

{
  return (undefined4)(DAT_121a4a10);
}


// Reference entry 10ae5fc0; body size 6 bytes.
#line 1 "ENTRY_10ae5fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae5fc0(void)

{
  return (undefined4)(DAT_121a4a14);
}


// Reference entry 10ae5fe0; body size 57 bytes.
#line 1 "ENTRY_10ae5fe0"

__declspec(naked) void FUN_10ae5fe0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11900ea4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11900f00
  __asm mov dword ptr [esi + 0x8c], offset LAB_11900f0c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11900f18
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae6300; body size 57 bytes.
#line 1 "ENTRY_10ae6300"

__declspec(naked) void FUN_10ae6300(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11900f3c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11900f98
  __asm mov dword ptr [esi + 0x8c], offset LAB_11900fa4
  __asm mov dword ptr [esi + 0xa8], offset LAB_11900fb0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae6450; body size 57 bytes.
#line 1 "ENTRY_10ae6450"

__declspec(naked) void FUN_10ae6450(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11900ffc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11901058
  __asm mov dword ptr [esi + 0x8c], offset LAB_11901064
  __asm mov dword ptr [esi + 0xa8], offset LAB_11901070
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae65a0; body size 57 bytes.
#line 1 "ENTRY_10ae65a0"

__declspec(naked) void FUN_10ae65a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119010b8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11901114
  __asm mov dword ptr [esi + 0x8c], offset LAB_11901120
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190112c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae66f0; body size 57 bytes.
#line 1 "ENTRY_10ae66f0"

__declspec(naked) void FUN_10ae66f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_11900d24
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11900d78
  __asm mov dword ptr [esi + 0x8c], offset LAB_11900d84
  __asm mov dword ptr [esi + 0xa8], offset LAB_11900d90
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae6a90; body size 38 bytes.
#line 1 "ENTRY_10ae6a90"

__declspec(naked) void FUN_10ae6a90(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae6ac0; body size 38 bytes.
#line 1 "ENTRY_10ae6ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ae6ac0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10ae6af0; body size 11 bytes.
#line 1 "ENTRY_10ae6af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ae6af0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10ae6b00; body size 11 bytes.
#line 1 "ENTRY_10ae6b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ae6b00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10ae6b10; body size 11 bytes.
#line 1 "ENTRY_10ae6b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ae6b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10ae6b20; body size 38 bytes.
#line 1 "ENTRY_10ae6b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ae6b20(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10ae6b50; body size 21 bytes.
#line 1 "ENTRY_10ae6b50"

__declspec(naked) void FUN_10ae6b50(void)

{
  __asm mov dword ptr [LAB_121a4a0c], 0
  __asm mov dword ptr [ecx], offset LAB_11900dcc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10ae6b70; body size 38 bytes.
#line 1 "ENTRY_10ae6b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ae6b70(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10ae6ba0; body size 21 bytes.
#line 1 "ENTRY_10ae6ba0"

__declspec(naked) void FUN_10ae6ba0(void)

{
  __asm mov dword ptr [LAB_121a4a10], 0
  __asm mov dword ptr [ecx], offset LAB_11900e0c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10ae6bc0; body size 38 bytes.
#line 1 "ENTRY_10ae6bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ae6bc0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10ae6bf0; body size 21 bytes.
#line 1 "ENTRY_10ae6bf0"

__declspec(naked) void FUN_10ae6bf0(void)

{
  __asm mov dword ptr [LAB_121a4a14], 0
  __asm mov dword ptr [ecx], offset LAB_11900e50
  __asm jmp LAB_1003c4f2
}





// Reference entry 10ae6c10; body size 5 bytes.
#line 1 "ENTRY_10ae6c10"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ae6c10(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10ae8ef0; body size 6 bytes.
#line 1 "ENTRY_10ae8ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8ef0(void)

{
  return (undefined4)(DAT_121a4a0c);
}


// Reference entry 10ae8f00; body size 6 bytes.
#line 1 "ENTRY_10ae8f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8f00(void)

{
  return (undefined4)(DAT_121a4a10);
}


// Reference entry 10ae8f10; body size 6 bytes.
#line 1 "ENTRY_10ae8f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8f10(void)

{
  return (undefined4)(DAT_121a4a14);
}


// Reference entry 10ae8f20; body size 6 bytes.
#line 1 "ENTRY_10ae8f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8f20(void)

{
  return (undefined4)(DAT_121a4a18);
}


// Reference entry 10ae8f80; body size 6 bytes.
#line 1 "ENTRY_10ae8f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8f80(void)

{
  return (undefined4)(DAT_121a4a38);
}


// Reference entry 10ae8f90; body size 6 bytes.
#line 1 "ENTRY_10ae8f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8f90(void)

{
  return (undefined4)(DAT_121a4a3c);
}


// Reference entry 10ae8fa0; body size 6 bytes.
#line 1 "ENTRY_10ae8fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8fa0(void)

{
  return (undefined4)(DAT_121a4a40);
}


// Reference entry 10ae8fb0; body size 6 bytes.
#line 1 "ENTRY_10ae8fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8fb0(void)

{
  return (undefined4)(DAT_121a4a44);
}


// Reference entry 10ae8fc0; body size 6 bytes.
#line 1 "ENTRY_10ae8fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8fc0(void)

{
  return (undefined4)(DAT_121a4a48);
}


// Reference entry 10ae8fd0; body size 6 bytes.
#line 1 "ENTRY_10ae8fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8fd0(void)

{
  return (undefined4)(DAT_121a4a4c);
}


// Reference entry 10ae8fe0; body size 6 bytes.
#line 1 "ENTRY_10ae8fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8fe0(void)

{
  return (undefined4)(DAT_121a4a50);
}


// Reference entry 10ae8ff0; body size 6 bytes.
#line 1 "ENTRY_10ae8ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ae8ff0(void)

{
  return (undefined4)(DAT_121a4a54);
}


// Reference entry 10ae9010; body size 57 bytes.
#line 1 "ENTRY_10ae9010"

__declspec(naked) void FUN_10ae9010(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11901460
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119014bc
  __asm mov dword ptr [esi + 0x8c], offset LAB_119014c8
  __asm mov dword ptr [esi + 0xa8], offset LAB_119014d4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae97e0; body size 57 bytes.
#line 1 "ENTRY_10ae97e0"

__declspec(naked) void FUN_10ae97e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119014f8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11901554
  __asm mov dword ptr [esi + 0x8c], offset LAB_11901560
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190156c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae9930; body size 57 bytes.
#line 1 "ENTRY_10ae9930"

__declspec(naked) void FUN_10ae9930(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11901630
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190168c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11901698
  __asm mov dword ptr [esi + 0xa8], offset LAB_119016a4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae9a80; body size 57 bytes.
#line 1 "ENTRY_10ae9a80"

__declspec(naked) void FUN_10ae9a80(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119016e8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11901744
  __asm mov dword ptr [esi + 0x8c], offset LAB_11901750
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190175c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae9bd0; body size 57 bytes.
#line 1 "ENTRY_10ae9bd0"

__declspec(naked) void FUN_10ae9bd0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190179c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119017f8
  __asm mov dword ptr [esi + 0x8c], offset LAB_11901804
  __asm mov dword ptr [esi + 0xa8], offset LAB_11901810
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae9d20; body size 57 bytes.
#line 1 "ENTRY_10ae9d20"

__declspec(naked) void FUN_10ae9d20(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11901834
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11901890
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190189c
  __asm mov dword ptr [esi + 0xa8], offset LAB_119018a8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae9e70; body size 57 bytes.
#line 1 "ENTRY_10ae9e70"

__declspec(naked) void FUN_10ae9e70(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11901948
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119019a4
  __asm mov dword ptr [esi + 0x8c], offset LAB_119019b0
  __asm mov dword ptr [esi + 0xa8], offset LAB_119019bc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10ae9fc0; body size 57 bytes.
#line 1 "ENTRY_10ae9fc0"

__declspec(naked) void FUN_10ae9fc0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11901a60
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11901abc
  __asm mov dword ptr [esi + 0x8c], offset LAB_11901ac8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11901ad4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10aea110; body size 57 bytes.
#line 1 "ENTRY_10aea110"

__declspec(naked) void FUN_10aea110(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11901b2c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11901b88
  __asm mov dword ptr [esi + 0x8c], offset LAB_11901b94
  __asm mov dword ptr [esi + 0xa8], offset LAB_11901ba0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10aea260; body size 57 bytes.
#line 1 "ENTRY_10aea260"

__declspec(naked) void FUN_10aea260(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_1190117c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119011d0
  __asm mov dword ptr [esi + 0x8c], offset LAB_119011dc
  __asm mov dword ptr [esi + 0xa8], offset LAB_119011e8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10aeaa50; body size 38 bytes.
#line 1 "ENTRY_10aeaa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaa50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aeaa80; body size 11 bytes.
#line 1 "ENTRY_10aeaa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaa80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aeaa90; body size 11 bytes.
#line 1 "ENTRY_10aeaa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaa90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aeaaa0; body size 11 bytes.
#line 1 "ENTRY_10aeaaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaaa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aeaab0; body size 11 bytes.
#line 1 "ENTRY_10aeaab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaab0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aeaac0; body size 11 bytes.
#line 1 "ENTRY_10aeaac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aeaad0; body size 11 bytes.
#line 1 "ENTRY_10aeaad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aeaae0; body size 11 bytes.
#line 1 "ENTRY_10aeaae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaae0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aeaaf0; body size 11 bytes.
#line 1 "ENTRY_10aeaaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaaf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10aeab00; body size 38 bytes.
#line 1 "ENTRY_10aeab00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeab00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aeab30; body size 21 bytes.
#line 1 "ENTRY_10aeab30"

__declspec(naked) void FUN_10aeab30(void)

{
  __asm mov dword ptr [LAB_121a4a38], 0
  __asm mov dword ptr [ecx], offset LAB_11901224
  __asm jmp LAB_1003c4f2
}





// Reference entry 10aeab50; body size 38 bytes.
#line 1 "ENTRY_10aeab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeab50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aeab80; body size 21 bytes.
#line 1 "ENTRY_10aeab80"

__declspec(naked) void FUN_10aeab80(void)

{
  __asm mov dword ptr [LAB_121a4a3c], 0
  __asm mov dword ptr [ecx], offset LAB_1190126c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10aeaba0; body size 38 bytes.
#line 1 "ENTRY_10aeaba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeaba0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aeabd0; body size 21 bytes.
#line 1 "ENTRY_10aeabd0"

__declspec(naked) void FUN_10aeabd0(void)

{
  __asm mov dword ptr [LAB_121a4a40], 0
  __asm mov dword ptr [ecx], offset LAB_119012b0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10aeabf0; body size 38 bytes.
#line 1 "ENTRY_10aeabf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeabf0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aeac20; body size 21 bytes.
#line 1 "ENTRY_10aeac20"

__declspec(naked) void FUN_10aeac20(void)

{
  __asm mov dword ptr [LAB_121a4a44], 0
  __asm mov dword ptr [ecx], offset LAB_119012f4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10aeac40; body size 38 bytes.
#line 1 "ENTRY_10aeac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeac40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aeac70; body size 21 bytes.
#line 1 "ENTRY_10aeac70"

__declspec(naked) void FUN_10aeac70(void)

{
  __asm mov dword ptr [LAB_121a4a48], 0
  __asm mov dword ptr [ecx], offset LAB_11901338
  __asm jmp LAB_1003c4f2
}





// Reference entry 10aeac90; body size 38 bytes.
#line 1 "ENTRY_10aeac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeac90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aeacc0; body size 21 bytes.
#line 1 "ENTRY_10aeacc0"

__declspec(naked) void FUN_10aeacc0(void)

{
  __asm mov dword ptr [LAB_121a4a4c], 0
  __asm mov dword ptr [ecx], offset LAB_1190137c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10aeace0; body size 38 bytes.
#line 1 "ENTRY_10aeace0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aeace0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aead10; body size 21 bytes.
#line 1 "ENTRY_10aead10"

__declspec(naked) void FUN_10aead10(void)

{
  __asm mov dword ptr [LAB_121a4a50], 0
  __asm mov dword ptr [ecx], offset LAB_119013c0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10aead30; body size 38 bytes.
#line 1 "ENTRY_10aead30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aead30(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10aead60; body size 21 bytes.
#line 1 "ENTRY_10aead60"

__declspec(naked) void FUN_10aead60(void)

{
  __asm mov dword ptr [LAB_121a4a54], 0
  __asm mov dword ptr [ecx], offset LAB_11901404
  __asm jmp LAB_1003c4f2
}





// Reference entry 10aead80; body size 5 bytes.
#line 1 "ENTRY_10aead80"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10aead80(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10af3430; body size 6 bytes.
#line 1 "ENTRY_10af3430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af3430(void)

{
  return (undefined4)(DAT_121a4a38);
}


// Reference entry 10af3440; body size 6 bytes.
#line 1 "ENTRY_10af3440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af3440(void)

{
  return (undefined4)(DAT_121a4a3c);
}


// Reference entry 10af3450; body size 6 bytes.
#line 1 "ENTRY_10af3450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af3450(void)

{
  return (undefined4)(DAT_121a4a40);
}


// Reference entry 10af3460; body size 6 bytes.
#line 1 "ENTRY_10af3460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af3460(void)

{
  return (undefined4)(DAT_121a4a44);
}


// Reference entry 10af3470; body size 6 bytes.
#line 1 "ENTRY_10af3470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af3470(void)

{
  return (undefined4)(DAT_121a4a48);
}


// Reference entry 10af3480; body size 6 bytes.
#line 1 "ENTRY_10af3480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af3480(void)

{
  return (undefined4)(DAT_121a4a4c);
}


// Reference entry 10af3490; body size 6 bytes.
#line 1 "ENTRY_10af3490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af3490(void)

{
  return (undefined4)(DAT_121a4a50);
}


// Reference entry 10af34a0; body size 6 bytes.
#line 1 "ENTRY_10af34a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af34a0(void)

{
  return (undefined4)(DAT_121a4a54);
}


// Reference entry 10af34b0; body size 6 bytes.
#line 1 "ENTRY_10af34b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af34b0(void)

{
  return (undefined4)(DAT_121a4a58);
}


// Reference entry 10af35c0; body size 25 bytes.
#line 1 "ENTRY_10af35c0"

__declspec(naked) void FUN_10af35c0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 10af35e0; body size 18 bytes.
#line 1 "ENTRY_10af35e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10af35e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3600; body size 18 bytes.
#line 1 "ENTRY_10af3600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10af3600(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3620; body size 22 bytes.
#line 1 "ENTRY_10af3620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af3620(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3640; body size 18 bytes.
#line 1 "ENTRY_10af3640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10af3640(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3660; body size 18 bytes.
#line 1 "ENTRY_10af3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10af3660(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3800; body size 22 bytes.
#line 1 "ENTRY_10af3800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af3800(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3820; body size 18 bytes.
#line 1 "ENTRY_10af3820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10af3820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3840; body size 11 bytes.
#line 1 "ENTRY_10af3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af3840(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3850; body size 18 bytes.
#line 1 "ENTRY_10af3850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10af3850(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3990; body size 27 bytes.
#line 1 "ENTRY_10af3990"

__declspec(naked) void FUN_10af3990(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0x10
}





// Reference entry 10af39c0; body size 35 bytes.
#line 1 "ENTRY_10af39c0"

__declspec(naked) void FUN_10af39c0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af39f0; body size 35 bytes.
#line 1 "ENTRY_10af39f0"

__declspec(naked) void FUN_10af39f0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3a20; body size 35 bytes.
#line 1 "ENTRY_10af3a20"

__declspec(naked) void FUN_10af3a20(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3a50; body size 35 bytes.
#line 1 "ENTRY_10af3a50"

__declspec(naked) void FUN_10af3a50(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3a80; body size 35 bytes.
#line 1 "ENTRY_10af3a80"

__declspec(naked) void FUN_10af3a80(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3ab0; body size 35 bytes.
#line 1 "ENTRY_10af3ab0"

__declspec(naked) void FUN_10af3ab0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3ae0; body size 35 bytes.
#line 1 "ENTRY_10af3ae0"

__declspec(naked) void FUN_10af3ae0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3b10; body size 35 bytes.
#line 1 "ENTRY_10af3b10"

__declspec(naked) void FUN_10af3b10(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3b40; body size 35 bytes.
#line 1 "ENTRY_10af3b40"

__declspec(naked) void FUN_10af3b40(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3b70; body size 35 bytes.
#line 1 "ENTRY_10af3b70"

__declspec(naked) void FUN_10af3b70(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3ba0; body size 35 bytes.
#line 1 "ENTRY_10af3ba0"

__declspec(naked) void FUN_10af3ba0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3bd0; body size 35 bytes.
#line 1 "ENTRY_10af3bd0"

__declspec(naked) void FUN_10af3bd0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3c00; body size 35 bytes.
#line 1 "ENTRY_10af3c00"

__declspec(naked) void FUN_10af3c00(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3c30; body size 35 bytes.
#line 1 "ENTRY_10af3c30"

__declspec(naked) void FUN_10af3c30(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3c60; body size 35 bytes.
#line 1 "ENTRY_10af3c60"

__declspec(naked) void FUN_10af3c60(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3c90; body size 35 bytes.
#line 1 "ENTRY_10af3c90"

__declspec(naked) void FUN_10af3c90(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3cc0; body size 35 bytes.
#line 1 "ENTRY_10af3cc0"

__declspec(naked) void FUN_10af3cc0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], eax
  __asm call LAB_1005273e
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10af3cf0; body size 11 bytes.
#line 1 "ENTRY_10af3cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af3cf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3d00; body size 11 bytes.
#line 1 "ENTRY_10af3d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af3d00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10af3d10; body size 3 bytes.
#line 1 "ENTRY_10af3d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af3d10(void)

{
  return;
}


// Reference entry 10af3d20; body size 25 bytes.
#line 1 "ENTRY_10af3d20"

__declspec(naked) void FUN_10af3d20(void)

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





// Reference entry 10af3d40; body size 25 bytes.
#line 1 "ENTRY_10af3d40"

__declspec(naked) void FUN_10af3d40(void)

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





// Reference entry 10af3ea0; body size 13 bytes.
#line 1 "ENTRY_10af3ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af3ea0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10af3eb0; body size 13 bytes.
#line 1 "ENTRY_10af3eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af3eb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10af3ec0; body size 13 bytes.
#line 1 "ENTRY_10af3ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af3ec0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10af3ed0; body size 13 bytes.
#line 1 "ENTRY_10af3ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af3ed0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10af3ee0; body size 113 bytes.
#line 1 "ENTRY_10af3ee0"

__declspec(naked) void FUN_10af3ee0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_10061fcc
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





// Reference entry 10af4150; body size 3 bytes.
#line 1 "ENTRY_10af4150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af4150(void)

{
  return;
}


// Reference entry 10af4160; body size 3 bytes.
#line 1 "ENTRY_10af4160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af4160(void)

{
  return;
}


// Reference entry 10af4770; body size 73 bytes.
#line 1 "ENTRY_10af4770"

__declspec(naked) void FUN_10af4770(void)

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
  __asm _emit 0x7d __asm _emit 0x07
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





// Reference entry 10af4830; body size 15 bytes.
#line 1 "ENTRY_10af4830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af4830(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10af4850; body size 15 bytes.
#line 1 "ENTRY_10af4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af4850(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10af4970; body size 7 bytes.
#line 1 "ENTRY_10af4970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10af4980; body size 5 bytes.
#line 1 "ENTRY_10af4980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4990; body size 5 bytes.
#line 1 "ENTRY_10af4990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af49a0; body size 31 bytes.
#line 1 "ENTRY_10af49a0"

__declspec(naked) void FUN_10af49a0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm _emit 0x7c __asm _emit 0x05
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}





// Reference entry 10af49d0; body size 31 bytes.
#line 1 "ENTRY_10af49d0"

__declspec(naked) void FUN_10af49d0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm _emit 0x7c __asm _emit 0x05
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}





// Reference entry 10af4b10; body size 7 bytes.
#line 1 "ENTRY_10af4b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4b10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10af4b20; body size 5 bytes.
#line 1 "ENTRY_10af4b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4b30; body size 5 bytes.
#line 1 "ENTRY_10af4b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4b40; body size 5 bytes.
#line 1 "ENTRY_10af4b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4b50; body size 5 bytes.
#line 1 "ENTRY_10af4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4b60; body size 5 bytes.
#line 1 "ENTRY_10af4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4b70; body size 5 bytes.
#line 1 "ENTRY_10af4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4b80; body size 5 bytes.
#line 1 "ENTRY_10af4b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4b90; body size 5 bytes.
#line 1 "ENTRY_10af4b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4ba0; body size 5 bytes.
#line 1 "ENTRY_10af4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4bb0; body size 5 bytes.
#line 1 "ENTRY_10af4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4bc0; body size 5 bytes.
#line 1 "ENTRY_10af4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4bd0; body size 25 bytes.
#line 1 "ENTRY_10af4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af4bd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  ((SCStr *)((SCStr *)(param_2 + 1)))->m_op_ctor((SCStr *)(param_3 + 1));
  return;
}


// Reference entry 10af4bf0; body size 25 bytes.
#line 1 "ENTRY_10af4bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af4bf0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  ((SCStr *)((SCStr *)(param_2 + 1)))->m_op_ctor((SCStr *)(param_3 + 1));
  return;
}


// Reference entry 10af4c10; body size 22 bytes.
#line 1 "ENTRY_10af4c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af4c10(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10af4d10; body size 15 bytes.
#line 1 "ENTRY_10af4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4d10(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10af4d30; body size 15 bytes.
#line 1 "ENTRY_10af4d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4d30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10af4d50; body size 15 bytes.
#line 1 "ENTRY_10af4d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4d50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10af4d70; body size 15 bytes.
#line 1 "ENTRY_10af4d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4d70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10af4d90; body size 5 bytes.
#line 1 "ENTRY_10af4d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4da0; body size 5 bytes.
#line 1 "ENTRY_10af4da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4db0; body size 5 bytes.
#line 1 "ENTRY_10af4db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4dc0; body size 5 bytes.
#line 1 "ENTRY_10af4dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4dd0; body size 5 bytes.
#line 1 "ENTRY_10af4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4de0; body size 5 bytes.
#line 1 "ENTRY_10af4de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4df0; body size 5 bytes.
#line 1 "ENTRY_10af4df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e00; body size 5 bytes.
#line 1 "ENTRY_10af4e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e10; body size 5 bytes.
#line 1 "ENTRY_10af4e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e20; body size 5 bytes.
#line 1 "ENTRY_10af4e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e30; body size 5 bytes.
#line 1 "ENTRY_10af4e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e40; body size 5 bytes.
#line 1 "ENTRY_10af4e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e50; body size 5 bytes.
#line 1 "ENTRY_10af4e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e60; body size 5 bytes.
#line 1 "ENTRY_10af4e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e70; body size 5 bytes.
#line 1 "ENTRY_10af4e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e80; body size 5 bytes.
#line 1 "ENTRY_10af4e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4e90; body size 5 bytes.
#line 1 "ENTRY_10af4e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4ea0; body size 5 bytes.
#line 1 "ENTRY_10af4ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4eb0; body size 5 bytes.
#line 1 "ENTRY_10af4eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4ec0; body size 5 bytes.
#line 1 "ENTRY_10af4ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af4ed0; body size 11 bytes.
#line 1 "ENTRY_10af4ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10af4ed0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10af4ee0; body size 6 bytes.
#line 1 "ENTRY_10af4ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4ee0(void)

{
  return (undefined4)(DAT_121a4a7c);
}


// Reference entry 10af4ef0; body size 6 bytes.
#line 1 "ENTRY_10af4ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4ef0(void)

{
  return (undefined4)(DAT_121a4a78);
}


// Reference entry 10af4f00; body size 6 bytes.
#line 1 "ENTRY_10af4f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4f00(void)

{
  return (undefined4)(DAT_121a4a74);
}


// Reference entry 10af4f10; body size 6 bytes.
#line 1 "ENTRY_10af4f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4f10(void)

{
  return (undefined4)(DAT_121a4a84);
}


// Reference entry 10af4f20; body size 6 bytes.
#line 1 "ENTRY_10af4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af4f20(void)

{
  return (undefined4)(DAT_121a4a80);
}


// Reference entry 10af5080; body size 5 bytes.
#line 1 "ENTRY_10af5080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af5080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af5090; body size 5 bytes.
#line 1 "ENTRY_10af5090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af5090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af50a0; body size 57 bytes.
#line 1 "ENTRY_10af50a0"

__declspec(naked) void FUN_10af50a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190229c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119022f8
  __asm mov dword ptr [esi + 0x8c], offset LAB_11902304
  __asm mov dword ptr [esi + 0xa8], offset LAB_11902310
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10af55a0; body size 18 bytes.
#line 1 "ENTRY_10af55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af55a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af55c0; body size 18 bytes.
#line 1 "ENTRY_10af55c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af55c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af5660; body size 11 bytes.
#line 1 "ENTRY_10af5660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af5660(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10af5670; body size 11 bytes.
#line 1 "ENTRY_10af5670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af5670(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10af5680; body size 51 bytes.
#line 1 "ENTRY_10af5680"

__declspec(naked) void FUN_10af5680(void)

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





// Reference entry 10af56c0; body size 11 bytes.
#line 1 "ENTRY_10af56c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af56c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10af56d0; body size 11 bytes.
#line 1 "ENTRY_10af56d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af56d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10af57e0; body size 11 bytes.
#line 1 "ENTRY_10af57e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af57e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10af57f0; body size 11 bytes.
#line 1 "ENTRY_10af57f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af57f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10af5800; body size 16 bytes.
#line 1 "ENTRY_10af5800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10af5800(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af5820; body size 16 bytes.
#line 1 "ENTRY_10af5820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10af5820(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10af5840; body size 3 bytes.
#line 1 "ENTRY_10af5840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af5840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af5850; body size 3 bytes.
#line 1 "ENTRY_10af5850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af5850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af5860; body size 18 bytes.
#line 1 "ENTRY_10af5860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af5860(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10af5b20; body size 52 bytes.
#line 1 "ENTRY_10af5b20"

__declspec(naked) void FUN_10af5b20(void)

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





// Reference entry 10af5b70; body size 35 bytes.
#line 1 "ENTRY_10af5b70"

__declspec(naked) void FUN_10af5b70(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esi], eax
  __asm lea ecx, [esi + 4]
  __asm lea eax, [edx + 4]
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10af5ba0; body size 35 bytes.
#line 1 "ENTRY_10af5ba0"

__declspec(naked) void FUN_10af5ba0(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esi], eax
  __asm lea ecx, [esi + 4]
  __asm lea eax, [edx + 4]
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10af5bd0; body size 13 bytes.
#line 1 "ENTRY_10af5bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10af5bd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10af5d80; body size 57 bytes.
#line 1 "ENTRY_10af5d80"

__declspec(naked) void FUN_10af5d80(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119023e0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190243c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11902448
  __asm mov dword ptr [esi + 0xa8], offset LAB_11902454
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10af5ed0; body size 57 bytes.
#line 1 "ENTRY_10af5ed0"

__declspec(naked) void FUN_10af5ed0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11902334
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11902390
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190239c
  __asm mov dword ptr [esi + 0xa8], offset LAB_119023a8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10af61c0; body size 57 bytes.
#line 1 "ENTRY_10af61c0"

__declspec(naked) void FUN_10af61c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11902590
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119025ec
  __asm mov dword ptr [esi + 0x8c], offset LAB_119025f8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11902604
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10af6310; body size 87 bytes.
#line 1 "ENTRY_10af6310"

__declspec(naked) void FUN_10af6310(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_1190205c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119020b0
  __asm mov dword ptr [esi + 0x8c], offset LAB_119020bc
  __asm mov dword ptr [esi + 0xa8], offset LAB_119020c8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10af68c0; body size 11 bytes.
#line 1 "ENTRY_10af68c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af68c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10af68d0; body size 11 bytes.
#line 1 "ENTRY_10af68d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af68d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10af68e0; body size 11 bytes.
#line 1 "ENTRY_10af68e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af68e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10af68f0; body size 11 bytes.
#line 1 "ENTRY_10af68f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af68f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10af6900; body size 11 bytes.
#line 1 "ENTRY_10af6900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af6900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10af6b20; body size 19 bytes.
#line 1 "ENTRY_10af6b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af6b20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10af6c80; body size 38 bytes.
#line 1 "ENTRY_10af6c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af6c80(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10af6cb0; body size 21 bytes.
#line 1 "ENTRY_10af6cb0"

__declspec(naked) void FUN_10af6cb0(void)

{
  __asm mov dword ptr [LAB_121a4a7c], 0
  __asm mov dword ptr [ecx], offset LAB_11902198
  __asm jmp LAB_1003c4f2
}





// Reference entry 10af6cd0; body size 38 bytes.
#line 1 "ENTRY_10af6cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af6cd0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10af6d00; body size 21 bytes.
#line 1 "ENTRY_10af6d00"

__declspec(naked) void FUN_10af6d00(void)

{
  __asm mov dword ptr [LAB_121a4a78], 0
  __asm mov dword ptr [ecx], offset LAB_1190214c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10af6d20; body size 38 bytes.
#line 1 "ENTRY_10af6d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af6d20(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10af6d50; body size 21 bytes.
#line 1 "ENTRY_10af6d50"

__declspec(naked) void FUN_10af6d50(void)

{
  __asm mov dword ptr [LAB_121a4a74], 0
  __asm mov dword ptr [ecx], offset LAB_11902104
  __asm jmp LAB_1003c4f2
}





// Reference entry 10af6d70; body size 38 bytes.
#line 1 "ENTRY_10af6d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af6d70(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10af6da0; body size 21 bytes.
#line 1 "ENTRY_10af6da0"

__declspec(naked) void FUN_10af6da0(void)

{
  __asm mov dword ptr [LAB_121a4a84], 0
  __asm mov dword ptr [ecx], offset LAB_11902230
  __asm jmp LAB_1003c4f2
}





// Reference entry 10af6dc0; body size 38 bytes.
#line 1 "ENTRY_10af6dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af6dc0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10af6df0; body size 21 bytes.
#line 1 "ENTRY_10af6df0"

__declspec(naked) void FUN_10af6df0(void)

{
  __asm mov dword ptr [LAB_121a4a80], 0
  __asm mov dword ptr [ecx], offset LAB_119021e4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10af6e10; body size 5 bytes.
#line 1 "ENTRY_10af6e10"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af6e10(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10af6ea0; body size 14 bytes.
#line 1 "ENTRY_10af6ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10af6ea0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10af6ec0; body size 14 bytes.
#line 1 "ENTRY_10af6ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10af6ec0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10af6ee0; body size 14 bytes.
#line 1 "ENTRY_10af6ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10af6ee0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10af6f00; body size 14 bytes.
#line 1 "ENTRY_10af6f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10af6f00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10af7010; body size 6 bytes.
#line 1 "ENTRY_10af7010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10af7010(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10af7020; body size 6 bytes.
#line 1 "ENTRY_10af7020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10af7020(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10af7030; body size 6 bytes.
#line 1 "ENTRY_10af7030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10af7030(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10af7040; body size 6 bytes.
#line 1 "ENTRY_10af7040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10af7040(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10af7050; body size 6 bytes.
#line 1 "ENTRY_10af7050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10af7050(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10af7060; body size 6 bytes.
#line 1 "ENTRY_10af7060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10af7060(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10af7070; body size 6 bytes.
#line 1 "ENTRY_10af7070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10af7070(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10af7090; body size 20 bytes.
#line 1 "ENTRY_10af7090"

__declspec(naked) void FUN_10af7090(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_1000e30e
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 10af7120; body size 20 bytes.
#line 1 "ENTRY_10af7120"

__declspec(naked) void FUN_10af7120(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_10021931
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 10af7140; body size 20 bytes.
#line 1 "ENTRY_10af7140"

__declspec(naked) void FUN_10af7140(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_1000e30e
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 10af72e0; body size 18 bytes.
#line 1 "ENTRY_10af72e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10af72e0(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 10af7300; body size 18 bytes.
#line 1 "ENTRY_10af7300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10af7300(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 10af7a60; body size 31 bytes.
#line 1 "ENTRY_10af7a60"

__declspec(naked) void FUN_10af7a60(void)

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





// Reference entry 10af7a90; body size 31 bytes.
#line 1 "ENTRY_10af7a90"

__declspec(naked) void FUN_10af7a90(void)

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





// Reference entry 10af7b00; body size 14 bytes.
#line 1 "ENTRY_10af7b00"

__declspec(naked) void FUN_10af7b00(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 10af7b20; body size 14 bytes.
#line 1 "ENTRY_10af7b20"

__declspec(naked) void FUN_10af7b20(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 10af7b40; body size 5 bytes.
#line 1 "ENTRY_10af7b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10af7b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7b50; body size 3 bytes.
#line 1 "ENTRY_10af7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7b60; body size 3 bytes.
#line 1 "ENTRY_10af7b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7b70; body size 3 bytes.
#line 1 "ENTRY_10af7b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7b80; body size 3 bytes.
#line 1 "ENTRY_10af7b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7b90; body size 3 bytes.
#line 1 "ENTRY_10af7b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7ba0; body size 3 bytes.
#line 1 "ENTRY_10af7ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7bb0; body size 3 bytes.
#line 1 "ENTRY_10af7bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7bc0; body size 3 bytes.
#line 1 "ENTRY_10af7bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7bd0; body size 3 bytes.
#line 1 "ENTRY_10af7bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7be0; body size 3 bytes.
#line 1 "ENTRY_10af7be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7bf0; body size 3 bytes.
#line 1 "ENTRY_10af7bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7c00; body size 3 bytes.
#line 1 "ENTRY_10af7c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7c20; body size 3 bytes.
#line 1 "ENTRY_10af7c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7c30; body size 3 bytes.
#line 1 "ENTRY_10af7c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af7c40; body size 3 bytes.
#line 1 "ENTRY_10af7c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af7c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10af8170; body size 79 bytes.
#line 1 "ENTRY_10af8170"

__declspec(naked) void FUN_10af8170(void)

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





// Reference entry 10af81e0; body size 79 bytes.
#line 1 "ENTRY_10af81e0"

__declspec(naked) void FUN_10af81e0(void)

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





// Reference entry 10af8250; body size 30 bytes.
#line 1 "ENTRY_10af8250"

__declspec(naked) void FUN_10af8250(void)

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





// Reference entry 10af8280; body size 30 bytes.
#line 1 "ENTRY_10af8280"

__declspec(naked) void FUN_10af8280(void)

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





// Reference entry 10af82b0; body size 31 bytes.
#line 1 "ENTRY_10af82b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10af82b0(int *param_1)

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


// Reference entry 10af82e0; body size 31 bytes.
#line 1 "ENTRY_10af82e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10af82e0(int *param_1)

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


// Reference entry 10af8310; body size 3 bytes.
#line 1 "ENTRY_10af8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10af8310(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10af8320; body size 11 bytes.
#line 1 "ENTRY_10af8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af8320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10af8330; body size 11 bytes.
#line 1 "ENTRY_10af8330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af8330(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10af8340; body size 8 bytes.
#line 1 "ENTRY_10af8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10af8340(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10af8350; body size 83 bytes.
#line 1 "ENTRY_10af8350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10af8350(int *param_2)
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


// Reference entry 10af83c0; body size 83 bytes.
#line 1 "ENTRY_10af83c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10af83c0(int *param_2)
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


// Reference entry 10af8430; body size 90 bytes.
#line 1 "ENTRY_10af8430"

__declspec(naked) void FUN_10af8430(void)

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





// Reference entry 10af84b0; body size 90 bytes.
#line 1 "ENTRY_10af84b0"

__declspec(naked) void FUN_10af84b0(void)

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





// Reference entry 10af85d0; body size 13 bytes.
#line 1 "ENTRY_10af85d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10af85d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10af85e0; body size 13 bytes.
#line 1 "ENTRY_10af85e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10af85e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10af85f0; body size 13 bytes.
#line 1 "ENTRY_10af85f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10af85f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10af8600; body size 3 bytes.
#line 1 "ENTRY_10af8600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af8600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10af8bb0; body size 57 bytes.
#line 1 "ENTRY_10af8bb0"

__declspec(naked) void FUN_10af8bb0(void)

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





// Reference entry 10af8c00; body size 57 bytes.
#line 1 "ENTRY_10af8c00"

__declspec(naked) void FUN_10af8c00(void)

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





// Reference entry 10af8c50; body size 60 bytes.
#line 1 "ENTRY_10af8c50"

__declspec(naked) void FUN_10af8c50(void)

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





// Reference entry 10af8ca0; body size 60 bytes.
#line 1 "ENTRY_10af8ca0"

__declspec(naked) void FUN_10af8ca0(void)

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





// Reference entry 10af8cf0; body size 8 bytes.
#line 1 "ENTRY_10af8cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10af8cf0(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10af8d00; body size 11 bytes.
#line 1 "ENTRY_10af8d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10af8d00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10af8d10; body size 11 bytes.
#line 1 "ENTRY_10af8d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10af8d10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10af8d20; body size 11 bytes.
#line 1 "ENTRY_10af8d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10af8d20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10af8d30; body size 4 bytes.
#line 1 "ENTRY_10af8d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10af8d30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10afd530; body size 7 bytes.
#line 1 "ENTRY_10afd530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10afd530(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xec));
}


// Reference entry 10afd540; body size 7 bytes.
#line 1 "ENTRY_10afd540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10afd540(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xe8));
}


// Reference entry 10afd550; body size 28 bytes.
#line 1 "ENTRY_10afd550"

__declspec(naked) void FUN_10afd550(void)

{
  __asm push dword ptr [ecx + 0xec]
  __asm push dword ptr [ecx + 0xe8]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_1001f8cf
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}





// Reference entry 10afd580; body size 7 bytes.
#line 1 "ENTRY_10afd580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10afd580(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xf0));
}


// Reference entry 10afd590; body size 6 bytes.
#line 1 "ENTRY_10afd590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afd590(void)

{
  return (undefined4)(DAT_121a4a7c);
}


// Reference entry 10afd5a0; body size 6 bytes.
#line 1 "ENTRY_10afd5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afd5a0(void)

{
  return (undefined4)(DAT_121a4a78);
}


// Reference entry 10afd5b0; body size 6 bytes.
#line 1 "ENTRY_10afd5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afd5b0(void)

{
  return (undefined4)(DAT_121a4a74);
}


// Reference entry 10afd5c0; body size 6 bytes.
#line 1 "ENTRY_10afd5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afd5c0(void)

{
  return (undefined4)(DAT_121a4a84);
}


// Reference entry 10afd5d0; body size 6 bytes.
#line 1 "ENTRY_10afd5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afd5d0(void)

{
  return (undefined4)(DAT_121a4a80);
}


// Reference entry 10afd5e0; body size 6 bytes.
#line 1 "ENTRY_10afd5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afd5e0(void)

{
  return (undefined4)(DAT_121a4a88);
}


// Reference entry 10afe8a0; body size 5 bytes.
#line 1 "ENTRY_10afe8a0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10afe8a0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10afe8b0; body size 5 bytes.
#line 1 "ENTRY_10afe8b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10afe8b0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10afea70; body size 7 bytes.
#line 1 "ENTRY_10afea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10afea70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10afea80; body size 6 bytes.
#line 1 "ENTRY_10afea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afea80(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10afea90; body size 6 bytes.
#line 1 "ENTRY_10afea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afea90(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10afeaa0; body size 6 bytes.
#line 1 "ENTRY_10afeaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afeaa0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10afeab0; body size 6 bytes.
#line 1 "ENTRY_10afeab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10afeab0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10aff190; body size 5 bytes.
#line 1 "ENTRY_10aff190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aff190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10aff1a0; body size 5 bytes.
#line 1 "ENTRY_10aff1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aff1a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10aff1b0; body size 5 bytes.
#line 1 "ENTRY_10aff1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aff1b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10aff1c0; body size 5 bytes.
#line 1 "ENTRY_10aff1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aff1c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10aff1d0; body size 13 bytes.
#line 1 "ENTRY_10aff1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10aff1d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xec) = (undefined4)(param_2);
  return;
}


// Reference entry 10aff1e0; body size 13 bytes.
#line 1 "ENTRY_10aff1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10aff1e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xe8) = (undefined4)(param_2);
  return;
}


// Reference entry 10aff1f0; body size 13 bytes.
#line 1 "ENTRY_10aff1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10aff1f0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xf0) = (undefined4)(param_2);
  return;
}


// Reference entry 10aff200; body size 4 bytes.
#line 1 "ENTRY_10aff200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10aff200(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10aff210; body size 6 bytes.
#line 1 "ENTRY_10aff210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aff210(void)

{
  return (undefined4)(DAT_121a4af0);
}


// Reference entry 10aff220; body size 6 bytes.
#line 1 "ENTRY_10aff220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aff220(void)

{
  return (undefined4)(DAT_121a4ae8);
}


// Reference entry 10aff230; body size 6 bytes.
#line 1 "ENTRY_10aff230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10aff230(void)

{
  return (undefined4)(DAT_121a4aec);
}


// Reference entry 10aff250; body size 57 bytes.
#line 1 "ENTRY_10aff250"

__declspec(naked) void FUN_10aff250(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119028ac
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11902908
  __asm mov dword ptr [esi + 0x8c], offset LAB_11902914
  __asm mov dword ptr [esi + 0xa8], offset LAB_11902920
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10aff570; body size 57 bytes.
#line 1 "ENTRY_10aff570"

__declspec(naked) void FUN_10aff570(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11902b30
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11902b8c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11902b98
  __asm mov dword ptr [esi + 0xa8], offset LAB_11902ba4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10aff890; body size 57 bytes.
#line 1 "ENTRY_10aff890"

__declspec(naked) void FUN_10aff890(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11902a84
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11902ae0
  __asm mov dword ptr [esi + 0x8c], offset LAB_11902aec
  __asm mov dword ptr [esi + 0xa8], offset LAB_11902af8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10aff9e0; body size 57 bytes.
#line 1 "ENTRY_10aff9e0"

__declspec(naked) void FUN_10aff9e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_1190271c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11902770
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190277c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11902788
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10affdb0; body size 11 bytes.
#line 1 "ENTRY_10affdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10affdb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10affdc0; body size 11 bytes.
#line 1 "ENTRY_10affdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10affdc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10affdd0; body size 11 bytes.
#line 1 "ENTRY_10affdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10affdd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10affde0; body size 38 bytes.
#line 1 "ENTRY_10affde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10affde0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10affe10; body size 21 bytes.
#line 1 "ENTRY_10affe10"

__declspec(naked) void FUN_10affe10(void)

{
  __asm mov dword ptr [LAB_121a4af0], 0
  __asm mov dword ptr [ecx], offset LAB_11902848
  __asm jmp LAB_1003c4f2
}





// Reference entry 10afff00; body size 21 bytes.
#line 1 "ENTRY_10afff00"

__declspec(naked) void FUN_10afff00(void)

{
  __asm mov dword ptr [LAB_121a4ae8], 0
  __asm mov dword ptr [ecx], offset LAB_119027c4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10afff20; body size 38 bytes.
#line 1 "ENTRY_10afff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10afff20(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10afff50; body size 21 bytes.
#line 1 "ENTRY_10afff50"

__declspec(naked) void FUN_10afff50(void)

{
  __asm mov dword ptr [LAB_121a4aec], 0
  __asm mov dword ptr [ecx], offset LAB_11902804
  __asm jmp LAB_1003c4f2
}





// Reference entry 10afff70; body size 5 bytes.
#line 1 "ENTRY_10afff70"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10afff70(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10b023f0; body size 6 bytes.
#line 1 "ENTRY_10b023f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b023f0(void)

{
  return (undefined4)(DAT_121a4af0);
}


// Reference entry 10b02400; body size 6 bytes.
#line 1 "ENTRY_10b02400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b02400(void)

{
  return (undefined4)(DAT_121a4ae8);
}


// Reference entry 10b02410; body size 6 bytes.
#line 1 "ENTRY_10b02410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b02410(void)

{
  return (undefined4)(DAT_121a4aec);
}


// Reference entry 10b02420; body size 6 bytes.
#line 1 "ENTRY_10b02420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b02420(void)

{
  return (undefined4)(DAT_121a4af4);
}


// Reference entry 10b02af0; body size 18 bytes.
#line 1 "ENTRY_10b02af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b02af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b02b10; body size 25 bytes.
#line 1 "ENTRY_10b02b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b02b10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b02b30; body size 22 bytes.
#line 1 "ENTRY_10b02b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b02b30(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b02c00; body size 18 bytes.
#line 1 "ENTRY_10b02c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b02c00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b02c20; body size 22 bytes.
#line 1 "ENTRY_10b02c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b02c20(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b02d80; body size 22 bytes.
#line 1 "ENTRY_10b02d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b02d80(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b02da0; body size 25 bytes.
#line 1 "ENTRY_10b02da0"

__declspec(naked) void FUN_10b02da0(void)

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





// Reference entry 10b02dc0; body size 13 bytes.
#line 1 "ENTRY_10b02dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b02dc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b02dd0; body size 13 bytes.
#line 1 "ENTRY_10b02dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b02dd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b02de0; body size 3 bytes.
#line 1 "ENTRY_10b02de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b02de0(void)

{
  return;
}


// Reference entry 10b035e0; body size 15 bytes.
#line 1 "ENTRY_10b035e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b035e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b03600; body size 15 bytes.
#line 1 "ENTRY_10b03600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b03600(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b03620; body size 7 bytes.
#line 1 "ENTRY_10b03620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b03630; body size 31 bytes.
#line 1 "ENTRY_10b03630"

__declspec(naked) void FUN_10b03630(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x10
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm _emit 0x7c __asm _emit 0x05
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}





// Reference entry 10b03660; body size 5 bytes.
#line 1 "ENTRY_10b03660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03810; body size 5 bytes.
#line 1 "ENTRY_10b03810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03820; body size 5 bytes.
#line 1 "ENTRY_10b03820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03830; body size 5 bytes.
#line 1 "ENTRY_10b03830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03840; body size 5 bytes.
#line 1 "ENTRY_10b03840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03850; body size 5 bytes.
#line 1 "ENTRY_10b03850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03860; body size 13 bytes.
#line 1 "ENTRY_10b03860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b03860(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10b03970; body size 3 bytes.
#line 1 "ENTRY_10b03970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b03970(void)

{
  return;
}


// Reference entry 10b03ad0; body size 15 bytes.
#line 1 "ENTRY_10b03ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03ad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10b03af0; body size 15 bytes.
#line 1 "ENTRY_10b03af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03af0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10b03b10; body size 5 bytes.
#line 1 "ENTRY_10b03b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03b20; body size 5 bytes.
#line 1 "ENTRY_10b03b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03b30; body size 5 bytes.
#line 1 "ENTRY_10b03b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03b40; body size 5 bytes.
#line 1 "ENTRY_10b03b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03b50; body size 5 bytes.
#line 1 "ENTRY_10b03b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03b60; body size 5 bytes.
#line 1 "ENTRY_10b03b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03b70; body size 5 bytes.
#line 1 "ENTRY_10b03b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03b80; body size 6 bytes.
#line 1 "ENTRY_10b03b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03b80(void)

{
  return (undefined4)(DAT_121a4b0c);
}


// Reference entry 10b03b90; body size 6 bytes.
#line 1 "ENTRY_10b03b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03b90(void)

{
  return (undefined4)(DAT_121a4b10);
}


// Reference entry 10b03ba0; body size 6 bytes.
#line 1 "ENTRY_10b03ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03ba0(void)

{
  return (undefined4)(DAT_121a4b14);
}


// Reference entry 10b03cc0; body size 5 bytes.
#line 1 "ENTRY_10b03cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b03cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b03cd0; body size 57 bytes.
#line 1 "ENTRY_10b03cd0"

__declspec(naked) void FUN_10b03cd0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11902dec
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11902e48
  __asm mov dword ptr [esi + 0x8c], offset LAB_11902e54
  __asm mov dword ptr [esi + 0xa8], offset LAB_11902e60
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b04100; body size 18 bytes.
#line 1 "ENTRY_10b04100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b04100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b04160; body size 11 bytes.
#line 1 "ENTRY_10b04160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b04160(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b041f0; body size 11 bytes.
#line 1 "ENTRY_10b041f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b041f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b04200; body size 16 bytes.
#line 1 "ENTRY_10b04200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b04200(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b04220; body size 21 bytes.
#line 1 "ENTRY_10b04220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b04220(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b04240; body size 23 bytes.
#line 1 "ENTRY_10b04240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b04240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b04260; body size 3 bytes.
#line 1 "ENTRY_10b04260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b04260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b04270; body size 3 bytes.
#line 1 "ENTRY_10b04270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b04270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b043a0; body size 52 bytes.
#line 1 "ENTRY_10b043a0"

__declspec(naked) void FUN_10b043a0(void)

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





// Reference entry 10b043f0; body size 23 bytes.
#line 1 "ENTRY_10b043f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b043f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b04410; body size 57 bytes.
#line 1 "ENTRY_10b04410"

__declspec(naked) void FUN_10b04410(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11902e84
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11902ee0
  __asm mov dword ptr [esi + 0x8c], offset LAB_11902eec
  __asm mov dword ptr [esi + 0xa8], offset LAB_11902ef8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b04770; body size 57 bytes.
#line 1 "ENTRY_10b04770"

__declspec(naked) void FUN_10b04770(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11903070
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119030cc
  __asm mov dword ptr [esi + 0x8c], offset LAB_119030d8
  __asm mov dword ptr [esi + 0xa8], offset LAB_119030e4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b04cf0; body size 38 bytes.
#line 1 "ENTRY_10b04cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b04cf0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b04d20; body size 11 bytes.
#line 1 "ENTRY_10b04d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b04d20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b04d30; body size 11 bytes.
#line 1 "ENTRY_10b04d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b04d30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b04d40; body size 11 bytes.
#line 1 "ENTRY_10b04d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b04d40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b04d50; body size 38 bytes.
#line 1 "ENTRY_10b04d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b04d50(undefined4 *param_1)

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


// Reference entry 10b04df0; body size 19 bytes.
#line 1 "ENTRY_10b04df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b04df0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10b04e10; body size 19 bytes.
#line 1 "ENTRY_10b04e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b04e10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10b04f90; body size 38 bytes.
#line 1 "ENTRY_10b04f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b04f90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b04fc0; body size 21 bytes.
#line 1 "ENTRY_10b04fc0"

__declspec(naked) void FUN_10b04fc0(void)

{
  __asm mov dword ptr [LAB_121a4b0c], 0
  __asm mov dword ptr [ecx], offset LAB_11902c98
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b04fe0; body size 38 bytes.
#line 1 "ENTRY_10b04fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b04fe0(undefined4 *param_1)

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


// Reference entry 10b05010; body size 21 bytes.
#line 1 "ENTRY_10b05010"

__declspec(naked) void FUN_10b05010(void)

{
  __asm mov dword ptr [LAB_121a4b10], 0
  __asm mov dword ptr [ecx], offset LAB_11902cdc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b05030; body size 38 bytes.
#line 1 "ENTRY_10b05030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b05030(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b05060; body size 21 bytes.
#line 1 "ENTRY_10b05060"

__declspec(naked) void FUN_10b05060(void)

{
  __asm mov dword ptr [LAB_121a4b14], 0
  __asm mov dword ptr [ecx], offset LAB_11902d30
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b05180; body size 15 bytes.
#line 1 "ENTRY_10b05180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10b05180(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0xc);
}


// Reference entry 10b05780; body size 31 bytes.
#line 1 "ENTRY_10b05780"

__declspec(naked) void FUN_10b05780(void)

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





// Reference entry 10b057d0; body size 62 bytes.
#line 1 "ENTRY_10b057d0"

__declspec(naked) void FUN_10b057d0(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov eax, 0x2aaaaaab
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x15555555
  __asm imul edx
  __asm push esi
  __asm _emit 0xd1 __asm _emit 0xfa
  __asm mov esi, edx
  __asm shr esi, 0x1f
  __asm add esi, edx
  __asm mov edx, esi
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub ecx, edx
  __asm cmp esi, ecx
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x15555555
  __asm pop esi
  __asm ret 4
  __asm lea eax, [edx + esi]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}





// Reference entry 10b058d0; body size 14 bytes.
#line 1 "ENTRY_10b058d0"

__declspec(naked) void FUN_10b058d0(void)

{
  __asm cmp dword ptr [ecx + 4], 0xccccccc
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 10b05910; body size 5 bytes.
#line 1 "ENTRY_10b05910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b05910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b05920; body size 3 bytes.
#line 1 "ENTRY_10b05920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b05920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b05930; body size 3 bytes.
#line 1 "ENTRY_10b05930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b05930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b05940; body size 3 bytes.
#line 1 "ENTRY_10b05940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b05940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b05950; body size 3 bytes.
#line 1 "ENTRY_10b05950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b05950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b05960; body size 3 bytes.
#line 1 "ENTRY_10b05960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b05960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b05970; body size 3 bytes.
#line 1 "ENTRY_10b05970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b05970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b05980; body size 3 bytes.
#line 1 "ENTRY_10b05980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b05980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b059a0; body size 3 bytes.
#line 1 "ENTRY_10b059a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b059a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b059b0; body size 3 bytes.
#line 1 "ENTRY_10b059b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b059b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b059c0; body size 3 bytes.
#line 1 "ENTRY_10b059c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b059c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b059d0; body size 3 bytes.
#line 1 "ENTRY_10b059d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b059d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b05c70; body size 5 bytes.
#line 1 "ENTRY_10b05c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b05c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b05cf0; body size 3 bytes.
#line 1 "ENTRY_10b05cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b05cf0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10b05d00; body size 11 bytes.
#line 1 "ENTRY_10b05d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b05d00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b05d10; body size 6 bytes.
#line 1 "ENTRY_10b05d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b05d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10b060a0; body size 3 bytes.
#line 1 "ENTRY_10b060a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b060a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b060b0; body size 4 bytes.
#line 1 "ENTRY_10b060b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b060b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b06400; body size 90 bytes.
#line 1 "ENTRY_10b06400"

__declspec(naked) void FUN_10b06400(void)

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





// Reference entry 10b06480; body size 90 bytes.
#line 1 "ENTRY_10b06480"

__declspec(naked) void FUN_10b06480(void)

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





// Reference entry 10b06500; body size 22 bytes.
#line 1 "ENTRY_10b06500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b06500(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0xc);
}


// Reference entry 10b069f0; body size 57 bytes.
#line 1 "ENTRY_10b069f0"

__declspec(naked) void FUN_10b069f0(void)

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





// Reference entry 10b06a40; body size 60 bytes.
#line 1 "ENTRY_10b06a40"

__declspec(naked) void FUN_10b06a40(void)

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





// Reference entry 10b08360; body size 7 bytes.
#line 1 "ENTRY_10b08360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b08360(int param_1)

{
  return (int)(param_1 + 0xf8);
}


// Reference entry 10b08b20; body size 6 bytes.
#line 1 "ENTRY_10b08b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b08b20(void)

{
  return (undefined4)(DAT_121a4b0c);
}


// Reference entry 10b08b30; body size 6 bytes.
#line 1 "ENTRY_10b08b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b08b30(void)

{
  return (undefined4)(DAT_121a4b10);
}


// Reference entry 10b08b40; body size 6 bytes.
#line 1 "ENTRY_10b08b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b08b40(void)

{
  return (undefined4)(DAT_121a4b14);
}


// Reference entry 10b08b50; body size 6 bytes.
#line 1 "ENTRY_10b08b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b08b50(void)

{
  return (undefined4)(DAT_121a4b18);
}


// Reference entry 10b08b60; body size 5 bytes.
#line 1 "ENTRY_10b08b60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b08b60(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10b08b80; body size 7 bytes.
#line 1 "ENTRY_10b08b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b08b80(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf4));
}


// Reference entry 10b08b90; body size 5 bytes.
#line 1 "ENTRY_10b08b90"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b08b90(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b08ba0; body size 5 bytes.
#line 1 "ENTRY_10b08ba0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b08ba0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10b08bb0; body size 5 bytes.
#line 1 "ENTRY_10b08bb0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b08bb0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b08c00; body size 6 bytes.
#line 1 "ENTRY_10b08c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b08c00(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b08c10; body size 6 bytes.
#line 1 "ENTRY_10b08c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b08c10(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10b08c20; body size 6 bytes.
#line 1 "ENTRY_10b08c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b08c20(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b08c30; body size 6 bytes.
#line 1 "ENTRY_10b08c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b08c30(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10b09830; body size 8 bytes.
#line 1 "ENTRY_10b09830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b09830(int param_1)

{
  *(undefined1*)(param_1 + 0x112) = (undefined1)(1);
  return;
}


// Reference entry 10b09840; body size 13 bytes.
#line 1 "ENTRY_10b09840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b09840(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf4) = (undefined1)(param_2);
  return;
}


// Reference entry 10b09850; body size 22 bytes.
#line 1 "ENTRY_10b09850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b09850(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0xc);
}


// Reference entry 10b09920; body size 3 bytes.
#line 1 "ENTRY_10b09920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b09920(void)

{
  return;
}


// Reference entry 10b09cb0; body size 7 bytes.
#line 1 "ENTRY_10b09cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09cb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b09cc0; body size 13 bytes.
#line 1 "ENTRY_10b09cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b09cc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10b09cd0; body size 5 bytes.
#line 1 "ENTRY_10b09cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b09ce0; body size 6 bytes.
#line 1 "ENTRY_10b09ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09ce0(void)

{
  return (undefined4)(DAT_121a4b90);
}


// Reference entry 10b09cf0; body size 6 bytes.
#line 1 "ENTRY_10b09cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09cf0(void)

{
  return (undefined4)(DAT_121a4b88);
}


// Reference entry 10b09d00; body size 6 bytes.
#line 1 "ENTRY_10b09d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d00(void)

{
  return (undefined4)(DAT_121a4b80);
}


// Reference entry 10b09d10; body size 6 bytes.
#line 1 "ENTRY_10b09d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d10(void)

{
  return (undefined4)(DAT_121a4b84);
}


// Reference entry 10b09d20; body size 6 bytes.
#line 1 "ENTRY_10b09d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d20(void)

{
  return (undefined4)(DAT_121a4b94);
}


// Reference entry 10b09d30; body size 6 bytes.
#line 1 "ENTRY_10b09d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d30(void)

{
  return (undefined4)(DAT_121a4b64);
}


// Reference entry 10b09d40; body size 6 bytes.
#line 1 "ENTRY_10b09d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d40(void)

{
  return (undefined4)(DAT_121a4b8c);
}


// Reference entry 10b09d50; body size 6 bytes.
#line 1 "ENTRY_10b09d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d50(void)

{
  return (undefined4)(DAT_121a4b98);
}


// Reference entry 10b09d60; body size 6 bytes.
#line 1 "ENTRY_10b09d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d60(void)

{
  return (undefined4)(DAT_121a4b68);
}


// Reference entry 10b09d70; body size 6 bytes.
#line 1 "ENTRY_10b09d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d70(void)

{
  return (undefined4)(DAT_121a4b6c);
}


// Reference entry 10b09d80; body size 6 bytes.
#line 1 "ENTRY_10b09d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d80(void)

{
  return (undefined4)(DAT_121a4b74);
}


// Reference entry 10b09d90; body size 6 bytes.
#line 1 "ENTRY_10b09d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09d90(void)

{
  return (undefined4)(DAT_121a4b70);
}


// Reference entry 10b09da0; body size 6 bytes.
#line 1 "ENTRY_10b09da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09da0(void)

{
  return (undefined4)(DAT_121a4b7c);
}


// Reference entry 10b09db0; body size 6 bytes.
#line 1 "ENTRY_10b09db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b09db0(void)

{
  return (undefined4)(DAT_121a4b78);
}


// Reference entry 10b09ef0; body size 57 bytes.
#line 1 "ENTRY_10b09ef0"

__declspec(naked) void FUN_10b09ef0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11903730
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190378c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11903798
  __asm mov dword ptr [esi + 0xa8], offset LAB_119037a4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0af90; body size 18 bytes.
#line 1 "ENTRY_10b0af90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b0af90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b0b100; body size 9 bytes.
#line 1 "ENTRY_10b0b100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b0b100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFirmwareDownloadCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10b0b110; body size 45 bytes.
#line 1 "ENTRY_10b0b110"

__declspec(naked) void FUN_10b0b110(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm call LAB_10045110
  __asm mov dword ptr [esi], offset LAB_11903244
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 4], offset LAB_118b8f8c
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 10b0b360; body size 57 bytes.
#line 1 "ENTRY_10b0b360"

__declspec(naked) void FUN_10b0b360(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11904228
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11904284
  __asm mov dword ptr [esi + 0x8c], offset LAB_11904290
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190429c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0b4b0; body size 84 bytes.
#line 1 "ENTRY_10b0b4b0"

__declspec(naked) void FUN_10b0b4b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi + 0xe0], offset LAB_11903238
  __asm mov eax, esi
  __asm mov dword ptr [esi], offset LAB_11903e80
  __asm mov dword ptr [esi + 0x10], offset LAB_11903edc
  __asm mov dword ptr [esi + 0x8c], offset LAB_11903ee8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11903ef4
  __asm mov dword ptr [esi + 0xe0], offset LAB_11903f18
  __asm mov byte ptr [esi + 0xe4], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0b620; body size 57 bytes.
#line 1 "ENTRY_10b0b620"

__declspec(naked) void FUN_10b0b620(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11903f88
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11903fe4
  __asm mov dword ptr [esi + 0x8c], offset LAB_11903ff0
  __asm mov dword ptr [esi + 0xa8], offset LAB_11903ffc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0b980; body size 57 bytes.
#line 1 "ENTRY_10b0b980"

__declspec(naked) void FUN_10b0b980(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119037c8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11903824
  __asm mov dword ptr [esi + 0x8c], offset LAB_11903830
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190383c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0bad0; body size 57 bytes.
#line 1 "ENTRY_10b0bad0"

__declspec(naked) void FUN_10b0bad0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11904150
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119041ac
  __asm mov dword ptr [esi + 0x8c], offset LAB_119041b8
  __asm mov dword ptr [esi + 0xa8], offset LAB_119041c4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0be30; body size 87 bytes.
#line 1 "ENTRY_10b0be30"

__declspec(naked) void FUN_10b0be30(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11903874
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119038d0
  __asm mov dword ptr [esi + 0x8c], offset LAB_119038dc
  __asm mov dword ptr [esi + 0xa8], offset LAB_119038e8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0bfa0; body size 73 bytes.
#line 1 "ENTRY_10b0bfa0"

__declspec(naked) void FUN_10b0bfa0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11903c54
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11903cb0
  __asm mov dword ptr [esi + 0x8c], offset LAB_11903cbc
  __asm mov dword ptr [esi + 0xa8], offset LAB_11903cc8
  __asm mov word ptr [esi + 0xe0], 0
  __asm mov byte ptr [esi + 0xe2], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0c100; body size 57 bytes.
#line 1 "ENTRY_10b0c100"

__declspec(naked) void FUN_10b0c100(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11903a54
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11903ab0
  __asm mov dword ptr [esi + 0x8c], offset LAB_11903abc
  __asm mov dword ptr [esi + 0xa8], offset LAB_11903ac8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0c250; body size 57 bytes.
#line 1 "ENTRY_10b0c250"

__declspec(naked) void FUN_10b0c250(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11903948
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119039a4
  __asm mov dword ptr [esi + 0x8c], offset LAB_119039b0
  __asm mov dword ptr [esi + 0xa8], offset LAB_119039bc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0c3a0; body size 93 bytes.
#line 1 "ENTRY_10b0c3a0"

__declspec(naked) void FUN_10b0c3a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11903d70
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11903dcc
  __asm mov dword ptr [esi + 0x8c], offset LAB_11903dd8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11903de4
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0xe8], 0
  __asm mov byte ptr [esi + 0xea], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0c520; body size 57 bytes.
#line 1 "ENTRY_10b0c520"

__declspec(naked) void FUN_10b0c520(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11903ba0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11903bfc
  __asm mov dword ptr [esi + 0x8c], offset LAB_11903c08
  __asm mov dword ptr [esi + 0xa8], offset LAB_11903c14
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b0d5d0; body size 38 bytes.
#line 1 "ENTRY_10b0d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d5d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0d600; body size 11 bytes.
#line 1 "ENTRY_10b0d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d610; body size 11 bytes.
#line 1 "ENTRY_10b0d610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d620; body size 11 bytes.
#line 1 "ENTRY_10b0d620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d630; body size 11 bytes.
#line 1 "ENTRY_10b0d630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d640; body size 11 bytes.
#line 1 "ENTRY_10b0d640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d650; body size 11 bytes.
#line 1 "ENTRY_10b0d650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d660; body size 11 bytes.
#line 1 "ENTRY_10b0d660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d670; body size 11 bytes.
#line 1 "ENTRY_10b0d670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d680; body size 11 bytes.
#line 1 "ENTRY_10b0d680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d690; body size 11 bytes.
#line 1 "ENTRY_10b0d690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d6a0; body size 11 bytes.
#line 1 "ENTRY_10b0d6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d6a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d6b0; body size 11 bytes.
#line 1 "ENTRY_10b0d6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d6b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d6c0; body size 11 bytes.
#line 1 "ENTRY_10b0d6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d6d0; body size 11 bytes.
#line 1 "ENTRY_10b0d6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d6d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b0d6e0; body size 38 bytes.
#line 1 "ENTRY_10b0d6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d6e0(undefined4 *param_1)

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


// Reference entry 10b0d710; body size 38 bytes.
#line 1 "ENTRY_10b0d710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d710(undefined4 *param_1)

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


// Reference entry 10b0d740; body size 38 bytes.
#line 1 "ENTRY_10b0d740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d740(undefined4 *param_1)

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


// Reference entry 10b0d7a0; body size 38 bytes.
#line 1 "ENTRY_10b0d7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d7a0(undefined4 *param_1)

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


// Reference entry 10b0d7d0; body size 21 bytes.
#line 1 "ENTRY_10b0d7d0"

__declspec(naked) void FUN_10b0d7d0(void)

{
  __asm mov dword ptr [LAB_121a4b90], 0
  __asm mov dword ptr [ecx], offset LAB_11903614
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0d7f0; body size 38 bytes.
#line 1 "ENTRY_10b0d7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d7f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0d820; body size 21 bytes.
#line 1 "ENTRY_10b0d820"

__declspec(naked) void FUN_10b0d820(void)

{
  __asm mov dword ptr [LAB_121a4b88], 0
  __asm mov dword ptr [ecx], offset LAB_1190356c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0d840; body size 38 bytes.
#line 1 "ENTRY_10b0d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d840(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0d870; body size 21 bytes.
#line 1 "ENTRY_10b0d870"

__declspec(naked) void FUN_10b0d870(void)

{
  __asm mov dword ptr [LAB_121a4b80], 0
  __asm mov dword ptr [ecx], offset LAB_119034b4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0d890; body size 38 bytes.
#line 1 "ENTRY_10b0d890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d890(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0d8c0; body size 21 bytes.
#line 1 "ENTRY_10b0d8c0"

__declspec(naked) void FUN_10b0d8c0(void)

{
  __asm mov dword ptr [LAB_121a4b84], 0
  __asm mov dword ptr [ecx], offset LAB_1190350c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0d8e0; body size 38 bytes.
#line 1 "ENTRY_10b0d8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d8e0(undefined4 *param_1)

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


// Reference entry 10b0d910; body size 21 bytes.
#line 1 "ENTRY_10b0d910"

__declspec(naked) void FUN_10b0d910(void)

{
  __asm mov dword ptr [LAB_121a4b94], 0
  __asm mov dword ptr [ecx], offset LAB_11903664
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0d930; body size 38 bytes.
#line 1 "ENTRY_10b0d930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d930(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0d960; body size 21 bytes.
#line 1 "ENTRY_10b0d960"

__declspec(naked) void FUN_10b0d960(void)

{
  __asm mov dword ptr [LAB_121a4b64], 0
  __asm mov dword ptr [ecx], offset LAB_11903254
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0d980; body size 38 bytes.
#line 1 "ENTRY_10b0d980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d980(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0d9b0; body size 21 bytes.
#line 1 "ENTRY_10b0d9b0"

__declspec(naked) void FUN_10b0d9b0(void)

{
  __asm mov dword ptr [LAB_121a4b8c], 0
  __asm mov dword ptr [ecx], offset LAB_119035c8
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0d9d0; body size 38 bytes.
#line 1 "ENTRY_10b0d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0d9d0(undefined4 *param_1)

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


#line 1 "ENTRY_10b0da00"

__declspec(naked) void FUN_10b0da00(void)

{
  __asm mov dword ptr [LAB_121a4b98], 0
  __asm mov dword ptr [ecx], offset LAB_119036bc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0da70; body size 21 bytes.
#line 1 "ENTRY_10b0da70"

__declspec(naked) void FUN_10b0da70(void)

{
  __asm mov dword ptr [LAB_121a4b68], 0
  __asm mov dword ptr [ecx], offset LAB_119032a0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0da90; body size 38 bytes.
#line 1 "ENTRY_10b0da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0da90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0dac0; body size 21 bytes.
#line 1 "ENTRY_10b0dac0"

__declspec(naked) void FUN_10b0dac0(void)

{
  __asm mov dword ptr [LAB_121a4b6c], 0
  __asm mov dword ptr [ecx], offset LAB_119032f8
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0dae0; body size 38 bytes.
#line 1 "ENTRY_10b0dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0dae0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0db10; body size 21 bytes.
#line 1 "ENTRY_10b0db10"

__declspec(naked) void FUN_10b0db10(void)

{
  __asm mov dword ptr [LAB_121a4b74], 0
  __asm mov dword ptr [ecx], offset LAB_119033a8
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0db30; body size 38 bytes.
#line 1 "ENTRY_10b0db30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0db30(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0db60; body size 21 bytes.
#line 1 "ENTRY_10b0db60"

__declspec(naked) void FUN_10b0db60(void)

{
  __asm mov dword ptr [LAB_121a4b70], 0
  __asm mov dword ptr [ecx], offset LAB_1190334c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0dc30; body size 21 bytes.
#line 1 "ENTRY_10b0dc30"

__declspec(naked) void FUN_10b0dc30(void)

{
  __asm mov dword ptr [LAB_121a4b7c], 0
  __asm mov dword ptr [ecx], offset LAB_11903460
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0dc50; body size 38 bytes.
#line 1 "ENTRY_10b0dc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b0dc50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b0dc80; body size 21 bytes.
#line 1 "ENTRY_10b0dc80"

__declspec(naked) void FUN_10b0dc80(void)

{
  __asm mov dword ptr [LAB_121a4b78], 0
  __asm mov dword ptr [ecx], offset LAB_1190340c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b0f340; body size 3 bytes.
#line 1 "ENTRY_10b0f340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b0f340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b10680; body size 4 bytes.
#line 1 "ENTRY_10b10680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b10680(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b10690; body size 7 bytes.
#line 1 "ENTRY_10b10690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b10690(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x148));
}


// Reference entry 10b14200; body size 8 bytes.
#line 1 "ENTRY_10b14200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10b14200(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x14e));
}


// Reference entry 10b148d0; body size 7 bytes.
#line 1 "ENTRY_10b148d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b148d0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x14c));
}


// Reference entry 10b149d0; body size 23 bytes.
#line 1 "ENTRY_10b149d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b149d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x144));
  return (SCStr *)(param_2);
}


// Reference entry 10b18c00; body size 28 bytes.
#line 1 "ENTRY_10b18c00"

__declspec(naked) void FUN_10b18c00(void)

{
  __asm mov ecx, dword ptr [ecx + 0x138]
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





// Reference entry 10b18c30; body size 6 bytes.
#line 1 "ENTRY_10b18c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18c30(void)

{
  return (undefined4)(DAT_121a4b90);
}


// Reference entry 10b18c40; body size 6 bytes.
#line 1 "ENTRY_10b18c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18c40(void)

{
  return (undefined4)(DAT_121a4b88);
}


// Reference entry 10b18c50; body size 6 bytes.
#line 1 "ENTRY_10b18c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18c50(void)

{
  return (undefined4)(DAT_121a4b80);
}


// Reference entry 10b18c60; body size 6 bytes.
#line 1 "ENTRY_10b18c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18c60(void)

{
  return (undefined4)(DAT_121a4b84);
}


// Reference entry 10b18c70; body size 6 bytes.
#line 1 "ENTRY_10b18c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18c70(void)

{
  return (undefined4)(DAT_121a4b94);
}


// Reference entry 10b18c80; body size 6 bytes.
#line 1 "ENTRY_10b18c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18c80(void)

{
  return (undefined4)(DAT_121a4b64);
}


// Reference entry 10b18c90; body size 6 bytes.
#line 1 "ENTRY_10b18c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18c90(void)

{
  return (undefined4)(DAT_121a4b8c);
}


// Reference entry 10b18ca0; body size 6 bytes.
#line 1 "ENTRY_10b18ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18ca0(void)

{
  return (undefined4)(DAT_121a4b98);
}


// Reference entry 10b18cb0; body size 6 bytes.
#line 1 "ENTRY_10b18cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18cb0(void)

{
  return (undefined4)(DAT_121a4b68);
}


// Reference entry 10b18cc0; body size 6 bytes.
#line 1 "ENTRY_10b18cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18cc0(void)

{
  return (undefined4)(DAT_121a4b6c);
}


// Reference entry 10b18cd0; body size 6 bytes.
#line 1 "ENTRY_10b18cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18cd0(void)

{
  return (undefined4)(DAT_121a4b74);
}


// Reference entry 10b18ce0; body size 6 bytes.
#line 1 "ENTRY_10b18ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18ce0(void)

{
  return (undefined4)(DAT_121a4b70);
}


// Reference entry 10b18cf0; body size 6 bytes.
#line 1 "ENTRY_10b18cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18cf0(void)

{
  return (undefined4)(DAT_121a4b7c);
}


// Reference entry 10b18d00; body size 6 bytes.
#line 1 "ENTRY_10b18d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18d00(void)

{
  return (undefined4)(DAT_121a4b78);
}


// Reference entry 10b18d10; body size 6 bytes.
#line 1 "ENTRY_10b18d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b18d10(void)

{
  return (undefined4)(DAT_121a4b9c);
}


// Reference entry 10b18d20; body size 5 bytes.
#line 1 "ENTRY_10b18d20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b18d20(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10b18d30; body size 5 bytes.
#line 1 "ENTRY_10b18d30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b18d30(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10b18d40; body size 5 bytes.
#line 1 "ENTRY_10b18d40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b18d40(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10b18d60; body size 23 bytes.
#line 1 "ENTRY_10b18d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b18d60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x140));
  return (SCStr *)(param_2);
}


// Reference entry 10b18d80; body size 5 bytes.
#line 1 "ENTRY_10b18d80"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b18d80(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b18d90; body size 5 bytes.
#line 1 "ENTRY_10b18d90"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b18d90(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10b18da0; body size 5 bytes.
#line 1 "ENTRY_10b18da0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b18da0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b18db0; body size 5 bytes.
#line 1 "ENTRY_10b18db0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b18db0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b18dc0; body size 5 bytes.
#line 1 "ENTRY_10b18dc0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b18dc0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b1a4b0; body size 15 bytes.
#line 1 "ENTRY_10b1a4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b1a4b0(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x14e) = (undefined2)(param_2);
  return;
}


// Reference entry 10b1a5f0; body size 13 bytes.
#line 1 "ENTRY_10b1a5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b1a5f0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x148) = (undefined4)(param_2);
  return;
}


// Reference entry 10b1a600; body size 13 bytes.
#line 1 "ENTRY_10b1a600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b1a600(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x14c) = (undefined1)(param_2);
  return;
}


// Reference entry 10b1a740; body size 6 bytes.
#line 1 "ENTRY_10b1a740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b1a740(void)

{
  return (undefined4)(DAT_121a4c10);
}


// Reference entry 10b1a750; body size 6 bytes.
#line 1 "ENTRY_10b1a750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b1a750(void)

{
  return (undefined4)(DAT_121a4c18);
}


// Reference entry 10b1a760; body size 6 bytes.
#line 1 "ENTRY_10b1a760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b1a760(void)

{
  return (undefined4)(DAT_121a4c1c);
}


// Reference entry 10b1a770; body size 6 bytes.
#line 1 "ENTRY_10b1a770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b1a770(void)

{
  return (undefined4)(DAT_121a4c0c);
}


// Reference entry 10b1a780; body size 6 bytes.
#line 1 "ENTRY_10b1a780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b1a780(void)

{
  return (undefined4)(DAT_121a4c14);
}


// Reference entry 10b1a7a0; body size 57 bytes.
#line 1 "ENTRY_10b1a7a0"

__declspec(naked) void FUN_10b1a7a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190482c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11904888
  __asm mov dword ptr [esi + 0x8c], offset LAB_11904894
  __asm mov dword ptr [esi + 0xa8], offset LAB_119048a0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b1aca0; body size 16 bytes.
#line 1 "ENTRY_10b1aca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b1aca0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b1ae70; body size 87 bytes.
#line 1 "ENTRY_10b1ae70"

__declspec(naked) void FUN_10b1ae70(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11904a00
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11904a5c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11904a68
  __asm mov dword ptr [esi + 0xa8], offset LAB_11904a74
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b1afe0; body size 57 bytes.
#line 1 "ENTRY_10b1afe0"

__declspec(naked) void FUN_10b1afe0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11904c10
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11904c6c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11904c78
  __asm mov dword ptr [esi + 0xa8], offset LAB_11904c84
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b1b130; body size 57 bytes.
#line 1 "ENTRY_10b1b130"

__declspec(naked) void FUN_10b1b130(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11904e04
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11904e60
  __asm mov dword ptr [esi + 0x8c], offset LAB_11904e6c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11904e78
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b1b280; body size 57 bytes.
#line 1 "ENTRY_10b1b280"

__declspec(naked) void FUN_10b1b280(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119048c4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11904920
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190492c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11904938
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b1b3d0; body size 57 bytes.
#line 1 "ENTRY_10b1b3d0"

__declspec(naked) void FUN_10b1b3d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11904b4c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11904ba8
  __asm mov dword ptr [esi + 0x8c], offset LAB_11904bb4
  __asm mov dword ptr [esi + 0xa8], offset LAB_11904bc0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b1b520; body size 57 bytes.
#line 1 "ENTRY_10b1b520"

__declspec(naked) void FUN_10b1b520(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_11904558
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119045ac
  __asm mov dword ptr [esi + 0x8c], offset LAB_119045b8
  __asm mov dword ptr [esi + 0xa8], offset LAB_119045c4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b1bc00; body size 38 bytes.
#line 1 "ENTRY_10b1bc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bc00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b1bc30; body size 11 bytes.
#line 1 "ENTRY_10b1bc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bc30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b1bc40; body size 11 bytes.
#line 1 "ENTRY_10b1bc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bc40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b1bc50; body size 11 bytes.
#line 1 "ENTRY_10b1bc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b1bc60; body size 11 bytes.
#line 1 "ENTRY_10b1bc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bc60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b1bc70; body size 11 bytes.
#line 1 "ENTRY_10b1bc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bc70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b1bcf0; body size 18 bytes.
#line 1 "ENTRY_10b1bcf0"

__declspec(naked) void FUN_10b1bcf0(void)

{
  __asm mov dword ptr [ecx], offset LAB_119045e8
  __asm mov dword ptr [ecx + 8], offset LAB_11904630
  __asm jmp LAB_10082ab0
}





// Reference entry 10b1bea0; body size 21 bytes.
#line 1 "ENTRY_10b1bea0"

__declspec(naked) void FUN_10b1bea0(void)

{
  __asm mov dword ptr [LAB_121a4c10], 0
  __asm mov dword ptr [ecx], offset LAB_119046f4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b1bec0; body size 38 bytes.
#line 1 "ENTRY_10b1bec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bec0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b1bef0; body size 21 bytes.
#line 1 "ENTRY_10b1bef0"

__declspec(naked) void FUN_10b1bef0(void)

{
  __asm mov dword ptr [LAB_121a4c18], 0
  __asm mov dword ptr [ecx], offset LAB_11904780
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b1bf10; body size 38 bytes.
#line 1 "ENTRY_10b1bf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bf10(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b1bf40; body size 21 bytes.
#line 1 "ENTRY_10b1bf40"

__declspec(naked) void FUN_10b1bf40(void)

{
  __asm mov dword ptr [LAB_121a4c1c], 0
  __asm mov dword ptr [ecx], offset LAB_119047c8
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b1bf60; body size 38 bytes.
#line 1 "ENTRY_10b1bf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bf60(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b1bf90; body size 21 bytes.
#line 1 "ENTRY_10b1bf90"

__declspec(naked) void FUN_10b1bf90(void)

{
  __asm mov dword ptr [LAB_121a4c0c], 0
  __asm mov dword ptr [ecx], offset LAB_119046b0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b1bfb0; body size 38 bytes.
#line 1 "ENTRY_10b1bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1bfb0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b1bfe0; body size 21 bytes.
#line 1 "ENTRY_10b1bfe0"

__declspec(naked) void FUN_10b1bfe0(void)

{
  __asm mov dword ptr [LAB_121a4c14], 0
  __asm mov dword ptr [ecx], offset LAB_11904738
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b1c000; body size 5 bytes.
#line 1 "ENTRY_10b1c000"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b1c000(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10b1c120; body size 3 bytes.
#line 1 "ENTRY_10b1c120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b1c120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b1c130; body size 3 bytes.
#line 1 "ENTRY_10b1c130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b1c130(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b21570; body size 6 bytes.
#line 1 "ENTRY_10b21570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b21570(void)

{
  return (undefined4)(DAT_121a4c10);
}


// Reference entry 10b21580; body size 6 bytes.
#line 1 "ENTRY_10b21580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b21580(void)

{
  return (undefined4)(DAT_121a4c18);
}


// Reference entry 10b21590; body size 6 bytes.
#line 1 "ENTRY_10b21590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b21590(void)

{
  return (undefined4)(DAT_121a4c1c);
}


// Reference entry 10b215a0; body size 6 bytes.
#line 1 "ENTRY_10b215a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b215a0(void)

{
  return (undefined4)(DAT_121a4c0c);
}


// Reference entry 10b215b0; body size 6 bytes.
#line 1 "ENTRY_10b215b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b215b0(void)

{
  return (undefined4)(DAT_121a4c14);
}


// Reference entry 10b215c0; body size 6 bytes.
#line 1 "ENTRY_10b215c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b215c0(void)

{
  return (undefined4)(DAT_121a4c20);
}


// Reference entry 10b215d0; body size 6 bytes.
#line 1 "ENTRY_10b215d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b215d0(void)

{
  return (undefined4)(10);
}


// Reference entry 10b215f0; body size 5 bytes.
#line 1 "ENTRY_10b215f0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b215f0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10b22150; body size 3 bytes.
#line 1 "ENTRY_10b22150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b22150(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b22160; body size 28 bytes.
#line 1 "ENTRY_10b22160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b22160(undefined4 *param_1)

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


// Reference entry 10b22350; body size 6 bytes.
#line 1 "ENTRY_10b22350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b22350(void)

{
  return (undefined4)(DAT_121a4c54);
}


// Reference entry 10b22360; body size 6 bytes.
#line 1 "ENTRY_10b22360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b22360(void)

{
  return (undefined4)(DAT_121a4c58);
}


// Reference entry 10b22370; body size 6 bytes.
#line 1 "ENTRY_10b22370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b22370(void)

{
  return (undefined4)(DAT_121a4c40);
}


// Reference entry 10b22380; body size 6 bytes.
#line 1 "ENTRY_10b22380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b22380(void)

{
  return (undefined4)(DAT_121a4c44);
}


// Reference entry 10b22390; body size 6 bytes.
#line 1 "ENTRY_10b22390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b22390(void)

{
  return (undefined4)(DAT_121a4c64);
}


// Reference entry 10b223a0; body size 6 bytes.
#line 1 "ENTRY_10b223a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b223a0(void)

{
  return (undefined4)(DAT_121a4c3c);
}


// Reference entry 10b223b0; body size 6 bytes.
#line 1 "ENTRY_10b223b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b223b0(void)

{
  return (undefined4)(DAT_121a4c4c);
}


// Reference entry 10b223c0; body size 6 bytes.
#line 1 "ENTRY_10b223c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b223c0(void)

{
  return (undefined4)(DAT_121a4c50);
}


// Reference entry 10b223d0; body size 6 bytes.
#line 1 "ENTRY_10b223d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b223d0(void)

{
  return (undefined4)(DAT_121a4c5c);
}


// Reference entry 10b223e0; body size 6 bytes.
#line 1 "ENTRY_10b223e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b223e0(void)

{
  return (undefined4)(DAT_121a4c60);
}


// Reference entry 10b223f0; body size 6 bytes.
#line 1 "ENTRY_10b223f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b223f0(void)

{
  return (undefined4)(DAT_121a4c48);
}


// Reference entry 10b224b0; body size 57 bytes.
#line 1 "ENTRY_10b224b0"

__declspec(naked) void FUN_10b224b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905328
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11905384
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905390
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190539c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23020; body size 57 bytes.
#line 1 "ENTRY_10b23020"

__declspec(naked) void FUN_10b23020(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905b10
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11905b6c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905b78
  __asm mov dword ptr [esi + 0xa8], offset LAB_11905b84
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23170; body size 57 bytes.
#line 1 "ENTRY_10b23170"

__declspec(naked) void FUN_10b23170(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905bb8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11905c14
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905c20
  __asm mov dword ptr [esi + 0xa8], offset LAB_11905c2c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b232c0; body size 57 bytes.
#line 1 "ENTRY_10b232c0"

__declspec(naked) void FUN_10b232c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905624
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11905680
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190568c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11905698
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23410; body size 64 bytes.
#line 1 "ENTRY_10b23410"

__declspec(naked) void FUN_10b23410(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905708
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11905764
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905770
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190577c
  __asm mov byte ptr [esi + 0xe0], 1
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23560; body size 57 bytes.
#line 1 "ENTRY_10b23560"

__declspec(naked) void FUN_10b23560(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905d80
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11905ddc
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905de8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11905df4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b236b0; body size 57 bytes.
#line 1 "ENTRY_10b236b0"

__declspec(naked) void FUN_10b236b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119053c0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190541c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905428
  __asm mov dword ptr [esi + 0xa8], offset LAB_11905434
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23800; body size 64 bytes.
#line 1 "ENTRY_10b23800"

__declspec(naked) void FUN_10b23800(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905928
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11905984
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905990
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190599c
  __asm mov byte ptr [esi + 0xe0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23950; body size 68 bytes.
#line 1 "ENTRY_10b23950"

__declspec(naked) void FUN_10b23950(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esi], offset LAB_11905a1c
  __asm mov dword ptr [esi + 0x10], offset LAB_11905a78
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905a84
  __asm mov dword ptr [esi + 0xa8], offset LAB_11905a90
  __asm _emit 0xf2 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23ab0; body size 57 bytes.
#line 1 "ENTRY_10b23ab0"

__declspec(naked) void FUN_10b23ab0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905c50
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11905cac
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905cb8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11905cc4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23c00; body size 57 bytes.
#line 1 "ENTRY_10b23c00"

__declspec(naked) void FUN_10b23c00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905ce8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11905d44
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905d50
  __asm mov dword ptr [esi + 0xa8], offset LAB_11905d5c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23d50; body size 64 bytes.
#line 1 "ENTRY_10b23d50"

__declspec(naked) void FUN_10b23d50(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11905810
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190586c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11905878
  __asm mov dword ptr [esi + 0xa8], offset LAB_11905884
  __asm mov byte ptr [esi + 0xe0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b23ea0; body size 74 bytes.
#line 1 "ENTRY_10b23ea0"

__declspec(naked) void FUN_10b23ea0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_11904ec4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11904f18
  __asm mov dword ptr [esi + 0x8c], offset LAB_11904f24
  __asm mov dword ptr [esi + 0xa8], offset LAB_11904f30
  __asm mov byte ptr [esi + 0xe8], 0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b24940; body size 38 bytes.
#line 1 "ENTRY_10b24940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24940(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24970; body size 11 bytes.
#line 1 "ENTRY_10b24970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b24980; body size 11 bytes.
#line 1 "ENTRY_10b24980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b24990; body size 11 bytes.
#line 1 "ENTRY_10b24990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b249a0; body size 11 bytes.
#line 1 "ENTRY_10b249a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b249a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b249b0; body size 11 bytes.
#line 1 "ENTRY_10b249b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b249b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b249c0; body size 11 bytes.
#line 1 "ENTRY_10b249c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b249c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b249d0; body size 11 bytes.
#line 1 "ENTRY_10b249d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b249d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b249e0; body size 11 bytes.
#line 1 "ENTRY_10b249e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b249e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b249f0; body size 11 bytes.
#line 1 "ENTRY_10b249f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b249f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b24a00; body size 11 bytes.
#line 1 "ENTRY_10b24a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b24a10; body size 11 bytes.
#line 1 "ENTRY_10b24a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24a10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b24a20; body size 38 bytes.
#line 1 "ENTRY_10b24a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24a20(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24a50; body size 21 bytes.
#line 1 "ENTRY_10b24a50"

__declspec(naked) void FUN_10b24a50(void)

{
  __asm mov dword ptr [LAB_121a4c54], 0
  __asm mov dword ptr [ecx], offset LAB_1190515c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24a70; body size 38 bytes.
#line 1 "ENTRY_10b24a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24a70(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24aa0; body size 21 bytes.
#line 1 "ENTRY_10b24aa0"

__declspec(naked) void FUN_10b24aa0(void)

{
  __asm mov dword ptr [LAB_121a4c58], 0
  __asm mov dword ptr [ecx], offset LAB_119051b4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24ac0; body size 38 bytes.
#line 1 "ENTRY_10b24ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24ac0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24af0; body size 21 bytes.
#line 1 "ENTRY_10b24af0"

__declspec(naked) void FUN_10b24af0(void)

{
  __asm mov dword ptr [LAB_121a4c40], 0
  __asm mov dword ptr [ecx], offset LAB_11904fc8
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24b10; body size 38 bytes.
#line 1 "ENTRY_10b24b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24b10(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24b40; body size 21 bytes.
#line 1 "ENTRY_10b24b40"

__declspec(naked) void FUN_10b24b40(void)

{
  __asm mov dword ptr [LAB_121a4c44], 0
  __asm mov dword ptr [ecx], offset LAB_11905020
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24b60; body size 38 bytes.
#line 1 "ENTRY_10b24b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24b60(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24b90; body size 21 bytes.
#line 1 "ENTRY_10b24b90"

__declspec(naked) void FUN_10b24b90(void)

{
  __asm mov dword ptr [LAB_121a4c64], 0
  __asm mov dword ptr [ecx], offset LAB_119052c4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24bb0; body size 38 bytes.
#line 1 "ENTRY_10b24bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24bb0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24be0; body size 21 bytes.
#line 1 "ENTRY_10b24be0"

__declspec(naked) void FUN_10b24be0(void)

{
  __asm mov dword ptr [LAB_121a4c3c], 0
  __asm mov dword ptr [ecx], offset LAB_11904f84
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24c00; body size 38 bytes.
#line 1 "ENTRY_10b24c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24c00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24c30; body size 21 bytes.
#line 1 "ENTRY_10b24c30"

__declspec(naked) void FUN_10b24c30(void)

{
  __asm mov dword ptr [LAB_121a4c4c], 0
  __asm mov dword ptr [ecx], offset LAB_119050bc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24c50; body size 38 bytes.
#line 1 "ENTRY_10b24c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24c50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24c80; body size 21 bytes.
#line 1 "ENTRY_10b24c80"

__declspec(naked) void FUN_10b24c80(void)

{
  __asm mov dword ptr [LAB_121a4c50], 0
  __asm mov dword ptr [ecx], offset LAB_1190510c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24ca0; body size 38 bytes.
#line 1 "ENTRY_10b24ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24ca0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24cd0; body size 21 bytes.
#line 1 "ENTRY_10b24cd0"

__declspec(naked) void FUN_10b24cd0(void)

{
  __asm mov dword ptr [LAB_121a4c5c], 0
  __asm mov dword ptr [ecx], offset LAB_1190520c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24cf0; body size 38 bytes.
#line 1 "ENTRY_10b24cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24cf0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24d20; body size 21 bytes.
#line 1 "ENTRY_10b24d20"

__declspec(naked) void FUN_10b24d20(void)

{
  __asm mov dword ptr [LAB_121a4c60], 0
  __asm mov dword ptr [ecx], offset LAB_11905268
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24d40; body size 38 bytes.
#line 1 "ENTRY_10b24d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24d40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b24d70; body size 21 bytes.
#line 1 "ENTRY_10b24d70"

__declspec(naked) void FUN_10b24d70(void)

{
  __asm mov dword ptr [LAB_121a4c48], 0
  __asm mov dword ptr [ecx], offset LAB_1190506c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b24d90; body size 5 bytes.
#line 1 "ENTRY_10b24d90"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b24d90(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10b2ae00; body size 7 bytes.
#line 1 "ENTRY_10b2ae00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b2ae00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xec));
}


// Reference entry 10b2b0c0; body size 7 bytes.
#line 1 "ENTRY_10b2b0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b2b0c0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xe8));
}


// Reference entry 10b2dc80; body size 6 bytes.
#line 1 "ENTRY_10b2dc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dc80(void)

{
  return (undefined4)(DAT_121a4c54);
}


// Reference entry 10b2dc90; body size 6 bytes.
#line 1 "ENTRY_10b2dc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dc90(void)

{
  return (undefined4)(DAT_121a4c58);
}


// Reference entry 10b2dca0; body size 6 bytes.
#line 1 "ENTRY_10b2dca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dca0(void)

{
  return (undefined4)(DAT_121a4c40);
}


// Reference entry 10b2dcb0; body size 6 bytes.
#line 1 "ENTRY_10b2dcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dcb0(void)

{
  return (undefined4)(DAT_121a4c44);
}


// Reference entry 10b2dcc0; body size 6 bytes.
#line 1 "ENTRY_10b2dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dcc0(void)

{
  return (undefined4)(DAT_121a4c64);
}


// Reference entry 10b2dcd0; body size 6 bytes.
#line 1 "ENTRY_10b2dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dcd0(void)

{
  return (undefined4)(DAT_121a4c3c);
}


// Reference entry 10b2dce0; body size 6 bytes.
#line 1 "ENTRY_10b2dce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dce0(void)

{
  return (undefined4)(DAT_121a4c4c);
}


// Reference entry 10b2dcf0; body size 6 bytes.
#line 1 "ENTRY_10b2dcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dcf0(void)

{
  return (undefined4)(DAT_121a4c50);
}


// Reference entry 10b2dd00; body size 6 bytes.
#line 1 "ENTRY_10b2dd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dd00(void)

{
  return (undefined4)(DAT_121a4c5c);
}


// Reference entry 10b2dd10; body size 6 bytes.
#line 1 "ENTRY_10b2dd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dd10(void)

{
  return (undefined4)(DAT_121a4c60);
}


// Reference entry 10b2dd20; body size 6 bytes.
#line 1 "ENTRY_10b2dd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dd20(void)

{
  return (undefined4)(DAT_121a4c48);
}


// Reference entry 10b2dd30; body size 6 bytes.
#line 1 "ENTRY_10b2dd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2dd30(void)

{
  return (undefined4)(DAT_121a4c38);
}


// Reference entry 10b2dd50; body size 5 bytes.
#line 1 "ENTRY_10b2dd50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b2dd50(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b2dd60; body size 5 bytes.
#line 1 "ENTRY_10b2dd60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b2dd60(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10b2e490; body size 13 bytes.
#line 1 "ENTRY_10b2e490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b2e490(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xec) = (undefined4)(param_2);
  return;
}


// Reference entry 10b2e4a0; body size 17 bytes.
#line 1 "ENTRY_10b2e4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b2e4a0(int param_1)

{
  *(bool*)(param_1 + 0xe8) = (bool)(*(char *)(param_1 + 0xe8) == '\0');
  return;
}


// Reference entry 10b2e4c0; body size 6 bytes.
#line 1 "ENTRY_10b2e4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2e4c0(void)

{
  return (undefined4)(DAT_121a4c8c);
}


// Reference entry 10b2e4d0; body size 6 bytes.
#line 1 "ENTRY_10b2e4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2e4d0(void)

{
  return (undefined4)(DAT_121a4c84);
}


// Reference entry 10b2e4e0; body size 6 bytes.
#line 1 "ENTRY_10b2e4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b2e4e0(void)

{
  return (undefined4)(DAT_121a4c88);
}


// Reference entry 10b2e500; body size 57 bytes.
#line 1 "ENTRY_10b2e500"

__declspec(naked) void FUN_10b2e500(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11906164
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119061c0
  __asm mov dword ptr [esi + 0x8c], offset LAB_119061cc
  __asm mov dword ptr [esi + 0xa8], offset LAB_119061d8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b2e820; body size 57 bytes.
#line 1 "ENTRY_10b2e820"

__declspec(naked) void FUN_10b2e820(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11906344
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119063a0
  __asm mov dword ptr [esi + 0x8c], offset LAB_119063ac
  __asm mov dword ptr [esi + 0xa8], offset LAB_119063b8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b2e970; body size 57 bytes.
#line 1 "ENTRY_10b2e970"

__declspec(naked) void FUN_10b2e970(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119061fc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11906258
  __asm mov dword ptr [esi + 0x8c], offset LAB_11906264
  __asm mov dword ptr [esi + 0xa8], offset LAB_11906270
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b2eac0; body size 67 bytes.
#line 1 "ENTRY_10b2eac0"

__declspec(naked) void FUN_10b2eac0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119062ac
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11906308
  __asm mov dword ptr [esi + 0x8c], offset LAB_11906314
  __asm mov dword ptr [esi + 0xa8], offset LAB_11906320
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b2ec20; body size 77 bytes.
#line 1 "ENTRY_10b2ec20"

__declspec(naked) void FUN_10b2ec20(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_11905fdc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11906030
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190603c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11906048
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b2efd0; body size 38 bytes.
#line 1 "ENTRY_10b2efd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b2efd0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b2f000; body size 11 bytes.
#line 1 "ENTRY_10b2f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b2f000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b2f010; body size 11 bytes.
#line 1 "ENTRY_10b2f010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b2f010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b2f020; body size 11 bytes.
#line 1 "ENTRY_10b2f020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b2f020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b2f030; body size 38 bytes.
#line 1 "ENTRY_10b2f030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b2f030(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b2f060; body size 21 bytes.
#line 1 "ENTRY_10b2f060"

__declspec(naked) void FUN_10b2f060(void)

{
  __asm mov dword ptr [LAB_121a4c8c], 0
  __asm mov dword ptr [ecx], offset LAB_1190610c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b2f080; body size 38 bytes.
#line 1 "ENTRY_10b2f080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b2f080(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b2f0b0; body size 21 bytes.
#line 1 "ENTRY_10b2f0b0"

__declspec(naked) void FUN_10b2f0b0(void)

{
  __asm mov dword ptr [LAB_121a4c84], 0
  __asm mov dword ptr [ecx], offset LAB_11906084
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b2f170; body size 21 bytes.
#line 1 "ENTRY_10b2f170"

__declspec(naked) void FUN_10b2f170(void)

{
  __asm mov dword ptr [LAB_121a4c88], 0
  __asm mov dword ptr [ecx], offset LAB_119060c8
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b2f190; body size 5 bytes.
#line 1 "ENTRY_10b2f190"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b2f190(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10b30c50; body size 63 bytes.
#line 1 "ENTRY_10b30c50"

__declspec(naked) void FUN_10b30c50(void)

{
  __asm mov edx, dword ptr [ecx + 0xec]
  __asm push esi
  __asm lea eax, [edx + 1]
  __asm mov dword ptr [ecx + 0xec], eax
  __asm mov ecx, dword ptr [esp + 8]
  __asm cmp edx, 0x1b
  __asm _emit 0x77 __asm _emit 0x14
  __asm push dword ptr [edx*4 + LAB_12119c20]
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
  __asm push offset LAB_1186d2ee
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
}





// Reference entry 10b31780; body size 6 bytes.
#line 1 "ENTRY_10b31780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31780(void)

{
  return (undefined4)(DAT_121a4c8c);
}


// Reference entry 10b31790; body size 6 bytes.
#line 1 "ENTRY_10b31790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31790(void)

{
  return (undefined4)(DAT_121a4c84);
}


// Reference entry 10b317a0; body size 6 bytes.
#line 1 "ENTRY_10b317a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b317a0(void)

{
  return (undefined4)(DAT_121a4c88);
}


// Reference entry 10b317b0; body size 6 bytes.
#line 1 "ENTRY_10b317b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b317b0(void)

{
  return (undefined4)(DAT_121a4c80);
}


// Reference entry 10b317d0; body size 7 bytes.
#line 1 "ENTRY_10b317d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b317d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xe8));
}


// Reference entry 10b317e0; body size 5 bytes.
#line 1 "ENTRY_10b317e0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b317e0(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b317f0; body size 5 bytes.
#line 1 "ENTRY_10b317f0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b317f0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10b31800; body size 11 bytes.
#line 1 "ENTRY_10b31800"

__declspec(naked) void FUN_10b31800(void)

{
  __asm cmp dword ptr [ecx + 0xec], 0x1c
  __asm setge al
  __asm ret
}





// Reference entry 10b31c60; body size 13 bytes.
#line 1 "ENTRY_10b31c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b31c60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xe8) = (undefined4)(param_2);
  return;
}


// Reference entry 10b31c70; body size 26 bytes.
#line 1 "ENTRY_10b31c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b31c70(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b31c90; body size 26 bytes.
#line 1 "ENTRY_10b31c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b31c90(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b31d20; body size 6 bytes.
#line 1 "ENTRY_10b31d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31d20(void)

{
  return (undefined4)(DAT_121a4cd0);
}


// Reference entry 10b31d40; body size 6 bytes.
#line 1 "ENTRY_10b31d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31d40(void)

{
  return (undefined4)(DAT_121a4ca8);
}


// Reference entry 10b31d50; body size 6 bytes.
#line 1 "ENTRY_10b31d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31d50(void)

{
  return (undefined4)(DAT_121a4cb4);
}


// Reference entry 10b31d60; body size 6 bytes.
#line 1 "ENTRY_10b31d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31d60(void)

{
  return (undefined4)(DAT_121a4cb0);
}


// Reference entry 10b31d70; body size 6 bytes.
#line 1 "ENTRY_10b31d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31d70(void)

{
  return (undefined4)(DAT_121a4cb8);
}


// Reference entry 10b31d80; body size 6 bytes.
#line 1 "ENTRY_10b31d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31d80(void)

{
  return (undefined4)(DAT_121a4cac);
}


// Reference entry 10b31d90; body size 6 bytes.
#line 1 "ENTRY_10b31d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31d90(void)

{
  return (undefined4)(DAT_121a4cbc);
}


// Reference entry 10b31da0; body size 6 bytes.
#line 1 "ENTRY_10b31da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31da0(void)

{
  return (undefined4)(DAT_121a4cc0);
}


// Reference entry 10b31db0; body size 6 bytes.
#line 1 "ENTRY_10b31db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31db0(void)

{
  return (undefined4)(DAT_121a4cc4);
}


// Reference entry 10b31dc0; body size 6 bytes.
#line 1 "ENTRY_10b31dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31dc0(void)

{
  return (undefined4)(DAT_121a4cc8);
}


// Reference entry 10b31dd0; body size 6 bytes.
#line 1 "ENTRY_10b31dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31dd0(void)

{
  return (undefined4)(DAT_121a4ccc);
}


// Reference entry 10b31de0; body size 6 bytes.
#line 1 "ENTRY_10b31de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b31de0(void)

{
  return (undefined4)(DAT_121a4ca4);
}


// Reference entry 10b31df0; body size 57 bytes.
#line 1 "ENTRY_10b31df0"

__declspec(naked) void FUN_10b31df0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11906b60
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11906bbc
  __asm mov dword ptr [esi + 0x8c], offset LAB_11906bc8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11906bd4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b32a90; body size 134 bytes.
#line 1 "ENTRY_10b32a90"

__declspec(naked) void FUN_10b32a90(void)

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
  __asm push offset LAB_1190646c
  __asm push offset LAB_11893ddc
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], offset LAB_119063dc
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], offset LAB_11906424
  __asm mov dword ptr [edi + 0x46c], offset LAB_11906460
  __asm mov byte ptr [edi + 0xd7d0], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}





// Reference entry 10b32c70; body size 47 bytes.
#line 1 "ENTRY_10b32c70"

__declspec(naked) void FUN_10b32c70(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], esi
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
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b330d0; body size 144 bytes.
#line 1 "ENTRY_10b330d0"

__declspec(naked) void FUN_10b330d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11906c90
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11906cec
  __asm mov dword ptr [esi + 0x8c], offset LAB_11906cf8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11906d04
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf8 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [esi + 0x100], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b33290; body size 57 bytes.
#line 1 "ENTRY_10b33290"

__declspec(naked) void FUN_10b33290(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11906fe0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190703c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907048
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907054
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b333e0; body size 57 bytes.
#line 1 "ENTRY_10b333e0"

__declspec(naked) void FUN_10b333e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11906f3c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11906f98
  __asm mov dword ptr [esi + 0x8c], offset LAB_11906fa4
  __asm mov dword ptr [esi + 0xa8], offset LAB_11906fb0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b33530; body size 57 bytes.
#line 1 "ENTRY_10b33530"

__declspec(naked) void FUN_10b33530(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190708c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119070e8
  __asm mov dword ptr [esi + 0x8c], offset LAB_119070f4
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907100
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b33680; body size 57 bytes.
#line 1 "ENTRY_10b33680"

__declspec(naked) void FUN_10b33680(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11906e8c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11906ee8
  __asm mov dword ptr [esi + 0x8c], offset LAB_11906ef4
  __asm mov dword ptr [esi + 0xa8], offset LAB_11906f00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b337d0; body size 57 bytes.
#line 1 "ENTRY_10b337d0"

__declspec(naked) void FUN_10b337d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11907124
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907180
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190718c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907198
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b33920; body size 57 bytes.
#line 1 "ENTRY_10b33920"

__declspec(naked) void FUN_10b33920(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119071bc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907218
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907224
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907230
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b33a70; body size 57 bytes.
#line 1 "ENTRY_10b33a70"

__declspec(naked) void FUN_10b33a70(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11907254
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119072b0
  __asm mov dword ptr [esi + 0x8c], offset LAB_119072bc
  __asm mov dword ptr [esi + 0xa8], offset LAB_119072c8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b33bc0; body size 57 bytes.
#line 1 "ENTRY_10b33bc0"

__declspec(naked) void FUN_10b33bc0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119072ec
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907348
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907354
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907360
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b33d10; body size 57 bytes.
#line 1 "ENTRY_10b33d10"

__declspec(naked) void FUN_10b33d10(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119073bc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907418
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907424
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907430
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b33e60; body size 57 bytes.
#line 1 "ENTRY_10b33e60"

__declspec(naked) void FUN_10b33e60(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11906bf8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11906c54
  __asm mov dword ptr [esi + 0x8c], offset LAB_11906c60
  __asm mov dword ptr [esi + 0xa8], offset LAB_11906c6c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b34ad0; body size 38 bytes.
#line 1 "ENTRY_10b34ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34ad0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b34b00; body size 11 bytes.
#line 1 "ENTRY_10b34b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34b10; body size 11 bytes.
#line 1 "ENTRY_10b34b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34b20; body size 11 bytes.
#line 1 "ENTRY_10b34b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34b30; body size 11 bytes.
#line 1 "ENTRY_10b34b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34b40; body size 11 bytes.
#line 1 "ENTRY_10b34b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34b50; body size 11 bytes.
#line 1 "ENTRY_10b34b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34b60; body size 11 bytes.
#line 1 "ENTRY_10b34b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34b70; body size 11 bytes.
#line 1 "ENTRY_10b34b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34b80; body size 11 bytes.
#line 1 "ENTRY_10b34b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34b90; body size 11 bytes.
#line 1 "ENTRY_10b34b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34ba0; body size 11 bytes.
#line 1 "ENTRY_10b34ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34bb0; body size 11 bytes.
#line 1 "ENTRY_10b34bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b34c30; body size 38 bytes.
#line 1 "ENTRY_10b34c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34c30(undefined4 *param_1)

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



#line 1 "ENTRY_10b34c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34c60(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPEnterConfigModeAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpDPEnterConfigModeAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpDPEnterConfigModeAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10b34c90; body size 28 bytes.
#line 1 "ENTRY_10b34c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34c90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPExitConfigModeAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpDPExitConfigModeAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpDPExitConfigModeAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10b34cc0; body size 11 bytes.
#line 1 "ENTRY_10b34cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34cc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);

  FUN_1049fae0(param_1);

}


// Reference entry 10b34d40; body size 38 bytes.
#line 1 "ENTRY_10b34d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b34d40(undefined4 *param_1)

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

// Reference entry 10b34d70; transcribed reference bytes.
#line 1 "ENTRY_10b34d70"

__declspec(naked) void FUN_10b34d70(void)

{
  __asm mov dword ptr [LAB_121a4cd0], 0
  __asm mov dword ptr [ecx], offset LAB_11906a7c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b35060; body size 21 bytes.
#line 1 "ENTRY_10b35060"

__declspec(naked) void FUN_10b35060(void)

{
  __asm mov dword ptr [LAB_121a4ca8], 0
  __asm mov dword ptr [ecx], offset LAB_1190665c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b35080; body size 38 bytes.
#line 1 "ENTRY_10b35080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b35080(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b350b0; body size 21 bytes.
#line 1 "ENTRY_10b350b0"

__declspec(naked) void FUN_10b350b0(void)

{
  __asm mov dword ptr [LAB_121a4cb4], 0
  __asm mov dword ptr [ecx], offset LAB_11906780
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b350d0; body size 38 bytes.
#line 1 "ENTRY_10b350d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b350d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b35100; body size 21 bytes.
#line 1 "ENTRY_10b35100"

__declspec(naked) void FUN_10b35100(void)

{
  __asm mov dword ptr [LAB_121a4cb0], 0
  __asm mov dword ptr [ecx], offset LAB_1190670c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b35120; body size 38 bytes.
#line 1 "ENTRY_10b35120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b35120(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b35150; body size 21 bytes.
#line 1 "ENTRY_10b35150"

__declspec(naked) void FUN_10b35150(void)

{
  __asm mov dword ptr [LAB_121a4cb8], 0
  __asm mov dword ptr [ecx], offset LAB_11906800
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b35170; body size 38 bytes.
#line 1 "ENTRY_10b35170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b35170(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b351a0; body size 21 bytes.
#line 1 "ENTRY_10b351a0"

__declspec(naked) void FUN_10b351a0(void)

{
  __asm mov dword ptr [LAB_121a4cac], 0
  __asm mov dword ptr [ecx], offset LAB_119066b0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b351c0; body size 38 bytes.
#line 1 "ENTRY_10b351c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b351c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b351f0; body size 21 bytes.
#line 1 "ENTRY_10b351f0"

__declspec(naked) void FUN_10b351f0(void)

{
  __asm mov dword ptr [LAB_121a4cbc], 0
  __asm mov dword ptr [ecx], offset LAB_11906878
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b35210; body size 38 bytes.
#line 1 "ENTRY_10b35210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b35210(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b35240; body size 21 bytes.
#line 1 "ENTRY_10b35240"

__declspec(naked) void FUN_10b35240(void)

{
  __asm mov dword ptr [LAB_121a4cc0], 0
  __asm mov dword ptr [ecx], offset LAB_119068e0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b35260; body size 38 bytes.
#line 1 "ENTRY_10b35260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b35260(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b35290; body size 21 bytes.
#line 1 "ENTRY_10b35290"

__declspec(naked) void FUN_10b35290(void)

{
  __asm mov dword ptr [LAB_121a4cc4], 0
  __asm mov dword ptr [ecx], offset LAB_11906948
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b352b0; body size 38 bytes.
#line 1 "ENTRY_10b352b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b352b0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b352e0; body size 21 bytes.
#line 1 "ENTRY_10b352e0"

__declspec(naked) void FUN_10b352e0(void)

{
  __asm mov dword ptr [LAB_121a4cc8], 0
  __asm mov dword ptr [ecx], offset LAB_119069cc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b35300; body size 38 bytes.
#line 1 "ENTRY_10b35300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b35300(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b35330; body size 21 bytes.
#line 1 "ENTRY_10b35330"

__declspec(naked) void FUN_10b35330(void)

{
  __asm mov dword ptr [LAB_121a4ccc], 0
  __asm mov dword ptr [ecx], offset LAB_11906a2c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b35350; body size 38 bytes.
#line 1 "ENTRY_10b35350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b35350(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b35380; body size 21 bytes.
#line 1 "ENTRY_10b35380"

__declspec(naked) void FUN_10b35380(void)

{
  __asm mov dword ptr [LAB_121a4ca4], 0
  __asm mov dword ptr [ecx], offset LAB_1190660c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b354b0; body size 3 bytes.
#line 1 "ENTRY_10b354b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b354b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b41ac0; body size 7 bytes.
#line 1 "ENTRY_10b41ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b41ac0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf8));
}


// Reference entry 10b41e30; body size 7 bytes.
#line 1 "ENTRY_10b41e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b41e30(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xfc));
}


// Reference entry 10b41e40; body size 7 bytes.
#line 1 "ENTRY_10b41e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b41e40(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xf9));
}


// Reference entry 10b41e50; body size 7 bytes.
#line 1 "ENTRY_10b41e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b41e50(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xfd));
}


// Reference entry 10b41e60; body size 37 bytes.
#line 1 "ENTRY_10b41e60"

__declspec(naked) void FUN_10b41e60(void)

{
  __asm mov eax, dword ptr [ecx + 0x110]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [ecx + 0x114]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10b41e90; body size 37 bytes.
#line 1 "ENTRY_10b41e90"

__declspec(naked) void FUN_10b41e90(void)

{
  __asm mov eax, dword ptr [ecx + 0x100]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [ecx + 0x104]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10b41ec0; body size 7 bytes.
#line 1 "ENTRY_10b41ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b41ec0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xfa));
}


// Reference entry 10b45de0; body size 6 bytes.
#line 1 "ENTRY_10b45de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45de0(void)

{
  return (undefined4)(DAT_121a4cd0);
}


// Reference entry 10b45df0; body size 6 bytes.
#line 1 "ENTRY_10b45df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45df0(void)

{
  return (undefined4)(DAT_121a4ca8);
}


// Reference entry 10b45e00; body size 6 bytes.
#line 1 "ENTRY_10b45e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e00(void)

{
  return (undefined4)(DAT_121a4cb4);
}


// Reference entry 10b45e10; body size 6 bytes.
#line 1 "ENTRY_10b45e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e10(void)

{
  return (undefined4)(DAT_121a4cb0);
}


// Reference entry 10b45e20; body size 6 bytes.
#line 1 "ENTRY_10b45e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e20(void)

{
  return (undefined4)(DAT_121a4cb8);
}


// Reference entry 10b45e30; body size 6 bytes.
#line 1 "ENTRY_10b45e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e30(void)

{
  return (undefined4)(DAT_121a4cac);
}


// Reference entry 10b45e40; body size 6 bytes.
#line 1 "ENTRY_10b45e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e40(void)

{
  return (undefined4)(DAT_121a4cbc);
}


// Reference entry 10b45e50; body size 6 bytes.
#line 1 "ENTRY_10b45e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e50(void)

{
  return (undefined4)(DAT_121a4cc0);
}


// Reference entry 10b45e60; body size 6 bytes.
#line 1 "ENTRY_10b45e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e60(void)

{
  return (undefined4)(DAT_121a4cc4);
}


// Reference entry 10b45e70; body size 6 bytes.
#line 1 "ENTRY_10b45e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e70(void)

{
  return (undefined4)(DAT_121a4cc8);
}


// Reference entry 10b45e80; body size 6 bytes.
#line 1 "ENTRY_10b45e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e80(void)

{
  return (undefined4)(DAT_121a4ccc);
}


// Reference entry 10b45e90; body size 6 bytes.
#line 1 "ENTRY_10b45e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45e90(void)

{
  return (undefined4)(DAT_121a4ca4);
}


// Reference entry 10b45ea0; body size 6 bytes.
#line 1 "ENTRY_10b45ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b45ea0(void)

{
  return (undefined4)(DAT_121a4cd4);
}


// Reference entry 10b45eb0; body size 5 bytes.
#line 1 "ENTRY_10b45eb0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b45eb0(int param_1)

{ __asm jmp FUN_10002e55 }


// Reference entry 10b45ec0; body size 37 bytes.
#line 1 "ENTRY_10b45ec0"

__declspec(naked) void FUN_10b45ec0(void)

{
  __asm mov eax, dword ptr [ecx + 0x118]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [ecx + 0x11c]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10b45ef0; body size 37 bytes.
#line 1 "ENTRY_10b45ef0"

__declspec(naked) void FUN_10b45ef0(void)

{
  __asm mov eax, dword ptr [ecx + 0x108]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [ecx + 0x10c]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10b45f20; body size 7 bytes.
#line 1 "ENTRY_10b45f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b45f20(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xfb));
}


// Reference entry 10b45f40; body size 5 bytes.
#line 1 "ENTRY_10b45f40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b45f40(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b45f50; body size 5 bytes.
#line 1 "ENTRY_10b45f50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b45f50(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10b45f60; body size 5 bytes.
#line 1 "ENTRY_10b45f60"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b45f60(int param_1)

{ __asm jmp FUN_1008cfec }


// Reference entry 10b48630; body size 13 bytes.
#line 1 "ENTRY_10b48630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b48630(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf8) = (undefined1)(param_2);
  return;
}


// Reference entry 10b48640; body size 13 bytes.
#line 1 "ENTRY_10b48640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b48640(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xfc) = (undefined1)(param_2);
  return;
}


// Reference entry 10b48650; body size 13 bytes.
#line 1 "ENTRY_10b48650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b48650(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xf9) = (undefined1)(param_2);
  return;
}


// Reference entry 10b48660; body size 13 bytes.
#line 1 "ENTRY_10b48660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b48660(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xfd) = (undefined1)(param_2);
  return;
}


// Reference entry 10b48750; body size 13 bytes.
#line 1 "ENTRY_10b48750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b48750(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xfa) = (undefined1)(param_2);
  return;
}


// Reference entry 10b48860; body size 13 bytes.
#line 1 "ENTRY_10b48860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b48860(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0xfb) = (undefined1)(param_2);
  return;
}


// Reference entry 10b48870; body size 6 bytes.
#line 1 "ENTRY_10b48870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b48870(void)

{
  return (undefined4)(DAT_121a4d2c);
}


// Reference entry 10b48880; body size 6 bytes.
#line 1 "ENTRY_10b48880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b48880(void)

{
  return (undefined4)(DAT_121a4d30);
}


// Reference entry 10b48890; body size 6 bytes.
#line 1 "ENTRY_10b48890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b48890(void)

{
  return (undefined4)(DAT_121a4d34);
}


// Reference entry 10b488a0; body size 6 bytes.
#line 1 "ENTRY_10b488a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b488a0(void)

{
  return (undefined4)(DAT_121a4d28);
}


// Reference entry 10b488b0; body size 6 bytes.
#line 1 "ENTRY_10b488b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b488b0(void)

{
  return (undefined4)(DAT_121a4d38);
}


// Reference entry 10b488c0; body size 6 bytes.
#line 1 "ENTRY_10b488c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b488c0(void)

{
  return (undefined4)(DAT_121a4d44);
}


// Reference entry 10b488d0; body size 6 bytes.
#line 1 "ENTRY_10b488d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b488d0(void)

{
  return (undefined4)(DAT_121a4d3c);
}


// Reference entry 10b488e0; body size 6 bytes.
#line 1 "ENTRY_10b488e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b488e0(void)

{
  return (undefined4)(DAT_121a4d40);
}


// Reference entry 10b48900; body size 57 bytes.
#line 1 "ENTRY_10b48900"

__declspec(naked) void FUN_10b48900(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_119078c4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907920
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190792c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907938
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b490d0; body size 57 bytes.
#line 1 "ENTRY_10b490d0"

__declspec(naked) void FUN_10b490d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11907b54
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907bb0
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907bbc
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907bc8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b49220; body size 57 bytes.
#line 1 "ENTRY_10b49220"

__declspec(naked) void FUN_10b49220(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11907c1c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907c78
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907c84
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907c90
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b49370; body size 57 bytes.
#line 1 "ENTRY_10b49370"

__declspec(naked) void FUN_10b49370(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11907cd4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907d30
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907d3c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907d48
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b494c0; body size 57 bytes.
#line 1 "ENTRY_10b494c0"

__declspec(naked) void FUN_10b494c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190795c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119079b8
  __asm mov dword ptr [esi + 0x8c], offset LAB_119079c4
  __asm mov dword ptr [esi + 0xa8], offset LAB_119079d0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b49610; body size 57 bytes.
#line 1 "ENTRY_10b49610"

__declspec(naked) void FUN_10b49610(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11907d8c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907de8
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907df4
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907e00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b49760; body size 67 bytes.
#line 1 "ENTRY_10b49760"

__declspec(naked) void FUN_10b49760(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11907f84
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907fe0
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907fec
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907ff8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xe0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b498c0; body size 57 bytes.
#line 1 "ENTRY_10b498c0"

__declspec(naked) void FUN_10b498c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11907e30
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907e8c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907e98
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907ea4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b49a10; body size 57 bytes.
#line 1 "ENTRY_10b49a10"

__declspec(naked) void FUN_10b49a10(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11907ed8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11907f34
  __asm mov dword ptr [esi + 0x8c], offset LAB_11907f40
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907f4c
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b49b60; body size 57 bytes.
#line 1 "ENTRY_10b49b60"

__declspec(naked) void FUN_10b49b60(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_11907598
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119075ec
  __asm mov dword ptr [esi + 0x8c], offset LAB_119075f8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11907604
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b4a350; body size 38 bytes.
#line 1 "ENTRY_10b4a350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a350(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b4a380; body size 11 bytes.
#line 1 "ENTRY_10b4a380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b4a390; body size 11 bytes.
#line 1 "ENTRY_10b4a390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b4a3a0; body size 11 bytes.
#line 1 "ENTRY_10b4a3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a3a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b4a3b0; body size 11 bytes.
#line 1 "ENTRY_10b4a3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b4a3c0; body size 11 bytes.
#line 1 "ENTRY_10b4a3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b4a3d0; body size 11 bytes.
#line 1 "ENTRY_10b4a3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a3d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b4a3e0; body size 11 bytes.
#line 1 "ENTRY_10b4a3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a3e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b4a3f0; body size 11 bytes.
#line 1 "ENTRY_10b4a3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a3f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b4a400; body size 38 bytes.
#line 1 "ENTRY_10b4a400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a400(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b4a430; body size 21 bytes.
#line 1 "ENTRY_10b4a430"

__declspec(naked) void FUN_10b4a430(void)

{
  __asm mov dword ptr [LAB_121a4d2c], 0
  __asm mov dword ptr [ecx], offset LAB_11907680
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b4a450; body size 38 bytes.
#line 1 "ENTRY_10b4a450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a450(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b4a480; body size 21 bytes.
#line 1 "ENTRY_10b4a480"

__declspec(naked) void FUN_10b4a480(void)

{
  __asm mov dword ptr [LAB_121a4d30], 0
  __asm mov dword ptr [ecx], offset LAB_119076c8
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b4a4a0; body size 38 bytes.
#line 1 "ENTRY_10b4a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a4a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b4a4d0; body size 21 bytes.
#line 1 "ENTRY_10b4a4d0"

__declspec(naked) void FUN_10b4a4d0(void)

{
  __asm mov dword ptr [LAB_121a4d34], 0
  __asm mov dword ptr [ecx], offset LAB_11907714
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b4a4f0; body size 38 bytes.
#line 1 "ENTRY_10b4a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a4f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b4a520; body size 21 bytes.
#line 1 "ENTRY_10b4a520"

__declspec(naked) void FUN_10b4a520(void)

{
  __asm mov dword ptr [LAB_121a4d28], 0
  __asm mov dword ptr [ecx], offset LAB_11907640
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b4a540; body size 38 bytes.
#line 1 "ENTRY_10b4a540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a540(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b4a570; body size 21 bytes.
#line 1 "ENTRY_10b4a570"

__declspec(naked) void FUN_10b4a570(void)

{
  __asm mov dword ptr [LAB_121a4d38], 0
  __asm mov dword ptr [ecx], offset LAB_11907760
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b4a590; body size 38 bytes.
#line 1 "ENTRY_10b4a590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a590(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b4a5c0; body size 21 bytes.
#line 1 "ENTRY_10b4a5c0"

__declspec(naked) void FUN_10b4a5c0(void)

{
  __asm mov dword ptr [LAB_121a4d44], 0
  __asm mov dword ptr [ecx], offset LAB_1190785c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b4a5e0; body size 38 bytes.
#line 1 "ENTRY_10b4a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a5e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b4a610; body size 21 bytes.
#line 1 "ENTRY_10b4a610"

__declspec(naked) void FUN_10b4a610(void)

{
  __asm mov dword ptr [LAB_121a4d3c], 0
  __asm mov dword ptr [ecx], offset LAB_119077b4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b4a630; body size 38 bytes.
#line 1 "ENTRY_10b4a630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a630(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b4a660; body size 21 bytes.
#line 1 "ENTRY_10b4a660"

__declspec(naked) void FUN_10b4a660(void)

{
  __asm mov dword ptr [LAB_121a4d40], 0
  __asm mov dword ptr [ecx], offset LAB_11907808
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b4a680; body size 5 bytes.
#line 1 "ENTRY_10b4a680"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b4a680(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10b4f8e0; body size 6 bytes.
#line 1 "ENTRY_10b4f8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4f8e0(void)

{
  return (undefined4)(DAT_121a4d2c);
}


// Reference entry 10b4f8f0; body size 6 bytes.
#line 1 "ENTRY_10b4f8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4f8f0(void)

{
  return (undefined4)(DAT_121a4d30);
}


// Reference entry 10b4f900; body size 6 bytes.
#line 1 "ENTRY_10b4f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4f900(void)

{
  return (undefined4)(DAT_121a4d34);
}


// Reference entry 10b4f910; body size 6 bytes.
#line 1 "ENTRY_10b4f910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4f910(void)

{
  return (undefined4)(DAT_121a4d28);
}


// Reference entry 10b4f920; body size 6 bytes.
#line 1 "ENTRY_10b4f920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4f920(void)

{
  return (undefined4)(DAT_121a4d38);
}


// Reference entry 10b4f930; body size 6 bytes.
#line 1 "ENTRY_10b4f930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4f930(void)

{
  return (undefined4)(DAT_121a4d44);
}


// Reference entry 10b4f940; body size 6 bytes.
#line 1 "ENTRY_10b4f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4f940(void)

{
  return (undefined4)(DAT_121a4d3c);
}


// Reference entry 10b4f950; body size 6 bytes.
#line 1 "ENTRY_10b4f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4f950(void)

{
  return (undefined4)(DAT_121a4d40);
}


// Reference entry 10b4f960; body size 6 bytes.
#line 1 "ENTRY_10b4f960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4f960(void)

{
  return (undefined4)(DAT_121a4d48);
}


// Reference entry 10b4fd20; body size 6 bytes.
#line 1 "ENTRY_10b4fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4fd20(void)

{
  return (undefined4)(DAT_121a4d6c);
}


// Reference entry 10b4fd30; body size 6 bytes.
#line 1 "ENTRY_10b4fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4fd30(void)

{
  return (undefined4)(DAT_121a4d68);
}


// Reference entry 10b4fd40; body size 6 bytes.
#line 1 "ENTRY_10b4fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4fd40(void)

{
  return (undefined4)(DAT_121a4d70);
}


// Reference entry 10b4fd50; body size 6 bytes.
#line 1 "ENTRY_10b4fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4fd50(void)

{
  return (undefined4)(DAT_121a4d64);
}


// Reference entry 10b4fd60; body size 6 bytes.
#line 1 "ENTRY_10b4fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4fd60(void)

{
  return (undefined4)(DAT_121a4d78);
}


// Reference entry 10b4fd70; body size 6 bytes.
#line 1 "ENTRY_10b4fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b4fd70(void)

{
  return (undefined4)(DAT_121a4d74);
}


// Reference entry 10b4fd90; body size 57 bytes.
#line 1 "ENTRY_10b4fd90"

__declspec(naked) void FUN_10b4fd90(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11908294
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119082f0
  __asm mov dword ptr [esi + 0x8c], offset LAB_119082fc
  __asm mov dword ptr [esi + 0xa8], offset LAB_11908308
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b506b0; body size 57 bytes.
#line 1 "ENTRY_10b506b0"

__declspec(naked) void FUN_10b506b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_100325a6
  __asm mov dword ptr [esi], offset LAB_1190856c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119085c8
  __asm mov dword ptr [esi + 0x8c], offset LAB_119085d4
  __asm mov dword ptr [esi + 0xa8], offset LAB_119085e0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b50800; body size 57 bytes.
#line 1 "ENTRY_10b50800"

__declspec(naked) void FUN_10b50800(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_100325a6
  __asm mov dword ptr [esi], offset LAB_119084d4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11908530
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190853c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11908548
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b50b60; body size 57 bytes.
#line 1 "ENTRY_10b50b60"

__declspec(naked) void FUN_10b50b60(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190832c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11908388
  __asm mov dword ptr [esi + 0x8c], offset LAB_11908394
  __asm mov dword ptr [esi + 0xa8], offset LAB_119083a0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b50cb0; body size 57 bytes.
#line 1 "ENTRY_10b50cb0"

__declspec(naked) void FUN_10b50cb0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11908864
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119088c0
  __asm mov dword ptr [esi + 0x8c], offset LAB_119088cc
  __asm mov dword ptr [esi + 0xa8], offset LAB_119088d8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b51010; body size 57 bytes.
#line 1 "ENTRY_10b51010"

__declspec(naked) void FUN_10b51010(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_11908058
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119080ac
  __asm mov dword ptr [esi + 0x8c], offset LAB_119080b8
  __asm mov dword ptr [esi + 0xa8], offset LAB_119080c4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b515f0; body size 38 bytes.
#line 1 "ENTRY_10b515f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b515f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b51620; body size 11 bytes.
#line 1 "ENTRY_10b51620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b51630; body size 11 bytes.
#line 1 "ENTRY_10b51630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b51640; body size 11 bytes.
#line 1 "ENTRY_10b51640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b51650; body size 11 bytes.
#line 1 "ENTRY_10b51650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b51660; body size 11 bytes.
#line 1 "ENTRY_10b51660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b51670; body size 11 bytes.
#line 1 "ENTRY_10b51670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b51680; body size 38 bytes.
#line 1 "ENTRY_10b51680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51680(undefined4 *param_1)

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

void __fastcall FUN_10b516b0(undefined4 *param_1)

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

void __fastcall FUN_10b516e0(undefined4 *param_1)

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

void __fastcall FUN_10b51710(undefined4 *param_1)

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



// Reference entry 10b51740; transcribed reference bytes.
#line 1 "ENTRY_10b51740"

__declspec(naked) void FUN_10b51740(void)

{
  __asm mov dword ptr [LAB_121a4d6c], 0
  __asm mov dword ptr [ecx], offset LAB_1190817c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b51760; body size 38 bytes.
#line 1 "ENTRY_10b51760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51760(undefined4 *param_1)

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



// Reference entry 10b51790; transcribed reference bytes.
#line 1 "ENTRY_10b51790"

__declspec(naked) void FUN_10b51790(void)

{
  __asm mov dword ptr [LAB_121a4d68], 0
  __asm mov dword ptr [ecx], offset LAB_1190813c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b517b0; body size 38 bytes.
#line 1 "ENTRY_10b517b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b517b0(undefined4 *param_1)

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



// Reference entry 10b517e0; transcribed reference bytes.
#line 1 "ENTRY_10b517e0"

__declspec(naked) void FUN_10b517e0(void)

{
  __asm mov dword ptr [LAB_121a4d70], 0
  __asm mov dword ptr [ecx], offset LAB_119081c0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b51800; body size 38 bytes.
#line 1 "ENTRY_10b51800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51800(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b51830; body size 21 bytes.
#line 1 "ENTRY_10b51830"

__declspec(naked) void FUN_10b51830(void)

{
  __asm mov dword ptr [LAB_121a4d64], 0
  __asm mov dword ptr [ecx], offset LAB_11908100
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b51850; body size 38 bytes.
#line 1 "ENTRY_10b51850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b51850(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b51880; body size 21 bytes.
#line 1 "ENTRY_10b51880"

__declspec(naked) void FUN_10b51880(void)

{
  __asm mov dword ptr [LAB_121a4d78], 0
  __asm mov dword ptr [ecx], offset LAB_11908248
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b518a0; body size 38 bytes.
#line 1 "ENTRY_10b518a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b518a0(undefined4 *param_1)

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



// Reference entry 10b518d0; transcribed reference bytes.
#line 1 "ENTRY_10b518d0"

__declspec(naked) void FUN_10b518d0(void)

{
  __asm mov dword ptr [LAB_121a4d74], 0
  __asm mov dword ptr [ecx], offset LAB_11908200
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b518f0; body size 5 bytes.
#line 1 "ENTRY_10b518f0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b518f0(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10b54bb0; body size 6 bytes.
#line 1 "ENTRY_10b54bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54bb0(void)

{
  return (undefined4)(DAT_121a4d6c);
}


// Reference entry 10b54bc0; body size 6 bytes.
#line 1 "ENTRY_10b54bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54bc0(void)

{
  return (undefined4)(DAT_121a4d68);
}


// Reference entry 10b54bd0; body size 6 bytes.
#line 1 "ENTRY_10b54bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54bd0(void)

{
  return (undefined4)(DAT_121a4d70);
}


// Reference entry 10b54be0; body size 6 bytes.
#line 1 "ENTRY_10b54be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54be0(void)

{
  return (undefined4)(DAT_121a4d64);
}


// Reference entry 10b54bf0; body size 6 bytes.
#line 1 "ENTRY_10b54bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54bf0(void)

{
  return (undefined4)(DAT_121a4d78);
}


// Reference entry 10b54c00; body size 6 bytes.
#line 1 "ENTRY_10b54c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54c00(void)

{
  return (undefined4)(DAT_121a4d74);
}


// Reference entry 10b54c10; body size 6 bytes.
#line 1 "ENTRY_10b54c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54c10(void)

{
  return (undefined4)(DAT_121a4d7c);
}


// Reference entry 10b54ca0; body size 6 bytes.
#line 1 "ENTRY_10b54ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54ca0(void)

{
  return (undefined4)(DAT_121a4d94);
}


// Reference entry 10b54cb0; body size 6 bytes.
#line 1 "ENTRY_10b54cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54cb0(void)

{
  return (undefined4)(DAT_121a4d98);
}


// Reference entry 10b54cc0; body size 6 bytes.
#line 1 "ENTRY_10b54cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b54cc0(void)

{
  return (undefined4)(DAT_121a4d9c);
}


// Reference entry 10b54ce0; body size 57 bytes.
#line 1 "ENTRY_10b54ce0"

__declspec(naked) void FUN_10b54ce0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11908a9c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11908af8
  __asm mov dword ptr [esi + 0x8c], offset LAB_11908b04
  __asm mov dword ptr [esi + 0xa8], offset LAB_11908b10
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b55000; body size 57 bytes.
#line 1 "ENTRY_10b55000"

__declspec(naked) void FUN_10b55000(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11908b34
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11908b90
  __asm mov dword ptr [esi + 0x8c], offset LAB_11908b9c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11908ba8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b55150; body size 57 bytes.
#line 1 "ENTRY_10b55150"

__declspec(naked) void FUN_10b55150(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11908c0c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11908c68
  __asm mov dword ptr [esi + 0x8c], offset LAB_11908c74
  __asm mov dword ptr [esi + 0xa8], offset LAB_11908c80
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b552a0; body size 57 bytes.
#line 1 "ENTRY_10b552a0"

__declspec(naked) void FUN_10b552a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11908cf0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11908d4c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11908d58
  __asm mov dword ptr [esi + 0xa8], offset LAB_11908d64
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b553f0; body size 57 bytes.
#line 1 "ENTRY_10b553f0"

__declspec(naked) void FUN_10b553f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_1190891c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11908970
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190897c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11908988
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b55790; body size 38 bytes.
#line 1 "ENTRY_10b55790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b55790(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b557c0; body size 11 bytes.
#line 1 "ENTRY_10b557c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b557c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b557d0; body size 11 bytes.
#line 1 "ENTRY_10b557d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b557d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b557e0; body size 11 bytes.
#line 1 "ENTRY_10b557e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b557e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b557f0; body size 38 bytes.
#line 1 "ENTRY_10b557f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b557f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b55820; body size 21 bytes.
#line 1 "ENTRY_10b55820"

__declspec(naked) void FUN_10b55820(void)

{
  __asm mov dword ptr [LAB_121a4d94], 0
  __asm mov dword ptr [ecx], offset LAB_119089c4
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b55840; body size 38 bytes.
#line 1 "ENTRY_10b55840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b55840(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b55870; body size 21 bytes.
#line 1 "ENTRY_10b55870"

__declspec(naked) void FUN_10b55870(void)

{
  __asm mov dword ptr [LAB_121a4d98], 0
  __asm mov dword ptr [ecx], offset LAB_11908a04
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b55890; body size 38 bytes.
#line 1 "ENTRY_10b55890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b55890(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b558c0; body size 21 bytes.
#line 1 "ENTRY_10b558c0"

__declspec(naked) void FUN_10b558c0(void)

{
  __asm mov dword ptr [LAB_121a4d9c], 0
  __asm mov dword ptr [ecx], offset LAB_11908a44
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b558e0; body size 5 bytes.
#line 1 "ENTRY_10b558e0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b558e0(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10b58270; body size 6 bytes.
#line 1 "ENTRY_10b58270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b58270(void)

{
  return (undefined4)(DAT_121a4d94);
}


// Reference entry 10b58280; body size 6 bytes.
#line 1 "ENTRY_10b58280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b58280(void)

{
  return (undefined4)(DAT_121a4d98);
}


// Reference entry 10b58290; body size 6 bytes.
#line 1 "ENTRY_10b58290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b58290(void)

{
  return (undefined4)(DAT_121a4d9c);
}


// Reference entry 10b582a0; body size 6 bytes.
#line 1 "ENTRY_10b582a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b582a0(void)

{
  return (undefined4)(DAT_121a4da0);
}


// Reference entry 10b582c0; body size 5 bytes.
#line 1 "ENTRY_10b582c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b582c0(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10b585c0; body size 6 bytes.
#line 1 "ENTRY_10b585c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b585c0(void)

{
  return (undefined4)(DAT_121a4dbc);
}


// Reference entry 10b58bc0; body size 11 bytes.
#line 1 "ENTRY_10b58bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b58bc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b58bd0; body size 38 bytes.
#line 1 "ENTRY_10b58bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b58bd0(undefined4 *param_1)

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

void __fastcall FUN_10b58c00(undefined4 *param_1)

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



// Reference entry 10b58c30; transcribed reference bytes.
#line 1 "ENTRY_10b58c30"

__declspec(naked) void FUN_10b58c30(void)

{
  __asm mov dword ptr [LAB_121a4dbc], 0
  __asm mov dword ptr [ecx], offset LAB_11908f40
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b58c50; body size 5 bytes.
#line 1 "ENTRY_10b58c50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b58c50(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10b59400; body size 6 bytes.
#line 1 "ENTRY_10b59400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b59400(void)

{
  return (undefined4)(DAT_121a4dbc);
}


// Reference entry 10b59410; body size 6 bytes.
#line 1 "ENTRY_10b59410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b59410(void)

{
  return (undefined4)(DAT_121a4db8);
}


// Reference entry 10b59450; body size 18 bytes.
#line 1 "ENTRY_10b59450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b59450(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b59470; body size 39 bytes.
#line 1 "ENTRY_10b59470"

__declspec(naked) void FUN_10b59470(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b594a0; body size 39 bytes.
#line 1 "ENTRY_10b594a0"

__declspec(naked) void FUN_10b594a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b594d0; body size 39 bytes.
#line 1 "ENTRY_10b594d0"

__declspec(naked) void FUN_10b594d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b59500; body size 39 bytes.
#line 1 "ENTRY_10b59500"

__declspec(naked) void FUN_10b59500(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b59530; body size 39 bytes.
#line 1 "ENTRY_10b59530"

__declspec(naked) void FUN_10b59530(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b59560; body size 39 bytes.
#line 1 "ENTRY_10b59560"

__declspec(naked) void FUN_10b59560(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b59590; body size 39 bytes.
#line 1 "ENTRY_10b59590"

__declspec(naked) void FUN_10b59590(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b595c0; body size 39 bytes.
#line 1 "ENTRY_10b595c0"

__declspec(naked) void FUN_10b595c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b595f0; body size 39 bytes.
#line 1 "ENTRY_10b595f0"

__declspec(naked) void FUN_10b595f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b59620; body size 39 bytes.
#line 1 "ENTRY_10b59620"

__declspec(naked) void FUN_10b59620(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b59650; body size 39 bytes.
#line 1 "ENTRY_10b59650"

__declspec(naked) void FUN_10b59650(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b59680; body size 39 bytes.
#line 1 "ENTRY_10b59680"

__declspec(naked) void FUN_10b59680(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b596b0; body size 39 bytes.
#line 1 "ENTRY_10b596b0"

__declspec(naked) void FUN_10b596b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b596e0; body size 39 bytes.
#line 1 "ENTRY_10b596e0"

__declspec(naked) void FUN_10b596e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi + 4], edx
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10b59710; body size 22 bytes.
#line 1 "ENTRY_10b59710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b59710(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b59730; body size 18 bytes.
#line 1 "ENTRY_10b59730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b59730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b598f0; body size 38 bytes.
#line 1 "ENTRY_10b598f0"

__declspec(naked) void FUN_10b598f0(void)

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





// Reference entry 10b59920; body size 22 bytes.
#line 1 "ENTRY_10b59920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b59920(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b59940; body size 40 bytes.
#line 1 "ENTRY_10b59940"

__declspec(naked) void FUN_10b59940(void)

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





// Reference entry 10b59980; body size 22 bytes.
#line 1 "ENTRY_10b59980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b59980(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b599a0; body size 16 bytes.
#line 1 "ENTRY_10b599a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b599a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b599c0; body size 3 bytes.
#line 1 "ENTRY_10b599c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b599c0(void)

{
  return;
}


// Reference entry 10b599d0; body size 25 bytes.
#line 1 "ENTRY_10b599d0"

__declspec(naked) void FUN_10b599d0(void)

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





// Reference entry 10b599f0; body size 13 bytes.
#line 1 "ENTRY_10b599f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b599f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b59a00; body size 13 bytes.
#line 1 "ENTRY_10b59a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b59a00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b59a10; body size 3 bytes.
#line 1 "ENTRY_10b59a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b59a10(void)

{
  return;
}


// Reference entry 10b59f50; body size 15 bytes.
#line 1 "ENTRY_10b59f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b59f50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10b59ff0; body size 7 bytes.
#line 1 "ENTRY_10b59ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b59ff0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b5a000; body size 5 bytes.
#line 1 "ENTRY_10b5a000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a010; body size 37 bytes.
#line 1 "ENTRY_10b5a010"

__declspec(naked) void FUN_10b5a010(void)

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





// Reference entry 10b5a180; body size 5 bytes.
#line 1 "ENTRY_10b5a180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a190; body size 5 bytes.
#line 1 "ENTRY_10b5a190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a1a0; body size 5 bytes.
#line 1 "ENTRY_10b5a1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a1a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a1b0; body size 5 bytes.
#line 1 "ENTRY_10b5a1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a1b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a1c0; body size 5 bytes.
#line 1 "ENTRY_10b5a1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a1c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a1d0; body size 33 bytes.
#line 1 "ENTRY_10b5a1d0"

__declspec(naked) void FUN_10b5a1d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov ecx, edi
  __asm push esi
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esi + 4]
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [edi + 4], eax
  __asm mov dword ptr [edi + 8], ecx
  __asm pop edi
  __asm pop esi
  __asm ret
}





// Reference entry 10b5a200; body size 34 bytes.
#line 1 "ENTRY_10b5a200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b5a200(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10b5a2a0; body size 15 bytes.
#line 1 "ENTRY_10b5a2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a2a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10b5a2c0; body size 15 bytes.
#line 1 "ENTRY_10b5a2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a2c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10b5a2e0; body size 5 bytes.
#line 1 "ENTRY_10b5a2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a2f0; body size 5 bytes.
#line 1 "ENTRY_10b5a2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a2f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a300; body size 5 bytes.
#line 1 "ENTRY_10b5a300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a310; body size 5 bytes.
#line 1 "ENTRY_10b5a310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a320; body size 5 bytes.
#line 1 "ENTRY_10b5a320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a330; body size 5 bytes.
#line 1 "ENTRY_10b5a330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a340; body size 5 bytes.
#line 1 "ENTRY_10b5a340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a350; body size 5 bytes.
#line 1 "ENTRY_10b5a350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a360; body size 5 bytes.
#line 1 "ENTRY_10b5a360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5a370; body size 6 bytes.
#line 1 "ENTRY_10b5a370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a370(void)

{
  return (undefined4)(DAT_121a4dcc);
}


// Reference entry 10b5a380; body size 6 bytes.
#line 1 "ENTRY_10b5a380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a380(void)

{
  return (undefined4)(DAT_121a4dd8);
}


// Reference entry 10b5a390; body size 6 bytes.
#line 1 "ENTRY_10b5a390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a390(void)

{
  return (undefined4)(DAT_121a4ddc);
}


// Reference entry 10b5a3a0; body size 6 bytes.
#line 1 "ENTRY_10b5a3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a3a0(void)

{
  return (undefined4)(DAT_121a4de0);
}


// Reference entry 10b5a3b0; body size 6 bytes.
#line 1 "ENTRY_10b5a3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a3b0(void)

{
  return (undefined4)(DAT_121a4de4);
}


// Reference entry 10b5a3c0; body size 6 bytes.
#line 1 "ENTRY_10b5a3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a3c0(void)

{
  return (undefined4)(DAT_121a4de8);
}


// Reference entry 10b5a3d0; body size 6 bytes.
#line 1 "ENTRY_10b5a3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a3d0(void)

{
  return (undefined4)(DAT_121a4dec);
}


// Reference entry 10b5a3e0; body size 6 bytes.
#line 1 "ENTRY_10b5a3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a3e0(void)

{
  return (undefined4)(DAT_121a4df0);
}


// Reference entry 10b5a3f0; body size 6 bytes.
#line 1 "ENTRY_10b5a3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a3f0(void)

{
  return (undefined4)(DAT_121a4df4);
}


// Reference entry 10b5a400; body size 6 bytes.
#line 1 "ENTRY_10b5a400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a400(void)

{
  return (undefined4)(DAT_121a4df8);
}


// Reference entry 10b5a410; body size 6 bytes.
#line 1 "ENTRY_10b5a410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a410(void)

{
  return (undefined4)(DAT_121a4dfc);
}


// Reference entry 10b5a420; body size 6 bytes.
#line 1 "ENTRY_10b5a420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a420(void)

{
  return (undefined4)(DAT_121a4e00);
}


// Reference entry 10b5a430; body size 6 bytes.
#line 1 "ENTRY_10b5a430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a430(void)

{
  return (undefined4)(DAT_121a4e04);
}


// Reference entry 10b5a440; body size 6 bytes.
#line 1 "ENTRY_10b5a440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a440(void)

{
  return (undefined4)(DAT_121a4dd0);
}


// Reference entry 10b5a450; body size 6 bytes.
#line 1 "ENTRY_10b5a450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5a450(void)

{
  return (undefined4)(DAT_121a4dd4);
}


// Reference entry 10b5a5c0; body size 22 bytes.
#line 1 "ENTRY_10b5a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10b5a5c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b5a5e0; body size 57 bytes.
#line 1 "ENTRY_10b5a5e0"

__declspec(naked) void FUN_10b5a5e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11909b7c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11909bd8
  __asm mov dword ptr [esi + 0x8c], offset LAB_11909be4
  __asm mov dword ptr [esi + 0xa8], offset LAB_11909bf0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5b440; body size 18 bytes.
#line 1 "ENTRY_10b5b440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b5b440(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b5b4a0; body size 11 bytes.
#line 1 "ENTRY_10b5b4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b5b4a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b5b4b0; body size 11 bytes.
#line 1 "ENTRY_10b5b4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b5b4b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b5b540; body size 11 bytes.
#line 1 "ENTRY_10b5b540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b5b540(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b5b550; body size 16 bytes.
#line 1 "ENTRY_10b5b550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b5b550(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b5b570; body size 3 bytes.
#line 1 "ENTRY_10b5b570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5b570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5b580; body size 18 bytes.
#line 1 "ENTRY_10b5b580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b5b580(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b5b720; body size 39 bytes.
#line 1 "ENTRY_10b5b720"

__declspec(naked) void FUN_10b5b720(void)

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
  __asm mov edx, dword ptr [esi + 8]
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, edi
  __asm mov dword ptr [edi + 8], edx
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5b750; body size 57 bytes.
#line 1 "ENTRY_10b5b750"

__declspec(naked) void FUN_10b5b750(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11909c14
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11909c70
  __asm mov dword ptr [esi + 0x8c], offset LAB_11909c7c
  __asm mov dword ptr [esi + 0xa8], offset LAB_11909c88
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5b8a0; body size 57 bytes.
#line 1 "ENTRY_10b5b8a0"

__declspec(naked) void FUN_10b5b8a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11909e94
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11909ef0
  __asm mov dword ptr [esi + 0x8c], offset LAB_11909efc
  __asm mov dword ptr [esi + 0xa8], offset LAB_11909f08
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5b9f0; body size 57 bytes.
#line 1 "ENTRY_10b5b9f0"

__declspec(naked) void FUN_10b5b9f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11909f40
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11909f9c
  __asm mov dword ptr [esi + 0x8c], offset LAB_11909fa8
  __asm mov dword ptr [esi + 0xa8], offset LAB_11909fb4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5bb40; body size 57 bytes.
#line 1 "ENTRY_10b5bb40"

__declspec(naked) void FUN_10b5bb40(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11909fe0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a03c
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a048
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a054
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5bc90; body size 57 bytes.
#line 1 "ENTRY_10b5bc90"

__declspec(naked) void FUN_10b5bc90(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190a088
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a0e4
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a0f0
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a0fc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5bde0; body size 57 bytes.
#line 1 "ENTRY_10b5bde0"

__declspec(naked) void FUN_10b5bde0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190a154
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a1b0
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a1bc
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a1c8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5bf30; body size 57 bytes.
#line 1 "ENTRY_10b5bf30"

__declspec(naked) void FUN_10b5bf30(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190a22c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a288
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a294
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a2a0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5c080; body size 57 bytes.
#line 1 "ENTRY_10b5c080"

__declspec(naked) void FUN_10b5c080(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190a300
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a35c
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a368
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a374
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5c1d0; body size 57 bytes.
#line 1 "ENTRY_10b5c1d0"

__declspec(naked) void FUN_10b5c1d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190a3b4
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a410
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a41c
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a428
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5c320; body size 57 bytes.
#line 1 "ENTRY_10b5c320"

__declspec(naked) void FUN_10b5c320(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190a458
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a4b4
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a4c0
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a4cc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5c470; body size 57 bytes.
#line 1 "ENTRY_10b5c470"

__declspec(naked) void FUN_10b5c470(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190a4f0
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a54c
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a558
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a564
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5c5c0; body size 57 bytes.
#line 1 "ENTRY_10b5c5c0"

__declspec(naked) void FUN_10b5c5c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190a588
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a5e4
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a5f0
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a5fc
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5c710; body size 57 bytes.
#line 1 "ENTRY_10b5c710"

__declspec(naked) void FUN_10b5c710(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_1190a63c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_1190a698
  __asm mov dword ptr [esi + 0x8c], offset LAB_1190a6a4
  __asm mov dword ptr [esi + 0xa8], offset LAB_1190a6b0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5c860; body size 64 bytes.
#line 1 "ENTRY_10b5c860"

__declspec(naked) void FUN_10b5c860(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11909d44
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11909da0
  __asm mov dword ptr [esi + 0x8c], offset LAB_11909dac
  __asm mov dword ptr [esi + 0xa8], offset LAB_11909db8
  __asm mov byte ptr [esi + 0xe0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5c9b0; body size 64 bytes.
#line 1 "ENTRY_10b5c9b0"

__declspec(naked) void FUN_10b5c9b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1007d83a
  __asm mov dword ptr [esi], offset LAB_11909dfc
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_11909e58
  __asm mov dword ptr [esi + 0x8c], offset LAB_11909e64
  __asm mov dword ptr [esi + 0xa8], offset LAB_11909e70
  __asm mov byte ptr [esi + 0xe0], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5cb00; body size 57 bytes.
#line 1 "ENTRY_10b5cb00"

__declspec(naked) void FUN_10b5cb00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10094102
  __asm mov dword ptr [esi], offset LAB_1190966c
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], offset LAB_119096c0
  __asm mov dword ptr [esi + 0x8c], offset LAB_119096cc
  __asm mov dword ptr [esi + 0xa8], offset LAB_119096d8
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b5d910; body size 38 bytes.
#line 1 "ENTRY_10b5d910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d910(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5d940; body size 11 bytes.
#line 1 "ENTRY_10b5d940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d950; body size 11 bytes.
#line 1 "ENTRY_10b5d950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d960; body size 11 bytes.
#line 1 "ENTRY_10b5d960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d970; body size 11 bytes.
#line 1 "ENTRY_10b5d970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d980; body size 11 bytes.
#line 1 "ENTRY_10b5d980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d990; body size 11 bytes.
#line 1 "ENTRY_10b5d990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d9a0; body size 11 bytes.
#line 1 "ENTRY_10b5d9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d9a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d9b0; body size 11 bytes.
#line 1 "ENTRY_10b5d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d9b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d9c0; body size 11 bytes.
#line 1 "ENTRY_10b5d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d9c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d9d0; body size 11 bytes.
#line 1 "ENTRY_10b5d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d9d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d9e0; body size 11 bytes.
#line 1 "ENTRY_10b5d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d9e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5d9f0; body size 11 bytes.
#line 1 "ENTRY_10b5d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5d9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5da00; body size 11 bytes.
#line 1 "ENTRY_10b5da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5da00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5da10; body size 11 bytes.
#line 1 "ENTRY_10b5da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5da10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5da20; body size 11 bytes.
#line 1 "ENTRY_10b5da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5da20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizStateTypeFor);

  FUN_106de7d0(param_1);

}


// Reference entry 10b5dbc0; body size 38 bytes.
#line 1 "ENTRY_10b5dbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5dbc0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5dbf0; body size 21 bytes.
#line 1 "ENTRY_10b5dbf0"

__declspec(naked) void FUN_10b5dbf0(void)

{
  __asm mov dword ptr [LAB_121a4dcc], 0
  __asm mov dword ptr [ecx], offset LAB_11909714
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5dc10; body size 38 bytes.
#line 1 "ENTRY_10b5dc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5dc10(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5dc40; body size 21 bytes.
#line 1 "ENTRY_10b5dc40"

__declspec(naked) void FUN_10b5dc40(void)

{
  __asm mov dword ptr [LAB_121a4dd8], 0
  __asm mov dword ptr [ecx], offset LAB_11909810
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5dc60; body size 38 bytes.
#line 1 "ENTRY_10b5dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5dc60(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5dc90; body size 21 bytes.
#line 1 "ENTRY_10b5dc90"

__declspec(naked) void FUN_10b5dc90(void)

{
  __asm mov dword ptr [LAB_121a4ddc], 0
  __asm mov dword ptr [ecx], offset LAB_11909860
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5dcb0; body size 38 bytes.
#line 1 "ENTRY_10b5dcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5dcb0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5dce0; body size 21 bytes.
#line 1 "ENTRY_10b5dce0"

__declspec(naked) void FUN_10b5dce0(void)

{
  __asm mov dword ptr [LAB_121a4de0], 0
  __asm mov dword ptr [ecx], offset LAB_119098b0
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5dd00; body size 38 bytes.
#line 1 "ENTRY_10b5dd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5dd00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5dd30; body size 21 bytes.
#line 1 "ENTRY_10b5dd30"

__declspec(naked) void FUN_10b5dd30(void)

{
  __asm mov dword ptr [LAB_121a4de4], 0
  __asm mov dword ptr [ecx], offset LAB_11909900
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5dd50; body size 38 bytes.
#line 1 "ENTRY_10b5dd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5dd50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5dd80; body size 21 bytes.
#line 1 "ENTRY_10b5dd80"

__declspec(naked) void FUN_10b5dd80(void)

{
  __asm mov dword ptr [LAB_121a4de8], 0
  __asm mov dword ptr [ecx], offset LAB_11909944
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5dda0; body size 38 bytes.
#line 1 "ENTRY_10b5dda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5dda0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5ddd0; body size 21 bytes.
#line 1 "ENTRY_10b5ddd0"

__declspec(naked) void FUN_10b5ddd0(void)

{
  __asm mov dword ptr [LAB_121a4dec], 0
  __asm mov dword ptr [ecx], offset LAB_11909988
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5ddf0; body size 38 bytes.
#line 1 "ENTRY_10b5ddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5ddf0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5de20; body size 21 bytes.
#line 1 "ENTRY_10b5de20"

__declspec(naked) void FUN_10b5de20(void)

{
  __asm mov dword ptr [LAB_121a4df0], 0
  __asm mov dword ptr [ecx], offset LAB_119099cc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5de40; body size 38 bytes.
#line 1 "ENTRY_10b5de40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5de40(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5de70; body size 21 bytes.
#line 1 "ENTRY_10b5de70"

__declspec(naked) void FUN_10b5de70(void)

{
  __asm mov dword ptr [LAB_121a4df4], 0
  __asm mov dword ptr [ecx], offset LAB_11909a10
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5de90; body size 38 bytes.
#line 1 "ENTRY_10b5de90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5de90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5dec0; body size 21 bytes.
#line 1 "ENTRY_10b5dec0"

__declspec(naked) void FUN_10b5dec0(void)

{
  __asm mov dword ptr [LAB_121a4df8], 0
  __asm mov dword ptr [ecx], offset LAB_11909a54
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5dee0; body size 38 bytes.
#line 1 "ENTRY_10b5dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5dee0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5df10; body size 21 bytes.
#line 1 "ENTRY_10b5df10"

__declspec(naked) void FUN_10b5df10(void)

{
  __asm mov dword ptr [LAB_121a4dfc], 0
  __asm mov dword ptr [ecx], offset LAB_11909a98
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5df30; body size 38 bytes.
#line 1 "ENTRY_10b5df30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5df30(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5df60; body size 21 bytes.
#line 1 "ENTRY_10b5df60"

__declspec(naked) void FUN_10b5df60(void)

{
  __asm mov dword ptr [LAB_121a4e00], 0
  __asm mov dword ptr [ecx], offset LAB_11909adc
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5df80; body size 38 bytes.
#line 1 "ENTRY_10b5df80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5df80(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5dfb0; body size 21 bytes.
#line 1 "ENTRY_10b5dfb0"

__declspec(naked) void FUN_10b5dfb0(void)

{
  __asm mov dword ptr [LAB_121a4e04], 0
  __asm mov dword ptr [ecx], offset LAB_11909b20
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5dfd0; body size 38 bytes.
#line 1 "ENTRY_10b5dfd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5dfd0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5e000; body size 21 bytes.
#line 1 "ENTRY_10b5e000"

__declspec(naked) void FUN_10b5e000(void)

{
  __asm mov dword ptr [LAB_121a4dd0], 0
  __asm mov dword ptr [ecx], offset LAB_1190975c
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5e020; body size 38 bytes.
#line 1 "ENTRY_10b5e020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5e020(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[4] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[35] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  pa_1[42] = (undefined4)((uint)&ghidra_vftable_SCNewWizPageFor);
  FUN_10024127<>();
  return;
}


// Reference entry 10b5e050; body size 21 bytes.
#line 1 "ENTRY_10b5e050"

__declspec(naked) void FUN_10b5e050(void)

{
  __asm mov dword ptr [LAB_121a4dd4], 0
  __asm mov dword ptr [ecx], offset LAB_119097b8
  __asm jmp LAB_1003c4f2
}





// Reference entry 10b5e070; body size 5 bytes.
#line 1 "ENTRY_10b5e070"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b5e070(undefined4 *param_1)

{ __asm jmp FUN_1005f5e2 }


// Reference entry 10b5e1d0; body size 14 bytes.
#line 1 "ENTRY_10b5e1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b5e1d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b5e1f0; body size 14 bytes.
#line 1 "ENTRY_10b5e1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b5e1f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b5e320; body size 6 bytes.
#line 1 "ENTRY_10b5e320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b5e320(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10b5e330; body size 6 bytes.
#line 1 "ENTRY_10b5e330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b5e330(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10b5e340; body size 6 bytes.
#line 1 "ENTRY_10b5e340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b5e340(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10b5e360; body size 20 bytes.
#line 1 "ENTRY_10b5e360"

__declspec(naked) void FUN_10b5e360(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_1005fd21
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 10b5f590; body size 31 bytes.
#line 1 "ENTRY_10b5f590"

__declspec(naked) void FUN_10b5f590(void)

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





// Reference entry 10b5f5e0; body size 14 bytes.
#line 1 "ENTRY_10b5f5e0"

__declspec(naked) void FUN_10b5f5e0(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 10b5f600; body size 5 bytes.
#line 1 "ENTRY_10b5f600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b5f600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5f610; body size 3 bytes.
#line 1 "ENTRY_10b5f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5f610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5f620; body size 3 bytes.
#line 1 "ENTRY_10b5f620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5f620(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5f630; body size 3 bytes.
#line 1 "ENTRY_10b5f630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5f630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5f640; body size 3 bytes.
#line 1 "ENTRY_10b5f640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5f640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5f650; body size 3 bytes.
#line 1 "ENTRY_10b5f650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5f650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5f660; body size 3 bytes.
#line 1 "ENTRY_10b5f660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5f660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5f670; body size 3 bytes.
#line 1 "ENTRY_10b5f670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5f670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5f680; body size 3 bytes.
#line 1 "ENTRY_10b5f680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5f680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b5f920; body size 79 bytes.
#line 1 "ENTRY_10b5f920"

__declspec(naked) void FUN_10b5f920(void)

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





// Reference entry 10b5f990; body size 30 bytes.
#line 1 "ENTRY_10b5f990"

__declspec(naked) void FUN_10b5f990(void)

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





// Reference entry 10b5f9c0; body size 31 bytes.
#line 1 "ENTRY_10b5f9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10b5f9c0(int *param_1)

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


// Reference entry 10b5f9f0; body size 11 bytes.
#line 1 "ENTRY_10b5f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5f9f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b5fa00; body size 83 bytes.
#line 1 "ENTRY_10b5fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b5fa00(int *param_2)
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


// Reference entry 10b5fa70; body size 97 bytes.
#line 1 "ENTRY_10b5fa70"

__declspec(naked) void FUN_10b5fa70(void)

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





// Reference entry 10b5faf0; body size 13 bytes.
#line 1 "ENTRY_10b5faf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b5faf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b5fb00; body size 3 bytes.
#line 1 "ENTRY_10b5fb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b5fb00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b60920; body size 63 bytes.
#line 1 "ENTRY_10b60920"

__declspec(naked) void FUN_10b60920(void)

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





// Reference entry 10b60970; body size 66 bytes.
#line 1 "ENTRY_10b60970"

__declspec(naked) void FUN_10b60970(void)

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





// Reference entry 10b609d0; body size 11 bytes.
#line 1 "ENTRY_10b609d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b609d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b609e0; body size 4 bytes.
#line 1 "ENTRY_10b609e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b609e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b6b470; body size 6 bytes.
#line 1 "ENTRY_10b6b470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b470(void)

{
  return (undefined4)(DAT_121a4dcc);
}


// Reference entry 10b6b480; body size 6 bytes.
#line 1 "ENTRY_10b6b480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b480(void)

{
  return (undefined4)(DAT_121a4dd8);
}


// Reference entry 10b6b490; body size 6 bytes.
#line 1 "ENTRY_10b6b490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b490(void)

{
  return (undefined4)(DAT_121a4ddc);
}


// Reference entry 10b6b4a0; body size 6 bytes.
#line 1 "ENTRY_10b6b4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b4a0(void)

{
  return (undefined4)(DAT_121a4de0);
}


// Reference entry 10b6b4b0; body size 6 bytes.
#line 1 "ENTRY_10b6b4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b4b0(void)

{
  return (undefined4)(DAT_121a4de4);
}


// Reference entry 10b6b4c0; body size 6 bytes.
#line 1 "ENTRY_10b6b4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b4c0(void)

{
  return (undefined4)(DAT_121a4de8);
}


// Reference entry 10b6b4d0; body size 6 bytes.
#line 1 "ENTRY_10b6b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b4d0(void)

{
  return (undefined4)(DAT_121a4dec);
}


// Reference entry 10b6b4e0; body size 6 bytes.
#line 1 "ENTRY_10b6b4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b4e0(void)

{
  return (undefined4)(DAT_121a4df0);
}


// Reference entry 10b6b4f0; body size 6 bytes.
#line 1 "ENTRY_10b6b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b4f0(void)

{
  return (undefined4)(DAT_121a4df4);
}


// Reference entry 10b6b500; body size 6 bytes.
#line 1 "ENTRY_10b6b500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b500(void)

{
  return (undefined4)(DAT_121a4df8);
}


// Reference entry 10b6b510; body size 6 bytes.
#line 1 "ENTRY_10b6b510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b510(void)

{
  return (undefined4)(DAT_121a4dfc);
}


// Reference entry 10b6b520; body size 6 bytes.
#line 1 "ENTRY_10b6b520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b520(void)

{
  return (undefined4)(DAT_121a4e00);
}


// Reference entry 10b6b530; body size 6 bytes.
#line 1 "ENTRY_10b6b530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b530(void)

{
  return (undefined4)(DAT_121a4e04);
}


// Reference entry 10b6b540; body size 6 bytes.
#line 1 "ENTRY_10b6b540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b540(void)

{
  return (undefined4)(DAT_121a4dd0);
}


// Reference entry 10b6b550; body size 6 bytes.
#line 1 "ENTRY_10b6b550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b550(void)

{
  return (undefined4)(DAT_121a4dd4);
}


// Reference entry 10b6b560; body size 6 bytes.
#line 1 "ENTRY_10b6b560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6b560(void)

{
  return (undefined4)(DAT_121a4dc8);
}


// Reference entry 10b6b880; body size 5 bytes.
#line 1 "ENTRY_10b6b880"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b6b880(int param_1)

{ __asm jmp FUN_1000d2bf }


// Reference entry 10b6bae0; body size 6 bytes.
#line 1 "ENTRY_10b6bae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6bae0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10b6baf0; body size 6 bytes.
#line 1 "ENTRY_10b6baf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6baf0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10b6c1f0; body size 5 bytes.
#line 1 "ENTRY_10b6c1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6c1f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b6c200; body size 39 bytes.
#line 1 "ENTRY_10b6c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b6c200(undefined4 param_2,undefined4 *param_3)
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


// Reference entry 10b6c230; body size 91 bytes.
#line 1 "ENTRY_10b6c230"

__declspec(naked) void FUN_10b6c230(void)

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





// Reference entry 10b6c390; body size 26 bytes.
#line 1 "ENTRY_10b6c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b6c390(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b6c3b0; body size 26 bytes.
#line 1 "ENTRY_10b6c3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b6c3b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b6c3d0; body size 26 bytes.
#line 1 "ENTRY_10b6c3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b6c3d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b6c3f0; body size 26 bytes.
#line 1 "ENTRY_10b6c3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b6c3f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b6c550; body size 26 bytes.
#line 1 "ENTRY_10b6c550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b6c550(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b6c570; body size 83 bytes.
#line 1 "ENTRY_10b6c570"

__declspec(naked) void FUN_10b6c570(void)

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





// Reference entry 10b6c6d0; body size 78 bytes.
#line 1 "ENTRY_10b6c6d0"

__declspec(naked) void FUN_10b6c6d0(void)

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





// Reference entry 10b6c960; body size 78 bytes.
#line 1 "ENTRY_10b6c960"

__declspec(naked) void FUN_10b6c960(void)

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





// Reference entry 10b6c9d0; body size 78 bytes.
#line 1 "ENTRY_10b6c9d0"

__declspec(naked) void FUN_10b6c9d0(void)

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





// Reference entry 10b6ca40; body size 5 bytes.
#line 1 "ENTRY_10b6ca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b6ca40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b6cc20; body size 6 bytes.
#line 1 "ENTRY_10b6cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b6cc20(void)

{
  return (char *)("SCIGroupVolume");
}


// Reference entry 10b6cc30; body size 6 bytes.
#line 1 "ENTRY_10b6cc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b6cc30(void)

{
  return (char *)("SCIOpAVTransportEndDirectControlSession");
}


// Reference entry 10b6ccd0; body size 27 bytes.
#line 1 "ENTRY_10b6ccd0"

__declspec(naked) void FUN_10b6ccd0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1190a964
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10b6cd00; body size 27 bytes.
#line 1 "ENTRY_10b6cd00"

__declspec(naked) void FUN_10b6cd00(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1190a7a0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10b6ced0; body size 32 bytes.
#line 1 "ENTRY_10b6ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b6ced0(undefined4 *param_2)
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


// Reference entry 10b6cf40; body size 16 bytes.
#line 1 "ENTRY_10b6cf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b6cf40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6cf60; body size 16 bytes.
#line 1 "ENTRY_10b6cf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b6cf60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6cf80; body size 16 bytes.
#line 1 "ENTRY_10b6cf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b6cf80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6cfa0; body size 16 bytes.
#line 1 "ENTRY_10b6cfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b6cfa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6d040; body size 42 bytes.
#line 1 "ENTRY_10b6d040"

__declspec(naked) void FUN_10b6d040(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190a7a0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190a82c
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b6d080; body size 9 bytes.
#line 1 "ENTRY_10b6d080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b6d080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAVTransportEndDirectControlSession);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6d090; body size 9 bytes.
#line 1 "ENTRY_10b6d090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b6d090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIZoneGroup);
  return (undefined4 *)(param_1);
}


// Reference entry 10b6d370; body size 11 bytes.
#line 1 "ENTRY_10b6d370"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b6d370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpAVTEndDirectControlSessionAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10b6d810; body size 7 bytes.
#line 1 "ENTRY_10b6d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b6d810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b6d820; body size 7 bytes.
#line 1 "ENTRY_10b6d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b6d820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b6d830; body size 18 bytes.
#line 1 "ENTRY_10b6d830"

__declspec(naked) void FUN_10b6d830(void)

{
  __asm mov dword ptr [ecx], offset LAB_1190aa08
  __asm mov dword ptr [ecx + 8], offset LAB_1190aa50
  __asm jmp LAB_1003eac7
}





// Reference entry 10b6dae0; body size 12 bytes.
#line 1 "ENTRY_10b6dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10b6dae0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10b6daf0; body size 3 bytes.
#line 1 "ENTRY_10b6daf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b6daf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b6db00; body size 3 bytes.
#line 1 "ENTRY_10b6db00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b6db00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b6db10; body size 3 bytes.
#line 1 "ENTRY_10b6db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b6db10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b6db20; body size 7 bytes.
#line 1 "ENTRY_10b6db20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b6db20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b6db30; body size 3 bytes.
#line 1 "ENTRY_10b6db30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b6db30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b6db40; body size 7 bytes.
#line 1 "ENTRY_10b6db40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b6db40(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b6db50; body size 3 bytes.
#line 1 "ENTRY_10b6db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b6db50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b6dd70; body size 13 bytes.
#line 1 "ENTRY_10b6dd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b6dd70(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10b6e340; body size 9 bytes.
#line 1 "ENTRY_10b6e340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b6e340(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b6e350; body size 9 bytes.
#line 1 "ENTRY_10b6e350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b6e350(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b6fea0; body size 4 bytes.
#line 1 "ENTRY_10b6fea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b6fea0(int param_1)

{
  return (int)(param_1 + 0x20);
}


// Reference entry 10b6ff00; body size 4 bytes.
#line 1 "ENTRY_10b6ff00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b6ff00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10b71250; body size 6 bytes.
#line 1 "ENTRY_10b71250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b71250(void)

{
  return (char *)("SCIGroupVolume");
}


// Reference entry 10b71260; body size 6 bytes.
#line 1 "ENTRY_10b71260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b71260(void)

{
  return (char *)("SCIOpAVTransportEndDirectControlSession");
}


// Reference entry 10b716f0; body size 4 bytes.
#line 1 "ENTRY_10b716f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b716f0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x70));
}


// Reference entry 10b719c0; body size 7 bytes.
#line 1 "ENTRY_10b719c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b719c0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10b719d0; body size 7 bytes.
#line 1 "ENTRY_10b719d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b719d0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10b719e0; body size 7 bytes.
#line 1 "ENTRY_10b719e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b719e0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10b71b00; body size 7 bytes.
#line 1 "ENTRY_10b71b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b71b00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b71b10; body size 7 bytes.
#line 1 "ENTRY_10b71b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b71b10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b71b20; body size 7 bytes.
#line 1 "ENTRY_10b71b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b71b20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b71b50; body size 4 bytes.
#line 1 "ENTRY_10b71b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b71b50(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x71));
}


// Reference entry 10b721a0; body size 3 bytes.
#line 1 "ENTRY_10b721a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b721a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b721b0; body size 3 bytes.
#line 1 "ENTRY_10b721b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b721b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b721c0; body size 3 bytes.
#line 1 "ENTRY_10b721c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b721c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b72760; body size 28 bytes.
#line 1 "ENTRY_10b72760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b72760(undefined4 *param_1)

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


// Reference entry 10b72790; body size 28 bytes.
#line 1 "ENTRY_10b72790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b72790(undefined4 *param_1)

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


// Reference entry 10b727c0; body size 28 bytes.
#line 1 "ENTRY_10b727c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b727c0(undefined4 *param_1)

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


// Reference entry 10b727f0; body size 20 bytes.
#line 1 "ENTRY_10b727f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b727f0(int *param_1)

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


// Reference entry 10b72d90; body size 5 bytes.
#line 1 "ENTRY_10b72d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b72d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b72da0; body size 13 bytes.
#line 1 "ENTRY_10b72da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b72da0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b72db0; body size 13 bytes.
#line 1 "ENTRY_10b72db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b72db0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b72dc0; body size 5 bytes.
#line 1 "ENTRY_10b72dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b72dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b72dd0; body size 135 bytes.
#line 1 "ENTRY_10b72dd0"

__declspec(naked) void FUN_10b72dd0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esp + 0x10], eax
  __asm test esi, esi
  __asm _emit 0x79 __asm _emit 0x57
  __asm neg esi
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [eax + 8]
  __asm _emit 0xeb __asm _emit 0x40
  __asm mov ecx, dword ptr [eax]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x22
  __asm mov ecx, dword ptr [eax + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0f
  __asm cmp eax, dword ptr [ecx]
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [ecx + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf1
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x1a
  __asm mov eax, ecx
  __asm _emit 0xeb __asm _emit 0x16
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [eax + 8]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [eax + 8]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf5
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xb0
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm ret
  __asm _emit 0x7e __asm _emit 0x15 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm lea ecx, [esp + 0x10]
  __asm call LAB_10052482
  __asm dec esi
  __asm test esi, esi
  __asm _emit 0x7f __asm _emit 0xf2
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [edi], eax
  __asm pop edi
  __asm pop esi
  __asm ret
}





// Reference entry 10b72e80; body size 5 bytes.
#line 1 "ENTRY_10b72e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b72e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b72e90; body size 5 bytes.
#line 1 "ENTRY_10b72e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b72e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b72ea0; body size 5 bytes.
#line 1 "ENTRY_10b72ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b72ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b72eb0; body size 138 bytes.
#line 1 "ENTRY_10b72eb0"

__declspec(naked) void FUN_10b72eb0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov dword ptr [esp + 0x10], eax
  __asm test esi, esi
  __asm _emit 0x79 __asm _emit 0x5d
  __asm neg esi
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [eax + 8]
  __asm _emit 0xeb __asm _emit 0x41
  __asm mov ecx, dword ptr [eax]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x23
  __asm mov ecx, dword ptr [eax + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x10
  __asm nop
  __asm cmp eax, dword ptr [ecx]
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [ecx + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf1
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x1a
  __asm mov eax, ecx
  __asm _emit 0xeb __asm _emit 0x16
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [eax + 8]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x0b
  __asm mov eax, ecx
  __asm mov ecx, dword ptr [eax + 8]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xf5
  __asm sub esi, 1
  __asm _emit 0x75 __asm _emit 0xaf
  __asm mov ecx, dword ptr [esp + 8]
  __asm pop esi
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm ret
  __asm _emit 0x7e __asm _emit 0xf4
  __asm lea ecx, [esp + 0x10]
  __asm call LAB_10052482
  __asm dec esi
  __asm test esi, esi
  __asm _emit 0x7f __asm _emit 0xf2
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm pop esi
  __asm mov dword ptr [eax], ecx
  __asm ret
}





// Reference entry 10b72f60; body size 11 bytes.
#line 1 "ENTRY_10b72f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b72f60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b72f70; body size 11 bytes.
#line 1 "ENTRY_10b72f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b72f70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b72f80; body size 11 bytes.
#line 1 "ENTRY_10b72f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b72f80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b72f90; body size 11 bytes.
#line 1 "ENTRY_10b72f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b72f90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b73180; body size 14 bytes.
#line 1 "ENTRY_10b73180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b73180(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b731a0; body size 14 bytes.
#line 1 "ENTRY_10b731a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b731a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b731c0; body size 6 bytes.
#line 1 "ENTRY_10b731c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b731c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10b731d0; body size 3 bytes.
#line 1 "ENTRY_10b731d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b731d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b731e0; body size 6 bytes.
#line 1 "ENTRY_10b731e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b731e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10b731f0; body size 6 bytes.
#line 1 "ENTRY_10b731f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b731f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10b732e0; body size 20 bytes.
#line 1 "ENTRY_10b732e0"

__declspec(naked) void FUN_10b732e0(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_10052482
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}





// Reference entry 10b73380; body size 16 bytes.
#line 1 "ENTRY_10b73380"

__declspec(naked) void FUN_10b73380(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 8
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}





// Reference entry 10b734e0; body size 9 bytes.
#line 1 "ENTRY_10b734e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b734e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10b734f0; body size 11 bytes.
#line 1 "ENTRY_10b734f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b734f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b73650; body size 13 bytes.
#line 1 "ENTRY_10b73650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b73650(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b73660; body size 11 bytes.
#line 1 "ENTRY_10b73660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b73660(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b750d0; body size 114 bytes.
#line 1 "ENTRY_10b750d0"

__declspec(naked) void FUN_10b750d0(void)

{
  __asm mov eax, dword ptr [esp + 0x10]
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov eax, dword ptr [eax]
  __asm mov ebp, offset LAB_1186d2ee
  __asm test eax, eax
  __asm mov cl, byte ptr [esp + 0x20]
  __asm push edi
  __asm mov edi, ebp
  __asm mov esi, ebp
  __asm cmovne edi, eax
  __asm mov edx, ebp
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm mov ebx, offset LAB_11889d1c
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne esi, eax
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm test cl, cl
  __asm mov eax, offset LAB_1190ae78
  __asm cmove eax, ebp
  __asm push eax
  __asm mov eax, offset LAB_11889d24
  __asm cmove eax, ebx
  __asm push eax
  __asm mov eax, offset LAB_11879084
  __asm cmove eax, ebp
  __asm push eax
  __asm push edi
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x28]
  __asm push edx
  __asm push offset LAB_1190ac70
  __asm push esi
  __asm call LAB_1006a316
  __asm add esp, 0x20
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}





// Reference entry 10b75160; body size 11 bytes.
#line 1 "ENTRY_10b75160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b75160(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b75170; body size 12 bytes.
#line 1 "ENTRY_10b75170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b75170(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b75330; body size 4 bytes.
#line 1 "ENTRY_10b75330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b75330(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x28));
}


// Reference entry 10b75340; body size 20 bytes.
#line 1 "ENTRY_10b75340"

__declspec(naked) void FUN_10b75340(void)

{
  __asm lea eax, [ecx + 0x30]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1006e600
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}





// Reference entry 10b754f0; body size 19 bytes.
#line 1 "ENTRY_10b754f0"

__declspec(naked) void FUN_10b754f0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1190b038
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret
}





// Reference entry 10b75510; body size 20 bytes.
#line 1 "ENTRY_10b75510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b75510(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x18));
  return (SCStr *)(param_2);
}


// Reference entry 10b75530; body size 20 bytes.
#line 1 "ENTRY_10b75530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b75530(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10));
  return (SCStr *)(param_2);
}


// Reference entry 10b75550; body size 20 bytes.
#line 1 "ENTRY_10b75550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b75550(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x14));
  return (SCStr *)(param_2);
}


// Reference entry 10b756c0; body size 19 bytes.
#line 1 "ENTRY_10b756c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10b756c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("<link rel=\"stylesheet\" href=\"//code.jquery.com/ui/1.12.1/themes/base/jquery-ui.css\"> <script src=\"https://code.jquery.com/jquery-1.12.4.js\"></script> <script src=\"https://code.jquery.com/ui/1.12.1/jquery-ui.js\"></script>");
  return (SCStr *)(param_1);
}


// Reference entry 10b756e0; body size 19 bytes.
#line 1 "ENTRY_10b756e0"

__declspec(naked) void FUN_10b756e0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1190c5a0
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret
}





// Reference entry 10b75820; body size 20 bytes.
#line 1 "ENTRY_10b75820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b75820(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10b75840; body size 4 bytes.
#line 1 "ENTRY_10b75840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b75840(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10b75850; body size 4 bytes.
#line 1 "ENTRY_10b75850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10b75850(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x1c));
}


// Reference entry 10b75860; body size 19 bytes.
#line 1 "ENTRY_10b75860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10b75860(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("<div id=\"logo\"> <svg version=\"1.1\" width=\"125\" height=\"25\" viewBox=\"0 0 80 16\" aria-label=\"Sonos\" role=\"img\"> <path fill-rule=\"nonzero\" d=\"M43.335.666h2.805v15.012l-9.475-8.82v8.365H33.86V.249l9.475 8.833V.666zM29.425 7.97c0 4.334-3.525 7.86-7.858 7.86-4.334 0-7.859-3.526-7.859-7.86 0-4.334 3.525-7.86 7.859-7.86 4.333 0 7.858 3.526 7.858 7.86zm-2.88 0c0-2.78-2.237-5.042-4.991-5.042-2.754 0-4.978 2.262-4.978 5.042s2.236 5.042 4.978 5.042c2.754 0 4.99-2.262 4.99-5.042zM8.92 8.096c-.746-.569-1.731-1.023-3.184-1.491-2.843-.91-2.843-1.617-2.843-1.971 0-.809.897-1.643 2.413-1.643 1.276 0 2.262.632 2.628.91l.202.152 2.262-1.53-.253-.29C10.07 2.144 8.326.11 5.294.11 3.84.11 2.502.578 1.529 1.424.556 2.271 0 3.434 0 4.646c0 1.29.569 2.376 1.68 3.223.746.568 1.731 1.023 3.184 1.49 2.843.898 2.843 1.618 2.843 1.972 0 .809-.897 1.643-2.413 1.643-1.276 0-2.262-.632-2.628-.91l-.202-.152-2.262 1.53.253.29c.076.088 1.82 2.11 4.839 2.11 1.453 0 2.792-.467 3.765-1.314.973-.847 1.528-2.022 1.528-3.222 0-1.277-.555-2.35-1.667-3.21zm41.68-.063c0-4.334 3.525-7.86 7.859-7.86 4.333 0 7.858 3.526 7.858 7.86 0 4.334-3.525 7.86-7.858 7.86-4.334 0-7.859-3.526-7.859-7.86zm2.868 0c0 2.78 2.236 5.042 4.978 5.042 2.754 0 4.978-2.262 4.978-5.042S61.188 2.99 58.446 2.99c-2.742 0-4.978 2.262-4.978 5.042zm17.625-.14c.745.57 1.73 1.024 3.184 1.492 2.842.91 2.842 1.617 2.842 1.971 0 .809-.897 1.643-2.413 1.643-1.276 0-2.261-.632-2.628-.91l-.202-.151-2.261 1.529.252.29c.076.089 1.82 2.11 4.84 2.11 1.452 0 2.791-.467 3.764-1.314.973-.846 1.529-2.009 1.529-3.222 0-1.289-.569-2.376-1.68-3.222-.746-.569-1.731-1.024-3.184-1.491-2.843-.91-2.843-1.618-2.843-1.972 0-.808.897-1.642 2.413-1.642 1.276 0 2.262.632 2.628.91l.202.151 2.262-1.529-.253-.29c-.076-.089-1.82-2.11-4.839-2.11-1.453 0-2.792.467-3.765 1.313-.973.847-1.528 2.022-1.528 3.223.012 1.289.568 2.375 1.68 3.222z\"> </path> </svg> </div>");
  return (SCStr *)(param_1);
}


// Reference entry 10b75880; body size 3 bytes.
#line 1 "ENTRY_10b75880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b75880(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b75890; body size 20 bytes.
#line 1 "ENTRY_10b75890"

__declspec(naked) void FUN_10b75890(void)

{
  __asm lea eax, [ecx + 0x1c]
  __asm mov ecx, dword ptr [esp + 4]
  __asm push eax
  __asm call LAB_1006e600
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}





// Reference entry 10b759d0; body size 5 bytes.
#line 1 "ENTRY_10b759d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b759d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b759e0; body size 61 bytes.
#line 1 "ENTRY_10b759e0"

__declspec(naked) void FUN_10b759e0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 10b75a30; body size 22 bytes.
#line 1 "ENTRY_10b75a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b75a30(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b75b10; body size 22 bytes.
#line 1 "ENTRY_10b75b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b75b10(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b75b30; body size 63 bytes.
#line 1 "ENTRY_10b75b30"

__declspec(naked) void FUN_10b75b30(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}





// Reference entry 10b75b80; body size 26 bytes.
#line 1 "ENTRY_10b75b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b75b80(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b75ba0; body size 13 bytes.
#line 1 "ENTRY_10b75ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b75ba0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b75c80; body size 5 bytes.
#line 1 "ENTRY_10b75c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b75c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b75f20; body size 5 bytes.
#line 1 "ENTRY_10b75f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b75f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b75f30; body size 55 bytes.
#line 1 "ENTRY_10b75f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b75f30(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

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


// Reference entry 10b75f80; body size 15 bytes.
#line 1 "ENTRY_10b75f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b75f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10b75fa0; body size 5 bytes.
#line 1 "ENTRY_10b75fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b75fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b75fb0; body size 5 bytes.
#line 1 "ENTRY_10b75fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b75fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b75fc0; body size 16 bytes.
#line 1 "ENTRY_10b75fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b75fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b75fe0; body size 32 bytes.
#line 1 "ENTRY_10b75fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b75fe0(undefined4 *param_2)
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


// Reference entry 10b76010; body size 16 bytes.
#line 1 "ENTRY_10b76010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b76010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b76050; body size 18 bytes.
#line 1 "ENTRY_10b76050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b76050(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b76070; body size 11 bytes.
#line 1 "ENTRY_10b76070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b76070(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b76080; body size 11 bytes.
#line 1 "ENTRY_10b76080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b76080(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b76680; body size 11 bytes.
#line 1 "ENTRY_10b76680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b76680(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b76d30; body size 65 bytes.
#line 1 "ENTRY_10b76d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b76d30(int *param_2)
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


// Reference entry 10b76e00; body size 14 bytes.
#line 1 "ENTRY_10b76e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b76e00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b76e20; body size 14 bytes.
#line 1 "ENTRY_10b76e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b76e20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b76e40; body size 14 bytes.
#line 1 "ENTRY_10b76e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b76e40(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b76e60; body size 14 bytes.
#line 1 "ENTRY_10b76e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b76e60(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b76eb0; body size 7 bytes.
#line 1 "ENTRY_10b76eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b76eb0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b76ec0; body size 3 bytes.
#line 1 "ENTRY_10b76ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b76ec0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b76ed0; body size 7 bytes.
#line 1 "ENTRY_10b76ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b76ed0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b76ee0; body size 3 bytes.
#line 1 "ENTRY_10b76ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b76ee0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b76ef0; body size 3 bytes.
#line 1 "ENTRY_10b76ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b76ef0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b76f00; body size 6 bytes.
#line 1 "ENTRY_10b76f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b76f00(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b76f10; body size 6 bytes.
#line 1 "ENTRY_10b76f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b76f10(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b76f20; body size 6 bytes.
#line 1 "ENTRY_10b76f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b76f20(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b76f30; body size 6 bytes.
#line 1 "ENTRY_10b76f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b76f30(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b76f40; body size 6 bytes.
#line 1 "ENTRY_10b76f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b76f40(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b76f50; body size 9 bytes.
#line 1 "ENTRY_10b76f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b76f50(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b76f60; body size 9 bytes.
#line 1 "ENTRY_10b76f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b76f60(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b76f70; body size 9 bytes.
#line 1 "ENTRY_10b76f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b76f70(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b76f80; body size 9 bytes.
#line 1 "ENTRY_10b76f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b76f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b76f90; body size 10 bytes.
#line 1 "ENTRY_10b76f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b76f90(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10b772c0; body size 20 bytes.
#line 1 "ENTRY_10b772c0"

__declspec(naked) void FUN_10b772c0(void)

{
  __asm cmp dword ptr [ecx + 8], 0xccccccc
  __asm _emit 0x74 __asm _emit 0x01
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}





// Reference entry 10b772e0; body size 66 bytes.
#line 1 "ENTRY_10b772e0"

__declspec(naked) void FUN_10b772e0(void)

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





// Reference entry 10b777c0; body size 3 bytes.
#line 1 "ENTRY_10b777c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b777c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b777d0; body size 3 bytes.
#line 1 "ENTRY_10b777d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b777d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b777e0; body size 3 bytes.
#line 1 "ENTRY_10b777e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b777e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b777f0; body size 92 bytes.
#line 1 "ENTRY_10b777f0"

__declspec(naked) void FUN_10b777f0(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm mov edx, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm mov ebx, dword ptr [edi + 4]
  __asm inc dword ptr [edx + 8]
  __asm mov dword ptr [esi], edi
  __asm mov dword ptr [esi + 4], ebx
  __asm mov dword ptr [ebx], esi
  __asm mov dword ptr [edi + 4], esi
  __asm mov eax, dword ptr [edx + 0x18]
  __asm mov ecx, dword ptr [edx + 0xc]
  __asm and eax, dword ptr [esp + 0x10]
  __asm lea eax, [ecx + eax*8]
  __asm mov ecx, dword ptr [eax]
  __asm cmp ecx, dword ptr [edx + 4]
  __asm _emit 0x75 __asm _emit 0x0d
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [eax + 4], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp ecx, edi
  __asm _emit 0x75 __asm _emit 0x0a
  __asm mov dword ptr [eax], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp dword ptr [eax + 4], ebx
  __asm _emit 0x75 __asm _emit 0x03
  __asm mov dword ptr [eax + 4], esi
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
}





// Reference entry 10b77870; body size 3 bytes.
#line 1 "ENTRY_10b77870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b77870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b778f0; body size 3 bytes.
#line 1 "ENTRY_10b778f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b778f0(void)

{
  return;
}


// Reference entry 10b779b0; body size 11 bytes.
#line 1 "ENTRY_10b779b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b779b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b779c0; body size 14 bytes.
#line 1 "ENTRY_10b779c0"

__declspec(naked) void FUN_10b779c0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}





// Reference entry 10b779e0; body size 13 bytes.
#line 1 "ENTRY_10b779e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b779e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b779f0; body size 12 bytes.
#line 1 "ENTRY_10b779f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b779f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b77a00; body size 43 bytes.
#line 1 "ENTRY_10b77a00"

__declspec(naked) void FUN_10b77a00(void)

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





// Reference entry 10b77a40; body size 14 bytes.
#line 1 "ENTRY_10b77a40"

__declspec(naked) void FUN_10b77a40(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}





// Reference entry 10b77a60; body size 13 bytes.
#line 1 "ENTRY_10b77a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b77a60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b77a70; body size 35 bytes.
#line 1 "ENTRY_10b77a70"

__declspec(naked) void FUN_10b77a70(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, offset LAB_1186d2ee
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm push edx
  __asm call LAB_1008dbcc
  __asm and eax, dword ptr [esi + 0x18]
  __asm add esp, 4
  __asm pop esi
  __asm ret 4
}





// Reference entry 10b77aa0; body size 4 bytes.
#line 1 "ENTRY_10b77aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b77aa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10b77ab0; body size 23 bytes.
#line 1 "ENTRY_10b77ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b77ab0(int param_1)

{
  if ((*(int **)(param_1 + 0x1c) != (int *)((0x0))) && (*(int *)(param_1 + 0x10) != 0)) {
    ((SCVtbl_6_1*)(*(int **)(param_1 + 0x1c)))->v((int)(*(int *)(param_1 + 0x10)));
  }
  return;
}


// Reference entry 10b77b30; body size 108 bytes.
#line 1 "ENTRY_10b77b30"

__declspec(naked) void FUN_10b77b30(void)

{
  __asm push ecx
  __asm push ebx
  __asm mov ebx, ecx
  __asm cmp dword ptr [ebx + 8], 0
  __asm _emit 0x74 __asm _emit 0x5f
  __asm mov edx, dword ptr [ebx + 4]
  __asm push edi
  __asm mov eax, dword ptr [edx + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, dword ptr [edx]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x1f
  __asm push esi
  __asm nop
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [edi + 8]
  __asm call LAB_1006e4ed
  __asm push 0x14
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov edi, esi
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0xe5
  __asm pop esi
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov dword ptr [esp + 8], eax
  __asm lea eax, [esp + 8]
  __asm push eax
  __asm push dword ptr [ebx + 0x10]
  __asm push dword ptr [ebx + 0xc]
  __asm call LAB_1004e2f1
  __asm add esp, 0xc
  __asm pop edi
  __asm pop ebx
  __asm pop ecx
  __asm ret
}





// Reference entry 10b77e50; body size 60 bytes.
#line 1 "ENTRY_10b77e50"

__declspec(naked) void FUN_10b77e50(void)

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





// Reference entry 10b77ee0; body size 12 bytes.
#line 1 "ENTRY_10b77ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b77ee0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b77ef0; body size 11 bytes.
#line 1 "ENTRY_10b77ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b77ef0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b79aa0; body size 25 bytes.
#line 1 "ENTRY_10b79aa0"

__declspec(naked) void FUN_10b79aa0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
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





// Reference entry 10b7a700; body size 3 bytes.
#line 1 "ENTRY_10b7a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10b7a700(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10b7a710; body size 6 bytes.
#line 1 "ENTRY_10b7a710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b7a710(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b7a720; body size 6 bytes.
#line 1 "ENTRY_10b7a720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b7a720(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b7a730; body size 6 bytes.
#line 1 "ENTRY_10b7a730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b7a730(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b7a740; body size 6 bytes.
#line 1 "ENTRY_10b7a740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b7a740(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b7aa80; body size 5 bytes.
#line 1 "ENTRY_10b7aa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b7aa80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b7aa90; body size 3 bytes.
#line 1 "ENTRY_10b7aa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b7aa90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b7ad40; body size 15 bytes.
#line 1 "ENTRY_10b7ad40"

__declspec(naked) void FUN_10b7ad40(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x1c]
  __asm xor eax, eax
  __asm ret
}





// Reference entry 10b7b640; body size 13 bytes.
#line 1 "ENTRY_10b7b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b7b640(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_1_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


// Reference entry 10b7b6f0; body size 26 bytes.
#line 1 "ENTRY_10b7b6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b7b6f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b7b7f0; body size 43 bytes.
#line 1 "ENTRY_10b7b7f0"

__declspec(naked) void FUN_10b7b7f0(void)

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





// Reference entry 10b7b830; body size 26 bytes.
#line 1 "ENTRY_10b7b830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b7b830(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b7b850; body size 26 bytes.
#line 1 "ENTRY_10b7b850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b7b850(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b7b950; body size 78 bytes.
#line 1 "ENTRY_10b7b950"

__declspec(naked) void FUN_10b7b950(void)

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





// Reference entry 10b7b9c0; body size 78 bytes.
#line 1 "ENTRY_10b7b9c0"

__declspec(naked) void FUN_10b7b9c0(void)

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





// Reference entry 10b7ba30; body size 78 bytes.
#line 1 "ENTRY_10b7ba30"

__declspec(naked) void FUN_10b7ba30(void)

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





// Reference entry 10b7bad0; body size 40 bytes.
#line 1 "ENTRY_10b7bad0"

__declspec(naked) void FUN_10b7bad0(void)

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





// Reference entry 10b7bb10; body size 40 bytes.
#line 1 "ENTRY_10b7bb10"

__declspec(naked) void FUN_10b7bb10(void)

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





// Reference entry 10b7bb50; body size 40 bytes.
#line 1 "ENTRY_10b7bb50"

__declspec(naked) void FUN_10b7bb50(void)

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





// Reference entry 10b7bb90; body size 40 bytes.
#line 1 "ENTRY_10b7bb90"

__declspec(naked) void FUN_10b7bb90(void)

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





// Reference entry 10b7bbd0; body size 40 bytes.
#line 1 "ENTRY_10b7bbd0"

__declspec(naked) void FUN_10b7bbd0(void)

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





// Reference entry 10b7bc10; body size 6 bytes.
#line 1 "ENTRY_10b7bc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b7bc10(void)

{
  return (char *)("SCIBrowseService");
}


// Reference entry 10b7bc20; body size 6 bytes.
#line 1 "ENTRY_10b7bc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b7bc20(void)

{
  return (char *)("SCIOpReplaceAccount");
}


// Reference entry 10b7bc30; body size 6 bytes.
#line 1 "ENTRY_10b7bc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b7bc30(void)

{
  return (char *)("SCIScrobblingService");
}


// Reference entry 10b7bc40; body size 6 bytes.
#line 1 "ENTRY_10b7bc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b7bc40(void)

{
  return (char *)("SCISimpleMessagingService");
}


// Reference entry 10b7bce0; body size 27 bytes.
#line 1 "ENTRY_10b7bce0"

__declspec(naked) void FUN_10b7bce0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1190dfa4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10b7bd10; body size 27 bytes.
#line 1 "ENTRY_10b7bd10"

__declspec(naked) void FUN_10b7bd10(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1190e198
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10b7bd40; body size 27 bytes.
#line 1 "ENTRY_10b7bd40"

__declspec(naked) void FUN_10b7bd40(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1190e0cc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10b7bd70; body size 27 bytes.
#line 1 "ENTRY_10b7bd70"

__declspec(naked) void FUN_10b7bd70(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1190ddc4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10b7bda0; body size 27 bytes.
#line 1 "ENTRY_10b7bda0"

__declspec(naked) void FUN_10b7bda0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1190e038
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10b7bdd0; body size 42 bytes.
#line 1 "ENTRY_10b7bdd0"

__declspec(naked) void FUN_10b7bdd0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190dfa4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190dfc0
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7be10; body size 42 bytes.
#line 1 "ENTRY_10b7be10"

__declspec(naked) void FUN_10b7be10(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190e0cc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190e0f4
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7be50; body size 42 bytes.
#line 1 "ENTRY_10b7be50"

__declspec(naked) void FUN_10b7be50(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190e038
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190e054
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7be90; body size 42 bytes.
#line 1 "ENTRY_10b7be90"

__declspec(naked) void FUN_10b7be90(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190dfa4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190dfe8
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7bed0; body size 42 bytes.
#line 1 "ENTRY_10b7bed0"

__declspec(naked) void FUN_10b7bed0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190e0cc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190e124
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7bf10; body size 42 bytes.
#line 1 "ENTRY_10b7bf10"

__declspec(naked) void FUN_10b7bf10(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190e038
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190e07c
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7c130; body size 16 bytes.
#line 1 "ENTRY_10b7c130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b7c130(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c150; body size 32 bytes.
#line 1 "ENTRY_10b7c150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b7c150(undefined4 *param_2)
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


// Reference entry 10b7c180; body size 16 bytes.
#line 1 "ENTRY_10b7c180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b7c180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c1a0; body size 16 bytes.
#line 1 "ENTRY_10b7c1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b7c1a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c200; body size 16 bytes.
#line 1 "ENTRY_10b7c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b7c200(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c320; body size 42 bytes.
#line 1 "ENTRY_10b7c320"

__declspec(naked) void FUN_10b7c320(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190ddc4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190de58
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7c360; body size 127 bytes.
#line 1 "ENTRY_10b7c360"

__declspec(naked) void FUN_10b7c360(void)

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
  __asm push offset LAB_1190dafc
  __asm push offset LAB_11896aa0
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], offset LAB_1190da6c
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], offset LAB_1190dab4
  __asm mov dword ptr [edi + 0x46c], offset LAB_1190daf0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}





// Reference entry 10b7c400; body size 127 bytes.
#line 1 "ENTRY_10b7c400"

__declspec(naked) void FUN_10b7c400(void)

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
  __asm push offset LAB_1190da58
  __asm push offset LAB_11896aa0
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], offset LAB_1190d9c8
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], offset LAB_1190da10
  __asm mov dword ptr [edi + 0x46c], offset LAB_1190da4c
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}





// Reference entry 10b7c550; body size 42 bytes.
#line 1 "ENTRY_10b7c550"

__declspec(naked) void FUN_10b7c550(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190dfa4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190e010
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7c650; body size 9 bytes.
#line 1 "ENTRY_10b7c650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b7c650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseService);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c660; body size 9 bytes.
#line 1 "ENTRY_10b7c660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b7c660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpReplaceAccount);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c670; body size 9 bytes.
#line 1 "ENTRY_10b7c670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b7c670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIScrobblingService);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c680; body size 9 bytes.
#line 1 "ENTRY_10b7c680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b7c680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceAccount);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c690; body size 9 bytes.
#line 1 "ENTRY_10b7c690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b7c690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISimpleMessagingService);
  return (undefined4 *)(param_1);
}


// Reference entry 10b7c8a0; body size 42 bytes.
#line 1 "ENTRY_10b7c8a0"

__declspec(naked) void FUN_10b7c8a0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190e0cc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190e154
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7ca20; body size 42 bytes.
#line 1 "ENTRY_10b7ca20"

__declspec(naked) void FUN_10b7ca20(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1190e038
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1190e0a4
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10b7cb20; body size 11 bytes.
#line 1 "ENTRY_10b7cb20"

/* WARNING: Removing unreachable block_10b7cb20 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cb20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpSPReplaceAccountXAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10b7cb30; body size 19 bytes.
#line 1 "ENTRY_10b7cb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cb30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7cb70; body size 19 bytes.
#line 1 "ENTRY_10b7cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cb70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7cb90; body size 19 bytes.
#line 1 "ENTRY_10b7cb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cb90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7cbb0; body size 19 bytes.
#line 1 "ENTRY_10b7cbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cbb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7cbd0; body size 26 bytes.
#line 1 "ENTRY_10b7cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cbd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7cbf0; body size 26 bytes.
#line 1 "ENTRY_10b7cbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cbf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7cc10; body size 26 bytes.
#line 1 "ENTRY_10b7cc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cc10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7cc30; body size 26 bytes.
#line 1 "ENTRY_10b7cc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cc30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7cc50; body size 26 bytes.
#line 1 "ENTRY_10b7cc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cc50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7cc70; body size 26 bytes.
#line 1 "ENTRY_10b7cc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7cc70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7d300; body size 28 bytes.
#line 1 "ENTRY_10b7d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d300(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPEditAccountPasswordXAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpSPEditAccountPasswordXAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpSPEditAccountPasswordXAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10b7d330; body size 28 bytes.
#line 1 "ENTRY_10b7d330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d330(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPRemoveAccountAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpSPRemoveAccountAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpSPRemoveAccountAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10b7d360; body size 28 bytes.
#line 1 "ENTRY_10b7d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d360(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPReplaceAccountXAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpSPReplaceAccountXAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpSPReplaceAccountXAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10b7d390; body size 26 bytes.
#line 1 "ENTRY_10b7d390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7d490; body size 7 bytes.
#line 1 "ENTRY_10b7d490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d490(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7d4a0; body size 7 bytes.
#line 1 "ENTRY_10b7d4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d4a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7d4b0; body size 7 bytes.
#line 1 "ENTRY_10b7d4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d4b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7d4c0; body size 7 bytes.
#line 1 "ENTRY_10b7d4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d4c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7d4d0; body size 7 bytes.
#line 1 "ENTRY_10b7d4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d4d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7d4e0; body size 18 bytes.
#line 1 "ENTRY_10b7d4e0"

__declspec(naked) void FUN_10b7d4e0(void)

{
  __asm mov dword ptr [ecx], offset LAB_1190e244
  __asm mov dword ptr [ecx + 8], offset LAB_1190e298
  __asm jmp LAB_100421e5
}





// Reference entry 10b7d590; body size 26 bytes.
#line 1 "ENTRY_10b7d590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7d6d0; body size 26 bytes.
#line 1 "ENTRY_10b7d6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b7d6d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  return;
}


// Reference entry 10b7d7f0; body size 3 bytes.
#line 1 "ENTRY_10b7d7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b7d7f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b7d800; body size 3 bytes.
#line 1 "ENTRY_10b7d800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b7d800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b7d810; body size 3 bytes.
#line 1 "ENTRY_10b7d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b7d810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b7d820; body size 7 bytes.
#line 1 "ENTRY_10b7d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b7d820(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b7d830; body size 7 bytes.
#line 1 "ENTRY_10b7d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b7d830(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b7d840; body size 4 bytes.
#line 1 "ENTRY_10b7d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b7d840(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b7d850; body size 3 bytes.
#line 1 "ENTRY_10b7d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b7d850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b7fbf0; body size 82 bytes.
#line 1 "ENTRY_10b7fbf0"

__declspec(naked) void FUN_10b7fbf0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0xc
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm mov dword ptr [esp + 8], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x2f
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [ecx], offset LAB_1190dfa4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov dword ptr [ecx], offset LAB_1190e010
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}





// Reference entry 10b7fc60; body size 82 bytes.
#line 1 "ENTRY_10b7fc60"

__declspec(naked) void FUN_10b7fc60(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0xc
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm mov dword ptr [esp + 8], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x2f
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [ecx], offset LAB_1190e0cc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov dword ptr [ecx], offset LAB_1190e154
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}





// Reference entry 10b7fcd0; body size 82 bytes.
#line 1 "ENTRY_10b7fcd0"

__declspec(naked) void FUN_10b7fcd0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0xc
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm mov dword ptr [esp + 8], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x2f
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [ecx], offset LAB_1190e038
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov dword ptr [ecx], offset LAB_1190e0a4
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm ret
}





// Reference entry 10b80300; body size 16 bytes.
#line 1 "ENTRY_10b80300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b80300(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


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
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getSingleton(A...); };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); static int op_ctor(...) { return 0; } static int op_dtor(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AlarmClock { char _pad; AlarmClock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Array { char _pad; Array(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DataSource { char _pad; DataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Dumping { char _pad; Dumping(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Elements { char _pad; Elements(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Entry { char _pad; Entry(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetDailyIndexRefreshTime { char _pad; GetDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetZoneInfo { char _pad; GetZoneInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Group { char _pad; Group(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RefreshShareIndex { char _pad; RefreshShareIndex(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAccountTransferAccountItem { char _pad; SCAccountTransferAccountItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAggregateSearchDataSource { char _pad; SCAggregateSearchDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAggregateBrowseDataSource { char _pad; SCIAggregateBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAlarmMusic { char _pad; SCIAlarmMusic(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAlarmMusicBrowseItem { char _pad; SCIAlarmMusicBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAreaManager { char _pad; SCIAreaManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBadgeIndicatorSettingsProperty { char _pad; SCIBadgeIndicatorSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCICommittable { char _pad; SCICommittable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDeviceSettingsDataSource { char _pad; SCIDeviceSettingsDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDisplayType { char _pad; SCIDisplayType(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIIndexManager { char _pad; SCIIndexManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAlarmClockGetDailyIndexRefreshTime { char _pad; SCIOpAlarmClockGetDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAlarmClockSetDailyIndexRefreshTime { char _pad; SCIOpAlarmClockSetDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpGetAboutSonosString { char _pad; SCIOpGetAboutSonosString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpGetUsageDataShareOption { char _pad; SCIOpGetUsageDataShareOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpSystemPropertyGetRDM { char _pad; SCIOpSystemPropertyGetRDM(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpSystemPropertyGetString { char _pad; SCIOpSystemPropertyGetString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpValidateServiceCredentials { char _pad; SCIOpValidateServiceCredentials(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIReorderable { char _pad; SCIReorderable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISearchHistoryBrowseDataSource { char _pad; SCISearchHistoryBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISearchHistoryBrowseItem { char _pad; SCISearchHistoryBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISearchHistoryPageDataSource { char _pad; SCISearchHistoryPageDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISearchHistoryViewBrowseItem { char _pad; SCISearchHistoryViewBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISearchResultBrowseItem { char _pad; SCISearchResultBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISettingsBrowseItem { char _pad; SCISettingsBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISettingsProperty { char _pad; SCISettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISpinnerSettingsProperty { char _pad; SCISpinnerSettingsProperty(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIVoiceService { char _pad; SCIVoiceService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCMusicLibraryManagementDataSource { char _pad; SCMusicLibraryManagementDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCUri { char _pad; SCUri(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetDailyIndexRefreshTime { char _pad; SetDailyIndexRefreshTime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Size { char _pad; Size(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subscribed { char _pad; Subscribed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SwfObjAVTAdapter { char _pad; SwfObjAVTAdapter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unsubscribed { char _pad; Unsubscribed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UrbanAirshipTagger { char _pad; UrbanAirshipTagger(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Visible { char _pad; Visible(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ZoneGroup { char _pad; ZoneGroup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *AVT;
typedef void *DS;
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; void __thiscall m_FUN_10c8a120(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c8a120(A...); void __thiscall m_FUN_10c8a150(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c8a150(A...); undefined4 * __thiscall m_FUN_10c8a1d0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10c8a1d0(A...); void __thiscall m_FUN_10c8a9f0(int *param_2,int param_3); template<class... A> int m_FUN_10c8a9f0(A...); void __thiscall m_FUN_10c8aa40(int *param_2,int param_3); template<class... A> int m_FUN_10c8aa40(A...); int * __thiscall m_FUN_10c8b3d0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10c8b3d0(A...); int * __thiscall m_FUN_10c8b450(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10c8b450(A...); void __thiscall m_FUN_10c8b940(undefined4 *param_2); template<class... A> int m_FUN_10c8b940(A...); void __thiscall m_FUN_10c8b960(undefined4 *param_2); template<class... A> int m_FUN_10c8b960(A...); void __thiscall m_FUN_10c8b980(undefined4 *param_2); template<class... A> int m_FUN_10c8b980(A...); void __thiscall m_FUN_10c8b990(undefined4 *param_2); template<class... A> int m_FUN_10c8b990(A...); void __thiscall m_FUN_10c8b9a0(undefined4 *param_2); template<class... A> int m_FUN_10c8b9a0(A...); void __thiscall m_FUN_10c8b9b0(undefined4 *param_2); template<class... A> int m_FUN_10c8b9b0(A...); void __thiscall m_FUN_10c8b9c0(undefined4 *param_2); template<class... A> int m_FUN_10c8b9c0(A...); void __thiscall m_FUN_10c8b9d0(undefined4 *param_2); template<class... A> int m_FUN_10c8b9d0(A...); void __thiscall m_FUN_10c8c090(undefined4 *param_2); template<class... A> int m_FUN_10c8c090(A...); void __thiscall m_FUN_10c8c0b0(undefined4 *param_2); template<class... A> int m_FUN_10c8c0b0(A...); void __thiscall m_FUN_10c8c0d0(undefined4 *param_2); template<class... A> int m_FUN_10c8c0d0(A...); void __thiscall m_FUN_10c8c0e0(undefined4 *param_2); template<class... A> int m_FUN_10c8c0e0(A...); uint __thiscall m_FUN_10c8c0f0(byte *param_2); template<class... A> int m_FUN_10c8c0f0(A...); uint __thiscall m_FUN_10c8c150(byte *param_2); template<class... A> int m_FUN_10c8c150(A...); void __thiscall m_FUN_10c8d1c0(undefined4 *param_2); template<class... A> int m_FUN_10c8d1c0(A...); void __thiscall m_FUN_10c8d1d0(undefined4 *param_2); template<class... A> int m_FUN_10c8d1d0(A...); void __thiscall m_FUN_10c8d1e0(undefined4 *param_2); template<class... A> int m_FUN_10c8d1e0(A...); void __thiscall m_FUN_10c8d1f0(undefined4 *param_2); template<class... A> int m_FUN_10c8d1f0(A...); void __thiscall m_FUN_10c8d200(undefined4 *param_2); template<class... A> int m_FUN_10c8d200(A...); int * __thiscall m_FUN_10c93600(int *param_2); template<class... A> int m_FUN_10c93600(A...); int * __thiscall m_FUN_10c93620(int *param_2); template<class... A> int m_FUN_10c93620(A...); undefined4 * __thiscall m_FUN_10c93690(undefined4 *param_2); template<class... A> int m_FUN_10c93690(A...); undefined4 * __thiscall m_FUN_10c936b0(undefined4 *param_2); template<class... A> int m_FUN_10c936b0(A...); int * __thiscall m_FUN_10c936d0(int param_2); template<class... A> int m_FUN_10c936d0(A...); undefined4 * __thiscall m_FUN_10c9da40(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10c9da40(A...); undefined4 * __thiscall m_FUN_10c9da60(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_10c9da60(A...); int * __thiscall m_FUN_10c9db10(int *param_2); template<class... A> int m_FUN_10c9db10(A...); void __thiscall m_FUN_10c9dc20(undefined4 *param_2); template<class... A> int m_FUN_10c9dc20(A...); void __thiscall m_FUN_10c9dc70(undefined4 *param_2); template<class... A> int m_FUN_10c9dc70(A...); void __thiscall m_FUN_10c9dcc0(undefined4 *param_2); template<class... A> int m_FUN_10c9dcc0(A...); undefined4 * __thiscall m_FUN_10ca05e0(undefined4 param_2); template<class... A> int m_FUN_10ca05e0(A...); undefined4 * __thiscall m_FUN_10ca0600(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ca0600(A...); undefined4 * __thiscall m_FUN_10ca0620(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ca0620(A...); undefined4 * __thiscall m_FUN_10ca0630(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ca0630(A...); undefined4 * __thiscall m_FUN_10ca0640(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10ca0640(A...); undefined4 * __thiscall m_FUN_10ca0690(undefined4 *param_2); template<class... A> int m_FUN_10ca0690(A...); undefined4 * __thiscall m_FUN_10ca0870(undefined4 param_2); template<class... A> int m_FUN_10ca0870(A...); undefined4 * __thiscall m_FUN_10ca0890(undefined4 param_2); template<class... A> int m_FUN_10ca0890(A...); undefined4 * __thiscall m_FUN_10ca08c0(undefined4 param_2); template<class... A> int m_FUN_10ca08c0(A...); undefined4 * __thiscall m_FUN_10ca08e0(undefined4 param_2); template<class... A> int m_FUN_10ca08e0(A...); undefined4 * __thiscall m_FUN_10ca0a20(undefined4 param_2); template<class... A> int m_FUN_10ca0a20(A...); undefined4 * __thiscall m_FUN_10ca0a40(undefined4 param_2); template<class... A> int m_FUN_10ca0a40(A...); undefined4 * __thiscall m_FUN_10ca0a60(undefined4 param_2); template<class... A> int m_FUN_10ca0a60(A...); undefined4 * __thiscall m_FUN_10ca0ac0(undefined4 param_2); template<class... A> int m_FUN_10ca0ac0(A...); undefined4 * __thiscall m_FUN_10ca0d10(undefined4 param_2); template<class... A> int m_FUN_10ca0d10(A...); undefined4 * __thiscall m_FUN_10ca0d30(undefined4 param_2); template<class... A> int m_FUN_10ca0d30(A...); undefined4 * __thiscall m_FUN_10ca0d50(undefined4 param_2); template<class... A> int m_FUN_10ca0d50(A...); undefined4 * __thiscall m_FUN_10ca0d70(undefined4 param_2); template<class... A> int m_FUN_10ca0d70(A...); undefined4 * __thiscall m_FUN_10ca0e20(undefined4 param_2); template<class... A> int m_FUN_10ca0e20(A...); undefined4 * __thiscall m_FUN_10ca0e40(undefined4 param_2); template<class... A> int m_FUN_10ca0e40(A...); undefined4 * __thiscall m_FUN_10ca0e60(undefined4 param_2); template<class... A> int m_FUN_10ca0e60(A...); undefined4 * __thiscall m_FUN_10ca0e80(undefined4 param_2); template<class... A> int m_FUN_10ca0e80(A...); undefined4 * __thiscall m_FUN_10ca0ea0(undefined4 param_2); template<class... A> int m_FUN_10ca0ea0(A...); undefined4 * __thiscall m_FUN_10ca0ec0(undefined4 param_2); template<class... A> int m_FUN_10ca0ec0(A...); undefined4 * __thiscall m_FUN_10ca0ee0(undefined4 param_2); template<class... A> int m_FUN_10ca0ee0(A...); undefined4 * __thiscall m_FUN_10ca0f00(undefined4 param_2); template<class... A> int m_FUN_10ca0f00(A...); undefined4 * __thiscall m_FUN_10ca1070(undefined4 param_2); template<class... A> int m_FUN_10ca1070(A...); undefined4 * __thiscall m_FUN_10ca1090(undefined4 param_2); template<class... A> int m_FUN_10ca1090(A...); undefined4 * __thiscall m_FUN_10ca14c0(undefined4 *param_2); template<class... A> int m_FUN_10ca14c0(A...); undefined4 * __thiscall m_FUN_10ca1500(undefined4 *param_2); template<class... A> int m_FUN_10ca1500(A...); undefined4 * __thiscall m_FUN_10ca2320(undefined4 *param_2); template<class... A> int m_FUN_10ca2320(A...); int __thiscall m_FUN_10ca23e0(int param_2); template<class... A> int m_FUN_10ca23e0(A...); uint __thiscall m_FUN_10ca3160(uint param_2); template<class... A> int m_FUN_10ca3160(A...); void __thiscall m_FUN_10ca3330(undefined4 *param_2); template<class... A> int m_FUN_10ca3330(A...); void __thiscall m_FUN_10ca3e80(undefined4 *param_2); template<class... A> int m_FUN_10ca3e80(A...); void __thiscall m_FUN_10ca7a70(undefined4 *param_2); template<class... A> int m_FUN_10ca7a70(A...); void __thiscall m_FUN_10cb7970(int param_2); template<class... A> int m_FUN_10cb7970(A...); int * __thiscall m_FUN_10cb79d0(int *param_2); template<class... A> int m_FUN_10cb79d0(A...); int * __thiscall m_FUN_10cb79f0(int *param_2); template<class... A> int m_FUN_10cb79f0(A...); int * __thiscall m_FUN_10cb7a10(int *param_2); template<class... A> int m_FUN_10cb7a10(A...); int * __thiscall m_FUN_10cb7a30(int *param_2); template<class... A> int m_FUN_10cb7a30(A...); int * __thiscall m_FUN_10cb7a50(int *param_2); template<class... A> int m_FUN_10cb7a50(A...); undefined4 * __thiscall m_FUN_10cb89a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10cb89a0(A...); SCStr * __thiscall m_FUN_10cb8a90(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cb8a90(A...); undefined4 * __thiscall m_FUN_10cb8ac0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10cb8ac0(A...); SCStr * __thiscall m_FUN_10cb8ae0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10cb8ae0(A...); undefined4 * __thiscall m_FUN_10cb8f00(undefined4 *param_2); template<class... A> int m_FUN_10cb8f00(A...); undefined4 * __thiscall m_FUN_10cb8f50(undefined4 param_2); template<class... A> int m_FUN_10cb8f50(A...); undefined4 * __thiscall m_FUN_10cb8f70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cb8f70(A...); undefined4 * __thiscall m_FUN_10cb8f80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cb8f80(A...); undefined4 * __thiscall m_FUN_10cb9010(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cb9010(A...); undefined4 * __thiscall m_FUN_10cb9020(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cb9020(A...); bool __thiscall m_FUN_10cb9540(int *param_2); template<class... A> int m_FUN_10cb9540(A...); bool __thiscall m_FUN_10cb9560(int *param_2); template<class... A> int m_FUN_10cb9560(A...); void __thiscall m_FUN_10cba0f0(undefined4 *param_2); template<class... A> int m_FUN_10cba0f0(A...); void __thiscall m_FUN_10cba230(undefined4 *param_2); template<class... A> int m_FUN_10cba230(A...); int * __thiscall m_FUN_10cba9d0(int *param_2); template<class... A> int m_FUN_10cba9d0(A...); void __thiscall m_FUN_10cbc860(SCStr *param_2); template<class... A> int m_FUN_10cbc860(A...); void __thiscall m_FUN_10cc0800(undefined4 *param_2); template<class... A> int m_FUN_10cc0800(A...); void __thiscall m_FUN_10cc0a30(undefined4 *param_2); template<class... A> int m_FUN_10cc0a30(A...); undefined4 * __thiscall m_FUN_10cc0d80(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10cc0d80(A...); undefined4 * __thiscall m_FUN_10cc1250(undefined4 param_2); template<class... A> int m_FUN_10cc1250(A...); int __thiscall m_FUN_10cc1900(int param_2); template<class... A> int m_FUN_10cc1900(A...); uint __thiscall m_FUN_10cc1c20(uint param_2); template<class... A> int m_FUN_10cc1c20(A...); SCStr * __thiscall m_FUN_10cc2260(SCStr *param_2); template<class... A> int m_FUN_10cc2260(A...); SCStr * __thiscall m_FUN_10cc2420(SCStr *param_2); template<class... A> int m_FUN_10cc2420(A...); SCStr * __thiscall m_FUN_10cc2810(SCStr *param_2); template<class... A> int m_FUN_10cc2810(A...); void __thiscall m_FUN_10cc34a0(undefined4 *param_2); template<class... A> int m_FUN_10cc34a0(A...); void __thiscall m_FUN_10cc39a0(SCStr *param_2); template<class... A> int m_FUN_10cc39a0(A...); void __thiscall m_FUN_10cc39d0(undefined2 param_2); template<class... A> int m_FUN_10cc39d0(A...); void __thiscall m_FUN_10cc39e0(undefined1 param_2); template<class... A> int m_FUN_10cc39e0(A...); void __thiscall m_FUN_10cc3a00(SCStr *param_2); template<class... A> int m_FUN_10cc3a00(A...); void __thiscall m_FUN_10cc3a30(SCStr *param_2); template<class... A> int m_FUN_10cc3a30(A...); void __thiscall m_FUN_10cc3a60(undefined4 param_2); template<class... A> int m_FUN_10cc3a60(A...); int * __thiscall m_FUN_10cc54f0(int *param_2); template<class... A> int m_FUN_10cc54f0(A...); void __thiscall m_FUN_10cc55f0(undefined4 *param_2); template<class... A> int m_FUN_10cc55f0(A...); void __thiscall m_FUN_10cc5610(undefined4 *param_2); template<class... A> int m_FUN_10cc5610(A...); void __thiscall m_FUN_10cc5af0(undefined4 *param_2); template<class... A> int m_FUN_10cc5af0(A...); void __thiscall m_FUN_10cc5b20(undefined4 *param_2); template<class... A> int m_FUN_10cc5b20(A...); undefined4 * __thiscall m_FUN_10cc6d60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cc6d60(A...); undefined4 * __thiscall m_FUN_10cc6d70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cc6d70(A...); undefined4 * __thiscall m_FUN_10cc6d80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cc6d80(A...); undefined4 * __thiscall m_FUN_10cc6d90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cc6d90(A...); bool __thiscall m_FUN_10ccc6f0(int *param_2); template<class... A> int m_FUN_10ccc6f0(A...); bool __thiscall m_FUN_10ccc710(int *param_2); template<class... A> int m_FUN_10ccc710(A...); bool __thiscall m_FUN_10ccc730(int *param_2); template<class... A> int m_FUN_10ccc730(A...); bool __thiscall m_FUN_10ccc750(int *param_2); template<class... A> int m_FUN_10ccc750(A...); uint __thiscall m_FUN_10ccda60(uint param_2); template<class... A> int m_FUN_10ccda60(A...); uint __thiscall m_FUN_10ccdaa0(uint param_2); template<class... A> int m_FUN_10ccdaa0(A...); void __thiscall m_FUN_10ccf000(undefined4 *param_2); template<class... A> int m_FUN_10ccf000(A...); void __thiscall m_FUN_10ccf010(undefined4 *param_2); template<class... A> int m_FUN_10ccf010(A...); void __thiscall m_FUN_10cd3250(undefined4 *param_2); template<class... A> int m_FUN_10cd3250(A...); void __thiscall m_FUN_10cd3260(undefined4 *param_2); template<class... A> int m_FUN_10cd3260(A...); void __thiscall m_FUN_10cd3270(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10cd3270(A...); void __thiscall m_FUN_10cd32b0(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10cd32b0(A...); SCStr * __thiscall m_FUN_10cd3730(SCStr *param_2); template<class... A> int m_FUN_10cd3730(A...); int * __thiscall m_FUN_10cd3750(int *param_2); template<class... A> int m_FUN_10cd3750(A...); int * __thiscall m_FUN_10cd3780(int *param_2); template<class... A> int m_FUN_10cd3780(A...); SCStr * __thiscall m_FUN_10cd37e0(SCStr *param_2); template<class... A> int m_FUN_10cd37e0(A...); SCStr * __thiscall m_FUN_10cd3800(SCStr *param_2); template<class... A> int m_FUN_10cd3800(A...); SCStr * __thiscall m_FUN_10cd38d0(SCStr *param_2); template<class... A> int m_FUN_10cd38d0(A...); SCStr * __thiscall m_FUN_10cd38f0(SCStr *param_2); template<class... A> int m_FUN_10cd38f0(A...); SCStr * __thiscall m_FUN_10cd3910(SCStr *param_2); template<class... A> int m_FUN_10cd3910(A...); SCStr * __thiscall m_FUN_10cd3930(SCStr *param_2); template<class... A> int m_FUN_10cd3930(A...); SCStr * __thiscall m_FUN_10cd3950(SCStr *param_2); template<class... A> int m_FUN_10cd3950(A...); SCStr * __thiscall m_FUN_10cd3970(SCStr *param_2); template<class... A> int m_FUN_10cd3970(A...); SCStr * __thiscall m_FUN_10cd3990(SCStr *param_2); template<class... A> int m_FUN_10cd3990(A...); SCStr * __thiscall m_FUN_10cd39b0(SCStr *param_2); template<class... A> int m_FUN_10cd39b0(A...); SCStr * __thiscall m_FUN_10cd39d0(SCStr *param_2); template<class... A> int m_FUN_10cd39d0(A...); SCStr * __thiscall m_FUN_10cd39f0(SCStr *param_2); template<class... A> int m_FUN_10cd39f0(A...); SCStr * __thiscall m_FUN_10cd3a10(SCStr *param_2); template<class... A> int m_FUN_10cd3a10(A...); SCStr * __thiscall m_FUN_10cd3a30(SCStr *param_2); template<class... A> int m_FUN_10cd3a30(A...); SCStr * __thiscall m_FUN_10cd3a50(SCStr *param_2); template<class... A> int m_FUN_10cd3a50(A...); SCStr * __thiscall m_FUN_10cd3a70(SCStr *param_2); template<class... A> int m_FUN_10cd3a70(A...); int * __thiscall m_FUN_10cd3b70(int *param_2); template<class... A> int m_FUN_10cd3b70(A...); int * __thiscall m_FUN_10cd3bb0(int *param_2); template<class... A> int m_FUN_10cd3bb0(A...); int * __thiscall m_FUN_10cd3f70(int *param_2,int param_3); template<class... A> int m_FUN_10cd3f70(A...); int * __thiscall m_FUN_10cd3fc0(int *param_2,int param_3); template<class... A> int m_FUN_10cd3fc0(A...); void __thiscall m_FUN_10cd8790(undefined4 *param_2); template<class... A> int m_FUN_10cd8790(A...); void __thiscall m_FUN_10cd87c0(undefined4 *param_2); template<class... A> int m_FUN_10cd87c0(A...); int __thiscall m_FUN_10cd9330(int param_2); template<class... A> int m_FUN_10cd9330(A...); int __thiscall m_FUN_10cdabe0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10cdabe0(A...); undefined4 * __thiscall m_FUN_10cdb330(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10cdb330(A...); undefined4 * __thiscall m_FUN_10cdb3e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10cdb3e0(A...); undefined4 * __thiscall m_FUN_10cdb480(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10cdb480(A...); void __thiscall m_FUN_10cdcc10(int param_2); template<class... A> int m_FUN_10cdcc10(A...); void __thiscall m_FUN_10cdcc30(undefined4 param_2); template<class... A> int m_FUN_10cdcc30(A...); undefined4 __thiscall m_FUN_10cdd200(int param_2); template<class... A> int m_FUN_10cdd200(A...); undefined4 __thiscall m_FUN_10cdef30(int param_2); template<class... A> int m_FUN_10cdef30(A...); undefined4 * __thiscall m_FUN_10cdf690(undefined4 param_2); template<class... A> int m_FUN_10cdf690(A...); void __thiscall m_FUN_10cdfd80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10cdfd80(A...); void __thiscall m_FUN_10ce2cd0(undefined4 *param_2); template<class... A> int m_FUN_10ce2cd0(A...); void __thiscall m_FUN_10ce2d00(undefined4 *param_2); template<class... A> int m_FUN_10ce2d00(A...); void __thiscall m_FUN_10ce2d30(undefined4 *param_2); template<class... A> int m_FUN_10ce2d30(A...); undefined4 * __thiscall m_FUN_10ce3320(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ce3320(A...); int __thiscall m_FUN_10ce36f0(int param_2); template<class... A> int m_FUN_10ce36f0(A...); uint __thiscall m_FUN_10ce38f0(uint param_2); template<class... A> int m_FUN_10ce38f0(A...); undefined4 * __thiscall m_FUN_10ce59f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ce59f0(A...); undefined4 * __thiscall m_FUN_10ce5b80(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ce5b80(A...); int * __thiscall m_FUN_10ce5c30(int *param_2); template<class... A> int m_FUN_10ce5c30(A...); void __thiscall m_FUN_10ce5cb0(undefined4 *param_2); template<class... A> int m_FUN_10ce5cb0(A...); int __thiscall m_FUN_10ce61f0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10ce61f0(A...); int __thiscall m_FUN_10ce62a0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10ce62a0(A...); undefined4 * __thiscall m_FUN_10ce67a0(undefined4 param_2); template<class... A> int m_FUN_10ce67a0(A...); undefined4 * __thiscall m_FUN_10ce68b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ce68b0(A...); undefined4 * __thiscall m_FUN_10ce68c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ce68c0(A...); undefined4 * __thiscall m_FUN_10ce68d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ce68d0(A...); undefined4 * __thiscall m_FUN_10ce6900(undefined4 *param_2); template<class... A> int m_FUN_10ce6900(A...); undefined4 * __thiscall m_FUN_10ce6910(undefined4 param_2); template<class... A> int m_FUN_10ce6910(A...); undefined4 * __thiscall m_FUN_10ce6eb0(undefined4 param_2); template<class... A> int m_FUN_10ce6eb0(A...); bool __thiscall m_FUN_10ce77a0(int *param_2); template<class... A> int m_FUN_10ce77a0(A...); bool __thiscall m_FUN_10ce77c0(int *param_2); template<class... A> int m_FUN_10ce77c0(A...); bool __thiscall m_FUN_10ce77e0(int *param_2); template<class... A> int m_FUN_10ce77e0(A...); bool __thiscall m_FUN_10ce7800(int *param_2); template<class... A> int m_FUN_10ce7800(A...); int * __thiscall m_FUN_10ce8120(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10ce8120(A...); void __thiscall m_FUN_10ce8340(int param_2); template<class... A> int m_FUN_10ce8340(A...); void __thiscall m_FUN_10ce8360(int param_2); template<class... A> int m_FUN_10ce8360(A...); void __thiscall m_FUN_10ce8380(undefined4 param_2); template<class... A> int m_FUN_10ce8380(A...); void __thiscall m_FUN_10ce8390(undefined4 param_2); template<class... A> int m_FUN_10ce8390(A...); void __thiscall m_FUN_10ce8490(undefined4 *param_2); template<class... A> int m_FUN_10ce8490(A...); void __thiscall m_FUN_10ce84b0(undefined4 *param_2); template<class... A> int m_FUN_10ce84b0(A...); void __thiscall m_FUN_10ce84c0(undefined4 *param_2); template<class... A> int m_FUN_10ce84c0(A...); void __thiscall m_FUN_10ce84d0(undefined4 *param_2); template<class... A> int m_FUN_10ce84d0(A...); void __thiscall m_FUN_10ce97c0(undefined4 *param_2); template<class... A> int m_FUN_10ce97c0(A...); void __thiscall m_FUN_10ce97d0(undefined4 *param_2); template<class... A> int m_FUN_10ce97d0(A...); SCStr * __thiscall m_FUN_10ceaa80(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10ceaa80(A...); int * __thiscall m_FUN_10ceac10(int *param_2); template<class... A> int m_FUN_10ceac10(A...); void __thiscall m_FUN_10ceddd0(undefined4 *param_2); template<class... A> int m_FUN_10ceddd0(A...); int __thiscall m_FUN_10cee0e0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10cee0e0(A...); undefined4 * __thiscall m_FUN_10cee2e0(undefined4 *param_2); template<class... A> int m_FUN_10cee2e0(A...); int * __thiscall m_FUN_10ceeb30(int *param_2); template<class... A> int m_FUN_10ceeb30(A...); int * __thiscall m_FUN_10ceebc0(int *param_2); template<class... A> int m_FUN_10ceebc0(A...); void __thiscall m_FUN_10ceee70(int param_2); template<class... A> int m_FUN_10ceee70(A...); void __thiscall m_FUN_10ceee90(undefined4 param_2); template<class... A> int m_FUN_10ceee90(A...); void __thiscall m_FUN_10cef480(undefined4 *param_2); template<class... A> int m_FUN_10cef480(A...); void __thiscall m_FUN_10cf0f00(int param_2); template<class... A> int m_FUN_10cf0f00(A...); void __thiscall m_FUN_10cf12a0(int param_2,int param_3); template<class... A> int m_FUN_10cf12a0(A...); void __thiscall m_FUN_10cf1300(int param_2); template<class... A> int m_FUN_10cf1300(A...); int * __thiscall m_FUN_10cf31b0(int *param_2); template<class... A> int m_FUN_10cf31b0(A...); int * __thiscall m_FUN_10cf3210(int *param_2); template<class... A> int m_FUN_10cf3210(A...); undefined4 * __thiscall m_FUN_10cf3a00(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10cf3a00(A...); void __thiscall m_FUN_10cf3b90(int *param_2,int *param_3); template<class... A> int m_FUN_10cf3b90(A...); undefined4 * __thiscall m_FUN_10cf4080(undefined4 *param_2); template<class... A> int m_FUN_10cf4080(A...); int * __thiscall m_FUN_10cf4360(int *param_2); template<class... A> int m_FUN_10cf4360(A...); undefined4 * __thiscall m_FUN_10cf43c0(undefined4 *param_2); template<class... A> int m_FUN_10cf43c0(A...); undefined1 * __thiscall m_FUN_10cf4410(undefined1 *param_2); template<class... A> int m_FUN_10cf4410(A...); bool __thiscall m_FUN_10cf44c0(int *param_2); template<class... A> int m_FUN_10cf44c0(A...); bool __thiscall m_FUN_10cf44e0(int *param_2); template<class... A> int m_FUN_10cf44e0(A...); undefined4 * __thiscall m_FUN_10cf4510(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10cf4510(A...); int __thiscall m_FUN_10cf4580(int param_2,int param_3); template<class... A> int m_FUN_10cf4580(A...); void __thiscall m_FUN_10cf4a30(undefined4 *param_2); template<class... A> int m_FUN_10cf4a30(A...); void __thiscall m_FUN_10cf4a60(undefined4 *param_2); template<class... A> int m_FUN_10cf4a60(A...); void __thiscall m_FUN_10cf4aa0(undefined4 *param_2); template<class... A> int m_FUN_10cf4aa0(A...); void __thiscall m_FUN_10cf4ab0(undefined4 *param_2); template<class... A> int m_FUN_10cf4ab0(A...); void __thiscall m_FUN_10cf4b10(undefined4 *param_2); template<class... A> int m_FUN_10cf4b10(A...); void __thiscall m_FUN_10cf4b20(undefined4 *param_2); template<class... A> int m_FUN_10cf4b20(A...); void __thiscall m_FUN_10cf4b90(undefined4 *param_2); template<class... A> int m_FUN_10cf4b90(A...); void __thiscall m_FUN_10cf4ba0(undefined4 *param_2); template<class... A> int m_FUN_10cf4ba0(A...); int * __thiscall m_FUN_10cf5b60(int *param_2); template<class... A> int m_FUN_10cf5b60(A...); void __thiscall m_FUN_10cf6590(undefined2 param_2); template<class... A> int m_FUN_10cf6590(A...); undefined4 * __thiscall m_FUN_10cf6730(undefined4 param_2); template<class... A> int m_FUN_10cf6730(A...); void __thiscall m_FUN_10cf9050(int *param_2); template<class... A> int m_FUN_10cf9050(A...); void __thiscall m_FUN_10cf9090(int *param_2); template<class... A> int m_FUN_10cf9090(A...); undefined4 * __thiscall m_FUN_10cfe760(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10cfe760(A...); undefined4 * __thiscall m_FUN_10d00b90(undefined4 *param_2); template<class... A> int m_FUN_10d00b90(A...); undefined4 * __thiscall m_FUN_10d00c20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d00c20(A...); undefined4 * __thiscall m_FUN_10d00c30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d00c30(A...); undefined4 * __thiscall m_FUN_10d01300(undefined4 param_2); template<class... A> int m_FUN_10d01300(A...); int * __thiscall m_FUN_10d02380(int *param_2); template<class... A> int m_FUN_10d02380(A...); void __thiscall m_FUN_10d02450(int *param_2,int param_3); template<class... A> int m_FUN_10d02450(A...); int * __thiscall m_FUN_10d02470(int param_2); template<class... A> int m_FUN_10d02470(A...); int * __thiscall m_FUN_10d02490(int param_2); template<class... A> int m_FUN_10d02490(A...); void __thiscall m_FUN_10d03180(undefined4 *param_2); template<class... A> int m_FUN_10d03180(A...); void __thiscall m_FUN_10d03bb0(undefined4 *param_2); template<class... A> int m_FUN_10d03bb0(A...); int __thiscall m_FUN_10d04580(int param_2); template<class... A> int m_FUN_10d04580(A...); void __thiscall m_FUN_10d07d90(undefined4 param_2,int param_3); template<class... A> int m_FUN_10d07d90(A...); int * __thiscall m_FUN_10d08000(int *param_2); template<class... A> int m_FUN_10d08000(A...); int * __thiscall m_FUN_10d08020(int *param_2); template<class... A> int m_FUN_10d08020(A...); int * __thiscall m_FUN_10d08060(int *param_2); template<class... A> int m_FUN_10d08060(A...); int * __thiscall m_FUN_10d11510(int *param_2); template<class... A> int m_FUN_10d11510(A...); int * __thiscall m_FUN_10d11770(int *param_2); template<class... A> int m_FUN_10d11770(A...); undefined4 * __thiscall m_FUN_10d15b30(undefined1 param_2); template<class... A> int m_FUN_10d15b30(A...); int __thiscall m_FUN_10d160c0(int param_2); template<class... A> int m_FUN_10d160c0(A...); void __thiscall m_FUN_10d186c0(char param_2); template<class... A> int m_FUN_10d186c0(A...); void __thiscall m_FUN_10d197f0(undefined4 *param_2); template<class... A> int m_FUN_10d197f0(A...); undefined4 * __thiscall m_FUN_10d1a1b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_10d1a1b0(A...); undefined4 * __thiscall m_FUN_10d1a200(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_10d1a200(A...); undefined4 * __thiscall m_FUN_10d1a250(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_10d1a250(A...); int * __thiscall m_FUN_10d1da40(int *param_2); template<class... A> int m_FUN_10d1da40(A...); undefined4 * __thiscall m_FUN_10d23900(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10d23900(A...); undefined4 * __thiscall m_FUN_10d23bb0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10d23bb0(A...); undefined4 * __thiscall m_FUN_10d23e00(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10d23e00(A...); int * __thiscall m_FUN_10d23e20(int *param_2); template<class... A> int m_FUN_10d23e20(A...); int * __thiscall m_FUN_10d23e60(int *param_2); template<class... A> int m_FUN_10d23e60(A...); undefined4 * __thiscall m_FUN_10d262d0(undefined4 param_2); template<class... A> int m_FUN_10d262d0(A...); undefined4 * __thiscall m_FUN_10d26360(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d26360(A...); undefined4 * __thiscall m_FUN_10d263f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d263f0(A...); bool __thiscall m_FUN_10d27d30(int *param_2); template<class... A> int m_FUN_10d27d30(A...); bool __thiscall m_FUN_10d27d50(int *param_2); template<class... A> int m_FUN_10d27d50(A...); void __thiscall m_FUN_10d29160(int param_2); template<class... A> int m_FUN_10d29160(A...); void __thiscall m_FUN_10d29330(int *param_2); template<class... A> int m_FUN_10d29330(A...); void __thiscall m_FUN_10d29430(undefined4 *param_2); template<class... A> int m_FUN_10d29430(A...); void __thiscall m_FUN_10d298c0(undefined4 *param_2); template<class... A> int m_FUN_10d298c0(A...); int * __thiscall m_FUN_10d2d7a0(int *param_2); template<class... A> int m_FUN_10d2d7a0(A...); int * __thiscall m_FUN_10d2d7e0(int *param_2); template<class... A> int m_FUN_10d2d7e0(A...); int * __thiscall m_FUN_10d2d800(int *param_2); template<class... A> int m_FUN_10d2d800(A...); int * __thiscall m_FUN_10d2d840(int *param_2); template<class... A> int m_FUN_10d2d840(A...); int * __thiscall m_FUN_10d2d8c0(int *param_2); template<class... A> int m_FUN_10d2d8c0(A...); int * __thiscall m_FUN_10d2d900(int *param_2); template<class... A> int m_FUN_10d2d900(A...); void __thiscall m_FUN_10d2dcc0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10d2dcc0(A...); undefined4 * __thiscall m_FUN_10d2dee0(undefined4 *param_2); template<class... A> int m_FUN_10d2dee0(A...); undefined4 * __thiscall m_FUN_10d30290(undefined4 *param_2); template<class... A> int m_FUN_10d30290(A...); void __thiscall m_FUN_10d30940(int param_2); template<class... A> int m_FUN_10d30940(A...); void __thiscall m_FUN_10d30970(uint param_2); template<class... A> int m_FUN_10d30970(A...); int * __thiscall m_FUN_10d3cd60(int *param_2); template<class... A> int m_FUN_10d3cd60(A...); int * __thiscall m_FUN_10d3cda0(int *param_2); template<class... A> int m_FUN_10d3cda0(A...); undefined4 * __thiscall m_FUN_10d3d370(undefined4 param_2); template<class... A> int m_FUN_10d3d370(A...); undefined4 * __thiscall m_FUN_10d3dbb0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_10d3dbb0(A...); void __thiscall m_FUN_10d422f0(int *param_2); template<class... A> int m_FUN_10d422f0(A...); void __thiscall m_FUN_10d42310(int *param_2); template<class... A> int m_FUN_10d42310(A...); int * __thiscall m_FUN_10d42330(int *param_2); template<class... A> int m_FUN_10d42330(A...); int * __thiscall m_FUN_10d49f00(int *param_2); template<class... A> int m_FUN_10d49f00(A...); int * __thiscall m_FUN_10d49f80(int *param_2); template<class... A> int m_FUN_10d49f80(A...); int * __thiscall m_FUN_10d4a000(int *param_2); template<class... A> int m_FUN_10d4a000(A...); undefined4 * __thiscall m_FUN_10d4a3d0(undefined4 *param_2); template<class... A> int m_FUN_10d4a3d0(A...); undefined4 * __thiscall m_FUN_10d4a480(undefined4 *param_2); template<class... A> int m_FUN_10d4a480(A...); undefined4 * __thiscall m_FUN_10d4a4b0(undefined4 *param_2); template<class... A> int m_FUN_10d4a4b0(A...); undefined4 * __thiscall m_FUN_10d4a4e0(undefined4 *param_2); template<class... A> int m_FUN_10d4a4e0(A...); int * __thiscall m_FUN_10d4c310(int *param_2); template<class... A> int m_FUN_10d4c310(A...); int * __thiscall m_FUN_10d52860(int *param_2); template<class... A> int m_FUN_10d52860(A...); void __thiscall m_FUN_10d52a00(undefined4 param_2); template<class... A> int m_FUN_10d52a00(A...); void __thiscall m_FUN_10d52b20(undefined4 param_2); template<class... A> int m_FUN_10d52b20(A...); void __thiscall m_FUN_10d53210(undefined4 param_2); template<class... A> int m_FUN_10d53210(A...); undefined4 * __thiscall m_FUN_10d53420(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10d53420(A...); undefined4 * __thiscall m_FUN_10d53440(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d53440(A...); undefined4 * __thiscall m_FUN_10d53450(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d53450(A...); bool __thiscall m_FUN_10d54000(int *param_2); template<class... A> int m_FUN_10d54000(A...); bool __thiscall m_FUN_10d54020(int *param_2); template<class... A> int m_FUN_10d54020(A...); int __thiscall m_FUN_10d54040(int param_2); template<class... A> int m_FUN_10d54040(A...); uint __thiscall m_FUN_10d54270(uint param_2); template<class... A> int m_FUN_10d54270(A...); void __thiscall m_FUN_10d549e0(undefined4 *param_2); template<class... A> int m_FUN_10d549e0(A...); void __thiscall m_FUN_10d54b70(undefined4 *param_2); template<class... A> int m_FUN_10d54b70(A...); bool __thiscall m_FUN_10d55ca0(uint param_2); template<class... A> int m_FUN_10d55ca0(A...); void __thiscall m_FUN_10d56da0(int param_2); template<class... A> int m_FUN_10d56da0(A...); void __thiscall m_FUN_10d58840(undefined4 param_2); template<class... A> int m_FUN_10d58840(A...); int * __thiscall m_FUN_10d58ca0(int *param_2); template<class... A> int m_FUN_10d58ca0(A...); void __thiscall m_FUN_10d5b3f0(undefined4 param_2); template<class... A> int m_FUN_10d5b3f0(A...); void __thiscall m_FUN_10d5b420(undefined4 param_2); template<class... A> int m_FUN_10d5b420(A...); void __thiscall m_FUN_10d5da20(undefined4 param_2); template<class... A> int m_FUN_10d5da20(A...); undefined4 * __thiscall m_FUN_10d5dae0(undefined4 *param_2); template<class... A> int m_FUN_10d5dae0(A...); undefined4 * __thiscall m_FUN_10d5db50(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10d5db50(A...); uint __thiscall m_FUN_10d5e8b0(uint param_2); template<class... A> int m_FUN_10d5e8b0(A...); void __thiscall m_FUN_10d602c0(undefined4 param_2); template<class... A> int m_FUN_10d602c0(A...); undefined4 * __thiscall m_FUN_10d68270(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d68270(A...); undefined4 * __thiscall m_FUN_10d68290(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10d68290(A...); undefined4 * __thiscall m_FUN_10d68390(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10d68390(A...); undefined4 * __thiscall m_FUN_10d683b0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10d683b0(A...); int * __thiscall m_FUN_10d683e0(int *param_2); template<class... A> int m_FUN_10d683e0(A...); int * __thiscall m_FUN_10d68400(int *param_2); template<class... A> int m_FUN_10d68400(A...); int * __thiscall m_FUN_10d689d0(int *param_2); template<class... A> int m_FUN_10d689d0(A...); int * __thiscall m_FUN_10d689f0(int *param_2); template<class... A> int m_FUN_10d689f0(A...); undefined4 * __thiscall m_FUN_10d68a20(undefined4 param_2); template<class... A> int m_FUN_10d68a20(A...); undefined4 * __thiscall m_FUN_10d68a80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d68a80(A...); undefined4 * __thiscall m_FUN_10d68a90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d68a90(A...); undefined4 * __thiscall m_FUN_10d68b20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10d68b20(A...); int * __thiscall m_FUN_10d69e50(int *param_2); template<class... A> int m_FUN_10d69e50(A...); bool __thiscall m_FUN_10d69e90(int *param_2); template<class... A> int m_FUN_10d69e90(A...); bool __thiscall m_FUN_10d69eb0(int *param_2); template<class... A> int m_FUN_10d69eb0(A...); void __thiscall m_FUN_10d6ab60(int param_2); template<class... A> int m_FUN_10d6ab60(A...); void __thiscall m_FUN_10d6abf0(int *param_2); template<class... A> int m_FUN_10d6abf0(A...); void __thiscall m_FUN_10d6bba0(undefined4 *param_2); template<class... A> int m_FUN_10d6bba0(A...); int * __thiscall m_FUN_10d741c0(int *param_2); template<class... A> int m_FUN_10d741c0(A...); undefined4 * __thiscall m_FUN_10d74620(undefined4 param_2); template<class... A> int m_FUN_10d74620(A...); };

extern int FUN_10cc1270(...);
extern int FUN_10cca400(...);
extern int FUN_10cca410(...);
extern int FUN_10cca420(...);
extern int FUN_10cca430(...);
extern int FUN_10cca440(...);
extern int FUN_10cca450(...);
extern int FUN_10cca460(...);
extern int FUN_10cca470(...);
extern int FUN_10cca480(...);
extern int FUN_10cdbb00(...);
extern int FUN_10cdbb10(...);
extern int FUN_10cdbb20(...);
extern int FUN_10cf58b0(...);
extern int _eh_vector_copy_constructor_iterator_(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int func_0x10098e46(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101bdde0(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102036c0(...);
extern int thunk_FUN_10203970(...);
extern int thunk_FUN_10207220(...);
extern int thunk_FUN_1020a5b0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102a3ea0(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_1034d200(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_104da760(...);
extern int thunk_FUN_10564950(...);
template<class... A> int __stdcall thunk_FUN_10564c90(A...);
extern int thunk_FUN_1057b1f0(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_106e09f0(...);
extern int thunk_FUN_10c21f70(...);
extern int thunk_FUN_10c85310(...);
extern int thunk_FUN_10c853f0(...);
extern int thunk_FUN_10c87ec0(...);
extern int thunk_FUN_10c87f40(...);
extern int thunk_FUN_10c9e620(...);
extern int thunk_FUN_10c9f3a0(...);
extern int thunk_FUN_10c9fb30(...);
extern int thunk_FUN_10ca2370(...);
extern int thunk_FUN_10ca3370(...);
extern int thunk_FUN_10cc0820(...);
template<class... A> int __stdcall thunk_FUN_10cc5630(A...);
extern int thunk_FUN_10cc57e0(...);
template<class... A> int __stdcall thunk_FUN_10ce00f0(A...);
extern int thunk_FUN_10ce0370(...);
extern int thunk_FUN_10ce04e0(...);
extern int thunk_FUN_10ce2c30(...);
extern int thunk_FUN_10ce3040(...);
extern int thunk_FUN_10ce3ca0(...);
extern int thunk_FUN_10ce3cb0(...);
extern int thunk_FUN_10ce5db0(...);
extern int thunk_FUN_10ce6450(...);
extern int thunk_FUN_10ce7220(...);
template<class... A> int __stdcall thunk_FUN_10cede00(A...);
extern int thunk_FUN_10cf1350(...);
extern int thunk_FUN_10cf3e20(...);
extern int thunk_FUN_10cf4680(...);
template<class... A> int __stdcall thunk_FUN_10cf4bb0(A...);
template<class... A> int __stdcall thunk_FUN_10cf6c80(A...);
extern int thunk_FUN_10cf71a0(...);
extern int thunk_FUN_10cff050(...);
extern int thunk_FUN_10cffea0(...);
extern int thunk_FUN_10d004d0(...);
extern int thunk_FUN_10d25120(...);
extern int thunk_FUN_10d25630(...);
extern int thunk_FUN_10d2d980(...);
extern int thunk_FUN_10d52b40(...);
extern int thunk_FUN_10d53a40(...);
extern int thunk_FUN_10d53f30(...);
extern int thunk_FUN_10d5b450(...);
extern int thunk_FUN_10d5bca0(...);
extern int thunk_FUN_10d5cd60(...);
extern int thunk_FUN_10d5d430(...);
extern int thunk_FUN_10d5d950(...);
extern int thunk_FUN_10d5e270(...);
extern int thunk_FUN_10f42870(...);
extern int thunk_FUN_1109aba0(...);
template<class... A> int __stdcall thunk_FUN_1109f280(A...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
extern int thunk_FUN_110b7150(...);
extern int thunk_FUN_110bc160(...);
extern int thunk_FUN_110cb840(...);
extern int thunk_FUN_110cead0(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_110ecc20(...);
extern int thunk_FUN_11138b60(...);
extern int thunk_FUN_1113f0e0(...);
template<class... A> int __stdcall thunk_FUN_1113f590(A...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a200(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_11261330(...);
extern int thunk_FUN_11261e50(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_11458ad0(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int updated(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_11884820;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp;
extern int ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp;
extern int ghidra_vftable_RUpnpDPGetZoneInfoAIOOp;
extern int ghidra_vftable_RVSAmazonSkillAuthCodeRequest;
extern int ghidra_vftable_RVSAuthenticateRequest;
extern int ghidra_vftable_RVSDeleteAccountRequest;
extern int ghidra_vftable_RVSNotifyInitiateOnboardingRequest;
extern int ghidra_vftable_RVoiceServiceAmazonSkillAuthCodeAIOOp;
extern int ghidra_vftable_SCAddPlaylistDescriptor;
extern int ghidra_vftable_SCAggregateHelperCB;
extern int ghidra_vftable_SCAlarmMusicItem;
extern int ghidra_vftable_SCAllNodeBrowseItemBase;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCAsyncBrowseDataSource;
extern int ghidra_vftable_SCBooleanSettingsItemBase;
extern int ghidra_vftable_SCDateTimeManagerEventSinkInternal;
extern int ghidra_vftable_SCDisplayRoomSettingsActionDescriptor;
extern int ghidra_vftable_SCHistoryDeleteAllActionDescriptor;
extern int ghidra_vftable_SCHistorySignInActionDescriptor;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIAggregateBrowseDataSource;
extern int ghidra_vftable_SCIAlarmMusic;
extern int ghidra_vftable_SCIAlarmMusicBrowseItem;
extern int ghidra_vftable_SCIAreaManager;
extern int ghidra_vftable_SCIBadgeIndicatorSettingsProperty;
extern int ghidra_vftable_SCIBooleanSettingsProperty;
extern int ghidra_vftable_SCICommittable;
extern int ghidra_vftable_SCIDeviceSettingsDataSource;
extern int ghidra_vftable_SCIDisplayType;
extern int ghidra_vftable_SCIIndexManager;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAlarmClockGetDailyIndexRefreshTime;
extern int ghidra_vftable_SCIOpAlarmClockSetDailyIndexRefreshTime;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpGetAboutSonosString;
extern int ghidra_vftable_SCIOpGetUsageDataShareOption;
extern int ghidra_vftable_SCIOpSystemPropertyGetRDM;
extern int ghidra_vftable_SCIOpSystemPropertyGetString;
extern int ghidra_vftable_SCIOpValidateServiceCredentials;
extern int ghidra_vftable_SCIReorderable;
extern int ghidra_vftable_SCISearchHistoryBrowseDataSource;
extern int ghidra_vftable_SCISearchHistoryBrowseItem;
extern int ghidra_vftable_SCISearchHistoryPageDataSource;
extern int ghidra_vftable_SCISearchHistoryViewBrowseItem;
extern int ghidra_vftable_SCISearchResultBrowseItem;
extern int ghidra_vftable_SCISettingsBrowseItem;
extern int ghidra_vftable_SCISettingsProperty;
extern int ghidra_vftable_SCISpinnerSettingsProperty;
extern int ghidra_vftable_SCIndexListenerCallback;
extern int ghidra_vftable_SCIndexManagerEventSinkInternal;
extern int ghidra_vftable_SCMediaServerBrowseDataSource;
extern int ghidra_vftable_SCMultiProductWizardData_Data;
extern int ghidra_vftable_SCOUNoSecureState;
extern int ghidra_vftable_SCOUSecureIntroState;
extern int ghidra_vftable_SCOnlineUpdateAudioWarningState;
extern int ghidra_vftable_SCOnlineUpdateCanceledState;
extern int ghidra_vftable_SCOnlineUpdateChoiceState;
extern int ghidra_vftable_SCOnlineUpdateCompleteState;
extern int ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState;
extern int ghidra_vftable_SCOnlineUpdateControllerSelfUpdateState;
extern int ghidra_vftable_SCOnlineUpdateDevicesUpgradedState;
extern int ghidra_vftable_SCOnlineUpdateErrorInfoState;
extern int ghidra_vftable_SCOnlineUpdateErrorState;
extern int ghidra_vftable_SCOnlineUpdateFinishSecureReg;
extern int ghidra_vftable_SCOnlineUpdateFinishSecureRegFailed;
extern int ghidra_vftable_SCOnlineUpdateFinishedState;
extern int ghidra_vftable_SCOnlineUpdateInitState;
extern int ghidra_vftable_SCOnlineUpdateIntroductionState;
extern int ghidra_vftable_SCOnlineUpdateNoInlineSelfUpdate;
extern int ghidra_vftable_SCOnlineUpdateNotRequiredState;
extern int ghidra_vftable_SCOnlineUpdatePendingState;
extern int ghidra_vftable_SCOnlineUpdatePostUpdateReindexingNeededState;
extern int ghidra_vftable_SCOnlineUpdateSecRegWarningState;
extern int ghidra_vftable_SCOnlineUpdateWizCompleteState;
extern int ghidra_vftable_SCOpAlarmClockGetDailyIndexRefreshTime;
extern int ghidra_vftable_SCOpAlarmClockSetDailyIndexRefreshTime;
extern int ghidra_vftable_SCOpGetAboutSonosString;
extern int ghidra_vftable_SCOpGetUsageDataShareOption;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpUpdateVoiceAccountData;
extern int ghidra_vftable_SCOpVoiceAcctWakeWordSet;
extern int ghidra_vftable_SCOpVoiceServiceAlexaROWLocale;
extern int ghidra_vftable_SCOpVoiceServiceAmazonChallenge;
extern int ghidra_vftable_SCOpVoiceServiceAmazonSkillAuthCode;
extern int ghidra_vftable_SCOpVoiceServiceAuthenticate;
extern int ghidra_vftable_SCOpVoiceServiceDeleteAccount;
extern int ghidra_vftable_SCOpVoiceServiceNotifyInitiateOnboarding;
extern int ghidra_vftable_SCPlayMenuPlayNowInstantTVDescriptor;
extern int ghidra_vftable_SCPlayMenuPlayNowTVDescriptor;
extern int ghidra_vftable_SCPlayNowTVDescriptor;
extern int ghidra_vftable_SCScheduleIndexUpdateSettingsItem;
extern int ghidra_vftable_SCSearchHistoryClearActionDescriptor;
extern int ghidra_vftable_SCSearchHistoryClearActionFactory;
extern int ghidra_vftable_SCSettingsItemBase;
extern int ghidra_vftable_SCShareManagerEventSink;
extern int ghidra_vftable_SCSingleProductWizardData_Data;
extern int ghidra_vftable_SCStaticBrowseItem;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCUpdateMusicIndexItem;
extern int ghidra_vftable_SCViewContributingArtistsSettingsItem;
extern int ghidra_vftable_SCVoiceBetaFeedbackBrowseItem;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_SwfObjAVTAdapter_HHEventSink;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_20;
extern int uStack_4;
extern int uStack_448;
extern int uStack_8;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_115035c0[];
extern undefined1 LAB_11503620[];
extern undefined1 LAB_11503650[];
extern undefined1 LAB_115a0890[];
extern undefined1 LAB_116f2640[];
extern undefined1 LAB_116f3e8c[];
extern undefined1 LAB_116f4840[];
extern undefined1 LAB_116f4870[];
extern undefined1 LAB_116f48a0[];
extern undefined1 LAB_116f48d0[];
extern undefined1 LAB_116f4900[];
extern undefined1 LAB_116f4960[];
extern undefined1 LAB_116f4990[];
extern undefined1 LAB_116f49c0[];
extern undefined1 LAB_116f73d0[];
extern undefined1 LAB_116f7400[];
extern undefined1 LAB_116f818d[];
extern undefined1 LAB_116f8390[];
extern undefined1 LAB_116fcb20[];
extern undefined1 LAB_1170bf40[];
extern undefined1 LAB_11710b20[];
extern undefined1 LAB_117125d0[];
extern undefined1 LAB_117c174c[];
extern undefined1 LAB_117c17f0[];
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a110(undefined4 *param_1);
template<class... A> int FUN_10c8a110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a140(undefined4 *param_1);
template<class... A> int FUN_10c8a140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a170(undefined4 *param_1);
template<class... A> int FUN_10c8a170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a180(undefined4 *param_1);
template<class... A> int FUN_10c8a180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a190(undefined4 *param_1);
template<class... A> int FUN_10c8a190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a1a0(undefined4 *param_1);
template<class... A> int FUN_10c8a1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c8a1b0(undefined4 *param_1);
template<class... A> int FUN_10c8a1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c8a1f0(int *param_1);
template<class... A> int FUN_10c8a1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10c8a200(int *param_1);
template<class... A> int FUN_10c8a200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a4d0(undefined4 *param_1);
template<class... A> int FUN_10c8a4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a4f0(undefined4 *param_1);
template<class... A> int FUN_10c8a4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a790(int param_1);
template<class... A> int FUN_10c8a790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8a7b0(int param_1);
template<class... A> int FUN_10c8a7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c8a7d0(int param_1);
template<class... A> int FUN_10c8a7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10c8a830(int param_1);
template<class... A> int FUN_10c8a830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b310(undefined4 param_1);
template<class... A> int FUN_10c8b310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b320(undefined4 param_1);
template<class... A> int FUN_10c8b320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b330(undefined4 param_1);
template<class... A> int FUN_10c8b330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b340(undefined4 param_1);
template<class... A> int FUN_10c8b340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b350(undefined4 param_1);
template<class... A> int FUN_10c8b350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b360(undefined4 param_1);
template<class... A> int FUN_10c8b360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b370(undefined4 param_1);
template<class... A> int FUN_10c8b370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b380(undefined4 param_1);
template<class... A> int FUN_10c8b380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b390(undefined4 param_1);
template<class... A> int FUN_10c8b390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b3a0(undefined4 param_1);
template<class... A> int FUN_10c8b3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b3b0(undefined4 param_1);
template<class... A> int FUN_10c8b3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b3c0(undefined4 param_1);
template<class... A> int FUN_10c8b3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8b4d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c8b4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8b4e0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10c8b4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c8b4f0(int param_1);
template<class... A> int FUN_10c8b4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b520(int param_1);
template<class... A> int FUN_10c8b520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b530(int param_1);
template<class... A> int FUN_10c8b530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b540(int param_1);
template<class... A> int FUN_10c8b540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c8b550(int param_1);
template<class... A> int FUN_10c8b550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b640(void);
template<class... A> int FUN_10c8b640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8b650(void);
template<class... A> int FUN_10c8b650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8b660(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c8b660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8b670(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10c8b670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b7e0(int param_1);
template<class... A> int FUN_10c8b7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8b7f0(int param_1);
template<class... A> int FUN_10c8b7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8b800(undefined4 *param_1);
template<class... A> int FUN_10c8b800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8b810(undefined4 *param_1);
template<class... A> int FUN_10c8b810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8be00(int param_1,int param_2,int param_3);
template<class... A> int FUN_10c8be00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8be40(int param_1,int param_2,int param_3);
template<class... A> int FUN_10c8be40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8beb0(uint param_1);
template<class... A> int FUN_10c8beb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8bf30(uint param_1);
template<class... A> int FUN_10c8bf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8bfb0(uint param_1);
template<class... A> int FUN_10c8bfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10c8c020(uint param_1);
template<class... A> int FUN_10c8c020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8c1b0(int param_1);
template<class... A> int FUN_10c8c1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8c1c0(int param_1);
template<class... A> int FUN_10c8c1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8c8f0(int param_1);
template<class... A> int FUN_10c8c8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c8c950(int param_1);
template<class... A> int FUN_10c8c950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8cf90(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10c8cf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c8cfe0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10c8cfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8d030(int param_1,int param_2);
template<class... A> int FUN_10c8d030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8d080(int param_1,int param_2);
template<class... A> int FUN_10c8d080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8d0d0(int param_1,int param_2);
template<class... A> int FUN_10c8d0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10c8d120(int param_1,int param_2);
template<class... A> int FUN_10c8d120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c8e010(int param_1);
template<class... A> int FUN_10c8e010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91330(int param_1);
template<class... A> int FUN_10c91330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91360(int param_1);
template<class... A> int FUN_10c91360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c91b90(int param_1);
template<class... A> int FUN_10c91b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10c91ba0(int param_1);
template<class... A> int FUN_10c91ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bb0(void);
template<class... A> int FUN_10c91bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bc0(void);
template<class... A> int FUN_10c91bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bd0(void);
template<class... A> int FUN_10c91bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91be0(void);
template<class... A> int FUN_10c91be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91bf0(void);
template<class... A> int FUN_10c91bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91c00(void);
template<class... A> int FUN_10c91c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91c10(void);
template<class... A> int FUN_10c91c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c91c20(void);
template<class... A> int FUN_10c91c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c92d50(undefined4 param_1);
template<class... A> int FUN_10c92d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c92d60(undefined4 param_1);
template<class... A> int FUN_10c92d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c92e10(undefined4 *param_1);
template<class... A> int FUN_10c92e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c931f0(int *param_1);
template<class... A> int FUN_10c931f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10c93200(int *param_1);
template<class... A> int FUN_10c93200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10c980f0(int param_1);
template<class... A> int FUN_10c980f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9a700(int param_1);
template<class... A> int FUN_10c9a700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10c9af10(int param_1);
template<class... A> int FUN_10c9af10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10c9da20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10c9da20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9db80(void);
template<class... A> int FUN_10c9db80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9e050(undefined4 *param_1);
template<class... A> int FUN_10c9e050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9e060(undefined4 *param_1);
template<class... A> int FUN_10c9e060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9e070(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_10c9e070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * FUN_10c9e840(int param_1,int param_2,undefined4 *param_3);
template<class... A> int FUN_10c9e840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c9e8d0(int param_1);
template<class... A> int FUN_10c9e8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9f380(undefined4 param_1);
template<class... A> int FUN_10c9f380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9f390(void);
template<class... A> int FUN_10c9f390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10c9f6a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_10c9f6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10c9f810(int param_1);
template<class... A> int FUN_10c9f810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9fe40(undefined4 param_1);
template<class... A> int FUN_10c9fe40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9ffd0(undefined4 param_1);
template<class... A> int FUN_10c9ffd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10c9ffe0(undefined4 param_1);
template<class... A> int FUN_10c9ffe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca00a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ca00a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca00e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ca00e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca01f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ca01f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0210(undefined4 param_1);
template<class... A> int FUN_10ca0210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0220(undefined4 param_1);
template<class... A> int FUN_10ca0220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0230(undefined4 param_1);
template<class... A> int FUN_10ca0230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0240(undefined4 param_1);
template<class... A> int FUN_10ca0240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0250(undefined4 param_1);
template<class... A> int FUN_10ca0250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0330(undefined4 param_1);
template<class... A> int FUN_10ca0330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ca0340(undefined4 param_1);
template<class... A> int FUN_10ca0340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ca0350(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10ca0350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ca0460(undefined4 *param_1);
template<class... A> int FUN_10ca0460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ca0660(undefined4 *param_1);
template<class... A> int FUN_10ca0660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca0680(undefined4 param_1);
template<class... A> int FUN_10ca0680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ca06d0(undefined4 *param_1);
template<class... A> int FUN_10ca06d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca19e0(undefined4 *param_1);
template<class... A> int FUN_10ca19e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca19f0(undefined4 *param_1);
template<class... A> int FUN_10ca19f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1a00(undefined4 *param_1);
template<class... A> int FUN_10ca1a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1a10(undefined4 *param_1);
template<class... A> int FUN_10ca1a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1ac0(undefined4 *param_1);
template<class... A> int FUN_10ca1ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1ad0(undefined4 *param_1);
template<class... A> int FUN_10ca1ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1bb0(undefined4 *param_1);
template<class... A> int FUN_10ca1bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1de0(undefined4 *param_1);
template<class... A> int FUN_10ca1de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1df0(undefined4 *param_1);
template<class... A> int FUN_10ca1df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca1e00(undefined4 *param_1);
template<class... A> int FUN_10ca1e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2020(undefined4 *param_1);
template<class... A> int FUN_10ca2020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2030(undefined4 *param_1);
template<class... A> int FUN_10ca2030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2040(undefined4 *param_1);
template<class... A> int FUN_10ca2040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2050(undefined4 *param_1);
template<class... A> int FUN_10ca2050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2060(undefined4 *param_1);
template<class... A> int FUN_10ca2060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2070(undefined4 *param_1);
template<class... A> int FUN_10ca2070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2080(undefined4 *param_1);
template<class... A> int FUN_10ca2080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2090(undefined4 *param_1);
template<class... A> int FUN_10ca2090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca2190(undefined4 *param_1);
template<class... A> int FUN_10ca2190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca21a0(undefined4 *param_1);
template<class... A> int FUN_10ca21a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca2400(int param_1);
template<class... A> int FUN_10ca2400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca2410(undefined4 *param_1);
template<class... A> int FUN_10ca2410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca3280(undefined4 param_1);
template<class... A> int FUN_10ca3280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca3290(undefined4 param_1);
template<class... A> int FUN_10ca3290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca32a0(undefined4 param_1);
template<class... A> int FUN_10ca32a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca32b0(undefined4 param_1);
template<class... A> int FUN_10ca32b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ca3310(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ca3310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ca3320(undefined4 *param_1);
template<class... A> int FUN_10ca3320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca3620(undefined4 *param_1);
template<class... A> int FUN_10ca3620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ca3c10(uint param_1);
template<class... A> int FUN_10ca3c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ca43a0(int *param_1);
template<class... A> int FUN_10ca43a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca7760(undefined4 *param_1);
template<class... A> int FUN_10ca7760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ca7780(undefined4 *param_1);
template<class... A> int FUN_10ca7780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10ca8650(SCStr *param_1,undefined4 param_2);
template<class... A> int FUN_10ca8650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10ca9a90(int param_1);
template<class... A> int FUN_10ca9a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb0f80(int param_1);
template<class... A> int FUN_10cb0f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cb1a80(int param_1);
template<class... A> int FUN_10cb1a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cb1aa0(int *param_1);
template<class... A> int FUN_10cb1aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cb1c60(int param_1);
template<class... A> int FUN_10cb1c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb22a0(void);
template<class... A> int FUN_10cb22a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb22b0(void);
template<class... A> int FUN_10cb22b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb22d0(int param_1);
template<class... A> int FUN_10cb22d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb3940(undefined4 *param_1);
template<class... A> int FUN_10cb3940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb4fd0(int param_1);
template<class... A> int FUN_10cb4fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10cb6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10cb6c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb7400(int param_1);
template<class... A> int FUN_10cb7400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb7670(int *param_1);
template<class... A> int FUN_10cb7670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb76c0(int param_1);
template<class... A> int FUN_10cb76c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb7940(int param_1);
template<class... A> int FUN_10cb7940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb7950(int param_1);
template<class... A> int FUN_10cb7950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cb7960(int param_1);
template<class... A> int FUN_10cb7960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb79a0(int param_1);
template<class... A> int FUN_10cb79a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb79b0(int param_1);
template<class... A> int FUN_10cb79b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb7b70(undefined4 *param_1);
template<class... A> int FUN_10cb7b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7dc0(undefined4 *param_1);
template<class... A> int FUN_10cb7dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7dd0(undefined4 *param_1);
template<class... A> int FUN_10cb7dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7de0(undefined4 *param_1);
template<class... A> int FUN_10cb7de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb7df0(undefined4 *param_1);
template<class... A> int FUN_10cb7df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88a0(undefined4 *param_1);
template<class... A> int FUN_10cb88a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88b0(undefined4 *param_1);
template<class... A> int FUN_10cb88b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88c0(undefined4 *param_1);
template<class... A> int FUN_10cb88c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb88d0(undefined4 *param_1);
template<class... A> int FUN_10cb88d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb88e0(undefined4 *param_1);
template<class... A> int FUN_10cb88e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb8910(undefined4 *param_1);
template<class... A> int FUN_10cb8910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb8940(undefined4 *param_1);
template<class... A> int FUN_10cb8940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb8970(undefined4 *param_1);
template<class... A> int FUN_10cb8970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cb8b20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10cb8b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8bf0(undefined4 param_1);
template<class... A> int FUN_10cb8bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8c00(int param_1,SCStr *param_2);
template<class... A> int FUN_10cb8c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8d70(undefined4 param_1);
template<class... A> int FUN_10cb8d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cb8d80(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10cb8d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8e80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10cb8e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8ea0(undefined4 param_1);
template<class... A> int FUN_10cb8ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cb8eb0(undefined4 param_1);
template<class... A> int FUN_10cb8eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cb8ec0(void);
template<class... A> int FUN_10cb8ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb8ed0(undefined4 *param_1);
template<class... A> int FUN_10cb8ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb8f30(undefined4 *param_1);
template<class... A> int FUN_10cb8f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cb9310(undefined4 *param_1);
template<class... A> int FUN_10cb9310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb94c0(undefined4 *param_1);
template<class... A> int FUN_10cb94c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb9690(int *param_1);
template<class... A> int FUN_10cb9690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb96a0(int *param_1);
template<class... A> int FUN_10cb96a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cb96b0(int *param_1);
template<class... A> int FUN_10cb96b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cb9860(int param_1);
template<class... A> int FUN_10cb9860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cb0(undefined4 param_1);
template<class... A> int FUN_10cb9cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cc0(undefined4 param_1);
template<class... A> int FUN_10cb9cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cd0(undefined4 param_1);
template<class... A> int FUN_10cb9cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9ce0(undefined4 param_1);
template<class... A> int FUN_10cb9ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cb9cf0(undefined4 param_1);
template<class... A> int FUN_10cb9cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cba000(int param_1);
template<class... A> int FUN_10cba000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cba060(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10cba060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cba070(int param_1);
template<class... A> int FUN_10cba070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cba1d0(int param_1,int param_2);
template<class... A> int FUN_10cba1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cba2b0(int param_1);
template<class... A> int FUN_10cba2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cbb120(int param_1);
template<class... A> int FUN_10cbb120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc1a0(int *param_1);
template<class... A> int FUN_10cbc1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cbc200(void);
template<class... A> int FUN_10cbc200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc580(void);
template<class... A> int FUN_10cbc580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc590(void);
template<class... A> int FUN_10cbc590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cbc5a0(undefined4 param_1);
template<class... A> int FUN_10cbc5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cbcad0(undefined4 param_1);
template<class... A> int FUN_10cbcad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cbe3f0(undefined4 *param_1);
template<class... A> int FUN_10cbe3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cbe7c0(undefined4 *param_1);
template<class... A> int FUN_10cbe7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc07a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cc07a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc07c0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc07c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc07f0(void);
template<class... A> int FUN_10cc07f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc09d0(undefined4 *param_1);
template<class... A> int FUN_10cc09d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc09e0(undefined4 param_1);
template<class... A> int FUN_10cc09e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc09f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc09f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc0a20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10cc0a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc0a60(undefined4 param_1);
template<class... A> int FUN_10cc0a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cc0a70(void);
template<class... A> int FUN_10cc0a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0a80(undefined4 *param_1);
template<class... A> int FUN_10cc0a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0b40(undefined4 *param_1);
template<class... A> int FUN_10cc0b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0d10(undefined4 *param_1);
template<class... A> int FUN_10cc0d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0d30(undefined4 *param_1);
template<class... A> int FUN_10cc0d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc0d50(undefined4 param_1);
template<class... A> int FUN_10cc0d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0d60(undefined4 *param_1);
template<class... A> int FUN_10cc0d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc0fe0(undefined4 *param_1);
template<class... A> int FUN_10cc0fe0(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10cc1270(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc1540(undefined4 *param_1);
template<class... A> int FUN_10cc1540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc17a0(undefined4 *param_1);
template<class... A> int FUN_10cc17a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc17b0(undefined4 *param_1);
template<class... A> int FUN_10cc17b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1910(int param_1);
template<class... A> int FUN_10cc1910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cc1920(int *param_1);
template<class... A> int FUN_10cc1920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1930(int param_1);
template<class... A> int FUN_10cc1930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1940(undefined4 *param_1);
template<class... A> int FUN_10cc1940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1950(undefined4 *param_1);
template<class... A> int FUN_10cc1950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc1cd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cc1cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1ce0(undefined4 param_1);
template<class... A> int FUN_10cc1ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1cf0(undefined4 param_1);
template<class... A> int FUN_10cc1cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1d00(undefined4 param_1);
template<class... A> int FUN_10cc1d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc1d10(undefined4 param_1);
template<class... A> int FUN_10cc1d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc1d20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cc1d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10cc1da0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc1da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc1dd0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10cc1dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc1e00(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc1e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc1f90(uint param_1);
template<class... A> int FUN_10cc1f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2010(int *param_1);
template<class... A> int FUN_10cc2010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc2020(undefined4 *param_1);
template<class... A> int FUN_10cc2020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cc2030(int param_1,int param_2);
template<class... A> int FUN_10cc2030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2090(int param_1);
template<class... A> int FUN_10cc2090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc20a0(int param_1);
template<class... A> int FUN_10cc20a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc2250(int param_1);
template<class... A> int FUN_10cc2250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2460(int param_1);
template<class... A> int FUN_10cc2460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2470(int param_1);
template<class... A> int FUN_10cc2470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2480(int param_1);
template<class... A> int FUN_10cc2480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc2490(int param_1);
template<class... A> int FUN_10cc2490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc24a0(int param_1);
template<class... A> int FUN_10cc24a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc24b0(int param_1);
template<class... A> int FUN_10cc24b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10cc2880(int param_1);
template<class... A> int FUN_10cc2880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2890(int param_1);
template<class... A> int FUN_10cc2890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cc28a0(int param_1);
template<class... A> int FUN_10cc28a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc28b0(int param_1);
template<class... A> int FUN_10cc28b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2a60(int param_1);
template<class... A> int FUN_10cc2a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc2a90(int param_1);
template<class... A> int FUN_10cc2a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc2aa0(int param_1);
template<class... A> int FUN_10cc2aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cc3290(void);
template<class... A> int FUN_10cc3290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc3350(void);
template<class... A> int FUN_10cc3350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc3360(void);
template<class... A> int FUN_10cc3360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc35f0(undefined4 *param_1);
template<class... A> int FUN_10cc35f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc3620(undefined4 *param_1);
template<class... A> int FUN_10cc3620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cc3a70(int *param_1);
template<class... A> int FUN_10cc3a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc54b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cc54b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc54d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cc54d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc5570(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc5570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc55a0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc55a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc55d0(void);
template<class... A> int FUN_10cc55d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc55e0(void);
template<class... A> int FUN_10cc55e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5990(undefined4 *param_1);
template<class... A> int FUN_10cc5990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc59a0(undefined4 *param_1);
template<class... A> int FUN_10cc59a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc59b0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc59b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cc59e0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc59e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5a10(undefined4 param_1);
template<class... A> int FUN_10cc5a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5a20(undefined4 param_1);
template<class... A> int FUN_10cc5a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc5a30(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc5a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10cc5a60(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10cc5a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5a90(undefined4 param_1);
template<class... A> int FUN_10cc5a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5aa0(undefined4 param_1);
template<class... A> int FUN_10cc5aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10cc5ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10cc5ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ad0(void);
template<class... A> int FUN_10cc5ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cc5ae0(void);
template<class... A> int FUN_10cc5ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b50(undefined4 param_1);
template<class... A> int FUN_10cc5b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b60(undefined4 param_1);
template<class... A> int FUN_10cc5b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b70(undefined4 param_1);
template<class... A> int FUN_10cc5b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cc5b80(undefined4 param_1);
template<class... A> int FUN_10cc5b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc5b90(undefined4 *param_1);
template<class... A> int FUN_10cc5b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc5bc0(undefined4 *param_1);
template<class... A> int FUN_10cc5bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6da0(undefined4 *param_1);
template<class... A> int FUN_10cc6da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6dc0(undefined4 *param_1);
template<class... A> int FUN_10cc6dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc6de0(undefined4 param_1);
template<class... A> int FUN_10cc6de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cc6df0(undefined4 param_1);
template<class... A> int FUN_10cc6df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6e00(undefined4 *param_1);
template<class... A> int FUN_10cc6e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc6e20(undefined4 *param_1);
template<class... A> int FUN_10cc6e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc7220(undefined4 *param_1);
template<class... A> int FUN_10cc7220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc7320(undefined4 *param_1);
template<class... A> int FUN_10cc7320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cc75e0(undefined4 *param_1);
template<class... A> int FUN_10cc75e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cc7d80(undefined4 *param_1);
template<class... A> int FUN_10cc7d80(A...);
/* WARNING: Removing unreachable block_10cca400 (ram,0x101ba14a) */ void __fastcall FUN_10cca400(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca410 (ram,0x101ba14a) */ void __fastcall FUN_10cca410(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca420 (ram,0x101ba14a) */ void __fastcall FUN_10cca420(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca430 (ram,0x101ba14a) */ void __fastcall FUN_10cca430(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca440 (ram,0x101ba14a) */ void __fastcall FUN_10cca440(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca450 (ram,0x101ba14a) */ void __fastcall FUN_10cca450(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca460 (ram,0x101ba14a) */ void __fastcall FUN_10cca460(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca470 (ram,0x101ba14a) */ void __fastcall FUN_10cca470(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cca480 (ram,0x101ba14a) */ void __fastcall FUN_10cca480(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc3f0(undefined4 *param_1);
template<class... A> int FUN_10ccc3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc490(undefined4 *param_1);
template<class... A> int FUN_10ccc490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc4b0(undefined4 *param_1);
template<class... A> int FUN_10ccc4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc4d0(undefined4 *param_1);
template<class... A> int FUN_10ccc4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc4f0(undefined4 *param_1);
template<class... A> int FUN_10ccc4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc510(undefined4 *param_1);
template<class... A> int FUN_10ccc510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc630(undefined4 *param_1);
template<class... A> int FUN_10ccc630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccc6d0(undefined4 *param_1);
template<class... A> int FUN_10ccc6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc770(int param_1);
template<class... A> int FUN_10ccc770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc780(int param_1);
template<class... A> int FUN_10ccc780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc790(int param_1);
template<class... A> int FUN_10ccc790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7a0(int param_1);
template<class... A> int FUN_10ccc7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7b0(int param_1);
template<class... A> int FUN_10ccc7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7c0(int param_1);
template<class... A> int FUN_10ccc7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7d0(int param_1);
template<class... A> int FUN_10ccc7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7e0(int param_1);
template<class... A> int FUN_10ccc7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc7f0(int param_1);
template<class... A> int FUN_10ccc7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc800(undefined4 *param_1);
template<class... A> int FUN_10ccc800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc810(undefined4 *param_1);
template<class... A> int FUN_10ccc810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc820(undefined4 *param_1);
template<class... A> int FUN_10ccc820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccc830(undefined4 *param_1);
template<class... A> int FUN_10ccc830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc840(int *param_1);
template<class... A> int FUN_10ccc840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc850(int *param_1);
template<class... A> int FUN_10ccc850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc860(int *param_1);
template<class... A> int FUN_10ccc860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ccc870(int *param_1);
template<class... A> int FUN_10ccc870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdbc0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10ccdbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdbd0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10ccdbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdbe0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ccdbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdbf0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ccdbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc00(undefined4 param_1);
template<class... A> int FUN_10ccdc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc10(undefined4 param_1);
template<class... A> int FUN_10ccdc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc20(undefined4 param_1);
template<class... A> int FUN_10ccdc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc30(undefined4 param_1);
template<class... A> int FUN_10ccdc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc40(undefined4 param_1);
template<class... A> int FUN_10ccdc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc50(undefined4 param_1);
template<class... A> int FUN_10ccdc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc60(undefined4 param_1);
template<class... A> int FUN_10ccdc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ccdc70(undefined4 param_1);
template<class... A> int FUN_10ccdc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdc80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ccdc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdc90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ccdc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ccdd80(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ccdd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ccddb0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ccddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccdde0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10ccdde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccde10(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10ccde10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccde40(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ccde40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ccde70(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ccde70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ccef20(uint param_1);
template<class... A> int FUN_10ccef20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ccef90(uint param_1);
template<class... A> int FUN_10ccef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ccf400(int *param_1);
template<class... A> int FUN_10ccf400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ccf410(int *param_1);
template<class... A> int FUN_10ccf410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccf420(undefined4 *param_1);
template<class... A> int FUN_10ccf420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ccf430(undefined4 *param_1);
template<class... A> int FUN_10ccf430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cd3190(int param_1,int param_2);
template<class... A> int FUN_10cd3190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cd31e0(int param_1,int param_2);
template<class... A> int FUN_10cd31e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3230(int *param_1);
template<class... A> int FUN_10cd3230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3240(int *param_1);
template<class... A> int FUN_10cd3240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3710(int param_1);
template<class... A> int FUN_10cd3710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3840(int param_1);
template<class... A> int FUN_10cd3840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3ab0(int param_1);
template<class... A> int FUN_10cd3ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3ac0(int param_1);
template<class... A> int FUN_10cd3ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3ba0(int param_1);
template<class... A> int FUN_10cd3ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3be0(int param_1);
template<class... A> int FUN_10cd3be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3bf0(int param_1);
template<class... A> int FUN_10cd3bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c00(int param_1);
template<class... A> int FUN_10cd3c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c10(int param_1);
template<class... A> int FUN_10cd3c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c20(int param_1);
template<class... A> int FUN_10cd3c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3c30(int param_1);
template<class... A> int FUN_10cd3c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10cd3c80(int param_1);
template<class... A> int FUN_10cd3c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cd3cb0(int param_1);
template<class... A> int FUN_10cd3cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3eb0(int param_1);
template<class... A> int FUN_10cd3eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3ed0(int param_1);
template<class... A> int FUN_10cd3ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3ef0(int param_1);
template<class... A> int FUN_10cd3ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3f10(int param_1);
template<class... A> int FUN_10cd3f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3f30(int param_1);
template<class... A> int FUN_10cd3f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10cd3f50(int param_1);
template<class... A> int FUN_10cd3f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd4330(SCStr *param_1);
template<class... A> int FUN_10cd4330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd4380(int param_1);
template<class... A> int FUN_10cd4380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b30(void);
template<class... A> int FUN_10cd7b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b40(void);
template<class... A> int FUN_10cd7b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b50(void);
template<class... A> int FUN_10cd7b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cd7b60(void);
template<class... A> int FUN_10cd7b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __fastcall FUN_10cd9680(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cd9680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd96b0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cd96b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cd9840(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cd9840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cd9920(int *param_1);
template<class... A> int FUN_10cd9920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cdac90(undefined4 param_1);
template<class... A> int FUN_10cdac90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cdaca0(void);
template<class... A> int FUN_10cdaca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cdacb0(void);
template<class... A> int FUN_10cdacb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cdacc0(void);
template<class... A> int FUN_10cdacc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdadf0(undefined4 *param_1);
template<class... A> int FUN_10cdadf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdae20(undefined4 *param_1);
template<class... A> int FUN_10cdae20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdae50(undefined4 *param_1);
template<class... A> int FUN_10cdae50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdae80(undefined4 *param_1);
template<class... A> int FUN_10cdae80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb170(undefined4 *param_1);
template<class... A> int FUN_10cdb170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cdb290(int param_1);
template<class... A> int FUN_10cdb290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cdb2a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cdb2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb610(undefined4 *param_1);
template<class... A> int FUN_10cdb610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb620(undefined4 *param_1);
template<class... A> int FUN_10cdb620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb630(undefined4 *param_1);
template<class... A> int FUN_10cdb630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdb640(undefined4 *param_1);
template<class... A> int FUN_10cdb640(A...);
/* WARNING: Removing unreachable block_10cdbb00 (ram,0x101ba14a) */ void __fastcall FUN_10cdbb00(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cdbb10 (ram,0x101ba14a) */ void __fastcall FUN_10cdbb10(undefined4 *param_1);
/* WARNING: Removing unreachable block_10cdbb20 (ram,0x101ba14a) */ void __fastcall FUN_10cdbb20(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc0d0(undefined4 *param_1);
template<class... A> int FUN_10cdc0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc100(undefined4 *param_1);
template<class... A> int FUN_10cdc100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc130(undefined4 *param_1);
template<class... A> int FUN_10cdc130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc220(undefined4 *param_1);
template<class... A> int FUN_10cdc220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc230(undefined4 *param_1);
template<class... A> int FUN_10cdc230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc240(undefined4 *param_1);
template<class... A> int FUN_10cdc240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc3a0(undefined4 *param_1);
template<class... A> int FUN_10cdc3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdc3c0(undefined4 *param_1);
template<class... A> int FUN_10cdc3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdc410(int param_1);
template<class... A> int FUN_10cdc410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdc420(int param_1);
template<class... A> int FUN_10cdc420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdc430(int param_1);
template<class... A> int FUN_10cdc430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdcbe0(int param_1);
template<class... A> int FUN_10cdcbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdcbf0(int param_1);
template<class... A> int FUN_10cdcbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdcc00(int param_1);
template<class... A> int FUN_10cdcc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdda80(undefined4 *param_1);
template<class... A> int FUN_10cdda80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cddaa0(int param_1);
template<class... A> int FUN_10cddaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cddbd0(int param_1);
template<class... A> int FUN_10cddbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cddd50(void);
template<class... A> int FUN_10cddd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cddd60(void);
template<class... A> int FUN_10cddd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cddd70(void);
template<class... A> int FUN_10cddd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdeea0(undefined4 *param_1);
template<class... A> int FUN_10cdeea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdeed0(undefined4 *param_1);
template<class... A> int FUN_10cdeed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdef00(undefined4 *param_1);
template<class... A> int FUN_10cdef00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10cdf020(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10cdf020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cdf670(undefined4 *param_1);
template<class... A> int FUN_10cdf670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cdfa00(undefined4 *param_1);
template<class... A> int FUN_10cdfa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cdfcb0(undefined4 *param_1);
template<class... A> int FUN_10cdfcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cdfd70(int param_1);
template<class... A> int FUN_10cdfd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce0050(int param_1);
template<class... A> int FUN_10ce0050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce0080(int param_1);
template<class... A> int FUN_10ce0080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce00b0(int param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10ce00b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce0330(int param_1);
template<class... A> int FUN_10ce0330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce0a00(int param_1);
template<class... A> int FUN_10ce0a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce0a10(undefined4 *param_1);
template<class... A> int FUN_10ce0a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce0aa0(undefined4 *param_1);
template<class... A> int FUN_10ce0aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce0b20(void);
template<class... A> int FUN_10ce0b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce0b30(void);
template<class... A> int FUN_10ce0b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0bd0(undefined4 *param_1);
template<class... A> int FUN_10ce0bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0c00(undefined4 *param_1);
template<class... A> int FUN_10ce0c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0e10(undefined4 *param_1);
template<class... A> int FUN_10ce0e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce0e20(undefined4 *param_1);
template<class... A> int FUN_10ce0e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce1320(undefined4 *param_1);
template<class... A> int FUN_10ce1320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce1330(undefined4 *param_1);
template<class... A> int FUN_10ce1330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce1440(undefined4 *param_1);
template<class... A> int FUN_10ce1440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce1a70(void);
template<class... A> int FUN_10ce1a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce1a80(void);
template<class... A> int FUN_10ce1a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce2120(undefined4 *param_1);
template<class... A> int FUN_10ce2120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce2150(undefined4 *param_1);
template<class... A> int FUN_10ce2150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce2210(void);
template<class... A> int FUN_10ce2210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce22b0(undefined4 *param_1);
template<class... A> int FUN_10ce22b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce2320(undefined4 *param_1);
template<class... A> int FUN_10ce2320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce24e0(undefined4 *param_1);
template<class... A> int FUN_10ce24e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce25f0(int param_1);
template<class... A> int FUN_10ce25f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ce2920(int param_1);
template<class... A> int FUN_10ce2920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce2970(void);
template<class... A> int FUN_10ce2970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce2bc0(undefined4 *param_1);
template<class... A> int FUN_10ce2bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce2c10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce2c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3020(undefined4 *param_1);
template<class... A> int FUN_10ce3020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3030(undefined4 param_1);
template<class... A> int FUN_10ce3030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce3180(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ce3180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce31b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ce31b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce31e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ce31e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce32d0(undefined4 param_1);
template<class... A> int FUN_10ce32d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce32e0(undefined4 param_1);
template<class... A> int FUN_10ce32e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce32f0(undefined4 param_1);
template<class... A> int FUN_10ce32f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3300(void);
template<class... A> int FUN_10ce3300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce3310(undefined4 param_1);
template<class... A> int FUN_10ce3310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce3340(undefined4 *param_1);
template<class... A> int FUN_10ce3340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce3360(undefined4 param_1);
template<class... A> int FUN_10ce3360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce3370(undefined4 *param_1);
template<class... A> int FUN_10ce3370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce3390(undefined4 *param_1);
template<class... A> int FUN_10ce3390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce3590(undefined4 *param_1);
template<class... A> int FUN_10ce3590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce39e0(undefined4 param_1);
template<class... A> int FUN_10ce39e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce39f0(undefined4 param_1);
template<class... A> int FUN_10ce39f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce3a00(undefined4 param_1);
template<class... A> int FUN_10ce3a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce3a10(undefined4 param_1);
template<class... A> int FUN_10ce3a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce3a20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce3a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce3a30(undefined4 *param_1);
template<class... A> int FUN_10ce3a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce3d20(int *param_1);
template<class... A> int FUN_10ce3d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce4520(void);
template<class... A> int FUN_10ce4520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce4530(void);
template<class... A> int FUN_10ce4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce59e0(int *param_1);
template<class... A> int FUN_10ce59e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce5ab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10ce5ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce5ad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10ce5ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce5af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce5af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce5ba0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce5ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce5bb0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce5bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c50(void);
template<class... A> int FUN_10ce5c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ce5c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ce5c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ce5c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5c90(void);
template<class... A> int FUN_10ce5c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5ca0(void);
template<class... A> int FUN_10ce5ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce5e70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10ce5e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce5f10(undefined4 *param_1);
template<class... A> int FUN_10ce5f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce5f20(undefined4 param_1);
template<class... A> int FUN_10ce5f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6190(undefined4 param_1);
template<class... A> int FUN_10ce6190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61a0(undefined4 param_1);
template<class... A> int FUN_10ce61a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61b0(undefined4 param_1);
template<class... A> int FUN_10ce61b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61c0(undefined4 param_1);
template<class... A> int FUN_10ce61c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61d0(undefined4 param_1);
template<class... A> int FUN_10ce61d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce61e0(undefined4 param_1);
template<class... A> int FUN_10ce61e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6430(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ce6430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6520(undefined4 param_1);
template<class... A> int FUN_10ce6520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6530(undefined4 param_1);
template<class... A> int FUN_10ce6530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6540(undefined4 param_1);
template<class... A> int FUN_10ce6540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6550(undefined4 param_1);
template<class... A> int FUN_10ce6550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6560(undefined4 param_1);
template<class... A> int FUN_10ce6560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6570(undefined4 param_1);
template<class... A> int FUN_10ce6570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ce6580(undefined4 param_1);
template<class... A> int FUN_10ce6580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ce6590(void);
template<class... A> int FUN_10ce6590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce65a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10ce65a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce65d0(undefined4 *param_1);
template<class... A> int FUN_10ce65d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6600(undefined4 *param_1);
template<class... A> int FUN_10ce6600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6660(undefined4 *param_1);
template<class... A> int FUN_10ce6660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce67c0(int param_1);
template<class... A> int FUN_10ce67c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce67d0(int param_1);
template<class... A> int FUN_10ce67d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce68e0(undefined4 *param_1);
template<class... A> int FUN_10ce68e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6930(undefined4 *param_1);
template<class... A> int FUN_10ce6930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce6950(undefined4 param_1);
template<class... A> int FUN_10ce6950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce6960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce6960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce69f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ce69f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce6ea0(undefined4 *param_1);
template<class... A> int FUN_10ce6ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce73b0(void);
template<class... A> int FUN_10ce73b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce74b0(int param_1);
template<class... A> int FUN_10ce74b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce76d0(undefined4 *param_1);
template<class... A> int FUN_10ce76d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7850(int param_1);
template<class... A> int FUN_10ce7850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7860(int param_1);
template<class... A> int FUN_10ce7860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce7870(int param_1);
template<class... A> int FUN_10ce7870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce7880(int param_1);
template<class... A> int FUN_10ce7880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce7890(undefined4 *param_1);
template<class... A> int FUN_10ce7890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce78a0(int *param_1);
template<class... A> int FUN_10ce78a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ce78b0(int *param_1);
template<class... A> int FUN_10ce78b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce78c0(undefined4 *param_1);
template<class... A> int FUN_10ce78c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ce78d0(undefined4 *param_1);
template<class... A> int FUN_10ce78d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10ce78e0(int *param_1);
template<class... A> int FUN_10ce78e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce7bd0(undefined4 *param_1);
template<class... A> int FUN_10ce7bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce7d30(int param_1);
template<class... A> int FUN_10ce7d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7d50(float *param_1);
template<class... A> int FUN_10ce7d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7e60(int param_1);
template<class... A> int FUN_10ce7e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce7e70(int param_1);
template<class... A> int FUN_10ce7e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80a0(undefined4 param_1);
template<class... A> int FUN_10ce80a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80b0(undefined4 param_1);
template<class... A> int FUN_10ce80b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80c0(undefined4 param_1);
template<class... A> int FUN_10ce80c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80d0(undefined4 param_1);
template<class... A> int FUN_10ce80d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80e0(undefined4 param_1);
template<class... A> int FUN_10ce80e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce80f0(undefined4 param_1);
template<class... A> int FUN_10ce80f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce8100(int param_1);
template<class... A> int FUN_10ce8100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce8110(int param_1);
template<class... A> int FUN_10ce8110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce81a0(int param_1);
template<class... A> int FUN_10ce81a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ce81b0(int param_1);
template<class... A> int FUN_10ce81b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce81c0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10ce81c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce81d0(undefined4 param_1);
template<class... A> int FUN_10ce81d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce81e0(undefined4 param_1);
template<class... A> int FUN_10ce81e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce8260(void);
template<class... A> int FUN_10ce8260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce8320(int param_1);
template<class... A> int FUN_10ce8320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce8330(undefined4 *param_1);
template<class... A> int FUN_10ce8330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce84e0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10ce84e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ce9340(uint param_1);
template<class... A> int FUN_10ce9340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ce93b0(uint param_1);
template<class... A> int FUN_10ce93b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ce9490(int param_1);
template<class... A> int FUN_10ce9490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ce94c0(int param_1);
template<class... A> int FUN_10ce94c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ce96d0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10ce96d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce9720(int param_1,int param_2);
template<class... A> int FUN_10ce9720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ce9770(int param_1,int param_2);
template<class... A> int FUN_10ce9770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceac30(int param_1);
template<class... A> int FUN_10ceac30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceac40(int param_1);
template<class... A> int FUN_10ceac40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ceae50(void);
template<class... A> int FUN_10ceae50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10ceb3f0(float *param_1);
template<class... A> int FUN_10ceb3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb400(void);
template<class... A> int FUN_10ceb400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb410(void);
template<class... A> int FUN_10ceb410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb420(void);
template<class... A> int FUN_10ceb420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ceb430(void);
template<class... A> int FUN_10ceb430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cebd30(undefined4 *param_1);
template<class... A> int FUN_10cebd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cebd60(undefined4 *param_1);
template<class... A> int FUN_10cebd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cec7a0(int *param_1);
template<class... A> int FUN_10cec7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cee0c0(void);
template<class... A> int FUN_10cee0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cee0d0(undefined4 param_1);
template<class... A> int FUN_10cee0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cee190(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10cee190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cee210(undefined4 param_1);
template<class... A> int FUN_10cee210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cee220(undefined4 param_1);
template<class... A> int FUN_10cee220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cee230(undefined4 *param_1);
template<class... A> int FUN_10cee230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cee280(undefined4 *param_1);
template<class... A> int FUN_10cee280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cee350(int param_1);
template<class... A> int FUN_10cee350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cee360(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10cee360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceec20(int *param_1);
template<class... A> int FUN_10ceec20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceec30(int param_1);
template<class... A> int FUN_10ceec30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceec40(int param_1);
template<class... A> int FUN_10ceec40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceedd0(int param_1);
template<class... A> int FUN_10ceedd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceede0(undefined4 param_1);
template<class... A> int FUN_10ceede0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceedf0(undefined4 param_1);
template<class... A> int FUN_10ceedf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ceee00(int param_1);
template<class... A> int FUN_10ceee00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ceee10(int param_1);
template<class... A> int FUN_10ceee10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cef4d0(int param_1);
template<class... A> int FUN_10cef4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cefa40(int param_1);
template<class... A> int FUN_10cefa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cefa60(undefined4 *param_1);
template<class... A> int FUN_10cefa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cefc10(int param_1);
template<class... A> int FUN_10cefc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cf0920(int *param_1);
template<class... A> int FUN_10cf0920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf0b80(undefined4 *param_1);
template<class... A> int FUN_10cf0b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf0bb0(int param_1);
template<class... A> int FUN_10cf0bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ __time64_t FUN_10cf1000(void);
template<class... A> int FUN_10cf1000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cf1290(int *param_1);
template<class... A> int FUN_10cf1290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf2c10(undefined4 param_1);
template<class... A> int FUN_10cf2c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf2d40(undefined4 param_1);
template<class... A> int FUN_10cf2d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10cf2d50(int param_1);
template<class... A> int FUN_10cf2d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf2d60(undefined4 *param_1);
template<class... A> int FUN_10cf2d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf2db0(undefined4 *param_1);
template<class... A> int FUN_10cf2db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf3270(undefined4 *param_1);
template<class... A> int FUN_10cf3270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf3280(undefined4 *param_1);
template<class... A> int FUN_10cf3280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf34b0(int *param_1);
template<class... A> int FUN_10cf34b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf3a20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10cf3a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf3a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10cf3a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3a60(void);
template<class... A> int FUN_10cf3a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3a70(void);
template<class... A> int FUN_10cf3a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3c30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10cf3c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3c40(undefined4 param_1);
template<class... A> int FUN_10cf3c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3c50(void);
template<class... A> int FUN_10cf3c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3c60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10cf3c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3c80(undefined4 param_1);
template<class... A> int FUN_10cf3c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cf3c90(int *param_1,int *param_2);
template<class... A> int FUN_10cf3c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3d00(undefined4 param_1);
template<class... A> int FUN_10cf3d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3d10(undefined4 param_1);
template<class... A> int FUN_10cf3d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3f90(undefined4 param_1);
template<class... A> int FUN_10cf3f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3fa0(undefined4 param_1);
template<class... A> int FUN_10cf3fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cf3fb0(undefined4 param_1);
template<class... A> int FUN_10cf3fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cf3fc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10cf3fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf4500(undefined4 *param_1);
template<class... A> int FUN_10cf4500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10cf4640(undefined4 param_1);
template<class... A> int FUN_10cf4640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cf4a20(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10cf4a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cf50f0(undefined4 *param_1);
template<class... A> int FUN_10cf50f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10cf5240(undefined4 param_1);
template<class... A> int FUN_10cf5240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10cf5320(undefined4 *param_1);
template<class... A> int FUN_10cf5320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cf53e0(void);
template<class... A> int FUN_10cf53e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf5480(undefined4 *param_1);
template<class... A> int FUN_10cf5480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf5650(undefined4 *param_1);
template<class... A> int FUN_10cf5650(A...);
/* WARNING: Removing unreachable block_10cf58b0 (ram,0x101ba14a) */ void __fastcall FUN_10cf58b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf5aa0(undefined4 *param_1);
template<class... A> int FUN_10cf5aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf5c20(int param_1);
template<class... A> int FUN_10cf5c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf5c30(undefined4 *param_1);
template<class... A> int FUN_10cf5c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cf61c0(void);
template<class... A> int FUN_10cf61c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf64f0(undefined4 *param_1);
template<class... A> int FUN_10cf64f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cf65e0(undefined4 *param_1);
template<class... A> int FUN_10cf65e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf6f40(undefined4 *param_1);
template<class... A> int FUN_10cf6f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf73d0(undefined4 *param_1);
template<class... A> int FUN_10cf73d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cf8c50(undefined4 *param_1);
template<class... A> int FUN_10cf8c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10cf8d60(undefined4 *param_1);
template<class... A> int FUN_10cf8d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cfb1f0(void);
template<class... A> int FUN_10cfb1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10cfb7e0(undefined4 *param_1);
template<class... A> int FUN_10cfb7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10cfcd10(void);
template<class... A> int FUN_10cfcd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10cfcd20(int *param_1);
template<class... A> int FUN_10cfcd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10cfe540(int param_1);
template<class... A> int FUN_10cfe540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cfea50(void);
template<class... A> int FUN_10cfea50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cfea60(undefined4 *param_1);
template<class... A> int FUN_10cfea60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10cfea70(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_10cfea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10cff1e0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10cff1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10cff260(int param_1);
template<class... A> int FUN_10cff260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10cffe90(undefined4 param_1);
template<class... A> int FUN_10cffe90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d00060(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_10d00060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d001f0(int param_1);
template<class... A> int FUN_10d001f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d006f0(undefined4 param_1);
template<class... A> int FUN_10d006f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d00700(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d00700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d00740(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d00740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d00780(undefined4 param_1);
template<class... A> int FUN_10d00780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d00790(void);
template<class... A> int FUN_10d00790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d007a0(void);
template<class... A> int FUN_10d007a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10d008c0(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10d008c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00a00(undefined4 *param_1);
template<class... A> int FUN_10d00a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00a50(undefined4 *param_1);
template<class... A> int FUN_10d00a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00a80(undefined4 *param_1);
template<class... A> int FUN_10d00a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d00ab0(undefined4 *param_1);
template<class... A> int FUN_10d00ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d01640(undefined4 *param_1);
template<class... A> int FUN_10d01640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d01650(undefined4 *param_1);
template<class... A> int FUN_10d01650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d01820(undefined4 *param_1);
template<class... A> int FUN_10d01820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d021a0(undefined4 *param_1);
template<class... A> int FUN_10d021a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d021b0(undefined4 *param_1);
template<class... A> int FUN_10d021b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d023e0(int *param_1);
template<class... A> int FUN_10d023e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d023f0(undefined4 *param_1);
template<class... A> int FUN_10d023f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02400(undefined4 *param_1);
template<class... A> int FUN_10d02400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02410(undefined4 *param_1);
template<class... A> int FUN_10d02410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02420(undefined4 *param_1);
template<class... A> int FUN_10d02420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02430(undefined4 *param_1);
template<class... A> int FUN_10d02430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02440(undefined4 *param_1);
template<class... A> int FUN_10d02440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  FUN_10d02f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8);
template<class... A> int FUN_10d02f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d02fd0(undefined4 *param_1);
template<class... A> int FUN_10d02fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d02fe0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10d02fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d032c0(int param_1);
template<class... A> int FUN_10d032c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d03aa0(undefined4 *param_1);
template<class... A> int FUN_10d03aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d03ac0(undefined4 *param_1);
template<class... A> int FUN_10d03ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d05500(void);
template<class... A> int FUN_10d05500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d05510(void);
template<class... A> int FUN_10d05510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d06d10(undefined4 *param_1);
template<class... A> int FUN_10d06d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d06d20(undefined4 *param_1);
template<class... A> int FUN_10d06d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d06d30(undefined4 *param_1);
template<class... A> int FUN_10d06d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07850(undefined4 *param_1);
template<class... A> int FUN_10d07850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07880(undefined4 *param_1);
template<class... A> int FUN_10d07880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d078b0(undefined4 *param_1);
template<class... A> int FUN_10d078b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d078e0(undefined4 *param_1);
template<class... A> int FUN_10d078e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07910(undefined4 *param_1);
template<class... A> int FUN_10d07910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d07940(undefined4 *param_1);
template<class... A> int FUN_10d07940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d07d80(int param_1);
template<class... A> int FUN_10d07d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d08580(undefined4 *param_1);
template<class... A> int FUN_10d08580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d085a0(undefined4 *param_1);
template<class... A> int FUN_10d085a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d09160(undefined4 *param_1);
template<class... A> int FUN_10d09160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d09900(undefined4 *param_1);
template<class... A> int FUN_10d09900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d09910(undefined4 *param_1);
template<class... A> int FUN_10d09910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d09920(undefined4 *param_1);
template<class... A> int FUN_10d09920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d0dc30(void);
template<class... A> int FUN_10d0dc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d0e030(int *param_1);
template<class... A> int FUN_10d0e030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d102a0(undefined4 *param_1);
template<class... A> int FUN_10d102a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d102b0(undefined4 *param_1);
template<class... A> int FUN_10d102b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d102c0(undefined4 *param_1);
template<class... A> int FUN_10d102c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d10890(undefined4 *param_1);
template<class... A> int FUN_10d10890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d118f0(void);
template<class... A> int FUN_10d118f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d11900(void);
template<class... A> int FUN_10d11900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d11910(void);
template<class... A> int FUN_10d11910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11920(undefined4 *param_1);
template<class... A> int FUN_10d11920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11950(undefined4 *param_1);
template<class... A> int FUN_10d11950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11d50(undefined4 *param_1);
template<class... A> int FUN_10d11d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11d60(undefined4 *param_1);
template<class... A> int FUN_10d11d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d11d70(undefined4 *param_1);
template<class... A> int FUN_10d11d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d125b0(undefined4 *param_1);
template<class... A> int FUN_10d125b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d125d0(undefined4 *param_1);
template<class... A> int FUN_10d125d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d12890(undefined4 *param_1);
template<class... A> int FUN_10d12890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d12dc0(int param_1);
template<class... A> int FUN_10d12dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d13f90(void);
template<class... A> int FUN_10d13f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d13fa0(void);
template<class... A> int FUN_10d13fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d13fb0(void);
template<class... A> int FUN_10d13fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d14010(int param_1);
template<class... A> int FUN_10d14010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d14030(int param_1);
template<class... A> int FUN_10d14030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d14db0(undefined4 *param_1);
template<class... A> int FUN_10d14db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d14dc0(undefined4 *param_1);
template<class... A> int FUN_10d14dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d150c0(undefined4 *param_1);
template<class... A> int FUN_10d150c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d150f0(int *param_1);
template<class... A> int FUN_10d150f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d15340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d15340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d15360(int param_1,int param_2);
template<class... A> int FUN_10d15360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d15390(undefined4 param_1);
template<class... A> int FUN_10d15390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d153a0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d153a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d153e0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d153e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d15420(undefined4 param_1,int *param_2);
template<class... A> int FUN_10d15420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d154b0(undefined4 *param_1);
template<class... A> int FUN_10d154b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d154d0(undefined4 param_1);
template<class... A> int FUN_10d154d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d154e0(undefined4 *param_1);
template<class... A> int FUN_10d154e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d15b70(undefined4 *param_1);
template<class... A> int FUN_10d15b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d16080(undefined4 *param_1);
template<class... A> int FUN_10d16080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d160a0(undefined4 *param_1);
template<class... A> int FUN_10d160a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d16610(int param_1,int param_2);
template<class... A> int FUN_10d16610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16640(undefined4 param_1);
template<class... A> int FUN_10d16640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16650(undefined4 param_1);
template<class... A> int FUN_10d16650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d16f20(int param_1,int param_2);
template<class... A> int FUN_10d16f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16f70(undefined4 *param_1);
template<class... A> int FUN_10d16f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d16f90(undefined4 *param_1);
template<class... A> int FUN_10d16f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d17030(int param_1);
template<class... A> int FUN_10d17030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d18620(int *param_1);
template<class... A> int FUN_10d18620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d186b0(void);
template<class... A> int FUN_10d186b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d187b0(int *param_1);
template<class... A> int FUN_10d187b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d194f0(undefined4 *param_1);
template<class... A> int FUN_10d194f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d19520(undefined4 *param_1);
template<class... A> int FUN_10d19520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d19770(int *param_1);
template<class... A> int FUN_10d19770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d19ae0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d19ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1abe0(undefined4 *param_1);
template<class... A> int FUN_10d1abe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1abf0(undefined4 *param_1);
template<class... A> int FUN_10d1abf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac00(undefined4 *param_1);
template<class... A> int FUN_10d1ac00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac10(undefined4 *param_1);
template<class... A> int FUN_10d1ac10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac20(undefined4 *param_1);
template<class... A> int FUN_10d1ac20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac30(undefined4 *param_1);
template<class... A> int FUN_10d1ac30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1ac40(undefined4 *param_1);
template<class... A> int FUN_10d1ac40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1beb0(undefined4 *param_1);
template<class... A> int FUN_10d1beb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d440(undefined4 *param_1);
template<class... A> int FUN_10d1d440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d450(undefined4 *param_1);
template<class... A> int FUN_10d1d450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d460(undefined4 *param_1);
template<class... A> int FUN_10d1d460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d470(undefined4 *param_1);
template<class... A> int FUN_10d1d470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d480(undefined4 *param_1);
template<class... A> int FUN_10d1d480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d1d490(undefined4 *param_1);
template<class... A> int FUN_10d1d490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d5f0(undefined4 *param_1);
template<class... A> int FUN_10d1d5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d620(undefined4 *param_1);
template<class... A> int FUN_10d1d620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d650(undefined4 *param_1);
template<class... A> int FUN_10d1d650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d680(undefined4 *param_1);
template<class... A> int FUN_10d1d680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d6b0(undefined4 *param_1);
template<class... A> int FUN_10d1d6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d1d6e0(undefined4 *param_1);
template<class... A> int FUN_10d1d6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d1df50(int *param_1);
template<class... A> int FUN_10d1df50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d20200(int param_1);
template<class... A> int FUN_10d20200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d22a90(void);
template<class... A> int FUN_10d22a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d23640(int param_1);
template<class... A> int FUN_10d23640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d238e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d238e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d239d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10d239d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d239f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d239f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d23bd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d23bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d23be0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d23be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d23ed0(SCStr *param_1,SCStr *param_2);
template<class... A> int FUN_10d23ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d23ef0(void);
template<class... A> int FUN_10d23ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24170(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d24170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24180(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d24180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24190(void);
template<class... A> int FUN_10d24190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24510(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10d24510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24530(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10d24530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10d24940(int param_1,uint *param_2);
template<class... A> int FUN_10d24940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d24b50(SCStr *param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_10d24b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25270(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_10d25270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25380(int param_1,int param_2,int param_3,SCStr *param_4);
template<class... A> int FUN_10d25380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d25430(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d25430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10d25940(void);
template<class... A> int FUN_10d25940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d259d0(undefined4 param_1);
template<class... A> int FUN_10d259d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d259e0(undefined4 param_1);
template<class... A> int FUN_10d259e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25a70(undefined4 param_1);
template<class... A> int FUN_10d25a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25a80(undefined4 param_1);
template<class... A> int FUN_10d25a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25a90(undefined4 param_1);
template<class... A> int FUN_10d25a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25aa0(undefined4 param_1);
template<class... A> int FUN_10d25aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10d25ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10d25ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d25ad0(void);
template<class... A> int FUN_10d25ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25ae0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d25ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d25b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b20(undefined4 param_1);
template<class... A> int FUN_10d25b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b30(undefined4 param_1);
template<class... A> int FUN_10d25b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25b40(undefined4 param_1);
template<class... A> int FUN_10d25b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25bd0(undefined4 param_1);
template<class... A> int FUN_10d25bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25be0(undefined4 param_1);
template<class... A> int FUN_10d25be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d25c70(undefined4 param_1);
template<class... A> int FUN_10d25c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d260e0(undefined4 param_1);
template<class... A> int FUN_10d260e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d26170(int param_1,int param_2);
template<class... A> int FUN_10d26170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10d261a0(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10d261a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26250(undefined4 *param_1);
template<class... A> int FUN_10d26250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26270(undefined4 *param_1);
template<class... A> int FUN_10d26270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d262f0(undefined4 param_1);
template<class... A> int FUN_10d262f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d26300(undefined4 param_1);
template<class... A> int FUN_10d26300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d26310(undefined4 param_1);
template<class... A> int FUN_10d26310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26400(undefined4 *param_1);
template<class... A> int FUN_10d26400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d26420(undefined4 param_1);
template<class... A> int FUN_10d26420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d26430(undefined4 *param_1);
template<class... A> int FUN_10d26430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d27490(int param_1);
template<class... A> int FUN_10d27490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d274b0(int param_1);
template<class... A> int FUN_10d274b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d27d70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d27d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d27d80(int *param_1);
template<class... A> int FUN_10d27d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d27d90(undefined4 *param_1);
template<class... A> int FUN_10d27d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d27da0(undefined4 *param_1);
template<class... A> int FUN_10d27da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d27db0(int *param_1);
template<class... A> int FUN_10d27db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d288a0(undefined4 *param_1);
template<class... A> int FUN_10d288a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d288f0(int param_1);
template<class... A> int FUN_10d288f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d28da0(undefined4 param_1);
template<class... A> int FUN_10d28da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e40(undefined4 param_1);
template<class... A> int FUN_10d28e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e50(undefined4 param_1);
template<class... A> int FUN_10d28e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e60(undefined4 param_1);
template<class... A> int FUN_10d28e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e70(undefined4 param_1);
template<class... A> int FUN_10d28e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e80(undefined4 param_1);
template<class... A> int FUN_10d28e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28e90(undefined4 param_1);
template<class... A> int FUN_10d28e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28ea0(undefined4 param_1);
template<class... A> int FUN_10d28ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d28eb0(undefined4 param_1);
template<class... A> int FUN_10d28eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d29150(undefined4 param_1);
template<class... A> int FUN_10d29150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10d291d0(int *param_1);
template<class... A> int FUN_10d291d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d29310(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10d29310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d29320(int param_1);
template<class... A> int FUN_10d29320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d29440(undefined4 *param_1);
template<class... A> int FUN_10d29440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d29450(undefined1 *param_1);
template<class... A> int FUN_10d29450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d29460(int param_1);
template<class... A> int FUN_10d29460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10d294d0(uint param_1);
template<class... A> int FUN_10d294d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d29620(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10d29620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d29670(int param_1,int param_2);
template<class... A> int FUN_10d29670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2ac90(void);
template<class... A> int FUN_10d2ac90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2aca0(void);
template<class... A> int FUN_10d2aca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2ae60(void);
template<class... A> int FUN_10d2ae60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d2b0e0(undefined4 *param_1);
template<class... A> int FUN_10d2b0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d2b4c0(undefined4 *param_1);
template<class... A> int FUN_10d2b4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d2b4f0(undefined4 *param_1);
template<class... A> int FUN_10d2b4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2d970(void);
template<class... A> int FUN_10d2d970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2dc10(undefined4 *param_1);
template<class... A> int FUN_10d2dc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2dc20(void);
template<class... A> int FUN_10d2dc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d2dd10(undefined4 param_1);
template<class... A> int FUN_10d2dd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d2dd20(int *param_1,int param_2);
template<class... A> int FUN_10d2dd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d2dd40(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10d2dd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d2dd60(int param_1,int param_2);
template<class... A> int FUN_10d2dd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d2dea0(int param_1,int param_2);
template<class... A> int FUN_10d2dea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d2df50(undefined4 *param_1);
template<class... A> int FUN_10d2df50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d30190(undefined4 *param_1);
template<class... A> int FUN_10d30190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d302c0(undefined4 *param_1);
template<class... A> int FUN_10d302c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d302d0(int *param_1);
template<class... A> int FUN_10d302d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d302e0(undefined4 *param_1);
template<class... A> int FUN_10d302e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d302f0(undefined4 *param_1);
template<class... A> int FUN_10d302f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d30300(undefined4 *param_1);
template<class... A> int FUN_10d30300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d30310(undefined4 *param_1);
template<class... A> int FUN_10d30310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __stdcall FUN_10d30ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10d30ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d381e0(int *param_1);
template<class... A> int FUN_10d381e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d39e30(undefined4 *param_1);
template<class... A> int FUN_10d39e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d39fc0(undefined4 *param_1);
template<class... A> int FUN_10d39fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d39ff0(undefined4 *param_1);
template<class... A> int FUN_10d39ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3a910(int *param_1);
template<class... A> int FUN_10d3a910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d3abf0(void);
template<class... A> int FUN_10d3abf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10d3ac20(int param_1);
template<class... A> int FUN_10d3ac20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d3ac40(int param_1);
template<class... A> int FUN_10d3ac40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d3b410(undefined4 *param_1);
template<class... A> int FUN_10d3b410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3cb70(undefined4 *param_1);
template<class... A> int FUN_10d3cb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d3cde0(void);
template<class... A> int FUN_10d3cde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3cdf0(undefined4 *param_1);
template<class... A> int FUN_10d3cdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce20(undefined4 *param_1);
template<class... A> int FUN_10d3ce20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce50(undefined4 *param_1);
template<class... A> int FUN_10d3ce50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce70(undefined4 *param_1);
template<class... A> int FUN_10d3ce70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3ce90(undefined4 *param_1);
template<class... A> int FUN_10d3ce90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3d3b0(undefined4 *param_1);
template<class... A> int FUN_10d3d3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d3d3c0(undefined4 *param_1);
template<class... A> int FUN_10d3d3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e050(undefined4 *param_1);
template<class... A> int FUN_10d3e050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e070(undefined4 *param_1);
template<class... A> int FUN_10d3e070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e080(undefined4 *param_1);
template<class... A> int FUN_10d3e080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e280(undefined4 *param_1);
template<class... A> int FUN_10d3e280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e430(undefined4 *param_1);
template<class... A> int FUN_10d3e430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d3e450(undefined4 *param_1);
template<class... A> int FUN_10d3e450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d3e5d0(undefined4 *param_1);
template<class... A> int FUN_10d3e5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d3e5e0(undefined4 *param_1);
template<class... A> int FUN_10d3e5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d3ede0(void);
template<class... A> int FUN_10d3ede0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d3ff80(void);
template<class... A> int FUN_10d3ff80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d41c50(undefined4 *param_1);
template<class... A> int FUN_10d41c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d41c60(undefined4 *param_1);
template<class... A> int FUN_10d41c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d41c70(undefined4 *param_1);
template<class... A> int FUN_10d41c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d420e0(undefined4 *param_1);
template<class... A> int FUN_10d420e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d42110(undefined4 *param_1);
template<class... A> int FUN_10d42110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d42140(undefined4 *param_1);
template<class... A> int FUN_10d42140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d423a0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d423a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d423e0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d423e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d43800(int *param_1);
template<class... A> int FUN_10d43800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d44000(undefined4 *param_1);
template<class... A> int FUN_10d44000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d44020(undefined4 *param_1);
template<class... A> int FUN_10d44020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d499e0(undefined4 *param_1);
template<class... A> int FUN_10d499e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d49ef0(int param_1);
template<class... A> int FUN_10d49ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d4a2c0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d4a2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d4a300(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d4a300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d4a340(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d4a340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d4a380(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10d4a380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d4a3c0(void);
template<class... A> int FUN_10d4a3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4a510(undefined4 *param_1);
template<class... A> int FUN_10d4a510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4a5e0(undefined4 *param_1);
template<class... A> int FUN_10d4a5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4a600(undefined4 *param_1);
template<class... A> int FUN_10d4a600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4ad50(undefined4 *param_1);
template<class... A> int FUN_10d4ad50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d4ad60(undefined4 *param_1);
template<class... A> int FUN_10d4ad60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c450(undefined4 *param_1);
template<class... A> int FUN_10d4c450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d4c460(int *param_1);
template<class... A> int FUN_10d4c460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d4c470(int *param_1);
template<class... A> int FUN_10d4c470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c480(undefined4 *param_1);
template<class... A> int FUN_10d4c480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c490(undefined4 *param_1);
template<class... A> int FUN_10d4c490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c4a0(undefined4 *param_1);
template<class... A> int FUN_10d4c4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4c4b0(undefined4 *param_1);
template<class... A> int FUN_10d4c4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d8b0(undefined4 *param_1);
template<class... A> int FUN_10d4d8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d8d0(undefined4 *param_1);
template<class... A> int FUN_10d4d8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d8f0(undefined4 *param_1);
template<class... A> int FUN_10d4d8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d910(undefined4 *param_1);
template<class... A> int FUN_10d4d910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d4d930(undefined4 *param_1);
template<class... A> int FUN_10d4d930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d507b0(int param_1);
template<class... A> int FUN_10d507b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d507c0(void);
template<class... A> int FUN_10d507c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d51170(undefined4 *param_1);
template<class... A> int FUN_10d51170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51320(undefined4 *param_1);
template<class... A> int FUN_10d51320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51350(undefined4 *param_1);
template<class... A> int FUN_10d51350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51380(undefined4 *param_1);
template<class... A> int FUN_10d51380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d513b0(undefined4 *param_1);
template<class... A> int FUN_10d513b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d513e0(undefined4 *param_1);
template<class... A> int FUN_10d513e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51410(undefined4 *param_1);
template<class... A> int FUN_10d51410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51440(undefined4 *param_1);
template<class... A> int FUN_10d51440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d515c0(int param_1);
template<class... A> int FUN_10d515c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d51790(undefined4 *param_1);
template<class... A> int FUN_10d51790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10d51f90(void);
template<class... A> int FUN_10d51f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10d52340(int param_1);
template<class... A> int FUN_10d52340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d52780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d52780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d529d0(int param_1,int param_2);
template<class... A> int FUN_10d529d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d52e50(undefined4 *param_1);
template<class... A> int FUN_10d52e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d52ec0(undefined4 param_1);
template<class... A> int FUN_10d52ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d530c0(undefined4 param_1);
template<class... A> int FUN_10d530c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d530d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10d530d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d530f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10d530f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d53200(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10d53200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d53250(undefined4 param_1);
template<class... A> int FUN_10d53250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d53260(undefined4 param_1);
template<class... A> int FUN_10d53260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d53290(undefined4 param_1);
template<class... A> int FUN_10d53290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d532c0(void);
template<class... A> int FUN_10d532c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d533d0(undefined4 param_1);
template<class... A> int FUN_10d533d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53460(undefined4 *param_1);
template<class... A> int FUN_10d53460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d53480(undefined4 param_1);
template<class... A> int FUN_10d53480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53490(undefined4 *param_1);
template<class... A> int FUN_10d53490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53940(undefined4 *param_1);
template<class... A> int FUN_10d53940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d53b30(undefined4 *param_1);
template<class... A> int FUN_10d53b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54060(undefined4 *param_1);
template<class... A> int FUN_10d54060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54070(undefined4 *param_1);
template<class... A> int FUN_10d54070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10d54080(int *param_1);
template<class... A> int FUN_10d54080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10d54090(int *param_1);
template<class... A> int FUN_10d54090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d54380(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10d54380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54560(undefined4 param_1);
template<class... A> int FUN_10d54560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54570(undefined4 param_1);
template<class... A> int FUN_10d54570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54580(undefined4 param_1);
template<class... A> int FUN_10d54580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d54590(undefined4 param_1);
template<class... A> int FUN_10d54590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d545e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d545e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d545f0(undefined4 *param_1);
template<class... A> int FUN_10d545f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10d54960(uint param_1);
template<class... A> int FUN_10d54960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d549f0(int *param_1);
template<class... A> int FUN_10d549f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d54aa0(int param_1);
template<class... A> int FUN_10d54aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d55d10(void);
template<class... A> int FUN_10d55d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d57070(void);
template<class... A> int FUN_10d57070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d57080(void);
template<class... A> int FUN_10d57080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d58c20(int *param_1);
template<class... A> int FUN_10d58c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d58de0(void);
template<class... A> int FUN_10d58de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d58ed0(undefined4 *param_1);
template<class... A> int FUN_10d58ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d58ef0(undefined4 *param_1);
template<class... A> int FUN_10d58ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d59790(int *param_1);
template<class... A> int FUN_10d59790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d597a0(undefined4 *param_1);
template<class... A> int FUN_10d597a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d597b0(undefined4 *param_1);
template<class... A> int FUN_10d597b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d5a500(void);
template<class... A> int FUN_10d5a500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d5a7c0(int *param_1);
template<class... A> int FUN_10d5a7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d5a7d0(int *param_1);
template<class... A> int FUN_10d5a7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5a980(undefined4 *param_1);
template<class... A> int FUN_10d5a980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5acb0(undefined4 *param_1);
template<class... A> int FUN_10d5acb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5ace0(undefined4 *param_1);
template<class... A> int FUN_10d5ace0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5b2d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5b2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5b2f0(int param_1,int param_2);
template<class... A> int FUN_10d5b2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5b770(undefined4 *param_1);
template<class... A> int FUN_10d5b770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5b780(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_10d5b780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10d5cd50(undefined1 param_1);
template<class... A> int FUN_10d5cd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5cf80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_10d5cf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5d6e0(undefined4 param_1);
template<class... A> int FUN_10d5d6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d5da10(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10d5da10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5da60(undefined4 param_1);
template<class... A> int FUN_10d5da60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5da70(undefined4 param_1);
template<class... A> int FUN_10d5da70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5da80(undefined4 param_1);
template<class... A> int FUN_10d5da80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10d5da90(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10d5da90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5dac0(undefined4 *param_1);
template<class... A> int FUN_10d5dac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5db70(undefined4 *param_1);
template<class... A> int FUN_10d5db70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5db90(undefined4 param_1);
template<class... A> int FUN_10d5db90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5dba0(undefined4 *param_1);
template<class... A> int FUN_10d5dba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d5dd60(undefined4 *param_1);
template<class... A> int FUN_10d5dd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5e4d0(undefined4 *param_1);
template<class... A> int FUN_10d5e4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e550(undefined4 *param_1);
template<class... A> int FUN_10d5e550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e560(undefined4 *param_1);
template<class... A> int FUN_10d5e560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9c0(undefined4 param_1);
template<class... A> int FUN_10d5e9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9d0(undefined4 param_1);
template<class... A> int FUN_10d5e9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9e0(undefined4 param_1);
template<class... A> int FUN_10d5e9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d5e9f0(undefined4 param_1);
template<class... A> int FUN_10d5e9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d5ea00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d5ea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5ea10(undefined4 *param_1);
template<class... A> int FUN_10d5ea10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10d5efc0(int *param_1);
template<class... A> int FUN_10d5efc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d5fbb0(int param_1);
template<class... A> int FUN_10d5fbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5fc40(void);
template<class... A> int FUN_10d5fc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d5fc50(void);
template<class... A> int FUN_10d5fc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d602a0(undefined4 *param_1);
template<class... A> int FUN_10d602a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d602b0(undefined4 *param_1);
template<class... A> int FUN_10d602b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d60390(undefined4 *param_1);
template<class... A> int FUN_10d60390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d603c0(undefined4 *param_1);
template<class... A> int FUN_10d603c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10d61650(SCStr *param_1);
template<class... A> int FUN_10d61650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d635f0(void);
template<class... A> int FUN_10d635f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63d90(void);
template<class... A> int FUN_10d63d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63da0(void);
template<class... A> int FUN_10d63da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63db0(void);
template<class... A> int FUN_10d63db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d63dc0(void);
template<class... A> int FUN_10d63dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63e40(undefined4 *param_1);
template<class... A> int FUN_10d63e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63e70(undefined4 *param_1);
template<class... A> int FUN_10d63e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f20(undefined4 *param_1);
template<class... A> int FUN_10d63f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f30(undefined4 *param_1);
template<class... A> int FUN_10d63f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f40(undefined4 *param_1);
template<class... A> int FUN_10d63f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d63f50(undefined4 *param_1);
template<class... A> int FUN_10d63f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d64170(undefined4 *param_1);
template<class... A> int FUN_10d64170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d641a0(undefined4 *param_1);
template<class... A> int FUN_10d641a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64590(undefined4 *param_1);
template<class... A> int FUN_10d64590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64710(undefined4 *param_1);
template<class... A> int FUN_10d64710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64730(undefined4 *param_1);
template<class... A> int FUN_10d64730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d64980(undefined4 *param_1);
template<class... A> int FUN_10d64980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d64bc0(undefined4 *param_1);
template<class... A> int FUN_10d64bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d64bd0(undefined4 *param_1);
template<class... A> int FUN_10d64bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d64be0(int *param_1);
template<class... A> int FUN_10d64be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d64bf0(undefined4 *param_1);
template<class... A> int FUN_10d64bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670b0(void);
template<class... A> int FUN_10d670b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670c0(void);
template<class... A> int FUN_10d670c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670d0(void);
template<class... A> int FUN_10d670d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d670e0(void);
template<class... A> int FUN_10d670e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d67160(int *param_1);
template<class... A> int FUN_10d67160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d67170(int *param_1);
template<class... A> int FUN_10d67170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d67320(undefined4 *param_1);
template<class... A> int FUN_10d67320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d67330(undefined4 *param_1);
template<class... A> int FUN_10d67330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d677c0(undefined4 *param_1);
template<class... A> int FUN_10d677c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d677f0(undefined4 *param_1);
template<class... A> int FUN_10d677f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d67820(int *param_1);
template<class... A> int FUN_10d67820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10d68250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d682b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10d682b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68470(void);
template<class... A> int FUN_10d68470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68490(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d68490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d684a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d684a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d684b0(void);
template<class... A> int FUN_10d684b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68650(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10d68650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d686f0(undefined4 param_1);
template<class... A> int FUN_10d686f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10d68700(int param_1,uint *param_2);
template<class... A> int FUN_10d68700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68840(undefined4 param_1);
template<class... A> int FUN_10d68840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68850(undefined4 param_1);
template<class... A> int FUN_10d68850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68860(undefined4 param_1);
template<class... A> int FUN_10d68860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68870(undefined4 param_1);
template<class... A> int FUN_10d68870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68880(undefined4 param_1);
template<class... A> int FUN_10d68880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d68890(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10d68890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68920(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d68920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68940(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10d68940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68960(undefined4 param_1);
template<class... A> int FUN_10d68960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68970(undefined4 param_1);
template<class... A> int FUN_10d68970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d68980(undefined4 param_1);
template<class... A> int FUN_10d68980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d68990(void);
template<class... A> int FUN_10d68990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d689a0(undefined4 *param_1);
template<class... A> int FUN_10d689a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68a10(undefined4 *param_1);
template<class... A> int FUN_10d68a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68b30(undefined4 *param_1);
template<class... A> int FUN_10d68b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d68b50(undefined4 param_1);
template<class... A> int FUN_10d68b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68b60(undefined4 *param_1);
template<class... A> int FUN_10d68b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d68bb0(undefined4 *param_1);
template<class... A> int FUN_10d68bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d69840(int param_1);
template<class... A> int FUN_10d69840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d69900(undefined4 *param_1);
template<class... A> int FUN_10d69900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d69fc0(undefined4 *param_1);
template<class... A> int FUN_10d69fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d69fd0(undefined4 *param_1);
template<class... A> int FUN_10d69fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d6a7e0(undefined4 *param_1);
template<class... A> int FUN_10d6a7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10d6a830(int param_1);
template<class... A> int FUN_10d6a830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a850(undefined4 param_1);
template<class... A> int FUN_10d6a850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a860(undefined4 param_1);
template<class... A> int FUN_10d6a860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a870(undefined4 param_1);
template<class... A> int FUN_10d6a870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a880(undefined4 param_1);
template<class... A> int FUN_10d6a880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a890(undefined4 param_1);
template<class... A> int FUN_10d6a890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a8a0(undefined4 param_1);
template<class... A> int FUN_10d6a8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a8b0(undefined4 param_1);
template<class... A> int FUN_10d6a8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6a8c0(undefined4 param_1);
template<class... A> int FUN_10d6a8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d6abd0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10d6abd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d6abe0(int param_1);
template<class... A> int FUN_10d6abe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10d6ad50(uint param_1);
template<class... A> int FUN_10d6ad50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10d6ba90(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10d6ba90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10d6bae0(int param_1,int param_2);
template<class... A> int FUN_10d6bae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d6bb90(int param_1);
template<class... A> int FUN_10d6bb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10d6f0b0(void);
template<class... A> int FUN_10d6f0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d6f2a0(int *param_1);
template<class... A> int FUN_10d6f2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10d6f370(int param_1);
template<class... A> int FUN_10d6f370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d6f390(void);
template<class... A> int FUN_10d6f390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d6f3a0(void);
template<class... A> int FUN_10d6f3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d71350(undefined4 *param_1);
template<class... A> int FUN_10d71350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10d73860(int param_1);
template<class... A> int FUN_10d73860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d743f0(undefined4 param_1);
template<class... A> int FUN_10d743f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d74400(undefined4 param_1);
template<class... A> int FUN_10d74400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10d74410(undefined4 param_1);
template<class... A> int FUN_10d74410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d74420(undefined4 *param_1);
template<class... A> int FUN_10d74420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d74480(undefined4 *param_1);
template<class... A> int FUN_10d74480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d744e0(undefined4 *param_1);
template<class... A> int FUN_10d744e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10d74600(undefined4 *param_1);
template<class... A> int FUN_10d74600(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);

// Reference entry 10c8a110; body size 9 bytes.
#line 1 "ENTRY_10c8a110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a110(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a120; body size 15 bytes.
#line 1 "ENTRY_10c8a120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8a120(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_2 = (undefined4)(puVar1);
  *param_1 = (undefined4)(*puVar1);
  return;
}


// Reference entry 10c8a140; body size 9 bytes.
#line 1 "ENTRY_10c8a140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a140(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a150; body size 15 bytes.
#line 1 "ENTRY_10c8a150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8a150(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_2 = (undefined4)(puVar1);
  *param_1 = (undefined4)(*puVar1);
  return;
}


// Reference entry 10c8a170; body size 9 bytes.
#line 1 "ENTRY_10c8a170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a170(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a180; body size 9 bytes.
#line 1 "ENTRY_10c8a180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a180(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a190; body size 9 bytes.
#line 1 "ENTRY_10c8a190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a190(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a1a0; body size 9 bytes.
#line 1 "ENTRY_10c8a1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a1a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a1b0; body size 9 bytes.
#line 1 "ENTRY_10c8a1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c8a1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c8a1d0; body size 20 bytes.
#line 1 "ENTRY_10c8a1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c8a1d0(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 10c8a1f0; body size 10 bytes.
#line 1 "ENTRY_10c8a1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c8a1f0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c8a200; body size 10 bytes.
#line 1 "ENTRY_10c8a200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10c8a200(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10c8a4d0; body size 22 bytes.
#line 1 "ENTRY_10c8a4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8a4d0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c8a4f0; body size 22 bytes.
#line 1 "ENTRY_10c8a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8a4f0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10c8a790; body size 20 bytes.
#line 1 "ENTRY_10c8a790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8a790(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0x6666666) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c8a7b0; body size 20 bytes.
#line 1 "ENTRY_10c8a7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8a7b0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0x6666666) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10c8a7d0; body size 67 bytes.
#line 1 "ENTRY_10c8a7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c8a7d0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) + (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10c8a830; body size 67 bytes.
#line 1 "ENTRY_10c8a830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10c8a830(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) + (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10c8a9f0; body size 54 bytes.
#line 1 "ENTRY_10c8a9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8a9f0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0x14) + param_3 * 8));
  if ((int *)piVar1[1] != (int *)((param_2))) {
    if ((int *)*piVar1 == (int *)(((param_2)))) {
      *piVar1 = (int)(*param_2);
    }
    return;
  }
  if ((int *)*piVar1 == (int *)(((param_2)))) {
    iVar2 = (int)(*(int *)(param_1 + 0xc));
    *piVar1 = (int)(iVar2);
    piVar1[1] = (int)(iVar2);
    return;
  }
  piVar1[1] = (int)(param_2[1]);
  return;
}


// Reference entry 10c8aa40; body size 54 bytes.
#line 1 "ENTRY_10c8aa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8aa40(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int *)(*(int *)(param_1 + 0x14) + param_3 * 8));
  if ((int *)piVar1[1] != (int *)((param_2))) {
    if ((int *)*piVar1 == (int *)(((param_2)))) {
      *piVar1 = (int)(*param_2);
    }
    return;
  }
  if ((int *)*piVar1 == (int *)(((param_2)))) {
    iVar2 = (int)(*(int *)(param_1 + 0xc));
    *piVar1 = (int)(iVar2);
    piVar1[1] = (int)(iVar2);
    return;
  }
  piVar1[1] = (int)(param_2[1]);
  return;
}


// Reference entry 10c8b310; body size 3 bytes.
#line 1 "ENTRY_10c8b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b320; body size 3 bytes.
#line 1 "ENTRY_10c8b320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b330; body size 3 bytes.
#line 1 "ENTRY_10c8b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b340; body size 3 bytes.
#line 1 "ENTRY_10c8b340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b350; body size 3 bytes.
#line 1 "ENTRY_10c8b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b360; body size 3 bytes.
#line 1 "ENTRY_10c8b360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b370; body size 3 bytes.
#line 1 "ENTRY_10c8b370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b380; body size 3 bytes.
#line 1 "ENTRY_10c8b380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b390; body size 3 bytes.
#line 1 "ENTRY_10c8b390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b3a0; body size 3 bytes.
#line 1 "ENTRY_10c8b3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b3b0; body size 3 bytes.
#line 1 "ENTRY_10c8b3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b3b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b3c0; body size 3 bytes.
#line 1 "ENTRY_10c8b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b3c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c8b3d0; body size 92 bytes.
#line 1 "ENTRY_10c8b3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c8b3d0(uint param_2,int param_3,int *param_4)
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


// Reference entry 10c8b450; body size 92 bytes.
#line 1 "ENTRY_10c8b450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c8b450(uint param_2,int param_3,int *param_4)
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


// Reference entry 10c8b4d0; body size 13 bytes.
#line 1 "ENTRY_10c8b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8b4d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c8b4e0; body size 13 bytes.
#line 1 "ENTRY_10c8b4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8b4e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10c8b4f0; body size 30 bytes.
#line 1 "ENTRY_10c8b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c8b4f0(int param_1)

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


// Reference entry 10c8b520; body size 4 bytes.
#line 1 "ENTRY_10c8b520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8b520(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c8b530; body size 4 bytes.
#line 1 "ENTRY_10c8b530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8b530(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c8b540; body size 4 bytes.
#line 1 "ENTRY_10c8b540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8b540(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c8b550; body size 4 bytes.
#line 1 "ENTRY_10c8b550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c8b550(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10c8b640; body size 3 bytes.
#line 1 "ENTRY_10c8b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8b640(void)

{
  return;
}


// Reference entry 10c8b650; body size 3 bytes.
#line 1 "ENTRY_10c8b650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8b650(void)

{
  return;
}


// Reference entry 10c8b660; body size 3 bytes.
#line 1 "ENTRY_10c8b660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8b660(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10c8b670; body size 3 bytes.
#line 1 "ENTRY_10c8b670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8b670(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10c8b7e0; body size 11 bytes.
#line 1 "ENTRY_10c8b7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b7e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c8b7f0; body size 11 bytes.
#line 1 "ENTRY_10c8b7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8b7f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10c8b800; body size 6 bytes.
#line 1 "ENTRY_10c8b800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8b800(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c8b810; body size 6 bytes.
#line 1 "ENTRY_10c8b810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8b810(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10c8b940; body size 14 bytes.
#line 1 "ENTRY_10c8b940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8b940(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10c8b960; body size 14 bytes.
#line 1 "ENTRY_10c8b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8b960(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10c8b980; body size 13 bytes.
#line 1 "ENTRY_10c8b980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8b980(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c8b990; body size 13 bytes.
#line 1 "ENTRY_10c8b990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8b990(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c8b9a0; body size 12 bytes.
#line 1 "ENTRY_10c8b9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8b9a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c8b9b0; body size 12 bytes.
#line 1 "ENTRY_10c8b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8b9b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c8b9c0; body size 11 bytes.
#line 1 "ENTRY_10c8b9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8b9c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8b9d0; body size 11 bytes.
#line 1 "ENTRY_10c8b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8b9d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8be00; body size 43 bytes.
#line 1 "ENTRY_10c8be00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8be00(int param_1,int param_2,int param_3)

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


// Reference entry 10c8be40; body size 43 bytes.
#line 1 "ENTRY_10c8be40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8be40(int param_1,int param_2,int param_3)

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


// Reference entry 10c8beb0; body size 90 bytes.
#line 1 "ENTRY_10c8beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c8beb0(uint param_1)

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


// Reference entry 10c8bf30; body size 90 bytes.
#line 1 "ENTRY_10c8bf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c8bf30(uint param_1)

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


// Reference entry 10c8bfb0; body size 87 bytes.
#line 1 "ENTRY_10c8bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c8bfb0(uint param_1)

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


// Reference entry 10c8c020; body size 87 bytes.
#line 1 "ENTRY_10c8c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10c8c020(uint param_1)

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


// Reference entry 10c8c090; body size 14 bytes.
#line 1 "ENTRY_10c8c090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8c090(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10c8c0b0; body size 14 bytes.
#line 1 "ENTRY_10c8c0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8c0b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10c8c0d0; body size 13 bytes.
#line 1 "ENTRY_10c8c0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8c0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c8c0e0; body size 13 bytes.
#line 1 "ENTRY_10c8c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8c0e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10c8c0f0; body size 68 bytes.
#line 1 "ENTRY_10c8c0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c8c0f0(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c8c150; body size 68 bytes.
#line 1 "ENTRY_10c8c150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10c8c150(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10c8c1b0; body size 4 bytes.
#line 1 "ENTRY_10c8c1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8c1b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10c8c1c0; body size 4 bytes.
#line 1 "ENTRY_10c8c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8c1c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10c8c8f0; body size 68 bytes.
#line 1 "ENTRY_10c8c8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8c8f0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10c85310(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10c87ec0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10c8c950; body size 68 bytes.
#line 1 "ENTRY_10c8c950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c8c950(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10c853f0(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10c87f40(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10c8cf90; body size 57 bytes.
#line 1 "ENTRY_10c8cf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8cf90(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10c8cfe0; body size 57 bytes.
#line 1 "ENTRY_10c8cfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c8cfe0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10c8d030; body size 60 bytes.
#line 1 "ENTRY_10c8d030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8d030(int param_1,int param_2)

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


// Reference entry 10c8d080; body size 60 bytes.
#line 1 "ENTRY_10c8d080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8d080(int param_1,int param_2)

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


// Reference entry 10c8d0d0; body size 61 bytes.
#line 1 "ENTRY_10c8d0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8d0d0(int param_1,int param_2)

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


// Reference entry 10c8d120; body size 61 bytes.
#line 1 "ENTRY_10c8d120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10c8d120(int param_1,int param_2)

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


// Reference entry 10c8d1c0; body size 12 bytes.
#line 1 "ENTRY_10c8d1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8d1c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c8d1d0; body size 12 bytes.
#line 1 "ENTRY_10c8d1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8d1d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10c8d1e0; body size 11 bytes.
#line 1 "ENTRY_10c8d1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8d1e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8d1f0; body size 11 bytes.
#line 1 "ENTRY_10c8d1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8d1f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8d200; body size 11 bytes.
#line 1 "ENTRY_10c8d200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c8d200(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10c8e010; body size 4 bytes.
#line 1 "ENTRY_10c8e010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c8e010(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10c91330; body size 32 bytes.
#line 1 "ENTRY_10c91330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91330(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    cVar1 = (char)(thunk_FUN_11458ad0(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c91360; body size 38 bytes.
#line 1 "ENTRY_10c91360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91360(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x1c) != 0) {
    cVar1 = (char)((**(code **)(*(int *)(*(int *)(param_1 + 0x1c) + 0x378) + 8))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10c91b90; body size 4 bytes.
#line 1 "ENTRY_10c91b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c91b90(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10c91ba0; body size 4 bytes.
#line 1 "ENTRY_10c91ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10c91ba0(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10c91bb0; body size 6 bytes.
#line 1 "ENTRY_10c91bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91bb0(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10c91bc0; body size 6 bytes.
#line 1 "ENTRY_10c91bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91bc0(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10c91bd0; body size 6 bytes.
#line 1 "ENTRY_10c91bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91bd0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c91be0; body size 6 bytes.
#line 1 "ENTRY_10c91be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91be0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c91bf0; body size 6 bytes.
#line 1 "ENTRY_10c91bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91bf0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c91c00; body size 6 bytes.
#line 1 "ENTRY_10c91c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91c00(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10c91c10; body size 6 bytes.
#line 1 "ENTRY_10c91c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91c10(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10c91c20; body size 6 bytes.
#line 1 "ENTRY_10c91c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c91c20(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10c92d50; body size 5 bytes.
#line 1 "ENTRY_10c92d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c92d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c92d60; body size 5 bytes.
#line 1 "ENTRY_10c92d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c92d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c92e10; body size 28 bytes.
#line 1 "ENTRY_10c92e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c92e10(undefined4 *param_1)

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


// Reference entry 10c931f0; body size 9 bytes.
#line 1 "ENTRY_10c931f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c931f0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c93200; body size 9 bytes.
#line 1 "ENTRY_10c93200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10c93200(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10c93600; body size 26 bytes.
#line 1 "ENTRY_10c93600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c93600(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10c93620; body size 78 bytes.
#line 1 "ENTRY_10c93620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c93620(int *param_2)
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


// Reference entry 10c93690; body size 25 bytes.
#line 1 "ENTRY_10c93690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c93690(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c936b0; body size 25 bytes.
#line 1 "ENTRY_10c936b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c936b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10c936d0; body size 31 bytes.
#line 1 "ENTRY_10c936d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c936d0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(param_2);
  if (param_2 != 0) {
    thunk_FUN_1123fce0(param_2 + 4);
  }
  return (int *)(param_1);
}


// Reference entry 10c980f0; body size 4 bytes.
#line 1 "ENTRY_10c980f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10c980f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x3c));
}


// Reference entry 10c9a700; body size 20 bytes.
#line 1 "ENTRY_10c9a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9a700(int param_1)

{
  if ((param_1 != 0) && (param_1 != 2)) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 10c9af10; body size 53 bytes.
#line 1 "ENTRY_10c9af10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10c9af10(int param_1)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x6c) != (undefined4 *)((0x0))) {
    func_0x10098e46(**(undefined4 **)(param_1 + 0x6c));
    return;
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1034d200(), 0);
    func_0x10098e46(uVar1);
    return;
  }
  func_0x10098e46(0);
  return;
}


// Reference entry 10c9da20; body size 25 bytes.
#line 1 "ENTRY_10c9da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10c9da20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10c9da40; body size 22 bytes.
#line 1 "ENTRY_10c9da40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c9da40(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10c9da60; body size 33 bytes.
#line 1 "ENTRY_10c9da60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10c9da60(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10c9db10; body size 78 bytes.
#line 1 "ENTRY_10c9db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10c9db10(int *param_2)
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


// Reference entry 10c9db80; body size 3 bytes.
#line 1 "ENTRY_10c9db80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c9db80(void)

{
  return;
}


// Reference entry 10c9dc20; body size 57 bytes.
#line 1 "ENTRY_10c9dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c9dc20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(puVar1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 10c9dc70; body size 57 bytes.
#line 1 "ENTRY_10c9dc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c9dc70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(puVar1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 10c9dcc0; body size 57 bytes.
#line 1 "ENTRY_10c9dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10c9dcc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  puVar1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(puVar1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x14);
  return;
}


// Reference entry 10c9e050; body size 7 bytes.
#line 1 "ENTRY_10c9e050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9e050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c9e060; body size 7 bytes.
#line 1 "ENTRY_10c9e060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9e060(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10c9e070; body size 169 bytes.
#line 1 "ENTRY_10c9e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c9e070(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)((param_3 - param_1) / 0x14);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 0x14 + param_1);
    thunk_FUN_10c9e620(param_1,iVar1,iVar2 * 0x28 + param_1,param_4);
    thunk_FUN_10c9e620(param_2 + iVar2 * -0x14,param_2,iVar2 * 0x14 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -0x14);
    thunk_FUN_10c9e620(param_3 + iVar2 * -0x28,iVar3,param_3,param_4);
    thunk_FUN_10c9e620(iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_10c9e620(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 10c9e840; body size 111 bytes.
#line 1 "ENTRY_10c9e840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * FUN_10c9e840(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  SCStr *this_;
  
  while (param_1 != param_2) {
    iVar1 = (int)(param_2 + -0x14);
    puVar2 = (undefined4 *)(param_3 + -5);
    this_ = (SCStr *)((SCStr *)(param_3 + -3));
    iVar3 = (int)(3);
    *puVar2 = (undefined4)(*(undefined4 *)(param_2 + -0x14));
    param_3[-4] = (undefined4)(*(undefined4 *)(param_2 + -0x10));
    do {
      if (this_ + (iVar1 - (int)puVar2) != this_) {
        ((SCStr *)(this_))->int_release();
        *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(this_ + (iVar1 - (int)puVar2))));
        ((SCStr *)(this_))->int_addref();
      }
      this_ = (SCStr *)(this_ + 4);
      iVar3 = (int)(iVar3 + -1);
      param_2 = (int)(iVar1);
      param_3 = (undefined4 *)(puVar2);
    } while (iVar3 != 0);
  }
  return (undefined4 *)(param_3);
}


// Reference entry 10c9e8d0; body size 8 bytes.
#line 1 "ENTRY_10c9e8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c9e8d0(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 10c9f380; body size 5 bytes.
#line 1 "ENTRY_10c9f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9f380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c9f390; body size 3 bytes.
#line 1 "ENTRY_10c9f390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c9f390(void)

{
  return;
}


// Reference entry 10c9f6a0; body size 60 bytes.
#line 1 "ENTRY_10c9f6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10c9f6a0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  thunk_FUN_10ca2370(param_1);
  thunk_FUN_10c9f3a0(param_1,0,(param_2 - param_1) / 0x14,param_4,param_5);
  return;
}


// Reference entry 10c9f810; body size 8 bytes.
#line 1 "ENTRY_10c9f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10c9f810(int param_1)

{
  return (int)(param_1 + -0x14);
}


// Reference entry 10c9fe40; body size 5 bytes.
#line 1 "ENTRY_10c9fe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9fe40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c9ffd0; body size 5 bytes.
#line 1 "ENTRY_10c9ffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9ffd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10c9ffe0; body size 5 bytes.
#line 1 "ENTRY_10c9ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10c9ffe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca00a0; body size 46 bytes.
#line 1 "ENTRY_10ca00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ca00a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  _eh_vector_copy_constructor_iterator_(param_2 + 2,param_3 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  return;
}


// Reference entry 10ca00e0; body size 46 bytes.
#line 1 "ENTRY_10ca00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ca00e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  _eh_vector_copy_constructor_iterator_(param_2 + 2,param_3 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  return;
}


// Reference entry 10ca01f0; body size 15 bytes.
#line 1 "ENTRY_10ca01f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca01f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ca0210; body size 5 bytes.
#line 1 "ENTRY_10ca0210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0220; body size 5 bytes.
#line 1 "ENTRY_10ca0220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0230; body size 5 bytes.
#line 1 "ENTRY_10ca0230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0240; body size 5 bytes.
#line 1 "ENTRY_10ca0240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0250; body size 5 bytes.
#line 1 "ENTRY_10ca0250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0330; body size 5 bytes.
#line 1 "ENTRY_10ca0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0340; body size 5 bytes.
#line 1 "ENTRY_10ca0340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ca0340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0350; body size 46 bytes.
#line 1 "ENTRY_10ca0350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ca0350(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10c9fb30(param_1,param_2,(param_2 - param_1) / 0x14,param_3);
  return;
}


// Reference entry 10ca0460; body size 28 bytes.
#line 1 "ENTRY_10ca0460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ca0460(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca05e0; body size 26 bytes.
#line 1 "ENTRY_10ca05e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca05e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0600; body size 21 bytes.
#line 1 "ENTRY_10ca0600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0600(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0620; body size 11 bytes.
#line 1 "ENTRY_10ca0620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0620(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0630; body size 11 bytes.
#line 1 "ENTRY_10ca0630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0630(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0640; body size 25 bytes.
#line 1 "ENTRY_10ca0640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0640(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0660; body size 23 bytes.
#line 1 "ENTRY_10ca0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ca0660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0680; body size 3 bytes.
#line 1 "ENTRY_10ca0680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca0680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca0690; body size 49 bytes.
#line 1 "ENTRY_10ca0690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0690(undefined4 *param_2)
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


// Reference entry 10ca06d0; body size 23 bytes.
#line 1 "ENTRY_10ca06d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ca06d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0870; body size 26 bytes.
#line 1 "ENTRY_10ca0870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0870(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOUNoSecureState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0890; body size 30 bytes.
#line 1 "ENTRY_10ca0890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0890(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOUSecureIntroState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca08c0; body size 26 bytes.
#line 1 "ENTRY_10ca08c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca08c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateAudioWarningState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca08e0; body size 26 bytes.
#line 1 "ENTRY_10ca08e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca08e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCanceledState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0a20; body size 26 bytes.
#line 1 "ENTRY_10ca0a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateChoiceState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0a40; body size 26 bytes.
#line 1 "ENTRY_10ca0a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0a40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0a60; body size 74 bytes.
#line 1 "ENTRY_10ca0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0a60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateControllerNeedsUpdatingState);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  *(undefined2*)(param_1 + 8) = (undefined2)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0ac0; body size 26 bytes.
#line 1 "ENTRY_10ca0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0ac0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateControllerSelfUpdateState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0d10; body size 26 bytes.
#line 1 "ENTRY_10ca0d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0d10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateDevicesUpgradedState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0d30; body size 26 bytes.
#line 1 "ENTRY_10ca0d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0d30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateErrorInfoState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0d50; body size 26 bytes.
#line 1 "ENTRY_10ca0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0d50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateErrorState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0d70; body size 130 bytes.
#line 1 "ENTRY_10ca0d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0d70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateFinishSecureReg);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateFinishSecureReg);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xd] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x10) = (undefined2)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0e20; body size 26 bytes.
#line 1 "ENTRY_10ca0e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0e20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateFinishSecureRegFailed);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0e40; body size 26 bytes.
#line 1 "ENTRY_10ca0e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0e40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateFinishedState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0e60; body size 26 bytes.
#line 1 "ENTRY_10ca0e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0e60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0e80; body size 26 bytes.
#line 1 "ENTRY_10ca0e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0e80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateIntroductionState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0ea0; body size 26 bytes.
#line 1 "ENTRY_10ca0ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0ea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateNoInlineSelfUpdate);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0ec0; body size 26 bytes.
#line 1 "ENTRY_10ca0ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0ec0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateNotRequiredState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0ee0; body size 26 bytes.
#line 1 "ENTRY_10ca0ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0ee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdatePendingState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca0f00; body size 26 bytes.
#line 1 "ENTRY_10ca0f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca0f00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdatePostUpdateReindexingNeededState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca1070; body size 26 bytes.
#line 1 "ENTRY_10ca1070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca1070(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateSecRegWarningState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca1090; body size 26 bytes.
#line 1 "ENTRY_10ca1090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca1090(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOnlineUpdateWizCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10ca14c0; body size 50 bytes.
#line 1 "ENTRY_10ca14c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca14c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(param_1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  return (undefined4 *)(param_1);
}


// Reference entry 10ca1500; body size 50 bytes.
#line 1 "ENTRY_10ca1500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca1500(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  _eh_vector_copy_constructor_iterator_(param_1 + 2,param_2 + 2,4,3,((int (*)())&SCStr::op_ctor),((int (*)())&SCStr::op_dtor));
  return (undefined4 *)(param_1);
}


// Reference entry 10ca19e0; body size 7 bytes.
#line 1 "ENTRY_10ca19e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca19e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca19f0; body size 7 bytes.
#line 1 "ENTRY_10ca19f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca19f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1a00; body size 7 bytes.
#line 1 "ENTRY_10ca1a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1a00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1a10; body size 7 bytes.
#line 1 "ENTRY_10ca1a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1a10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1ac0; body size 7 bytes.
#line 1 "ENTRY_10ca1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1ad0; body size 7 bytes.
#line 1 "ENTRY_10ca1ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1bb0; body size 7 bytes.
#line 1 "ENTRY_10ca1bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1de0; body size 7 bytes.
#line 1 "ENTRY_10ca1de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1df0; body size 7 bytes.
#line 1 "ENTRY_10ca1df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca1e00; body size 7 bytes.
#line 1 "ENTRY_10ca1e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca1e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2020; body size 7 bytes.
#line 1 "ENTRY_10ca2020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2030; body size 7 bytes.
#line 1 "ENTRY_10ca2030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2030(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2040; body size 7 bytes.
#line 1 "ENTRY_10ca2040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2050; body size 7 bytes.
#line 1 "ENTRY_10ca2050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2050(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2060; body size 7 bytes.
#line 1 "ENTRY_10ca2060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2060(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2070; body size 7 bytes.
#line 1 "ENTRY_10ca2070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2080; body size 7 bytes.
#line 1 "ENTRY_10ca2080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2090; body size 7 bytes.
#line 1 "ENTRY_10ca2090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2090(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2190; body size 7 bytes.
#line 1 "ENTRY_10ca2190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca2190(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca21a0; body size 7 bytes.
#line 1 "ENTRY_10ca21a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca21a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10ca2320; body size 60 bytes.
#line 1 "ENTRY_10ca2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ca2320(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10ca3370();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10ca23e0; body size 15 bytes.
#line 1 "ENTRY_10ca23e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ca23e0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x14);
}


// Reference entry 10ca2400; body size 4 bytes.
#line 1 "ENTRY_10ca2400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca2400(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ca2410; body size 3 bytes.
#line 1 "ENTRY_10ca2410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca2410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ca3160; body size 63 bytes.
#line 1 "ENTRY_10ca3160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10ca3160(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x14);
  if (0xccccccc - (uVar1 >> 1) < uVar1) {
    return (uint)(0xccccccc);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10ca3280; body size 3 bytes.
#line 1 "ENTRY_10ca3280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca3280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca3290; body size 3 bytes.
#line 1 "ENTRY_10ca3290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca3290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca32a0; body size 3 bytes.
#line 1 "ENTRY_10ca32a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca32a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca32b0; body size 3 bytes.
#line 1 "ENTRY_10ca32b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca32b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ca3310; body size 3 bytes.
#line 1 "ENTRY_10ca3310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ca3310(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ca3320; body size 6 bytes.
#line 1 "ENTRY_10ca3320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ca3320(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10ca3330; body size 43 bytes.
#line 1 "ENTRY_10ca3330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ca3330(undefined4 *param_2)
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


// Reference entry 10ca3620; body size 3 bytes.
#line 1 "ENTRY_10ca3620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca3620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ca3c10; body size 90 bytes.
#line 1 "ENTRY_10ca3c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ca3c10(uint param_1)

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


// Reference entry 10ca3e80; body size 11 bytes.
#line 1 "ENTRY_10ca3e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ca3e80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ca43a0; body size 23 bytes.
#line 1 "ENTRY_10ca43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ca43a0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x14);
}


// Reference entry 10ca7760; body size 16 bytes.
#line 1 "ENTRY_10ca7760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca7760(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ca7780; body size 9 bytes.
#line 1 "ENTRY_10ca7780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ca7780(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ca7a70; body size 12 bytes.
#line 1 "ENTRY_10ca7a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ca7a70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ca8650; body size 53 bytes.
#line 1 "ENTRY_10ca8650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10ca8650(SCStr *param_1,undefined4 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  
  switch(param_2) {
  case 0:
    uVar2 = (undefined4)(0x2160);
    break;
  case 1:
    uVar2 = (undefined4)(0x2161);
    break;
  case 2:
    uVar2 = (undefined4)(0x2162);
    break;
  case 3:
    uVar2 = (undefined4)(0x2163);
    break;
  case 4:
    uVar2 = (undefined4)(0x2164);
    break;
  default:
    uVar2 = (undefined4)(0x2165);
  }
  pcVar1 = (char *)((char *)thunk_FUN_1109aba0(uVar2,&DAT_11882ff0), 0);
  ((SCStr *)(param_1))->int_allocRep(pcVar1);
  return (SCStr *)(param_1);
}


// Reference entry 10ca9a90; body size 14 bytes.
#line 1 "ENTRY_10ca9a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10ca9a90(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x44) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x44), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cb0f80; body size 7 bytes.
#line 1 "ENTRY_10cb0f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb0f80(int param_1)

{
  return (int)(param_1 + 0x478);
}


// Reference entry 10cb1a80; body size 11 bytes.
#line 1 "ENTRY_10cb1a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cb1a80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0xd0) == 1);
}


// Reference entry 10cb1aa0; body size 7 bytes.
#line 1 "ENTRY_10cb1aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cb1aa0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10cb1c60; body size 11 bytes.
#line 1 "ENTRY_10cb1c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cb1c60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0xd8) != 0);
}


// Reference entry 10cb22a0; body size 6 bytes.
#line 1 "ENTRY_10cb22a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb22a0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10cb22b0; body size 6 bytes.
#line 1 "ENTRY_10cb22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb22b0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10cb22d0; body size 7 bytes.
#line 1 "ENTRY_10cb22d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb22d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x474));
}


// Reference entry 10cb3940; body size 28 bytes.
#line 1 "ENTRY_10cb3940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb3940(undefined4 *param_1)

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


// Reference entry 10cb4fd0; body size 7 bytes.
#line 1 "ENTRY_10cb4fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb4fd0(int param_1)

{
  return (int)(param_1 + 0xcc6);
}


// Reference entry 10cb6c80; body size 24 bytes.
#line 1 "ENTRY_10cb6c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10cb6c80(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10cb7400; body size 11 bytes.
#line 1 "ENTRY_10cb7400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb7400(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x40))();
  return;
}


// Reference entry 10cb7670; body size 23 bytes.
#line 1 "ENTRY_10cb7670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb7670(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x14);
}


// Reference entry 10cb76c0; body size 7 bytes.
#line 1 "ENTRY_10cb76c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb76c0(int param_1)

{
  return (int)(param_1 + 0xda4);
}


// Reference entry 10cb7940; body size 7 bytes.
#line 1 "ENTRY_10cb7940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb7940(int param_1)

{
  return (int)(param_1 + 0x46c);
}


// Reference entry 10cb7950; body size 4 bytes.
#line 1 "ENTRY_10cb7950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb7950(int param_1)

{
  return (int)(param_1 + 0x21);
}


// Reference entry 10cb7960; body size 7 bytes.
#line 1 "ENTRY_10cb7960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cb7960(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x4cc));
}


// Reference entry 10cb7970; body size 31 bytes.
#line 1 "ENTRY_10cb7970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cb7970(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 200) != (int)(param_2)) {
    *(int*)(param_1 + 200) = (int)(param_2);
    *(undefined4*)(param_1 + 0xcc) = (undefined4)(0);
  }
  return;
}


// Reference entry 10cb79a0; body size 7 bytes.
#line 1 "ENTRY_10cb79a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb79a0(int param_1)

{
  return (int)(param_1 + 0x464);
}


// Reference entry 10cb79b0; body size 7 bytes.
#line 1 "ENTRY_10cb79b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb79b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd8));
}


// Reference entry 10cb79d0; body size 26 bytes.
#line 1 "ENTRY_10cb79d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cb79d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb79f0; body size 26 bytes.
#line 1 "ENTRY_10cb79f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cb79f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb7a10; body size 26 bytes.
#line 1 "ENTRY_10cb7a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cb7a10(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb7a30; body size 26 bytes.
#line 1 "ENTRY_10cb7a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cb7a30(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb7a50; body size 26 bytes.
#line 1 "ENTRY_10cb7a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cb7a50(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10cb7b70; body size 16 bytes.
#line 1 "ENTRY_10cb7b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cb7b70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb7dc0; body size 3 bytes.
#line 1 "ENTRY_10cb7dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb7dc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb7dd0; body size 3 bytes.
#line 1 "ENTRY_10cb7dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb7dd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb7de0; body size 3 bytes.
#line 1 "ENTRY_10cb7de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb7de0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb7df0; body size 3 bytes.
#line 1 "ENTRY_10cb7df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb7df0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88a0; body size 3 bytes.
#line 1 "ENTRY_10cb88a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb88a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88b0; body size 3 bytes.
#line 1 "ENTRY_10cb88b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb88b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88c0; body size 3 bytes.
#line 1 "ENTRY_10cb88c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb88c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88d0; body size 3 bytes.
#line 1 "ENTRY_10cb88d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb88d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cb88e0; body size 28 bytes.
#line 1 "ENTRY_10cb88e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb88e0(undefined4 *param_1)

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


// Reference entry 10cb8910; body size 28 bytes.
#line 1 "ENTRY_10cb8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb8910(undefined4 *param_1)

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


// Reference entry 10cb8940; body size 28 bytes.
#line 1 "ENTRY_10cb8940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb8940(undefined4 *param_1)

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


// Reference entry 10cb8970; body size 28 bytes.
#line 1 "ENTRY_10cb8970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb8970(undefined4 *param_1)

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


// Reference entry 10cb89a0; body size 22 bytes.
#line 1 "ENTRY_10cb89a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb89a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8a90; body size 38 bytes.
#line 1 "ENTRY_10cb8a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cb8a90(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10cb8ac0; body size 22 bytes.
#line 1 "ENTRY_10cb8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb8ac0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8ae0; body size 40 bytes.
#line 1 "ENTRY_10cb8ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cb8ae0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 10cb8b20; body size 13 bytes.
#line 1 "ENTRY_10cb8b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cb8b20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10cb8bf0; body size 5 bytes.
#line 1 "ENTRY_10cb8bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb8c00; body size 37 bytes.
#line 1 "ENTRY_10cb8c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8c00(int param_1,SCStr *param_2)

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


// Reference entry 10cb8d70; body size 5 bytes.
#line 1 "ENTRY_10cb8d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb8d80; body size 34 bytes.
#line 1 "ENTRY_10cb8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cb8d80(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10cb8e80; body size 15 bytes.
#line 1 "ENTRY_10cb8e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8e80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10cb8ea0; body size 5 bytes.
#line 1 "ENTRY_10cb8ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb8eb0; body size 5 bytes.
#line 1 "ENTRY_10cb8eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cb8eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb8ec0; body size 6 bytes.
#line 1 "ENTRY_10cb8ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cb8ec0(void)

{
  return (char *)("SCIDisplayType");
}


// Reference entry 10cb8ed0; body size 27 bytes.
#line 1 "ENTRY_10cb8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cb8ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8f00; body size 32 bytes.
#line 1 "ENTRY_10cb8f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb8f00(undefined4 *param_2)
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


// Reference entry 10cb8f30; body size 16 bytes.
#line 1 "ENTRY_10cb8f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cb8f30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8f50; body size 18 bytes.
#line 1 "ENTRY_10cb8f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb8f50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8f70; body size 11 bytes.
#line 1 "ENTRY_10cb8f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb8f70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb8f80; body size 11 bytes.
#line 1 "ENTRY_10cb8f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb8f80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb9010; body size 11 bytes.
#line 1 "ENTRY_10cb9010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb9010(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb9020; body size 11 bytes.
#line 1 "ENTRY_10cb9020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cb9020(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb9310; body size 9 bytes.
#line 1 "ENTRY_10cb9310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cb9310(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDisplayType);
  return (undefined4 *)(param_1);
}


// Reference entry 10cb94c0; body size 7 bytes.
#line 1 "ENTRY_10cb94c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb94c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cb9540; body size 14 bytes.
#line 1 "ENTRY_10cb9540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10cb9540(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10cb9560; body size 14 bytes.
#line 1 "ENTRY_10cb9560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10cb9560(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10cb9690; body size 6 bytes.
#line 1 "ENTRY_10cb9690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb9690(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10cb96a0; body size 6 bytes.
#line 1 "ENTRY_10cb96a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb96a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10cb96b0; body size 6 bytes.
#line 1 "ENTRY_10cb96b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cb96b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10cb9860; body size 14 bytes.
#line 1 "ENTRY_10cb9860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cb9860(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10cb9cb0; body size 3 bytes.
#line 1 "ENTRY_10cb9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb9cc0; body size 3 bytes.
#line 1 "ENTRY_10cb9cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb9cd0; body size 3 bytes.
#line 1 "ENTRY_10cb9cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb9ce0; body size 3 bytes.
#line 1 "ENTRY_10cb9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cb9cf0; body size 3 bytes.
#line 1 "ENTRY_10cb9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cb9cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cba000; body size 30 bytes.
#line 1 "ENTRY_10cba000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cba000(int param_1)

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


// Reference entry 10cba060; body size 3 bytes.
#line 1 "ENTRY_10cba060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cba060(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10cba070; body size 11 bytes.
#line 1 "ENTRY_10cba070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cba070(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10cba0f0; body size 11 bytes.
#line 1 "ENTRY_10cba0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cba0f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cba1d0; body size 66 bytes.
#line 1 "ENTRY_10cba1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cba1d0(int param_1,int param_2)

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


// Reference entry 10cba230; body size 11 bytes.
#line 1 "ENTRY_10cba230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cba230(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cba2b0; body size 4 bytes.
#line 1 "ENTRY_10cba2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cba2b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 10cba9d0; body size 39 bytes.
#line 1 "ENTRY_10cba9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cba9d0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 10cbb120; body size 4 bytes.
#line 1 "ENTRY_10cbb120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cbb120(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10cbc1a0; body size 67 bytes.
#line 1 "ENTRY_10cbc1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cbc1a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = (uint)((**(code **)(*param_1 + 0x58))(), 0);
  if (uVar1 >> 8 == 0xfe) {
    iVar2 = (int)((**(code **)(*param_1 + 0x24))(), 0);
    if (iVar2 != 0) {
      uVar3 = (undefined4)(thunk_FUN_110ecc20(), 0);
      return (undefined4)(uVar3);
    }
  }
  else {
    iVar2 = (int)((**(code **)(*param_1 + 0x24))(), 0);
    if (iVar2 != 0) {
      return (undefined4)(*(undefined4 *)(iVar2 + 0x1994));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10cbc200; body size 6 bytes.
#line 1 "ENTRY_10cbc200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cbc200(void)

{
  return (char *)("SCIDisplayType");
}


// Reference entry 10cbc580; body size 6 bytes.
#line 1 "ENTRY_10cbc580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cbc580(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10cbc590; body size 6 bytes.
#line 1 "ENTRY_10cbc590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cbc590(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10cbc5a0; body size 5 bytes.
#line 1 "ENTRY_10cbc5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cbc5a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cbc860; body size 36 bytes.
#line 1 "ENTRY_10cbc860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cbc860(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 8));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10cbcad0; body size 3 bytes.
#line 1 "ENTRY_10cbcad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cbcad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cbe3f0; body size 16 bytes.
#line 1 "ENTRY_10cbe3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cbe3f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cbe7c0; body size 3 bytes.
#line 1 "ENTRY_10cbe7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cbe7c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc07a0; body size 25 bytes.
#line 1 "ENTRY_10cc07a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc07a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc07c0; body size 33 bytes.
#line 1 "ENTRY_10cc07c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc07c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc07f0; body size 3 bytes.
#line 1 "ENTRY_10cc07f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc07f0(void)

{
  return;
}


// Reference entry 10cc0800; body size 18 bytes.
#line 1 "ENTRY_10cc0800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc0800(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10cc09d0; body size 7 bytes.
#line 1 "ENTRY_10cc09d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc09d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc09e0; body size 5 bytes.
#line 1 "ENTRY_10cc09e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc09e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc09f0; body size 36 bytes.
#line 1 "ENTRY_10cc09f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10cc09f0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10cc0a20; body size 13 bytes.
#line 1 "ENTRY_10cc0a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc0a20(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10cc0a30; body size 36 bytes.
#line 1 "ENTRY_10cc0a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc0a30(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc0820(puVar1,param_2);
  return;
}


// Reference entry 10cc0a60; body size 5 bytes.
#line 1 "ENTRY_10cc0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc0a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc0a70; body size 6 bytes.
#line 1 "ENTRY_10cc0a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cc0a70(void)

{
  return (char *)("SCIOpGetAboutSonosString");
}


// Reference entry 10cc0a80; body size 28 bytes.
#line 1 "ENTRY_10cc0a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0a80(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0b40; body size 27 bytes.
#line 1 "ENTRY_10cc0b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0b40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0d10; body size 16 bytes.
#line 1 "ENTRY_10cc0d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0d30; body size 23 bytes.
#line 1 "ENTRY_10cc0d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0d30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0d50; body size 3 bytes.
#line 1 "ENTRY_10cc0d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc0d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc0d60; body size 23 bytes.
#line 1 "ENTRY_10cc0d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0d60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0d80; body size 203 bytes.
#line 1 "ENTRY_10cc0d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc0d80(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:DeviceProperties:1","GetZoneInfo",uVar3, param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x3a56] = (undefined4)(0);
  param_1[0x3a57] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd811) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd852) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd893) = (undefined1)(0);
  *(undefined1*)(param_1 + 0x3635) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd915) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xd956) = (undefined1)(0);
  *(undefined1*)((int)param_1 + 0xe157) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc0fe0; body size 9 bytes.
#line 1 "ENTRY_10cc0fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc0fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpGetAboutSonosString);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc1250; body size 11 bytes.
#line 1 "ENTRY_10cc1250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc1250(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc1270; body size 11 bytes.
#line 1 "ENTRY_10cc1270"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc1270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cc1540; body size 28 bytes.
#line 1 "ENTRY_10cc1540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc1540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetZoneInfoAIOOp);
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


// Reference entry 10cc17a0; body size 7 bytes.
#line 1 "ENTRY_10cc17a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc17a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cc17b0; body size 18 bytes.
#line 1 "ENTRY_10cc17b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc17b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetAboutSonosString);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetAboutSonosString);


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


// Reference entry 10cc1900; body size 12 bytes.
#line 1 "ENTRY_10cc1900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10cc1900(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10cc1910; body size 4 bytes.
#line 1 "ENTRY_10cc1910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1910(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cc1920; body size 7 bytes.
#line 1 "ENTRY_10cc1920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cc1920(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10cc1930; body size 4 bytes.
#line 1 "ENTRY_10cc1930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1930(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cc1940; body size 3 bytes.
#line 1 "ENTRY_10cc1940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc1950; body size 3 bytes.
#line 1 "ENTRY_10cc1950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc1c20; body size 49 bytes.
#line 1 "ENTRY_10cc1c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10cc1c20(uint param_2)
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


// Reference entry 10cc1cd0; body size 3 bytes.
#line 1 "ENTRY_10cc1cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc1cd0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10cc1ce0; body size 3 bytes.
#line 1 "ENTRY_10cc1ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc1cf0; body size 3 bytes.
#line 1 "ENTRY_10cc1cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc1d00; body size 3 bytes.
#line 1 "ENTRY_10cc1d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc1d10; body size 3 bytes.
#line 1 "ENTRY_10cc1d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc1d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc1d20; body size 3 bytes.
#line 1 "ENTRY_10cc1d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc1d20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10cc1da0; body size 38 bytes.
#line 1 "ENTRY_10cc1da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10cc1da0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10cc1dd0; body size 27 bytes.
#line 1 "ENTRY_10cc1dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc1dd0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10cc1e00; body size 27 bytes.
#line 1 "ENTRY_10cc1e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc1e00(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10cc1f90; body size 87 bytes.
#line 1 "ENTRY_10cc1f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10cc1f90(uint param_1)

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


// Reference entry 10cc2010; body size 9 bytes.
#line 1 "ENTRY_10cc2010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2010(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10cc2020; body size 6 bytes.
#line 1 "ENTRY_10cc2020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc2020(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10cc2030; body size 61 bytes.
#line 1 "ENTRY_10cc2030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cc2030(int param_1,int param_2)

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


// Reference entry 10cc2090; body size 4 bytes.
#line 1 "ENTRY_10cc2090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2090(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10cc20a0; body size 4 bytes.
#line 1 "ENTRY_10cc20a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc20a0(int param_1)

{
  return (int)(param_1 + 0x38);
}


// Reference entry 10cc2250; body size 7 bytes.
#line 1 "ENTRY_10cc2250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc2250(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x52c));
}


// Reference entry 10cc2260; body size 20 bytes.
#line 1 "ENTRY_10cc2260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cc2260(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x58));
  return (SCStr *)(param_2);
}


// Reference entry 10cc2420; body size 20 bytes.
#line 1 "ENTRY_10cc2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cc2420(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x50));
  return (SCStr *)(param_2);
}


// Reference entry 10cc2460; body size 7 bytes.
#line 1 "ENTRY_10cc2460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2460(int param_1)

{
  return (int)(param_1 + 0xd852);
}


// Reference entry 10cc2470; body size 7 bytes.
#line 1 "ENTRY_10cc2470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2470(int param_1)

{
  return (int)(param_1 + 0xe157);
}


// Reference entry 10cc2480; body size 4 bytes.
#line 1 "ENTRY_10cc2480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2480(int param_1)

{
  return (int)(param_1 + 0x20);
}


// Reference entry 10cc2490; body size 7 bytes.
#line 1 "ENTRY_10cc2490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc2490(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xe958));
}


// Reference entry 10cc24a0; body size 7 bytes.
#line 1 "ENTRY_10cc24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc24a0(int param_1)

{
  return (int)(param_1 + 0xd893);
}


// Reference entry 10cc24b0; body size 7 bytes.
#line 1 "ENTRY_10cc24b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc24b0(int param_1)

{
  return (int)(param_1 + 0xd8d4);
}


// Reference entry 10cc2810; body size 20 bytes.
#line 1 "ENTRY_10cc2810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cc2810(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x54));
  return (SCStr *)(param_2);
}


// Reference entry 10cc2880; body size 5 bytes.
#line 1 "ENTRY_10cc2880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10cc2880(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x24));
}


// Reference entry 10cc2890; body size 7 bytes.
#line 1 "ENTRY_10cc2890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2890(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10cc28a0; body size 4 bytes.
#line 1 "ENTRY_10cc28a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cc28a0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x18));
}


// Reference entry 10cc28b0; body size 7 bytes.
#line 1 "ENTRY_10cc28b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc28b0(int param_1)

{
  return (int)(param_1 + 0xd811);
}


// Reference entry 10cc2a60; body size 4 bytes.
#line 1 "ENTRY_10cc2a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2a60(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 10cc2a90; body size 4 bytes.
#line 1 "ENTRY_10cc2a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc2a90(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 10cc2aa0; body size 4 bytes.
#line 1 "ENTRY_10cc2aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc2aa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10cc3290; body size 6 bytes.
#line 1 "ENTRY_10cc3290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cc3290(void)

{
  return (char *)("SCIOpGetAboutSonosString");
}


// Reference entry 10cc3350; body size 6 bytes.
#line 1 "ENTRY_10cc3350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc3350(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cc3360; body size 6 bytes.
#line 1 "ENTRY_10cc3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc3360(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cc34a0; body size 36 bytes.
#line 1 "ENTRY_10cc34a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc34a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc0820(puVar1,param_2);
  return;
}


// Reference entry 10cc35f0; body size 28 bytes.
#line 1 "ENTRY_10cc35f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc35f0(undefined4 *param_1)

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


// Reference entry 10cc3620; body size 28 bytes.
#line 1 "ENTRY_10cc3620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc3620(undefined4 *param_1)

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


// Reference entry 10cc39a0; body size 36 bytes.
#line 1 "ENTRY_10cc39a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc39a0(SCStr *param_2)
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


// Reference entry 10cc39d0; body size 12 bytes.
#line 1 "ENTRY_10cc39d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc39d0(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x24) = (undefined2)(param_2);
  return;
}


// Reference entry 10cc39e0; body size 10 bytes.
#line 1 "ENTRY_10cc39e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc39e0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x18) = (undefined1)(param_2);
  return;
}


// Reference entry 10cc3a00; body size 36 bytes.
#line 1 "ENTRY_10cc3a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc3a00(SCStr *param_2)
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


// Reference entry 10cc3a30; body size 36 bytes.
#line 1 "ENTRY_10cc3a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc3a30(SCStr *param_2)
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


// Reference entry 10cc3a60; body size 10 bytes.
#line 1 "ENTRY_10cc3a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc3a60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(param_2);
  return;
}


// Reference entry 10cc3a70; body size 9 bytes.
#line 1 "ENTRY_10cc3a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cc3a70(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10cc54b0; body size 25 bytes.
#line 1 "ENTRY_10cc54b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc54b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc54d0; body size 25 bytes.
#line 1 "ENTRY_10cc54d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc54d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc54f0; body size 91 bytes.
#line 1 "ENTRY_10cc54f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cc54f0(int *param_2)
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


// Reference entry 10cc5570; body size 33 bytes.
#line 1 "ENTRY_10cc5570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc5570(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc55a0; body size 33 bytes.
#line 1 "ENTRY_10cc55a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc55a0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc55d0; body size 3 bytes.
#line 1 "ENTRY_10cc55d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc55d0(void)

{
  return;
}


// Reference entry 10cc55e0; body size 3 bytes.
#line 1 "ENTRY_10cc55e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc55e0(void)

{
  return;
}


// Reference entry 10cc55f0; body size 18 bytes.
#line 1 "ENTRY_10cc55f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc55f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10cc5610; body size 18 bytes.
#line 1 "ENTRY_10cc5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc5610(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10cc5990; body size 7 bytes.
#line 1 "ENTRY_10cc5990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc59a0; body size 7 bytes.
#line 1 "ENTRY_10cc59a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc59a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cc59b0; body size 33 bytes.
#line 1 "ENTRY_10cc59b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc59b0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc59e0; body size 33 bytes.
#line 1 "ENTRY_10cc59e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cc59e0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10cc5a10; body size 5 bytes.
#line 1 "ENTRY_10cc5a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5a20; body size 5 bytes.
#line 1 "ENTRY_10cc5a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5a30; body size 36 bytes.
#line 1 "ENTRY_10cc5a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10cc5a30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10cc5a60; body size 36 bytes.
#line 1 "ENTRY_10cc5a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10cc5a60(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10cc5a90; body size 5 bytes.
#line 1 "ENTRY_10cc5a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5aa0; body size 5 bytes.
#line 1 "ENTRY_10cc5aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5ab0; body size 13 bytes.
#line 1 "ENTRY_10cc5ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc5ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10cc5ac0; body size 13 bytes.
#line 1 "ENTRY_10cc5ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc5ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10cc5ad0; body size 3 bytes.
#line 1 "ENTRY_10cc5ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc5ad0(void)

{
  return;
}


// Reference entry 10cc5ae0; body size 3 bytes.
#line 1 "ENTRY_10cc5ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cc5ae0(void)

{
  return;
}


// Reference entry 10cc5af0; body size 36 bytes.
#line 1 "ENTRY_10cc5af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc5af0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc5630<>(puVar1,param_2);
  return;
}


// Reference entry 10cc5b20; body size 36 bytes.
#line 1 "ENTRY_10cc5b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cc5b20(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc57e0(puVar1,param_2);
  return;
}


// Reference entry 10cc5b50; body size 5 bytes.
#line 1 "ENTRY_10cc5b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5b60; body size 5 bytes.
#line 1 "ENTRY_10cc5b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5b70; body size 5 bytes.
#line 1 "ENTRY_10cc5b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5b80; body size 5 bytes.
#line 1 "ENTRY_10cc5b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cc5b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc5b90; body size 28 bytes.
#line 1 "ENTRY_10cc5b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc5b90(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc5bc0; body size 28 bytes.
#line 1 "ENTRY_10cc5bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc5bc0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6d60; body size 11 bytes.
#line 1 "ENTRY_10cc6d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc6d60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6d70; body size 11 bytes.
#line 1 "ENTRY_10cc6d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc6d70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6d80; body size 11 bytes.
#line 1 "ENTRY_10cc6d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc6d80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6d90; body size 11 bytes.
#line 1 "ENTRY_10cc6d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cc6d90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6da0; body size 23 bytes.
#line 1 "ENTRY_10cc6da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc6da0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6dc0; body size 23 bytes.
#line 1 "ENTRY_10cc6dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc6dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6de0; body size 3 bytes.
#line 1 "ENTRY_10cc6de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc6de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc6df0; body size 3 bytes.
#line 1 "ENTRY_10cc6df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cc6df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cc6e00; body size 23 bytes.
#line 1 "ENTRY_10cc6e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc6e00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc6e20; body size 23 bytes.
#line 1 "ENTRY_10cc6e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc6e20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc7220; body size 197 bytes.
#line 1 "ENTRY_10cc7220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc7220(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RVSAuthenticateRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RVSAuthenticateRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  param_1[0x188e] = (undefined4)(0);
  param_1[0x188f] = (undefined4)(0);
  param_1[0x1890] = (undefined4)(0);
  param_1[0x1891] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc7320; body size 167 bytes.
#line 1 "ENTRY_10cc7320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc7320(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RVSDeleteAccountRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RVSDeleteAccountRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  param_1[0x188e] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc75e0; body size 177 bytes.
#line 1 "ENTRY_10cc75e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cc75e0(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RVSNotifyInitiateOnboardingRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RVSNotifyInitiateOnboardingRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  param_1[0x188e] = (undefined4)(0);
  param_1[0x188f] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cc7d80; body size 468 bytes.
#line 1 "ENTRY_10cc7d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cc7d80(undefined4 *param_1)

{
 try {
  uint uVar1;
  SCStr *this_;
  undefined4 *puStack_454;
  void *pvStack_450;
  undefined1 *puStack_44c;
  undefined4 uStack_448;
  undefined1 auStack_444 [1028];
  undefined1 auStack_40 [56];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_444);

  puStack_454 = (undefined4 *)(param_1);
  thunk_FUN_11261e50(uStack_8);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RVoiceServiceAmazonSkillAuthCodeAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RVoiceServiceAmazonSkillAuthCodeAIOOp);
  thunk_FUN_1124a200("application/x-www-form-urlencoded",0);
  param_1[0x188a] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x188e) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x623a) = (undefined1)(0);
  param_1[0x188f] = (undefined4)(0);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RVSAmazonSkillAuthCodeRequest);
  param_1[0x188a] = (undefined4)((uint)&ghidra_vftable_RVSAmazonSkillAuthCodeRequest);
  param_1[0x1890] = (undefined4)(0);
  param_1[0x1891] = (undefined4)(0);
  param_1[0x1892] = (undefined4)(0);
  *(unsigned char*)((char *)&uStack_448 + 0) = (unsigned char)(5);
  ((SCStr *)((SCStr *)&puStack_454))->int_allocRep("https://www.sonos.com");
  *(unsigned char*)((char *)&uStack_448 + 0) = (unsigned char)(6);
  ((SCStr *)(this_))->format((char *)(param_1 + 0x188d));
  uVar1 = (uint)(((SCStr *)((SCStr *)(param_1 + 0x188d)))->length(), 0);
  param_1[0x188b] = (undefined4)(uVar1);
  *(unsigned char*)((char *)&uStack_448 + 0) = (unsigned char)(7);
  ((SCStr *)((SCStr *)&puStack_454))->int_release();
  param_1[0x1894] = (undefined4)(0);
  param_1[0x1895] = (undefined4)(0);
  param_1[0x1893] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x1896] = (undefined4)(0);
  param_1[0x1897] = (undefined4)(0);
  uStack_448 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_448 + 1)) << 8 | (uint)(10)));
  thunk_FUN_1109f7f0();
  auStack_40[0] = (undefined1)(0);
  thunk_FUN_1109f280<>((uint)&auStack_40,0x36);
  thunk_FUN_11261330((uint)&auStack_444,0x401,"/sonos/authCode/householdId/%s",2);
  ((SCStr *)((SCStr *)(param_1 + 0x1890)))->format((char *)(param_1 + 0x1890));

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10cca400; body size 11 bytes.
#line 1 "ENTRY_10cca400"

/* WARNING: Removing unreachable block_10cca400 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cca410; body size 11 bytes.
#line 1 "ENTRY_10cca410"

/* WARNING: Removing unreachable block_10cca410 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cca420; body size 11 bytes.
#line 1 "ENTRY_10cca420"

/* WARNING: Removing unreachable block_10cca420 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca420(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cca430; body size 11 bytes.
#line 1 "ENTRY_10cca430"

/* WARNING: Removing unreachable block_10cca430 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cca440; body size 11 bytes.
#line 1 "ENTRY_10cca440"

/* WARNING: Removing unreachable block_10cca440 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cca450; body size 11 bytes.
#line 1 "ENTRY_10cca450"

/* WARNING: Removing unreachable block_10cca450 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cca460; body size 11 bytes.
#line 1 "ENTRY_10cca460"

/* WARNING: Removing unreachable block_10cca460 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cca470; body size 11 bytes.
#line 1 "ENTRY_10cca470"

/* WARNING: Removing unreachable block_10cca470 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cca480; body size 11 bytes.
#line 1 "ENTRY_10cca480"

/* WARNING: Removing unreachable block_10cca480 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cca480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10ccc3f0; body size 18 bytes.
#line 1 "ENTRY_10ccc3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc3f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpUpdateVoiceAccountData);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpUpdateVoiceAccountData);


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


// Reference entry 10ccc490; body size 18 bytes.
#line 1 "ENTRY_10ccc490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc490(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceAcctWakeWordSet);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceAcctWakeWordSet);


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


// Reference entry 10ccc4b0; body size 18 bytes.
#line 1 "ENTRY_10ccc4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc4b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAlexaROWLocale);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAlexaROWLocale);


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


// Reference entry 10ccc4d0; body size 18 bytes.
#line 1 "ENTRY_10ccc4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc4d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonChallenge);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonChallenge);


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


// Reference entry 10ccc4f0; body size 18 bytes.
#line 1 "ENTRY_10ccc4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc4f0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonSkillAuthCode);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAmazonSkillAuthCode);


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


// Reference entry 10ccc510; body size 18 bytes.
#line 1 "ENTRY_10ccc510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc510(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAuthenticate);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceAuthenticate);


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


// Reference entry 10ccc630; body size 18 bytes.
#line 1 "ENTRY_10ccc630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc630(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceDeleteAccount);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceDeleteAccount);


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


// Reference entry 10ccc6d0; body size 18 bytes.
#line 1 "ENTRY_10ccc6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccc6d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceNotifyInitiateOnboarding);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpVoiceServiceNotifyInitiateOnboarding);


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


// Reference entry 10ccc6f0; body size 14 bytes.
#line 1 "ENTRY_10ccc6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ccc6f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ccc710; body size 14 bytes.
#line 1 "ENTRY_10ccc710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ccc710(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ccc730; body size 14 bytes.
#line 1 "ENTRY_10ccc730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ccc730(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ccc750; body size 14 bytes.
#line 1 "ENTRY_10ccc750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ccc750(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ccc770; body size 4 bytes.
#line 1 "ENTRY_10ccc770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc770(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc780; body size 4 bytes.
#line 1 "ENTRY_10ccc780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc780(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc790; body size 4 bytes.
#line 1 "ENTRY_10ccc790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc790(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7a0; body size 4 bytes.
#line 1 "ENTRY_10ccc7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7b0; body size 4 bytes.
#line 1 "ENTRY_10ccc7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7c0; body size 4 bytes.
#line 1 "ENTRY_10ccc7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7d0; body size 4 bytes.
#line 1 "ENTRY_10ccc7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7e0; body size 4 bytes.
#line 1 "ENTRY_10ccc7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc7f0; body size 4 bytes.
#line 1 "ENTRY_10ccc7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc7f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ccc800; body size 3 bytes.
#line 1 "ENTRY_10ccc800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ccc810; body size 3 bytes.
#line 1 "ENTRY_10ccc810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ccc820; body size 3 bytes.
#line 1 "ENTRY_10ccc820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ccc830; body size 3 bytes.
#line 1 "ENTRY_10ccc830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccc830(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ccc840; body size 6 bytes.
#line 1 "ENTRY_10ccc840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ccc840(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ccc850; body size 6 bytes.
#line 1 "ENTRY_10ccc850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ccc850(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ccc860; body size 6 bytes.
#line 1 "ENTRY_10ccc860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ccc860(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ccc870; body size 6 bytes.
#line 1 "ENTRY_10ccc870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ccc870(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10ccda60; body size 49 bytes.
#line 1 "ENTRY_10ccda60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10ccda60(uint param_2)
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


// Reference entry 10ccdaa0; body size 49 bytes.
#line 1 "ENTRY_10ccdaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10ccdaa0(uint param_2)
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


// Reference entry 10ccdbc0; body size 3 bytes.
#line 1 "ENTRY_10ccdbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdbc0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10ccdbd0; body size 3 bytes.
#line 1 "ENTRY_10ccdbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdbd0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10ccdbe0; body size 3 bytes.
#line 1 "ENTRY_10ccdbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdbe0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ccdbf0; body size 3 bytes.
#line 1 "ENTRY_10ccdbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdbf0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ccdc00; body size 3 bytes.
#line 1 "ENTRY_10ccdc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc10; body size 3 bytes.
#line 1 "ENTRY_10ccdc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc20; body size 3 bytes.
#line 1 "ENTRY_10ccdc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc30; body size 3 bytes.
#line 1 "ENTRY_10ccdc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc40; body size 3 bytes.
#line 1 "ENTRY_10ccdc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc50; body size 3 bytes.
#line 1 "ENTRY_10ccdc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc60; body size 3 bytes.
#line 1 "ENTRY_10ccdc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc70; body size 3 bytes.
#line 1 "ENTRY_10ccdc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ccdc70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ccdc80; body size 3 bytes.
#line 1 "ENTRY_10ccdc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdc80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ccdc90; body size 3 bytes.
#line 1 "ENTRY_10ccdc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdc90(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ccdd80; body size 38 bytes.
#line 1 "ENTRY_10ccdd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10ccdd80(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ccddb0; body size 38 bytes.
#line 1 "ENTRY_10ccddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10ccddb0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10ccdde0; body size 27 bytes.
#line 1 "ENTRY_10ccdde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccdde0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ccde10; body size 27 bytes.
#line 1 "ENTRY_10ccde10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccde10(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ccde40; body size 27 bytes.
#line 1 "ENTRY_10ccde40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccde40(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ccde70; body size 27 bytes.
#line 1 "ENTRY_10ccde70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ccde70(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10ccef20; body size 87 bytes.
#line 1 "ENTRY_10ccef20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ccef20(uint param_1)

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


// Reference entry 10ccef90; body size 87 bytes.
#line 1 "ENTRY_10ccef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ccef90(uint param_1)

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


// Reference entry 10ccf000; body size 11 bytes.
#line 1 "ENTRY_10ccf000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ccf000(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ccf010; body size 11 bytes.
#line 1 "ENTRY_10ccf010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ccf010(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ccf400; body size 9 bytes.
#line 1 "ENTRY_10ccf400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ccf400(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ccf410; body size 9 bytes.
#line 1 "ENTRY_10ccf410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ccf410(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ccf420; body size 6 bytes.
#line 1 "ENTRY_10ccf420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccf420(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10ccf430; body size 6 bytes.
#line 1 "ENTRY_10ccf430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ccf430(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10cd3190; body size 61 bytes.
#line 1 "ENTRY_10cd3190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cd3190(int param_1,int param_2)

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


// Reference entry 10cd31e0; body size 61 bytes.
#line 1 "ENTRY_10cd31e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cd31e0(int param_1,int param_2)

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


// Reference entry 10cd3230; body size 9 bytes.
#line 1 "ENTRY_10cd3230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3230(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 10cd3240; body size 9 bytes.
#line 1 "ENTRY_10cd3240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3240(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 10cd3250; body size 12 bytes.
#line 1 "ENTRY_10cd3250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cd3250(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cd3260; body size 12 bytes.
#line 1 "ENTRY_10cd3260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cd3260(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10cd3270; body size 42 bytes.
#line 1 "ENTRY_10cd3270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cd3270(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(char *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10cd32b0; body size 42 bytes.
#line 1 "ENTRY_10cd32b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cd32b0(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(char *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10cd3710; body size 4 bytes.
#line 1 "ENTRY_10cd3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3710(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x3c));
}


// Reference entry 10cd3730; body size 23 bytes.
#line 1 "ENTRY_10cd3730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3730(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc3d8));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3750; body size 28 bytes.
#line 1 "ENTRY_10cd3750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cd3750(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6240), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd3780; body size 28 bytes.
#line 1 "ENTRY_10cd3780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cd3780(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6260), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd37e0; body size 23 bytes.
#line 1 "ENTRY_10cd37e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd37e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x622c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3800; body size 23 bytes.
#line 1 "ENTRY_10cd3800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3800(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x625c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3840; body size 17 bytes.
#line 1 "ENTRY_10cd3840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3840(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd38d0; body size 20 bytes.
#line 1 "ENTRY_10cd38d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd38d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd38f0; body size 23 bytes.
#line 1 "ENTRY_10cd38f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd38f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc3d4));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3910; body size 23 bytes.
#line 1 "ENTRY_10cd3910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3910(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x626c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3930; body size 23 bytes.
#line 1 "ENTRY_10cd3930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3930(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x1c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3950; body size 20 bytes.
#line 1 "ENTRY_10cd3950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3950(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3970; body size 23 bytes.
#line 1 "ENTRY_10cd3970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3970(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3990; body size 25 bytes.
#line 1 "ENTRY_10cd3990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3990(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x626c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd39b0; body size 23 bytes.
#line 1 "ENTRY_10cd39b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd39b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6240));
  return (SCStr *)(param_2);
}


// Reference entry 10cd39d0; body size 23 bytes.
#line 1 "ENTRY_10cd39d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd39d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6238));
  return (SCStr *)(param_2);
}


// Reference entry 10cd39f0; body size 23 bytes.
#line 1 "ENTRY_10cd39f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd39f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6238));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a10; body size 23 bytes.
#line 1 "ENTRY_10cd3a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3a10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6158));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a30; body size 23 bytes.
#line 1 "ENTRY_10cd3a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3a30(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x623c));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a50; body size 23 bytes.
#line 1 "ENTRY_10cd3a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3a50(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6130));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3a70; body size 23 bytes.
#line 1 "ENTRY_10cd3a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10cd3a70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6160));
  return (SCStr *)(param_2);
}


// Reference entry 10cd3ab0; body size 7 bytes.
#line 1 "ENTRY_10cd3ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3ab0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6154));
}


// Reference entry 10cd3ac0; body size 7 bytes.
#line 1 "ENTRY_10cd3ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3ac0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x617c));
}


// Reference entry 10cd3b70; body size 28 bytes.
#line 1 "ENTRY_10cd3b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cd3b70(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6234), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd3ba0; body size 4 bytes.
#line 1 "ENTRY_10cd3ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3ba0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x40));
}


// Reference entry 10cd3bb0; body size 28 bytes.
#line 1 "ENTRY_10cd3bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cd3bb0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6274), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10cd3be0; body size 7 bytes.
#line 1 "ENTRY_10cd3be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3be0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6278));
}


// Reference entry 10cd3bf0; body size 7 bytes.
#line 1 "ENTRY_10cd3bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3bf0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xc3e0));
}


// Reference entry 10cd3c00; body size 7 bytes.
#line 1 "ENTRY_10cd3c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3c00(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 25000));
}


// Reference entry 10cd3c10; body size 7 bytes.
#line 1 "ENTRY_10cd3c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3c10(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6274));
}


// Reference entry 10cd3c20; body size 4 bytes.
#line 1 "ENTRY_10cd3c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3c20(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x28));
}


// Reference entry 10cd3c30; body size 7 bytes.
#line 1 "ENTRY_10cd3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3c30(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x28))));
}


// Reference entry 10cd3c80; body size 4 bytes.
#line 1 "ENTRY_10cd3c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10cd3c80(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x34));
}


// Reference entry 10cd3cb0; body size 10 bytes.
#line 1 "ENTRY_10cd3cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cd3cb0(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x6274))));
}


// Reference entry 10cd3eb0; body size 17 bytes.
#line 1 "ENTRY_10cd3eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3eb0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6230) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6230), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3ed0; body size 17 bytes.
#line 1 "ENTRY_10cd3ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3ed0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x612c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3ef0; body size 17 bytes.
#line 1 "ENTRY_10cd3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3ef0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6230) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6230), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3f10; body size 17 bytes.
#line 1 "ENTRY_10cd3f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3f10(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6230) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6230), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3f30; body size 17 bytes.
#line 1 "ENTRY_10cd3f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3f30(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6130) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6130), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3f50; body size 17 bytes.
#line 1 "ENTRY_10cd3f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10cd3f50(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6234) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6234), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10cd3f70; body size 54 bytes.
#line 1 "ENTRY_10cd3f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cd3f70(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((int)(param_3) < *(int *)(param_1 + 0x6154)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x613c + param_3 * 8), 0);
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10cd3fc0; body size 54 bytes.
#line 1 "ENTRY_10cd3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cd3fc0(int *param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((int)(param_3) < *(int *)(param_1 + 0x617c)) {
    piVar1 = (int *)(*(int **)(param_1 + 0x6164 + param_3 * 8), 0);
    *param_2 = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      (**(code **)(*piVar1 + 4))();
    }
    return (int *)(param_2);
  }
  *param_2 = (int)(0);
  return (int *)(param_2);
}


// Reference entry 10cd4330; body size 54 bytes.
#line 1 "ENTRY_10cd4330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cd4330(SCStr *param_1)

{
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x612c));
  return;
}


// Reference entry 10cd4380; body size 116 bytes.
#line 1 "ENTRY_10cd4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cd4380(int param_1)

{
  SCStr *this_;
  uint auStack_440 [14];
  undefined1 auStack_408 [1028];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_440);
  thunk_FUN_1109f7f0();
  auStack_440[0] = (uint)(auStack_440[0] & 0xffffff00);
  thunk_FUN_1109f280<>((uint)&auStack_440,0x36);
  thunk_FUN_11261330((uint)&auStack_408,0x401,"/sonos/authCode/householdId/%s",2);
  ((SCStr *)(this_))->format((char *)(param_1 + 0x6224));
  auStack_440[0] = (uint)(0x10cd43ed);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 10cd7b30; body size 6 bytes.
#line 1 "ENTRY_10cd7b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cd7b30(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cd7b40; body size 6 bytes.
#line 1 "ENTRY_10cd7b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cd7b40(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cd7b50; body size 6 bytes.
#line 1 "ENTRY_10cd7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cd7b50(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cd7b60; body size 6 bytes.
#line 1 "ENTRY_10cd7b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cd7b60(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10cd8790; body size 36 bytes.
#line 1 "ENTRY_10cd8790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cd8790(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc5630<>(puVar1,param_2);
  return;
}


// Reference entry 10cd87c0; body size 36 bytes.
#line 1 "ENTRY_10cd87c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cd87c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10cc57e0(puVar1,param_2);
  return;
}


// Reference entry 10cd9330; body size 123 bytes.
#line 1 "ENTRY_10cd9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10cd9330(int param_2)
{
  int param_1 = (int )this;
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = (uint *)((uint *)(param_1 + 4));
  uVar4 = (uint)(-(uint)(param_2 != 0) & param_2 + 8U);
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    if (*(int *)(param_1 + 8) != 0) {
      (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    }
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
      iVar3 = (int)(thunk_FUN_1123fcd0(puVar2 + 1), 0);
      if (iVar3 == 0) {
        (**(code **)*puVar2)(1);
      }
    }
    *puVar1 = (uint)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  *puVar1 = (uint)(uVar4);
  if (uVar4 != 0) {
    thunk_FUN_1123fce0(uVar4 + 4);
  }
  return (int)(param_2);
}


// Reference entry 10cd9680; body size 27 bytes.
#line 1 "ENTRY_10cd9680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  __fastcall FUN_10cd9680(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x623c));
  return (undefined4 *)(recovered_unused_stack_1);
}


// Reference entry 10cd96b0; body size 27 bytes.
#line 1 "ENTRY_10cd96b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cd96b0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6228));
  return;
}


// Reference entry 10cd9840; body size 27 bytes.
#line 1 "ENTRY_10cd9840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cd9840(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6134));
  return;
}


// Reference entry 10cd9920; body size 9 bytes.
#line 1 "ENTRY_10cd9920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cd9920(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10cdabe0; body size 130 bytes.
#line 1 "ENTRY_10cdabe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10cdabe0(int *param_2,undefined4 param_3)
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


// Reference entry 10cdac90; body size 5 bytes.
#line 1 "ENTRY_10cdac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cdac90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cdaca0; body size 6 bytes.
#line 1 "ENTRY_10cdaca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cdaca0(void)

{
  return (char *)("SCIIndexManager");
}


// Reference entry 10cdacb0; body size 6 bytes.
#line 1 "ENTRY_10cdacb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cdacb0(void)

{
  return (char *)("SCIOpAlarmClockGetDailyIndexRefreshTime");
}


// Reference entry 10cdacc0; body size 6 bytes.
#line 1 "ENTRY_10cdacc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cdacc0(void)

{
  return (char *)("SCIOpAlarmClockSetDailyIndexRefreshTime");
}


// Reference entry 10cdadf0; body size 28 bytes.
#line 1 "ENTRY_10cdadf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdadf0(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdae20; body size 27 bytes.
#line 1 "ENTRY_10cdae20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdae20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdae50; body size 27 bytes.
#line 1 "ENTRY_10cdae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdae50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdae80; body size 27 bytes.
#line 1 "ENTRY_10cdae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdae80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb170; body size 70 bytes.
#line 1 "ENTRY_10cdb170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb170(undefined4 *param_1)

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


// Reference entry 10cdb290; body size 10 bytes.
#line 1 "ENTRY_10cdb290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cdb290(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10cdb2a0; body size 12 bytes.
#line 1 "ENTRY_10cdb2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cdb2a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10cdb330; body size 134 bytes.
#line 1 "ENTRY_10cdb330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdb330(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AlarmClock:1","GetDailyIndexRefreshTime", uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  *(undefined1*)(param_1 + 0x35f4) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb3e0; body size 127 bytes.
#line 1 "ENTRY_10cdb3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdb3e0(int param_2,undefined4 param_3,undefined4 param_4,
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
  thunk_FUN_111c0760<>(uVar2,"urn:schemas-upnp-org:service:AlarmClock:1","SetDailyIndexRefreshTime", uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb480; body size 140 bytes.
#line 1 "ENTRY_10cdb480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdb480(int param_2,undefined4 param_3,undefined4 param_4,
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
  pcVar5 = (char *)("RefreshShareIndex");
  uVar4 = (undefined4)((**(code **)(*(int *)(param_2 + iVar1 + 4) + 0x68))("RefreshShareIndex",uVar3), 0);
  thunk_FUN_111c0760<>(uVar2,uVar4,pcVar5,uVar3,param_3,param_4,param_5,param_6);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb610; body size 9 bytes.
#line 1 "ENTRY_10cdb610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIIndexManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb620; body size 9 bytes.
#line 1 "ENTRY_10cdb620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAlarmClockGetDailyIndexRefreshTime);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb630; body size 9 bytes.
#line 1 "ENTRY_10cdb630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAlarmClockSetDailyIndexRefreshTime);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdb640; body size 9 bytes.
#line 1 "ENTRY_10cdb640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdb640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIndexListenerCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdbb00; body size 11 bytes.
#line 1 "ENTRY_10cdbb00"

/* WARNING: Removing unreachable block_10cdbb00 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdbb00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cdbb10; body size 11 bytes.
#line 1 "ENTRY_10cdbb10"

/* WARNING: Removing unreachable block_10cdbb10 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdbb10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cdbb20; body size 11 bytes.
#line 1 "ENTRY_10cdbb20"

/* WARNING: Removing unreachable block_10cdbb20 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdbb20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cdc0d0; body size 28 bytes.
#line 1 "ENTRY_10cdc0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACGetDailyIndexRefreshTimeAIOOp);
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


// Reference entry 10cdc100; body size 28 bytes.
#line 1 "ENTRY_10cdc100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc100(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACSetDailyIndexRefreshTimeAIOOp);
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


// Reference entry 10cdc130; body size 28 bytes.
#line 1 "ENTRY_10cdc130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpCDRefreshShareIndexAIOOp);
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


// Reference entry 10cdc220; body size 7 bytes.
#line 1 "ENTRY_10cdc220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc220(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdc230; body size 7 bytes.
#line 1 "ENTRY_10cdc230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdc240; body size 7 bytes.
#line 1 "ENTRY_10cdc240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdc3a0; body size 18 bytes.
#line 1 "ENTRY_10cdc3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc3a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockGetDailyIndexRefreshTime);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockGetDailyIndexRefreshTime);


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


// Reference entry 10cdc3c0; body size 18 bytes.
#line 1 "ENTRY_10cdc3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdc3c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockSetDailyIndexRefreshTime);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmClockSetDailyIndexRefreshTime);


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


// Reference entry 10cdc410; body size 8 bytes.
#line 1 "ENTRY_10cdc410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cdc410(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10cdc420; body size 4 bytes.
#line 1 "ENTRY_10cdc420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdc420(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cdc430; body size 4 bytes.
#line 1 "ENTRY_10cdc430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdc430(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cdcbe0; body size 8 bytes.
#line 1 "ENTRY_10cdcbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cdcbe0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10cdcbf0; body size 4 bytes.
#line 1 "ENTRY_10cdcbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdcbf0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10cdcc00; body size 7 bytes.
#line 1 "ENTRY_10cdcc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cdcc00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10cdcc10; body size 26 bytes.
#line 1 "ENTRY_10cdcc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cdcc10(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10cdcc30; body size 10 bytes.
#line 1 "ENTRY_10cdcc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cdcc30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10cdd200; body size 8 bytes.
#line 1 "ENTRY_10cdd200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10cdd200(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar3 = (uint)(DAT_12126b84);
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20), 0);
  puVar2 = (undefined4 *)((undefined4 *)0x0);
  while( true ) {
    puVar1 = (undefined4 *)(puVar4);
    if ((undefined4 *)(puVar1) == (undefined4 *)(0x0)) {

      puVar4 = (undefined4 *)(operator_new(8), 0);
      if ((undefined4 *)(puVar4) == (undefined4 *)(0x0)) {
        puVar4 = (undefined4 *)((undefined4 *)0x0);
      }
      else {
        *puVar4 = (undefined4)(0);

        puVar4[1] = (undefined4)(param_2);
        if (param_2 != 0) {
          thunk_FUN_1123fce0(param_2 + 4,uVar3);
        }
      }
      if ((undefined4 *)(puVar2) == (undefined4 *)(0x0)) {
        *(undefined4**)(param_1 + 0x20) = (undefined4 *)(puVar4);
      }
      else {
        *puVar2 = (undefined4)(puVar4);
      }

      return (undefined4)(1);
    }
    if (puVar1[1] == param_2) break;
    puVar4 = (undefined4 *)((undefined4 *)*puVar1);
    puVar2 = (undefined4 *)(puVar1);
  }
  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10cdda80; body size 16 bytes.
#line 1 "ENTRY_10cdda80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdda80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10cddaa0; body size 7 bytes.
#line 1 "ENTRY_10cddaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cddaa0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10cddbd0; body size 4 bytes.
#line 1 "ENTRY_10cddbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cddbd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cddd50; body size 6 bytes.
#line 1 "ENTRY_10cddd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cddd50(void)

{
  return (char *)("SCIIndexManager");
}


// Reference entry 10cddd60; body size 6 bytes.
#line 1 "ENTRY_10cddd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cddd60(void)

{
  return (char *)("SCIOpAlarmClockGetDailyIndexRefreshTime");
}


// Reference entry 10cddd70; body size 6 bytes.
#line 1 "ENTRY_10cddd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cddd70(void)

{
  return (char *)("SCIOpAlarmClockSetDailyIndexRefreshTime");
}


// Reference entry 10cdeea0; body size 28 bytes.
#line 1 "ENTRY_10cdeea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdeea0(undefined4 *param_1)

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


// Reference entry 10cdeed0; body size 28 bytes.
#line 1 "ENTRY_10cdeed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdeed0(undefined4 *param_1)

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


// Reference entry 10cdef00; body size 28 bytes.
#line 1 "ENTRY_10cdef00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdef00(undefined4 *param_1)

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


// Reference entry 10cdef30; body size 8 bytes.
#line 1 "ENTRY_10cdef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10cdef30(int param_2)
{
  int param_1 = (int )this;
 try {
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar4 = (uint)(DAT_12126b84);
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0x20), 0);
  puVar3 = (undefined4 *)((undefined4 *)0x0);
  do {
    puVar2 = (undefined4 *)(puVar3);
    puVar3 = (undefined4 *)(puVar1);
    if ((undefined4 *)(puVar3) == (undefined4 *)(0x0)) {
      return (undefined4)(0);
    }
    puVar1 = (undefined4 *)((undefined4 *)*puVar3);
  } while (puVar3[1] != param_2);

  if ((undefined4 *)(puVar2) == (undefined4 *)(0x0)) {
    *(undefined4**)(param_1 + 0x20) = (undefined4 *)(puVar1);
  }
  else {
    *puVar2 = (undefined4)(puVar1);
  }
  if ((undefined4 *)(puVar3) == *(undefined4 **)(param_1 + 0x24)) {
    *(undefined4*)(param_1 + 0x24) = (undefined4)(**(undefined4 **)(param_1 + 0x24), 0);
  }
  puVar1 = (undefined4 *)((undefined4 *)puVar3[1]);

  if (((undefined4 *)(puVar1) != (undefined4 *)(0x0)) && (iVar5 = (int)(thunk_FUN_1123fcd0(puVar1 + 1,uVar4), 0), iVar5 == 0)) {
    (**(code **)*puVar1)(1);
  }
  thunk_FUN_1148a50e(puVar3,8);

  return (undefined4)(1);

 } catch (...) { }
}


// Reference entry 10cdf020; body size 24 bytes.
#line 1 "ENTRY_10cdf020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10cdf020(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10cdf670; body size 16 bytes.
#line 1 "ENTRY_10cdf670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cdf670(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdf690; body size 42 bytes.
#line 1 "ENTRY_10cdf690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cdf690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjAVTAdapter_HHEventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10cdfa00; body size 19 bytes.
#line 1 "ENTRY_10cdfa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cdfa00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cdfcb0; body size 3 bytes.
#line 1 "ENTRY_10cdfcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cdfcb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cdfd70; body size 8 bytes.
#line 1 "ENTRY_10cdfd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cdfd70(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10cdfd80; body size 16 bytes.
#line 1 "ENTRY_10cdfd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cdfd80(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return;
}


// Reference entry 10ce0050; body size 7 bytes.
#line 1 "ENTRY_10ce0050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce0050(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x524));
}


// Reference entry 10ce0080; body size 31 bytes.
#line 1 "ENTRY_10ce0080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce0080(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x34) != 0) {
    uVar1 = (undefined4)(thunk_FUN_1113f590<>(0), 0);
    uVar1 = (undefined4)(thunk_FUN_110bc160(uVar1), 0);
    return (undefined4)(uVar1);
  }
  return (undefined4)(0);
}


// Reference entry 10ce00b0; body size 49 bytes.
#line 1 "ENTRY_10ce00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce00b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (int)(thunk_FUN_1113f590<>(0), 0);
    if (iVar1 != 0) {
      thunk_FUN_10ce00f0<>(param_1,iVar1,1,param_2,param_3);
    }
  }
  return;
}


// Reference entry 10ce0330; body size 41 bytes.
#line 1 "ENTRY_10ce0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce0330(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x30));
  if (*(int *)(param_1 + 0x2c) != 0) {
    thunk_FUN_1123fce0(*(int *)(param_1 + 0x2c) + 4);
  }
  if (iVar1 != 0) {
    thunk_FUN_1123fce0(iVar1 + 4);
  }
  return;
}


// Reference entry 10ce0a00; body size 5 bytes.
#line 1 "ENTRY_10ce0a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce0a00(int param_1)

{
 try {
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined *puVar5;
  char *pcVar6;
  int iVar7;
  undefined1 *puVar8;
  char *pcStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  char *pcStack_18;
  char cStack_11;
  void *pvStack_10;
  undefined1 *puStack_c;
  int iStack_8;
  
  iStack_8 = (int)(0xffffffff);

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)((SCStr *)&pcStack_18))->int_allocRep("");
  iVar7 = (int)(0);
  iStack_8 = (int)(0);
  iStack_1c = (int)(0);
  cStack_11 = (char)('\0');
  if ((*(int *)(param_1 + 0x24) != 0) && (iVar3 = (int)(thunk_FUN_10f42870(uVar2), 0), iVar3 != 0)) {
    cStack_11 = (char)('\x01');
    iVar7 = (int)(thunk_FUN_11138b60(iVar3 + 0x44), 0);
    if (iVar7 == 0) {
      pcVar6 = (char *)("");
    }
    else {
      pcVar6 = (char *)("");
      if (*(char **)(iVar7 + 0x5c) != (char *)((0x0))) {
        pcVar6 = (char *)(*(char **)(iVar7 + 0x5c), 0);
      }
    }
    ((SCStr *)((SCStr *)&pcStack_24))->int_allocRep(pcVar6);
    *(unsigned char*)((char *)&iStack_8 + 0) = (unsigned char)(1);
    ((SCStr *)((SCStr *)&pcStack_18))->int_release();
    pcStack_18 = (char *)(pcStack_24);
    ((SCStr *)((SCStr *)&pcStack_18))->int_addref();
    *(unsigned char*)((char *)&iStack_8 + 0) = (unsigned char)(2);
    ((SCStr *)((SCStr *)&pcStack_24))->int_release();
    iStack_8 = (int)((uint)*(unsigned short *)((char *)&iStack_8 + 1) << 8);
    if ((iVar7 == 0) || (cVar1 = (char)(thunk_FUN_110d3ac0(), 0), cVar1 == '\0')) {
      iStack_1c = (int)(0);
    }
    else {
      iStack_1c = (int)(thunk_FUN_110cb840(), 0);
    }
  }
  pcVar6 = (char *)("");
  if ((char *)(pcStack_18) != (char *)(0x0)) {
    pcVar6 = (char *)(pcStack_18);
  }
  cVar1 = (char)(thunk_FUN_101a2c70(pcVar6,param_1 + 0x1c), 0);
  if (((cVar1 == '\0') || ((iVar7 != 0 && (*(int *)((iVar7 + 0x524)) != *(int *)((param_1 + 0x20)))))) || ((*(int *)(param_1 + 0x34) == 0 && (iStack_1c != 0)))) {
    thunk_FUN_10ce0370();
    *(int*)(param_1 + 0x34) = (int)(iStack_1c);
    puVar8 = (undefined1 *)(&DAT_1186d2ee);
    if (iStack_1c == 0) {
      if (cStack_11 == '\0') {
        *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
        pcVar6 = (char *)("ZoneGroup %s no longer valid");
      }
      else {
        pcVar6 = (char *)("Unsubscribed from AVT for %s");
      }
      if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)((0x0))) {
        puVar8 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c), 0);
      }
      uVar4 = (undefined4)(1);
    }
    else {
      iVar3 = (int)(thunk_FUN_1113f590<>(0), 0);
      if (iVar3 != 0) {
        thunk_FUN_10ce00f0<>(iStack_1c,iVar3,1,0,0);
      }
      thunk_FUN_1113f0e0(param_1,0);
      pcVar6 = (char *)("");
      if ((char *)(pcStack_18) != (char *)(0x0)) {
        pcVar6 = (char *)(pcStack_18);
      }
      ((SCStr *)((SCStr *)&uStack_20))->int_allocRep(pcVar6);
      *(unsigned char*)((char *)&iStack_8 + 0) = (unsigned char)(3);
      if ((SCStr *)&uStack_20 != (SCStr *)(((param_1 + 0x1c)))) {
        ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_release();
        *(undefined4*)(param_1 + 0x1c) = (undefined4)(uStack_20);
        ((SCStr *)((SCStr *)(param_1 + 0x1c)))->int_addref();
      }
      *(unsigned char*)((char *)&iStack_8 + 0) = (unsigned char)(4);
      ((SCStr *)((SCStr *)&uStack_20))->int_release();
      iStack_8 = (int)((uint)*(unsigned short *)((char *)&iStack_8 + 1) << 8);
      if (iVar7 == 0) {
        uVar4 = (undefined4)(0);
      }
      else {
        uVar4 = (undefined4)(*(undefined4 *)(iVar7 + 0x524));
      }
      *(undefined4*)(param_1 + 0x20) = (undefined4)(uVar4);
      pcVar6 = (char *)("Subscribed to AVT for %s");
      if (*(undefined1 **)(param_1 + 0x1c) != (undefined1 *)((0x0))) {
        puVar8 = (undefined1 *)(*(undefined1 **)(param_1 + 0x1c), 0);
      }
      uVar4 = (undefined4)(5);
    }
    thunk_FUN_112af4e0("SwfObjAVTAdapter",uVar4,pcVar6,puVar8);
    if (iVar7 == 0) {
      puVar5 = (undefined *)(&DAT_11884820);
    }
    else {
      puVar5 = (undefined *)((undefined *)thunk_FUN_110cead0(), 0);
    }
    thunk_FUN_112af4e0("SwfObjAVTAdapter",5,"AVT pointer updated (%s)\n",puVar5);
  }
  iStack_8 = (int)(5);
  ((SCStr *)((SCStr *)&pcStack_18))->int_release();

  return;

 } catch (...) { }
}


// Reference entry 10ce0a10; body size 3 bytes.
#line 1 "ENTRY_10ce0a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce0a10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ce0aa0; body size 28 bytes.
#line 1 "ENTRY_10ce0aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce0aa0(undefined4 *param_1)

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


// Reference entry 10ce0b20; body size 6 bytes.
#line 1 "ENTRY_10ce0b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce0b20(void)

{
  return (char *)("SCIOpGetUsageDataShareOption");
}


// Reference entry 10ce0b30; body size 6 bytes.
#line 1 "ENTRY_10ce0b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce0b30(void)

{
  return (char *)("SCIOpSystemPropertyGetString");
}


// Reference entry 10ce0bd0; body size 27 bytes.
#line 1 "ENTRY_10ce0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce0bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce0c00; body size 27 bytes.
#line 1 "ENTRY_10ce0c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce0c00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce0e10; body size 9 bytes.
#line 1 "ENTRY_10ce0e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce0e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpGetUsageDataShareOption);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce0e20; body size 9 bytes.
#line 1 "ENTRY_10ce0e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce0e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpSystemPropertyGetString);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce1320; body size 7 bytes.
#line 1 "ENTRY_10ce1320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce1320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce1330; body size 7 bytes.
#line 1 "ENTRY_10ce1330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce1330(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce1440; body size 18 bytes.
#line 1 "ENTRY_10ce1440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce1440(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetUsageDataShareOption);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetUsageDataShareOption);


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


// Reference entry 10ce1a70; body size 6 bytes.
#line 1 "ENTRY_10ce1a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce1a70(void)

{
  return (char *)("SCIOpGetUsageDataShareOption");
}


// Reference entry 10ce1a80; body size 6 bytes.
#line 1 "ENTRY_10ce1a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce1a80(void)

{
  return (char *)("SCIOpSystemPropertyGetString");
}


// Reference entry 10ce2120; body size 28 bytes.
#line 1 "ENTRY_10ce2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce2120(undefined4 *param_1)

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


// Reference entry 10ce2150; body size 28 bytes.
#line 1 "ENTRY_10ce2150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce2150(undefined4 *param_1)

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


// Reference entry 10ce2210; body size 6 bytes.
#line 1 "ENTRY_10ce2210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce2210(void)

{
  return (char *)("SCIOpSystemPropertyGetRDM");
}


// Reference entry 10ce22b0; body size 27 bytes.
#line 1 "ENTRY_10ce22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce22b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce2320; body size 9 bytes.
#line 1 "ENTRY_10ce2320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce2320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpSystemPropertyGetRDM);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce24e0; body size 7 bytes.
#line 1 "ENTRY_10ce24e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce24e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce25f0; body size 4 bytes.
#line 1 "ENTRY_10ce25f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce25f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ce2920; body size 4 bytes.
#line 1 "ENTRY_10ce2920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ce2920(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x34));
}


// Reference entry 10ce2970; body size 6 bytes.
#line 1 "ENTRY_10ce2970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce2970(void)

{
  return (char *)("SCIOpSystemPropertyGetRDM");
}


// Reference entry 10ce2bc0; body size 28 bytes.
#line 1 "ENTRY_10ce2bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce2bc0(undefined4 *param_1)

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


// Reference entry 10ce2c10; body size 25 bytes.
#line 1 "ENTRY_10ce2c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce2c10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce2cd0; body size 39 bytes.
#line 1 "ENTRY_10ce2cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce2cd0(undefined4 *param_2)
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


// Reference entry 10ce2d00; body size 39 bytes.
#line 1 "ENTRY_10ce2d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce2d00(undefined4 *param_2)
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


// Reference entry 10ce2d30; body size 39 bytes.
#line 1 "ENTRY_10ce2d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce2d30(undefined4 *param_2)
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


// Reference entry 10ce3020; body size 7 bytes.
#line 1 "ENTRY_10ce3020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce3020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ce3030; body size 5 bytes.
#line 1 "ENTRY_10ce3030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce3030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3180; body size 28 bytes.
#line 1 "ENTRY_10ce3180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce3180(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10ce31b0; body size 28 bytes.
#line 1 "ENTRY_10ce31b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce31b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10ce31e0; body size 28 bytes.
#line 1 "ENTRY_10ce31e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce31e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10ce32d0; body size 5 bytes.
#line 1 "ENTRY_10ce32d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce32d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce32e0; body size 5 bytes.
#line 1 "ENTRY_10ce32e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce32e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce32f0; body size 5 bytes.
#line 1 "ENTRY_10ce32f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce32f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3300; body size 6 bytes.
#line 1 "ENTRY_10ce3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce3300(void)

{
  return (undefined4)(3);
}


// Reference entry 10ce3310; body size 5 bytes.
#line 1 "ENTRY_10ce3310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce3310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3320; body size 21 bytes.
#line 1 "ENTRY_10ce3320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce3320(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce3340; body size 23 bytes.
#line 1 "ENTRY_10ce3340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce3340(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce3360; body size 3 bytes.
#line 1 "ENTRY_10ce3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce3360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3370; body size 23 bytes.
#line 1 "ENTRY_10ce3370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce3370(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce3390; body size 33 bytes.
#line 1 "ENTRY_10ce3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce3390(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDisplayRoomSettingsActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce3590; body size 19 bytes.
#line 1 "ENTRY_10ce3590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce3590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce36f0; body size 12 bytes.
#line 1 "ENTRY_10ce36f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ce36f0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10ce38f0; body size 49 bytes.
#line 1 "ENTRY_10ce38f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10ce38f0(uint param_2)
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


// Reference entry 10ce39e0; body size 3 bytes.
#line 1 "ENTRY_10ce39e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce39e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce39f0; body size 3 bytes.
#line 1 "ENTRY_10ce39f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce39f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3a00; body size 3 bytes.
#line 1 "ENTRY_10ce3a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce3a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3a10; body size 3 bytes.
#line 1 "ENTRY_10ce3a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce3a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce3a20; body size 3 bytes.
#line 1 "ENTRY_10ce3a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce3a20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ce3a30; body size 6 bytes.
#line 1 "ENTRY_10ce3a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce3a30(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10ce3d20; body size 9 bytes.
#line 1 "ENTRY_10ce3d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce3d20(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10ce4520; body size 6 bytes.
#line 1 "ENTRY_10ce4520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce4520(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10ce4530; body size 6 bytes.
#line 1 "ENTRY_10ce4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce4530(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10ce59e0; body size 9 bytes.
#line 1 "ENTRY_10ce59e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce59e0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10ce59f0; body size 22 bytes.
#line 1 "ENTRY_10ce59f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce59f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5ab0; body size 18 bytes.
#line 1 "ENTRY_10ce5ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce5ab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5ad0; body size 25 bytes.
#line 1 "ENTRY_10ce5ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce5ad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5af0; body size 25 bytes.
#line 1 "ENTRY_10ce5af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce5af0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5b80; body size 22 bytes.
#line 1 "ENTRY_10ce5b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce5b80(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce5ba0; body size 5 bytes.
#line 1 "ENTRY_10ce5ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce5ba0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce5bb0; body size 5 bytes.
#line 1 "ENTRY_10ce5bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce5bb0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce5c30; body size 26 bytes.
#line 1 "ENTRY_10ce5c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ce5c30(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10ce5c50; body size 3 bytes.
#line 1 "ENTRY_10ce5c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c50(void)

{
  return;
}


// Reference entry 10ce5c60; body size 13 bytes.
#line 1 "ENTRY_10ce5c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ce5c70; body size 13 bytes.
#line 1 "ENTRY_10ce5c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ce5c80; body size 13 bytes.
#line 1 "ENTRY_10ce5c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ce5c90; body size 3 bytes.
#line 1 "ENTRY_10ce5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5c90(void)

{
  return;
}


// Reference entry 10ce5ca0; body size 3 bytes.
#line 1 "ENTRY_10ce5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5ca0(void)

{
  return;
}


// Reference entry 10ce5cb0; body size 18 bytes.
#line 1 "ENTRY_10ce5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce5cb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10ce5e70; body size 15 bytes.
#line 1 "ENTRY_10ce5e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce5e70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x2c);
  return;
}


// Reference entry 10ce5f10; body size 7 bytes.
#line 1 "ENTRY_10ce5f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce5f10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ce5f20; body size 5 bytes.
#line 1 "ENTRY_10ce5f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce5f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6190; body size 5 bytes.
#line 1 "ENTRY_10ce6190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61a0; body size 5 bytes.
#line 1 "ENTRY_10ce61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61b0; body size 5 bytes.
#line 1 "ENTRY_10ce61b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61c0; body size 5 bytes.
#line 1 "ENTRY_10ce61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61d0; body size 5 bytes.
#line 1 "ENTRY_10ce61d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61e0; body size 5 bytes.
#line 1 "ENTRY_10ce61e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce61e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce61f0; body size 130 bytes.
#line 1 "ENTRY_10ce61f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ce61f0(int *param_2,undefined4 param_3)
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


// Reference entry 10ce62a0; body size 130 bytes.
#line 1 "ENTRY_10ce62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ce62a0(int *param_2,undefined4 param_3)
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


// Reference entry 10ce6430; body size 15 bytes.
#line 1 "ENTRY_10ce6430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6430(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ce6520; body size 5 bytes.
#line 1 "ENTRY_10ce6520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6530; body size 5 bytes.
#line 1 "ENTRY_10ce6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6540; body size 5 bytes.
#line 1 "ENTRY_10ce6540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6550; body size 5 bytes.
#line 1 "ENTRY_10ce6550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6560; body size 5 bytes.
#line 1 "ENTRY_10ce6560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6570; body size 5 bytes.
#line 1 "ENTRY_10ce6570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6580; body size 5 bytes.
#line 1 "ENTRY_10ce6580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ce6580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6590; body size 6 bytes.
#line 1 "ENTRY_10ce6590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ce6590(void)

{
  return (char *)("SCIAreaManager");
}


// Reference entry 10ce65a0; body size 30 bytes.
#line 1 "ENTRY_10ce65a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce65a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10ce65d0; body size 27 bytes.
#line 1 "ENTRY_10ce65d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce65d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6600; body size 70 bytes.
#line 1 "ENTRY_10ce6600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce6600(undefined4 *param_1)

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


// Reference entry 10ce6660; body size 70 bytes.
#line 1 "ENTRY_10ce6660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce6660(undefined4 *param_1)

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


// Reference entry 10ce67a0; body size 18 bytes.
#line 1 "ENTRY_10ce67a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce67a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce67c0; body size 10 bytes.
#line 1 "ENTRY_10ce67c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce67c0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ce67d0; body size 10 bytes.
#line 1 "ENTRY_10ce67d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce67d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ce68b0; body size 11 bytes.
#line 1 "ENTRY_10ce68b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce68b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce68c0; body size 11 bytes.
#line 1 "ENTRY_10ce68c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce68c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce68d0; body size 11 bytes.
#line 1 "ENTRY_10ce68d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce68d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce68e0; body size 16 bytes.
#line 1 "ENTRY_10ce68e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce68e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6900; body size 13 bytes.
#line 1 "ENTRY_10ce6900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce6900(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6910; body size 14 bytes.
#line 1 "ENTRY_10ce6910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce6910(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6930; body size 23 bytes.
#line 1 "ENTRY_10ce6930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce6930(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6950; body size 3 bytes.
#line 1 "ENTRY_10ce6950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce6950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce6960; body size 12 bytes.
#line 1 "ENTRY_10ce6960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce6960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ce69f0; body size 12 bytes.
#line 1 "ENTRY_10ce69f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce69f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ce6ea0; body size 9 bytes.
#line 1 "ENTRY_10ce6ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce6ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAreaManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce6eb0; body size 11 bytes.
#line 1 "ENTRY_10ce6eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ce6eb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce73b0; body size 3 bytes.
#line 1 "ENTRY_10ce73b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce73b0(void)

{
  return;
}


// Reference entry 10ce74b0; body size 5 bytes.
#line 1 "ENTRY_10ce74b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce74b0(int param_1)

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
  thunk_FUN_10ce5db0(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x2c);
  return;
}


// Reference entry 10ce76d0; body size 7 bytes.
#line 1 "ENTRY_10ce76d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce76d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ce77a0; body size 14 bytes.
#line 1 "ENTRY_10ce77a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ce77a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ce77c0; body size 14 bytes.
#line 1 "ENTRY_10ce77c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ce77c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ce77e0; body size 14 bytes.
#line 1 "ENTRY_10ce77e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ce77e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ce7800; body size 14 bytes.
#line 1 "ENTRY_10ce7800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ce7800(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ce7850; body size 8 bytes.
#line 1 "ENTRY_10ce7850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7850(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ce7860; body size 8 bytes.
#line 1 "ENTRY_10ce7860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7860(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ce7870; body size 4 bytes.
#line 1 "ENTRY_10ce7870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce7870(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ce7880; body size 4 bytes.
#line 1 "ENTRY_10ce7880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce7880(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ce7890; body size 3 bytes.
#line 1 "ENTRY_10ce7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce7890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ce78a0; body size 6 bytes.
#line 1 "ENTRY_10ce78a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce78a0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10ce78b0; body size 6 bytes.
#line 1 "ENTRY_10ce78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ce78b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10ce78c0; body size 9 bytes.
#line 1 "ENTRY_10ce78c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce78c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce78d0; body size 9 bytes.
#line 1 "ENTRY_10ce78d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ce78d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ce78e0; body size 10 bytes.
#line 1 "ENTRY_10ce78e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10ce78e0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10ce7bd0; body size 22 bytes.
#line 1 "ENTRY_10ce7bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce7bd0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x2c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10ce7d30; body size 20 bytes.
#line 1 "ENTRY_10ce7d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce7d30(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x5d1745d) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10ce7d50; body size 66 bytes.
#line 1 "ENTRY_10ce7d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7d50(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10ce7e60; body size 8 bytes.
#line 1 "ENTRY_10ce7e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7e60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10ce7e70; body size 8 bytes.
#line 1 "ENTRY_10ce7e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce7e70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10ce80a0; body size 3 bytes.
#line 1 "ENTRY_10ce80a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce80b0; body size 3 bytes.
#line 1 "ENTRY_10ce80b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce80c0; body size 3 bytes.
#line 1 "ENTRY_10ce80c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce80d0; body size 3 bytes.
#line 1 "ENTRY_10ce80d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce80e0; body size 3 bytes.
#line 1 "ENTRY_10ce80e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce80f0; body size 3 bytes.
#line 1 "ENTRY_10ce80f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce80f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce8100; body size 4 bytes.
#line 1 "ENTRY_10ce8100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce8100(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10ce8110; body size 4 bytes.
#line 1 "ENTRY_10ce8110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce8110(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10ce8120; body size 92 bytes.
#line 1 "ENTRY_10ce8120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ce8120(uint param_2,int param_3,int *param_4)
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


// Reference entry 10ce81a0; body size 7 bytes.
#line 1 "ENTRY_10ce81a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce81a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10ce81b0; body size 7 bytes.
#line 1 "ENTRY_10ce81b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ce81b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10ce81c0; body size 13 bytes.
#line 1 "ENTRY_10ce81c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce81c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ce81d0; body size 3 bytes.
#line 1 "ENTRY_10ce81d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce81d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce81e0; body size 3 bytes.
#line 1 "ENTRY_10ce81e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce81e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ce8260; body size 3 bytes.
#line 1 "ENTRY_10ce8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce8260(void)

{
  return;
}


// Reference entry 10ce8320; body size 11 bytes.
#line 1 "ENTRY_10ce8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce8320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ce8330; body size 6 bytes.
#line 1 "ENTRY_10ce8330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce8330(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10ce8340; body size 26 bytes.
#line 1 "ENTRY_10ce8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce8340(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10ce8360; body size 26 bytes.
#line 1 "ENTRY_10ce8360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce8360(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10ce8380; body size 10 bytes.
#line 1 "ENTRY_10ce8380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce8380(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10ce8390; body size 10 bytes.
#line 1 "ENTRY_10ce8390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce8390(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10ce8490; body size 14 bytes.
#line 1 "ENTRY_10ce8490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce8490(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10ce84b0; body size 13 bytes.
#line 1 "ENTRY_10ce84b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce84b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10ce84c0; body size 12 bytes.
#line 1 "ENTRY_10ce84c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce84c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ce84d0; body size 11 bytes.
#line 1 "ENTRY_10ce84d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce84d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ce84e0; body size 43 bytes.
#line 1 "ENTRY_10ce84e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce84e0(int param_1,int param_2,int param_3)

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


// Reference entry 10ce9340; body size 87 bytes.
#line 1 "ENTRY_10ce9340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ce9340(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x5d1745e) {
    param_1 = (uint)(param_1 * 0x2c);
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


// Reference entry 10ce93b0; body size 87 bytes.
#line 1 "ENTRY_10ce93b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ce93b0(uint param_1)

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


// Reference entry 10ce9490; body size 4 bytes.
#line 1 "ENTRY_10ce9490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ce9490(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10ce94c0; body size 68 bytes.
#line 1 "ENTRY_10ce94c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ce94c0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_10ce5db0(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10ce6450(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10ce96d0; body size 52 bytes.
#line 1 "ENTRY_10ce96d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ce96d0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x2c);
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


// Reference entry 10ce9720; body size 55 bytes.
#line 1 "ENTRY_10ce9720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce9720(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x2c);
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


// Reference entry 10ce9770; body size 61 bytes.
#line 1 "ENTRY_10ce9770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ce9770(int param_1,int param_2)

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


// Reference entry 10ce97c0; body size 12 bytes.
#line 1 "ENTRY_10ce97c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce97c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ce97d0; body size 11 bytes.
#line 1 "ENTRY_10ce97d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ce97d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ceaa80; body size 54 bytes.
#line 1 "ENTRY_10ceaa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ceaa80(undefined4 param_2,SCStr *param_3)
{
  SCStr *param_1 = (SCStr *)this;
  if ((*(char **)(param_1 + 0x14) == (char *)((0x0))) || (**(char **)(param_1 + 0x14) == '\0')) {
    ((SCStr *)(param_1))->format((char *)(param_1 + 0x14));
  }
  ((SCStr *)(param_3))->m_op_ctor(param_1 + 0x14);
  return (SCStr *)(param_3);
}


// Reference entry 10ceac10; body size 25 bytes.
#line 1 "ENTRY_10ceac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ceac10(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x18), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10ceac30; body size 4 bytes.
#line 1 "ENTRY_10ceac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceac30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ceac40; body size 4 bytes.
#line 1 "ENTRY_10ceac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceac40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ceae50; body size 6 bytes.
#line 1 "ENTRY_10ceae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ceae50(void)

{
  return (char *)("SCIAreaManager");
}


// Reference entry 10ceb3f0; body size 3 bytes.
#line 1 "ENTRY_10ceb3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10ceb3f0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10ceb400; body size 6 bytes.
#line 1 "ENTRY_10ceb400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ceb400(void)

{
  return (undefined4)(0x5d1745d);
}


// Reference entry 10ceb410; body size 6 bytes.
#line 1 "ENTRY_10ceb410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ceb410(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ceb420; body size 6 bytes.
#line 1 "ENTRY_10ceb420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ceb420(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ceb430; body size 6 bytes.
#line 1 "ENTRY_10ceb430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ceb430(void)

{
  return (undefined4)(0x5d1745d);
}


// Reference entry 10cebd30; body size 28 bytes.
#line 1 "ENTRY_10cebd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cebd30(undefined4 *param_1)

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


// Reference entry 10cebd60; body size 28 bytes.
#line 1 "ENTRY_10cebd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cebd60(undefined4 *param_1)

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


// Reference entry 10cec7a0; body size 9 bytes.
#line 1 "ENTRY_10cec7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cec7a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10ceddd0; body size 39 bytes.
#line 1 "ENTRY_10ceddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ceddd0(undefined4 *param_2)
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


// Reference entry 10cee0c0; body size 3 bytes.
#line 1 "ENTRY_10cee0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cee0c0(void)

{
  return;
}


// Reference entry 10cee0d0; body size 5 bytes.
#line 1 "ENTRY_10cee0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cee0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cee0e0; body size 130 bytes.
#line 1 "ENTRY_10cee0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10cee0e0(int *param_2,undefined4 param_3)
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


// Reference entry 10cee190; body size 28 bytes.
#line 1 "ENTRY_10cee190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cee190(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10cee210; body size 5 bytes.
#line 1 "ENTRY_10cee210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cee210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cee220; body size 5 bytes.
#line 1 "ENTRY_10cee220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cee220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cee230; body size 54 bytes.
#line 1 "ENTRY_10cee230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cee230(undefined4 *param_1)

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


// Reference entry 10cee280; body size 70 bytes.
#line 1 "ENTRY_10cee280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cee280(undefined4 *param_1)

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


// Reference entry 10cee2e0; body size 32 bytes.
#line 1 "ENTRY_10cee2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cee2e0(undefined4 *param_2)
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


// Reference entry 10cee350; body size 10 bytes.
#line 1 "ENTRY_10cee350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cee350(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10cee360; body size 12 bytes.
#line 1 "ENTRY_10cee360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cee360(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ceeb30; body size 67 bytes.
#line 1 "ENTRY_10ceeb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ceeb30(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_102a3ea0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    iVar1 = (int)(*param_1);
    *param_1 = (int)(*param_2);
    *param_2 = (int)(iVar1);
    iVar1 = (int)(param_1[1]);
    param_1[1] = (int)(param_2[1]);
    param_2[1] = (int)(iVar1);
  }
  return (int *)(param_1);
}


// Reference entry 10ceebc0; body size 67 bytes.
#line 1 "ENTRY_10ceebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ceebc0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_102a3ea0(param_1,*(undefined4 *)(iVar1 + 4));
    *(int*)(iVar1 + 4) = (int)(iVar1);
    *(int*)iVar1 = (int)((int)(iVar1));
    *(int*)(iVar1 + 8) = (int)(iVar1);
    param_1[1] = (int)(0);
    iVar1 = (int)(*param_1);
    *param_1 = (int)(*param_2);
    *param_2 = (int)(iVar1);
    iVar1 = (int)(param_1[1]);
    param_1[1] = (int)(param_2[1]);
    param_2[1] = (int)(iVar1);
  }
  return (int *)(param_1);
}


// Reference entry 10ceec20; body size 7 bytes.
#line 1 "ENTRY_10ceec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ceec20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10ceec30; body size 8 bytes.
#line 1 "ENTRY_10ceec30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ceec30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ceec40; body size 4 bytes.
#line 1 "ENTRY_10ceec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceec40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10ceedd0; body size 8 bytes.
#line 1 "ENTRY_10ceedd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ceedd0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10ceede0; body size 3 bytes.
#line 1 "ENTRY_10ceede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceede0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ceedf0; body size 3 bytes.
#line 1 "ENTRY_10ceedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceedf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ceee00; body size 4 bytes.
#line 1 "ENTRY_10ceee00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ceee00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10ceee10; body size 7 bytes.
#line 1 "ENTRY_10ceee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ceee10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10ceee70; body size 26 bytes.
#line 1 "ENTRY_10ceee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ceee70(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10ceee90; body size 10 bytes.
#line 1 "ENTRY_10ceee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ceee90(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10cef480; body size 59 bytes.
#line 1 "ENTRY_10cef480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cef480(undefined4 *param_2)
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
  thunk_FUN_10cede00<>(puVar1,param_2);
  return;
}


// Reference entry 10cef4d0; body size 63 bytes.
#line 1 "ENTRY_10cef4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cef4d0(int param_1)

{
  if (param_1 == 1) {
    return (undefined4)(1);
  }
  if (param_1 != 2) {
    if (param_1 != 3) {
      thunk_FUN_112af4e0("connected_partners_cache",1,"No bit flag mapping for SCIVoiceService %i", param_1);
    }
    return (undefined4)(0);
  }
  return (undefined4)(2);
}


// Reference entry 10cefa40; body size 25 bytes.
#line 1 "ENTRY_10cefa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cefa40(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_10c21f70(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10cefa60; body size 16 bytes.
#line 1 "ENTRY_10cefa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cefa60(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10cefc10; body size 4 bytes.
#line 1 "ENTRY_10cefc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cefc10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cf0920; body size 7 bytes.
#line 1 "ENTRY_10cf0920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cf0920(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10cf0b80; body size 28 bytes.
#line 1 "ENTRY_10cf0b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf0b80(undefined4 *param_1)

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


// Reference entry 10cf0bb0; body size 38 bytes.
#line 1 "ENTRY_10cf0bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf0bb0(int param_1)

{
  *(undefined4*)(param_1 + 0x118) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x11c) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x120) = (undefined4)(0);
  *(undefined1*)(param_1 + 0x125) = (undefined1)(0);
  return;
}


// Reference entry 10cf0f00; body size 15 bytes.
#line 1 "ENTRY_10cf0f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf0f00(int param_2)
{
  int param_1 = (int )this;
  if (*(int *)(param_1 + 0x30) != (int)(param_2)) {
    *(int*)(param_1 + 0x30) = (int)(param_2);
  }
  return;
}


// Reference entry 10cf1000; body size 12 bytes.
#line 1 "ENTRY_10cf1000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

__time64_t FUN_10cf1000(void)

{
  __time64_t _Var1;
  
  _Var1 = (__time64_t)(_time64((__time64_t *)0x0), 0);
  return _Var1;
}


// Reference entry 10cf1290; body size 7 bytes.
#line 1 "ENTRY_10cf1290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cf1290(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10cf12a0; body size 68 bytes.
#line 1 "ENTRY_10cf12a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf12a0(int param_2,int param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if ((param_2 != 0) && (param_3 != 0)) {
    piVar1 = (int *)(*(int **)(param_1 + 4), 0);
    if ((int *)(piVar1) == (int *)(0x0)) {
      thunk_FUN_10cf1350();
      piVar1 = (int *)(*(int **)(param_1 + 4), 0);
      if ((int *)(piVar1) == (int *)(0x0)) {
        return;
      }
    }
                    
                    
    (**(code **)(*piVar1 + 0x14))();
    return;
  }
  thunk_FUN_112af4e0("UrbanAirshipTagger",1, "UrbanAirshipTagger - addAndRemoveUserTags called with null tag lists");
  return;
}


// Reference entry 10cf1300; body size 61 bytes.
#line 1 "ENTRY_10cf1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf1300(int param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  if (param_2 == 0) {
    thunk_FUN_112af4e0("UrbanAirshipTagger",1, "UrbanAirshipTagger - addUserTags called with null tag list");
    return;
  }
  piVar1 = (int *)(*(int **)(param_1 + 4), 0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    thunk_FUN_10cf1350();
    piVar1 = (int *)(*(int **)(param_1 + 4), 0);
    if ((int *)(piVar1) == (int *)(0x0)) {
      return;
    }
  }
                    
                    
  (**(code **)(*piVar1 + 0x18))();
  return;
}


// Reference entry 10cf2c10; body size 5 bytes.
#line 1 "ENTRY_10cf2c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf2c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf2d40; body size 3 bytes.
#line 1 "ENTRY_10cf2d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf2d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf2d50; body size 10 bytes.
#line 1 "ENTRY_10cf2d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10cf2d50(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10cf2d60; body size 61 bytes.
#line 1 "ENTRY_10cf2d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf2d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMultiProductWizardData_Data);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf2db0; body size 68 bytes.
#line 1 "ENTRY_10cf2db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf2db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSingleProductWizardData_Data);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0xffffffff);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf31b0; body size 65 bytes.
#line 1 "ENTRY_10cf31b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cf31b0(int *param_2)
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


// Reference entry 10cf3210; body size 65 bytes.
#line 1 "ENTRY_10cf3210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cf3210(int *param_2)
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


// Reference entry 10cf3270; body size 3 bytes.
#line 1 "ENTRY_10cf3270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf3270(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf3280; body size 3 bytes.
#line 1 "ENTRY_10cf3280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf3280(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf34b0; body size 27 bytes.
#line 1 "ENTRY_10cf34b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf34b0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*param_1);
  puVar2 = (undefined4 *)((undefined4 *)(iVar1 + 8));
  thunk_FUN_10352a90(*puVar2,*(undefined4 *)(iVar1 + 0xc),puVar2);
  *(undefined4*)(iVar1 + 0xc) = (undefined4)(*puVar2);
  return;
}


// Reference entry 10cf3a00; body size 22 bytes.
#line 1 "ENTRY_10cf3a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf3a00(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf3a20; body size 18 bytes.
#line 1 "ENTRY_10cf3a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf3a20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf3a40; body size 18 bytes.
#line 1 "ENTRY_10cf3a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf3a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf3a60; body size 3 bytes.
#line 1 "ENTRY_10cf3a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3a60(void)

{
  return;
}


// Reference entry 10cf3a70; body size 3 bytes.
#line 1 "ENTRY_10cf3a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3a70(void)

{
  return;
}


// Reference entry 10cf3b90; body size 118 bytes.
#line 1 "ENTRY_10cf3b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf3b90(int *param_2,int *param_3)
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
      if ((int)puVar2[4] < *param_3) {
        puVar3 = (undefined4 *)((undefined4 *)puVar2[2]);
      }
      else {
        if ((*(char *)((int)puVar4 + 0xd) != '\0') && (*param_3 < (int)puVar2[4])) {
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
      if (*param_3 < (int)puVar1[4]) {
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


// Reference entry 10cf3c30; body size 13 bytes.
#line 1 "ENTRY_10cf3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3c30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10cf3c40; body size 5 bytes.
#line 1 "ENTRY_10cf3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3c50; body size 3 bytes.
#line 1 "ENTRY_10cf3c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3c50(void)

{
  return;
}


// Reference entry 10cf3c60; body size 19 bytes.
#line 1 "ENTRY_10cf3c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3c60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10cf3c80; body size 5 bytes.
#line 1 "ENTRY_10cf3c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3c90; body size 86 bytes.
#line 1 "ENTRY_10cf3c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cf3c90(int *param_1,int *param_2)

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


// Reference entry 10cf3d00; body size 5 bytes.
#line 1 "ENTRY_10cf3d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3d10; body size 5 bytes.
#line 1 "ENTRY_10cf3d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3f90; body size 5 bytes.
#line 1 "ENTRY_10cf3f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3fa0; body size 5 bytes.
#line 1 "ENTRY_10cf3fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3fb0; body size 5 bytes.
#line 1 "ENTRY_10cf3fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cf3fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf3fc0; body size 19 bytes.
#line 1 "ENTRY_10cf3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cf3fc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10cf4080; body size 76 bytes.
#line 1 "ENTRY_10cf4080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf4080(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar2 = (void *)((void *)(pvVar2));
  *(void**)((int)pvVar2 + 4) = (void *)(pvVar2);
  *(void**)((int)pvVar2 + 8) = (void *)(pvVar2);
  *(undefined2*)((int)pvVar2 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar2);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(pvVar2);
  uVar1 = (undefined4)(param_1[1]);
  param_1[1] = (undefined4)(param_2[1]);
  param_2[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf4360; body size 65 bytes.
#line 1 "ENTRY_10cf4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cf4360(int *param_2)
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


// Reference entry 10cf43c0; body size 60 bytes.
#line 1 "ENTRY_10cf43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf43c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_105a1d20();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10cf4410; body size 130 bytes.
#line 1 "ENTRY_10cf4410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10cf4410(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_2 + 4));
  *param_1 = (undefined1)(*param_2);
  if ((undefined4 *)((param_1 + 4)) != (undefined4 *)(puVar1)) {
    thunk_FUN_105a1c80();
    *(undefined4*)(param_1 + 4) = (undefined4)(*puVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 8));
    *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
    *puVar1 = (undefined4)(0);
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  }
  puVar1 = (undefined4 *)((undefined4 *)(param_2 + 0x10));
  if ((undefined4 *)((param_1 + 0x10)) != (undefined4 *)(puVar1)) {
    thunk_FUN_105a1d20();
    *(undefined4*)(param_1 + 0x10) = (undefined4)(*puVar1);
    *(undefined4*)(param_1 + 0x14) = (undefined4)(*(undefined4 *)(param_2 + 0x14));
    *(undefined4*)(param_1 + 0x18) = (undefined4)(*(undefined4 *)(param_2 + 0x18));
    *puVar1 = (undefined4)(0);
    *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
    *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  }
  return (undefined1 *)(param_1);
}


// Reference entry 10cf44c0; body size 14 bytes.
#line 1 "ENTRY_10cf44c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10cf44c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10cf44e0; body size 14 bytes.
#line 1 "ENTRY_10cf44e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10cf44e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10cf4500; body size 3 bytes.
#line 1 "ENTRY_10cf4500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf4500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf4510; body size 20 bytes.
#line 1 "ENTRY_10cf4510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf4510(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 10cf4580; body size 142 bytes.
#line 1 "ENTRY_10cf4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10cf4580(int param_2,int param_3)
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
      thunk_FUN_106e09f0(param_1,piVar4[2]);
      piVar3 = (int *)((int *)*piVar4);
      thunk_FUN_1148a50e(piVar4,0x14);
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
      uVar6 = (undefined4)(thunk_FUN_10cf4680(iVar5), 0);
      thunk_FUN_1148a50e(uVar6,0x14);
    } while (param_2 != param_3);
  }
  return (int)(param_3);
}


// Reference entry 10cf4640; body size 51 bytes.
#line 1 "ENTRY_10cf4640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10cf4640(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(param_1);
  ((std::_Tree_unchecked_const_iterator<> *)((_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0>
                *)&uStack_4))->op_inc();
  uVar1 = (undefined4)(thunk_FUN_10cf4680(param_1), 0);
  thunk_FUN_1148a50e(uVar1,0x14);
  return (undefined4)(uStack_4);
}


// Reference entry 10cf4a20; body size 3 bytes.
#line 1 "ENTRY_10cf4a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cf4a20(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10cf4a30; body size 33 bytes.
#line 1 "ENTRY_10cf4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf4a30(undefined4 *param_2)
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


// Reference entry 10cf4a60; body size 43 bytes.
#line 1 "ENTRY_10cf4a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf4a60(undefined4 *param_2)
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


// Reference entry 10cf4aa0; body size 13 bytes.
#line 1 "ENTRY_10cf4aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf4aa0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf4ab0; body size 11 bytes.
#line 1 "ENTRY_10cf4ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf4ab0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cf4b10; body size 13 bytes.
#line 1 "ENTRY_10cf4b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf4b10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf4b20; body size 13 bytes.
#line 1 "ENTRY_10cf4b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf4b20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf4b90; body size 11 bytes.
#line 1 "ENTRY_10cf4b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf4b90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cf4ba0; body size 11 bytes.
#line 1 "ENTRY_10cf4ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf4ba0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10cf50f0; body size 22 bytes.
#line 1 "ENTRY_10cf50f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cf50f0(undefined4 *param_1)

{
  thunk_FUN_10cf3e20(*(undefined4 *)*param_1,(undefined4 *)*param_1);
  return;
}


// Reference entry 10cf5240; body size 7 bytes.
#line 1 "ENTRY_10cf5240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10cf5240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10cf5320; body size 119 bytes.
#line 1 "ENTRY_10cf5320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10cf5320(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)(*(int **)*param_1);
  cVar1 = (char)(*(char *)((int)piVar4 + 0xd));
  while (cVar1 == '\0') {
    param_1 = (undefined4 *)((undefined4 *)piVar4[4]);
    thunk_FUN_10cf4bb0<>(&param_1);
    piVar2 = (int *)((int *)piVar4[2]);
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      cVar1 = (char)(*(char *)(*piVar2 + 0xd));
      piVar4 = (int *)(piVar2);
      piVar2 = (int *)((int *)*piVar2);
      while (cVar1 == '\0') {
        cVar1 = (char)(*(char *)(*piVar2 + 0xd));
        piVar4 = (int *)(piVar2);
        piVar2 = (int *)((int *)*piVar2);
      }
    }
    else {
      cVar1 = (char)(*(char *)(piVar4[1] + 0xd));
      piVar3 = (int *)((int *)piVar4[1]);
      piVar2 = (int *)(piVar4);
      while ((piVar4 = (int *)(piVar3), cVar1 == '\0' && ((int *)(piVar2) == (int *)piVar4[2]))) {
        cVar1 = (char)(*(char *)(piVar4[1] + 0xd));
        piVar3 = (int *)((int *)piVar4[1]);
        piVar2 = (int *)(piVar4);
      }
    }
    cVar1 = (char)(*(char *)((int)piVar4 + 0xd));
  }
  return;
}


// Reference entry 10cf53e0; body size 6 bytes.
#line 1 "ENTRY_10cf53e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cf53e0(void)

{
  return (char *)("SCIOpValidateServiceCredentials");
}


// Reference entry 10cf5480; body size 27 bytes.
#line 1 "ENTRY_10cf5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf5480(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf5650; body size 9 bytes.
#line 1 "ENTRY_10cf5650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf5650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpValidateServiceCredentials);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf58b0; body size 11 bytes.
#line 1 "ENTRY_10cf58b0"

/* WARNING: Removing unreachable block_10cf58b0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf58b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRefBase);

  FUN_101ba0d0(param_1);

}


// Reference entry 10cf5aa0; body size 7 bytes.
#line 1 "ENTRY_10cf5aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf5aa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cf5b60; body size 71 bytes.
#line 1 "ENTRY_10cf5b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10cf5b60(int *param_2)
{
  int *param_1 = (int *)this;
  undefined4 *puVar1;
  int iVar2;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
    if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
      iVar2 = (int)(thunk_FUN_1123fcd0(puVar1 + 1), 0);
      if (iVar2 == 0) {
        (**(code **)*puVar1)(1);
      }
    }
    iVar2 = (int)(*param_2);
    *param_1 = (int)(iVar2);
    if (iVar2 != 0) {
      thunk_FUN_1123fce0(iVar2 + 4);
    }
  }
  return (int *)(param_1);
}


// Reference entry 10cf5c20; body size 4 bytes.
#line 1 "ENTRY_10cf5c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf5c20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10cf5c30; body size 3 bytes.
#line 1 "ENTRY_10cf5c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf5c30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf61c0; body size 6 bytes.
#line 1 "ENTRY_10cf61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cf61c0(void)

{
  return (char *)("SCIOpValidateServiceCredentials");
}


// Reference entry 10cf64f0; body size 28 bytes.
#line 1 "ENTRY_10cf64f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf64f0(undefined4 *param_1)

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


// Reference entry 10cf6590; body size 12 bytes.
#line 1 "ENTRY_10cf6590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf6590(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x24) = (undefined2)(param_2);
  return;
}


// Reference entry 10cf65e0; body size 16 bytes.
#line 1 "ENTRY_10cf65e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cf65e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf6730; body size 42 bytes.
#line 1 "ENTRY_10cf6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cf6730(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIndexManagerEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 10cf6f40; body size 19 bytes.
#line 1 "ENTRY_10cf6f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf6f40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10cf73d0; body size 3 bytes.
#line 1 "ENTRY_10cf73d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf73d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf8c50; body size 3 bytes.
#line 1 "ENTRY_10cf8c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cf8c50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cf8d60; body size 28 bytes.
#line 1 "ENTRY_10cf8d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10cf8d60(undefined4 *param_1)

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


// Reference entry 10cf9050; body size 21 bytes.
#line 1 "ENTRY_10cf9050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf9050(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10cf9090; body size 21 bytes.
#line 1 "ENTRY_10cf9090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10cf9090(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10cfb1f0; body size 6 bytes.
#line 1 "ENTRY_10cfb1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cfb1f0(void)

{
  return (char *)("SCIDeviceSettingsDataSource");
}


// Reference entry 10cfb7e0; body size 9 bytes.
#line 1 "ENTRY_10cfb7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10cfb7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDeviceSettingsDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10cfcd10; body size 6 bytes.
#line 1 "ENTRY_10cfcd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10cfcd10(void)

{
  return (char *)("SCIDeviceSettingsDataSource");
}


// Reference entry 10cfcd20; body size 7 bytes.
#line 1 "ENTRY_10cfcd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10cfcd20(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10cfe540; body size 39 bytes.
#line 1 "ENTRY_10cfe540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10cfe540(int param_1)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(*(char **)(param_1 + 0xa4), 0);
  if (((char *)(pcVar1) != (char *)(0x0)) && (*pcVar1 != (char)(('\0')))) {
    iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x98) + 4))(pcVar1,1), 0);
    if (iVar2 != 0) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10cfe760; body size 22 bytes.
#line 1 "ENTRY_10cfe760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10cfe760(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10cfea50; body size 3 bytes.
#line 1 "ENTRY_10cfea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cfea50(void)

{
  return;
}


// Reference entry 10cfea60; body size 7 bytes.
#line 1 "ENTRY_10cfea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cfea60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10cfea70; body size 152 bytes.
#line 1 "ENTRY_10cfea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10cfea70(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8 + param_1);
    thunk_FUN_10cff050(param_1,iVar1,iVar2 * 0x10 + param_1,param_4);
    thunk_FUN_10cff050(param_2 + iVar2 * -8,param_2,iVar2 * 8 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_10cff050(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_10cff050(iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_10cff050(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 10cff1e0; body size 93 bytes.
#line 1 "ENTRY_10cff1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10cff1e0(int *param_1,int *param_2,int *param_3)

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


// Reference entry 10cff260; body size 8 bytes.
#line 1 "ENTRY_10cff260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10cff260(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10cffe90; body size 5 bytes.
#line 1 "ENTRY_10cffe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10cffe90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d00060; body size 92 bytes.
#line 1 "ENTRY_10d00060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d00060(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

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
  thunk_FUN_10cffea0(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10d001f0; body size 8 bytes.
#line 1 "ENTRY_10d001f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d001f0(int param_1)

{
  return (int)(param_1 + -8);
}


// Reference entry 10d006f0; body size 5 bytes.
#line 1 "ENTRY_10d006f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d006f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d00700; body size 40 bytes.
#line 1 "ENTRY_10d00700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d00700(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d00740; body size 40 bytes.
#line 1 "ENTRY_10d00740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d00740(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d00780; body size 5 bytes.
#line 1 "ENTRY_10d00780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d00780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d00790; body size 6 bytes.
#line 1 "ENTRY_10d00790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d00790(void)

{
  return (char *)("SCIAlarmMusic");
}


// Reference entry 10d007a0; body size 6 bytes.
#line 1 "ENTRY_10d007a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d007a0(void)

{
  return (char *)("SCIAlarmMusicBrowseItem");
}


// Reference entry 10d008c0; body size 31 bytes.
#line 1 "ENTRY_10d008c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10d008c0(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10d004d0(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00a00; body size 54 bytes.
#line 1 "ENTRY_10d00a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d00a00(undefined4 *param_1)

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


// Reference entry 10d00a50; body size 27 bytes.
#line 1 "ENTRY_10d00a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d00a50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00a80; body size 27 bytes.
#line 1 "ENTRY_10d00a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d00a80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00ab0; body size 16 bytes.
#line 1 "ENTRY_10d00ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d00ab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00b90; body size 32 bytes.
#line 1 "ENTRY_10d00b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d00b90(undefined4 *param_2)
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


// Reference entry 10d00c20; body size 11 bytes.
#line 1 "ENTRY_10d00c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d00c20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d00c30; body size 11 bytes.
#line 1 "ENTRY_10d00c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d00c30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d01300; body size 42 bytes.
#line 1 "ENTRY_10d01300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d01300(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmMusicItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d01640; body size 9 bytes.
#line 1 "ENTRY_10d01640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d01640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAlarmMusic);
  return (undefined4 *)(param_1);
}


// Reference entry 10d01650; body size 9 bytes.
#line 1 "ENTRY_10d01650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d01650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAlarmMusicBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d01820; body size 19 bytes.
#line 1 "ENTRY_10d01820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d01820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d021a0; body size 7 bytes.
#line 1 "ENTRY_10d021a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d021a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d021b0; body size 7 bytes.
#line 1 "ENTRY_10d021b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d021b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d02380; body size 65 bytes.
#line 1 "ENTRY_10d02380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d02380(int *param_2)
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


// Reference entry 10d023e0; body size 7 bytes.
#line 1 "ENTRY_10d023e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d023e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d023f0; body size 3 bytes.
#line 1 "ENTRY_10d023f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d023f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02400; body size 3 bytes.
#line 1 "ENTRY_10d02400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02400(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02410; body size 3 bytes.
#line 1 "ENTRY_10d02410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02420; body size 3 bytes.
#line 1 "ENTRY_10d02420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02420(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02430; body size 3 bytes.
#line 1 "ENTRY_10d02430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02440; body size 3 bytes.
#line 1 "ENTRY_10d02440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02450; body size 18 bytes.
#line 1 "ENTRY_10d02450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d02450(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 10d02470; body size 14 bytes.
#line 1 "ENTRY_10d02470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d02470(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10d02490; body size 14 bytes.
#line 1 "ENTRY_10d02490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d02490(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10d02f80; body size 61 bytes.
#line 1 "ENTRY_10d02f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  FUN_10d02f80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  thunk_FUN_110b7150(param_1,param_2,param_3,param_4,param_5,0,0,0,0,param_6,0,&DAT_1186d2ee, &DAT_1186d2ee,param_7,param_8);
}


// Reference entry 10d02fd0; body size 3 bytes.
#line 1 "ENTRY_10d02fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d02fd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d02fe0; body size 3 bytes.
#line 1 "ENTRY_10d02fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d02fe0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10d03180; body size 11 bytes.
#line 1 "ENTRY_10d03180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d03180(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10d032c0; body size 25 bytes.
#line 1 "ENTRY_10d032c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d032c0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_10ce2c30(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10d03aa0; body size 16 bytes.
#line 1 "ENTRY_10d03aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d03aa0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d03ac0; body size 16 bytes.
#line 1 "ENTRY_10d03ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d03ac0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d03bb0; body size 12 bytes.
#line 1 "ENTRY_10d03bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d03bb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d04580; body size 13 bytes.
#line 1 "ENTRY_10d04580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10d04580(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 10d05500; body size 6 bytes.
#line 1 "ENTRY_10d05500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d05500(void)

{
  return (char *)("SCIAlarmMusic");
}


// Reference entry 10d05510; body size 6 bytes.
#line 1 "ENTRY_10d05510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d05510(void)

{
  return (char *)("SCIAlarmMusicBrowseItem");
}


// Reference entry 10d06d10; body size 3 bytes.
#line 1 "ENTRY_10d06d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d06d10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d06d20; body size 3 bytes.
#line 1 "ENTRY_10d06d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d06d20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d06d30; body size 3 bytes.
#line 1 "ENTRY_10d06d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d06d30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d07850; body size 28 bytes.
#line 1 "ENTRY_10d07850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d07850(undefined4 *param_1)

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


// Reference entry 10d07880; body size 28 bytes.
#line 1 "ENTRY_10d07880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d07880(undefined4 *param_1)

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


// Reference entry 10d078b0; body size 28 bytes.
#line 1 "ENTRY_10d078b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d078b0(undefined4 *param_1)

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


// Reference entry 10d078e0; body size 28 bytes.
#line 1 "ENTRY_10d078e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d078e0(undefined4 *param_1)

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


// Reference entry 10d07910; body size 28 bytes.
#line 1 "ENTRY_10d07910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d07910(undefined4 *param_1)

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


// Reference entry 10d07940; body size 28 bytes.
#line 1 "ENTRY_10d07940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d07940(undefined4 *param_1)

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


// Reference entry 10d07d80; body size 10 bytes.
#line 1 "ENTRY_10d07d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d07d80(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 10d07d90; body size 38 bytes.
#line 1 "ENTRY_10d07d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d07d90(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8) + param_3 * 8);
  thunk_FUN_10d004d0(iVar1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0xc) - iVar1 >> 3,param_2);
  return;
}


// Reference entry 10d08000; body size 26 bytes.
#line 1 "ENTRY_10d08000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d08000(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d08020; body size 43 bytes.
#line 1 "ENTRY_10d08020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d08020(int *param_2)
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


// Reference entry 10d08060; body size 43 bytes.
#line 1 "ENTRY_10d08060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d08060(int *param_2)
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


// Reference entry 10d08580; body size 16 bytes.
#line 1 "ENTRY_10d08580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d08580(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d085a0; body size 16 bytes.
#line 1 "ENTRY_10d085a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d085a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d09160; body size 5 bytes.
#line 1 "ENTRY_10d09160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d09160(undefined4 *param_1)

{
 try {
  uint uVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  uVar1 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAllNodeBrowseItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCAllNodeBrowseItemBase);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCAllNodeBrowseItemBase);
  thunk_FUN_10202e00(uVar1);

  ((SCStr *)((SCStr *)(param_1 + 0x12)))->int_release();
  param_1[0x12] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x11)))->int_release();
  param_1[0x11] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = (undefined4)(0);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 10d09900; body size 3 bytes.
#line 1 "ENTRY_10d09900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d09900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d09910; body size 3 bytes.
#line 1 "ENTRY_10d09910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d09910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d09920; body size 3 bytes.
#line 1 "ENTRY_10d09920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d09920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d0dc30; body size 24 bytes.
#line 1 "ENTRY_10d0dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d0dc30(void)

{
  int iVar1;
  SCLibrary *pSVar2;
  uint3 uVar3;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  iVar1 = (int)(*(int *)(pSVar2 + 0x4c));
  uVar3 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x6c) == 3)) {
    return (int)((uint)uVar3 << 8);
  }
  return (int)(((uint)(uVar3) << 8 | (uint)(1)));
}


// Reference entry 10d0e030; body size 7 bytes.
#line 1 "ENTRY_10d0e030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d0e030(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d102a0; body size 3 bytes.
#line 1 "ENTRY_10d102a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d102a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d102b0; body size 3 bytes.
#line 1 "ENTRY_10d102b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d102b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d102c0; body size 3 bytes.
#line 1 "ENTRY_10d102c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d102c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d10890; body size 28 bytes.
#line 1 "ENTRY_10d10890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d10890(undefined4 *param_1)

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


// Reference entry 10d11510; body size 43 bytes.
#line 1 "ENTRY_10d11510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d11510(int *param_2)
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


// Reference entry 10d11770; body size 26 bytes.
#line 1 "ENTRY_10d11770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d11770(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d118f0; body size 6 bytes.
#line 1 "ENTRY_10d118f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d118f0(void)

{
  return (char *)("SCIBadgeIndicatorSettingsProperty");
}


// Reference entry 10d11900; body size 6 bytes.
#line 1 "ENTRY_10d11900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d11900(void)

{
  return (char *)("SCISettingsBrowseItem");
}


// Reference entry 10d11910; body size 6 bytes.
#line 1 "ENTRY_10d11910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d11910(void)

{
  return (char *)("SCISettingsProperty");
}


// Reference entry 10d11920; body size 27 bytes.
#line 1 "ENTRY_10d11920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d11950; body size 16 bytes.
#line 1 "ENTRY_10d11950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11950(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d11d50; body size 9 bytes.
#line 1 "ENTRY_10d11d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBadgeIndicatorSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10d11d60; body size 9 bytes.
#line 1 "ENTRY_10d11d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISettingsBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d11d70; body size 9 bytes.
#line 1 "ENTRY_10d11d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d11d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10d125b0; body size 7 bytes.
#line 1 "ENTRY_10d125b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d125b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d125d0; body size 7 bytes.
#line 1 "ENTRY_10d125d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d125d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d12890; body size 3 bytes.
#line 1 "ENTRY_10d12890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d12890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d12dc0; body size 8 bytes.
#line 1 "ENTRY_10d12dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d12dc0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x30) != 0);
}


// Reference entry 10d13f90; body size 6 bytes.
#line 1 "ENTRY_10d13f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d13f90(void)

{
  return (char *)("SCIBadgeIndicatorSettingsProperty");
}


// Reference entry 10d13fa0; body size 6 bytes.
#line 1 "ENTRY_10d13fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d13fa0(void)

{
  return (char *)("SCISettingsBrowseItem");
}


// Reference entry 10d13fb0; body size 6 bytes.
#line 1 "ENTRY_10d13fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d13fb0(void)

{
  return (char *)("SCISettingsProperty");
}


// Reference entry 10d14010; body size 24 bytes.
#line 1 "ENTRY_10d14010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10d14010(int param_1)

{
  if ((*(int *)(param_1 + 0x78c) == 0) && (*(char *)(param_1 + 0x801) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10d14030; body size 27 bytes.
#line 1 "ENTRY_10d14030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d14030(int param_1)

{
  char cVar1;
  
  if (*(int **)(param_1 + 0xac) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0xac) + 0x1c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10d14db0; body size 3 bytes.
#line 1 "ENTRY_10d14db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d14db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d14dc0; body size 3 bytes.
#line 1 "ENTRY_10d14dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d14dc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d150c0; body size 28 bytes.
#line 1 "ENTRY_10d150c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d150c0(undefined4 *param_1)

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


// Reference entry 10d150f0; body size 20 bytes.
#line 1 "ENTRY_10d150f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d150f0(int *param_1)

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


// Reference entry 10d15340; body size 25 bytes.
#line 1 "ENTRY_10d15340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d15340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d15360; body size 36 bytes.
#line 1 "ENTRY_10d15360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d15360(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x9c) {
    thunk_FUN_10202e00();
  }
  return;
}


// Reference entry 10d15390; body size 5 bytes.
#line 1 "ENTRY_10d15390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d15390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d153a0; body size 40 bytes.
#line 1 "ENTRY_10d153a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d153a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d153e0; body size 40 bytes.
#line 1 "ENTRY_10d153e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d153e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d15420; body size 9 bytes.
#line 1 "ENTRY_10d15420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d15420(undefined4 param_1,int *param_2)

{ int stack0xfffffffc;
 try {
  int iVar1;
  int iVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  thunk_FUN_1124d790(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  thunk_FUN_10207220();
  iVar1 = (int)(param_2[0x14]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0x13]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0x12]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0x11]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0x10]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xf]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xe]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xd]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xc]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[0xb]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[10]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[9]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[8]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[7]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[6]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[5]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[4]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[3]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[2]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(param_2[1]);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }
  iVar1 = (int)(*param_2);

  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    iVar2 = (int)(thunk_FUN_1123fcd0((char *)(iVar1 + -0x10)), 0);
    if (iVar2 == 0) {
      *(undefined4*)(iVar1 + -8) = (undefined4)(0);
      *(undefined4*)(iVar1 + -0xc) = (undefined4)(0);
      thunk_FUN_113cfb70(iVar1,*(undefined4 *)(iVar1 + -4));
      free((char *)(iVar1 + -0x10));
    }
  }

  return;

 } catch (...) { }
}


// Reference entry 10d154b0; body size 23 bytes.
#line 1 "ENTRY_10d154b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d154b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d154d0; body size 3 bytes.
#line 1 "ENTRY_10d154d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d154d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d154e0; body size 23 bytes.
#line 1 "ENTRY_10d154e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d154e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d15b30; body size 42 bytes.
#line 1 "ENTRY_10d15b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d15b30(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *(undefined1*)(param_1 + 2) = (undefined1)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHistoryDeleteAllActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d15b70; body size 33 bytes.
#line 1 "ENTRY_10d15b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d15b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHistorySignInActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d16080; body size 19 bytes.
#line 1 "ENTRY_10d16080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d16080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d160a0; body size 19 bytes.
#line 1 "ENTRY_10d160a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d160a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d160c0; body size 13 bytes.
#line 1 "ENTRY_10d160c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10d160c0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x9c + *param_1);
}


// Reference entry 10d16610; body size 38 bytes.
#line 1 "ENTRY_10d16610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d16610(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x9c) {
    thunk_FUN_10202e00();
  }
  return;
}


// Reference entry 10d16640; body size 3 bytes.
#line 1 "ENTRY_10d16640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d16640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d16650; body size 3 bytes.
#line 1 "ENTRY_10d16650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d16650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d16f20; body size 58 bytes.
#line 1 "ENTRY_10d16f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d16f20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x9c);
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


// Reference entry 10d16f70; body size 16 bytes.
#line 1 "ENTRY_10d16f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d16f70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d16f90; body size 16 bytes.
#line 1 "ENTRY_10d16f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d16f90(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d17030; body size 4 bytes.
#line 1 "ENTRY_10d17030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d17030(int param_1)

{
  return (int)(param_1 + 0x50);
}


// Reference entry 10d18620; body size 14 bytes.
#line 1 "ENTRY_10d18620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d18620(int *param_1)

{
  (**(code **)(*param_1 + 0x16c))(0x1f5);
  return;
}


// Reference entry 10d186b0; body size 3 bytes.
#line 1 "ENTRY_10d186b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d186b0(void)

{
  return;
}


// Reference entry 10d186c0; body size 44 bytes.
#line 1 "ENTRY_10d186c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d186c0(char param_2)
{
  int *param_1 = (int *)this;
  if ((char)param_1[0xa6] != param_2) {
    *(char*)(param_1 + 0xa6) = (char)(param_2);
    (**(code **)(*param_1 + 0x110))(0);
    thunk_FUN_1020a5b0(0);
  }
  return;
}


// Reference entry 10d187b0; body size 7 bytes.
#line 1 "ENTRY_10d187b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d187b0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10d194f0; body size 28 bytes.
#line 1 "ENTRY_10d194f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d194f0(undefined4 *param_1)

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


// Reference entry 10d19520; body size 28 bytes.
#line 1 "ENTRY_10d19520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d19520(undefined4 *param_1)

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


// Reference entry 10d19770; body size 27 bytes.
#line 1 "ENTRY_10d19770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d19770(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x9c);
}


// Reference entry 10d197f0; body size 39 bytes.
#line 1 "ENTRY_10d197f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d197f0(undefined4 *param_2)
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


// Reference entry 10d19ae0; body size 40 bytes.
#line 1 "ENTRY_10d19ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d19ae0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d1a1b0; body size 52 bytes.
#line 1 "ENTRY_10d1a1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d1a1b0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10564950(param_2,param_3,param_4,1,param_5,0,0,0,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuPlayNowInstantTVDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d1a200; body size 52 bytes.
#line 1 "ENTRY_10d1a200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d1a200(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10564950(param_2,param_3,param_4,0,param_5,0,0,1,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayMenuPlayNowTVDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d1a250; body size 44 bytes.
#line 1 "ENTRY_10d1a250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d1a250(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10564c90<>(param_2,param_3,param_4,0,param_5);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPlayNowTVDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d1abe0; body size 3 bytes.
#line 1 "ENTRY_10d1abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1abe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1abf0; body size 3 bytes.
#line 1 "ENTRY_10d1abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1abf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac00; body size 3 bytes.
#line 1 "ENTRY_10d1ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac10; body size 3 bytes.
#line 1 "ENTRY_10d1ac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac20; body size 3 bytes.
#line 1 "ENTRY_10d1ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac30; body size 3 bytes.
#line 1 "ENTRY_10d1ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1ac40; body size 3 bytes.
#line 1 "ENTRY_10d1ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1ac40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1beb0; body size 16 bytes.
#line 1 "ENTRY_10d1beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1beb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d1d440; body size 3 bytes.
#line 1 "ENTRY_10d1d440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d450; body size 3 bytes.
#line 1 "ENTRY_10d1d450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d460; body size 3 bytes.
#line 1 "ENTRY_10d1d460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d460(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d470; body size 3 bytes.
#line 1 "ENTRY_10d1d470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d470(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d480; body size 3 bytes.
#line 1 "ENTRY_10d1d480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d480(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d490; body size 3 bytes.
#line 1 "ENTRY_10d1d490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d1d490(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d1d5f0; body size 28 bytes.
#line 1 "ENTRY_10d1d5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d5f0(undefined4 *param_1)

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


// Reference entry 10d1d620; body size 28 bytes.
#line 1 "ENTRY_10d1d620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d620(undefined4 *param_1)

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


// Reference entry 10d1d650; body size 28 bytes.
#line 1 "ENTRY_10d1d650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d650(undefined4 *param_1)

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


// Reference entry 10d1d680; body size 28 bytes.
#line 1 "ENTRY_10d1d680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d680(undefined4 *param_1)

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


// Reference entry 10d1d6b0; body size 28 bytes.
#line 1 "ENTRY_10d1d6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d6b0(undefined4 *param_1)

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


// Reference entry 10d1d6e0; body size 28 bytes.
#line 1 "ENTRY_10d1d6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d1d6e0(undefined4 *param_1)

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


// Reference entry 10d1da40; body size 83 bytes.
#line 1 "ENTRY_10d1da40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d1da40(int *param_2)
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


// Reference entry 10d1df50; body size 7 bytes.
#line 1 "ENTRY_10d1df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d1df50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d20200; body size 85 bytes.
#line 1 "ENTRY_10d20200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d20200(int param_1)

{
  undefined4 *puVar1;
  
  thunk_FUN_110b0460(1);
  thunk_FUN_110adac0(-(uint)(param_1 != 0) & param_1 + 0x80U);
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 0xb4));
  *(undefined1*)(param_1 + 0xb0) = (undefined1)(0);
  *(undefined4*)(param_1 + 0xac) = (undefined4)(0);
  thunk_FUN_10ce2c30(*puVar1,*(undefined4 *)(param_1 + 0xb8),puVar1);
  *(undefined4*)(param_1 + 0xb8) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10d22a90; body size 6 bytes.
#line 1 "ENTRY_10d22a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d22a90(void)

{
  return (undefined4)(9);
}


// Reference entry 10d23640; body size 4 bytes.
#line 1 "ENTRY_10d23640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10d23640(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x30));
}


// Reference entry 10d238e0; body size 18 bytes.
#line 1 "ENTRY_10d238e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d238e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23900; body size 22 bytes.
#line 1 "ENTRY_10d23900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d23900(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d239d0; body size 18 bytes.
#line 1 "ENTRY_10d239d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d239d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d239f0; body size 11 bytes.
#line 1 "ENTRY_10d239f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d239f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23bb0; body size 22 bytes.
#line 1 "ENTRY_10d23bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d23bb0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23bd0; body size 11 bytes.
#line 1 "ENTRY_10d23bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d23bd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23be0; body size 19 bytes.
#line 1 "ENTRY_10d23be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d23be0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[9] = (undefined4)(param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23e00; body size 22 bytes.
#line 1 "ENTRY_10d23e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d23e00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d23e20; body size 43 bytes.
#line 1 "ENTRY_10d23e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d23e20(int *param_2)
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


// Reference entry 10d23e60; body size 78 bytes.
#line 1 "ENTRY_10d23e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d23e60(int *param_2)
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


// Reference entry 10d23ed0; body size 16 bytes.
#line 1 "ENTRY_10d23ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d23ed0(SCStr *param_1,SCStr *param_2)

{
  ((SCStr *)(param_1))->op_lt(param_2);
  return;
}


// Reference entry 10d23ef0; body size 25 bytes.
#line 1 "ENTRY_10d23ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d23ef0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10d24170; body size 13 bytes.
#line 1 "ENTRY_10d24170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24170(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d24180; body size 13 bytes.
#line 1 "ENTRY_10d24180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d24190; body size 3 bytes.
#line 1 "ENTRY_10d24190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24190(void)

{
  return;
}


// Reference entry 10d24510; body size 15 bytes.
#line 1 "ENTRY_10d24510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24510(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10d24530; body size 15 bytes.
#line 1 "ENTRY_10d24530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24530(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10d24940; body size 31 bytes.
#line 1 "ENTRY_10d24940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10d24940(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d24b50; body size 84 bytes.
#line 1 "ENTRY_10d24b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d24b50(SCStr *param_1,SCStr *param_2,SCStr *param_3)

{
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_2))->op_lt(param_1), 0);
  if (bVar1) {
    thunk_FUN_101bdde0(param_2,param_1);
  }
  bVar1 = (bool)(((SCStr *)(param_3))->op_lt(param_2), 0);
  if (bVar1) {
    thunk_FUN_101bdde0(param_3,param_2);
    bVar1 = (bool)(((SCStr *)(param_2))->op_lt(param_1), 0);
    if (bVar1) {
      thunk_FUN_101bdde0(param_2,param_1);
    }
  }
  return;
}


// Reference entry 10d25270; body size 64 bytes.
#line 1 "ENTRY_10d25270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25270(SCStr *param_1,int param_2,SCStr *param_3,undefined4 param_4,undefined4 param_5)

{
  if ((SCStr *)(param_1) != (SCStr *)(param_3)) {
    ((SCStr *)(param_3))->int_release();
    *(undefined4*)param_3 = (undefined4)((SCStr *)(*(undefined4 *)param_1));
    ((SCStr *)(param_3))->int_addref();
  }
  thunk_FUN_10d25120(param_1,0,param_2 - (int)param_1 >> 2,param_4,param_5);
  return;
}


// Reference entry 10d25380; body size 130 bytes.
#line 1 "ENTRY_10d25380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25380(int param_1,int param_2,int param_3,SCStr *param_4)

{
  bool bVar1;
  int *piVar2;
  SCStr *pSVar3;
  int iVar4;
  SCStr *this_;
  
  while (param_3 < param_2) {
    iVar4 = (int)(param_2 + -1 >> 1);
    pSVar3 = (SCStr *)((SCStr *)(iVar4 * 4 + param_1));
    bVar1 = (bool)(((SCStr *)(pSVar3))->op_lt(param_4), 0);
    if (!bVar1) break;
    this_ = (SCStr *)((SCStr *)(param_2 * 4 + param_1));
    param_2 = (int)(iVar4);
    if ((SCStr *)(pSVar3) != (SCStr *)(this_)) {
      ((SCStr *)(this_))->int_release();
      *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar3));
      ((SCStr *)(this_))->int_addref();
    }
  }
  pSVar3 = (SCStr *)((SCStr *)(param_2 * 4 + param_1));
  if ((SCStr *)((param_4)) != (SCStr *)(pSVar3)) {
    ((SCStr *)(pSVar3))->int_release();
    *(undefined4*)pSVar3 = (undefined4)((SCStr *)(*(undefined4 *)param_4));
    if ((*(int *)pSVar3 != 0) && (piVar2 = (int *)((int *)(*(int *)pSVar3 + -0x10)), *piVar2 < (int)((0xffff)))) {
      thunk_FUN_1123fce0(piVar2);
    }
    return;
  }
  return;
}


// Reference entry 10d25430; body size 12 bytes.
#line 1 "ENTRY_10d25430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d25430(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_1[9] = (undefined4)(param_1);
  return;
}


// Reference entry 10d25940; body size 3 bytes.
#line 1 "ENTRY_10d25940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10d25940(void)

{
  return (undefined1)(1);
}


// Reference entry 10d259d0; body size 5 bytes.
#line 1 "ENTRY_10d259d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d259d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d259e0; body size 5 bytes.
#line 1 "ENTRY_10d259e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d259e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25a70; body size 5 bytes.
#line 1 "ENTRY_10d25a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25a80; body size 5 bytes.
#line 1 "ENTRY_10d25a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25a90; body size 5 bytes.
#line 1 "ENTRY_10d25a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25aa0; body size 5 bytes.
#line 1 "ENTRY_10d25aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25ab0; body size 13 bytes.
#line 1 "ENTRY_10d25ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10d25ac0; body size 13 bytes.
#line 1 "ENTRY_10d25ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25ac0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10d25ad0; body size 3 bytes.
#line 1 "ENTRY_10d25ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d25ad0(void)

{
  return;
}


// Reference entry 10d25ae0; body size 15 bytes.
#line 1 "ENTRY_10d25ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25ae0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d25b00; body size 15 bytes.
#line 1 "ENTRY_10d25b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25b00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d25b20; body size 5 bytes.
#line 1 "ENTRY_10d25b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25b30; body size 5 bytes.
#line 1 "ENTRY_10d25b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25b40; body size 5 bytes.
#line 1 "ENTRY_10d25b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25bd0; body size 5 bytes.
#line 1 "ENTRY_10d25bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25be0; body size 5 bytes.
#line 1 "ENTRY_10d25be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d25c70; body size 5 bytes.
#line 1 "ENTRY_10d25c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d25c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d260e0; body size 5 bytes.
#line 1 "ENTRY_10d260e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d260e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26170; body size 35 bytes.
#line 1 "ENTRY_10d26170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d26170(int param_1,int param_2)

{
  thunk_FUN_10d25630(param_1,param_2,param_2 - param_1 >> 2,0);
  return;
}


// Reference entry 10d261a0; body size 31 bytes.
#line 1 "ENTRY_10d261a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10d261a0(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10d25630(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d26250; body size 16 bytes.
#line 1 "ENTRY_10d26250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d26250(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d26270; body size 16 bytes.
#line 1 "ENTRY_10d26270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d26270(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d262d0; body size 18 bytes.
#line 1 "ENTRY_10d262d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d262d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d262f0; body size 3 bytes.
#line 1 "ENTRY_10d262f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d262f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26300; body size 3 bytes.
#line 1 "ENTRY_10d26300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d26300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26310; body size 3 bytes.
#line 1 "ENTRY_10d26310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d26310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26360; body size 11 bytes.
#line 1 "ENTRY_10d26360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d26360(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d263f0; body size 11 bytes.
#line 1 "ENTRY_10d263f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d263f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d26400; body size 16 bytes.
#line 1 "ENTRY_10d26400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d26400(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d26420; body size 3 bytes.
#line 1 "ENTRY_10d26420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d26420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d26430; body size 52 bytes.
#line 1 "ENTRY_10d26430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d26430(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d27490; body size 19 bytes.
#line 1 "ENTRY_10d27490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d27490(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10d274b0; body size 19 bytes.
#line 1 "ENTRY_10d274b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d274b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10d27d30; body size 14 bytes.
#line 1 "ENTRY_10d27d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d27d30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10d27d50; body size 14 bytes.
#line 1 "ENTRY_10d27d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d27d50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10d27d70; body size 12 bytes.
#line 1 "ENTRY_10d27d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d27d70(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 10d27d80; body size 7 bytes.
#line 1 "ENTRY_10d27d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d27d80(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d27d90; body size 3 bytes.
#line 1 "ENTRY_10d27d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d27d90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d27da0; body size 3 bytes.
#line 1 "ENTRY_10d27da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d27da0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d27db0; body size 6 bytes.
#line 1 "ENTRY_10d27db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d27db0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10d288a0; body size 31 bytes.
#line 1 "ENTRY_10d288a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d288a0(undefined4 *param_1)

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


// Reference entry 10d288f0; body size 14 bytes.
#line 1 "ENTRY_10d288f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d288f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10d28da0; body size 5 bytes.
#line 1 "ENTRY_10d28da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d28da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e40; body size 3 bytes.
#line 1 "ENTRY_10d28e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e50; body size 3 bytes.
#line 1 "ENTRY_10d28e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e60; body size 3 bytes.
#line 1 "ENTRY_10d28e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e70; body size 3 bytes.
#line 1 "ENTRY_10d28e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e80; body size 3 bytes.
#line 1 "ENTRY_10d28e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28e90; body size 3 bytes.
#line 1 "ENTRY_10d28e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28ea0; body size 3 bytes.
#line 1 "ENTRY_10d28ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d28eb0; body size 3 bytes.
#line 1 "ENTRY_10d28eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d28eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d29150; body size 5 bytes.
#line 1 "ENTRY_10d29150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d29150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d29160; body size 79 bytes.
#line 1 "ENTRY_10d29160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d29160(int param_2)
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


// Reference entry 10d291d0; body size 31 bytes.
#line 1 "ENTRY_10d291d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10d291d0(int *param_1)

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


// Reference entry 10d29310; body size 3 bytes.
#line 1 "ENTRY_10d29310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d29310(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10d29320; body size 11 bytes.
#line 1 "ENTRY_10d29320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d29320(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d29330; body size 83 bytes.
#line 1 "ENTRY_10d29330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d29330(int *param_2)
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


// Reference entry 10d29430; body size 13 bytes.
#line 1 "ENTRY_10d29430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d29430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10d29440; body size 3 bytes.
#line 1 "ENTRY_10d29440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d29440(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d29450; body size 10 bytes.
#line 1 "ENTRY_10d29450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d29450(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 10d29460; body size 4 bytes.
#line 1 "ENTRY_10d29460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d29460(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d294d0; body size 90 bytes.
#line 1 "ENTRY_10d294d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10d294d0(uint param_1)

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


// Reference entry 10d29620; body size 57 bytes.
#line 1 "ENTRY_10d29620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d29620(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10d29670; body size 60 bytes.
#line 1 "ENTRY_10d29670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d29670(int param_1,int param_2)

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


// Reference entry 10d298c0; body size 11 bytes.
#line 1 "ENTRY_10d298c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d298c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10d2ac90; body size 6 bytes.
#line 1 "ENTRY_10d2ac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d2ac90(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10d2aca0; body size 6 bytes.
#line 1 "ENTRY_10d2aca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d2aca0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10d2ae60; body size 3 bytes.
#line 1 "ENTRY_10d2ae60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d2ae60(void)

{
  return;
}


// Reference entry 10d2b0e0; body size 3 bytes.
#line 1 "ENTRY_10d2b0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d2b0e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d2b4c0; body size 28 bytes.
#line 1 "ENTRY_10d2b4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d2b4c0(undefined4 *param_1)

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


// Reference entry 10d2b4f0; body size 28 bytes.
#line 1 "ENTRY_10d2b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d2b4f0(undefined4 *param_1)

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


// Reference entry 10d2d7a0; body size 43 bytes.
#line 1 "ENTRY_10d2d7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d2d7a0(int *param_2)
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


// Reference entry 10d2d7e0; body size 26 bytes.
#line 1 "ENTRY_10d2d7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d2d7e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d2d800; body size 43 bytes.
#line 1 "ENTRY_10d2d800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d2d800(int *param_2)
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


// Reference entry 10d2d840; body size 91 bytes.
#line 1 "ENTRY_10d2d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d2d840(int *param_2)
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


// Reference entry 10d2d8c0; body size 43 bytes.
#line 1 "ENTRY_10d2d8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d2d8c0(int *param_2)
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


// Reference entry 10d2d900; body size 83 bytes.
#line 1 "ENTRY_10d2d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d2d900(int *param_2)
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


// Reference entry 10d2d970; body size 3 bytes.
#line 1 "ENTRY_10d2d970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d2d970(void)

{
  return;
}


// Reference entry 10d2dc10; body size 7 bytes.
#line 1 "ENTRY_10d2dc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d2dc10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d2dc20; body size 3 bytes.
#line 1 "ENTRY_10d2dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d2dc20(void)

{
  return;
}


// Reference entry 10d2dcc0; body size 24 bytes.
#line 1 "ENTRY_10d2dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d2dcc0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10ce3040(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10d2dd10; body size 5 bytes.
#line 1 "ENTRY_10d2dd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d2dd10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d2dd20; body size 18 bytes.
#line 1 "ENTRY_10d2dd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d2dd20(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 10d2dd40; body size 20 bytes.
#line 1 "ENTRY_10d2dd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d2dd40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10d2d980(param_1,param_2,param_2);
  return;
}


// Reference entry 10d2dd60; body size 12 bytes.
#line 1 "ENTRY_10d2dd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d2dd60(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 10d2dea0; body size 12 bytes.
#line 1 "ENTRY_10d2dea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d2dea0(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 8);
}


// Reference entry 10d2dee0; body size 32 bytes.
#line 1 "ENTRY_10d2dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d2dee0(undefined4 *param_2)
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


// Reference entry 10d2df50; body size 16 bytes.
#line 1 "ENTRY_10d2df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d2df50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d30190; body size 18 bytes.
#line 1 "ENTRY_10d30190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d30190(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCVoiceBetaFeedbackBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCVoiceBetaFeedbackBrowseItem);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStaticBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCStaticBrowseItem);
  piVar1 = (int *)((int *)param_1[0x18]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x17] = (undefined4)(0);
    param_1[0x18] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x16]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x15] = (undefined4)(0);
    param_1[0x16] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0x13)))->int_release();
  param_1[0x13] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x11)))->int_release();
  param_1[0x11] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xe)))->int_release();
  param_1[0xe] = (undefined4)(0);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 10d30290; body size 31 bytes.
#line 1 "ENTRY_10d30290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d30290(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10d2d980(*param_2,param_2[1],param_2);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10d302c0; body size 3 bytes.
#line 1 "ENTRY_10d302c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d302c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d302d0; body size 7 bytes.
#line 1 "ENTRY_10d302d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d302d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d302e0; body size 3 bytes.
#line 1 "ENTRY_10d302e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d302e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d302f0; body size 3 bytes.
#line 1 "ENTRY_10d302f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d302f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d30300; body size 3 bytes.
#line 1 "ENTRY_10d30300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d30300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d30310; body size 3 bytes.
#line 1 "ENTRY_10d30310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d30310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d30940; body size 30 bytes.
#line 1 "ENTRY_10d30940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d30940(int param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10ce3cb0(param_2), 0);
  *param_1 = (int)(iVar1);
  param_1[1] = (int)(iVar1);
  param_1[2] = (int)(iVar1 + param_2 * 8);
  return;
}


// Reference entry 10d30970; body size 182 bytes.
#line 1 "ENTRY_10d30970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d30970(uint param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_10ce3ca0();
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
    thunk_FUN_10ce2c30(iVar2,param_1[1],param_1);
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
  iVar2 = (int)(thunk_FUN_10ce3cb0(uVar3), 0);
  *param_1 = (int)(iVar2);
  param_1[1] = (int)(iVar2);
  param_1[2] = (int)(iVar2 + uVar3 * 8);
  return;
}


// Reference entry 10d30ac0; body size 21 bytes.
#line 1 "ENTRY_10d30ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  __stdcall FUN_10d30ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10d2d980(*param_1,param_1[1],param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d381e0; body size 7 bytes.
#line 1 "ENTRY_10d381e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d381e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d39e30; body size 3 bytes.
#line 1 "ENTRY_10d39e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d39e30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d39fc0; body size 28 bytes.
#line 1 "ENTRY_10d39fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d39fc0(undefined4 *param_1)

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


// Reference entry 10d39ff0; body size 28 bytes.
#line 1 "ENTRY_10d39ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d39ff0(undefined4 *param_1)

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


// Reference entry 10d3a910; body size 29 bytes.
#line 1 "ENTRY_10d3a910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3a910(int *param_1)

{
  if ((*(char *)((int)param_1 + 0x102) != '\0') && (*(char *)((int)param_1 + 0x101) != '\0')) {
    (**(code **)(*param_1 + 0x100))(0);
  }
  return;
}


// Reference entry 10d3abf0; body size 27 bytes.
#line 1 "ENTRY_10d3abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d3abf0(void)

{
  int iVar1;
  SCLibrary *pSVar2;
  uint3 uVar3;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  iVar1 = (int)(*(int *)(*(int *)(pSVar2 + 0x4c) + 0x6c));
  uVar3 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 2) && (iVar1 != 4)) {
    return (int)((uint)uVar3 << 8);
  }
  return (int)(((uint)(uVar3) << 8 | (uint)(1)));
}


// Reference entry 10d3ac20; body size 20 bytes.
#line 1 "ENTRY_10d3ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __fastcall FUN_10d3ac20(int param_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 0x118) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 0x118) + 0x20))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d3ac40; body size 24 bytes.
#line 1 "ENTRY_10d3ac40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10d3ac40(int param_1)

{
  if ((*(int *)(param_1 + 0xf8) == 0) && (*(char *)(param_1 + 0xf4) == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 10d3b410; body size 3 bytes.
#line 1 "ENTRY_10d3b410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d3b410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d3cb70; body size 28 bytes.
#line 1 "ENTRY_10d3cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3cb70(undefined4 *param_1)

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


// Reference entry 10d3cd60; body size 43 bytes.
#line 1 "ENTRY_10d3cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d3cd60(int *param_2)
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


// Reference entry 10d3cda0; body size 43 bytes.
#line 1 "ENTRY_10d3cda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d3cda0(int *param_2)
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


// Reference entry 10d3cde0; body size 6 bytes.
#line 1 "ENTRY_10d3cde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d3cde0(void)

{
  return (char *)("SCISpinnerSettingsProperty");
}


// Reference entry 10d3cdf0; body size 27 bytes.
#line 1 "ENTRY_10d3cdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3cdf0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ce20; body size 27 bytes.
#line 1 "ENTRY_10d3ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3ce20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ce50; body size 16 bytes.
#line 1 "ENTRY_10d3ce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3ce50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ce70; body size 16 bytes.
#line 1 "ENTRY_10d3ce70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3ce70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3ce90; body size 16 bytes.
#line 1 "ENTRY_10d3ce90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3ce90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3d370; body size 42 bytes.
#line 1 "ENTRY_10d3d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3d370(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDateTimeManagerEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3d3b0; body size 9 bytes.
#line 1 "ENTRY_10d3d3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3d3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBooleanSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3d3c0; body size 9 bytes.
#line 1 "ENTRY_10d3d3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d3d3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISpinnerSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3dbb0; body size 57 bytes.
#line 1 "ENTRY_10d3dbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d3dbb0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10cf6c80<>(param_2,param_3,param_4,0,1,param_5,4,0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d3e050; body size 19 bytes.
#line 1 "ENTRY_10d3e050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e050(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d3e070; body size 7 bytes.
#line 1 "ENTRY_10d3e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d3e080; body size 7 bytes.
#line 1 "ENTRY_10d3e080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d3e280; body size 32 bytes.
#line 1 "ENTRY_10d3e280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e280(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCScheduleIndexUpdateSettingsItem);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  piVar1 = (int *)((int *)param_1[0x3b]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x3a] = (undefined4)(0);
    param_1[0x3b] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_102cc870();
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1b] = (undefined4)(0);
    param_1[0x1c] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_10cf71a0();

  return;

 } catch (...) { }
}


// Reference entry 10d3e430; body size 18 bytes.
#line 1 "ENTRY_10d3e430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e430(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexItem);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCStaticBrowseItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCStaticBrowseItem);
  piVar1 = (int *)((int *)param_1[0x18]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x17] = (undefined4)(0);
    param_1[0x18] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x16]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x15] = (undefined4)(0);
    param_1[0x16] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  ((SCStr *)((SCStr *)(param_1 + 0x13)))->int_release();
  param_1[0x13] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x11)))->int_release();
  param_1[0x11] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x10)))->int_release();
  param_1[0x10] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xf)))->int_release();
  param_1[0xf] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0xe)))->int_release();
  param_1[0xe] = (undefined4)(0);
  thunk_FUN_103d60a0();
  thunk_FUN_104da760();

  return;

 } catch (...) { }
}


// Reference entry 10d3e450; body size 32 bytes.
#line 1 "ENTRY_10d3e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d3e450(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCViewContributingArtistsSettingsItem);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCBooleanSettingsItemBase);
  piVar1 = (int *)((int *)param_1[0x3b]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x3a] = (undefined4)(0);
    param_1[0x3b] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  thunk_FUN_102cc870();
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  param_1[0x1e] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCSettingsItemBase);
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1b] = (undefined4)(0);
    param_1[0x1c] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x1a] = (undefined4)((uint)&ghidra_vftable_SCIObj);
  thunk_FUN_10cf71a0();

  return;

 } catch (...) { }
}


// Reference entry 10d3e5d0; body size 3 bytes.
#line 1 "ENTRY_10d3e5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d3e5d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d3e5e0; body size 3 bytes.
#line 1 "ENTRY_10d3e5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d3e5e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d3ede0; body size 6 bytes.
#line 1 "ENTRY_10d3ede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d3ede0(void)

{
  return (char *)("SCMusicLibraryManagementDataSource");
}


// Reference entry 10d3ff80; body size 6 bytes.
#line 1 "ENTRY_10d3ff80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d3ff80(void)

{
  return (char *)("SCISpinnerSettingsProperty");
}


// Reference entry 10d41c50; body size 3 bytes.
#line 1 "ENTRY_10d41c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d41c50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d41c60; body size 3 bytes.
#line 1 "ENTRY_10d41c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d41c60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d41c70; body size 3 bytes.
#line 1 "ENTRY_10d41c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d41c70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d420e0; body size 28 bytes.
#line 1 "ENTRY_10d420e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d420e0(undefined4 *param_1)

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


// Reference entry 10d42110; body size 28 bytes.
#line 1 "ENTRY_10d42110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d42110(undefined4 *param_1)

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


// Reference entry 10d42140; body size 28 bytes.
#line 1 "ENTRY_10d42140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d42140(undefined4 *param_1)

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


// Reference entry 10d422f0; body size 21 bytes.
#line 1 "ENTRY_10d422f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d422f0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10d42310; body size 21 bytes.
#line 1 "ENTRY_10d42310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d42310(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 0x18))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10d42330; body size 78 bytes.
#line 1 "ENTRY_10d42330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d42330(int *param_2)
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


// Reference entry 10d423a0; body size 40 bytes.
#line 1 "ENTRY_10d423a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d423a0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d423e0; body size 40 bytes.
#line 1 "ENTRY_10d423e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d423e0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d43800; body size 7 bytes.
#line 1 "ENTRY_10d43800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d43800(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d44000; body size 16 bytes.
#line 1 "ENTRY_10d44000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d44000(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d44020; body size 16 bytes.
#line 1 "ENTRY_10d44020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d44020(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d499e0; body size 28 bytes.
#line 1 "ENTRY_10d499e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d499e0(undefined4 *param_1)

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


// Reference entry 10d49ef0; body size 11 bytes.
#line 1 "ENTRY_10d49ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d49ef0(int param_1)

{
                    
                    
  (**(code **)(**(int **)(param_1 + 0xb8) + 100))();
  return;
}


// Reference entry 10d49f00; body size 91 bytes.
#line 1 "ENTRY_10d49f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d49f00(int *param_2)
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


// Reference entry 10d49f80; body size 91 bytes.
#line 1 "ENTRY_10d49f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d49f80(int *param_2)
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


// Reference entry 10d4a000; body size 26 bytes.
#line 1 "ENTRY_10d4a000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d4a000(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d4a2c0; body size 40 bytes.
#line 1 "ENTRY_10d4a2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d4a2c0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d4a300; body size 40 bytes.
#line 1 "ENTRY_10d4a300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d4a300(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d4a340; body size 40 bytes.
#line 1 "ENTRY_10d4a340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d4a340(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d4a380; body size 40 bytes.
#line 1 "ENTRY_10d4a380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d4a380(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0(&param_1,param_2);
  return;
}


// Reference entry 10d4a3c0; body size 6 bytes.
#line 1 "ENTRY_10d4a3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d4a3c0(void)

{
  return (char *)("SCICommittable");
}


// Reference entry 10d4a3d0; body size 32 bytes.
#line 1 "ENTRY_10d4a3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4a3d0(undefined4 *param_2)
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


// Reference entry 10d4a480; body size 32 bytes.
#line 1 "ENTRY_10d4a480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4a480(undefined4 *param_2)
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


// Reference entry 10d4a4b0; body size 32 bytes.
#line 1 "ENTRY_10d4a4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4a4b0(undefined4 *param_2)
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


// Reference entry 10d4a4e0; body size 32 bytes.
#line 1 "ENTRY_10d4a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d4a4e0(undefined4 *param_2)
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


// Reference entry 10d4a510; body size 16 bytes.
#line 1 "ENTRY_10d4a510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4a510(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4a5e0; body size 16 bytes.
#line 1 "ENTRY_10d4a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4a5e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4a600; body size 16 bytes.
#line 1 "ENTRY_10d4a600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4a600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4ad50; body size 9 bytes.
#line 1 "ENTRY_10d4ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4ad50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICommittable);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4ad60; body size 9 bytes.
#line 1 "ENTRY_10d4ad60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d4ad60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIReorderable);
  return (undefined4 *)(param_1);
}


// Reference entry 10d4c310; body size 65 bytes.
#line 1 "ENTRY_10d4c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d4c310(int *param_2)
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


// Reference entry 10d4c450; body size 3 bytes.
#line 1 "ENTRY_10d4c450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4c460; body size 7 bytes.
#line 1 "ENTRY_10d4c460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d4c460(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d4c470; body size 7 bytes.
#line 1 "ENTRY_10d4c470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d4c470(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d4c480; body size 3 bytes.
#line 1 "ENTRY_10d4c480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c480(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4c490; body size 3 bytes.
#line 1 "ENTRY_10d4c490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c490(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4c4a0; body size 3 bytes.
#line 1 "ENTRY_10d4c4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c4a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4c4b0; body size 3 bytes.
#line 1 "ENTRY_10d4c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4c4b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d4d8b0; body size 16 bytes.
#line 1 "ENTRY_10d4d8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d8b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d4d8d0; body size 16 bytes.
#line 1 "ENTRY_10d4d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d8d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d4d8f0; body size 16 bytes.
#line 1 "ENTRY_10d4d8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d8f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d4d910; body size 16 bytes.
#line 1 "ENTRY_10d4d910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d910(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d4d930; body size 9 bytes.
#line 1 "ENTRY_10d4d930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d4d930(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d507b0; body size 7 bytes.
#line 1 "ENTRY_10d507b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d507b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x120));
}


// Reference entry 10d507c0; body size 6 bytes.
#line 1 "ENTRY_10d507c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d507c0(void)

{
  return (char *)("SCICommittable");
}


// Reference entry 10d51170; body size 3 bytes.
#line 1 "ENTRY_10d51170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d51170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d51320; body size 28 bytes.
#line 1 "ENTRY_10d51320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51320(undefined4 *param_1)

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


// Reference entry 10d51350; body size 28 bytes.
#line 1 "ENTRY_10d51350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51350(undefined4 *param_1)

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


// Reference entry 10d51380; body size 28 bytes.
#line 1 "ENTRY_10d51380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51380(undefined4 *param_1)

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


// Reference entry 10d513b0; body size 28 bytes.
#line 1 "ENTRY_10d513b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d513b0(undefined4 *param_1)

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


// Reference entry 10d513e0; body size 28 bytes.
#line 1 "ENTRY_10d513e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d513e0(undefined4 *param_1)

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


// Reference entry 10d51410; body size 28 bytes.
#line 1 "ENTRY_10d51410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51410(undefined4 *param_1)

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


// Reference entry 10d51440; body size 28 bytes.
#line 1 "ENTRY_10d51440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51440(undefined4 *param_1)

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


// Reference entry 10d515c0; body size 10 bytes.
#line 1 "ENTRY_10d515c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d515c0(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2);
}


// Reference entry 10d51790; body size 115 bytes.
#line 1 "ENTRY_10d51790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d51790(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCMediaServerBrowseDataSource);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x20] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x21] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x22] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x23] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x25] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x94] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCAsyncBrowseDataSource);
  if ((int *)param_1[0x9a] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x9a] + 0x18))(param_1[0x97],uVar2);
  }

  ((SCStr *)((SCStr *)(param_1 + 0x9e)))->int_release();
  param_1[0x9e] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[0x9b]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x9a] = (undefined4)(0);
    param_1[0x9b] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x96] = (undefined4)((uint)&ghidra_vftable_SCShareManagerEventSink);
  piVar1 = (int *)((int *)param_1[0x98]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x97] = (undefined4)(0);
    param_1[0x98] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  param_1[0x95] = (undefined4)((uint)&ghidra_vftable_SCSwfObjBCListener);
  thunk_FUN_110a9ef0();
  thunk_FUN_10203970();

  return;

 } catch (...) { }
}


// Reference entry 10d51f90; body size 24 bytes.
#line 1 "ENTRY_10d51f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10d51f90(void)

{
  int iVar1;
  SCLibrary *pSVar2;
  uint3 uVar3;
  
  pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  iVar1 = (int)(*(int *)(pSVar2 + 0x4c));
  uVar3 = (uint3)((uint3)((uint)iVar1 >> 8));
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x6c) == 3)) {
    return (int)((uint)uVar3 << 8);
  }
  return (int)(((uint)(uVar3) << 8 | (uint)(1)));
}


// Reference entry 10d52340; body size 7 bytes.
#line 1 "ENTRY_10d52340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10d52340(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x1c44));
}


// Reference entry 10d52780; body size 25 bytes.
#line 1 "ENTRY_10d52780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d52780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d52860; body size 78 bytes.
#line 1 "ENTRY_10d52860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d52860(int *param_2)
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


// Reference entry 10d529d0; body size 33 bytes.
#line 1 "ENTRY_10d529d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d529d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x30) {
    thunk_FUN_10d53f30();
  }
  return;
}


// Reference entry 10d52a00; body size 23 bytes.
#line 1 "ENTRY_10d52a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d52a00(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d53a40(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x30);
  return;
}


// Reference entry 10d52b20; body size 23 bytes.
#line 1 "ENTRY_10d52b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d52b20(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d53a40(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x30);
  return;
}


// Reference entry 10d52e50; body size 7 bytes.
#line 1 "ENTRY_10d52e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d52e50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d52ec0; body size 5 bytes.
#line 1 "ENTRY_10d52ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d52ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d530c0; body size 5 bytes.
#line 1 "ENTRY_10d530c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d530c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d530d0; body size 14 bytes.
#line 1 "ENTRY_10d530d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d530d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10d53a40(param_3);
  return;
}


// Reference entry 10d530f0; body size 14 bytes.
#line 1 "ENTRY_10d530f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d530f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10d53a40(param_3);
  return;
}


// Reference entry 10d53200; body size 9 bytes.
#line 1 "ENTRY_10d53200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d53200(undefined4 param_1,SCStr *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  ((SCStr *)(param_2 + 0x18))->int_release();
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);

  ((SCStr *)(param_2 + 0x10))->int_release();
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  piVar1 = (int *)(*(int **)(param_2 + 0xc), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }

  ((SCStr *)(param_2))->int_release();
  *(undefined4*)param_2 = (undefined4)((SCStr *)(0));

  return;

 } catch (...) { }
}


// Reference entry 10d53210; body size 40 bytes.
#line 1 "ENTRY_10d53210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d53210(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10d53a40(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x30);
    return;
  }
  thunk_FUN_10d52b40(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10d53250; body size 5 bytes.
#line 1 "ENTRY_10d53250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d53250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d53260; body size 5 bytes.
#line 1 "ENTRY_10d53260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d53260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d53290; body size 5 bytes.
#line 1 "ENTRY_10d53290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d53290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d532c0; body size 6 bytes.
#line 1 "ENTRY_10d532c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d532c0(void)

{
  return (char *)("SCIAggregateBrowseDataSource");
}


// Reference entry 10d533d0; body size 5 bytes.
#line 1 "ENTRY_10d533d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d533d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d53420; body size 21 bytes.
#line 1 "ENTRY_10d53420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d53420(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53440; body size 11 bytes.
#line 1 "ENTRY_10d53440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d53440(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53450; body size 11 bytes.
#line 1 "ENTRY_10d53450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d53450(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53460; body size 23 bytes.
#line 1 "ENTRY_10d53460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d53460(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53480; body size 3 bytes.
#line 1 "ENTRY_10d53480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d53480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d53490; body size 23 bytes.
#line 1 "ENTRY_10d53490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d53490(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53940; body size 9 bytes.
#line 1 "ENTRY_10d53940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d53940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAggregateBrowseDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10d53b30; body size 42 bytes.
#line 1 "ENTRY_10d53b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d53b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d54000; body size 14 bytes.
#line 1 "ENTRY_10d54000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d54000(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10d54020; body size 14 bytes.
#line 1 "ENTRY_10d54020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d54020(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10d54040; body size 15 bytes.
#line 1 "ENTRY_10d54040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10d54040(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x30 + *param_1);
}


// Reference entry 10d54060; body size 3 bytes.
#line 1 "ENTRY_10d54060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54060(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d54070; body size 3 bytes.
#line 1 "ENTRY_10d54070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54070(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d54080; body size 6 bytes.
#line 1 "ENTRY_10d54080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10d54080(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x30);
  return (int *)(param_1);
}


// Reference entry 10d54090; body size 6 bytes.
#line 1 "ENTRY_10d54090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10d54090(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x30);
  return (int *)(param_1);
}


// Reference entry 10d54270; body size 63 bytes.
#line 1 "ENTRY_10d54270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10d54270(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)((param_1[2] - *param_1) / 0x30);
  if (0x5555555 - (uVar1 >> 1) < uVar1) {
    return (uint)(0x5555555);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10d54380; body size 3 bytes.
#line 1 "ENTRY_10d54380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d54380(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10d54560; body size 3 bytes.
#line 1 "ENTRY_10d54560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d54570; body size 3 bytes.
#line 1 "ENTRY_10d54570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d54580; body size 3 bytes.
#line 1 "ENTRY_10d54580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d54590; body size 3 bytes.
#line 1 "ENTRY_10d54590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d54590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d545e0; body size 3 bytes.
#line 1 "ENTRY_10d545e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d545e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10d545f0; body size 6 bytes.
#line 1 "ENTRY_10d545f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d545f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10d54960; body size 90 bytes.
#line 1 "ENTRY_10d54960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10d54960(uint param_1)

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


// Reference entry 10d549e0; body size 11 bytes.
#line 1 "ENTRY_10d549e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d549e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10d549f0; body size 23 bytes.
#line 1 "ENTRY_10d549f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d549f0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x30);
}


// Reference entry 10d54aa0; body size 165 bytes.
#line 1 "ENTRY_10d54aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d54aa0(int param_1)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  
  thunk_FUN_112af4e0("SCAggregateSearchDataSource",4,"Dumping DS Array. size=%zu, totalItems=%d", (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0)) / 0x30, *(undefined4 *)(param_1 + 0xb0));
  puVar4 = (undefined4 *)(*(undefined4 **)(param_1 + 0xd0), 0);
  iVar3 = (int)(0);
  if ((undefined4 *)(puVar4) != *(undefined4 **)(param_1 + 0xd4)) {
    do {
      puVar2 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)puVar4[4] != (undefined1 *)(((0x0)))) {
        puVar2 = (undefined1 *)((undefined1 *)puVar4[4]);
      }
      puVar5 = (undefined1 *)(&DAT_1186d2ee);
      if ((undefined1 *)*puVar4 != (undefined1 *)((0x0))) {
        puVar5 = (undefined1 *)((undefined1 *)*puVar4);
      }
      uVar1 = (undefined4)((**(code **)(*(int *)puVar4[2] + 0x58))(puVar4[1]), 0);
      thunk_FUN_112af4e0("SCAggregateSearchDataSource",4, "Entry %d:\n\t\t SCUri: %s\n\t\t Group: %s\n\t\t DataSource Size: %d\t\t Visible Elements: %d"
                         ,iVar3,puVar5,puVar2,uVar1);
      puVar4 = (undefined4 *)(puVar4 + 0xc);
      iVar3 = (int)(iVar3 + 1);
    } while ((undefined4 *)(puVar4) != *(undefined4 **)(param_1 + 0xd4));
  }
  return;
}


// Reference entry 10d54b70; body size 12 bytes.
#line 1 "ENTRY_10d54b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d54b70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10d55ca0; body size 85 bytes.
#line 1 "ENTRY_10d55ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d55ca0(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = (int)(*(int *)(param_1 + 0xd0));
  if (((param_2 < (uint)((*(int *)(param_1 + 0xd4) - iVar1) / 0x30)) &&
      (piVar2 = (int *)(*(int **)(iVar1 + 8 + param_2 * 0x30), 0),(int *)( piVar2) != (int *)(0x0))) &&
     (*(char *)(iVar1 + 0x1c + param_2 * 0x30) != '\0')) {
    uVar3 = (uint)((**(code **)(*piVar2 + 0x58))(), 0);
    return (bool)(*(uint *)(iVar1 + 4 + param_2 * 0x30) < (uint)(uVar3));
  }
  return (bool)(false);
}


// Reference entry 10d55d10; body size 6 bytes.
#line 1 "ENTRY_10d55d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d55d10(void)

{
  return (char *)("SCIAggregateBrowseDataSource");
}


// Reference entry 10d56da0; body size 47 bytes.
#line 1 "ENTRY_10d56da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d56da0(int param_2)
{
  int param_1 = (int )this;
  if (*(int **)(param_2 + 8) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_2 + 8) + 0x14))(*(undefined4 *)(param_1 + 0x8c));
  }
  *(undefined1*)(param_2 + 0x14) = (undefined1)(1);
  thunk_FUN_1145c930(param_2 + 0x20,0);
  return;
}


// Reference entry 10d57070; body size 6 bytes.
#line 1 "ENTRY_10d57070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d57070(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10d57080; body size 6 bytes.
#line 1 "ENTRY_10d57080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d57080(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10d58840; body size 40 bytes.
#line 1 "ENTRY_10d58840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d58840(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10d53a40(param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x30);
    return;
  }
  thunk_FUN_10d52b40(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10d58c20; body size 23 bytes.
#line 1 "ENTRY_10d58c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d58c20(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x30);
}


// Reference entry 10d58ca0; body size 26 bytes.
#line 1 "ENTRY_10d58ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d58ca0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d58de0; body size 6 bytes.
#line 1 "ENTRY_10d58de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d58de0(void)

{
  return (char *)("SCIReorderable");
}


// Reference entry 10d58ed0; body size 16 bytes.
#line 1 "ENTRY_10d58ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d58ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d58ef0; body size 16 bytes.
#line 1 "ENTRY_10d58ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d58ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d59790; body size 7 bytes.
#line 1 "ENTRY_10d59790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d59790(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d597a0; body size 3 bytes.
#line 1 "ENTRY_10d597a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d597a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d597b0; body size 3 bytes.
#line 1 "ENTRY_10d597b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d597b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5a500; body size 6 bytes.
#line 1 "ENTRY_10d5a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d5a500(void)

{
  return (char *)("SCIReorderable");
}


// Reference entry 10d5a7c0; body size 7 bytes.
#line 1 "ENTRY_10d5a7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d5a7c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d5a7d0; body size 7 bytes.
#line 1 "ENTRY_10d5a7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d5a7d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d5a980; body size 3 bytes.
#line 1 "ENTRY_10d5a980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5a980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5acb0; body size 28 bytes.
#line 1 "ENTRY_10d5acb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5acb0(undefined4 *param_1)

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


// Reference entry 10d5ace0; body size 28 bytes.
#line 1 "ENTRY_10d5ace0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5ace0(undefined4 *param_1)

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


// Reference entry 10d5b2d0; body size 25 bytes.
#line 1 "ENTRY_10d5b2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5b2d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5b2f0; body size 33 bytes.
#line 1 "ENTRY_10d5b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d5b2f0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x20) {
    thunk_FUN_10d5e270();
  }
  return;
}


// Reference entry 10d5b3f0; body size 29 bytes.
#line 1 "ENTRY_10d5b3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d5b3f0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d5d950(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 10d5b420; body size 27 bytes.
#line 1 "ENTRY_10d5b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d5b420(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d5d950(param_1,*(undefined4 *)(param_1 + 4),param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 10d5b770; body size 7 bytes.
#line 1 "ENTRY_10d5b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5b770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5b780; body size 150 bytes.
#line 1 "ENTRY_10d5b780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d5b780(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8);
    thunk_FUN_10d5bca0(param_1,iVar1 + param_1,iVar2 * 0x10 + param_1,param_4);
    thunk_FUN_10d5bca0(param_2 + iVar2 * -8,param_2,iVar1 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_10d5bca0(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_10d5bca0(param_1 + iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_10d5bca0(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 10d5cd50; body size 5 bytes.
#line 1 "ENTRY_10d5cd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10d5cd50(undefined1 param_1)

{
  return (undefined1)(param_1);
}


// Reference entry 10d5cf80; body size 92 bytes.
#line 1 "ENTRY_10d5cf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d5cf80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

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
  thunk_FUN_10d5cd60(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10d5d6e0; body size 5 bytes.
#line 1 "ENTRY_10d5d6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5d6e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5da10; body size 9 bytes.
#line 1 "ENTRY_10d5da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d5da10(undefined4 param_1,undefined4 *param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)((int *)param_2[7]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_2[6] = (undefined4)(0);
    param_2[7] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_2[3]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_2[2] = (undefined4)(0);
    param_2[3] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  piVar1 = (int *)((int *)param_2[1]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }

  return;

 } catch (...) { }
}


// Reference entry 10d5da20; body size 42 bytes.
#line 1 "ENTRY_10d5da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d5da20(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10d5d950(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_10d5b450(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10d5da60; body size 5 bytes.
#line 1 "ENTRY_10d5da60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5da60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5da70; body size 5 bytes.
#line 1 "ENTRY_10d5da70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5da70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5da80; body size 5 bytes.
#line 1 "ENTRY_10d5da80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5da80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5da90; body size 31 bytes.
#line 1 "ENTRY_10d5da90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10d5da90(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10d5d430(param_1,param_2,param_2 - param_1 >> 3,param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5dac0; body size 16 bytes.
#line 1 "ENTRY_10d5dac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5dac0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5dae0; body size 32 bytes.
#line 1 "ENTRY_10d5dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d5dae0(undefined4 *param_2)
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


// Reference entry 10d5db50; body size 21 bytes.
#line 1 "ENTRY_10d5db50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d5db50(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5db70; body size 23 bytes.
#line 1 "ENTRY_10d5db70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5db70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5db90; body size 3 bytes.
#line 1 "ENTRY_10d5db90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5db90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5dba0; body size 23 bytes.
#line 1 "ENTRY_10d5dba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5dba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5dd60; body size 9 bytes.
#line 1 "ENTRY_10d5dd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d5dd60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAggregateHelperCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10d5e4d0; body size 5 bytes.
#line 1 "ENTRY_10d5e4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5e4d0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAddPlaylistDescriptor);

  ((SCStr *)((SCStr *)(param_1 + 7)))->int_release();
  param_1[7] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 6)))->int_release();
  param_1[6] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[3]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[2] = (undefined4)(0);
    param_1[3] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10d5e550; body size 3 bytes.
#line 1 "ENTRY_10d5e550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e550(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5e560; body size 3 bytes.
#line 1 "ENTRY_10d5e560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d5e8b0; body size 49 bytes.
#line 1 "ENTRY_10d5e8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10d5e8b0(uint param_2)
{
  int *param_1 = (int *)this;
  uint uVar1;
  
  uVar1 = (uint)(param_1[2] - *param_1 >> 5);
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    return (uint)(0x7ffffff);
  }
  uVar1 = (uint)((uVar1 >> 1) + uVar1);
  if (uVar1 < param_2) {
    uVar1 = (uint)(param_2);
  }
  return (uint)(uVar1);
}


// Reference entry 10d5e9c0; body size 3 bytes.
#line 1 "ENTRY_10d5e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5e9d0; body size 3 bytes.
#line 1 "ENTRY_10d5e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e9d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5e9e0; body size 3 bytes.
#line 1 "ENTRY_10d5e9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5e9f0; body size 3 bytes.
#line 1 "ENTRY_10d5e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d5e9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d5ea00; body size 3 bytes.
#line 1 "ENTRY_10d5ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d5ea00(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10d5ea10; body size 6 bytes.
#line 1 "ENTRY_10d5ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5ea10(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10d5efc0; body size 9 bytes.
#line 1 "ENTRY_10d5efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10d5efc0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 5);
}


// Reference entry 10d5fbb0; body size 35 bytes.
#line 1 "ENTRY_10d5fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d5fbb0(int param_1)

{
  thunk_FUN_10d5d430(*(int *)(param_1 + 0xac),*(int *)(param_1 + 0xb0), *(int *)(param_1 + 0xb0) - *(int *)(param_1 + 0xac) >> 3,param_1);
  return;
}


// Reference entry 10d5fc40; body size 6 bytes.
#line 1 "ENTRY_10d5fc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5fc40(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10d5fc50; body size 6 bytes.
#line 1 "ENTRY_10d5fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d5fc50(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10d602a0; body size 3 bytes.
#line 1 "ENTRY_10d602a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d602a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d602b0; body size 3 bytes.
#line 1 "ENTRY_10d602b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d602b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d602c0; body size 42 bytes.
#line 1 "ENTRY_10d602c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d602c0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10d5d950(param_1);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_10d5b450(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10d60390; body size 28 bytes.
#line 1 "ENTRY_10d60390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d60390(undefined4 *param_1)

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


// Reference entry 10d603c0; body size 28 bytes.
#line 1 "ENTRY_10d603c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d603c0(undefined4 *param_1)

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


// Reference entry 10d61650; body size 21 bytes.
#line 1 "ENTRY_10d61650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10d61650(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAccountTransferAccountItem");
  return (SCStr *)(param_1);
}


// Reference entry 10d635f0; body size 3 bytes.
#line 1 "ENTRY_10d635f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d635f0(void)

{
  return;
}


// Reference entry 10d63d90; body size 6 bytes.
#line 1 "ENTRY_10d63d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d63d90(void)

{
  return (char *)("SCISearchHistoryBrowseDataSource");
}


// Reference entry 10d63da0; body size 6 bytes.
#line 1 "ENTRY_10d63da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d63da0(void)

{
  return (char *)("SCISearchHistoryBrowseItem");
}


// Reference entry 10d63db0; body size 6 bytes.
#line 1 "ENTRY_10d63db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d63db0(void)

{
  return (char *)("SCISearchHistoryPageDataSource");
}


// Reference entry 10d63dc0; body size 6 bytes.
#line 1 "ENTRY_10d63dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d63dc0(void)

{
  return (char *)("SCISearchHistoryViewBrowseItem");
}


// Reference entry 10d63e40; body size 27 bytes.
#line 1 "ENTRY_10d63e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63e70; body size 27 bytes.
#line 1 "ENTRY_10d63e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63e70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63f20; body size 9 bytes.
#line 1 "ENTRY_10d63f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63f20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchHistoryBrowseDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63f30; body size 9 bytes.
#line 1 "ENTRY_10d63f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63f30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchHistoryBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63f40; body size 9 bytes.
#line 1 "ENTRY_10d63f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63f40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchHistoryPageDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 10d63f50; body size 9 bytes.
#line 1 "ENTRY_10d63f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d63f50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchHistoryViewBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d64170; body size 33 bytes.
#line 1 "ENTRY_10d64170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d64170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchHistoryClearActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10d641a0; body size 47 bytes.
#line 1 "ENTRY_10d641a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d641a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchHistoryClearActionFactory);
  return (undefined4 *)(param_1);
}


// Reference entry 10d64590; body size 19 bytes.
#line 1 "ENTRY_10d64590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d64590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d64710; body size 7 bytes.
#line 1 "ENTRY_10d64710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d64710(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d64730; body size 7 bytes.
#line 1 "ENTRY_10d64730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d64730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d64980; body size 19 bytes.
#line 1 "ENTRY_10d64980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d64980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d64bc0; body size 3 bytes.
#line 1 "ENTRY_10d64bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d64bc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d64bd0; body size 3 bytes.
#line 1 "ENTRY_10d64bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d64bd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d64be0; body size 7 bytes.
#line 1 "ENTRY_10d64be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d64be0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d64bf0; body size 3 bytes.
#line 1 "ENTRY_10d64bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d64bf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d670b0; body size 6 bytes.
#line 1 "ENTRY_10d670b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d670b0(void)

{
  return (char *)("SCISearchHistoryBrowseDataSource");
}


// Reference entry 10d670c0; body size 6 bytes.
#line 1 "ENTRY_10d670c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d670c0(void)

{
  return (char *)("SCISearchHistoryBrowseItem");
}


// Reference entry 10d670d0; body size 6 bytes.
#line 1 "ENTRY_10d670d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d670d0(void)

{
  return (char *)("SCISearchHistoryPageDataSource");
}


// Reference entry 10d670e0; body size 6 bytes.
#line 1 "ENTRY_10d670e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d670e0(void)

{
  return (char *)("SCISearchHistoryViewBrowseItem");
}


// Reference entry 10d67160; body size 7 bytes.
#line 1 "ENTRY_10d67160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d67160(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d67170; body size 7 bytes.
#line 1 "ENTRY_10d67170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d67170(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10d67320; body size 3 bytes.
#line 1 "ENTRY_10d67320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d67320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d67330; body size 3 bytes.
#line 1 "ENTRY_10d67330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d67330(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d677c0; body size 28 bytes.
#line 1 "ENTRY_10d677c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d677c0(undefined4 *param_1)

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


// Reference entry 10d677f0; body size 28 bytes.
#line 1 "ENTRY_10d677f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d677f0(undefined4 *param_1)

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


// Reference entry 10d67820; body size 20 bytes.
#line 1 "ENTRY_10d67820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d67820(int *param_1)

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


// Reference entry 10d68250; body size 18 bytes.
#line 1 "ENTRY_10d68250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68250(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68270; body size 25 bytes.
#line 1 "ENTRY_10d68270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d68270(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68290; body size 22 bytes.
#line 1 "ENTRY_10d68290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d68290(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d682b0; body size 18 bytes.
#line 1 "ENTRY_10d682b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d682b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68390; body size 22 bytes.
#line 1 "ENTRY_10d68390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d68390(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10d683b0; body size 27 bytes.
#line 1 "ENTRY_10d683b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d683b0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d683e0; body size 26 bytes.
#line 1 "ENTRY_10d683e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d683e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d68400; body size 78 bytes.
#line 1 "ENTRY_10d68400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d68400(int *param_2)
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


// Reference entry 10d68470; body size 25 bytes.
#line 1 "ENTRY_10d68470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d68470(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10d68490; body size 13 bytes.
#line 1 "ENTRY_10d68490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d68490(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d684a0; body size 13 bytes.
#line 1 "ENTRY_10d684a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d684a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10d684b0; body size 3 bytes.
#line 1 "ENTRY_10d684b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d684b0(void)

{
  return;
}


// Reference entry 10d68650; body size 15 bytes.
#line 1 "ENTRY_10d68650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d68650(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10d686f0; body size 5 bytes.
#line 1 "ENTRY_10d686f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d686f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68700; body size 31 bytes.
#line 1 "ENTRY_10d68700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10d68700(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10d68840; body size 5 bytes.
#line 1 "ENTRY_10d68840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68850; body size 5 bytes.
#line 1 "ENTRY_10d68850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68860; body size 5 bytes.
#line 1 "ENTRY_10d68860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68870; body size 5 bytes.
#line 1 "ENTRY_10d68870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68880; body size 5 bytes.
#line 1 "ENTRY_10d68880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68890; body size 22 bytes.
#line 1 "ENTRY_10d68890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d68890(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 10d68920; body size 15 bytes.
#line 1 "ENTRY_10d68920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d68940; body size 15 bytes.
#line 1 "ENTRY_10d68940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10d68960; body size 5 bytes.
#line 1 "ENTRY_10d68960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68970; body size 5 bytes.
#line 1 "ENTRY_10d68970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68980; body size 5 bytes.
#line 1 "ENTRY_10d68980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d68980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68990; body size 6 bytes.
#line 1 "ENTRY_10d68990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d68990(void)

{
  return (char *)("SCISearchResultBrowseItem");
}


// Reference entry 10d689a0; body size 27 bytes.
#line 1 "ENTRY_10d689a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d689a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10d689d0; body size 26 bytes.
#line 1 "ENTRY_10d689d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d689d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d689f0; body size 26 bytes.
#line 1 "ENTRY_10d689f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d689f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d68a10; body size 9 bytes.
#line 1 "ENTRY_10d68a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68a10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68a20; body size 18 bytes.
#line 1 "ENTRY_10d68a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d68a20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68a80; body size 11 bytes.
#line 1 "ENTRY_10d68a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d68a80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68a90; body size 11 bytes.
#line 1 "ENTRY_10d68a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d68a90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68b20; body size 11 bytes.
#line 1 "ENTRY_10d68b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d68b20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68b30; body size 16 bytes.
#line 1 "ENTRY_10d68b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d68b50; body size 3 bytes.
#line 1 "ENTRY_10d68b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d68b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d68b60; body size 52 bytes.
#line 1 "ENTRY_10d68b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68b60(undefined4 *param_1)

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


// Reference entry 10d68bb0; body size 9 bytes.
#line 1 "ENTRY_10d68bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d68bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISearchResultBrowseItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10d69840; body size 19 bytes.
#line 1 "ENTRY_10d69840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d69840(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 10d69900; body size 7 bytes.
#line 1 "ENTRY_10d69900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d69900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10d69e50; body size 42 bytes.
#line 1 "ENTRY_10d69e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d69e50(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)*param_1);
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10d69e90; body size 14 bytes.
#line 1 "ENTRY_10d69e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d69e90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10d69eb0; body size 14 bytes.
#line 1 "ENTRY_10d69eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10d69eb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10d69fc0; body size 3 bytes.
#line 1 "ENTRY_10d69fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d69fc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d69fd0; body size 3 bytes.
#line 1 "ENTRY_10d69fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d69fd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d6a7e0; body size 31 bytes.
#line 1 "ENTRY_10d6a7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d6a7e0(undefined4 *param_1)

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


// Reference entry 10d6a830; body size 14 bytes.
#line 1 "ENTRY_10d6a830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10d6a830(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10d6a850; body size 3 bytes.
#line 1 "ENTRY_10d6a850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a860; body size 3 bytes.
#line 1 "ENTRY_10d6a860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a870; body size 3 bytes.
#line 1 "ENTRY_10d6a870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a880; body size 3 bytes.
#line 1 "ENTRY_10d6a880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a890; body size 3 bytes.
#line 1 "ENTRY_10d6a890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a8a0; body size 3 bytes.
#line 1 "ENTRY_10d6a8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a8a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a8b0; body size 3 bytes.
#line 1 "ENTRY_10d6a8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a8b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6a8c0; body size 3 bytes.
#line 1 "ENTRY_10d6a8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6a8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d6ab60; body size 79 bytes.
#line 1 "ENTRY_10d6ab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d6ab60(int param_2)
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


// Reference entry 10d6abd0; body size 3 bytes.
#line 1 "ENTRY_10d6abd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d6abd0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10d6abe0; body size 11 bytes.
#line 1 "ENTRY_10d6abe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d6abe0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10d6abf0; body size 83 bytes.
#line 1 "ENTRY_10d6abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d6abf0(int *param_2)
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


// Reference entry 10d6ad50; body size 90 bytes.
#line 1 "ENTRY_10d6ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10d6ad50(uint param_1)

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


// Reference entry 10d6ba90; body size 57 bytes.
#line 1 "ENTRY_10d6ba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10d6ba90(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10d6bae0; body size 60 bytes.
#line 1 "ENTRY_10d6bae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10d6bae0(int param_1,int param_2)

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


// Reference entry 10d6bb90; body size 8 bytes.
#line 1 "ENTRY_10d6bb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d6bb90(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10d6bba0; body size 11 bytes.
#line 1 "ENTRY_10d6bba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10d6bba0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10d6f0b0; body size 6 bytes.
#line 1 "ENTRY_10d6f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10d6f0b0(void)

{
  return (char *)("SCISearchResultBrowseItem");
}


// Reference entry 10d6f2a0; body size 7 bytes.
#line 1 "ENTRY_10d6f2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d6f2a0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10d6f370; body size 11 bytes.
#line 1 "ENTRY_10d6f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10d6f370(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x298) == 0);
}


// Reference entry 10d6f390; body size 6 bytes.
#line 1 "ENTRY_10d6f390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d6f390(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10d6f3a0; body size 6 bytes.
#line 1 "ENTRY_10d6f3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d6f3a0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10d71350; body size 3 bytes.
#line 1 "ENTRY_10d71350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d71350(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10d73860; body size 4 bytes.
#line 1 "ENTRY_10d73860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10d73860(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10d741c0; body size 26 bytes.
#line 1 "ENTRY_10d741c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10d741c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (int *)(param_1);
}


// Reference entry 10d743f0; body size 5 bytes.
#line 1 "ENTRY_10d743f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d743f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d74400; body size 5 bytes.
#line 1 "ENTRY_10d74400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d74400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d74410; body size 5 bytes.
#line 1 "ENTRY_10d74410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10d74410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10d74420; body size 70 bytes.
#line 1 "ENTRY_10d74420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d74420(undefined4 *param_1)

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


// Reference entry 10d74480; body size 70 bytes.
#line 1 "ENTRY_10d74480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d74480(undefined4 *param_1)

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


// Reference entry 10d744e0; body size 70 bytes.
#line 1 "ENTRY_10d744e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d744e0(undefined4 *param_1)

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


// Reference entry 10d74600; body size 16 bytes.
#line 1 "ENTRY_10d74600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10d74600(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10d74620; body size 26 bytes.
#line 1 "ENTRY_10d74620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10d74620(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


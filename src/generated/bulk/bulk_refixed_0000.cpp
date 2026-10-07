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
struct __RFLD2 { int tm_hour; int tm_isdst; int tm_mday; int tm_min; int tm_mon; int tm_sec; int tm_wday; int tm_yday; int tm_year; };
struct __RFLD { int tm_hour; int tm_isdst; int tm_mday; int tm_min; int tm_mon; int tm_sec; int tm_wday; int tm_yday; int tm_year; };
struct SCLibParameters { char _pad; SCLibParameters(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int hasDeveloperOption(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getSingleton(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int beginsWith(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } template<class... A> int split(A...); };
namespace std { template<class...> struct basic_ios { char _pad; basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int setstate(A...); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_istream { char _pad; basic_istream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int _Ipfx(A...); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int sbumpc(A...); template<class... A> int sgetc(A...); template<class... A> int snextc(A...); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct CancelledFlow { char _pad; CancelledFlow(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Clearing { char _pad; Clearing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Connect { char _pad; Connect(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Connection { char _pad; Connection(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CountryCode { char _pad; CountryCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CountryNames { char _pad; CountryNames(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentTrackMetaData { char _pad; CurrentTrackMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CustomerID { char _pad; CustomerID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct EnqueuedTransportURI { char _pad; EnqueuedTransportURI(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct EnqueuedTransportURIMetaData { char _pad; EnqueuedTransportURIMetaData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Failed { char _pad; Failed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Function { char _pad; Function(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetAllPrefixLocations { char _pad; GetAllPrefixLocations(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Globals { char _pad; Globals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HadError { char _pad; HadError(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LatestSWGen { char _pad; LatestSWGen(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ObjectID { char _pad; ObjectID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct OnSearchForZonePlayers { char _pad; OnSearchForZonePlayers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PlayModelHeroView { char _pad; PlayModelHeroView(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PostalCode { char _pad; PostalCode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct PrefixAndIndexCSV { char _pad; PrefixAndIndexCSV(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCCountryList { char _pad; SCCountryList(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCFetchUpdateManifestOp { char _pad; SCFetchUpdateManifestOp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUrlSessionProvider { char _pad; SCIUrlSessionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSecureRegistrationResetPasswordSuccessOtherState { char _pad; SCSecureRegistrationResetPasswordSuccessOtherState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SkipLogin { char _pad; SkipLogin(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sonos { char _pad; Sonos(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sorting { char _pad; Sorting(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct StashedEmail { char _pad; StashedEmail(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThreadLocalStoragePointer { char _pad; ThreadLocalStoragePointer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct TotalPrefixes { char _pad; TotalPrefixes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct TransferAccount { char _pad; TransferAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Type { char _pad; Type(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UNK_119ca0d8 { char _pad; UNK_119ca0d8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UNK_119ca0e8 { char _pad; UNK_119ca0e8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UPnP { char _pad; UPnP(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unable { char _pad; Unable(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UpdateBranch { char _pad; UpdateBranch(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UpdateID { char _pad; UpdateID(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UsageDataOptIn { char _pad; UsageDataOptIn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UsageDataSet { char _pad; UsageDataSet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int vftable; template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *DB;
typedef void *HTTP;
typedef void *IP;
typedef void *S;
typedef void *SSID;
typedef void *WARNING;
typedef void *X;
typedef void *ZP;
typedef void *_Ipfx;
typedef void *_PtFuncCompare;
typedef void (*_func_void_void_ptr)(...);
using namespace std;
extern int FUN_1005ef7a(...);
extern int FUN_10ba4768(...);
extern int FUN_11124530(...);
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
extern int FUN_11317030(...);
extern int FUN_1131b700(...);
extern int FUN_1131dfc0(...);
extern int FUN_1131f140(...);
extern int FUN_11326440(...);
extern int FUN_11327f70(...);
extern int FUN_1132a0e0(...);
extern int FUN_1132a740(...);
extern int FUN_1132b960(...);
template<class... A> int FUN_1132bb30(A...);
extern int FUN_1132c1f0(...);
extern int FUN_11341510(...);
extern int FUN_113433c0(...);
extern int FUN_113434e0(...);
extern int FUN_113466d0(...);
extern int FUN_11358b90(...);
extern int FUN_1135d530(...);
extern int FUN_1135e7f0(...);
extern int FUN_1135ea30(...);
extern int FUN_1136d300(...);
extern int FUN_113725e0(...);
extern int FUN_1137ead0(...);
extern int FUN_1139c620(...);
extern int FUN_1139c7e0(...);
extern int FUN_1139db10(...);
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
extern int FUN_113b97d0(...);
extern int FUN_11862580(...);
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
extern int createSCNullAsyncOperation(...);
extern int failed(...);
extern int func_0x10015311(...);
extern int hit(...);
extern int operator_new(...);
extern __declspec(dllimport) int qsort(...);
extern int stored(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strtoul(...);
extern int thunk_FUN_10118c40(...);
extern int thunk_FUN_1011be40(...);
extern int thunk_FUN_1012cab0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2bf0(...);
extern int thunk_FUN_101aa0b0(...);
extern int thunk_FUN_101aa9f0(...);
extern int thunk_FUN_101b9160(...);
extern int thunk_FUN_101b9a40(...);
extern int thunk_FUN_101ba300(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101dd3a0(...);
extern int thunk_FUN_101fda20(...);
extern int thunk_FUN_10202e00(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10236af0(...);
extern int thunk_FUN_10281490(...);
extern int thunk_FUN_102a3810(...);
extern int thunk_FUN_102caa30(...);
extern int thunk_FUN_10302280(...);
extern int thunk_FUN_10302a50(...);
extern int thunk_FUN_1034de40(...);
extern int thunk_FUN_10351370(...);
extern int thunk_FUN_10365150(...);
extern int thunk_FUN_1036e270(...);
extern int thunk_FUN_10425b60(...);
extern int thunk_FUN_105055d0(...);
extern int thunk_FUN_105055e0(...);
extern int thunk_FUN_105a1c80(...);
extern int thunk_FUN_105a1d20(...);
extern int thunk_FUN_106a5620(...);
extern int thunk_FUN_10785ae0(...);
extern int thunk_FUN_10a21a10(...);
extern int thunk_FUN_10a22590(...);
extern int thunk_FUN_10a3f3e0(...);
extern int thunk_FUN_10a40780(...);
extern int thunk_FUN_10baa650(...);
extern int thunk_FUN_10be54d0(...);
extern int thunk_FUN_10be6d30(...);
extern int thunk_FUN_10bf11c0(...);
extern int thunk_FUN_10bf11e0(...);
extern int thunk_FUN_10c5f1d0(...);
extern int thunk_FUN_10c61010(...);
extern int thunk_FUN_10c66110(...);
extern int thunk_FUN_10c72ac0(...);
extern int thunk_FUN_10c7c560(...);
extern int thunk_FUN_10c7cfe0(...);
extern int thunk_FUN_10c7d870(...);
extern int thunk_FUN_10c7fec0(...);
extern int thunk_FUN_10c98c80(...);
extern int thunk_FUN_10cc9cb0(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10d93470(...);
extern int thunk_FUN_10d93840(...);
extern int thunk_FUN_10deee60(...);
extern int thunk_FUN_10def0d0(...);
extern int thunk_FUN_10def450(...);
extern int thunk_FUN_10def490(...);
extern int thunk_FUN_10defac0(...);
extern int thunk_FUN_10df6f00(...);
extern int thunk_FUN_10dfba00(...);
extern int thunk_FUN_10dfbb10(...);
extern int thunk_FUN_10dfd7b0(...);
extern int thunk_FUN_10e25c70(...);
extern int thunk_FUN_10e26030(...);
extern int thunk_FUN_10e3bda0(...);
extern int thunk_FUN_10e3c100(...);
extern int thunk_FUN_10e3c400(...);
extern int thunk_FUN_10e3c5a0(...);
extern int thunk_FUN_10eb41b0(...);
extern int thunk_FUN_10eba400(...);
extern int thunk_FUN_10ebb810(...);
extern int thunk_FUN_10ebb8e0(...);
extern int thunk_FUN_10ebb920(...);
extern int thunk_FUN_10ebbab0(...);
extern int thunk_FUN_10efb220(...);
extern int thunk_FUN_10efdbb0(...);
extern int thunk_FUN_10eff900(...);
extern int thunk_FUN_10f796f0(...);
extern int thunk_FUN_10f82020(...);
extern int thunk_FUN_10f82840(...);
extern int thunk_FUN_10f87c40(...);
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
extern int thunk_FUN_110f2980(...);
extern int thunk_FUN_110f4420(...);
extern int thunk_FUN_110f69f0(...);
extern int thunk_FUN_11111260(...);
extern int thunk_FUN_1111e210(...);
extern int thunk_FUN_1113ecc0(...);
extern int thunk_FUN_1113eda0(...);
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
extern int thunk_FUN_111c06e0(...);
extern int thunk_FUN_111c0760(...);
extern int thunk_FUN_11202490(...);
extern int thunk_FUN_11202580(...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_11247e90(...);
extern int thunk_FUN_11249060(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_11249230(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_112504b0(...);
extern int thunk_FUN_1125ba00(...);
extern int thunk_FUN_11273170(...);
extern int thunk_FUN_112782b0(...);
extern int thunk_FUN_11299630(...);
extern int thunk_FUN_112a1350(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_112b0270(...);
extern int thunk_FUN_11395910(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_113d2fe0(...);
extern int thunk_FUN_113dc730(...);
extern int thunk_FUN_113dde70(...);
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
extern int thunk_FUN_1145a8d0(...);
extern int thunk_FUN_1145a960(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c460(...);
extern int thunk_FUN_1146c180(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148aaa4(...);
extern int thunk_FUN_1148ab00(...);
extern int thunk_FUN_1148ac28(...);
extern int thunk_FUN_1148b586(...);
extern int thunk_FUN_1148bc65(...);
extern int DAT_1186d2ee;
extern int DAT_1187b440;
extern int DAT_11882ff0;
extern int DAT_118a1c40;
extern int DAT_118d39d4;
extern int DAT_119dd8b8;
extern int DAT_119df9ec;
extern int DAT_119e4e04;
extern int DAT_11a02f80;
extern int DAT_11c03ce8;
extern int DAT_1211e604;
extern int DAT_1212057c;
extern int DAT_1212058c;
extern int DAT_12120590;
extern int DAT_12121e80;
extern int DAT_12121ea4;
extern int DAT_12121eac;
extern int DAT_12121ed0;
extern int DAT_12121ed8;
extern int DAT_12121f78;
extern int DAT_12126b84;
extern int DAT_122e8a30;
extern int DAT_122f5664;
extern int DAT_122f5670;
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
extern int UNK_119ca0d8;
extern int UNK_119ca0e8;
extern int _UNK_119ca0d0;
extern int _UNK_119ca0dc;
extern int _UNK_119ca0e4;
extern int _UNK_11a02f84;
extern int _UNK_11a02f88;
extern int _UNK_11a02f8c;
extern int _tls_index;
extern int g_lSCObjCount;
extern int ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp;
extern int ghidra_vftable_RZPDevice;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCCountry;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCOpRef;
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
extern int ghidra_vftable_SCStrPropDelegate;
extern int in_stack_00000020;
extern int in_stack_00000024;
extern int in_stack_00000028;
extern int in_stack_0000002c;
extern int in_stack_00000030;
extern int uStack0000001d;
extern int uStackY_68;
extern int uStack_108;
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
extern int uStack_7c;
extern int uStack_8;
extern int uStack_84;
extern int uStack_88;
extern int uStack_ec;
extern int uStack_f4;
extern int unaff_EBP;
extern int unaff_EBX;
extern undefined1 LAB_10011770[];
extern undefined1 LAB_10068c3c[];
extern undefined1 LAB_10070eaf[];
extern undefined1 LAB_1021c23a[];
extern undefined1 LAB_1021c243[];
extern undefined1 LAB_1021c391[];
extern undefined1 LAB_1021c629[];
extern undefined1 LAB_107c0512[];
extern undefined1 LAB_107c0565[];
extern undefined1 LAB_107c0644[];
extern undefined1 LAB_10bae8ed[];
extern undefined1 LAB_10bae906[];
extern undefined1 LAB_10c71fc0[];
extern undefined1 LAB_10d93ed4[];
extern undefined1 LAB_10d93ee3[];
extern undefined1 LAB_10d93f57[];
extern undefined1 LAB_10e3ce16[];
extern undefined1 LAB_10e3dea9[];
extern undefined1 LAB_10f851c2[];
extern undefined1 LAB_10f852fe[];
extern undefined1 LAB_10f85454[];
extern undefined1 LAB_10f855c3[];
extern undefined1 LAB_110be27b[];
extern undefined1 LAB_110be2bd[];
extern undefined1 LAB_110be72c[];
extern undefined1 LAB_110be9d3[];
extern undefined1 LAB_110beac2[];
extern undefined1 LAB_11115da0[];
extern undefined1 LAB_11115da5[];
extern undefined1 LAB_11115fa1[];
extern undefined1 LAB_11124b97[];
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
extern undefined1 LAB_113212ac[];
extern undefined1 LAB_1132bbb7[];
extern undefined1 LAB_1136b280[];
extern undefined1 LAB_113a3110[];
extern undefined1 LAB_113a42c4[];
extern undefined1 LAB_113a43d7[];
extern undefined1 LAB_113ab167[];
extern undefined1 LAB_1141d36c[];
extern undefined1 LAB_1150769f[];
extern undefined1 LAB_1152fe1f[];
extern undefined1 LAB_1160ac45[];
extern undefined1 LAB_1162ad45[];
extern undefined1 LAB_11680db5[];
extern undefined1 LAB_116c29f5[];
extern undefined1 LAB_116c40a5[];
extern undefined1 LAB_1171d14d[];
extern undefined1 LAB_1173f566[];
extern undefined1 LAB_1177d501[];
extern undefined1 LAB_117a36e5[];
extern undefined1 LAB_117a7677[];
extern undefined1 LAB_117aace5[];
extern undefined1 LAB_117b1cfd[];
extern undefined1 LAB_117b3410[];
extern undefined1 LAB_117b4865[];
extern undefined1 LAB_117cca1d[];
extern undefined1 LAB_117cd248[];
extern undefined1 LAB_117d03a7[];
extern int *PTR_DAT_1211e5e8;
extern int *PTR_DAT_1211e5ec;
extern int *PTR_GetCurrentProcessId_12122330;
extern int *PTR_GetSystemTime_121223c0;
extern int *PTR_GetTickCount_121223f0;
extern int *PTR_QueryPerformanceCounter_121224c8;
extern int *PTR_s_acr_hdpi_1211e5f0;
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
bool __thiscall FUN_101b87f0(int param_1,char *param_2);
bool __thiscall FUN_101b88f0(int param_1,int *param_2);
void __thiscall FUN_1021bf80(int *param_1,int *param_2,int *param_3);
void __fastcall FUN_10302a60(int param_1);
template<class... A> int FUN_10302a60(A...);
void __fastcall FUN_107c03d0(int param_1);
template<class... A> int FUN_107c03d0(A...);
void __thiscall FUN_1086d990(int param_1,undefined4 param_2);
void __thiscall FUN_10a3e140(int param_1,undefined4 param_2);
basic_istream<char,std::char_traits<char>> * FUN_10ba4650(basic_istream<char,std::char_traits<char>> *param_1,undefined4 *param_2,byte param_3);
template<class... A> int FUN_10ba4650(A...);
undefined1 * FUN_10bae6d0(int *param_1,char *param_2);
template<class... A> int FUN_10bae6d0(A...);
undefined1 __thiscall FUN_10c71f40(undefined4 *param_1,undefined4 *param_2,undefined4 param_3);
void __thiscall FUN_10d93ba0(int param_1,undefined1 *param_2);
int * __fastcall FUN_10e3cae0(int *param_1);
template<class... A> int FUN_10e3cae0(A...);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_10f85160(int param_1,int param_2,short *param_3);
void __thiscall FUN_1106d3a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5 ,int *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13, undefined4 param_14,undefined4 param_15);
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */ void __thiscall FUN_11094940(int param_1,undefined4 *param_2,int *param_3,undefined4 *param_4);
undefined1 FUN_110be010(undefined4 param_1,undefined4 param_2,char **param_3,char **param_4);
template<class... A> int FUN_110be010(A...);
void __fastcall FUN_111054d0(int param_1);
template<class... A> int FUN_111054d0(A...);
void __thiscall FUN_11115d10(char *param_1,undefined1 *param_2,undefined4 param_3);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void __thiscall FUN_11124a80(int param_1,byte *param_2,undefined4 *param_3);
void __thiscall FUN_11201af0(int param_1,byte *param_2,undefined4 param_3);
void FUN_1123b6a0(undefined1 *param_1,undefined4 *param_2);
template<class... A> int FUN_1123b6a0(A...);
/* WARNING: Type propagation algorithm not settling */ /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_11247490(undefined4 param_1);
template<class... A> int FUN_11247490(A...);
bool __thiscall FUN_11298db0(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4);
void FUN_112fef90(undefined4 param_1,size_t param_2,void *param_3);
template<class... A> int FUN_112fef90(A...);
void FUN_11305d50(char *param_1);
template<class... A> int FUN_11305d50(A...);
/* WARNING: Type propagation algorithm not settling */ void FUN_113064b0(int param_1,int *param_2,int param_3,int param_4,int param_5);
void FUN_1130c8c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_1130c8c0(A...);
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */ void FUN_11321070(undefined4 *param_1,int *param_2,undefined4 *param_3);
template<class... A> int FUN_11321070(A...);
int FUN_1132bb30(undefined4 *param_1,int param_2,char *param_3,code *param_4,int param_5);
int FUN_113a4210(int *param_1);
template<class... A> int FUN_113a4210(A...);
int FUN_113aae40(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_113aae40(A...);
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
// Reference entry 101b87f0; body size 199 bytes.
#line 1 "ENTRY_101b87f0"

bool __thiscall FUN_101b87f0(int param_1,char *param_2)

{
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

bool __thiscall FUN_101b88f0(int param_1,int *param_2)

{
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

void __thiscall FUN_1021bf80(int *param_1,int *param_2,int *param_3)

{
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

void __thiscall FUN_1086d990(int param_1,undefined4 param_2)

{ int stack0xffffff8c;
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


// Reference entry 10a3e140; body size 1041 bytes.
#line 1 "ENTRY_10a3e140"

void __thiscall FUN_10a3e140(int param_1,undefined4 param_2)

{
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


// Reference entry 10c71f40; body size 375 bytes.
#line 1 "ENTRY_10c71f40"

undefined1 __thiscall FUN_10c71f40(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
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


// Reference entry 10d93ba0; body size 986 bytes.
#line 1 "ENTRY_10d93ba0"

void __thiscall FUN_10d93ba0(int param_1,undefined1 *param_2)

{
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


// Reference entry 10f85160; body size 1162 bytes.
#line 1 "ENTRY_10f85160"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_10f85160(int param_1,int param_2,short *param_3)

{
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


// Reference entry 1106d3a0; body size 477 bytes.
#line 1 "ENTRY_1106d3a0"

void __thiscall
FUN_1106d3a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,int *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
            undefined4 param_14,undefined4 param_15)

{
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


// Reference entry 11094940; body size 1565 bytes.
#line 1 "ENTRY_11094940"

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_11094940(int param_1,undefined4 *param_2,int *param_3,undefined4 *param_4)

{
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

void __thiscall FUN_11115d10(char *param_1,undefined1 *param_2,undefined4 param_3)

{
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_11124a80(int param_1,byte *param_2,undefined4 *param_3)

{
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


// Reference entry 11201af0; body size 440 bytes.
#line 1 "ENTRY_11201af0"

void __thiscall FUN_11201af0(int param_1,byte *param_2,undefined4 param_3)

{ int stack0xfffffbe8;
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

bool __thiscall FUN_11298db0(undefined4 *param_1,undefined4 param_2,uint param_3,int param_4)

{ int stack0xfffffffc;
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


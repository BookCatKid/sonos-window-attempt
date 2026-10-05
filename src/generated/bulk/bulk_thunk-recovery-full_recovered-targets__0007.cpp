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
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int getCurrentThreadID(A...); template<class... A> int getMainThreadID(A...); template<class... A> int getSingleton(A...); };
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } template<class... A> int stringWithFormat(A...); };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_8 { char _pad; Ordinal_8(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Parameter { char _pad; Parameter(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCFeatureManager { char _pad; SCFeatureManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAlarm { char _pad; SCIAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIArea { char _pad; SCIArea(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIFeatureManager { char _pad; SCIFeatureManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILifecycleAppProvider { char _pad; SCILifecycleAppProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpSecRegRegisterPlayer { char _pad; SCIOpSecRegRegisterPlayer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIRoomResource { char _pad; SCIRoomResource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISettingsMenuItem { char _pad; SCISettingsMenuItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUrbanAirshipDelegate { char _pad; SCIUrbanAirshipDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIUserAccount { char _pad; SCIUserAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UNK_1189dc8c { char _pad; UNK_1189dc8c(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *SIGNATURE;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_103d1060(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103d1060(A...); undefined4 * __thiscall m_FUN_103d1180(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103d1180(A...); undefined4 * __thiscall m_FUN_103d1210(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103d1210(A...); void __thiscall m_FUN_103d2240(int param_2); template<class... A> int m_FUN_103d2240(A...); void __thiscall m_FUN_103d24a0(int *param_2); template<class... A> int m_FUN_103d24a0(A...); void __thiscall m_FUN_103d2510(undefined4 *param_2); template<class... A> int m_FUN_103d2510(A...); void __thiscall m_FUN_103d2540(undefined4 *param_2); template<class... A> int m_FUN_103d2540(A...); void __thiscall m_FUN_103d2570(undefined4 *param_2); template<class... A> int m_FUN_103d2570(A...); void __thiscall m_FUN_103d25b0(undefined4 *param_2); template<class... A> int m_FUN_103d25b0(A...); void __thiscall m_FUN_103d2f80(undefined4 *param_2); template<class... A> int m_FUN_103d2f80(A...); void __thiscall m_FUN_103d2f90(undefined4 *param_2); template<class... A> int m_FUN_103d2f90(A...); void __thiscall m_FUN_103d2fa0(undefined4 *param_2); template<class... A> int m_FUN_103d2fa0(A...); int __thiscall m_FUN_103d3260(undefined4 param_2); template<class... A> int m_FUN_103d3260(A...); void __thiscall m_FUN_103d3320(undefined4 *param_2); template<class... A> int m_FUN_103d3320(A...); void __thiscall m_FUN_103d3330(undefined4 *param_2); template<class... A> int m_FUN_103d3330(A...); undefined4 __thiscall m_FUN_103d4500(undefined4 param_2); template<class... A> int m_FUN_103d4500(A...); SCStr * __thiscall m_FUN_103d46a0(SCStr *param_2); template<class... A> int m_FUN_103d46a0(A...); SCStr * __thiscall m_FUN_103d46d0(SCStr *param_2); template<class... A> int m_FUN_103d46d0(A...); int __thiscall m_FUN_103d5130(SCStr *param_2); template<class... A> int m_FUN_103d5130(A...); int __thiscall m_FUN_103d51b0(SCStr *param_2); template<class... A> int m_FUN_103d51b0(A...); void __thiscall m_FUN_103d5390(undefined4 param_2); template<class... A> int m_FUN_103d5390(A...); undefined4 * __thiscall m_FUN_103d5fa0(int *param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_103d5fa0(A...); char * __thiscall m_FUN_103d6ee0(char *param_2); template<class... A> int m_FUN_103d6ee0(A...); undefined4 * __thiscall m_FUN_103d9450(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103d9450(A...); void __thiscall m_FUN_103db2c0(undefined4 *param_2); template<class... A> int m_FUN_103db2c0(A...); void __thiscall m_FUN_103dbf10(undefined4 *param_2); template<class... A> int m_FUN_103dbf10(A...); void __thiscall m_FUN_103dc2d0(undefined4 *param_2,SCStr *param_3,undefined1 param_4,
            undefined1 param_5); template<class... A> int m_FUN_103dc2d0(A...); void __thiscall m_FUN_103dc6b0(int *param_2); template<class... A> int m_FUN_103dc6b0(A...); void __thiscall m_FUN_103e9780(int *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103e9780(A...); void __thiscall m_FUN_103e9bc0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_103e9bc0(A...); SCStr * __thiscall m_FUN_103ead20(SCStr *param_2); template<class... A> int m_FUN_103ead20(A...); SCStr * __thiscall m_FUN_103ead40(SCStr *param_2); template<class... A> int m_FUN_103ead40(A...); SCStr * __thiscall m_FUN_103ead60(SCStr *param_2); template<class... A> int m_FUN_103ead60(A...); SCStr * __thiscall m_FUN_103ead80(SCStr *param_2); template<class... A> int m_FUN_103ead80(A...); SCStr * __thiscall m_FUN_103eae70(SCStr *param_2); template<class... A> int m_FUN_103eae70(A...); SCStr * __thiscall m_FUN_103eae90(SCStr *param_2); template<class... A> int m_FUN_103eae90(A...); SCStr * __thiscall m_FUN_103eaed0(SCStr *param_2); template<class... A> int m_FUN_103eaed0(A...); SCStr * __thiscall m_FUN_103eaef0(SCStr *param_2); template<class... A> int m_FUN_103eaef0(A...); SCStr * __thiscall m_FUN_103eafe0(SCStr *param_2); template<class... A> int m_FUN_103eafe0(A...); SCStr * __thiscall m_FUN_103eb000(SCStr *param_2); template<class... A> int m_FUN_103eb000(A...); SCStr * __thiscall m_FUN_103eb0a0(SCStr *param_2); template<class... A> int m_FUN_103eb0a0(A...); SCStr * __thiscall m_FUN_103eb0c0(SCStr *param_2); template<class... A> int m_FUN_103eb0c0(A...); SCStr * __thiscall m_FUN_103eb0e0(SCStr *param_2); template<class... A> int m_FUN_103eb0e0(A...); SCStr * __thiscall m_FUN_103eb130(SCStr *param_2); template<class... A> int m_FUN_103eb130(A...); SCStr * __thiscall m_FUN_103eb260(SCStr *param_2); template<class... A> int m_FUN_103eb260(A...); SCStr * __thiscall m_FUN_103eb280(SCStr *param_2); template<class... A> int m_FUN_103eb280(A...); SCStr * __thiscall m_FUN_103eb2a0(SCStr *param_2); template<class... A> int m_FUN_103eb2a0(A...); SCStr * __thiscall m_FUN_103eb2c0(SCStr *param_2); template<class... A> int m_FUN_103eb2c0(A...); SCStr * __thiscall m_FUN_103eb3a0(SCStr *param_2); template<class... A> int m_FUN_103eb3a0(A...); int * __thiscall m_FUN_103eb3d0(int *param_2); template<class... A> int m_FUN_103eb3d0(A...); int * __thiscall m_FUN_103eb400(int *param_2); template<class... A> int m_FUN_103eb400(A...); int * __thiscall m_FUN_103eb430(int *param_2); template<class... A> int m_FUN_103eb430(A...); SCStr * __thiscall m_FUN_103eb4b0(SCStr *param_2); template<class... A> int m_FUN_103eb4b0(A...); SCStr * __thiscall m_FUN_103eb5b0(SCStr *param_2); template<class... A> int m_FUN_103eb5b0(A...); SCStr * __thiscall m_FUN_103eb9e0(SCStr *param_2); template<class... A> int m_FUN_103eb9e0(A...); SCStr * __thiscall m_FUN_103eba00(SCStr *param_2); template<class... A> int m_FUN_103eba00(A...); SCStr * __thiscall m_FUN_103eba20(SCStr *param_2); template<class... A> int m_FUN_103eba20(A...); SCStr * __thiscall m_FUN_103eba40(SCStr *param_2); template<class... A> int m_FUN_103eba40(A...); SCStr * __thiscall m_FUN_103eba60(SCStr *param_2); template<class... A> int m_FUN_103eba60(A...); SCStr * __thiscall m_FUN_103ebac0(SCStr *param_2); template<class... A> int m_FUN_103ebac0(A...); void __thiscall m_FUN_103edaa0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_103edaa0(A...); void __thiscall m_FUN_103f30d0(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1); template<class... A> int m_FUN_103f30d0(A...); undefined4 * __thiscall m_FUN_103f5b60(undefined4 *param_2); template<class... A> int m_FUN_103f5b60(A...); undefined4 * __thiscall m_FUN_103f5bd0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103f5bd0(A...); SCStr * __thiscall m_FUN_103f5e50(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103f5e50(A...); undefined4 * __thiscall m_FUN_103f5e80(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103f5e80(A...); undefined4 * __thiscall m_FUN_103f6000(int *param_2); template<class... A> int m_FUN_103f6000(A...); SCStr * __thiscall m_FUN_103f61a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103f61a0(A...); int * __thiscall m_FUN_103f61d0(int *param_2); template<class... A> int m_FUN_103f61d0(A...); undefined4 * __thiscall m_FUN_103f61f0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_103f61f0(A...); void __thiscall m_FUN_103f6470(int *param_2,undefined4 param_3); template<class... A> int m_FUN_103f6470(A...); void __thiscall m_FUN_103f7190(int *param_2); template<class... A> int m_FUN_103f7190(A...); int __thiscall m_FUN_103f7480(int *param_2); template<class... A> int m_FUN_103f7480(A...); int __thiscall m_FUN_103f7500(int *param_2,undefined4 param_3); template<class... A> int m_FUN_103f7500(A...); int __thiscall m_FUN_103f75b0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_103f75b0(A...); int __thiscall m_FUN_103f7660(int *param_2,undefined4 param_3); template<class... A> int m_FUN_103f7660(A...); undefined4 * __thiscall m_FUN_103f8380(undefined4 param_2); template<class... A> int m_FUN_103f8380(A...); undefined4 * __thiscall m_FUN_103f83a0(undefined4 param_2); template<class... A> int m_FUN_103f83a0(A...); undefined4 * __thiscall m_FUN_103f8500(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103f8500(A...); undefined4 * __thiscall m_FUN_103f8510(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103f8510(A...); undefined4 * __thiscall m_FUN_103f8520(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103f8520(A...); undefined4 * __thiscall m_FUN_103f8560(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103f8560(A...); undefined4 * __thiscall m_FUN_103f8670(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103f8670(A...); undefined4 * __thiscall m_FUN_103f8680(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103f8680(A...); undefined4 * __thiscall m_FUN_103f8690(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103f8690(A...); undefined4 * __thiscall m_FUN_103f86a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103f86a0(A...); undefined4 * __thiscall m_FUN_103f8ac0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103f8ac0(A...); undefined4 * __thiscall m_FUN_103f8ae0(undefined4 *param_2); template<class... A> int m_FUN_103f8ae0(A...); SCStr * __thiscall m_FUN_103f8e30(SCStr *param_2); template<class... A> int m_FUN_103f8e30(A...); undefined4 * __thiscall m_FUN_103f8e60(undefined4 *param_2); template<class... A> int m_FUN_103f8e60(A...); undefined4 * __thiscall m_FUN_103f8e90(undefined4 param_2); template<class... A> int m_FUN_103f8e90(A...); undefined4 * __thiscall m_FUN_103f9010(undefined4 param_2); template<class... A> int m_FUN_103f9010(A...); int * __thiscall m_FUN_103fb520(int *param_2); template<class... A> int m_FUN_103fb520(A...); int * __thiscall m_FUN_103fb640(int *param_2); template<class... A> int m_FUN_103fb640(A...); bool __thiscall m_FUN_103fb6a0(int *param_2); template<class... A> int m_FUN_103fb6a0(A...); bool __thiscall m_FUN_103fb6c0(int *param_2); template<class... A> int m_FUN_103fb6c0(A...); bool __thiscall m_FUN_103fb6e0(int *param_2); template<class... A> int m_FUN_103fb6e0(A...); bool __thiscall m_FUN_103fb700(int *param_2); template<class... A> int m_FUN_103fb700(A...); bool __thiscall m_FUN_103fb720(int *param_2); template<class... A> int m_FUN_103fb720(A...); bool __thiscall m_FUN_103fb750(int *param_2); template<class... A> int m_FUN_103fb750(A...); void __thiscall m_FUN_103fbc70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103fbc70(A...); void __thiscall m_FUN_103fbca0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103fbca0(A...); void __thiscall m_FUN_103fce30(int param_2); template<class... A> int m_FUN_103fce30(A...); void __thiscall m_FUN_103fcea0(int param_2); template<class... A> int m_FUN_103fcea0(A...); void __thiscall m_FUN_103fd070(int param_2); template<class... A> int m_FUN_103fd070(A...); void __thiscall m_FUN_103fd090(int param_2); template<class... A> int m_FUN_103fd090(A...); void __thiscall m_FUN_103fd0b0(int param_2); template<class... A> int m_FUN_103fd0b0(A...); void __thiscall m_FUN_103fd0d0(int param_2); template<class... A> int m_FUN_103fd0d0(A...); void __thiscall m_FUN_103fd0f0(int param_2); template<class... A> int m_FUN_103fd0f0(A...); void __thiscall m_FUN_103fd110(int param_2); template<class... A> int m_FUN_103fd110(A...); void __thiscall m_FUN_103fd130(int *param_2); template<class... A> int m_FUN_103fd130(A...); void __thiscall m_FUN_103fd190(int *param_2); template<class... A> int m_FUN_103fd190(A...); void __thiscall m_FUN_103fd200(int *param_2); template<class... A> int m_FUN_103fd200(A...); void __thiscall m_FUN_103fd270(undefined4 param_2); template<class... A> int m_FUN_103fd270(A...); void __thiscall m_FUN_103fd280(undefined4 param_2); template<class... A> int m_FUN_103fd280(A...); void __thiscall m_FUN_103fd290(undefined4 param_2); template<class... A> int m_FUN_103fd290(A...); void __thiscall m_FUN_103fd2a0(undefined4 param_2); template<class... A> int m_FUN_103fd2a0(A...); void __thiscall m_FUN_103fd2b0(undefined4 param_2); template<class... A> int m_FUN_103fd2b0(A...); void __thiscall m_FUN_103fd2c0(undefined4 param_2); template<class... A> int m_FUN_103fd2c0(A...); void __thiscall m_FUN_103fd2d0(undefined4 *param_2); template<class... A> int m_FUN_103fd2d0(A...); void __thiscall m_FUN_103fd400(undefined4 *param_2); template<class... A> int m_FUN_103fd400(A...); void __thiscall m_FUN_103fd420(undefined4 *param_2); template<class... A> int m_FUN_103fd420(A...); void __thiscall m_FUN_103fe830(undefined4 *param_2); template<class... A> int m_FUN_103fe830(A...); void __thiscall m_FUN_103ff020(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103ff020(A...); void __thiscall m_FUN_103ff150(undefined4 *param_2); template<class... A> int m_FUN_103ff150(A...); void __thiscall m_FUN_103ff160(undefined4 *param_2); template<class... A> int m_FUN_103ff160(A...); void __thiscall m_FUN_10403ba0(int *param_2); template<class... A> int m_FUN_10403ba0(A...); int __thiscall m_FUN_10403c20(uint param_2); template<class... A> int m_FUN_10403c20(A...); undefined4 * __thiscall m_FUN_104051e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104051e0(A...); undefined4 * __thiscall m_FUN_104052c0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104052c0(A...); undefined1 * __thiscall m_FUN_104052e0(int param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104052e0(A...); undefined4 * __thiscall m_FUN_10405450(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10405450(A...); int * __thiscall m_FUN_10405520(int *param_2); template<class... A> int m_FUN_10405520(A...); int * __thiscall m_FUN_10405980(int *param_2); template<class... A> int m_FUN_10405980(A...); void __thiscall m_FUN_104061f0(undefined4 *param_2); template<class... A> int m_FUN_104061f0(A...); void __thiscall m_FUN_10406220(undefined4 *param_2); template<class... A> int m_FUN_10406220(A...); void __thiscall m_FUN_10406310(undefined4 *param_2); template<class... A> int m_FUN_10406310(A...); int * __thiscall m_FUN_10407430(int *param_2); template<class... A> int m_FUN_10407430(A...); undefined4 * __thiscall m_FUN_10407470(undefined4 param_2); template<class... A> int m_FUN_10407470(A...); undefined4 * __thiscall m_FUN_10407490(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10407490(A...); undefined4 * __thiscall m_FUN_104074b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104074b0(A...); undefined4 * __thiscall m_FUN_10407540(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10407540(A...); undefined4 * __thiscall m_FUN_10407550(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10407550(A...); undefined4 * __thiscall m_FUN_104075e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104075e0(A...); undefined4 * __thiscall m_FUN_10407610(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10407610(A...); undefined4 * __thiscall m_FUN_10407630(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10407630(A...); undefined4 * __thiscall m_FUN_10407640(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10407640(A...); int * __thiscall m_FUN_10408620(int *param_2); template<class... A> int m_FUN_10408620(A...); undefined4 * __thiscall m_FUN_10408790(undefined4 *param_2); template<class... A> int m_FUN_10408790(A...); bool __thiscall m_FUN_104087c0(int *param_2); template<class... A> int m_FUN_104087c0(A...); bool __thiscall m_FUN_104087e0(int *param_2); template<class... A> int m_FUN_104087e0(A...); bool __thiscall m_FUN_10408800(int *param_2); template<class... A> int m_FUN_10408800(A...); bool __thiscall m_FUN_10408820(int *param_2); template<class... A> int m_FUN_10408820(A...); int __thiscall m_FUN_10408840(int param_2); template<class... A> int m_FUN_10408840(A...); int __thiscall m_FUN_10408850(int param_2); template<class... A> int m_FUN_10408850(A...); uint __thiscall m_FUN_10408e20(uint param_2); template<class... A> int m_FUN_10408e20(A...); bool __thiscall m_FUN_10408f80(byte *param_2); template<class... A> int m_FUN_10408f80(A...); uint __thiscall m_FUN_10409150(uint param_2); template<class... A> int m_FUN_10409150(A...); uint __thiscall m_FUN_10409170(uint param_2); template<class... A> int m_FUN_10409170(A...); void __thiscall m_FUN_10409630(int param_2); template<class... A> int m_FUN_10409630(A...); void __thiscall m_FUN_10409800(int *param_2); template<class... A> int m_FUN_10409800(A...); void __thiscall m_FUN_10409ae0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10409ae0(A...); void __thiscall m_FUN_10409b00(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10409b00(A...); void __thiscall m_FUN_10409b20(int *param_2); template<class... A> int m_FUN_10409b20(A...); void __thiscall m_FUN_10409e70(undefined4 *param_2); template<class... A> int m_FUN_10409e70(A...); void __thiscall m_FUN_10409eb0(undefined8 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10409eb0(A...); void __thiscall m_FUN_10409ed0(undefined1 param_2); template<class... A> int m_FUN_10409ed0(A...); void __thiscall m_FUN_10409f30(undefined4 *param_2); template<class... A> int m_FUN_10409f30(A...); void __thiscall m_FUN_10409f40(undefined4 *param_2); template<class... A> int m_FUN_10409f40(A...); void __thiscall m_FUN_10409f50(undefined4 *param_2); template<class... A> int m_FUN_10409f50(A...); void __thiscall m_FUN_10409f60(undefined4 *param_2); template<class... A> int m_FUN_10409f60(A...); void __thiscall m_FUN_10409f70(undefined4 *param_2); template<class... A> int m_FUN_10409f70(A...); void __thiscall m_FUN_1040a1d0(undefined4 *param_2); template<class... A> int m_FUN_1040a1d0(A...); void __thiscall m_FUN_1040a1e0(undefined4 *param_2); template<class... A> int m_FUN_1040a1e0(A...); void __thiscall m_FUN_1040a1f0(undefined4 *param_2); template<class... A> int m_FUN_1040a1f0(A...); void __thiscall m_FUN_1040a200(undefined4 *param_2); template<class... A> int m_FUN_1040a200(A...); void __thiscall m_FUN_1040a210(undefined4 *param_2); template<class... A> int m_FUN_1040a210(A...); int __thiscall m_FUN_1040a5d0(int param_2); template<class... A> int m_FUN_1040a5d0(A...); undefined4 * __thiscall m_FUN_1040f300(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1040f300(A...); SCStr * __thiscall m_FUN_1040f4e0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1040f4e0(A...); undefined4 * __thiscall m_FUN_1040f520(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1040f520(A...); undefined4 * __thiscall m_FUN_1040f770(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_1040f770(A...); SCStr * __thiscall m_FUN_1040f7a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_1040f7a0(A...); void __thiscall m_FUN_1040fa20(undefined4 *param_2); template<class... A> int m_FUN_1040fa20(A...); void __thiscall m_FUN_1040fa50(undefined4 *param_2); template<class... A> int m_FUN_1040fa50(A...); void __thiscall m_FUN_1040fa70(undefined4 *param_2); template<class... A> int m_FUN_1040fa70(A...); void __thiscall m_FUN_1040faa0(undefined4 *param_2); template<class... A> int m_FUN_1040faa0(A...); undefined4 * __thiscall m_FUN_104110b0(undefined4 *param_2); template<class... A> int m_FUN_104110b0(A...); undefined4 * __thiscall m_FUN_10411100(undefined4 param_2); template<class... A> int m_FUN_10411100(A...); undefined4 * __thiscall m_FUN_10411210(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10411210(A...); undefined4 * __thiscall m_FUN_10411220(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10411220(A...); undefined4 * __thiscall m_FUN_10411230(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10411230(A...); undefined4 * __thiscall m_FUN_10411240(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10411240(A...); undefined4 * __thiscall m_FUN_10411270(undefined4 *param_2); template<class... A> int m_FUN_10411270(A...); undefined4 * __thiscall m_FUN_10411280(undefined4 param_2); template<class... A> int m_FUN_10411280(A...); undefined4 * __thiscall m_FUN_104112a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104112a0(A...); undefined4 * __thiscall m_FUN_104112c0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104112c0(A...); undefined4 * __thiscall m_FUN_10411580(undefined4 *param_2); template<class... A> int m_FUN_10411580(A...); undefined4 * __thiscall m_FUN_104115c0(undefined4 param_2); template<class... A> int m_FUN_104115c0(A...); undefined4 * __thiscall m_FUN_10411770(undefined4 param_2); template<class... A> int m_FUN_10411770(A...); bool __thiscall m_FUN_10411f70(int *param_2); template<class... A> int m_FUN_10411f70(A...); bool __thiscall m_FUN_10411f90(int *param_2); template<class... A> int m_FUN_10411f90(A...); bool __thiscall m_FUN_10411fb0(int *param_2); template<class... A> int m_FUN_10411fb0(A...); bool __thiscall m_FUN_10411fd0(int *param_2); template<class... A> int m_FUN_10411fd0(A...); void __thiscall m_FUN_10412160(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10412160(A...); uint __thiscall m_FUN_104127b0(uint param_2); template<class... A> int m_FUN_104127b0(A...); int * __thiscall m_FUN_10412ea0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10412ea0(A...); void __thiscall m_FUN_10413100(int param_2); template<class... A> int m_FUN_10413100(A...); void __thiscall m_FUN_10413120(int param_2); template<class... A> int m_FUN_10413120(A...); void __thiscall m_FUN_10413140(int *param_2); template<class... A> int m_FUN_10413140(A...); void __thiscall m_FUN_104131a0(undefined4 param_2); template<class... A> int m_FUN_104131a0(A...); void __thiscall m_FUN_10413470(undefined4 *param_2); template<class... A> int m_FUN_10413470(A...); void __thiscall m_FUN_10413490(undefined4 *param_2); template<class... A> int m_FUN_10413490(A...); void __thiscall m_FUN_104134a0(undefined4 *param_2); template<class... A> int m_FUN_104134a0(A...); void __thiscall m_FUN_104134b0(undefined4 *param_2); template<class... A> int m_FUN_104134b0(A...); void __thiscall m_FUN_10413860(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10413860(A...); void __thiscall m_FUN_104138c0(undefined4 *param_2); template<class... A> int m_FUN_104138c0(A...); void __thiscall m_FUN_104138d0(undefined4 *param_2); template<class... A> int m_FUN_104138d0(A...); int * __thiscall m_FUN_10415ed0(int *param_2); template<class... A> int m_FUN_10415ed0(A...); int * __thiscall m_FUN_10415f50(int *param_2); template<class... A> int m_FUN_10415f50(A...); int * __thiscall m_FUN_10415ff0(int *param_2); template<class... A> int m_FUN_10415ff0(A...); int * __thiscall m_FUN_10416010(int *param_2); template<class... A> int m_FUN_10416010(A...); undefined4 * __thiscall m_FUN_10416090(undefined4 *param_2); template<class... A> int m_FUN_10416090(A...); int * __thiscall m_FUN_10416fe0(int *param_2); template<class... A> int m_FUN_10416fe0(A...); int * __thiscall m_FUN_1041da20(int *param_2); template<class... A> int m_FUN_1041da20(A...); int * __thiscall m_FUN_1041da40(int *param_2); template<class... A> int m_FUN_1041da40(A...); int * __thiscall m_FUN_1041da60(int *param_2); template<class... A> int m_FUN_1041da60(A...); int * __thiscall m_FUN_1041da80(int *param_2); template<class... A> int m_FUN_1041da80(A...); void __thiscall m_FUN_1041e0d0(undefined4 *param_2); template<class... A> int m_FUN_1041e0d0(A...); undefined4 * __thiscall m_FUN_1041ec40(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1041ec40(A...); undefined4 * __thiscall m_FUN_1041ecc0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1041ecc0(A...); undefined4 * __thiscall m_FUN_1041ed40(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1041ed40(A...); undefined4 * __thiscall m_FUN_1041edc0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1041edc0(A...); undefined4 * __thiscall m_FUN_1041f1f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1041f1f0(A...); int * __thiscall m_FUN_1041feb0(int *param_2); template<class... A> int m_FUN_1041feb0(A...); undefined4 __thiscall m_FUN_1041ff10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1041ff10(A...); void __thiscall m_FUN_10422330(uint param_2); template<class... A> int m_FUN_10422330(A...); void __thiscall m_FUN_104223e0(uint param_2); template<class... A> int m_FUN_104223e0(A...); void __thiscall m_FUN_10422ba0(int param_2); template<class... A> int m_FUN_10422ba0(A...); void __thiscall m_FUN_10422bc0(int param_2); template<class... A> int m_FUN_10422bc0(A...); void __thiscall m_FUN_10422be0(int param_2); template<class... A> int m_FUN_10422be0(A...); void __thiscall m_FUN_10422c00(int param_2); template<class... A> int m_FUN_10422c00(A...); void __thiscall m_FUN_10422c20(undefined4 param_2); template<class... A> int m_FUN_10422c20(A...); void __thiscall m_FUN_10422c30(undefined4 param_2); template<class... A> int m_FUN_10422c30(A...); void __thiscall m_FUN_10422c40(undefined4 param_2); template<class... A> int m_FUN_10422c40(A...); void __thiscall m_FUN_10422c50(undefined4 param_2); template<class... A> int m_FUN_10422c50(A...); void __thiscall m_FUN_10423a90(SCStr *param_2); template<class... A> int m_FUN_10423a90(A...); void __thiscall m_FUN_10423ac0(SCStr *param_2); template<class... A> int m_FUN_10423ac0(A...); int * __thiscall m_FUN_10425be0(int *param_2); template<class... A> int m_FUN_10425be0(A...); int * __thiscall m_FUN_10425c60(int *param_2); template<class... A> int m_FUN_10425c60(A...); undefined4 * __thiscall m_FUN_104262c0(undefined4 *param_2); template<class... A> int m_FUN_104262c0(A...); undefined4 * __thiscall m_FUN_10426380(undefined4 *param_2); template<class... A> int m_FUN_10426380(A...); int * __thiscall m_FUN_1042b0c0(int *param_2); template<class... A> int m_FUN_1042b0c0(A...); void __thiscall m_FUN_1042bcc0(undefined4 param_2); template<class... A> int m_FUN_1042bcc0(A...); undefined2 * __thiscall m_FUN_10432560(undefined4 param_2,undefined2 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10432560(A...); undefined4 * __thiscall m_FUN_10432590(undefined4 param_2); template<class... A> int m_FUN_10432590(A...); undefined4 * __thiscall m_FUN_104325a0(undefined4 param_2); template<class... A> int m_FUN_104325a0(A...); undefined4 * __thiscall m_FUN_104325b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104325b0(A...); undefined4 * __thiscall m_FUN_104326b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_104326b0(A...); undefined4 * __thiscall m_FUN_104326d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_104326d0(A...); undefined2 * __thiscall m_FUN_104326e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_104326e0(A...); int * __thiscall m_FUN_10432710(int *param_2); template<class... A> int m_FUN_10432710(A...); int * __thiscall m_FUN_10432af0(int *param_2); template<class... A> int m_FUN_10432af0(A...); int * __thiscall m_FUN_10432fb0(int *param_2,ushort *param_3); template<class... A> int m_FUN_10432fb0(A...); undefined4 * __thiscall m_FUN_104334a0(undefined4 *param_2); template<class... A> int m_FUN_104334a0(A...); undefined4 * __thiscall m_FUN_10433530(undefined4 param_2); template<class... A> int m_FUN_10433530(A...); undefined4 * __thiscall m_FUN_10433590(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10433590(A...); undefined4 * __thiscall m_FUN_104335b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104335b0(A...); undefined4 * __thiscall m_FUN_10433650(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10433650(A...); undefined4 * __thiscall m_FUN_104336f0(undefined4 *param_2); template<class... A> int m_FUN_104336f0(A...); undefined4 * __thiscall m_FUN_10433700(undefined4 param_2); template<class... A> int m_FUN_10433700(A...); undefined4 __thiscall m_FUN_10433740(undefined4 param_2); template<class... A> int m_FUN_10433740(A...); int * __thiscall m_FUN_10434020(int *param_2); template<class... A> int m_FUN_10434020(A...); undefined4 __thiscall m_FUN_104340f0(undefined4 param_2); template<class... A> int m_FUN_104340f0(A...); bool __thiscall m_FUN_10434110(int *param_2); template<class... A> int m_FUN_10434110(A...); bool __thiscall m_FUN_10434130(int *param_2); template<class... A> int m_FUN_10434130(A...); void __thiscall m_FUN_10434a30(int param_2); template<class... A> int m_FUN_10434a30(A...); void __thiscall m_FUN_10434af0(int *param_2); template<class... A> int m_FUN_10434af0(A...); void __thiscall m_FUN_10434d90(undefined4 *param_2); template<class... A> int m_FUN_10434d90(A...); void __thiscall m_FUN_10436100(undefined4 *param_2); template<class... A> int m_FUN_10436100(A...); undefined4 __thiscall m_FUN_10437940(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10437940(A...); int * __thiscall m_FUN_10439e40(int *param_2); template<class... A> int m_FUN_10439e40(A...); int __thiscall m_FUN_10439ec0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10439ec0(A...); void __thiscall m_FUN_1043ae00(int param_2); template<class... A> int m_FUN_1043ae00(A...); void __thiscall m_FUN_1043ae20(undefined4 param_2); template<class... A> int m_FUN_1043ae20(A...); undefined4 * __thiscall m_FUN_1043f7b0(undefined1 param_2); template<class... A> int m_FUN_1043f7b0(A...); int * __thiscall m_FUN_10442b50(int *param_2); template<class... A> int m_FUN_10442b50(A...); undefined4 * __thiscall m_FUN_10443030(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10443030(A...); void __thiscall m_FUN_104447a0(int param_2); template<class... A> int m_FUN_104447a0(A...); void __thiscall m_FUN_104447c0(undefined4 param_2); template<class... A> int m_FUN_104447c0(A...); undefined4 * __thiscall m_FUN_1044a1e0(undefined4 param_2); template<class... A> int m_FUN_1044a1e0(A...); int * __thiscall m_FUN_10451d50(int *param_2); template<class... A> int m_FUN_10451d50(A...); int * __thiscall m_FUN_10453f80(int *param_2); template<class... A> int m_FUN_10453f80(A...); int * __thiscall m_FUN_10455850(int *param_2); template<class... A> int m_FUN_10455850(A...); int * __thiscall m_FUN_104558c0(int *param_2); template<class... A> int m_FUN_104558c0(A...); int * __thiscall m_FUN_10461070(int *param_2); template<class... A> int m_FUN_10461070(A...); int __thiscall m_FUN_10461210(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10461210(A...); int __thiscall m_FUN_104612c0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_104612c0(A...); undefined4 * __thiscall m_FUN_10461520(undefined4 *param_2); template<class... A> int m_FUN_10461520(A...); undefined4 * __thiscall m_FUN_10461590(undefined4 *param_2); template<class... A> int m_FUN_10461590(A...); undefined4 * __thiscall m_FUN_104615d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104615d0(A...); undefined4 * __thiscall m_FUN_104615e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_104615e0(A...); int * __thiscall m_FUN_10462560(int *param_2); template<class... A> int m_FUN_10462560(A...); int __thiscall m_FUN_104625f0(int param_2); template<class... A> int m_FUN_104625f0(A...); int __thiscall m_FUN_10462660(int param_2); template<class... A> int m_FUN_10462660(A...); void __thiscall m_FUN_104626b0(int *param_2,int param_3); template<class... A> int m_FUN_104626b0(A...); int * __thiscall m_FUN_10462770(int param_2); template<class... A> int m_FUN_10462770(A...); int * __thiscall m_FUN_10462790(int param_2); template<class... A> int m_FUN_10462790(A...); void __thiscall m_FUN_10462ce0(int param_2); template<class... A> int m_FUN_10462ce0(A...); void __thiscall m_FUN_10462d00(undefined4 param_2); template<class... A> int m_FUN_10462d00(A...); void __thiscall m_FUN_104638e0(undefined4 *param_2); template<class... A> int m_FUN_104638e0(A...); int __thiscall m_FUN_10464830(int param_2); template<class... A> int m_FUN_10464830(A...); undefined4 * __thiscall m_FUN_104648a0(undefined4 *param_2); template<class... A> int m_FUN_104648a0(A...); void __thiscall m_FUN_10465200(uint param_2); template<class... A> int m_FUN_10465200(A...); int * __thiscall m_FUN_10465f40(int *param_2); template<class... A> int m_FUN_10465f40(A...); int * __thiscall m_FUN_10465fc0(int *param_2); template<class... A> int m_FUN_10465fc0(A...); undefined4 * __thiscall m_FUN_10465fe0(undefined4 param_2); template<class... A> int m_FUN_10465fe0(A...); int * __thiscall m_FUN_10466000(int *param_2); template<class... A> int m_FUN_10466000(A...); undefined4 * __thiscall m_FUN_1046a350(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1046a350(A...); int __thiscall m_FUN_1046b150(int param_2); template<class... A> int m_FUN_1046b150(A...); int __thiscall m_FUN_1046e9d0(int param_2); template<class... A> int m_FUN_1046e9d0(A...); int * __thiscall m_FUN_104700f0(int *param_2); template<class... A> int m_FUN_104700f0(A...); int * __thiscall m_FUN_10471880(int *param_2); template<class... A> int m_FUN_10471880(A...); int * __thiscall m_FUN_104718a0(int *param_2); template<class... A> int m_FUN_104718a0(A...); int * __thiscall m_FUN_10471920(int *param_2); template<class... A> int m_FUN_10471920(A...); undefined4 * __thiscall m_FUN_10471e80(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10471e80(A...); void __thiscall m_FUN_10473360(int param_2); template<class... A> int m_FUN_10473360(A...); void __thiscall m_FUN_10473380(undefined4 param_2); template<class... A> int m_FUN_10473380(A...); int * __thiscall m_FUN_10474700(int *param_2); template<class... A> int m_FUN_10474700(A...); void __thiscall m_FUN_104762d0(int param_2); template<class... A> int m_FUN_104762d0(A...); void __thiscall m_FUN_104762f0(undefined4 param_2); template<class... A> int m_FUN_104762f0(A...); void __thiscall m_FUN_10478f40(undefined4 *param_2); template<class... A> int m_FUN_10478f40(A...); undefined4 * __thiscall m_FUN_10479700(undefined4 *param_2); template<class... A> int m_FUN_10479700(A...); undefined4 * __thiscall m_FUN_10479e50(undefined4 *param_2); template<class... A> int m_FUN_10479e50(A...); void __thiscall m_FUN_1047a6b0(undefined4 *param_2); template<class... A> int m_FUN_1047a6b0(A...); int * __thiscall m_FUN_1047f070(int *param_2); template<class... A> int m_FUN_1047f070(A...); int * __thiscall m_FUN_1047f090(int *param_2); template<class... A> int m_FUN_1047f090(A...); int * __thiscall m_FUN_1047f0b0(int *param_2); template<class... A> int m_FUN_1047f0b0(A...); int * __thiscall m_FUN_1047f0d0(int *param_2); template<class... A> int m_FUN_1047f0d0(A...); int * __thiscall m_FUN_1047f0f0(int *param_2); template<class... A> int m_FUN_1047f0f0(A...); int * __thiscall m_FUN_1047f270(int *param_2); template<class... A> int m_FUN_1047f270(A...); void __thiscall m_FUN_1047fda0(undefined4 *param_2); template<class... A> int m_FUN_1047fda0(A...); void __thiscall m_FUN_1047fdc0(undefined4 *param_2); template<class... A> int m_FUN_1047fdc0(A...); void __thiscall m_FUN_10481690(undefined4 *param_2); template<class... A> int m_FUN_10481690(A...); undefined4 * __thiscall m_FUN_10482930(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10482930(A...); undefined4 * __thiscall m_FUN_104829b0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_104829b0(A...); undefined4 * __thiscall m_FUN_10482a30(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10482a30(A...); undefined4 * __thiscall m_FUN_10482ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10482ab0(A...); undefined4 * __thiscall m_FUN_10482b30(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10482b30(A...); };

extern int FUN_100517a8(...);
extern int FUN_103df5d0(...);
extern int FUN_103df5e0(...);
extern int FUN_103df5f0(...);
extern int FUN_103df600(...);
extern int FUN_103df610(...);
extern int FUN_103df620(...);
extern int FUN_103df630(...);
extern int FUN_103df640(...);
extern int FUN_103df650(...);
extern int FUN_103df660(...);
extern int FUN_103df670(...);
extern int FUN_103df680(...);
extern int FUN_103df690(...);
extern int FUN_103df6a0(...);
extern int FUN_103df6b0(...);
extern int FUN_103df6c0(...);
extern int FUN_103df6d0(...);
extern __declspec(dllimport) int Ordinal_8(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int func_0x1007123d(...);
extern int func_0x10075a36(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012cdb0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101eb1b0(...);
extern int thunk_FUN_101eb2b0(...);
extern int thunk_FUN_101f1fa0(...);
extern int thunk_FUN_10225d70(...);
template<class... A> int __stdcall thunk_FUN_102460b0(A...);
extern int thunk_FUN_102bce30(...);
template<class... A> int __stdcall thunk_FUN_103cf4f0(A...);
template<class... A> int __stdcall thunk_FUN_103d42c0(A...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_103d6c80(...);
template<class... A> int __stdcall thunk_FUN_103d9b50(A...);
extern int thunk_FUN_103e0c00(...);
extern int thunk_FUN_103f6500(...);
template<class... A> int __stdcall thunk_FUN_103f6890(A...);
extern int thunk_FUN_10405f90(...);
extern int thunk_FUN_10406570(...);
extern int thunk_FUN_10406980(...);
extern int thunk_FUN_10407c50(...);
extern int thunk_FUN_10408020(...);
extern int thunk_FUN_1040c4f0(...);
template<class... A> int __stdcall thunk_FUN_1040dfb0(A...);
template<class... A> int __stdcall thunk_FUN_1040e5c0(A...);
template<class... A> int __stdcall thunk_FUN_1040ed00(A...);
extern int thunk_FUN_1040f100(...);
extern int thunk_FUN_1040fe70(...);
extern int thunk_FUN_10410930(...);
extern int thunk_FUN_10411ab0(...);
extern int thunk_FUN_10413500(...);
extern int thunk_FUN_10413a80(...);
template<class... A> int __stdcall thunk_FUN_1041dbe0(A...);
extern int thunk_FUN_10436400(...);
extern int thunk_FUN_1047a750(...);
template<class... A> int __stdcall thunk_FUN_1047fdf0(A...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_105a05f0(...);
template<class... A> int __stdcall thunk_FUN_105a5110(A...);
template<class... A> int __stdcall thunk_FUN_105a51f0(A...);
template<class... A> int __stdcall thunk_FUN_105a52b0(A...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_106f7150(...);
extern int thunk_FUN_106fd7f0(...);
extern int thunk_FUN_10702ba0(...);
extern int thunk_FUN_107123b0(...);
extern int thunk_FUN_10957cf0(...);
extern int thunk_FUN_10961ad0(...);
extern int thunk_FUN_10999150(...);
extern int thunk_FUN_109cb7a0(...);
extern int thunk_FUN_109f3c80(...);
extern int thunk_FUN_10a08d00(...);
extern int thunk_FUN_10b31d30(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109f0a0(...);
extern int thunk_FUN_110adac0(...);
extern int thunk_FUN_110b0460(...);
template<class... A> int __stdcall thunk_FUN_110b2900(A...);
template<class... A> int __stdcall thunk_FUN_11131cc0(A...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11243520(...);
extern int thunk_FUN_11243d20(...);
template<class... A> int __stdcall thunk_FUN_11244550(A...);
extern int thunk_FUN_11244ac0(...);
extern int thunk_FUN_11247ed0(...);
extern int thunk_FUN_1124a160(...);
extern int thunk_FUN_1124a200(...);
extern int thunk_FUN_1125bbd0(...);
extern int thunk_FUN_1125bca0(...);
extern int thunk_FUN_11261330(...);
extern int thunk_FUN_11272de0(...);
extern int thunk_FUN_1127d260(...);
extern int thunk_FUN_1127e450(...);
extern int thunk_FUN_1127e620(...);
extern int thunk_FUN_1127e820(...);
extern int thunk_FUN_1127fa00(...);
extern int thunk_FUN_1127feb0(...);
extern int thunk_FUN_112810c0(...);
extern int thunk_FUN_112858c0(...);
extern int thunk_FUN_112a7da0(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113d1a60(...);
extern int thunk_FUN_113d1ae0(...);
extern int thunk_FUN_113d1d90(...);
extern int thunk_FUN_1145ed60(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_1189dc98;
extern int DAT_118a52bc;
extern int DAT_12126b84;
extern int UNK_1189dc8c;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDevicePostAIOOp_PostPropBagProvider;
extern int ghidra_vftable_RGetBetaSettingsRequest;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RHTTPPutReqHeadersBuilder;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RSecRegBeginSecureTransferRequest;
extern int ghidra_vftable_RSecRegFinalizeRegistrationRequest;
extern int ghidra_vftable_RSecRegPrepareRegistrationRequest;
extern int ghidra_vftable_RSecRegPrepareTransferRequest;
extern int ghidra_vftable_RSecRegResetPasswordAIOOp;
extern int ghidra_vftable_RSecRegResetPasswordRequest;
extern int ghidra_vftable_RSecRegUpdateUserRequest;
extern int ghidra_vftable_RSecRegValidateEmailAIOOp;
extern int ghidra_vftable_RSecRegValidateEmailRequest;
extern int ghidra_vftable_RSecRegVerifyEmailAIOOp;
extern int ghidra_vftable_RSecRegVerifyEmailRequest;
extern int ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp;
extern int ghidra_vftable_RSecRegVerifyEmailSubmitRequest;
extern int ghidra_vftable_RUpdateManifestProvider;
extern int ghidra_vftable_RZPWifiModeDevicesEnumerator;
extern int ghidra_vftable_SCAbilityManager_Listener;
extern int ghidra_vftable_SCDeviceNameStandaloneInput;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCGroupNameStandaloneInput;
extern int ghidra_vftable_SCHistoryTurnOnActionDescriptor;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIArray;
extern int ghidra_vftable_SCIFeatureManager;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpSecRegRegisterPlayer;
extern int ghidra_vftable_SCISettingsMenuItem;
extern int ghidra_vftable_SCIUrbanAirshipListener;
extern int ghidra_vftable_SCIUserAccount;
extern int ghidra_vftable_SCJsonHelper;
extern int ghidra_vftable_SCLifecycleManager_EventSink;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCMuseHouseholdNameStandaloneInput;
extern int ghidra_vftable_SCNewWizController;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCOpCB;
extern int ghidra_vftable_SCOpGetBetaSettings;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpSecRegAccountLogin;
extern int ghidra_vftable_SCOpSecRegAccountTransfer;
extern int ghidra_vftable_SCOpSecRegBeginSecureTransfer;
extern int ghidra_vftable_SCOpSecRegCreateIdentity;
extern int ghidra_vftable_SCOpSecRegEmailHint;
extern int ghidra_vftable_SCOpSecRegGetUserAccountRequest;
extern int ghidra_vftable_SCOpSecRegPasswordSet;
extern int ghidra_vftable_SCOpSecRegPrepTransferPlayer;
extern int ghidra_vftable_SCOpSecRegResetPassword;
extern int ghidra_vftable_SCOpSecRegUpdateUser;
extern int ghidra_vftable_SCOpSecRegUserEmail;
extern int ghidra_vftable_SCOpSecRegValidateEmail;
extern int ghidra_vftable_SCOpSecRegVerifyEmail;
extern int ghidra_vftable_SCOpSecRegVerifyEmailSubmit;
extern int ghidra_vftable_SCRemoveMeSettingsMenu;
extern int ghidra_vftable_SCResetPasswordActionDescriptor;
extern int ghidra_vftable_SCSearchTermStandaloneInput;
extern int ghidra_vftable_SCSettingDateValueFormatter;
extern int ghidra_vftable_SCSettingIntToPercentValueFormatter;
extern int ghidra_vftable_SCSettingMusicLibraryCompilationsFormatter;
extern int ghidra_vftable_SCSettingMusicLibrarySortByFormatter;
extern int ghidra_vftable_SCSettingRecurrenceValueFormatter;
extern int ghidra_vftable_SCSettingTimeIntervalValueFormatter;
extern int ghidra_vftable_SCSettingTimeValueFormatter;
extern int ghidra_vftable_SCSettingTimeZoneValueFormatter;
extern int ghidra_vftable_SCSettingValueFormatter;
extern int ghidra_vftable_SCSettingsMenu;
extern int ghidra_vftable_SCSettingsMenuEntitlement;
extern int ghidra_vftable_SCSettingsMenuEnumeration;
extern int ghidra_vftable_SCSettingsMenuEnumerationWithAuth;
extern int ghidra_vftable_SCSettingsMenuEnumeration_EventSink;
extern int ghidra_vftable_SCShowUnsupportedOSMessageDescriptor;
extern int ghidra_vftable_SCShowUpdateMessageDescriptor;
extern int ghidra_vftable_SCSignOutDescriptor;
extern int ghidra_vftable_SCSwfObjSysListener;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCToggleExplicitFilterActionDescriptor;
extern int ghidra_vftable_SCTokenManagerEventSinkInternal;
extern int ghidra_vftable_SCUpdateMusicIndexActionDescriptor;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_4;
extern int uStack_410;
extern int uStack_41c;
extern int uStack_46c;
extern int uStack_478;
extern int uStack_58;
extern int uStack_5c;
extern int uStack_60;
extern int uStack_64;
extern int uStack_8;
extern int uStack_814;
extern int uStack_e2c;
extern int uStack_f4;
extern int unaff_ESI;
extern undefined1 LAB_10408fbc[];
extern undefined1 LAB_10408ff0[];
extern undefined1 LAB_10408ffc[];
extern undefined1 LAB_104224b4[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_114fe7e0[];
extern undefined1 LAB_1155221f[];
extern undefined1 LAB_1155261b[];
extern undefined1 LAB_11552796[];
extern undefined1 LAB_115528bf[];
extern undefined1 LAB_11553560[];
extern undefined1 LAB_11553590[];
extern undefined1 LAB_115535c0[];
extern undefined1 LAB_115535f0[];
extern undefined1 LAB_11553620[];
extern undefined1 LAB_11553650[];
extern undefined1 LAB_115536b0[];
extern undefined1 LAB_115536e0[];
extern undefined1 LAB_11553710[];
extern undefined1 LAB_11553740[];
extern undefined1 LAB_11553770[];
extern undefined1 LAB_115537a0[];
extern undefined1 LAB_115537d0[];
extern undefined1 LAB_11553800[];
extern undefined1 LAB_11553830[];
extern undefined1 LAB_11553860[];
extern undefined1 LAB_1155522d[];
extern undefined1 LAB_11559d50[];
extern undefined1 LAB_1155a460[];
extern undefined1 LAB_1155b6d6[];
extern undefined1 LAB_11562b85[];
extern undefined1 LAB_11566c80[];
extern undefined1 LAB_115a83b0[];
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d1010(int *param_1);
template<class... A> int FUN_103d1010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d1020(int *param_1);
template<class... A> int FUN_103d1020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d1030(int *param_1);
template<class... A> int FUN_103d1030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d1040(int *param_1);
template<class... A> int FUN_103d1040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d1050(int *param_1);
template<class... A> int FUN_103d1050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d1610(undefined4 *param_1);
template<class... A> int FUN_103d1610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d1680(int param_1);
template<class... A> int FUN_103d1680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d16a0(int param_1);
template<class... A> int FUN_103d16a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1bf0(undefined4 param_1);
template<class... A> int FUN_103d1bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c00(undefined4 param_1);
template<class... A> int FUN_103d1c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c10(undefined4 param_1);
template<class... A> int FUN_103d1c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c20(undefined4 param_1);
template<class... A> int FUN_103d1c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c30(undefined4 param_1);
template<class... A> int FUN_103d1c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c40(undefined4 param_1);
template<class... A> int FUN_103d1c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c50(undefined4 param_1);
template<class... A> int FUN_103d1c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c60(undefined4 param_1);
template<class... A> int FUN_103d1c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c70(undefined4 param_1);
template<class... A> int FUN_103d1c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c80(undefined4 param_1);
template<class... A> int FUN_103d1c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1c90(undefined4 param_1);
template<class... A> int FUN_103d1c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d1ca0(undefined4 param_1);
template<class... A> int FUN_103d1ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103d22e0(int param_1);
template<class... A> int FUN_103d22e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_103d2340(int *param_1);
template<class... A> int FUN_103d2340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103d23c0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_103d23c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103d23d0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_103d23d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d23e0(int param_1);
template<class... A> int FUN_103d23e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d23f0(int param_1);
template<class... A> int FUN_103d23f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d2400(int param_1);
template<class... A> int FUN_103d2400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d2410(int param_1);
template<class... A> int FUN_103d2410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d2420(int param_1);
template<class... A> int FUN_103d2420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103d2f00(uint param_1);
template<class... A> int FUN_103d2f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103d31c0(int param_1,int param_2);
template<class... A> int FUN_103d31c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103d3210(int param_1,int param_2);
template<class... A> int FUN_103d3210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103d4530(undefined4 param_1);
template<class... A> int FUN_103d4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d4690(int param_1);
template<class... A> int FUN_103d4690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d46c0(int param_1);
template<class... A> int FUN_103d46c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_103d46f0(SCStr *param_1);
template<class... A> int FUN_103d46f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103d4850(undefined4 param_1);
template<class... A> int FUN_103d4850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103d4860(undefined4 param_1);
template<class... A> int FUN_103d4860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103d4870(undefined4 param_1);
template<class... A> int FUN_103d4870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d48e0(void);
template<class... A> int FUN_103d48e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d48f0(void);
template<class... A> int FUN_103d48f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d4900(void);
template<class... A> int FUN_103d4900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d4910(void);
template<class... A> int FUN_103d4910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d4dd0(undefined4 param_1);
template<class... A> int FUN_103d4dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d4de0(undefined4 param_1);
template<class... A> int FUN_103d4de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d4df0(undefined4 param_1);
template<class... A> int FUN_103d4df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d5100(undefined4 param_1);
template<class... A> int FUN_103d5100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d5110(undefined4 param_1);
template<class... A> int FUN_103d5110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d5120(undefined4 param_1);
template<class... A> int FUN_103d5120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d53b0(int param_1);
template<class... A> int FUN_103d53b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d5480(int param_1);
template<class... A> int FUN_103d5480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d54b0(int param_1);
template<class... A> int FUN_103d54b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d5600(undefined4 *param_1);
template<class... A> int FUN_103d5600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d5630(undefined4 *param_1);
template<class... A> int FUN_103d5630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d5860(undefined4 *param_1);
template<class... A> int FUN_103d5860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103d6130(undefined4 *param_1);
template<class... A> int FUN_103d6130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103d6910(int *param_1);
template<class... A> int FUN_103d6910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103d6d60(void);
template<class... A> int FUN_103d6d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103d7010(void);
template<class... A> int FUN_103d7010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d7020(undefined4 *param_1);
template<class... A> int FUN_103d7020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d79e0(undefined4 *param_1);
template<class... A> int FUN_103d79e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d9380(undefined4 *param_1);
template<class... A> int FUN_103d9380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d9a80(undefined4 *param_1);
template<class... A> int FUN_103d9a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103da1c0(undefined4 *param_1);
template<class... A> int FUN_103da1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103dad60(undefined4 *param_1);
template<class... A> int FUN_103dad60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103dae40(undefined4 *param_1);
template<class... A> int FUN_103dae40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103db910(undefined4 *param_1);
template<class... A> int FUN_103db910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103dc9e0(undefined4 *param_1);
template<class... A> int FUN_103dc9e0(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_103df5d0(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df5e0 (ram,0x101ba14a) */ void __fastcall FUN_103df5e0(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df5f0 (ram,0x101ba14a) */ void __fastcall FUN_103df5f0(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df600 (ram,0x101ba14a) */ void __fastcall FUN_103df600(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df610 (ram,0x101ba14a) */ void __fastcall FUN_103df610(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df620 (ram,0x101ba14a) */ void __fastcall FUN_103df620(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df630 (ram,0x101ba14a) */ void __fastcall FUN_103df630(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df640 (ram,0x101ba14a) */ void __fastcall FUN_103df640(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df650 (ram,0x101ba14a) */ void __fastcall FUN_103df650(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df660 (ram,0x101ba14a) */ void __fastcall FUN_103df660(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df670 (ram,0x101ba14a) */ void __fastcall FUN_103df670(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df680 (ram,0x101ba14a) */ void __fastcall FUN_103df680(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df690 (ram,0x101ba14a) */ void __fastcall FUN_103df690(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df6a0 (ram,0x101ba14a) */ void __fastcall FUN_103df6a0(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df6b0 (ram,0x101ba14a) */ void __fastcall FUN_103df6b0(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df6c0 (ram,0x101ba14a) */ void __fastcall FUN_103df6c0(undefined4 *param_1);
/* WARNING: Removing unreachable block_103df6d0 (ram,0x101ba14a) */ void __fastcall FUN_103df6d0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103e0dc0(void);
template<class... A> int FUN_103e0dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3350(undefined4 *param_1);
template<class... A> int FUN_103e3350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3360(undefined4 *param_1);
template<class... A> int FUN_103e3360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3380(undefined4 *param_1);
template<class... A> int FUN_103e3380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e33a0(undefined4 *param_1);
template<class... A> int FUN_103e33a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e33c0(undefined4 *param_1);
template<class... A> int FUN_103e33c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e33e0(undefined4 *param_1);
template<class... A> int FUN_103e33e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3400(undefined4 *param_1);
template<class... A> int FUN_103e3400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e34a0(undefined4 *param_1);
template<class... A> int FUN_103e34a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e34c0(undefined4 *param_1);
template<class... A> int FUN_103e34c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e34e0(undefined4 *param_1);
template<class... A> int FUN_103e34e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3500(undefined4 *param_1);
template<class... A> int FUN_103e3500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3510(undefined4 *param_1);
template<class... A> int FUN_103e3510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3530(undefined4 *param_1);
template<class... A> int FUN_103e3530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3550(undefined4 *param_1);
template<class... A> int FUN_103e3550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3570(undefined4 *param_1);
template<class... A> int FUN_103e3570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e3590(undefined4 *param_1);
template<class... A> int FUN_103e3590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e35b0(undefined4 *param_1);
template<class... A> int FUN_103e35b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e35d0(undefined4 *param_1);
template<class... A> int FUN_103e35d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e35e0(int param_1);
template<class... A> int FUN_103e35e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e35f0(int param_1);
template<class... A> int FUN_103e35f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3600(int param_1);
template<class... A> int FUN_103e3600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3610(int param_1);
template<class... A> int FUN_103e3610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3620(int param_1);
template<class... A> int FUN_103e3620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3630(int param_1);
template<class... A> int FUN_103e3630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3640(int param_1);
template<class... A> int FUN_103e3640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3650(int param_1);
template<class... A> int FUN_103e3650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3660(int param_1);
template<class... A> int FUN_103e3660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3670(int param_1);
template<class... A> int FUN_103e3670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3680(int param_1);
template<class... A> int FUN_103e3680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e3690(int param_1);
template<class... A> int FUN_103e3690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e36a0(int param_1);
template<class... A> int FUN_103e36a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e36b0(int param_1);
template<class... A> int FUN_103e36b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e36c0(int param_1);
template<class... A> int FUN_103e36c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e36d0(int param_1);
template<class... A> int FUN_103e36d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103e36e0(int param_1);
template<class... A> int FUN_103e36e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103e6f70(void);
template<class... A> int FUN_103e6f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103e9ea0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4, unsigned int recovered_unused_stack_5, unsigned int recovered_unused_stack_6, unsigned int recovered_unused_stack_7);
template<class... A> int FUN_103e9ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103e9f20(SCStr *param_1, undefined4 param_2, undefined4 param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_103e9f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eaa90(int param_1);
template<class... A> int FUN_103eaa90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eaab0(int param_1);
template<class... A> int FUN_103eaab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eaac0(int param_1);
template<class... A> int FUN_103eaac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eaad0(int param_1);
template<class... A> int FUN_103eaad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eaaf0(int param_1);
template<class... A> int FUN_103eaaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eab00(int param_1);
template<class... A> int FUN_103eab00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eab10(int param_1);
template<class... A> int FUN_103eab10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eab30(int param_1);
template<class... A> int FUN_103eab30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eab50(int param_1);
template<class... A> int FUN_103eab50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eab70(int param_1);
template<class... A> int FUN_103eab70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eab90(int param_1);
template<class... A> int FUN_103eab90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eaba0(int param_1);
template<class... A> int FUN_103eaba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eabc0(int param_1);
template<class... A> int FUN_103eabc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eabe0(int param_1);
template<class... A> int FUN_103eabe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eae20(int param_1);
template<class... A> int FUN_103eae20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eae30(int param_1);
template<class... A> int FUN_103eae30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103eaf30(int param_1);
template<class... A> int FUN_103eaf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103eaf40(int param_1);
template<class... A> int FUN_103eaf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eaf50(int param_1);
template<class... A> int FUN_103eaf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103eaf70(int param_1);
template<class... A> int FUN_103eaf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103eaf80(int param_1);
template<class... A> int FUN_103eaf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eaf90(int param_1);
template<class... A> int FUN_103eaf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eafa0(int param_1);
template<class... A> int FUN_103eafa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eafb0(int param_1);
template<class... A> int FUN_103eafb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb040(int param_1);
template<class... A> int FUN_103eb040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb050(int param_1);
template<class... A> int FUN_103eb050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eb340(int param_1);
template<class... A> int FUN_103eb340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eb350(int param_1);
template<class... A> int FUN_103eb350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eb360(int param_1);
template<class... A> int FUN_103eb360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb460(int param_1);
template<class... A> int FUN_103eb460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb470(int param_1);
template<class... A> int FUN_103eb470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb480(int param_1);
template<class... A> int FUN_103eb480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb490(int param_1);
template<class... A> int FUN_103eb490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb4a0(int param_1);
template<class... A> int FUN_103eb4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb4d0(int param_1);
template<class... A> int FUN_103eb4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb4e0(int param_1);
template<class... A> int FUN_103eb4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb4f0(int param_1);
template<class... A> int FUN_103eb4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb500(int param_1);
template<class... A> int FUN_103eb500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb510(int param_1);
template<class... A> int FUN_103eb510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb520(int param_1);
template<class... A> int FUN_103eb520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb530(int param_1);
template<class... A> int FUN_103eb530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb540(int param_1);
template<class... A> int FUN_103eb540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb550(int param_1);
template<class... A> int FUN_103eb550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb570(int param_1);
template<class... A> int FUN_103eb570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103eb5e0(int param_1);
template<class... A> int FUN_103eb5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eb890(int param_1);
template<class... A> int FUN_103eb890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eb8a0(int param_1);
template<class... A> int FUN_103eb8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eb8b0(int param_1);
template<class... A> int FUN_103eb8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103eb8f0(int param_1);
template<class... A> int FUN_103eb8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eb920(int param_1);
template<class... A> int FUN_103eb920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eb930(int param_1);
template<class... A> int FUN_103eb930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103eb940(int param_1);
template<class... A> int FUN_103eb940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eb960(int param_1);
template<class... A> int FUN_103eb960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eb980(int param_1);
template<class... A> int FUN_103eb980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eb9a0(int param_1);
template<class... A> int FUN_103eb9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103eb9c0(int param_1);
template<class... A> int FUN_103eb9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103efd90(void);
template<class... A> int FUN_103efd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103efeb0(int param_1);
template<class... A> int FUN_103efeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103efed0(int param_1);
template<class... A> int FUN_103efed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103f0070(int param_1);
template<class... A> int FUN_103f0070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103f0080(int param_1);
template<class... A> int FUN_103f0080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103f1f70(undefined4 *param_1);
template<class... A> int FUN_103f1f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103f2920(undefined4 *param_1);
template<class... A> int FUN_103f2920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103f2fb0(undefined4 param_1);
template<class... A> int FUN_103f2fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103f3300(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103f3300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103f3aa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103f3aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103f3b20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103f3b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f5b90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103f5b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f5bb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103f5bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f5bf0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_103f5bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f5c10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_103f5c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f5ea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_103f5ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f5ec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_103f5ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103f6220(int param_1);
template<class... A> int FUN_103f6220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6230(void);
template<class... A> int FUN_103f6230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6240(void);
template<class... A> int FUN_103f6240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6250(void);
template<class... A> int FUN_103f6250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6270(void);
template<class... A> int FUN_103f6270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f63f0(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_103f63f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6430(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f6430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6440(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f6440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6450(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f6450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6460(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f6460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f66f0(void);
template<class... A> int FUN_103f66f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6700(void);
template<class... A> int FUN_103f6700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6e70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_103f6e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6e90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_103f6e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f6fb0(undefined4 *param_1);
template<class... A> int FUN_103f6fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6fc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f6fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f6fd0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f6fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7100(undefined4 param_1);
template<class... A> int FUN_103f7100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7110(undefined4 param_1);
template<class... A> int FUN_103f7110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7120(int param_1,SCStr *param_2);
template<class... A> int FUN_103f7120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_103f7150(int param_1,uint *param_2);
template<class... A> int FUN_103f7150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f7180(void);
template<class... A> int FUN_103f7180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f7230(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f7230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f7240(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f7240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103f7260(int param_1);
template<class... A> int FUN_103f7260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f73b0(undefined4 param_1);
template<class... A> int FUN_103f73b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f73c0(undefined4 param_1);
template<class... A> int FUN_103f73c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f73d0(undefined4 param_1);
template<class... A> int FUN_103f73d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f73e0(undefined4 param_1);
template<class... A> int FUN_103f73e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f73f0(undefined4 param_1);
template<class... A> int FUN_103f73f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7400(undefined4 param_1);
template<class... A> int FUN_103f7400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7410(undefined4 param_1);
template<class... A> int FUN_103f7410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7420(undefined4 param_1);
template<class... A> int FUN_103f7420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7430(undefined4 param_1);
template<class... A> int FUN_103f7430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7440(undefined4 param_1);
template<class... A> int FUN_103f7440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7450(undefined4 param_1);
template<class... A> int FUN_103f7450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7460(undefined4 param_1);
template<class... A> int FUN_103f7460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7470(undefined4 param_1);
template<class... A> int FUN_103f7470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f77c0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_103f77c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f77f0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_103f77f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f7820(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_103f7820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7920(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f7920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7940(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f7940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7960(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f7960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7980(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f7980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7a90(undefined4 param_1);
template<class... A> int FUN_103f7a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7aa0(undefined4 param_1);
template<class... A> int FUN_103f7aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7ab0(undefined4 param_1);
template<class... A> int FUN_103f7ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7ac0(undefined4 param_1);
template<class... A> int FUN_103f7ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7ad0(undefined4 param_1);
template<class... A> int FUN_103f7ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7ae0(undefined4 param_1);
template<class... A> int FUN_103f7ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7af0(undefined4 param_1);
template<class... A> int FUN_103f7af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b00(undefined4 param_1);
template<class... A> int FUN_103f7b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b10(undefined4 param_1);
template<class... A> int FUN_103f7b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b20(undefined4 param_1);
template<class... A> int FUN_103f7b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b30(undefined4 param_1);
template<class... A> int FUN_103f7b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b40(undefined4 param_1);
template<class... A> int FUN_103f7b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b50(undefined4 param_1);
template<class... A> int FUN_103f7b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b60(undefined4 param_1);
template<class... A> int FUN_103f7b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b70(undefined4 param_1);
template<class... A> int FUN_103f7b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b80(undefined4 param_1);
template<class... A> int FUN_103f7b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7b90(undefined4 param_1);
template<class... A> int FUN_103f7b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7ba0(undefined4 param_1);
template<class... A> int FUN_103f7ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7bb0(undefined4 param_1);
template<class... A> int FUN_103f7bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103f7bc0(void);
template<class... A> int FUN_103f7bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f7d10(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_103f7d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7d50(undefined4 param_1);
template<class... A> int FUN_103f7d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7d60(undefined4 param_1);
template<class... A> int FUN_103f7d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7d70(undefined4 param_1);
template<class... A> int FUN_103f7d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103f7d80(undefined4 param_1);
template<class... A> int FUN_103f7d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103f7d90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103f7d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f8070(undefined4 *param_1);
template<class... A> int FUN_103f8070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f80a0(undefined4 *param_1);
template<class... A> int FUN_103f80a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f8100(undefined4 *param_1);
template<class... A> int FUN_103f8100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f8160(undefined4 *param_1);
template<class... A> int FUN_103f8160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f81c0(undefined4 *param_1);
template<class... A> int FUN_103f81c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f8360(undefined4 *param_1);
template<class... A> int FUN_103f8360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103f83c0(undefined4 param_1);
template<class... A> int FUN_103f83c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103f83d0(int param_1);
template<class... A> int FUN_103f83d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103f83e0(int param_1);
template<class... A> int FUN_103f83e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103f83f0(int param_1);
template<class... A> int FUN_103f83f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103f8400(int param_1);
template<class... A> int FUN_103f8400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103f8410(int param_1);
template<class... A> int FUN_103f8410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f86b0(undefined4 *param_1);
template<class... A> int FUN_103f86b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f86d0(undefined4 *param_1);
template<class... A> int FUN_103f86d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103f86f0(undefined4 param_1);
template<class... A> int FUN_103f86f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103f8700(undefined4 param_1);
template<class... A> int FUN_103f8700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103f8880(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103f8880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103f8910(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103f8910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103f89a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103f89a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103f8a30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103f8a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f8c60(undefined4 *param_1);
template<class... A> int FUN_103f8c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103f8ed0(undefined4 *param_1);
template<class... A> int FUN_103f8ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fab70(int param_1);
template<class... A> int FUN_103fab70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fb020(undefined4 *param_1);
template<class... A> int FUN_103fb020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fb040(undefined4 *param_1);
template<class... A> int FUN_103fb040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fb0d0(undefined4 *param_1);
template<class... A> int FUN_103fb0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fb490(int *param_1);
template<class... A> int FUN_103fb490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fb740(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103fb740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fb880(undefined4 *param_1);
template<class... A> int FUN_103fb880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fb890(int *param_1);
template<class... A> int FUN_103fb890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fb8a0(int *param_1);
template<class... A> int FUN_103fb8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fb8b0(undefined4 *param_1);
template<class... A> int FUN_103fb8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fb8c0(int param_1);
template<class... A> int FUN_103fb8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fb8d0(int param_1);
template<class... A> int FUN_103fb8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fb8e0(int param_1);
template<class... A> int FUN_103fb8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fb8f0(int param_1);
template<class... A> int FUN_103fb8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fb900(int param_1);
template<class... A> int FUN_103fb900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fb910(int param_1);
template<class... A> int FUN_103fb910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fb920(int param_1);
template<class... A> int FUN_103fb920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fb930(int param_1);
template<class... A> int FUN_103fb930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fb940(int param_1);
template<class... A> int FUN_103fb940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fb950(int param_1);
template<class... A> int FUN_103fb950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fb960(undefined4 *param_1);
template<class... A> int FUN_103fb960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103fb970(int *param_1);
template<class... A> int FUN_103fb970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103fb980(int *param_1);
template<class... A> int FUN_103fb980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103fb990(int *param_1);
template<class... A> int FUN_103fb990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103fb9a0(int *param_1);
template<class... A> int FUN_103fb9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103fb9b0(int *param_1);
template<class... A> int FUN_103fb9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103fb9c0(int *param_1);
template<class... A> int FUN_103fb9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103fb9d0(int *param_1);
template<class... A> int FUN_103fb9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103fb9e0(int *param_1);
template<class... A> int FUN_103fb9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103fb9f0(int *param_1);
template<class... A> int FUN_103fb9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_103fbf50(int *param_1,int *param_2);
template<class... A> int FUN_103fbf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fc4d0(undefined4 *param_1);
template<class... A> int FUN_103fc4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fc500(undefined4 *param_1);
template<class... A> int FUN_103fc500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fc570(int param_1);
template<class... A> int FUN_103fc570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fc590(int param_1);
template<class... A> int FUN_103fc590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fc6e0(int param_1);
template<class... A> int FUN_103fc6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fc6f0(int param_1);
template<class... A> int FUN_103fc6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fc700(int param_1);
template<class... A> int FUN_103fc700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fc710(int param_1);
template<class... A> int FUN_103fc710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fc720(int param_1);
template<class... A> int FUN_103fc720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103fc730(undefined4 param_1);
template<class... A> int FUN_103fc730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc750(undefined4 param_1);
template<class... A> int FUN_103fc750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc760(undefined4 param_1);
template<class... A> int FUN_103fc760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc770(undefined4 param_1);
template<class... A> int FUN_103fc770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc780(undefined4 param_1);
template<class... A> int FUN_103fc780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc790(undefined4 param_1);
template<class... A> int FUN_103fc790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc7a0(undefined4 param_1);
template<class... A> int FUN_103fc7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc7b0(undefined4 param_1);
template<class... A> int FUN_103fc7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc7c0(undefined4 param_1);
template<class... A> int FUN_103fc7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc7d0(undefined4 param_1);
template<class... A> int FUN_103fc7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc7e0(undefined4 param_1);
template<class... A> int FUN_103fc7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc7f0(undefined4 param_1);
template<class... A> int FUN_103fc7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc810(undefined4 param_1);
template<class... A> int FUN_103fc810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc820(undefined4 param_1);
template<class... A> int FUN_103fc820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc830(undefined4 param_1);
template<class... A> int FUN_103fc830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc840(undefined4 param_1);
template<class... A> int FUN_103fc840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc850(undefined4 param_1);
template<class... A> int FUN_103fc850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc860(undefined4 param_1);
template<class... A> int FUN_103fc860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc870(int param_1);
template<class... A> int FUN_103fc870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc880(int param_1);
template<class... A> int FUN_103fc880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc890(int param_1);
template<class... A> int FUN_103fc890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc8a0(int param_1);
template<class... A> int FUN_103fc8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fc8b0(int param_1);
template<class... A> int FUN_103fc8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fcde0(int param_1);
template<class... A> int FUN_103fcde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fcdf0(int param_1);
template<class... A> int FUN_103fcdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fce00(int param_1);
template<class... A> int FUN_103fce00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fce10(int param_1);
template<class... A> int FUN_103fce10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103fce20(int param_1);
template<class... A> int FUN_103fce20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103fcf10(int param_1);
template<class... A> int FUN_103fcf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103fcf40(int param_1);
template<class... A> int FUN_103fcf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_103fcf70(int *param_1);
template<class... A> int FUN_103fcf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_103fcfa0(int *param_1);
template<class... A> int FUN_103fcfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103fd030(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_103fd030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fd040(int param_1);
template<class... A> int FUN_103fd040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fd050(int param_1);
template<class... A> int FUN_103fd050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103fd060(int param_1);
template<class... A> int FUN_103fd060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103fd410(undefined1 *param_1);
template<class... A> int FUN_103fd410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103fe5e0(uint param_1);
template<class... A> int FUN_103fe5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103fe660(uint param_1);
template<class... A> int FUN_103fe660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fe840(undefined4 *param_1);
template<class... A> int FUN_103fe840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103feea0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_103feea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103feef0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_103feef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103fef40(int param_1,int param_2);
template<class... A> int FUN_103fef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103fef90(int param_1,int param_2);
template<class... A> int FUN_103fef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103fefe0(undefined4 *param_1);
template<class... A> int FUN_103fefe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ff000(undefined4 *param_1);
template<class... A> int FUN_103ff000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ff170(int param_1);
template<class... A> int FUN_103ff170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ff480(int param_1);
template<class... A> int FUN_103ff480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ff490(int param_1);
template<class... A> int FUN_103ff490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ff4a0(int param_1);
template<class... A> int FUN_103ff4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ff4b0(int param_1);
template<class... A> int FUN_103ff4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_104009a0(void);
template<class... A> int FUN_104009a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10400ac0(undefined4 param_1);
template<class... A> int FUN_10400ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10401750(void);
template<class... A> int FUN_10401750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10401760(void);
template<class... A> int FUN_10401760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10401770(void);
template<class... A> int FUN_10401770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10401780(void);
template<class... A> int FUN_10401780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10401910(undefined4 param_1);
template<class... A> int FUN_10401910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10401920(undefined4 param_1);
template<class... A> int FUN_10401920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10401aa0(undefined4 *param_1);
template<class... A> int FUN_10401aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10401ab0(undefined4 *param_1);
template<class... A> int FUN_10401ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10401ac0(undefined4 *param_1);
template<class... A> int FUN_10401ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10402430(undefined4 *param_1);
template<class... A> int FUN_10402430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10402460(undefined4 *param_1);
template<class... A> int FUN_10402460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10402490(undefined4 *param_1);
template<class... A> int FUN_10402490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104024c0(undefined4 *param_1);
template<class... A> int FUN_104024c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104024f0(undefined4 *param_1);
template<class... A> int FUN_104024f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10402520(undefined4 *param_1);
template<class... A> int FUN_10402520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10403330(undefined4 param_1);
template<class... A> int FUN_10403330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10403ca0(undefined4 *param_1);
template<class... A> int FUN_10403ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10403ee0(undefined4 *param_1);
template<class... A> int FUN_10403ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104043e0(undefined4 *param_1);
template<class... A> int FUN_104043e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10404bb0(undefined4 *param_1);
template<class... A> int FUN_10404bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10405170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10405170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10405190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10405190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104051c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104051c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10405200(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10405200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10405220(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10405220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10405430(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10405430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10405440(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10405440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10405ed0(void);
template<class... A> int FUN_10405ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10405ee0(void);
template<class... A> int FUN_10405ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10405ef0(void);
template<class... A> int FUN_10405ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10405f10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10405f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10405f20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10405f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10405f30(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10405f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10405f60(void);
template<class... A> int FUN_10405f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10405f70(void);
template<class... A> int FUN_10405f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10405f80(void);
template<class... A> int FUN_10405f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10406730(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10406730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104067c0(undefined4 *param_1);
template<class... A> int FUN_104067c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104067d0(undefined4 *param_1);
template<class... A> int FUN_104067d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104067e0(undefined4 *param_1);
template<class... A> int FUN_104067e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104067f0(undefined4 *param_1);
template<class... A> int FUN_104067f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10406800(int *param_1,int *param_2);
template<class... A> int FUN_10406800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406820(undefined4 param_1);
template<class... A> int FUN_10406820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406830(int param_1,undefined4 *param_2);
template<class... A> int FUN_10406830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10406890(void);
template<class... A> int FUN_10406890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104068a0(void);
template<class... A> int FUN_104068a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_104068b0(undefined4 *param_1,undefined4 param_2,int param_3);
template<class... A> int FUN_104068b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104068d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104068d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406970(undefined4 param_1);
template<class... A> int FUN_10406970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10406ac0(void *param_1,int param_2);
template<class... A> int FUN_10406ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406af0(undefined4 param_1);
template<class... A> int FUN_10406af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10406b00(void *param_1,int param_2);
template<class... A> int FUN_10406b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406b30(undefined4 param_1);
template<class... A> int FUN_10406b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406b40(undefined4 param_1);
template<class... A> int FUN_10406b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406b50(undefined4 param_1);
template<class... A> int FUN_10406b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406b60(undefined4 param_1);
template<class... A> int FUN_10406b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406b70(undefined4 param_1);
template<class... A> int FUN_10406b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406b80(undefined4 param_1);
template<class... A> int FUN_10406b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406b90(undefined4 param_1);
template<class... A> int FUN_10406b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406ba0(undefined4 param_1);
template<class... A> int FUN_10406ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406bb0(undefined4 param_1);
template<class... A> int FUN_10406bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10406bc0(undefined4 param_1);
template<class... A> int FUN_10406bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10406cb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10406cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10406ce0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10406ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10406d10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10406d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10407070(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10407070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10407090(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10407090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104070b0(undefined4 param_1);
template<class... A> int FUN_104070b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104070c0(undefined4 param_1);
template<class... A> int FUN_104070c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104070d0(undefined4 param_1);
template<class... A> int FUN_104070d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104070e0(undefined4 param_1);
template<class... A> int FUN_104070e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104070f0(undefined4 param_1);
template<class... A> int FUN_104070f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10407100(undefined4 param_1);
template<class... A> int FUN_10407100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10407110(undefined4 param_1);
template<class... A> int FUN_10407110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10407120(undefined4 param_1);
template<class... A> int FUN_10407120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10407130(undefined4 param_1);
template<class... A> int FUN_10407130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10407140(undefined4 param_1);
template<class... A> int FUN_10407140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10407150(undefined4 param_1);
template<class... A> int FUN_10407150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10407380(undefined4 param_1);
template<class... A> int FUN_10407380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10407390(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10407390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104074d0(undefined4 *param_1);
template<class... A> int FUN_104074d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104075f0(undefined4 *param_1);
template<class... A> int FUN_104075f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10407650(undefined4 *param_1);
template<class... A> int FUN_10407650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10407670(undefined4 param_1);
template<class... A> int FUN_10407670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10407680(undefined4 param_1);
template<class... A> int FUN_10407680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10407690(undefined1 *param_1);
template<class... A> int FUN_10407690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10407700(undefined4 *param_1);
template<class... A> int FUN_10407700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104077e0(undefined4 *param_1);
template<class... A> int FUN_104077e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10408350(undefined4 *param_1);
template<class... A> int FUN_10408350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10408860(undefined4 *param_1);
template<class... A> int FUN_10408860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10408870(undefined4 *param_1);
template<class... A> int FUN_10408870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10408880(int *param_1);
template<class... A> int FUN_10408880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10408890(int *param_1);
template<class... A> int FUN_10408890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104088a0(int *param_1);
template<class... A> int FUN_104088a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104088b0(int *param_1);
template<class... A> int FUN_104088b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104088c0(undefined4 *param_1);
template<class... A> int FUN_104088c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104088d0(undefined4 *param_1);
template<class... A> int FUN_104088d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104088e0(int *param_1);
template<class... A> int FUN_104088e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104088f0(int *param_1);
template<class... A> int FUN_104088f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10408900(int *param_1);
template<class... A> int FUN_10408900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10408930(int *param_1);
template<class... A> int FUN_10408930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10408960(int *param_1);
template<class... A> int FUN_10408960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10408970(undefined4 *param_1);
template<class... A> int FUN_10408970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10408a60(int *param_1);
template<class... A> int FUN_10408a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10408a70(int param_1);
template<class... A> int FUN_10408a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10408a80(int param_1);
template<class... A> int FUN_10408a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10408a90(undefined4 *param_1);
template<class... A> int FUN_10408a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10408dd0(undefined4 *param_1);
template<class... A> int FUN_10408dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10408ef0(int param_1);
template<class... A> int FUN_10408ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10408f10(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10408f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10408f20(int param_1, int param_2, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10408f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10408f40(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10408f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10409030(undefined4 param_1);
template<class... A> int FUN_10409030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409040(undefined4 param_1);
template<class... A> int FUN_10409040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409050(undefined4 param_1);
template<class... A> int FUN_10409050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409060(undefined4 param_1);
template<class... A> int FUN_10409060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409070(undefined4 param_1);
template<class... A> int FUN_10409070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409080(undefined4 param_1);
template<class... A> int FUN_10409080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409090(undefined4 param_1);
template<class... A> int FUN_10409090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104090a0(undefined4 param_1);
template<class... A> int FUN_104090a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104090b0(undefined4 param_1);
template<class... A> int FUN_104090b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104090c0(undefined4 param_1);
template<class... A> int FUN_104090c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104090d0(undefined4 param_1);
template<class... A> int FUN_104090d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104090e0(undefined4 param_1);
template<class... A> int FUN_104090e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104090f0(undefined4 param_1);
template<class... A> int FUN_104090f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409100(undefined4 param_1);
template<class... A> int FUN_10409100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409110(undefined4 param_1);
template<class... A> int FUN_10409110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409120(undefined4 param_1);
template<class... A> int FUN_10409120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409130(undefined4 param_1);
template<class... A> int FUN_10409130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409140(undefined4 param_1);
template<class... A> int FUN_10409140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10409190(undefined4 param_1);
template<class... A> int FUN_10409190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104096a0(int param_1);
template<class... A> int FUN_104096a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104096b0(int param_1);
template<class... A> int FUN_104096b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_104096c0(int *param_1);
template<class... A> int FUN_104096c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10409780(int param_1);
template<class... A> int FUN_10409780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10409790(int param_1);
template<class... A> int FUN_10409790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104097a0(int param_1);
template<class... A> int FUN_104097a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104097b0(void);
template<class... A> int FUN_104097b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104097c0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_104097c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104097d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104097d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104097e0(int param_1);
template<class... A> int FUN_104097e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104097f0(undefined4 *param_1);
template<class... A> int FUN_104097f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10409be0(uint param_1);
template<class... A> int FUN_10409be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10409c50(uint param_1);
template<class... A> int FUN_10409c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10409d40(undefined4 *param_1);
template<class... A> int FUN_10409d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10409f80(int *param_1);
template<class... A> int FUN_10409f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10409f90(int param_1);
template<class... A> int FUN_10409f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10409fb0(int param_1);
template<class... A> int FUN_10409fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1040a030(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1040a030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1040a080(int param_1,int param_2);
template<class... A> int FUN_1040a080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1040a0d0(int param_1,int param_2);
template<class... A> int FUN_1040a0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1040a170(undefined4 *param_1);
template<class... A> int FUN_1040a170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1040a1b0(int param_1);
template<class... A> int FUN_1040a1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1040a1c0(int param_1);
template<class... A> int FUN_1040a1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1040b9c0(int param_1);
template<class... A> int FUN_1040b9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1040b9d0(int param_1);
template<class... A> int FUN_1040b9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1040bdb0(void);
template<class... A> int FUN_1040bdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1040bdc0(void);
template<class... A> int FUN_1040bdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1040bdd0(void);
template<class... A> int FUN_1040bdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1040bde0(void);
template<class... A> int FUN_1040bde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1040bdf0(void);
template<class... A> int FUN_1040bdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1040be00(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1040be00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1040c370(undefined4 param_1);
template<class... A> int FUN_1040c370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1040c380(undefined4 param_1);
template<class... A> int FUN_1040c380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1040c390(int param_1);
template<class... A> int FUN_1040c390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1040c5a0(undefined4 *param_1);
template<class... A> int FUN_1040c5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1040cce0(undefined4 *param_1);
template<class... A> int FUN_1040cce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1040cd10(int *param_1);
template<class... A> int FUN_1040cd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1040cd30(int param_1);
template<class... A> int FUN_1040cd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1040cd40(int param_1);
template<class... A> int FUN_1040cd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1040cd50(int *param_1);
template<class... A> int FUN_1040cd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1040cd60(int *param_1);
template<class... A> int FUN_1040cd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __stdcall FUN_1040e550(undefined4 *param_1);
template<class... A> int FUN_1040e550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1040e580(undefined8 param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1040e580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1040e5a0(undefined4 param_1, undefined8 param_2, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1040e5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1040f200(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1040f200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1040f230(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1040f230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1040f260(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1040f260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1040f480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1040f480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1040f4a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1040f4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1040f4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1040f4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1040f540(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1040f540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1040f550(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1040f550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1040f940(int param_1);
template<class... A> int FUN_1040f940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1040f950(void);
template<class... A> int FUN_1040f950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1040f9d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1040f9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1040f9e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1040f9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1040f9f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1040f9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1040fa00(void);
template<class... A> int FUN_1040fa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1040fa10(void);
template<class... A> int FUN_1040fa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1040ff50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1040ff50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410020(undefined4 *param_1);
template<class... A> int FUN_10410020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410030(undefined4 *param_1);
template<class... A> int FUN_10410030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104101d0(undefined4 param_1);
template<class... A> int FUN_104101d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104106b0(undefined4 param_1);
template<class... A> int FUN_104106b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104106c0(undefined4 param_1);
template<class... A> int FUN_104106c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104106f0(undefined4 param_1);
template<class... A> int FUN_104106f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410700(undefined4 param_1);
template<class... A> int FUN_10410700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410710(undefined4 param_1);
template<class... A> int FUN_10410710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410720(undefined4 param_1);
template<class... A> int FUN_10410720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410730(undefined4 param_1);
template<class... A> int FUN_10410730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10410740(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10410740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10410770(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10410770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104107a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104107a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104107d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_104107d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104108f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_104108f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410910(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10410910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410a00(undefined4 param_1);
template<class... A> int FUN_10410a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410a10(undefined4 param_1);
template<class... A> int FUN_10410a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410a20(undefined4 param_1);
template<class... A> int FUN_10410a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410a50(undefined4 param_1);
template<class... A> int FUN_10410a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410a60(undefined4 param_1);
template<class... A> int FUN_10410a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410a70(undefined4 param_1);
template<class... A> int FUN_10410a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410a80(undefined4 param_1);
template<class... A> int FUN_10410a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410a90(undefined4 param_1);
template<class... A> int FUN_10410a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410aa0(undefined4 param_1);
template<class... A> int FUN_10410aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410ad0(undefined4 param_1);
template<class... A> int FUN_10410ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410ae0(undefined4 param_1);
template<class... A> int FUN_10410ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10410af0(void);
template<class... A> int FUN_10410af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410b90(undefined4 param_1);
template<class... A> int FUN_10410b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10410ba0(undefined4 param_1);
template<class... A> int FUN_10410ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10410bb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10410bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10411040(undefined4 *param_1);
template<class... A> int FUN_10411040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10411120(undefined4 param_1);
template<class... A> int FUN_10411120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10411130(int param_1);
template<class... A> int FUN_10411130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10411250(undefined4 *param_1);
template<class... A> int FUN_10411250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104112e0(undefined4 *param_1);
template<class... A> int FUN_104112e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10411300(undefined4 param_1);
template<class... A> int FUN_10411300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10411750(undefined4 *param_1);
template<class... A> int FUN_10411750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10411760(undefined4 *param_1);
template<class... A> int FUN_10411760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10411c70(void);
template<class... A> int FUN_10411c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10411d90(int param_1);
template<class... A> int FUN_10411d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10411da0(undefined4 *param_1);
template<class... A> int FUN_10411da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10411eb0(undefined4 *param_1);
template<class... A> int FUN_10411eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412020(undefined4 *param_1);
template<class... A> int FUN_10412020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412030(undefined4 *param_1);
template<class... A> int FUN_10412030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10412040(int param_1);
template<class... A> int FUN_10412040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10412050(int *param_1);
template<class... A> int FUN_10412050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10412060(int *param_1);
template<class... A> int FUN_10412060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10412070(int *param_1);
template<class... A> int FUN_10412070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10412080(int *param_1);
template<class... A> int FUN_10412080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10412090(int *param_1);
template<class... A> int FUN_10412090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104120a0(undefined4 *param_1);
template<class... A> int FUN_104120a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104120b0(undefined4 *param_1);
template<class... A> int FUN_104120b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_104120c0(int *param_1);
template<class... A> int FUN_104120c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10412140(int param_1);
template<class... A> int FUN_10412140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10412640(void);
template<class... A> int FUN_10412640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10412650(undefined4 *param_1);
template<class... A> int FUN_10412650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10412880(int param_1);
template<class... A> int FUN_10412880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104128a0(float *param_1);
template<class... A> int FUN_104128a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10412bc0(int param_1);
template<class... A> int FUN_10412bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412e10(undefined4 param_1);
template<class... A> int FUN_10412e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412e20(undefined4 param_1);
template<class... A> int FUN_10412e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412e30(undefined4 param_1);
template<class... A> int FUN_10412e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412e40(undefined4 param_1);
template<class... A> int FUN_10412e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412e50(undefined4 param_1);
template<class... A> int FUN_10412e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412e60(undefined4 param_1);
template<class... A> int FUN_10412e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412e70(undefined4 param_1);
template<class... A> int FUN_10412e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412e80(undefined4 param_1);
template<class... A> int FUN_10412e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412e90(int param_1);
template<class... A> int FUN_10412e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10412f20(int param_1);
template<class... A> int FUN_10412f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10412f30(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10412f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412f40(undefined4 param_1);
template<class... A> int FUN_10412f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10412f50(undefined4 param_1);
template<class... A> int FUN_10412f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10413000(void);
template<class... A> int FUN_10413000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10413010(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10413010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104130d0(int param_1);
template<class... A> int FUN_104130d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104130e0(undefined4 *param_1);
template<class... A> int FUN_104130e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104130f0(undefined4 *param_1);
template<class... A> int FUN_104130f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104134c0(int param_1,int param_2,int param_3);
template<class... A> int FUN_104134c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10413520(uint param_1);
template<class... A> int FUN_10413520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_104135a0(uint param_1);
template<class... A> int FUN_104135a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10413610(uint param_1);
template<class... A> int FUN_10413610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104136a0(int param_1);
template<class... A> int FUN_104136a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104136b0(int *param_1);
template<class... A> int FUN_104136b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104136c0(int param_1);
template<class... A> int FUN_104136c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10413770(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10413770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_104137c0(int param_1,int param_2);
template<class... A> int FUN_104137c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10413810(int param_1,int param_2);
template<class... A> int FUN_10413810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_104138e0(undefined4 param_1,undefined1 param_2);
template<class... A> int FUN_104138e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10413b30(SCStr *param_1,undefined4 *param_2,SCStr *param_3);
template<class... A> int FUN_10413b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10413f90(void);
template<class... A> int FUN_10413f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10414340(int param_1);
template<class... A> int FUN_10414340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __stdcall FUN_10414350(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10414350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __stdcall FUN_10414360(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10414360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10414be0(float *param_1);
template<class... A> int FUN_10414be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10414bf0(void);
template<class... A> int FUN_10414bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10414c00(void);
template<class... A> int FUN_10414c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10414c10(void);
template<class... A> int FUN_10414c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10414c20(void);
template<class... A> int FUN_10414c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10414c30(void);
template<class... A> int FUN_10414c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10414c40(void);
template<class... A> int FUN_10414c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10414d90(undefined4 param_1);
template<class... A> int FUN_10414d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10414da0(undefined4 *param_1);
template<class... A> int FUN_10414da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10414db0(undefined4 *param_1);
template<class... A> int FUN_10414db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10414fb0(undefined4 *param_1);
template<class... A> int FUN_10414fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10415330(int *param_1);
template<class... A> int FUN_10415330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10416030(void);
template<class... A> int FUN_10416030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10416040(undefined4 *param_1);
template<class... A> int FUN_10416040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10416070(undefined4 *param_1);
template<class... A> int FUN_10416070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10416100(undefined4 *param_1);
template<class... A> int FUN_10416100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10416120(undefined4 *param_1);
template<class... A> int FUN_10416120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10416210(undefined4 *param_1);
template<class... A> int FUN_10416210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10416220(undefined4 *param_1);
template<class... A> int FUN_10416220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10416250(undefined4 *param_1);
template<class... A> int FUN_10416250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10416280(undefined4 *param_1);
template<class... A> int FUN_10416280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104162b0(undefined4 *param_1);
template<class... A> int FUN_104162b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10416770(undefined4 *param_1);
template<class... A> int FUN_10416770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104167a0(undefined4 *param_1);
template<class... A> int FUN_104167a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10416a20(undefined4 *param_1);
template<class... A> int FUN_10416a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10416a30(undefined4 *param_1);
template<class... A> int FUN_10416a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10416a50(undefined4 *param_1);
template<class... A> int FUN_10416a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10416a70(undefined4 *param_1);
template<class... A> int FUN_10416a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10416ec0(undefined4 *param_1);
template<class... A> int FUN_10416ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10416ee0(undefined4 *param_1);
template<class... A> int FUN_10416ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10417120(int *param_1);
template<class... A> int FUN_10417120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10417130(int *param_1);
template<class... A> int FUN_10417130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10417140(undefined4 *param_1);
template<class... A> int FUN_10417140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10417150(int *param_1);
template<class... A> int FUN_10417150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10417160(int *param_1);
template<class... A> int FUN_10417160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10417170(int *param_1);
template<class... A> int FUN_10417170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10417180(undefined4 *param_1);
template<class... A> int FUN_10417180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10417190(undefined4 *param_1);
template<class... A> int FUN_10417190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104171a0(undefined4 *param_1);
template<class... A> int FUN_104171a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104171b0(undefined4 *param_1);
template<class... A> int FUN_104171b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1041cb60(void);
template<class... A> int FUN_1041cb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041cca0(undefined4 *param_1);
template<class... A> int FUN_1041cca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041ce50(undefined4 *param_1);
template<class... A> int FUN_1041ce50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041ce80(undefined4 *param_1);
template<class... A> int FUN_1041ce80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041ceb0(undefined4 *param_1);
template<class... A> int FUN_1041ceb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1041e100(undefined4 *param_1);
template<class... A> int FUN_1041e100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1041e450(int *param_1,int param_2);
template<class... A> int FUN_1041e450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1041e470(int param_1,int param_2);
template<class... A> int FUN_1041e470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1041e510(undefined4 param_1);
template<class... A> int FUN_1041e510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1041e520(undefined4 param_1);
template<class... A> int FUN_1041e520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1041e530(undefined4 param_1);
template<class... A> int FUN_1041e530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1041e540(undefined4 param_1);
template<class... A> int FUN_1041e540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1041e8a0(int param_1,int param_2);
template<class... A> int FUN_1041e8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1041ef40(undefined4 *param_1);
template<class... A> int FUN_1041ef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ef60(undefined4 param_1);
template<class... A> int FUN_1041ef60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ef70(undefined4 param_1);
template<class... A> int FUN_1041ef70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ef80(undefined4 param_1);
template<class... A> int FUN_1041ef80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ef90(undefined4 param_1);
template<class... A> int FUN_1041ef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041efa0(undefined4 param_1);
template<class... A> int FUN_1041efa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1041efb0(int param_1);
template<class... A> int FUN_1041efb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1041efc0(int param_1);
template<class... A> int FUN_1041efc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1041efd0(int param_1);
template<class... A> int FUN_1041efd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1041efe0(int param_1);
template<class... A> int FUN_1041efe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1041f2a0(undefined4 *param_1);
template<class... A> int FUN_1041f2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1041f520(undefined4 *param_1);
template<class... A> int FUN_1041f520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041f810(undefined4 *param_1);
template<class... A> int FUN_1041f810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041f860(undefined4 *param_1);
template<class... A> int FUN_1041f860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041f8b0(undefined4 *param_1);
template<class... A> int FUN_1041f8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041f900(undefined4 *param_1);
template<class... A> int FUN_1041f900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041fd20(undefined4 *param_1);
template<class... A> int FUN_1041fd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041fe70(undefined4 *param_1);
template<class... A> int FUN_1041fe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1041fe90(undefined4 *param_1);
template<class... A> int FUN_1041fe90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ff30(undefined4 *param_1);
template<class... A> int FUN_1041ff30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ff40(undefined4 *param_1);
template<class... A> int FUN_1041ff40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ff50(undefined4 *param_1);
template<class... A> int FUN_1041ff50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ff60(undefined4 *param_1);
template<class... A> int FUN_1041ff60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ff70(undefined4 *param_1);
template<class... A> int FUN_1041ff70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ff80(undefined4 *param_1);
template<class... A> int FUN_1041ff80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ff90(undefined4 *param_1);
template<class... A> int FUN_1041ff90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1041ffa0(undefined4 *param_1);
template<class... A> int FUN_1041ffa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104219d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104219d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104219f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104219f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10421a10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10421a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10421a30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10421a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10422970(int param_1);
template<class... A> int FUN_10422970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10422980(int param_1);
template<class... A> int FUN_10422980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10422990(int param_1);
template<class... A> int FUN_10422990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104229a0(int param_1);
template<class... A> int FUN_104229a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422a40(int param_1);
template<class... A> int FUN_10422a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422a50(int param_1);
template<class... A> int FUN_10422a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422a60(int param_1);
template<class... A> int FUN_10422a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422a70(int param_1);
template<class... A> int FUN_10422a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10422a80(int param_1);
template<class... A> int FUN_10422a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10422a90(int param_1);
template<class... A> int FUN_10422a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10422aa0(int param_1);
template<class... A> int FUN_10422aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10422ab0(int param_1);
template<class... A> int FUN_10422ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422db0(undefined4 *param_1);
template<class... A> int FUN_10422db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422dc0(int param_1);
template<class... A> int FUN_10422dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422dd0(undefined4 *param_1);
template<class... A> int FUN_10422dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422ed0(int param_1);
template<class... A> int FUN_10422ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422fb0(int param_1);
template<class... A> int FUN_10422fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422fc0(int param_1);
template<class... A> int FUN_10422fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422fd0(int param_1);
template<class... A> int FUN_10422fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10422fe0(int param_1);
template<class... A> int FUN_10422fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104235b0(int *param_1);
template<class... A> int FUN_104235b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10423890(undefined4 *param_1);
template<class... A> int FUN_10423890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104238a0(undefined4 *param_1);
template<class... A> int FUN_104238a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104238b0(undefined4 *param_1);
template<class... A> int FUN_104238b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104238c0(undefined4 *param_1);
template<class... A> int FUN_104238c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104239d0(undefined4 *param_1);
template<class... A> int FUN_104239d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10423a00(undefined4 *param_1);
template<class... A> int FUN_10423a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10423a30(undefined4 *param_1);
template<class... A> int FUN_10423a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10423a60(undefined4 *param_1);
template<class... A> int FUN_10423a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10423af0(void);
template<class... A> int FUN_10423af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104260e0(undefined4 param_1);
template<class... A> int FUN_104260e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10426130(void);
template<class... A> int FUN_10426130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10426350(undefined4 param_1);
template<class... A> int FUN_10426350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10426360(undefined4 param_1);
template<class... A> int FUN_10426360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10426370(int param_1);
template<class... A> int FUN_10426370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10426560(undefined4 *param_1);
template<class... A> int FUN_10426560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10426590(undefined4 *param_1);
template<class... A> int FUN_10426590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1042a9b0(undefined4 *param_1);
template<class... A> int FUN_1042a9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1042a9d0(undefined4 *param_1);
template<class... A> int FUN_1042a9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1042b120(undefined4 *param_1);
template<class... A> int FUN_1042b120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1042b130(int *param_1);
template<class... A> int FUN_1042b130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1042b140(int *param_1);
template<class... A> int FUN_1042b140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1042b150(undefined4 *param_1);
template<class... A> int FUN_1042b150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1042b160(int *param_1);
template<class... A> int FUN_1042b160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1042b170(int *param_1);
template<class... A> int FUN_1042b170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1042b180(int *param_1);
template<class... A> int FUN_1042b180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1042b190(int *param_1);
template<class... A> int FUN_1042b190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1042b1a0(undefined4 *param_1);
template<class... A> int FUN_1042b1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1042b1b0(undefined4 *param_1);
template<class... A> int FUN_1042b1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1042b1c0(undefined4 *param_1);
template<class... A> int FUN_1042b1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1042bbd0(int param_1);
template<class... A> int FUN_1042bbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1042bc20(int param_1);
template<class... A> int FUN_1042bc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1042bc30(int param_1);
template<class... A> int FUN_1042bc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1042bfb0(undefined4 *param_1);
template<class... A> int FUN_1042bfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1042da20(void);
template<class... A> int FUN_1042da20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10430420(undefined4 *param_1);
template<class... A> int FUN_10430420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10430430(undefined4 *param_1);
template<class... A> int FUN_10430430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10430790(undefined4 *param_1);
template<class... A> int FUN_10430790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104307c0(undefined4 *param_1);
template<class... A> int FUN_104307c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104307f0(undefined4 *param_1);
template<class... A> int FUN_104307f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10430820(int *param_1);
template<class... A> int FUN_10430820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10432540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10432540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104325d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_104325d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10432e60(void);
template<class... A> int FUN_10432e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10432e80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10432e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10432e90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10432e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10432ea0(void);
template<class... A> int FUN_10432ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10433010(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10433010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104330b0(undefined4 param_1);
template<class... A> int FUN_104330b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_104330c0(int param_1,ushort *param_2);
template<class... A> int FUN_104330c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433240(undefined4 *param_1);
template<class... A> int FUN_10433240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433250(undefined4 param_1);
template<class... A> int FUN_10433250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433260(undefined4 param_1);
template<class... A> int FUN_10433260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433270(undefined4 param_1);
template<class... A> int FUN_10433270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433280(undefined4 param_1);
template<class... A> int FUN_10433280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433290(undefined4 param_1);
template<class... A> int FUN_10433290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104332d0(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_104332d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433370(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10433370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433390(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10433390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104333b0(undefined4 param_1);
template<class... A> int FUN_104333b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104333c0(undefined4 param_1);
template<class... A> int FUN_104333c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104333d0(undefined4 param_1);
template<class... A> int FUN_104333d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104333e0(undefined4 param_1);
template<class... A> int FUN_104333e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104333f0(undefined4 param_1);
template<class... A> int FUN_104333f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433400(undefined4 param_1);
template<class... A> int FUN_10433400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10433410(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10433410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10433420(void);
template<class... A> int FUN_10433420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort * FUN_10433430(ushort *param_1,ushort *param_2);
template<class... A> int FUN_10433430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ushort * FUN_10433450(ushort *param_1,ushort *param_2);
template<class... A> int FUN_10433450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10433470(undefined4 param_1);
template<class... A> int FUN_10433470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10433480(undefined4 *param_1);
template<class... A> int FUN_10433480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104334d0(undefined4 *param_1);
template<class... A> int FUN_104334d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104335a0(undefined4 *param_1);
template<class... A> int FUN_104335a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104335c0(undefined4 *param_1);
template<class... A> int FUN_104335c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10433660(undefined4 *param_1);
template<class... A> int FUN_10433660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10433670(undefined4 *param_1);
template<class... A> int FUN_10433670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10433690(undefined4 param_1);
template<class... A> int FUN_10433690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104336a0(undefined4 *param_1);
template<class... A> int FUN_104336a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10433760(undefined4 *param_1);
template<class... A> int FUN_10433760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10433cf0(int param_1);
template<class... A> int FUN_10433cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10433db0(undefined4 *param_1);
template<class... A> int FUN_10433db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434280(undefined4 *param_1);
template<class... A> int FUN_10434280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10434290(int *param_1);
template<class... A> int FUN_10434290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104342a0(int *param_1);
template<class... A> int FUN_104342a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104342b0(int *param_1);
template<class... A> int FUN_104342b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104342c0(undefined4 *param_1);
template<class... A> int FUN_104342c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104342d0(int *param_1);
template<class... A> int FUN_104342d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104342e0(undefined4 *param_1);
template<class... A> int FUN_104342e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104342f0(undefined4 *param_1);
template<class... A> int FUN_104342f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434300(undefined4 *param_1);
template<class... A> int FUN_10434300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10434310(int *param_1);
template<class... A> int FUN_10434310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10434320(int *param_1);
template<class... A> int FUN_10434320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10434330(int *param_1);
template<class... A> int FUN_10434330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10434490(ushort *param_1,ushort *param_2);
template<class... A> int FUN_10434490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104346b0(undefined4 *param_1);
template<class... A> int FUN_104346b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10434700(int param_1);
template<class... A> int FUN_10434700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434720(undefined4 param_1);
template<class... A> int FUN_10434720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434730(undefined4 param_1);
template<class... A> int FUN_10434730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434740(undefined4 param_1);
template<class... A> int FUN_10434740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434750(undefined4 param_1);
template<class... A> int FUN_10434750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434760(undefined4 param_1);
template<class... A> int FUN_10434760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434770(undefined4 param_1);
template<class... A> int FUN_10434770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434780(undefined4 param_1);
template<class... A> int FUN_10434780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434790(undefined4 param_1);
template<class... A> int FUN_10434790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10434aa0(int *param_1);
template<class... A> int FUN_10434aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10434ad0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10434ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10434ae0(int param_1);
template<class... A> int FUN_10434ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10434be0(uint param_1);
template<class... A> int FUN_10434be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10434da0(int param_1);
template<class... A> int FUN_10434da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_104357f0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_104357f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10435840(int param_1,int param_2);
template<class... A> int FUN_10435840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104358a0(undefined4 *param_1);
template<class... A> int FUN_104358a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_104365f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_104365f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10436940(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10436940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10436980(int param_1);
template<class... A> int FUN_10436980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10437130(int param_1);
template<class... A> int FUN_10437130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10437630(void);
template<class... A> int FUN_10437630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10437640(undefined1 *param_1);
template<class... A> int FUN_10437640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10437b70(int param_1);
template<class... A> int FUN_10437b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10437e20(int param_1);
template<class... A> int FUN_10437e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10437e30(int param_1);
template<class... A> int FUN_10437e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10437e40(void);
template<class... A> int FUN_10437e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10437e50(void);
template<class... A> int FUN_10437e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104384b0(undefined4 param_1);
template<class... A> int FUN_104384b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10438560(undefined4 *param_1);
template<class... A> int FUN_10438560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10438570(undefined4 *param_1);
template<class... A> int FUN_10438570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10438680(undefined4 *param_1);
template<class... A> int FUN_10438680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104386b0(undefined4 *param_1);
template<class... A> int FUN_104386b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104386e0(undefined4 *param_1);
template<class... A> int FUN_104386e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10438710(int *param_1);
template<class... A> int FUN_10438710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10439f70(undefined4 param_1);
template<class... A> int FUN_10439f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10439f80(undefined4 *param_1);
template<class... A> int FUN_10439f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1043a020(int param_1);
template<class... A> int FUN_1043a020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1043a030(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1043a030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1043a0c0(undefined4 *param_1);
template<class... A> int FUN_1043a0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1043a0d0(undefined4 *param_1);
template<class... A> int FUN_1043a0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1043aa70(int param_1);
template<class... A> int FUN_1043aa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1043aa80(int param_1);
template<class... A> int FUN_1043aa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1043add0(int param_1);
template<class... A> int FUN_1043add0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1043ade0(int param_1);
template<class... A> int FUN_1043ade0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1043adf0(int param_1);
template<class... A> int FUN_1043adf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1043b150(undefined4 *param_1);
template<class... A> int FUN_1043b150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1043b5f0(int param_1);
template<class... A> int FUN_1043b5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1043ca40(undefined4 *param_1);
template<class... A> int FUN_1043ca40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104403d0(undefined4 *param_1);
template<class... A> int FUN_104403d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10440480(undefined4 *param_1);
template<class... A> int FUN_10440480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10440940(void);
template<class... A> int FUN_10440940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10440e50(undefined4 *param_1);
template<class... A> int FUN_10440e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10441c50(undefined4 *param_1);
template<class... A> int FUN_10441c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10441e20(undefined4 *param_1);
template<class... A> int FUN_10441e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10442210(undefined4 *param_1);
template<class... A> int FUN_10442210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10442e80(undefined4 param_1);
template<class... A> int FUN_10442e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104430f0(undefined4 *param_1);
template<class... A> int FUN_104430f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10443150(undefined4 param_1);
template<class... A> int FUN_10443150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10443160(int param_1);
template<class... A> int FUN_10443160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104438e0(undefined4 *param_1);
template<class... A> int FUN_104438e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10443f70(undefined4 *param_1);
template<class... A> int FUN_10443f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10443f80(undefined4 *param_1);
template<class... A> int FUN_10443f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10443f90(int *param_1);
template<class... A> int FUN_10443f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10443fa0(undefined4 *param_1);
template<class... A> int FUN_10443fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10443fb0(undefined4 *param_1);
template<class... A> int FUN_10443fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10443fc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10443fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10444750(int param_1);
template<class... A> int FUN_10444750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10444770(int param_1);
template<class... A> int FUN_10444770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10444780(int param_1);
template<class... A> int FUN_10444780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10446040(int param_1);
template<class... A> int FUN_10446040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104462c0(int *param_1);
template<class... A> int FUN_104462c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10449fe0(undefined4 *param_1);
template<class... A> int FUN_10449fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10449ff0(undefined4 *param_1);
template<class... A> int FUN_10449ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1044a000(undefined4 *param_1);
template<class... A> int FUN_1044a000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1044a0a0(undefined4 *param_1);
template<class... A> int FUN_1044a0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1044a0d0(undefined4 *param_1);
template<class... A> int FUN_1044a0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1044a1c0(undefined4 *param_1);
template<class... A> int FUN_1044a1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1044a220(undefined4 *param_1);
template<class... A> int FUN_1044a220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1044a250(undefined4 *param_1);
template<class... A> int FUN_1044a250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1044b2d0(undefined4 *param_1);
template<class... A> int FUN_1044b2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1044b2f0(undefined4 *param_1);
template<class... A> int FUN_1044b2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1044b310(undefined4 *param_1);
template<class... A> int FUN_1044b310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1044b430(undefined4 *param_1);
template<class... A> int FUN_1044b430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1044b4c0(undefined4 *param_1);
template<class... A> int FUN_1044b4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1044b4d0(int *param_1);
template<class... A> int FUN_1044b4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1044b4e0(undefined4 *param_1);
template<class... A> int FUN_1044b4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1044b4f0(undefined4 *param_1);
template<class... A> int FUN_1044b4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1044e8f0(undefined4 *param_1);
template<class... A> int FUN_1044e8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1044e900(undefined4 *param_1);
template<class... A> int FUN_1044e900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1044e910(undefined4 *param_1);
template<class... A> int FUN_1044e910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1044ea20(undefined4 *param_1);
template<class... A> int FUN_1044ea20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1044ed80(undefined4 *param_1);
template<class... A> int FUN_1044ed80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1044eda0(undefined4 *param_1);
template<class... A> int FUN_1044eda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1044fd70(undefined4 *param_1);
template<class... A> int FUN_1044fd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1044fd80(undefined4 *param_1);
template<class... A> int FUN_1044fd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10451500(undefined4 *param_1);
template<class... A> int FUN_10451500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10451620(undefined4 *param_1);
template<class... A> int FUN_10451620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10451df0(void);
template<class... A> int FUN_10451df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10451e00(undefined4 *param_1);
template<class... A> int FUN_10451e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10451e30(undefined4 *param_1);
template<class... A> int FUN_10451e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10451e50(undefined4 *param_1);
template<class... A> int FUN_10451e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10451e60(undefined4 *param_1);
template<class... A> int FUN_10451e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10452220(undefined4 *param_1);
template<class... A> int FUN_10452220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104523c0(int *param_1);
template<class... A> int FUN_104523c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104523d0(undefined4 *param_1);
template<class... A> int FUN_104523d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10452650(void);
template<class... A> int FUN_10452650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10452660(int *param_1);
template<class... A> int FUN_10452660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10452670(int *param_1);
template<class... A> int FUN_10452670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10452680(int *param_1);
template<class... A> int FUN_10452680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104536e0(undefined4 *param_1);
template<class... A> int FUN_104536e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10453820(int *param_1);
template<class... A> int FUN_10453820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10453dc0(undefined4 *param_1);
template<class... A> int FUN_10453dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10454350(void);
template<class... A> int FUN_10454350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10454a10(int *param_1);
template<class... A> int FUN_10454a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10454a20(undefined4 *param_1);
template<class... A> int FUN_10454a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10454ef0(void);
template<class... A> int FUN_10454ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104551e0(undefined4 *param_1);
template<class... A> int FUN_104551e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104551f0(undefined4 *param_1);
template<class... A> int FUN_104551f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10455280(undefined4 *param_1);
template<class... A> int FUN_10455280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104552b0(int *param_1);
template<class... A> int FUN_104552b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10455970(undefined4 *param_1);
template<class... A> int FUN_10455970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10455b70(undefined4 *param_1);
template<class... A> int FUN_10455b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104575c0(int *param_1);
template<class... A> int FUN_104575c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104575d0(undefined4 *param_1);
template<class... A> int FUN_104575d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104575e0(undefined4 *param_1);
template<class... A> int FUN_104575e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104575f0(undefined4 *param_1);
template<class... A> int FUN_104575f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1045c1a0(undefined4 *param_1);
template<class... A> int FUN_1045c1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1045cd10(undefined4 *param_1);
template<class... A> int FUN_1045cd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1045ec80(undefined4 *param_1);
template<class... A> int FUN_1045ec80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10460fb0(int param_1);
template<class... A> int FUN_10460fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10461120(SCStr *param_1,SCStr *param_2,int param_3);
template<class... A> int FUN_10461120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104611e0(undefined4 param_1);
template<class... A> int FUN_104611e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10461200(undefined4 param_1);
template<class... A> int FUN_10461200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10461370(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10461370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104613a0(undefined4 param_1);
template<class... A> int FUN_104613a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104613e0(undefined4 param_1);
template<class... A> int FUN_104613e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104614c0(undefined4 *param_1);
template<class... A> int FUN_104614c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104615c0(int param_1);
template<class... A> int FUN_104615c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104615f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_104615f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10461680(undefined4 *param_1);
template<class... A> int FUN_10461680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10462670(int param_1);
template<class... A> int FUN_10462670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10462680(int param_1);
template<class... A> int FUN_10462680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10462690(undefined4 *param_1);
template<class... A> int FUN_10462690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104626a0(undefined4 *param_1);
template<class... A> int FUN_104626a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10462c70(int param_1);
template<class... A> int FUN_10462c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10462c90(undefined4 param_1);
template<class... A> int FUN_10462c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10462ca0(undefined4 param_1);
template<class... A> int FUN_10462ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10462cb0(int param_1);
template<class... A> int FUN_10462cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10462cc0(int param_1);
template<class... A> int FUN_10462cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10462d50(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10462d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10463940(undefined4 *param_1);
template<class... A> int FUN_10463940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10463960(undefined4 *param_1);
template<class... A> int FUN_10463960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10463980(undefined4 *param_1);
template<class... A> int FUN_10463980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104648d0(int param_1);
template<class... A> int FUN_104648d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10465040(undefined4 *param_1);
template<class... A> int FUN_10465040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10465070(undefined4 *param_1);
template<class... A> int FUN_10465070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104656a0(int param_1);
template<class... A> int FUN_104656a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_104656b0(int *param_1);
template<class... A> int FUN_104656b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10465d00(undefined4 *param_1);
template<class... A> int FUN_10465d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104662c0(undefined4 *param_1);
template<class... A> int FUN_104662c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_104662e0(undefined4 *param_1);
template<class... A> int FUN_104662e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10467c30(undefined4 *param_1);
template<class... A> int FUN_10467c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10467f90(undefined4 *param_1);
template<class... A> int FUN_10467f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10467fb0(undefined4 *param_1);
template<class... A> int FUN_10467fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10467fc0(int *param_1);
template<class... A> int FUN_10467fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10467fd0(undefined4 *param_1);
template<class... A> int FUN_10467fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10467fe0(int *param_1);
template<class... A> int FUN_10467fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10467ff0(undefined4 *param_1);
template<class... A> int FUN_10467ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10468000(undefined4 *param_1);
template<class... A> int FUN_10468000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10468010(undefined4 *param_1);
template<class... A> int FUN_10468010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104690e0(undefined4 *param_1);
template<class... A> int FUN_104690e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104690f0(undefined4 *param_1);
template<class... A> int FUN_104690f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10469230(undefined4 *param_1);
template<class... A> int FUN_10469230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10469260(int *param_1);
template<class... A> int FUN_10469260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1046a2d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1046a2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1046a2f0(void);
template<class... A> int FUN_1046a2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1046a300(undefined4 *param_1);
template<class... A> int FUN_1046a300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1046a320(undefined4 param_1);
template<class... A> int FUN_1046a320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1046a330(undefined4 *param_1);
template<class... A> int FUN_1046a330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1046b3a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1046b3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1046b3b0(undefined4 param_1);
template<class... A> int FUN_1046b3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1046b3c0(undefined4 param_1);
template<class... A> int FUN_1046b3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1046b480(int param_1,int param_2);
template<class... A> int FUN_1046b480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1046ba80(int *param_1);
template<class... A> int FUN_1046ba80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1046db00(undefined4 *param_1);
template<class... A> int FUN_1046db00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1046e740(undefined4 *param_1);
template<class... A> int FUN_1046e740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1046e940(undefined4 *param_1);
template<class... A> int FUN_1046e940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1046e9e0(undefined4 *param_1);
template<class... A> int FUN_1046e9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1046e9f0(undefined4 *param_1);
template<class... A> int FUN_1046e9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_1046ea00(int *param_1);
template<class... A> int FUN_1046ea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1046fa70(undefined4 *param_1);
template<class... A> int FUN_1046fa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1046fb00(undefined4 *param_1);
template<class... A> int FUN_1046fb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10470590(int *param_1);
template<class... A> int FUN_10470590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104705a0(int *param_1);
template<class... A> int FUN_104705a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10471500(int param_1);
template<class... A> int FUN_10471500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10471cc0(undefined4 param_1);
template<class... A> int FUN_10471cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10471ce0(void);
template<class... A> int FUN_10471ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10471f80(undefined4 *param_1);
template<class... A> int FUN_10471f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10471fa0(undefined4 param_1);
template<class... A> int FUN_10471fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10471fb0(int param_1);
template<class... A> int FUN_10471fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10472040(undefined4 *param_1);
template<class... A> int FUN_10472040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_104727f0(undefined4 *param_1);
template<class... A> int FUN_104727f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10472cf0(undefined4 *param_1);
template<class... A> int FUN_10472cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10472d00(undefined4 *param_1);
template<class... A> int FUN_10472d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10472d10(int *param_1);
template<class... A> int FUN_10472d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10472d20(undefined4 *param_1);
template<class... A> int FUN_10472d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10472d30(undefined4 *param_1);
template<class... A> int FUN_10472d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10472d40(undefined4 *param_1);
template<class... A> int FUN_10472d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10472d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10472d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10473310(int param_1);
template<class... A> int FUN_10473310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10473330(int param_1);
template<class... A> int FUN_10473330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10473340(int param_1);
template<class... A> int FUN_10473340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10473900(undefined4 *param_1);
template<class... A> int FUN_10473900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10473ca0(int param_1);
template<class... A> int FUN_10473ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10473e20(void);
template<class... A> int FUN_10473e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10474380(undefined4 *param_1);
template<class... A> int FUN_10474380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10474390(undefined4 *param_1);
template<class... A> int FUN_10474390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10474430(undefined4 *param_1);
template<class... A> int FUN_10474430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10474460(undefined4 *param_1);
template<class... A> int FUN_10474460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10474490(undefined4 *param_1);
template<class... A> int FUN_10474490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10474980(undefined4 param_1);
template<class... A> int FUN_10474980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10474cc0(undefined4 param_1);
template<class... A> int FUN_10474cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10474cd0(int param_1);
template<class... A> int FUN_10474cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10475610(undefined4 *param_1);
template<class... A> int FUN_10475610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10475b50(undefined4 *param_1);
template<class... A> int FUN_10475b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10475b60(undefined4 *param_1);
template<class... A> int FUN_10475b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10475b70(undefined4 *param_1);
template<class... A> int FUN_10475b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10475b80(undefined4 *param_1);
template<class... A> int FUN_10475b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10475bd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10475bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10476280(int param_1);
template<class... A> int FUN_10476280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_104762a0(int param_1);
template<class... A> int FUN_104762a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_104762b0(int param_1);
template<class... A> int FUN_104762b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10476340(undefined4 *param_1);
template<class... A> int FUN_10476340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10476350(int param_1);
template<class... A> int FUN_10476350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10477f80(undefined4 *param_1);
template<class... A> int FUN_10477f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10478170(int param_1);
template<class... A> int FUN_10478170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_104782f0(int param_1);
template<class... A> int FUN_104782f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10478980(undefined4 *param_1);
template<class... A> int FUN_10478980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10478990(undefined4 *param_1);
template<class... A> int FUN_10478990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10478a30(undefined4 *param_1);
template<class... A> int FUN_10478a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10478a60(undefined4 *param_1);
template<class... A> int FUN_10478a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10478a90(undefined4 *param_1);
template<class... A> int FUN_10478a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10478b70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10478b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10479230(void);
template<class... A> int FUN_10479230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10479360(undefined4 param_1);
template<class... A> int FUN_10479360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104793d0(undefined4 param_1);
template<class... A> int FUN_104793d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10479690(undefined4 param_1);
template<class... A> int FUN_10479690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10479730(undefined4 *param_1);
template<class... A> int FUN_10479730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10479750(undefined4 *param_1);
template<class... A> int FUN_10479750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10479770(undefined4 param_1);
template<class... A> int FUN_10479770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10479780(undefined4 *param_1);
template<class... A> int FUN_10479780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10479ea0(undefined4 *param_1);
template<class... A> int FUN_10479ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10479eb0(undefined4 *param_1);
template<class... A> int FUN_10479eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1047a580(undefined4 param_1);
template<class... A> int FUN_1047a580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1047a850(undefined4 *param_1);
template<class... A> int FUN_1047a850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1047a860(int param_1);
template<class... A> int FUN_1047a860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1047d4d0(undefined4 *param_1);
template<class... A> int FUN_1047d4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1047d5c0(undefined4 *param_1);
template<class... A> int FUN_1047d5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1047df70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1047df70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1047fd70(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_1047fd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104800e0(undefined4 *param_1);
template<class... A> int FUN_104800e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10481540(undefined4 param_1);
template<class... A> int FUN_10481540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10481550(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10481550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10481680(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10481680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104817e0(undefined4 param_1);
template<class... A> int FUN_104817e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_104817f0(undefined4 param_1);
template<class... A> int FUN_104817f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10481800(undefined4 param_1);
template<class... A> int FUN_10481800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10481810(undefined4 param_1);
template<class... A> int FUN_10481810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10481820(undefined4 param_1);
template<class... A> int FUN_10481820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10481830(undefined4 param_1);
template<class... A> int FUN_10481830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10482cf0(undefined4 param_1);
template<class... A> int FUN_10482cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10482d00(undefined4 param_1);
template<class... A> int FUN_10482d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10482d10(undefined4 param_1);
template<class... A> int FUN_10482d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10482d20(undefined4 param_1);
template<class... A> int FUN_10482d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10482d30(undefined4 param_1);
template<class... A> int FUN_10482d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10482d40(int param_1);
template<class... A> int FUN_10482d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10482d50(int param_1);
template<class... A> int FUN_10482d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10482d60(int param_1);
template<class... A> int FUN_10482d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10482d70(int param_1);
template<class... A> int FUN_10482d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10482d80(int param_1);
template<class... A> int FUN_10482d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10482d90(undefined4 *param_1);
template<class... A> int FUN_10482d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10482db0(undefined4 param_1);
template<class... A> int FUN_10482db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10483040(undefined4 *param_1);
template<class... A> int FUN_10483040(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RGetBetaSettingsAIOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegAccountLoginAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegAccountTransferAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegBeginSecureTransferAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegCreateIdentityAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegEmailHintAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegGetEmailAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegGetUserAccountRequestAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegPasswordSetAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegPrepTransferPlayerAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegRegisterPlayerAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegResetPasswordAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegUpdateUserAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegUserEmailAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegValidateEmailAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegVerifyEmailAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSecRegVerifyEmailSubmitAIOOp_;

// Reference entry 103d1010; body size 6 bytes.
#line 1 "ENTRY_103d1010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d1010(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103d1020; body size 6 bytes.
#line 1 "ENTRY_103d1020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d1020(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103d1030; body size 6 bytes.
#line 1 "ENTRY_103d1030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d1030(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103d1040; body size 6 bytes.
#line 1 "ENTRY_103d1040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d1040(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103d1050; body size 6 bytes.
#line 1 "ENTRY_103d1050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d1050(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103d1060; body size 20 bytes.
#line 1 "ENTRY_103d1060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103d1060(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 103d1180; body size 20 bytes.
#line 1 "ENTRY_103d1180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103d1180(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 103d1210; body size 132 bytes.
#line 1 "ENTRY_103d1210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103d1210(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  piVar2 = (int *)((int *)*param_1);
  *param_2 = (undefined4)(piVar2);
  if (*(char *)((int)piVar2 + 0xd) != '\0') {
    *param_1 = (int)(piVar2[2]);
    return (undefined4 *)(param_2);
  }
  iVar3 = (int)(*piVar2);
  if (*(char *)(iVar3 + 0xd) == '\0') {
    cVar1 = (char)(*(char *)(*(int *)(iVar3 + 8) + 0xd));
    iVar4 = (int)(*(int *)(iVar3 + 8));
    while (cVar1 == '\0') {
      cVar1 = (char)(*(char *)(*(int *)(iVar4 + 8) + 0xd));
      iVar3 = (int)(iVar4);
      iVar4 = (int)(*(int *)(iVar4 + 8));
    }
    *param_1 = (int)(iVar3);
  }
  else {
    cVar1 = (char)(*(char *)(piVar2[1] + 0xd));
    piVar5 = (int *)((int *)piVar2[1]);
    while ((cVar1 == '\0' && ((int *)(piVar2) == (int *)((int *)*piVar5)))) {
      *param_1 = (int)((int)piVar5);
      cVar1 = (char)(*(char *)(piVar5[1] + 0xd));
      piVar2 = (int *)(piVar5);
      piVar5 = (int *)((int *)piVar5[1]);
    }
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      *param_1 = (int)((int)piVar5);
      return (undefined4 *)(param_2);
    }
  }
  return (undefined4 *)(param_2);
}


// Reference entry 103d1610; body size 31 bytes.
#line 1 "ENTRY_103d1610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d1610(undefined4 *param_1)

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


// Reference entry 103d1680; body size 14 bytes.
#line 1 "ENTRY_103d1680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d1680(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 103d16a0; body size 14 bytes.
#line 1 "ENTRY_103d16a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d16a0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x6666666) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 103d1bf0; body size 3 bytes.
#line 1 "ENTRY_103d1bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c00; body size 3 bytes.
#line 1 "ENTRY_103d1c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c10; body size 3 bytes.
#line 1 "ENTRY_103d1c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c20; body size 3 bytes.
#line 1 "ENTRY_103d1c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c30; body size 3 bytes.
#line 1 "ENTRY_103d1c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c40; body size 3 bytes.
#line 1 "ENTRY_103d1c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c50; body size 3 bytes.
#line 1 "ENTRY_103d1c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c60; body size 3 bytes.
#line 1 "ENTRY_103d1c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c70; body size 3 bytes.
#line 1 "ENTRY_103d1c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c80; body size 3 bytes.
#line 1 "ENTRY_103d1c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1c90; body size 3 bytes.
#line 1 "ENTRY_103d1c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d1ca0; body size 3 bytes.
#line 1 "ENTRY_103d1ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d1ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d2240; body size 79 bytes.
#line 1 "ENTRY_103d2240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d2240(int param_2)
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


// Reference entry 103d22e0; body size 30 bytes.
#line 1 "ENTRY_103d22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103d22e0(int param_1)

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


// Reference entry 103d2340; body size 31 bytes.
#line 1 "ENTRY_103d2340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_103d2340(int *param_1)

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


// Reference entry 103d23c0; body size 3 bytes.
#line 1 "ENTRY_103d23c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103d23c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103d23d0; body size 3 bytes.
#line 1 "ENTRY_103d23d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103d23d0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103d23e0; body size 11 bytes.
#line 1 "ENTRY_103d23e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d23e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103d23f0; body size 11 bytes.
#line 1 "ENTRY_103d23f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d23f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103d2400; body size 8 bytes.
#line 1 "ENTRY_103d2400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d2400(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 103d2410; body size 8 bytes.
#line 1 "ENTRY_103d2410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d2410(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 103d2420; body size 8 bytes.
#line 1 "ENTRY_103d2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d2420(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 103d24a0; body size 83 bytes.
#line 1 "ENTRY_103d24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d24a0(int *param_2)
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


// Reference entry 103d2510; body size 33 bytes.
#line 1 "ENTRY_103d2510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d2510(undefined4 *param_2)
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


// Reference entry 103d2540; body size 33 bytes.
#line 1 "ENTRY_103d2540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d2540(undefined4 *param_2)
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


// Reference entry 103d2570; body size 43 bytes.
#line 1 "ENTRY_103d2570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d2570(undefined4 *param_2)
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


// Reference entry 103d25b0; body size 13 bytes.
#line 1 "ENTRY_103d25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d25b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103d2f00; body size 90 bytes.
#line 1 "ENTRY_103d2f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103d2f00(uint param_1)

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


// Reference entry 103d2f80; body size 13 bytes.
#line 1 "ENTRY_103d2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d2f80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103d2f90; body size 13 bytes.
#line 1 "ENTRY_103d2f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d2f90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103d2fa0; body size 13 bytes.
#line 1 "ENTRY_103d2fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d2fa0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103d31c0; body size 60 bytes.
#line 1 "ENTRY_103d31c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103d31c0(int param_1,int param_2)

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


// Reference entry 103d3210; body size 60 bytes.
#line 1 "ENTRY_103d3210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103d3210(int param_1,int param_2)

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


// Reference entry 103d3260; body size 148 bytes.
#line 1 "ENTRY_103d3260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103d3260(undefined4 param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  SCLibrary *pSVar2;
  ulong uVar3;
  ulong uVar4;
  int iVar5;
  
  iVar5 = (int)(param_1[3]);
  *(undefined1*)(param_1 + 0x17) = (undefined1)(1);
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      thunk_FUN_1106b190(param_1[5],param_2,0);
      pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
      uVar3 = (ulong)(((SCLibrary *)(pSVar2))->getCurrentThreadID(), 0);
      pSVar2 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
      uVar4 = (ulong)(((SCLibrary *)(pSVar2))->getMainThreadID(), 0);
      if (uVar3 != uVar4) {
        piVar1 = (int *)(param_1 + 0xb);
        thunk_FUN_112a7f50(piVar1);
        if ((char)param_1[0x17] != '\0') {
          thunk_FUN_112a7da0(param_1 + 0xd,piVar1);
        }
        thunk_FUN_112a8010(piVar1);
      }
      return (int)(param_1[4]);
    }
    if (iVar5 != 2) {
      return (int)(param_1[4]);
    }
  }
  iVar5 = (int)((*(code ***)param_1)[1](param_2), 0);
  param_1[4] = (int)(iVar5);
  *(undefined1*)(param_1 + 0x17) = (undefined1)(0);
  return (int)(iVar5);
}


// Reference entry 103d3320; body size 11 bytes.
#line 1 "ENTRY_103d3320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d3320(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103d3330; body size 11 bytes.
#line 1 "ENTRY_103d3330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d3330(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103d4500; body size 20 bytes.
#line 1 "ENTRY_103d4500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_103d4500(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_103cf4f0<>(param_1 + 0x38);
  return (undefined4)(param_2);
}


// Reference entry 103d4530; body size 19 bytes.
#line 1 "ENTRY_103d4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_103d4530(undefined4 param_1)

{
  thunk_FUN_103d42c0<>(param_1);
  return (undefined4)(param_1);
}


// Reference entry 103d4690; body size 4 bytes.
#line 1 "ENTRY_103d4690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d4690(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103d46a0; body size 20 bytes.
#line 1 "ENTRY_103d46a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103d46a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 103d46c0; body size 4 bytes.
#line 1 "ENTRY_103d46c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d46c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103d46d0; body size 20 bytes.
#line 1 "ENTRY_103d46d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103d46d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 4));
  return (SCStr *)(param_2);
}


// Reference entry 103d46f0; body size 21 bytes.
#line 1 "ENTRY_103d46f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_103d46f0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("Parameter must be set");
  return (SCStr *)(param_1);
}


// Reference entry 103d4850; body size 7 bytes.
#line 1 "ENTRY_103d4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_103d4850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d4860; body size 7 bytes.
#line 1 "ENTRY_103d4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_103d4860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d4870; body size 7 bytes.
#line 1 "ENTRY_103d4870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_103d4870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d48e0; body size 6 bytes.
#line 1 "ENTRY_103d48e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d48e0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 103d48f0; body size 6 bytes.
#line 1 "ENTRY_103d48f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d48f0(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 103d4900; body size 6 bytes.
#line 1 "ENTRY_103d4900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d4900(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 103d4910; body size 6 bytes.
#line 1 "ENTRY_103d4910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d4910(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 103d4dd0; body size 5 bytes.
#line 1 "ENTRY_103d4dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d4dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d4de0; body size 5 bytes.
#line 1 "ENTRY_103d4de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d4de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d4df0; body size 5 bytes.
#line 1 "ENTRY_103d4df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d4df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d5100; body size 5 bytes.
#line 1 "ENTRY_103d5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d5100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d5110; body size 5 bytes.
#line 1 "ENTRY_103d5110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d5110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d5120; body size 5 bytes.
#line 1 "ENTRY_103d5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d5120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103d5130; body size 42 bytes.
#line 1 "ENTRY_103d5130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103d5130(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x18));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return (int)(param_1);
}


// Reference entry 103d51b0; body size 42 bytes.
#line 1 "ENTRY_103d51b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103d51b0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x14));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return (int)(param_1);
}


// Reference entry 103d5390; body size 10 bytes.
#line 1 "ENTRY_103d5390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103d5390(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x18) = (undefined4)(param_2);
  return;
}


// Reference entry 103d53b0; body size 4 bytes.
#line 1 "ENTRY_103d53b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d53b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103d5480; body size 37 bytes.
#line 1 "ENTRY_103d5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d5480(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x68));
  thunk_FUN_102460b0<>(param_1 + 0x68,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  *(undefined4*)(param_1 + 0x6c) = (undefined4)(0);
  return;
}


// Reference entry 103d54b0; body size 37 bytes.
#line 1 "ENTRY_103d54b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d54b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x60));
  thunk_FUN_102460b0<>(param_1 + 0x60,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  *(undefined4*)(param_1 + 100) = (undefined4)(0);
  return;
}


// Reference entry 103d5600; body size 27 bytes.
#line 1 "ENTRY_103d5600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103d5600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103d5630; body size 9 bytes.
#line 1 "ENTRY_103d5630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103d5630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArray);
  return (undefined4 *)(param_1);
}


// Reference entry 103d5860; body size 7 bytes.
#line 1 "ENTRY_103d5860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d5860(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103d5fa0; body size 61 bytes.
#line 1 "ENTRY_103d5fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103d5fa0(int *param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(*(code ***)param_2)[3](), 0);
    param_1[2] = (undefined4)(piVar1);
    (*(code ***)piVar1)[1]();
  }
  param_1[3] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 103d6130; body size 3 bytes.
#line 1 "ENTRY_103d6130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103d6130(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103d6910; body size 25 bytes.
#line 1 "ENTRY_103d6910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103d6910(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(*piVar1);
    return (undefined4)(piVar1[1]);
  }
  return (undefined4)(0);
}


// Reference entry 103d6d60; body size 25 bytes.
#line 1 "ENTRY_103d6d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103d6d60(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_103d6c80(), 0);
  return (int)(iVar1 / 1000);
}


// Reference entry 103d6ee0; body size 71 bytes.
#line 1 "ENTRY_103d6ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * __thiscall Recovered_Bulk::m_FUN_103d6ee0(char *param_2)
{
  int param_1 = (int )this;
  char *pcVar1;
  int iVar2;
  
  pcVar1 = (char *)(" (running)");
  if (*(char *)(param_1 + 0x10) == '\0') {
    pcVar1 = (char *)("");
  }
  iVar2 = (int)(thunk_FUN_103d6c80(pcVar1), 0);
  ((SCStr *)(param_2))->stringWithFormat(&UNK_1189dc8c,(double)iVar2 / DAT_1189dc98);
  return (char *)(param_2);
}


// Reference entry 103d7010; body size 6 bytes.
#line 1 "ENTRY_103d7010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103d7010(void)

{
  return (char *)("SCIOpSecRegRegisterPlayer");
}


// Reference entry 103d7020; body size 28 bytes.
#line 1 "ENTRY_103d7020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103d7020(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 103d79e0; body size 27 bytes.
#line 1 "ENTRY_103d79e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103d79e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103d9380; body size 162 bytes.
#line 1 "ENTRY_103d9380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103d9380(undefined4 *param_1)

{
  thunk_FUN_1124a160(0);
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1844] = (undefined4)(0);
  param_1[0x1845] = (undefined4)(0);
  param_1[0x1846] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1847) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x611e) = (undefined1)(0);
  param_1[0x1848] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RGetBetaSettingsRequest);
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RGetBetaSettingsRequest);
  param_1[0x1849] = (undefined4)(0);
  param_1[0x184a] = (undefined4)(0);
  param_1[0x184b] = (undefined4)(0);
  param_1[0x184c] = (undefined4)(0);
  param_1[0x184d] = (undefined4)(0);
  param_1[0x184e] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103d9450; body size 34 bytes.
#line 1 "ENTRY_103d9450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103d9450(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1124a200(param_2,param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTTPPutReqHeadersBuilder);
  return (undefined4 *)(param_1);
}


// Reference entry 103d9a80; body size 157 bytes.
#line 1 "ENTRY_103d9a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103d9a80(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegBeginSecureTransferRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RSecRegBeginSecureTransferRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103da1c0; body size 134 bytes.
#line 1 "ENTRY_103da1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103da1c0(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegFinalizeRegistrationRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RSecRegFinalizeRegistrationRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x1887) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103dad60; body size 177 bytes.
#line 1 "ENTRY_103dad60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103dad60(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegPrepareRegistrationRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RSecRegPrepareRegistrationRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  param_1[0x188d] = (undefined4)(0);
  param_1[0x188e] = (undefined4)(0);
  param_1[0x188f] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103dae40; body size 154 bytes.
#line 1 "ENTRY_103dae40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103dae40(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegPrepareTransferRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RSecRegPrepareTransferRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  param_1[0x188b] = (undefined4)(0);
  param_1[0x188c] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x1887) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103db2c0; body size 392 bytes.
#line 1 "ENTRY_103db2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103db2c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  char *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  SCStr *this_;
  undefined4 *puVar4;
  void *pvStack_81c;
  undefined1 *puStack_818;
  undefined4 uStack_814;
  undefined1 auStack_810 [1028];
  undefined1 auStack_40c [1028];
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_810);

  uStack_8 = (uint)(uVar2);
  thunk_FUN_103d9b50<>(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegResetPasswordAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSecRegResetPasswordAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSecRegResetPasswordAIOOp);

  puVar4 = (undefined4 *)(param_1 + 0xf);
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1892] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1893] = (undefined4)(0);
  param_1[0x1894] = (undefined4)(0);
  param_1[0x1895] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1896) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x625a) = (undefined1)(0);
  param_1[0x1897] = (undefined4)(0);
  pcVar1 = (char *)((char *)(param_1 + 0x1898));
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_RSecRegResetPasswordRequest);
  param_1[0x1892] = (undefined4)((uint)&ghidra_vftable_RSecRegResetPasswordRequest);
  pcVar1[0] = (char)('\0');
  pcVar1[1] = (char)('\0');
  pcVar1[2] = (char)('\0');
  pcVar1[3] = (char)('\0');
  param_1[0x1899] = (undefined4)(0);
  uStack_814 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_814 + 1)) << 8 | (uint)(4)));
  thunk_FUN_11261330((uint)&auStack_810,0x401,"/account/v1/resetPassword/tokens?email=%s",0,uVar2);
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar3 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_11247ed0(puVar3,(uint)&auStack_40c,0x401,&DAT_1186d2ee);
  ((SCStr *)(this_))->format(pcVar1);
  param_1[0x189b] = (undefined4)(0);
  param_1[0x189c] = (undefined4)(0);
  param_1[0x189a] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x189d] = (undefined4)(0xfffffffe);

  thunk_FUN_1148ac28(puVar4);
  return;

 } catch (...) { }
}


// Reference entry 103db910; body size 134 bytes.
#line 1 "ENTRY_103db910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103db910(undefined4 *param_1)

{
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegUpdateUserRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RSecRegUpdateUserRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x1887) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103dbf10; body size 425 bytes.
#line 1 "ENTRY_103dbf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103dbf10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  char *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  SCStr *this_;
  undefined4 *puVar4;
  void *pvStack_81c;
  undefined1 *puStack_818;
  undefined4 uStack_814;
  undefined1 auStack_810 [1028];
  undefined1 auStack_40c [1028];
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_810);

  uStack_8 = (uint)(uVar2);
  thunk_FUN_103d9b50<>(0);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegValidateEmailAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSecRegValidateEmailAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSecRegValidateEmailAIOOp);
  puVar4 = (undefined4 *)(param_1 + 0xf);
  thunk_FUN_1124a160(0);
  param_1[0x1852] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1853] = (undefined4)(0);
  param_1[0x1854] = (undefined4)(0);
  param_1[0x1855] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1856) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x615a) = (undefined1)(0);
  param_1[0x1857] = (undefined4)(0);
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_RSecRegValidateEmailRequest);
  param_1[0x1852] = (undefined4)((uint)&ghidra_vftable_RSecRegValidateEmailRequest);
  param_1[0x1858] = (undefined4)(0);
  param_1[0x1859] = (undefined4)(0);
  pcVar1 = (char *)((char *)(param_1 + 0x185a));
  pcVar1[0] = (char)('\0');
  pcVar1[1] = (char)('\0');
  pcVar1[2] = (char)('\0');
  pcVar1[3] = (char)('\0');
  *(undefined2*)(param_1 + 0x185b) = (undefined2)(0x101);
  param_1[0x185c] = (undefined4)(0);
  uStack_814 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_814 + 1)) << 8 | (uint)(6)));
  thunk_FUN_11261330((uint)&auStack_810,0x401,"/account/v1/validate?email=%s",0,uVar2);
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar3 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_11247ed0(puVar3,(uint)&auStack_40c,0x401,&DAT_1186d2ee);
  ((SCStr *)(this_))->format(pcVar1);
  param_1[0x185e] = (undefined4)(0);
  param_1[0x185f] = (undefined4)(0);
  param_1[0x185d] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  *(undefined2*)(param_1 + 0x1860) = (undefined2)(0x101);
  param_1[0x1861] = (undefined4)(0xfffffffe);

  thunk_FUN_1148ac28(puVar4);
  return;

 } catch (...) { }
}


// Reference entry 103dc2d0; body size 485 bytes.
#line 1 "ENTRY_103dc2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103dc2d0(undefined4 *param_2,SCStr *param_3,undefined1 param_4,
            undefined1 param_5)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  char *pcVar1;
  uint uVar2;
  undefined1 *puVar3;
  SCStr *this_;
  void *pvStack_81c;
  undefined1 *puStack_818;
  undefined4 uStack_814;
  undefined1 auStack_810 [1028];
  undefined1 auStack_40c [1028];
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_810);

  uStack_8 = (uint)(uVar2);
  thunk_FUN_103d9b50<>(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailAIOOp);

  thunk_FUN_1124a200("application/json",0);
  param_1[0x1892] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1893] = (undefined4)(0);
  param_1[0x1894] = (undefined4)(0);
  param_1[0x1895] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1896) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x625a) = (undefined1)(0);
  param_1[0x1897] = (undefined4)(0);
  pcVar1 = (char *)((char *)(param_1 + 0x1898));
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailRequest);
  param_1[0x1892] = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailRequest);
  pcVar1[0] = (char)('\0');
  pcVar1[1] = (char)('\0');
  pcVar1[2] = (char)('\0');
  pcVar1[3] = (char)('\0');
  param_1[0x1899] = (undefined4)(0);
  *(unsigned char*)((char *)&uStack_814 + 0) = (unsigned char)(4);
  thunk_FUN_11261330((uint)&auStack_810,0x401,"/account/v1/emailVerification/tokens?email=%s",0,uVar2);
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar3 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_11247ed0(puVar3,(uint)&auStack_40c,0x401,&DAT_1186d2ee);
  ((SCStr *)(this_))->format(pcVar1);
  param_1[0x189b] = (undefined4)(0);
  param_1[0x189c] = (undefined4)(0);
  param_1[0x189a] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x189d] = (undefined4)(0);
  param_1[0x189f] = (undefined4)(0);
  param_1[0x18a0] = (undefined4)(0);
  param_1[0x189e] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  uStack_814 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_814 + 1)) << 8 | (uint)(7)));
  ((SCStr *)((SCStr *)(param_1 + 0x18a1)))->m_op_ctor(param_3);
  *(undefined1*)(param_1 + 0x18a2) = (undefined1)(param_4);
  *(undefined1*)((int)param_1 + 0x6289) = (undefined1)(param_5);
  param_1[0x18a3] = (undefined4)(0xfffffffe);

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 103dc6b0; body size 363 bytes.
#line 1 "ENTRY_103dc6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103dc6b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
 try {
  char *pcVar1;
  uint uVar2;
  SCStr *this_;
  undefined4 *puVar3;
  void *pvStack_418;
  undefined1 *puStack_414;
  undefined4 uStack_410;
  undefined1 auStack_40c [1028];
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_40c);

  uStack_8 = (uint)(uVar2);
  thunk_FUN_103d9b50<>(0);

  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailSubmitAIOOp);
  puVar3 = (undefined4 *)(param_1 + 0xf);
  thunk_FUN_1124a200("application/json",0);
  param_1[0x1892] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1893] = (undefined4)(0);
  param_1[0x1894] = (undefined4)(0);
  param_1[0x1895] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1896) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x625a) = (undefined1)(0);
  param_1[0x1897] = (undefined4)(0);
  pcVar1 = (char *)((char *)(param_1 + 0x1898));
  param_1[0xf] = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailSubmitRequest);
  param_1[0x1892] = (undefined4)((uint)&ghidra_vftable_RSecRegVerifyEmailSubmitRequest);
  pcVar1[0] = (char)('\0');
  pcVar1[1] = (char)('\0');
  pcVar1[2] = (char)('\0');
  pcVar1[3] = (char)('\0');
  param_1[0x1899] = (undefined4)(0);
  uStack_410 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_410 + 1)) << 8 | (uint)(4)));
  thunk_FUN_11261330((uint)&auStack_40c,0x401,"/account/v1/emailVerification?token=%s",0,uVar2);
  this_ = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if ((SCStr *)*param_2 != (SCStr *)((0x0))) {
    this_ = (SCStr *)((SCStr *)*param_2);
  }
  ((SCStr *)(this_))->format(pcVar1);
  param_1[0x189b] = (undefined4)(0);
  param_1[0x189c] = (undefined4)(0);
  param_1[0x189a] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  param_1[0x189d] = (undefined4)(0xfffffffe);

  thunk_FUN_1148ac28(puVar3);
  return;

 } catch (...) { }
}


// Reference entry 103dc9e0; body size 9 bytes.
#line 1 "ENTRY_103dc9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103dc9e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpSecRegRegisterPlayer);
  return (undefined4 *)(param_1);
}


// Reference entry 103df5d0; body size 11 bytes.
#line 1 "ENTRY_103df5d0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df5d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RGetBetaSettingsAIOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df5e0; body size 11 bytes.
#line 1 "ENTRY_103df5e0"

/* WARNING: Removing unreachable block_103df5e0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df5e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegAccountLoginAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df5f0; body size 11 bytes.
#line 1 "ENTRY_103df5f0"

/* WARNING: Removing unreachable block_103df5f0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df5f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegAccountTransferAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df600; body size 11 bytes.
#line 1 "ENTRY_103df600"

/* WARNING: Removing unreachable block_103df600 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df600(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegBeginSecureTransferAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df610; body size 11 bytes.
#line 1 "ENTRY_103df610"

/* WARNING: Removing unreachable block_103df610 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegCreateIdentityAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df620; body size 11 bytes.
#line 1 "ENTRY_103df620"

/* WARNING: Removing unreachable block_103df620 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df620(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegEmailHintAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df630; body size 11 bytes.
#line 1 "ENTRY_103df630"

/* WARNING: Removing unreachable block_103df630 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegGetEmailAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df640; body size 11 bytes.
#line 1 "ENTRY_103df640"

/* WARNING: Removing unreachable block_103df640 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegGetUserAccountRequestAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df650; body size 11 bytes.
#line 1 "ENTRY_103df650"

/* WARNING: Removing unreachable block_103df650 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegPasswordSetAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df660; body size 11 bytes.
#line 1 "ENTRY_103df660"

/* WARNING: Removing unreachable block_103df660 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegPrepTransferPlayerAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df670; body size 11 bytes.
#line 1 "ENTRY_103df670"

/* WARNING: Removing unreachable block_103df670 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegRegisterPlayerAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df680; body size 11 bytes.
#line 1 "ENTRY_103df680"

/* WARNING: Removing unreachable block_103df680 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegResetPasswordAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df690; body size 11 bytes.
#line 1 "ENTRY_103df690"

/* WARNING: Removing unreachable block_103df690 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegUpdateUserAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df6a0; body size 11 bytes.
#line 1 "ENTRY_103df6a0"

/* WARNING: Removing unreachable block_103df6a0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df6a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegUserEmailAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df6b0; body size 11 bytes.
#line 1 "ENTRY_103df6b0"

/* WARNING: Removing unreachable block_103df6b0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df6b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegValidateEmailAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df6c0; body size 11 bytes.
#line 1 "ENTRY_103df6c0"

/* WARNING: Removing unreachable block_103df6c0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegVerifyEmailAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103df6d0; body size 11 bytes.
#line 1 "ENTRY_103df6d0"

/* WARNING: Removing unreachable block_103df6d0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103df6d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSecRegVerifyEmailSubmitAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103e0dc0; body size 3 bytes.
#line 1 "ENTRY_103e0dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103e0dc0(void)

{
  return;
}


// Reference entry 103e3350; body size 7 bytes.
#line 1 "ENTRY_103e3350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3350(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103e3360; body size 18 bytes.
#line 1 "ENTRY_103e3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3360(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetBetaSettings);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetBetaSettings);


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


// Reference entry 103e3380; body size 18 bytes.
#line 1 "ENTRY_103e3380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3380(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegAccountLogin);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegAccountLogin);


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


// Reference entry 103e33a0; body size 18 bytes.
#line 1 "ENTRY_103e33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e33a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegAccountTransfer);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegAccountTransfer);


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


// Reference entry 103e33c0; body size 18 bytes.
#line 1 "ENTRY_103e33c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e33c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegBeginSecureTransfer);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegBeginSecureTransfer);


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


// Reference entry 103e33e0; body size 18 bytes.
#line 1 "ENTRY_103e33e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e33e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegCreateIdentity);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegCreateIdentity);


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


// Reference entry 103e3400; body size 18 bytes.
#line 1 "ENTRY_103e3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3400(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegEmailHint);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegEmailHint);


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


// Reference entry 103e34a0; body size 18 bytes.
#line 1 "ENTRY_103e34a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e34a0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegGetUserAccountRequest);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegGetUserAccountRequest);


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


// Reference entry 103e34c0; body size 18 bytes.
#line 1 "ENTRY_103e34c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e34c0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPasswordSet);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPasswordSet);


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


// Reference entry 103e34e0; body size 18 bytes.
#line 1 "ENTRY_103e34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e34e0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPrepTransferPlayer);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPrepTransferPlayer);


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


// Reference entry 103e3500; body size 5 bytes.
#line 1 "ENTRY_103e3500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3500(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


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


// Reference entry 103e3510; body size 18 bytes.
#line 1 "ENTRY_103e3510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3510(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegResetPassword);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegResetPassword);


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


// Reference entry 103e3530; body size 18 bytes.
#line 1 "ENTRY_103e3530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3530(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUpdateUser);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUpdateUser);


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


// Reference entry 103e3550; body size 18 bytes.
#line 1 "ENTRY_103e3550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3550(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUserEmail);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUserEmail);


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


// Reference entry 103e3570; body size 18 bytes.
#line 1 "ENTRY_103e3570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3570(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegValidateEmail);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegValidateEmail);


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


// Reference entry 103e3590; body size 18 bytes.
#line 1 "ENTRY_103e3590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e3590(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegVerifyEmail);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegVerifyEmail);


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


// Reference entry 103e35b0; body size 18 bytes.
#line 1 "ENTRY_103e35b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e35b0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegVerifyEmailSubmit);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegVerifyEmailSubmit);


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


// Reference entry 103e35d0; body size 3 bytes.
#line 1 "ENTRY_103e35d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e35d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103e35e0; body size 4 bytes.
#line 1 "ENTRY_103e35e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e35e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e35f0; body size 4 bytes.
#line 1 "ENTRY_103e35f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e35f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3600; body size 4 bytes.
#line 1 "ENTRY_103e3600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3600(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3610; body size 4 bytes.
#line 1 "ENTRY_103e3610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3610(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3620; body size 4 bytes.
#line 1 "ENTRY_103e3620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3620(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3630; body size 4 bytes.
#line 1 "ENTRY_103e3630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3630(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3640; body size 4 bytes.
#line 1 "ENTRY_103e3640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3640(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3650; body size 4 bytes.
#line 1 "ENTRY_103e3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3650(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3660; body size 4 bytes.
#line 1 "ENTRY_103e3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3660(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3670; body size 4 bytes.
#line 1 "ENTRY_103e3670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3670(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3680; body size 4 bytes.
#line 1 "ENTRY_103e3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3680(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e3690; body size 4 bytes.
#line 1 "ENTRY_103e3690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e3690(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e36a0; body size 4 bytes.
#line 1 "ENTRY_103e36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e36a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e36b0; body size 4 bytes.
#line 1 "ENTRY_103e36b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e36b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e36c0; body size 4 bytes.
#line 1 "ENTRY_103e36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e36c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e36d0; body size 4 bytes.
#line 1 "ENTRY_103e36d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e36d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e36e0; body size 4 bytes.
#line 1 "ENTRY_103e36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103e36e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103e6f70; body size 3 bytes.
#line 1 "ENTRY_103e6f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103e6f70(void)

{
  return;
}


// Reference entry 103e9780; body size 95 bytes.
#line 1 "ENTRY_103e9780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103e9780(int *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  int param_1 = (int )this;
  uint uVar1;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if ((SCStr *)*param_2 != (SCStr *)((0x0))) {
    this_ = (SCStr *)((SCStr *)*param_2);
  }
  ((SCStr *)(this_))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)((SCStr *)(param_1 + 0x6218)))->length(), 0);
  *(uint*)(param_1 + 0x6210) = (uint)(uVar1);
  return;
}


// Reference entry 103e9bc0; body size 183 bytes.
#line 1 "ENTRY_103e9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103e9bc0(undefined4 *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  uint uVar1;
  undefined1 *puVar2;
  SCStr *this_;
  undefined4 auStack_80c [257];
  undefined1 auStack_408 [1028];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_80c);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_11247ed0(puVar2,(uint)&auStack_408,0x401,&DAT_1186d2ee);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_3 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_3);
  }
  thunk_FUN_11247ed0(puVar2,(uint)&auStack_80c,0x401,&DAT_1186d2ee);
  ((SCStr *)(this_))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)((SCStr *)(param_1 + 0x6218)))->length(), 0);
  *(uint*)(param_1 + 0x6210) = (uint)(uVar1);
  auStack_80c[0] = (undefined4)(0x103e9c6e);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 103e9ea0; body size 101 bytes.
#line 1 "ENTRY_103e9ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103e9ea0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4, unsigned int recovered_unused_stack_5, unsigned int recovered_unused_stack_6, unsigned int recovered_unused_stack_7)

{
  uint uVar1;
  
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)(param_1 + 0x6218))->length(), 0);
  *(uint*)(param_1 + 0x6210) = (uint)(uVar1);
  return;
}


// Reference entry 103e9f20; body size 440 bytes.
#line 1 "ENTRY_103e9f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103e9f20(SCStr *param_1, undefined4 param_2, undefined4 param_3, unsigned int recovered_unused_stack_0)

{ int stack0xffffff08;
 try {
  uint uVar1;
  SCStr *this_;
  SCStr *unaff_ESI;
  undefined1 *puVar2;
  undefined4 uStack_f4;
  int *piStack_f0;
  int iStack_ec;
  undefined4 auStack_e8 [3];
  undefined1 auStack_dc [112];
  undefined1 auStack_6c [8];
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_3c [56];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)&uStack_f4);
  uStack_f4 = (undefined4)(param_2);
  auStack_e8[0] = (undefined4)(param_3);




  uStack_f4 = (undefined4)(Ordinal_8(6), 0);
  uStack_f4 = (undefined4)(Ordinal_8(param_3), 0);
  thunk_FUN_113d1ae0((uint)&auStack_dc,1);
  thunk_FUN_113d1d90((uint)&auStack_dc,&stack0xffffff08,4);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)param_1 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)(*(undefined1 **)param_1);
  }
  uVar1 = (uint)(((SCStr *)(param_1))->length(), 0);
  thunk_FUN_113d1d90((uint)&auStack_dc,puVar2,uVar1);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)unaff_ESI != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)(*(undefined1 **)unaff_ESI);
  }
  uVar1 = (uint)(((SCStr *)(unaff_ESI))->length(), 0);
  thunk_FUN_113d1d90((uint)&auStack_dc,puVar2,uVar1);
  thunk_FUN_113d1d90((uint)&auStack_dc,&uStack_f4,4);
  thunk_FUN_113d1d90((uint)&auStack_dc,(uint)&auStack_6c,0x10);
  thunk_FUN_113d1a60((uint)&auStack_dc,&uStack_5c);
  thunk_FUN_1145ed60((uint)&auStack_e8);
  thunk_FUN_112858c0(&uStack_5c,0x20,(uint)&auStack_3c,0x2d);
  this_ = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if ((SCStr *)*piStack_f0 != (SCStr *)((0x0))) {
    this_ = (SCStr *)((SCStr *)*piStack_f0);
  }
  ((SCStr *)(this_))->format((char *)(iStack_ec + 0x6218));
  uVar1 = (uint)(((SCStr *)((SCStr *)(iStack_ec + 0x6218)))->length(), 0);
  *(uint*)(iStack_ec + 0x6210) = (uint)(uVar1);
  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 103eaa90; body size 17 bytes.
#line 1 "ENTRY_103eaa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eaa90(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x612c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eaab0; body size 7 bytes.
#line 1 "ENTRY_103eaab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eaab0(int param_1)

{
  return (int)(param_1 + 0x6224);
}


// Reference entry 103eaac0; body size 7 bytes.
#line 1 "ENTRY_103eaac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eaac0(int param_1)

{
  return (int)(param_1 + 0x622c);
}


// Reference entry 103eaad0; body size 17 bytes.
#line 1 "ENTRY_103eaad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eaad0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x612c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eaaf0; body size 7 bytes.
#line 1 "ENTRY_103eaaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eaaf0(int param_1)

{
  return (int)(param_1 + 0x6234);
}


// Reference entry 103eab00; body size 7 bytes.
#line 1 "ENTRY_103eab00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eab00(int param_1)

{
  return (int)(param_1 + 0x6224);
}


// Reference entry 103eab10; body size 17 bytes.
#line 1 "ENTRY_103eab10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eab10(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6238) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6238), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eab30; body size 17 bytes.
#line 1 "ENTRY_103eab30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eab30(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eab50; body size 17 bytes.
#line 1 "ENTRY_103eab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eab50(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6228) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6228), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eab70; body size 17 bytes.
#line 1 "ENTRY_103eab70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eab70(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6130) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6130), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eab90; body size 7 bytes.
#line 1 "ENTRY_103eab90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eab90(int param_1)

{
  return (int)(param_1 + 0x6130);
}


// Reference entry 103eaba0; body size 17 bytes.
#line 1 "ENTRY_103eaba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eaba0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x612c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eabc0; body size 17 bytes.
#line 1 "ENTRY_103eabc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eabc0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eabe0; body size 17 bytes.
#line 1 "ENTRY_103eabe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eabe0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ead20; body size 23 bytes.
#line 1 "ENTRY_103ead20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103ead20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x12d24));
  return (SCStr *)(param_2);
}


// Reference entry 103ead40; body size 23 bytes.
#line 1 "ENTRY_103ead40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103ead40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x12e44));
  return (SCStr *)(param_2);
}


// Reference entry 103ead60; body size 23 bytes.
#line 1 "ENTRY_103ead60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103ead60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6138));
  return (SCStr *)(param_2);
}


// Reference entry 103ead80; body size 23 bytes.
#line 1 "ENTRY_103ead80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103ead80(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6190));
  return (SCStr *)(param_2);
}


// Reference entry 103eae20; body size 7 bytes.
#line 1 "ENTRY_103eae20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eae20(int param_1)

{
  return (int)(param_1 + 0x12d18);
}


// Reference entry 103eae30; body size 7 bytes.
#line 1 "ENTRY_103eae30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eae30(int param_1)

{
  return (int)(param_1 + 0xccd0);
}


// Reference entry 103eae70; body size 23 bytes.
#line 1 "ENTRY_103eae70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eae70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6180));
  return (SCStr *)(param_2);
}


// Reference entry 103eae90; body size 23 bytes.
#line 1 "ENTRY_103eae90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eae90(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6534));
  return (SCStr *)(param_2);
}


// Reference entry 103eaed0; body size 23 bytes.
#line 1 "ENTRY_103eaed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eaed0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6194));
  return (SCStr *)(param_2);
}


// Reference entry 103eaef0; body size 23 bytes.
#line 1 "ENTRY_103eaef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eaef0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6140));
  return (SCStr *)(param_2);
}


// Reference entry 103eaf30; body size 4 bytes.
#line 1 "ENTRY_103eaf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103eaf30(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x38));
}


// Reference entry 103eaf40; body size 7 bytes.
#line 1 "ENTRY_103eaf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103eaf40(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6184));
}


// Reference entry 103eaf50; body size 7 bytes.
#line 1 "ENTRY_103eaf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eaf50(int param_1)

{
  return (undefined4)(((uint)((int3)((uint)*(int *)(param_1 + 0x18) >> 8)) << 8 | (uint)(*(undefined1 *)(*(int *)(param_1 + 0x18) + 0x38))));
}


// Reference entry 103eaf70; body size 7 bytes.
#line 1 "ENTRY_103eaf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103eaf70(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6148));
}


// Reference entry 103eaf80; body size 7 bytes.
#line 1 "ENTRY_103eaf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103eaf80(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6531));
}


// Reference entry 103eaf90; body size 7 bytes.
#line 1 "ENTRY_103eaf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eaf90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x12d1c));
}


// Reference entry 103eafa0; body size 7 bytes.
#line 1 "ENTRY_103eafa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eafa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xcce8));
}


// Reference entry 103eafb0; body size 7 bytes.
#line 1 "ENTRY_103eafb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eafb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x622c));
}


// Reference entry 103eafe0; body size 23 bytes.
#line 1 "ENTRY_103eafe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eafe0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6130));
  return (SCStr *)(param_2);
}


// Reference entry 103eb000; body size 23 bytes.
#line 1 "ENTRY_103eb000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb000(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6188));
  return (SCStr *)(param_2);
}


// Reference entry 103eb040; body size 13 bytes.
#line 1 "ENTRY_103eb040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb040(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x616c) + 0x448c));
}


// Reference entry 103eb050; body size 13 bytes.
#line 1 "ENTRY_103eb050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb050(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x624c) + 0x448c));
}


// Reference entry 103eb0a0; body size 23 bytes.
#line 1 "ENTRY_103eb0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb0a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x622c));
  return (SCStr *)(param_2);
}


// Reference entry 103eb0c0; body size 23 bytes.
#line 1 "ENTRY_103eb0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb0c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6134));
  return (SCStr *)(param_2);
}


// Reference entry 103eb0e0; body size 23 bytes.
#line 1 "ENTRY_103eb0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb0e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x618c));
  return (SCStr *)(param_2);
}


// Reference entry 103eb130; body size 23 bytes.
#line 1 "ENTRY_103eb130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb130(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6230));
  return (SCStr *)(param_2);
}


// Reference entry 103eb260; body size 23 bytes.
#line 1 "ENTRY_103eb260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb260(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x12d28));
  return (SCStr *)(param_2);
}


// Reference entry 103eb280; body size 23 bytes.
#line 1 "ENTRY_103eb280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb280(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x12e48));
  return (SCStr *)(param_2);
}


// Reference entry 103eb2a0; body size 23 bytes.
#line 1 "ENTRY_103eb2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb2a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x613c));
  return (SCStr *)(param_2);
}


// Reference entry 103eb2c0; body size 23 bytes.
#line 1 "ENTRY_103eb2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb2c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6194));
  return (SCStr *)(param_2);
}


// Reference entry 103eb340; body size 7 bytes.
#line 1 "ENTRY_103eb340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eb340(int param_1)

{
  return (int)(param_1 + 0x12d10);
}


// Reference entry 103eb350; body size 7 bytes.
#line 1 "ENTRY_103eb350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eb350(int param_1)

{
  return (int)(param_1 + 0xcce0);
}


// Reference entry 103eb360; body size 7 bytes.
#line 1 "ENTRY_103eb360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eb360(int param_1)

{
  return (int)(param_1 + 0x6228);
}


// Reference entry 103eb3a0; body size 23 bytes.
#line 1 "ENTRY_103eb3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb3a0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6228));
  return (SCStr *)(param_2);
}


// Reference entry 103eb3d0; body size 28 bytes.
#line 1 "ENTRY_103eb3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103eb3d0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6170), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 103eb400; body size 28 bytes.
#line 1 "ENTRY_103eb400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103eb400(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6134), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 103eb430; body size 31 bytes.
#line 1 "ENTRY_103eb430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103eb430(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 0x18) + 0x6170), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 103eb460; body size 7 bytes.
#line 1 "ENTRY_103eb460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb460(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x12d2c));
}


// Reference entry 103eb470; body size 7 bytes.
#line 1 "ENTRY_103eb470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb470(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6674));
}


// Reference entry 103eb480; body size 7 bytes.
#line 1 "ENTRY_103eb480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb480(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6264));
}


// Reference entry 103eb490; body size 7 bytes.
#line 1 "ENTRY_103eb490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb490(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x12e4c));
}


// Reference entry 103eb4a0; body size 7 bytes.
#line 1 "ENTRY_103eb4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb4a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6198));
}


// Reference entry 103eb4b0; body size 20 bytes.
#line 1 "ENTRY_103eb4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb4b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x34));
  return (SCStr *)(param_2);
}


// Reference entry 103eb4d0; body size 7 bytes.
#line 1 "ENTRY_103eb4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb4d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6674));
}


// Reference entry 103eb4e0; body size 7 bytes.
#line 1 "ENTRY_103eb4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb4e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x626c));
}


// Reference entry 103eb4f0; body size 7 bytes.
#line 1 "ENTRY_103eb4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb4f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc4c0));
}


// Reference entry 103eb500; body size 7 bytes.
#line 1 "ENTRY_103eb500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb500(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6274));
}


// Reference entry 103eb510; body size 7 bytes.
#line 1 "ENTRY_103eb510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb510(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6258));
}


// Reference entry 103eb520; body size 7 bytes.
#line 1 "ENTRY_103eb520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb520(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6580));
}


// Reference entry 103eb530; body size 7 bytes.
#line 1 "ENTRY_103eb530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb530(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6184));
}


// Reference entry 103eb540; body size 7 bytes.
#line 1 "ENTRY_103eb540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb540(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x628c));
}


// Reference entry 103eb550; body size 7 bytes.
#line 1 "ENTRY_103eb550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb550(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6274));
}


// Reference entry 103eb570; body size 10 bytes.
#line 1 "ENTRY_103eb570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb570(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x6674));
}


// Reference entry 103eb5b0; body size 23 bytes.
#line 1 "ENTRY_103eb5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb5b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x34));
  return (SCStr *)(param_2);
}


// Reference entry 103eb5e0; body size 10 bytes.
#line 1 "ENTRY_103eb5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103eb5e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x626c));
}


// Reference entry 103eb890; body size 7 bytes.
#line 1 "ENTRY_103eb890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eb890(int param_1)

{
  return (int)(param_1 + 0x12d14);
}


// Reference entry 103eb8a0; body size 7 bytes.
#line 1 "ENTRY_103eb8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eb8a0(int param_1)

{
  return (int)(param_1 + 0xcce4);
}


// Reference entry 103eb8b0; body size 7 bytes.
#line 1 "ENTRY_103eb8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eb8b0(int param_1)

{
  return (int)(param_1 + 0x6638);
}


// Reference entry 103eb8f0; body size 7 bytes.
#line 1 "ENTRY_103eb8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103eb8f0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6536));
}


// Reference entry 103eb920; body size 7 bytes.
#line 1 "ENTRY_103eb920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eb920(int param_1)

{
  return (int)(param_1 + 0x12d0c);
}


// Reference entry 103eb930; body size 7 bytes.
#line 1 "ENTRY_103eb930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eb930(int param_1)

{
  return (int)(param_1 + 0xccdc);
}


// Reference entry 103eb940; body size 7 bytes.
#line 1 "ENTRY_103eb940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103eb940(int param_1)

{
  return (int)(param_1 + 0x6224);
}


// Reference entry 103eb960; body size 17 bytes.
#line 1 "ENTRY_103eb960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eb960(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x622c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x622c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eb980; body size 17 bytes.
#line 1 "ENTRY_103eb980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eb980(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eb9a0; body size 17 bytes.
#line 1 "ENTRY_103eb9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eb9a0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6124) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6124), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eb9c0; body size 17 bytes.
#line 1 "ENTRY_103eb9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103eb9c0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x622c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x622c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eb9e0; body size 23 bytes.
#line 1 "ENTRY_103eb9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eb9e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x12d20));
  return (SCStr *)(param_2);
}


// Reference entry 103eba00; body size 23 bytes.
#line 1 "ENTRY_103eba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eba00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6678));
  return (SCStr *)(param_2);
}


// Reference entry 103eba20; body size 23 bytes.
#line 1 "ENTRY_103eba20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eba20(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6224));
  return (SCStr *)(param_2);
}


// Reference entry 103eba40; body size 23 bytes.
#line 1 "ENTRY_103eba40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eba40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x617c));
  return (SCStr *)(param_2);
}


// Reference entry 103eba60; body size 23 bytes.
#line 1 "ENTRY_103eba60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103eba60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6128));
  return (SCStr *)(param_2);
}


// Reference entry 103ebac0; body size 23 bytes.
#line 1 "ENTRY_103ebac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103ebac0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6234));
  return (SCStr *)(param_2);
}


// Reference entry 103edaa0; body size 391 bytes.
#line 1 "ENTRY_103edaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103edaa0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  int param_1 = (int )this;
 try {
  SCStr *this_;
  uint uVar1;
  SCStr *this_00;
  SCStr *this_01;
  undefined4 uStack_478;
  void *pvStack_474;
  undefined1 *puStack_470;
  undefined4 uStack_46c;
  undefined1 auStack_468 [40];
  undefined **ppuStack_440;
  undefined4 auStack_418 [3];
  undefined1 auStack_40c [1028];
  uint uStack_8;


  uStack_8 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_468);

  thunk_FUN_1125bbd0(0);

  ((SCStr *)(this_00))->format((char *)(param_1 + 0x6224));

  thunk_FUN_1125bca0();
  thunk_FUN_10407c50(param_4,0);

  ((SCStr *)((SCStr *)&uStack_478))->m_op_ctor((SCStr *)(uint)&auStack_418);
  *(unsigned char*)((char *)&uStack_46c + 0) = (unsigned char)(2);
  this_ = (SCStr *)((SCStr *)(param_1 + 0x6218));
  if ((SCStr *)(&uStack_478) != (SCStr *)((this_))) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(uStack_478));
    ((SCStr *)(this_))->int_addref();
  }
  *(unsigned char*)((char *)&uStack_46c + 0) = (unsigned char)(3);
  ((SCStr *)((SCStr *)&uStack_478))->int_release();

  uStack_46c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_46c + 1)) << 8 | (uint)(1)));
  uVar1 = (uint)(((SCStr *)(this_))->length(), 0);
  *(uint*)(param_1 + 0x6210) = (uint)(uVar1);
  ppuStack_440 = (undefined **)((uint)&ghidra_vftable_SCJsonHelper);

  ((SCStr *)((SCStr *)(uint)&auStack_418))->int_release();
  auStack_418[0] = (undefined4)(0);

  thunk_FUN_11243520();
  thunk_FUN_11261330((uint)&auStack_40c,0x401,"/account/v1/users/%s",0);
  ((SCStr *)(this_01))->format((char *)(param_1 + 0x6228));

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 103efd90; body size 6 bytes.
#line 1 "ENTRY_103efd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103efd90(void)

{
  return (char *)("SCIOpSecRegRegisterPlayer");
}


// Reference entry 103efeb0; body size 7 bytes.
#line 1 "ENTRY_103efeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103efeb0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6181));
}


// Reference entry 103efed0; body size 7 bytes.
#line 1 "ENTRY_103efed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103efed0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6131));
}


// Reference entry 103f0070; body size 7 bytes.
#line 1 "ENTRY_103f0070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103f0070(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6130));
}


// Reference entry 103f0080; body size 7 bytes.
#line 1 "ENTRY_103f0080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103f0080(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6180));
}


// Reference entry 103f1f70; body size 3 bytes.
#line 1 "ENTRY_103f1f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103f1f70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103f2920; body size 28 bytes.
#line 1 "ENTRY_103f2920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103f2920(undefined4 *param_1)

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


// Reference entry 103f2fb0; body size 8 bytes.
#line 1 "ENTRY_103f2fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103f2fb0(undefined4 param_1)

{
  thunk_FUN_1145ed60(param_1);
  return;
}


// Reference entry 103f30d0; body size 107 bytes.
#line 1 "ENTRY_103f30d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103f30d0(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)
{
  int param_1 = (int )this;
  uint uVar1;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)&DAT_1186d2ee);
  if ((SCStr *)*param_3 != (SCStr *)((0x0))) {
    this_ = (SCStr *)((SCStr *)*param_3);
  }
  ((SCStr *)(this_))->format((char *)(param_1 + 0x6218));
  uVar1 = (uint)(((SCStr *)((SCStr *)(param_1 + 0x6218)))->length(), 0);
  *(uint*)(param_1 + 0x6210) = (uint)(uVar1);
  return;
}


// Reference entry 103f3300; body size 44 bytes.
#line 1 "ENTRY_103f3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103f3300(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  ((SCStr *)(param_1))->format((char *)(param_1 + 0x6224));
  return;
}


// Reference entry 103f3aa0; body size 99 bytes.
#line 1 "ENTRY_103f3aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103f3aa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  SCStr *this_;
  undefined4 auStack_408 [257];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_408);
  thunk_FUN_11261330((uint)&auStack_408,0x401,"/account/v1/users/%s/beta-settings",0);
  ((SCStr *)(this_))->format((char *)(param_1 + 0x612c));
  auStack_408[0] = (undefined4)(0x103f3afa);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 103f3b20; body size 99 bytes.
#line 1 "ENTRY_103f3b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103f3b20(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  SCStr *this_;
  undefined4 auStack_408 [257];
  uint uStack_4;
  
  uStack_4 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_408);
  thunk_FUN_11261330((uint)&auStack_408,0x401,"/account/v1/users/%s",0);
  ((SCStr *)(this_))->format((char *)(param_1 + 0x612c));
  auStack_408[0] = (undefined4)(0x103f3b7a);
  thunk_FUN_1148ac28();
  return;
}


// Reference entry 103f5b60; body size 35 bytes.
#line 1 "ENTRY_103f5b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f5b60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->m_op_ctor((SCStr *)(param_2 + 1));
  return (undefined4 *)(param_1);
}


// Reference entry 103f5b90; body size 18 bytes.
#line 1 "ENTRY_103f5b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f5b90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f5bb0; body size 18 bytes.
#line 1 "ENTRY_103f5bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f5bb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f5bd0; body size 22 bytes.
#line 1 "ENTRY_103f5bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f5bd0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103f5bf0; body size 18 bytes.
#line 1 "ENTRY_103f5bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f5bf0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f5c10; body size 18 bytes.
#line 1 "ENTRY_103f5c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f5c10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f5e50; body size 31 bytes.
#line 1 "ENTRY_103f5e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103f5e50(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103f5e80; body size 22 bytes.
#line 1 "ENTRY_103f5e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f5e80(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103f5ea0; body size 18 bytes.
#line 1 "ENTRY_103f5ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f5ea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f5ec0; body size 18 bytes.
#line 1 "ENTRY_103f5ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f5ec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f6000; body size 106 bytes.
#line 1 "ENTRY_103f6000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f6000(int *param_2)
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


// Reference entry 103f61a0; body size 33 bytes.
#line 1 "ENTRY_103f61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103f61a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 103f61d0; body size 26 bytes.
#line 1 "ENTRY_103f61d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103f61d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 103f61f0; body size 35 bytes.
#line 1 "ENTRY_103f61f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f61f0(undefined4 *param_2,char *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->int_allocRep(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103f6220; body size 12 bytes.
#line 1 "ENTRY_103f6220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103f6220(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103f6230; body size 3 bytes.
#line 1 "ENTRY_103f6230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6230(void)

{
  return;
}


// Reference entry 103f6240; body size 3 bytes.
#line 1 "ENTRY_103f6240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6240(void)

{
  return;
}


// Reference entry 103f6250; body size 25 bytes.
#line 1 "ENTRY_103f6250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6250(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 103f6270; body size 25 bytes.
#line 1 "ENTRY_103f6270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6270(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 103f63f0; body size 40 bytes.
#line 1 "ENTRY_103f63f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f63f0(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 103f6430; body size 13 bytes.
#line 1 "ENTRY_103f6430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6430(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103f6440; body size 13 bytes.
#line 1 "ENTRY_103f6440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6440(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103f6450; body size 13 bytes.
#line 1 "ENTRY_103f6450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6450(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103f6460; body size 13 bytes.
#line 1 "ENTRY_103f6460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6460(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103f6470; body size 113 bytes.
#line 1 "ENTRY_103f6470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103f6470(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = (undefined4)(thunk_FUN_103f6500(*(undefined4 *)(*param_2 + 4),*param_1,param_3), 0);
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


// Reference entry 103f66f0; body size 3 bytes.
#line 1 "ENTRY_103f66f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f66f0(void)

{
  return;
}


// Reference entry 103f6700; body size 3 bytes.
#line 1 "ENTRY_103f6700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6700(void)

{
  return;
}


// Reference entry 103f6e70; body size 15 bytes.
#line 1 "ENTRY_103f6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6e70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 103f6e90; body size 15 bytes.
#line 1 "ENTRY_103f6e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6e90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 103f6fb0; body size 7 bytes.
#line 1 "ENTRY_103f6fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f6fb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103f6fc0; body size 13 bytes.
#line 1 "ENTRY_103f6fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6fc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103f6fd0; body size 13 bytes.
#line 1 "ENTRY_103f6fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f6fd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103f7100; body size 5 bytes.
#line 1 "ENTRY_103f7100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7110; body size 5 bytes.
#line 1 "ENTRY_103f7110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7120; body size 37 bytes.
#line 1 "ENTRY_103f7120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7120(int param_1,SCStr *param_2)

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


// Reference entry 103f7150; body size 31 bytes.
#line 1 "ENTRY_103f7150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_103f7150(int param_1,uint *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = (uint)(*param_2), *(int *)(param_1 + 0x10) <= (int)(in_EAX))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 103f7180; body size 3 bytes.
#line 1 "ENTRY_103f7180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f7180(void)

{
  return;
}


// Reference entry 103f7190; body size 122 bytes.
#line 1 "ENTRY_103f7190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103f7190(int *param_2)
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


// Reference entry 103f7230; body size 13 bytes.
#line 1 "ENTRY_103f7230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f7230(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103f7240; body size 19 bytes.
#line 1 "ENTRY_103f7240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f7240(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 103f7260; body size 12 bytes.
#line 1 "ENTRY_103f7260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103f7260(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103f73b0; body size 5 bytes.
#line 1 "ENTRY_103f73b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f73b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f73c0; body size 5 bytes.
#line 1 "ENTRY_103f73c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f73c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f73d0; body size 5 bytes.
#line 1 "ENTRY_103f73d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f73d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f73e0; body size 5 bytes.
#line 1 "ENTRY_103f73e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f73e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f73f0; body size 5 bytes.
#line 1 "ENTRY_103f73f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f73f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7400; body size 5 bytes.
#line 1 "ENTRY_103f7400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7410; body size 5 bytes.
#line 1 "ENTRY_103f7410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7420; body size 5 bytes.
#line 1 "ENTRY_103f7420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7430; body size 5 bytes.
#line 1 "ENTRY_103f7430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7440; body size 5 bytes.
#line 1 "ENTRY_103f7440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7450; body size 5 bytes.
#line 1 "ENTRY_103f7450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7460; body size 5 bytes.
#line 1 "ENTRY_103f7460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7470; body size 5 bytes.
#line 1 "ENTRY_103f7470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7480; body size 93 bytes.
#line 1 "ENTRY_103f7480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103f7480(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (*(code ***)param_1)[1]();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (*(code ***)piVar2)[2]();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[2] = (int)(iVar3);
    return (int)(param_1[1]);
  }
  param_1[2] = (int)(0);
  return (int)(0);
}


// Reference entry 103f7500; body size 130 bytes.
#line 1 "ENTRY_103f7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103f7500(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (*(code ***)param_1)[1]();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (*(code ***)piVar2)[2]();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 103f75b0; body size 130 bytes.
#line 1 "ENTRY_103f75b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103f75b0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (*(code ***)param_1)[1]();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (*(code ***)piVar2)[2]();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 103f7660; body size 130 bytes.
#line 1 "ENTRY_103f7660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103f7660(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (*(code ***)param_1)[1]();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (*(code ***)piVar2)[2]();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 103f77c0; body size 27 bytes.
#line 1 "ENTRY_103f77c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f77c0(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 103f77f0; body size 27 bytes.
#line 1 "ENTRY_103f77f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f77f0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 103f7820; body size 25 bytes.
#line 1 "ENTRY_103f7820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f7820(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  ((SCStr *)((SCStr *)(param_2 + 1)))->m_op_ctor((SCStr *)(param_3 + 1));
  return;
}


// Reference entry 103f7920; body size 15 bytes.
#line 1 "ENTRY_103f7920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7920(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103f7940; body size 15 bytes.
#line 1 "ENTRY_103f7940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7940(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103f7960; body size 15 bytes.
#line 1 "ENTRY_103f7960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7960(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103f7980; body size 15 bytes.
#line 1 "ENTRY_103f7980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7980(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103f7a90; body size 5 bytes.
#line 1 "ENTRY_103f7a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7aa0; body size 5 bytes.
#line 1 "ENTRY_103f7aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7ab0; body size 5 bytes.
#line 1 "ENTRY_103f7ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7ac0; body size 5 bytes.
#line 1 "ENTRY_103f7ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7ad0; body size 5 bytes.
#line 1 "ENTRY_103f7ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7ae0; body size 5 bytes.
#line 1 "ENTRY_103f7ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7af0; body size 5 bytes.
#line 1 "ENTRY_103f7af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b00; body size 5 bytes.
#line 1 "ENTRY_103f7b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b10; body size 5 bytes.
#line 1 "ENTRY_103f7b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b20; body size 5 bytes.
#line 1 "ENTRY_103f7b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b30; body size 5 bytes.
#line 1 "ENTRY_103f7b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b40; body size 5 bytes.
#line 1 "ENTRY_103f7b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b50; body size 5 bytes.
#line 1 "ENTRY_103f7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b60; body size 5 bytes.
#line 1 "ENTRY_103f7b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b70; body size 5 bytes.
#line 1 "ENTRY_103f7b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b80; body size 5 bytes.
#line 1 "ENTRY_103f7b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7b90; body size 5 bytes.
#line 1 "ENTRY_103f7b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7ba0; body size 5 bytes.
#line 1 "ENTRY_103f7ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7bb0; body size 5 bytes.
#line 1 "ENTRY_103f7bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7bc0; body size 6 bytes.
#line 1 "ENTRY_103f7bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103f7bc0(void)

{
  return (char *)("SCIUserAccount");
}


// Reference entry 103f7d10; body size 40 bytes.
#line 1 "ENTRY_103f7d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f7d10(int param_1,undefined4 *param_2,undefined4 param_3)

{
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
                    
                    
  std::_Xbad_function_call();
  return;
}


// Reference entry 103f7d50; body size 5 bytes.
#line 1 "ENTRY_103f7d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7d60; body size 5 bytes.
#line 1 "ENTRY_103f7d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7d70; body size 5 bytes.
#line 1 "ENTRY_103f7d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7d80; body size 5 bytes.
#line 1 "ENTRY_103f7d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103f7d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f7d90; body size 19 bytes.
#line 1 "ENTRY_103f7d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103f7d90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 103f8070; body size 27 bytes.
#line 1 "ENTRY_103f8070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f8070(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 103f80a0; body size 70 bytes.
#line 1 "ENTRY_103f80a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f80a0(undefined4 *param_1)

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


// Reference entry 103f8100; body size 70 bytes.
#line 1 "ENTRY_103f8100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f8100(undefined4 *param_1)

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


// Reference entry 103f8160; body size 70 bytes.
#line 1 "ENTRY_103f8160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f8160(undefined4 *param_1)

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


// Reference entry 103f81c0; body size 70 bytes.
#line 1 "ENTRY_103f81c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f81c0(undefined4 *param_1)

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


// Reference entry 103f8360; body size 16 bytes.
#line 1 "ENTRY_103f8360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f8360(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f8380; body size 18 bytes.
#line 1 "ENTRY_103f8380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8380(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f83a0; body size 18 bytes.
#line 1 "ENTRY_103f83a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f83a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f83c0; body size 3 bytes.
#line 1 "ENTRY_103f83c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103f83c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f83d0; body size 10 bytes.
#line 1 "ENTRY_103f83d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103f83d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103f83e0; body size 10 bytes.
#line 1 "ENTRY_103f83e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103f83e0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103f83f0; body size 10 bytes.
#line 1 "ENTRY_103f83f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103f83f0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103f8400; body size 10 bytes.
#line 1 "ENTRY_103f8400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103f8400(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103f8410; body size 10 bytes.
#line 1 "ENTRY_103f8410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103f8410(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103f8500; body size 11 bytes.
#line 1 "ENTRY_103f8500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8500(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103f8510; body size 11 bytes.
#line 1 "ENTRY_103f8510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8510(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103f8520; body size 51 bytes.
#line 1 "ENTRY_103f8520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8520(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  void *pvVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *(void**)param_1[1] = (void *)((undefined4)(pvVar1));
  return (undefined4 *)(param_1);
}


// Reference entry 103f8560; body size 11 bytes.
#line 1 "ENTRY_103f8560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8560(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103f8670; body size 11 bytes.
#line 1 "ENTRY_103f8670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8670(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103f8680; body size 11 bytes.
#line 1 "ENTRY_103f8680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8680(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103f8690; body size 11 bytes.
#line 1 "ENTRY_103f8690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8690(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103f86a0; body size 11 bytes.
#line 1 "ENTRY_103f86a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f86a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103f86b0; body size 16 bytes.
#line 1 "ENTRY_103f86b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f86b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f86d0; body size 16 bytes.
#line 1 "ENTRY_103f86d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f86d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103f86f0; body size 3 bytes.
#line 1 "ENTRY_103f86f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103f86f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f8700; body size 3 bytes.
#line 1 "ENTRY_103f8700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103f8700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103f8880; body size 12 bytes.
#line 1 "ENTRY_103f8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103f8880(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103f8910; body size 12 bytes.
#line 1 "ENTRY_103f8910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103f8910(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103f89a0; body size 12 bytes.
#line 1 "ENTRY_103f89a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103f89a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103f8a30; body size 12 bytes.
#line 1 "ENTRY_103f8a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103f8a30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103f8ac0; body size 18 bytes.
#line 1 "ENTRY_103f8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8ac0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103f8ae0; body size 76 bytes.
#line 1 "ENTRY_103f8ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8ae0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  void *pvVar2;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar2 = (void *)(operator_new(0x18), 0);
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


// Reference entry 103f8c60; body size 52 bytes.
#line 1 "ENTRY_103f8c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f8c60(undefined4 *param_1)

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


// Reference entry 103f8e30; body size 33 bytes.
#line 1 "ENTRY_103f8e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103f8e30(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_2);
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 103f8e60; body size 35 bytes.
#line 1 "ENTRY_103f8e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8e60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->m_op_ctor((SCStr *)(param_2 + 1));
  return (undefined4 *)(param_1);
}


// Reference entry 103f8e90; body size 42 bytes.
#line 1 "ENTRY_103f8e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f8e90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 103f8ed0; body size 9 bytes.
#line 1 "ENTRY_103f8ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103f8ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUserAccount);
  return (undefined4 *)(param_1);
}


// Reference entry 103f9010; body size 42 bytes.
#line 1 "ENTRY_103f9010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103f9010(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCTokenManagerEventSinkInternal);
  return (undefined4 *)(param_1);
}


// Reference entry 103fab70; body size 34 bytes.
#line 1 "ENTRY_103fab70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fab70(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  return;
}


// Reference entry 103fb020; body size 19 bytes.
#line 1 "ENTRY_103fb020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fb020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103fb040; body size 7 bytes.
#line 1 "ENTRY_103fb040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fb040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103fb0d0; body size 19 bytes.
#line 1 "ENTRY_103fb0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fb0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103fb490; body size 18 bytes.
#line 1 "ENTRY_103fb490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fb490(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 103fb520; body size 67 bytes.
#line 1 "ENTRY_103fb520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103fb520(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_103f6890<>(param_1,*(undefined4 *)(iVar1 + 4));
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


// Reference entry 103fb640; body size 67 bytes.
#line 1 "ENTRY_103fb640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103fb640(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  if ((int *)(param_1) != (int *)(param_2)) {
    iVar1 = (int)(*param_1);
    thunk_FUN_103f6890<>(param_1,*(undefined4 *)(iVar1 + 4));
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


// Reference entry 103fb6a0; body size 14 bytes.
#line 1 "ENTRY_103fb6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103fb6a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103fb6c0; body size 14 bytes.
#line 1 "ENTRY_103fb6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103fb6c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103fb6e0; body size 14 bytes.
#line 1 "ENTRY_103fb6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103fb6e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103fb700; body size 14 bytes.
#line 1 "ENTRY_103fb700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103fb700(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103fb720; body size 14 bytes.
#line 1 "ENTRY_103fb720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103fb720(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103fb740; body size 12 bytes.
#line 1 "ENTRY_103fb740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fb740(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*(char *)(*param_1 + 0xd) == '\0')));
}


// Reference entry 103fb750; body size 14 bytes.
#line 1 "ENTRY_103fb750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103fb750(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103fb880; body size 3 bytes.
#line 1 "ENTRY_103fb880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fb880(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103fb890; body size 7 bytes.
#line 1 "ENTRY_103fb890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fb890(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103fb8a0; body size 7 bytes.
#line 1 "ENTRY_103fb8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fb8a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103fb8b0; body size 3 bytes.
#line 1 "ENTRY_103fb8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fb8b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103fb8c0; body size 8 bytes.
#line 1 "ENTRY_103fb8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fb8c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103fb8d0; body size 8 bytes.
#line 1 "ENTRY_103fb8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fb8d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103fb8e0; body size 8 bytes.
#line 1 "ENTRY_103fb8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fb8e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103fb8f0; body size 8 bytes.
#line 1 "ENTRY_103fb8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fb8f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103fb900; body size 8 bytes.
#line 1 "ENTRY_103fb900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fb900(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103fb910; body size 8 bytes.
#line 1 "ENTRY_103fb910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fb910(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103fb920; body size 4 bytes.
#line 1 "ENTRY_103fb920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fb920(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103fb930; body size 4 bytes.
#line 1 "ENTRY_103fb930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fb930(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103fb940; body size 4 bytes.
#line 1 "ENTRY_103fb940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fb940(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103fb950; body size 4 bytes.
#line 1 "ENTRY_103fb950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fb950(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103fb960; body size 3 bytes.
#line 1 "ENTRY_103fb960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fb960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103fb970; body size 6 bytes.
#line 1 "ENTRY_103fb970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103fb970(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103fb980; body size 6 bytes.
#line 1 "ENTRY_103fb980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103fb980(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103fb990; body size 6 bytes.
#line 1 "ENTRY_103fb990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103fb990(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103fb9a0; body size 6 bytes.
#line 1 "ENTRY_103fb9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103fb9a0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103fb9b0; body size 6 bytes.
#line 1 "ENTRY_103fb9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103fb9b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103fb9c0; body size 6 bytes.
#line 1 "ENTRY_103fb9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103fb9c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103fb9d0; body size 6 bytes.
#line 1 "ENTRY_103fb9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103fb9d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103fb9e0; body size 6 bytes.
#line 1 "ENTRY_103fb9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103fb9e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103fb9f0; body size 6 bytes.
#line 1 "ENTRY_103fb9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103fb9f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103fbc70; body size 29 bytes.
#line 1 "ENTRY_103fbc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fbc70(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 103fbca0; body size 29 bytes.
#line 1 "ENTRY_103fbca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fbca0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 103fbf50; body size 18 bytes.
#line 1 "ENTRY_103fbf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_103fbf50(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 103fc4d0; body size 31 bytes.
#line 1 "ENTRY_103fc4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fc4d0(undefined4 *param_1)

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


// Reference entry 103fc500; body size 31 bytes.
#line 1 "ENTRY_103fc500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fc500(undefined4 *param_1)

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


// Reference entry 103fc570; body size 14 bytes.
#line 1 "ENTRY_103fc570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fc570(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 103fc590; body size 14 bytes.
#line 1 "ENTRY_103fc590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fc590(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 103fc6e0; body size 8 bytes.
#line 1 "ENTRY_103fc6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fc6e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103fc6f0; body size 8 bytes.
#line 1 "ENTRY_103fc6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fc6f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103fc700; body size 8 bytes.
#line 1 "ENTRY_103fc700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fc700(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103fc710; body size 8 bytes.
#line 1 "ENTRY_103fc710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fc710(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103fc720; body size 8 bytes.
#line 1 "ENTRY_103fc720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fc720(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103fc730; body size 5 bytes.
#line 1 "ENTRY_103fc730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103fc730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc750; body size 3 bytes.
#line 1 "ENTRY_103fc750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc760; body size 3 bytes.
#line 1 "ENTRY_103fc760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc770; body size 3 bytes.
#line 1 "ENTRY_103fc770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc780; body size 3 bytes.
#line 1 "ENTRY_103fc780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc790; body size 3 bytes.
#line 1 "ENTRY_103fc790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc7a0; body size 3 bytes.
#line 1 "ENTRY_103fc7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc7a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc7b0; body size 3 bytes.
#line 1 "ENTRY_103fc7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc7b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc7c0; body size 3 bytes.
#line 1 "ENTRY_103fc7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc7c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc7d0; body size 3 bytes.
#line 1 "ENTRY_103fc7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc7d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc7e0; body size 3 bytes.
#line 1 "ENTRY_103fc7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc7e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc7f0; body size 3 bytes.
#line 1 "ENTRY_103fc7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc810; body size 3 bytes.
#line 1 "ENTRY_103fc810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc820; body size 3 bytes.
#line 1 "ENTRY_103fc820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc830; body size 3 bytes.
#line 1 "ENTRY_103fc830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc840; body size 3 bytes.
#line 1 "ENTRY_103fc840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc850; body size 3 bytes.
#line 1 "ENTRY_103fc850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc860; body size 3 bytes.
#line 1 "ENTRY_103fc860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103fc870; body size 4 bytes.
#line 1 "ENTRY_103fc870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc870(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103fc880; body size 4 bytes.
#line 1 "ENTRY_103fc880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc880(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103fc890; body size 4 bytes.
#line 1 "ENTRY_103fc890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc890(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103fc8a0; body size 4 bytes.
#line 1 "ENTRY_103fc8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc8a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103fc8b0; body size 4 bytes.
#line 1 "ENTRY_103fc8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fc8b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103fcde0; body size 7 bytes.
#line 1 "ENTRY_103fcde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fcde0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103fcdf0; body size 7 bytes.
#line 1 "ENTRY_103fcdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fcdf0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103fce00; body size 7 bytes.
#line 1 "ENTRY_103fce00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fce00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103fce10; body size 7 bytes.
#line 1 "ENTRY_103fce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fce10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103fce20; body size 7 bytes.
#line 1 "ENTRY_103fce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103fce20(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103fce30; body size 79 bytes.
#line 1 "ENTRY_103fce30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fce30(int param_2)
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


// Reference entry 103fcea0; body size 79 bytes.
#line 1 "ENTRY_103fcea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fcea0(int param_2)
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


// Reference entry 103fcf10; body size 30 bytes.
#line 1 "ENTRY_103fcf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103fcf10(int param_1)

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


// Reference entry 103fcf40; body size 30 bytes.
#line 1 "ENTRY_103fcf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103fcf40(int param_1)

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


// Reference entry 103fcf70; body size 31 bytes.
#line 1 "ENTRY_103fcf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_103fcf70(int *param_1)

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


// Reference entry 103fcfa0; body size 31 bytes.
#line 1 "ENTRY_103fcfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_103fcfa0(int *param_1)

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


// Reference entry 103fd030; body size 3 bytes.
#line 1 "ENTRY_103fd030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103fd030(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103fd040; body size 11 bytes.
#line 1 "ENTRY_103fd040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fd040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103fd050; body size 11 bytes.
#line 1 "ENTRY_103fd050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fd050(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103fd060; body size 8 bytes.
#line 1 "ENTRY_103fd060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103fd060(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 103fd070; body size 26 bytes.
#line 1 "ENTRY_103fd070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd070(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 103fd090; body size 26 bytes.
#line 1 "ENTRY_103fd090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd090(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 103fd0b0; body size 26 bytes.
#line 1 "ENTRY_103fd0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd0b0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 103fd0d0; body size 26 bytes.
#line 1 "ENTRY_103fd0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd0d0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 103fd0f0; body size 26 bytes.
#line 1 "ENTRY_103fd0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd0f0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 103fd110; body size 26 bytes.
#line 1 "ENTRY_103fd110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd110(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 103fd130; body size 76 bytes.
#line 1 "ENTRY_103fd130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd130(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((*(code ***)piVar1)[1](param_1), 0);
      *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (*(code ***)piVar1)[4]((int *)(piVar1) != (int *)(param_2));
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


// Reference entry 103fd190; body size 83 bytes.
#line 1 "ENTRY_103fd190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd190(int *param_2)
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


// Reference entry 103fd200; body size 83 bytes.
#line 1 "ENTRY_103fd200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd200(int *param_2)
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


// Reference entry 103fd270; body size 9 bytes.
#line 1 "ENTRY_103fd270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 103fd280; body size 10 bytes.
#line 1 "ENTRY_103fd280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd280(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103fd290; body size 10 bytes.
#line 1 "ENTRY_103fd290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd290(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103fd2a0; body size 10 bytes.
#line 1 "ENTRY_103fd2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd2a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103fd2b0; body size 10 bytes.
#line 1 "ENTRY_103fd2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd2b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103fd2c0; body size 10 bytes.
#line 1 "ENTRY_103fd2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd2c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103fd2d0; body size 33 bytes.
#line 1 "ENTRY_103fd2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd2d0(undefined4 *param_2)
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


// Reference entry 103fd400; body size 13 bytes.
#line 1 "ENTRY_103fd400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd400(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103fd410; body size 10 bytes.
#line 1 "ENTRY_103fd410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103fd410(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 103fd420; body size 11 bytes.
#line 1 "ENTRY_103fd420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fd420(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103fe5e0; body size 90 bytes.
#line 1 "ENTRY_103fe5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103fe5e0(uint param_1)

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


// Reference entry 103fe660; body size 90 bytes.
#line 1 "ENTRY_103fe660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103fe660(uint param_1)

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


// Reference entry 103fe830; body size 13 bytes.
#line 1 "ENTRY_103fe830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103fe830(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103fe840; body size 3 bytes.
#line 1 "ENTRY_103fe840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fe840(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103feea0; body size 57 bytes.
#line 1 "ENTRY_103feea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103feea0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 103feef0; body size 57 bytes.
#line 1 "ENTRY_103feef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103feef0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 103fef40; body size 60 bytes.
#line 1 "ENTRY_103fef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103fef40(int param_1,int param_2)

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


// Reference entry 103fef90; body size 60 bytes.
#line 1 "ENTRY_103fef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103fef90(int param_1,int param_2)

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


// Reference entry 103fefe0; body size 16 bytes.
#line 1 "ENTRY_103fefe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103fefe0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103ff000; body size 16 bytes.
#line 1 "ENTRY_103ff000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ff000(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103ff020; body size 32 bytes.
#line 1 "ENTRY_103ff020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103ff020(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 103ff150; body size 11 bytes.
#line 1 "ENTRY_103ff150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103ff150(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103ff160; body size 11 bytes.
#line 1 "ENTRY_103ff160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103ff160(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103ff170; body size 4 bytes.
#line 1 "ENTRY_103ff170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ff170(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103ff480; body size 4 bytes.
#line 1 "ENTRY_103ff480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ff480(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103ff490; body size 4 bytes.
#line 1 "ENTRY_103ff490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ff490(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103ff4a0; body size 4 bytes.
#line 1 "ENTRY_103ff4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ff4a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103ff4b0; body size 4 bytes.
#line 1 "ENTRY_103ff4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ff4b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 104009a0; body size 6 bytes.
#line 1 "ENTRY_104009a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_104009a0(void)

{
  return (char *)("SCIUserAccount");
}


// Reference entry 10400ac0; body size 7 bytes.
#line 1 "ENTRY_10400ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10400ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10401750; body size 6 bytes.
#line 1 "ENTRY_10401750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10401750(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10401760; body size 6 bytes.
#line 1 "ENTRY_10401760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10401760(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10401770; body size 6 bytes.
#line 1 "ENTRY_10401770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10401770(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10401780; body size 6 bytes.
#line 1 "ENTRY_10401780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10401780(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10401910; body size 5 bytes.
#line 1 "ENTRY_10401910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10401910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10401920; body size 5 bytes.
#line 1 "ENTRY_10401920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10401920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10401aa0; body size 3 bytes.
#line 1 "ENTRY_10401aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10401aa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10401ab0; body size 3 bytes.
#line 1 "ENTRY_10401ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10401ab0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10401ac0; body size 3 bytes.
#line 1 "ENTRY_10401ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10401ac0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10402430; body size 28 bytes.
#line 1 "ENTRY_10402430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10402430(undefined4 *param_1)

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


// Reference entry 10402460; body size 28 bytes.
#line 1 "ENTRY_10402460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10402460(undefined4 *param_1)

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


// Reference entry 10402490; body size 28 bytes.
#line 1 "ENTRY_10402490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10402490(undefined4 *param_1)

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


// Reference entry 104024c0; body size 28 bytes.
#line 1 "ENTRY_104024c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104024c0(undefined4 *param_1)

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


// Reference entry 104024f0; body size 28 bytes.
#line 1 "ENTRY_104024f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104024f0(undefined4 *param_1)

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


// Reference entry 10402520; body size 28 bytes.
#line 1 "ENTRY_10402520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10402520(undefined4 *param_1)

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


// Reference entry 10403330; body size 5 bytes.
#line 1 "ENTRY_10403330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10403330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10403ba0; body size 21 bytes.
#line 1 "ENTRY_10403ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10403ba0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[6](*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10403c20; body size 86 bytes.
#line 1 "ENTRY_10403c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10403c20(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  uint3 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  __time64_t _Var7;
  
  _Var7 = (__time64_t)(_time64((__time64_t *)0x0), 0);
  uVar6 = (uint)(*(uint *)(param_1 + 0xa4));
  uVar1 = (uint)((uint)_Var7 + param_2);
  uVar4 = (uint)(*(uint *)(param_1 + 0xa0));
  uVar2 = (uint)(uVar1 + 0x78);
  iVar5 = (int)((int)((ulonglong)_Var7 >> 0x20) + (uint)((uint)((uint)_Var7) + (uint)(param_2) < (uint)((uint)_Var7)) + (uint)(0xffffff87 < uVar1));
  if (((int)uVar6 < -1) || (0x7fffffff < uVar6)) {
    uVar4 = (uint)(*(uint *)(param_1 + 0x88));
    uVar6 = (uint)(*(uint *)(param_1 + 0x8c));
  }
  uVar3 = (uint3)((uint3)(uVar2 >> 8));
  if ((iVar5 <= (int)uVar6) && ((iVar5 < (int)uVar6 || (uVar2 < uVar4)))) {
    return (int)(((uint)(uVar3) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar3 << 8);
}


// Reference entry 10403ca0; body size 27 bytes.
#line 1 "ENTRY_10403ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10403ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10403ee0; body size 3 bytes.
#line 1 "ENTRY_10403ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10403ee0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104043e0; body size 3 bytes.
#line 1 "ENTRY_104043e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104043e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10404bb0; body size 28 bytes.
#line 1 "ENTRY_10404bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10404bb0(undefined4 *param_1)

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


// Reference entry 10405170; body size 18 bytes.
#line 1 "ENTRY_10405170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10405170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10405190; body size 39 bytes.
#line 1 "ENTRY_10405190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10405190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104051c0; body size 25 bytes.
#line 1 "ENTRY_104051c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104051c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104051e0; body size 22 bytes.
#line 1 "ENTRY_104051e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104051e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10405200; body size 18 bytes.
#line 1 "ENTRY_10405200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10405200(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10405220; body size 19 bytes.
#line 1 "ENTRY_10405220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10405220(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 104052c0; body size 22 bytes.
#line 1 "ENTRY_104052c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104052c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104052e0; body size 49 bytes.
#line 1 "ENTRY_104052e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_104052e0(int param_2,int param_3, unsigned int recovered_unused_stack_0)
{
  undefined1 *param_1 = (undefined1 *)this;
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  if (param_2 != param_3) {
    thunk_FUN_1012d130(param_2,param_3 - param_2);
  }
  return (undefined1 *)(param_1);
}


// Reference entry 10405430; body size 5 bytes.
#line 1 "ENTRY_10405430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10405430(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10405440; body size 5 bytes.
#line 1 "ENTRY_10405440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10405440(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10405450; body size 22 bytes.
#line 1 "ENTRY_10405450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10405450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10405520; body size 26 bytes.
#line 1 "ENTRY_10405520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10405520(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10405980; body size 26 bytes.
#line 1 "ENTRY_10405980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10405980(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10405ed0; body size 3 bytes.
#line 1 "ENTRY_10405ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10405ed0(void)

{
  return;
}


// Reference entry 10405ee0; body size 3 bytes.
#line 1 "ENTRY_10405ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10405ee0(void)

{
  return;
}


// Reference entry 10405ef0; body size 25 bytes.
#line 1 "ENTRY_10405ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10405ef0(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x30), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10405f10; body size 13 bytes.
#line 1 "ENTRY_10405f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10405f10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10405f20; body size 13 bytes.
#line 1 "ENTRY_10405f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10405f20(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10405f30; body size 33 bytes.
#line 1 "ENTRY_10405f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10405f30(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10405f60; body size 3 bytes.
#line 1 "ENTRY_10405f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10405f60(void)

{
  return;
}


// Reference entry 10405f70; body size 3 bytes.
#line 1 "ENTRY_10405f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10405f70(void)

{
  return;
}


// Reference entry 10405f80; body size 3 bytes.
#line 1 "ENTRY_10405f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10405f80(void)

{
  return;
}


// Reference entry 104061f0; body size 39 bytes.
#line 1 "ENTRY_104061f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104061f0(undefined4 *param_2)
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


// Reference entry 10406220; body size 39 bytes.
#line 1 "ENTRY_10406220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10406220(undefined4 *param_2)
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


// Reference entry 10406310; body size 39 bytes.
#line 1 "ENTRY_10406310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10406310(undefined4 *param_2)
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


// Reference entry 10406730; body size 15 bytes.
#line 1 "ENTRY_10406730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10406730(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 104067c0; body size 7 bytes.
#line 1 "ENTRY_104067c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104067c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104067d0; body size 7 bytes.
#line 1 "ENTRY_104067d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104067d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104067e0; body size 7 bytes.
#line 1 "ENTRY_104067e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104067e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104067f0; body size 7 bytes.
#line 1 "ENTRY_104067f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104067f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10406800; body size 16 bytes.
#line 1 "ENTRY_10406800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10406800(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 10406820; body size 5 bytes.
#line 1 "ENTRY_10406820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406830; body size 68 bytes.
#line 1 "ENTRY_10406830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406830(int param_1,undefined4 *param_2)

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


// Reference entry 10406890; body size 3 bytes.
#line 1 "ENTRY_10406890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10406890(void)

{
  return;
}


// Reference entry 104068a0; body size 3 bytes.
#line 1 "ENTRY_104068a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104068a0(void)

{
  return;
}


// Reference entry 104068b0; body size 19 bytes.
#line 1 "ENTRY_104068b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_104068b0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3 + -1);
  return (undefined4 *)(param_1);
}


// Reference entry 104068d0; body size 13 bytes.
#line 1 "ENTRY_104068d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104068d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10406970; body size 5 bytes.
#line 1 "ENTRY_10406970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406ac0; body size 35 bytes.
#line 1 "ENTRY_10406ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10406ac0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((char *)(param_2 * 4 + (int)param_1));
}


// Reference entry 10406af0; body size 5 bytes.
#line 1 "ENTRY_10406af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406b00; body size 27 bytes.
#line 1 "ENTRY_10406b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10406b00(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (int)(param_2);
}


// Reference entry 10406b30; body size 5 bytes.
#line 1 "ENTRY_10406b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406b40; body size 5 bytes.
#line 1 "ENTRY_10406b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406b50; body size 5 bytes.
#line 1 "ENTRY_10406b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406b60; body size 5 bytes.
#line 1 "ENTRY_10406b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406b70; body size 5 bytes.
#line 1 "ENTRY_10406b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406b80; body size 5 bytes.
#line 1 "ENTRY_10406b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406b80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406b90; body size 5 bytes.
#line 1 "ENTRY_10406b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406ba0; body size 5 bytes.
#line 1 "ENTRY_10406ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406bb0; body size 5 bytes.
#line 1 "ENTRY_10406bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406bc0; body size 5 bytes.
#line 1 "ENTRY_10406bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10406bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10406cb0; body size 28 bytes.
#line 1 "ENTRY_10406cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10406cb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10406ce0; body size 28 bytes.
#line 1 "ENTRY_10406ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10406ce0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10406d10; body size 28 bytes.
#line 1 "ENTRY_10406d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10406d10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10407070; body size 15 bytes.
#line 1 "ENTRY_10407070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10407070(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10407090; body size 15 bytes.
#line 1 "ENTRY_10407090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10407090(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104070b0; body size 5 bytes.
#line 1 "ENTRY_104070b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104070b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104070c0; body size 5 bytes.
#line 1 "ENTRY_104070c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104070c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104070d0; body size 5 bytes.
#line 1 "ENTRY_104070d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104070d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104070e0; body size 5 bytes.
#line 1 "ENTRY_104070e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104070e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104070f0; body size 5 bytes.
#line 1 "ENTRY_104070f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104070f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407100; body size 5 bytes.
#line 1 "ENTRY_10407100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10407100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407110; body size 5 bytes.
#line 1 "ENTRY_10407110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10407110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407120; body size 5 bytes.
#line 1 "ENTRY_10407120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10407120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407130; body size 5 bytes.
#line 1 "ENTRY_10407130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10407130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407140; body size 5 bytes.
#line 1 "ENTRY_10407140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10407140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407150; body size 5 bytes.
#line 1 "ENTRY_10407150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10407150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407380; body size 5 bytes.
#line 1 "ENTRY_10407380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10407380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407390; body size 33 bytes.
#line 1 "ENTRY_10407390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10407390(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10407430; body size 26 bytes.
#line 1 "ENTRY_10407430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10407430(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10407470; body size 18 bytes.
#line 1 "ENTRY_10407470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10407470(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10407490; body size 18 bytes.
#line 1 "ENTRY_10407490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10407490(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104074b0; body size 18 bytes.
#line 1 "ENTRY_104074b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104074b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104074d0; body size 37 bytes.
#line 1 "ENTRY_104074d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104074d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10407540; body size 11 bytes.
#line 1 "ENTRY_10407540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10407540(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10407550; body size 11 bytes.
#line 1 "ENTRY_10407550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10407550(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104075e0; body size 11 bytes.
#line 1 "ENTRY_104075e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104075e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104075f0; body size 16 bytes.
#line 1 "ENTRY_104075f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104075f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10407610; body size 21 bytes.
#line 1 "ENTRY_10407610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10407610(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10407630; body size 11 bytes.
#line 1 "ENTRY_10407630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10407630(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10407640; body size 11 bytes.
#line 1 "ENTRY_10407640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10407640(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10407650; body size 23 bytes.
#line 1 "ENTRY_10407650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10407650(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10407670; body size 3 bytes.
#line 1 "ENTRY_10407670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10407670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407680; body size 3 bytes.
#line 1 "ENTRY_10407680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10407680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10407690; body size 20 bytes.
#line 1 "ENTRY_10407690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10407690(undefined1 *param_1)

{
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 10407700; body size 52 bytes.
#line 1 "ENTRY_10407700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10407700(undefined4 *param_1)

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


// Reference entry 104077e0; body size 23 bytes.
#line 1 "ENTRY_104077e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104077e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10408350; body size 5 bytes.
#line 1 "ENTRY_10408350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10408350(undefined4 *param_1)

{
 try {
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar7 = (int)(param_1[4]);
  if (iVar7 != 0) {
    do {
      uVar5 = (uint)(param_1[3] + -1 + iVar7);
      uVar6 = (uint)(uVar5 & 1);
      iVar4 = (int)(*(int *)(param_1[1] + (param_1[2] - 1 & uVar5 >> 1) * 4));
      piVar1 = (int *)(*(int **)(iVar4 + 4 + uVar6 * 8), 0);

      if ((int *)(piVar1) != (int *)(0x0)) {
        *(undefined4*)(iVar4 + uVar6 * 8) = (undefined4)(0);
        *(undefined4*)(iVar4 + 4 + uVar6 * 8) = (undefined4)(0);
        (**(code **)(*piVar1 + 8))(uVar3);
        iVar7 = (int)(param_1[4]);
      }
      iVar7 = (int)(iVar7 + -1);
      param_1[4] = (undefined4)(iVar7);
    } while (iVar7 != 0);
    param_1[3] = (undefined4)(0);
  }

  iVar7 = (int)(param_1[2]);
  while (iVar7 != 0) {
    iVar7 = (int)(iVar7 + -1);
    iVar4 = (int)(*(int *)(param_1[1] + iVar7 * 4));
    if (iVar4 != 0) {
      thunk_FUN_1148a50e(iVar4,0x10);
    }
  }
  iVar7 = (int)(param_1[1]);
  if (iVar7 != 0) {
    uVar3 = (uint)(param_1[2] * 4);
    iVar4 = (int)(iVar7);
    if (0xfff < uVar3) {
      iVar4 = (int)(*(int *)(iVar7 + -4));
      uVar3 = (uint)(uVar3 + 0x23);
      if (0x1f < (iVar7 - iVar4) - 4U) {
                    
        _invalid_parameter_noinfo_noreturn();
      }
    }
    thunk_FUN_1148a50e(iVar4,uVar3);
  }
  uVar2 = (undefined4)(*param_1);
  param_1[2] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(0);
  thunk_FUN_1148a50e(uVar2,8);

  return;

 } catch (...) { }
}


// Reference entry 10408620; body size 65 bytes.
#line 1 "ENTRY_10408620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10408620(int *param_2)
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


// Reference entry 10408790; body size 38 bytes.
#line 1 "ENTRY_10408790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10408790(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    puVar1 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar1 = (undefined4 *)((undefined4 *)*param_2);
    }
    thunk_FUN_1012d130(puVar1,param_2[4]);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 104087c0; body size 14 bytes.
#line 1 "ENTRY_104087c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104087c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 104087e0; body size 14 bytes.
#line 1 "ENTRY_104087e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_104087e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10408800; body size 14 bytes.
#line 1 "ENTRY_10408800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10408800(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10408820; body size 14 bytes.
#line 1 "ENTRY_10408820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10408820(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10408840; body size 12 bytes.
#line 1 "ENTRY_10408840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10408840(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10408850; body size 12 bytes.
#line 1 "ENTRY_10408850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10408850(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10408860; body size 3 bytes.
#line 1 "ENTRY_10408860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10408860(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10408870; body size 3 bytes.
#line 1 "ENTRY_10408870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10408870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10408880; body size 7 bytes.
#line 1 "ENTRY_10408880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10408880(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10408890; body size 7 bytes.
#line 1 "ENTRY_10408890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10408890(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104088a0; body size 7 bytes.
#line 1 "ENTRY_104088a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104088a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104088b0; body size 7 bytes.
#line 1 "ENTRY_104088b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104088b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104088c0; body size 3 bytes.
#line 1 "ENTRY_104088c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104088c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104088d0; body size 3 bytes.
#line 1 "ENTRY_104088d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104088d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104088e0; body size 6 bytes.
#line 1 "ENTRY_104088e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104088e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 104088f0; body size 6 bytes.
#line 1 "ENTRY_104088f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104088f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10408900; body size 30 bytes.
#line 1 "ENTRY_10408900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10408900(int *param_1)

{
  return (int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 1) * 4
                 ) + (param_1[1] & 1U) * 8);
}


// Reference entry 10408930; body size 30 bytes.
#line 1 "ENTRY_10408930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10408930(int *param_1)

{
  return (int)(*(int *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & (uint)param_1[1] >> 1) * 4
                 ) + (param_1[1] & 1U) * 8);
}


// Reference entry 10408960; body size 6 bytes.
#line 1 "ENTRY_10408960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10408960(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10408970; body size 3 bytes.
#line 1 "ENTRY_10408970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10408970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10408a60; body size 6 bytes.
#line 1 "ENTRY_10408a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10408a60(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10408a70; body size 6 bytes.
#line 1 "ENTRY_10408a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10408a70(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 10408a80; body size 6 bytes.
#line 1 "ENTRY_10408a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10408a80(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 10408a90; body size 26 bytes.
#line 1 "ENTRY_10408a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10408a90(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
  }
  thunk_FUN_1012cdb0(puVar1,param_1[4]);
  return;
}


// Reference entry 10408dd0; body size 31 bytes.
#line 1 "ENTRY_10408dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10408dd0(undefined4 *param_1)

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


// Reference entry 10408e20; body size 49 bytes.
#line 1 "ENTRY_10408e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10408e20(uint param_2)
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


// Reference entry 10408ef0; body size 14 bytes.
#line 1 "ENTRY_10408ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10408ef0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x5555555) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10408f10; body size 3 bytes.
#line 1 "ENTRY_10408f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10408f10(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10408f20; body size 24 bytes.
#line 1 "ENTRY_10408f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10408f20(int param_1, int param_2, unsigned int recovered_unused_stack_0)

{
  if (param_1 != param_2) {
    thunk_FUN_1012d130(param_1,param_2 - param_1);
  }
  return;
}


// Reference entry 10408f40; body size 26 bytes.
#line 1 "ENTRY_10408f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10408f40(undefined4 *param_1, unsigned int recovered_unused_stack_0)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
  }
  thunk_FUN_1012d130(puVar1,param_1[4]);
  return;
}


// Reference entry 10408f80; body size 130 bytes.
#line 1 "ENTRY_10408f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10408f80(byte *param_2)
{
  byte *param_1 = (byte *)this;
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  
  pbVar4 = (byte *)(param_2);
  if (0xf < *(uint *)(param_2 + 0x14)) {
    pbVar4 = (byte *)(*(byte **)param_2);
  }
  pbVar3 = (byte *)(param_1);
  if (0xf < *(uint *)(param_1 + 0x14)) {
    pbVar3 = (byte *)(*(byte **)param_1);
  }
  uVar1 = (uint)(*(uint *)(param_1 + 0x10));
  if ((uint)(uVar1) != *(uint *)(param_2 + 0x10)) goto LAB_10408ffc;
  while (uVar2 = (uint)(uVar1 - 4), 3 < uVar1) {
    if (*(int *)(pbVar3) != *(int *)(pbVar4)) goto LAB_10408fbc;
    pbVar3 = (byte *)(pbVar3 + 4);
    pbVar4 = (byte *)(pbVar4 + 4);
    uVar1 = (uint)(uVar2);
  }
  if (uVar2 == 0xfffffffc) {
LAB_10408ff0:
    param_2 = (byte *)((byte *)0x0);
  }
  else {
LAB_10408fbc:
    bVar5 = (bool)(*pbVar3 < (byte)(*(pbVar4)));
    if ((*pbVar3 == (byte)(*(pbVar4))) &&
       ((uVar2 == 0xfffffffd ||
        ((bVar5 = (bool)(pbVar3[1] < pbVar4[1]), pbVar3[1] == pbVar4[1] &&
         ((uVar2 == 0xfffffffe ||
          ((bVar5 = (bool)(pbVar3[2] < pbVar4[2]), pbVar3[2] == pbVar4[2] &&
           ((uVar2 == 0xffffffff || (bVar5 = (bool)(pbVar3[3] < pbVar4[3]), pbVar3[3] == pbVar4[3])))))))))) )) goto LAB_10408ff0;
    param_2 = (byte *)((byte *)(-(uint)bVar5 | 1));
  }
  if ((byte *)(param_2) == (byte *)(0x0)) {
    return (uint)(1);
  }
LAB_10408ffc:
  return (bool)0;
}


// Reference entry 10409030; body size 5 bytes.
#line 1 "ENTRY_10409030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10409030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409040; body size 3 bytes.
#line 1 "ENTRY_10409040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409050; body size 3 bytes.
#line 1 "ENTRY_10409050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409060; body size 3 bytes.
#line 1 "ENTRY_10409060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409070; body size 3 bytes.
#line 1 "ENTRY_10409070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409080; body size 3 bytes.
#line 1 "ENTRY_10409080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409090; body size 3 bytes.
#line 1 "ENTRY_10409090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104090a0; body size 3 bytes.
#line 1 "ENTRY_104090a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104090a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104090b0; body size 3 bytes.
#line 1 "ENTRY_104090b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104090b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104090c0; body size 3 bytes.
#line 1 "ENTRY_104090c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104090c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104090d0; body size 3 bytes.
#line 1 "ENTRY_104090d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104090d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104090e0; body size 3 bytes.
#line 1 "ENTRY_104090e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104090e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104090f0; body size 3 bytes.
#line 1 "ENTRY_104090f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104090f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409100; body size 3 bytes.
#line 1 "ENTRY_10409100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409110; body size 3 bytes.
#line 1 "ENTRY_10409110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409120; body size 3 bytes.
#line 1 "ENTRY_10409120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409130; body size 3 bytes.
#line 1 "ENTRY_10409130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409140; body size 3 bytes.
#line 1 "ENTRY_10409140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409150; body size 15 bytes.
#line 1 "ENTRY_10409150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10409150(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 10409170; body size 15 bytes.
#line 1 "ENTRY_10409170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10409170(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 10409190; body size 3 bytes.
#line 1 "ENTRY_10409190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10409190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10409630; body size 79 bytes.
#line 1 "ENTRY_10409630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409630(int param_2)
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


// Reference entry 104096a0; body size 4 bytes.
#line 1 "ENTRY_104096a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104096a0(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 104096b0; body size 4 bytes.
#line 1 "ENTRY_104096b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104096b0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 104096c0; body size 31 bytes.
#line 1 "ENTRY_104096c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_104096c0(int *param_1)

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


// Reference entry 10409780; body size 4 bytes.
#line 1 "ENTRY_10409780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10409780(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 10409790; body size 4 bytes.
#line 1 "ENTRY_10409790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10409790(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 104097a0; body size 4 bytes.
#line 1 "ENTRY_104097a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104097a0(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 104097b0; body size 3 bytes.
#line 1 "ENTRY_104097b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104097b0(void)

{
  return;
}


// Reference entry 104097c0; body size 3 bytes.
#line 1 "ENTRY_104097c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104097c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104097d0; body size 3 bytes.
#line 1 "ENTRY_104097d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104097d0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104097e0; body size 11 bytes.
#line 1 "ENTRY_104097e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104097e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104097f0; body size 6 bytes.
#line 1 "ENTRY_104097f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104097f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10409800; body size 83 bytes.
#line 1 "ENTRY_10409800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409800(int *param_2)
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


// Reference entry 10409ae0; body size 24 bytes.
#line 1 "ENTRY_10409ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409ae0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10406980(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10409b00; body size 24 bytes.
#line 1 "ENTRY_10409b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409b00(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10406980(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10409b20; body size 18 bytes.
#line 1 "ENTRY_10409b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409b20(int *param_2)
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


// Reference entry 10409be0; body size 87 bytes.
#line 1 "ENTRY_10409be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10409be0(uint param_1)

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


// Reference entry 10409c50; body size 90 bytes.
#line 1 "ENTRY_10409c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10409c50(uint param_1)

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


// Reference entry 10409d40; body size 26 bytes.
#line 1 "ENTRY_10409d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10409d40(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
  }
  thunk_FUN_1012cdb0(puVar1,param_1[4]);
  return;
}


// Reference entry 10409e70; body size 40 bytes.
#line 1 "ENTRY_10409e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409e70(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  *(undefined4*)(param_1 + 0x44) = (undefined4)(0);
  if ((undefined4 *)((param_1 + 0x1c)) != (undefined4 *)(param_2)) {
    puVar1 = (undefined4 *)(param_2);
    if (0xf < (uint)param_2[5]) {
      puVar1 = (undefined4 *)((undefined4 *)*param_2);
    }
    thunk_FUN_1012d130(puVar1,param_2[4]);
  }
  return;
}


// Reference entry 10409eb0; body size 21 bytes.
#line 1 "ENTRY_10409eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409eb0(undefined8 param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x44) = (undefined4)(1);
  *(undefined8*)(param_1 + 0x38) = (undefined8)(param_2);
  return;
}


// Reference entry 10409ed0; body size 17 bytes.
#line 1 "ENTRY_10409ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409ed0(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x44) = (undefined4)(2);
  *(undefined1*)(param_1 + 0x40) = (undefined1)(param_2);
  return;
}


// Reference entry 10409f30; body size 13 bytes.
#line 1 "ENTRY_10409f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409f30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10409f40; body size 13 bytes.
#line 1 "ENTRY_10409f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409f40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10409f50; body size 13 bytes.
#line 1 "ENTRY_10409f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409f50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10409f60; body size 11 bytes.
#line 1 "ENTRY_10409f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409f60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10409f70; body size 11 bytes.
#line 1 "ENTRY_10409f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10409f70(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10409f80; body size 9 bytes.
#line 1 "ENTRY_10409f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10409f80(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10409f90; body size 25 bytes.
#line 1 "ENTRY_10409f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10409f90(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_10405f90(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10409fb0; body size 37 bytes.
#line 1 "ENTRY_10409fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10409fb0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  thunk_FUN_10406570(param_1 + 0x14,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  *(undefined4*)(param_1 + 0x18) = (undefined4)(0);
  return;
}


// Reference entry 1040a030; body size 57 bytes.
#line 1 "ENTRY_1040a030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1040a030(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 1040a080; body size 61 bytes.
#line 1 "ENTRY_1040a080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1040a080(int param_1,int param_2)

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


// Reference entry 1040a0d0; body size 60 bytes.
#line 1 "ENTRY_1040a0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1040a0d0(int param_1,int param_2)

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


// Reference entry 1040a170; body size 9 bytes.
#line 1 "ENTRY_1040a170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1040a170(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1040a1b0; body size 8 bytes.
#line 1 "ENTRY_1040a1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1040a1b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 1040a1c0; body size 8 bytes.
#line 1 "ENTRY_1040a1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1040a1c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 1040a1d0; body size 11 bytes.
#line 1 "ENTRY_1040a1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1040a1d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1040a1e0; body size 11 bytes.
#line 1 "ENTRY_1040a1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1040a1e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1040a1f0; body size 11 bytes.
#line 1 "ENTRY_1040a1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1040a1f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1040a200; body size 12 bytes.
#line 1 "ENTRY_1040a200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1040a200(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1040a210; body size 12 bytes.
#line 1 "ENTRY_1040a210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1040a210(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1040a5d0; body size 13 bytes.
#line 1 "ENTRY_1040a5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_1040a5d0(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 1040b9c0; body size 8 bytes.
#line 1 "ENTRY_1040b9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1040b9c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x44) == 5);
}


// Reference entry 1040b9d0; body size 8 bytes.
#line 1 "ENTRY_1040b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1040b9d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x44) == 4);
}


// Reference entry 1040bdb0; body size 6 bytes.
#line 1 "ENTRY_1040bdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1040bdb0(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 1040bdc0; body size 6 bytes.
#line 1 "ENTRY_1040bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1040bdc0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1040bdd0; body size 6 bytes.
#line 1 "ENTRY_1040bdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1040bdd0(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 1040bde0; body size 6 bytes.
#line 1 "ENTRY_1040bde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1040bde0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1040bdf0; body size 6 bytes.
#line 1 "ENTRY_1040bdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1040bdf0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1040be00; body size 26 bytes.
#line 1 "ENTRY_1040be00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1040be00(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_1040dfb0<>(param_2,param_3);
  return (undefined4)(0);
}


// Reference entry 1040c370; body size 5 bytes.
#line 1 "ENTRY_1040c370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1040c370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1040c380; body size 5 bytes.
#line 1 "ENTRY_1040c380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1040c380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1040c390; body size 5 bytes.
#line 1 "ENTRY_1040c390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1040c390(int param_1)

{
 try {
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar3 = (uint)(DAT_12126b84);

  iVar4 = (int)(*(int *)(param_1 + 0x10));
  uVar5 = (uint)(*(int *)(param_1 + 0xc) + -1 + iVar4);
  uVar6 = (uint)(uVar5 & 1);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & uVar5 >> 1) * 4));
  piVar2 = (int *)(*(int **)(iVar1 + 4 + uVar6 * 8), 0);

  if ((int *)(piVar2) != (int *)(0x0)) {
    *(undefined4*)(iVar1 + uVar6 * 8) = (undefined4)(0);
    *(undefined4*)(iVar1 + 4 + uVar6 * 8) = (undefined4)(0);
    (**(code **)(*piVar2 + 8))(uVar3);
    iVar4 = (int)(*(int *)(param_1 + 0x10));
  }
  *(int*)(param_1 + 0x10) = (int)(iVar4 + -1);
  if (iVar4 + -1 == 0) {
    *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 1040c5a0; body size 3 bytes.
#line 1 "ENTRY_1040c5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1040c5a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1040cce0; body size 28 bytes.
#line 1 "ENTRY_1040cce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1040cce0(undefined4 *param_1)

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


// Reference entry 1040cd10; body size 20 bytes.
#line 1 "ENTRY_1040cd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1040cd10(int *param_1)

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


// Reference entry 1040cd30; body size 10 bytes.
#line 1 "ENTRY_1040cd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1040cd30(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 1040cd40; body size 4 bytes.
#line 1 "ENTRY_1040cd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1040cd40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1040cd50; body size 9 bytes.
#line 1 "ENTRY_1040cd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1040cd50(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 1040cd60; body size 9 bytes.
#line 1 "ENTRY_1040cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1040cd60(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 1040e550; body size 29 bytes.
#line 1 "ENTRY_1040e550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  __stdcall FUN_1040e550(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar1 = (undefined4 *)((undefined4 *)*param_1);
  }
  thunk_FUN_1012cdb0(puVar1,param_1[4]);
  return (undefined4 *)(param_1);
}


// Reference entry 1040e580; body size 22 bytes.
#line 1 "ENTRY_1040e580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1040e580(undefined8 param_1, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_11243d20(param_1);
  return;
}


// Reference entry 1040e5a0; body size 26 bytes.
#line 1 "ENTRY_1040e5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1040e5a0(undefined4 param_1, undefined8 param_2, unsigned int recovered_unused_stack_0)

{
  thunk_FUN_11244550<>(param_1,param_2);
  return;
}


// Reference entry 1040f200; body size 27 bytes.
#line 1 "ENTRY_1040f200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1040f200(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11244ac0(param_1);
  thunk_FUN_1040e5c0<>(param_2);
  return;
}


// Reference entry 1040f230; body size 27 bytes.
#line 1 "ENTRY_1040f230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1040f230(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11244ac0(param_1);
  thunk_FUN_1040ed00<>(param_2);
  return;
}


// Reference entry 1040f260; body size 27 bytes.
#line 1 "ENTRY_1040f260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1040f260(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_11244ac0(param_1);
  thunk_FUN_1040f100(param_2);
  return;
}


// Reference entry 1040f300; body size 22 bytes.
#line 1 "ENTRY_1040f300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1040f300(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1040f480; body size 18 bytes.
#line 1 "ENTRY_1040f480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1040f480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1040f4a0; body size 25 bytes.
#line 1 "ENTRY_1040f4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1040f4a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1040f4c0; body size 25 bytes.
#line 1 "ENTRY_1040f4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1040f4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1040f4e0; body size 46 bytes.
#line 1 "ENTRY_1040f4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1040f4e0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1040f520; body size 22 bytes.
#line 1 "ENTRY_1040f520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1040f520(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1040f540; body size 5 bytes.
#line 1 "ENTRY_1040f540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1040f540(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1040f550; body size 5 bytes.
#line 1 "ENTRY_1040f550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1040f550(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1040f770; body size 33 bytes.
#line 1 "ENTRY_1040f770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1040f770(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 1040f7a0; body size 48 bytes.
#line 1 "ENTRY_1040f7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1040f7a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  SCStr *param_1 = (SCStr *)this;
  ((SCStr *)(param_1))->m_op_ctor((SCStr *)*param_2);
  *(undefined8*)(param_1 + 4) = (undefined8)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (SCStr *)(param_1);
}


// Reference entry 1040f940; body size 12 bytes.
#line 1 "ENTRY_1040f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1040f940(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1040f950; body size 3 bytes.
#line 1 "ENTRY_1040f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1040f950(void)

{
  return;
}


// Reference entry 1040f9d0; body size 13 bytes.
#line 1 "ENTRY_1040f9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1040f9d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1040f9e0; body size 13 bytes.
#line 1 "ENTRY_1040f9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1040f9e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1040f9f0; body size 13 bytes.
#line 1 "ENTRY_1040f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1040f9f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1040fa00; body size 3 bytes.
#line 1 "ENTRY_1040fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1040fa00(void)

{
  return;
}


// Reference entry 1040fa10; body size 3 bytes.
#line 1 "ENTRY_1040fa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1040fa10(void)

{
  return;
}


// Reference entry 1040fa20; body size 39 bytes.
#line 1 "ENTRY_1040fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1040fa20(undefined4 *param_2)
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


// Reference entry 1040fa50; body size 18 bytes.
#line 1 "ENTRY_1040fa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1040fa50(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 1040fa70; body size 39 bytes.
#line 1 "ENTRY_1040fa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1040fa70(undefined4 *param_2)
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


// Reference entry 1040faa0; body size 39 bytes.
#line 1 "ENTRY_1040faa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1040faa0(undefined4 *param_2)
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


// Reference entry 1040ff50; body size 15 bytes.
#line 1 "ENTRY_1040ff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1040ff50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10410020; body size 7 bytes.
#line 1 "ENTRY_10410020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10410030; body size 7 bytes.
#line 1 "ENTRY_10410030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410030(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104101d0; body size 5 bytes.
#line 1 "ENTRY_104101d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104101d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104106b0; body size 5 bytes.
#line 1 "ENTRY_104106b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104106b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104106c0; body size 5 bytes.
#line 1 "ENTRY_104106c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104106c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104106f0; body size 5 bytes.
#line 1 "ENTRY_104106f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104106f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410700; body size 5 bytes.
#line 1 "ENTRY_10410700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410710; body size 5 bytes.
#line 1 "ENTRY_10410710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410720; body size 5 bytes.
#line 1 "ENTRY_10410720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410730; body size 5 bytes.
#line 1 "ENTRY_10410730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410740; body size 35 bytes.
#line 1 "ENTRY_10410740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10410740(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined8*)(param_2 + 4) = (undefined8)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10410770; body size 28 bytes.
#line 1 "ENTRY_10410770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10410770(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104107a0; body size 28 bytes.
#line 1 "ENTRY_104107a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104107a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104107d0; body size 28 bytes.
#line 1 "ENTRY_104107d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104107d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 104108f0; body size 15 bytes.
#line 1 "ENTRY_104108f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104108f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10410910; body size 15 bytes.
#line 1 "ENTRY_10410910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10410a00; body size 5 bytes.
#line 1 "ENTRY_10410a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410a10; body size 5 bytes.
#line 1 "ENTRY_10410a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410a20; body size 5 bytes.
#line 1 "ENTRY_10410a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410a50; body size 5 bytes.
#line 1 "ENTRY_10410a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410a60; body size 5 bytes.
#line 1 "ENTRY_10410a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410a70; body size 5 bytes.
#line 1 "ENTRY_10410a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410a80; body size 5 bytes.
#line 1 "ENTRY_10410a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410a90; body size 5 bytes.
#line 1 "ENTRY_10410a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410aa0; body size 5 bytes.
#line 1 "ENTRY_10410aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410ad0; body size 5 bytes.
#line 1 "ENTRY_10410ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410ae0; body size 5 bytes.
#line 1 "ENTRY_10410ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410af0; body size 6 bytes.
#line 1 "ENTRY_10410af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10410af0(void)

{
  return (char *)("SCIFeatureManager");
}


// Reference entry 10410b90; body size 5 bytes.
#line 1 "ENTRY_10410b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410ba0; body size 5 bytes.
#line 1 "ENTRY_10410ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10410ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10410bb0; body size 30 bytes.
#line 1 "ENTRY_10410bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10410bb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10411040; body size 27 bytes.
#line 1 "ENTRY_10411040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10411040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 104110b0; body size 32 bytes.
#line 1 "ENTRY_104110b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104110b0(undefined4 *param_2)
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


// Reference entry 10411100; body size 18 bytes.
#line 1 "ENTRY_10411100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10411100(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10411120; body size 3 bytes.
#line 1 "ENTRY_10411120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10411120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10411130; body size 10 bytes.
#line 1 "ENTRY_10411130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10411130(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10411210; body size 11 bytes.
#line 1 "ENTRY_10411210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10411210(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10411220; body size 11 bytes.
#line 1 "ENTRY_10411220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10411220(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10411230; body size 11 bytes.
#line 1 "ENTRY_10411230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10411230(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10411240; body size 11 bytes.
#line 1 "ENTRY_10411240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10411240(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10411250; body size 16 bytes.
#line 1 "ENTRY_10411250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10411250(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10411270; body size 13 bytes.
#line 1 "ENTRY_10411270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10411270(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10411280; body size 14 bytes.
#line 1 "ENTRY_10411280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10411280(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104112a0; body size 21 bytes.
#line 1 "ENTRY_104112a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104112a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104112c0; body size 25 bytes.
#line 1 "ENTRY_104112c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104112c0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 104112e0; body size 23 bytes.
#line 1 "ENTRY_104112e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104112e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10411300; body size 3 bytes.
#line 1 "ENTRY_10411300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10411300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10411580; body size 49 bytes.
#line 1 "ENTRY_10411580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10411580(undefined4 *param_2)
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


// Reference entry 104115c0; body size 42 bytes.
#line 1 "ENTRY_104115c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104115c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSubscriptionImpl_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10411750; body size 9 bytes.
#line 1 "ENTRY_10411750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10411750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIFeatureManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10411760; body size 9 bytes.
#line 1 "ENTRY_10411760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10411760(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjSysListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10411770; body size 11 bytes.
#line 1 "ENTRY_10411770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10411770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10411c70; body size 3 bytes.
#line 1 "ENTRY_10411c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10411c70(void)

{
  return;
}


// Reference entry 10411d90; body size 5 bytes.
#line 1 "ENTRY_10411d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10411d90(int param_1)

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
  thunk_FUN_1040fe70(puVar4,*puVar4);
  thunk_FUN_1148a50e(*puVar4,0x14);
  return;
}


// Reference entry 10411da0; body size 19 bytes.
#line 1 "ENTRY_10411da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10411da0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10411eb0; body size 7 bytes.
#line 1 "ENTRY_10411eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10411eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10411f70; body size 14 bytes.
#line 1 "ENTRY_10411f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10411f70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10411f90; body size 14 bytes.
#line 1 "ENTRY_10411f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10411f90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10411fb0; body size 14 bytes.
#line 1 "ENTRY_10411fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10411fb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10411fd0; body size 14 bytes.
#line 1 "ENTRY_10411fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10411fd0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10412020; body size 3 bytes.
#line 1 "ENTRY_10412020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10412030; body size 3 bytes.
#line 1 "ENTRY_10412030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412030(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10412040; body size 8 bytes.
#line 1 "ENTRY_10412040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10412040(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10412050; body size 6 bytes.
#line 1 "ENTRY_10412050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10412050(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10412060; body size 6 bytes.
#line 1 "ENTRY_10412060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10412060(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10412070; body size 6 bytes.
#line 1 "ENTRY_10412070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10412070(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10412080; body size 6 bytes.
#line 1 "ENTRY_10412080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10412080(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10412090; body size 6 bytes.
#line 1 "ENTRY_10412090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10412090(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 104120a0; body size 9 bytes.
#line 1 "ENTRY_104120a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104120a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104120b0; body size 9 bytes.
#line 1 "ENTRY_104120b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104120b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 104120c0; body size 10 bytes.
#line 1 "ENTRY_104120c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_104120c0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10412140; body size 17 bytes.
#line 1 "ENTRY_10412140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10412140(int param_1)

{
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x24) + 8))();
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10412160; body size 29 bytes.
#line 1 "ENTRY_10412160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10412160(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 10412640; body size 6 bytes.
#line 1 "ENTRY_10412640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10412640(void)

{
  return (char *)("SCFeatureManager");
}


// Reference entry 10412650; body size 22 bytes.
#line 1 "ENTRY_10412650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10412650(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 104127b0; body size 49 bytes.
#line 1 "ENTRY_104127b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_104127b0(uint param_2)
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


// Reference entry 10412880; body size 20 bytes.
#line 1 "ENTRY_10412880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10412880(int param_1)

{
  if (*(int *)(param_1 + 8) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 104128a0; body size 66 bytes.
#line 1 "ENTRY_104128a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104128a0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10412bc0; body size 8 bytes.
#line 1 "ENTRY_10412bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10412bc0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10412e10; body size 3 bytes.
#line 1 "ENTRY_10412e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10412e20; body size 3 bytes.
#line 1 "ENTRY_10412e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10412e30; body size 3 bytes.
#line 1 "ENTRY_10412e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10412e40; body size 3 bytes.
#line 1 "ENTRY_10412e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10412e50; body size 3 bytes.
#line 1 "ENTRY_10412e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10412e60; body size 3 bytes.
#line 1 "ENTRY_10412e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412e60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10412e70; body size 3 bytes.
#line 1 "ENTRY_10412e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10412e80; body size 3 bytes.
#line 1 "ENTRY_10412e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10412e90; body size 4 bytes.
#line 1 "ENTRY_10412e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412e90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10412ea0; body size 92 bytes.
#line 1 "ENTRY_10412ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10412ea0(uint param_2,int param_3,int *param_4)
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


// Reference entry 10412f20; body size 7 bytes.
#line 1 "ENTRY_10412f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10412f20(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10412f30; body size 13 bytes.
#line 1 "ENTRY_10412f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10412f30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10412f40; body size 3 bytes.
#line 1 "ENTRY_10412f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412f40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10412f50; body size 3 bytes.
#line 1 "ENTRY_10412f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10412f50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10413000; body size 3 bytes.
#line 1 "ENTRY_10413000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10413000(void)

{
  return;
}


// Reference entry 10413010; body size 3 bytes.
#line 1 "ENTRY_10413010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10413010(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 104130d0; body size 11 bytes.
#line 1 "ENTRY_104130d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104130d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 104130e0; body size 6 bytes.
#line 1 "ENTRY_104130e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104130e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 104130f0; body size 6 bytes.
#line 1 "ENTRY_104130f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104130f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10413100; body size 26 bytes.
#line 1 "ENTRY_10413100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10413100(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10413120; body size 26 bytes.
#line 1 "ENTRY_10413120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10413120(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10413140; body size 76 bytes.
#line 1 "ENTRY_10413140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10413140(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_2[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    if ((int *)(piVar1) == (int *)(param_2)) {
      uVar2 = (undefined4)((*(code ***)piVar1)[1](param_1), 0);
      *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar2);
      piVar1 = (int *)((int *)param_2[9]);
      if ((int *)(piVar1) != (int *)(0x0)) {
        (*(code ***)piVar1)[4]((int *)(piVar1) != (int *)(param_2));
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


// Reference entry 104131a0; body size 10 bytes.
#line 1 "ENTRY_104131a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104131a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10413470; body size 14 bytes.
#line 1 "ENTRY_10413470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10413470(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10413490; body size 13 bytes.
#line 1 "ENTRY_10413490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10413490(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 104134a0; body size 12 bytes.
#line 1 "ENTRY_104134a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104134a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104134b0; body size 11 bytes.
#line 1 "ENTRY_104134b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104134b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104134c0; body size 43 bytes.
#line 1 "ENTRY_104134c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104134c0(int param_1,int param_2,int param_3)

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


// Reference entry 10413520; body size 90 bytes.
#line 1 "ENTRY_10413520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10413520(uint param_1)

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


// Reference entry 104135a0; body size 87 bytes.
#line 1 "ENTRY_104135a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_104135a0(uint param_1)

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


// Reference entry 10413610; body size 87 bytes.
#line 1 "ENTRY_10413610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10413610(uint param_1)

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


// Reference entry 104136a0; body size 4 bytes.
#line 1 "ENTRY_104136a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104136a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 104136b0; body size 9 bytes.
#line 1 "ENTRY_104136b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104136b0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 104136c0; body size 68 bytes.
#line 1 "ENTRY_104136c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104136c0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    thunk_FUN_1040fe70(piVar1,*(undefined4 *)(param_1 + 4));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10410930(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10413770; body size 57 bytes.
#line 1 "ENTRY_10413770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10413770(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 104137c0; body size 60 bytes.
#line 1 "ENTRY_104137c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_104137c0(int param_1,int param_2)

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


// Reference entry 10413810; body size 61 bytes.
#line 1 "ENTRY_10413810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10413810(int param_1,int param_2)

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


// Reference entry 10413860; body size 32 bytes.
#line 1 "ENTRY_10413860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10413860(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if (*(int **)(param_1 + 0x3c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x3c) + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 104138c0; body size 12 bytes.
#line 1 "ENTRY_104138c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104138c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 104138d0; body size 11 bytes.
#line 1 "ENTRY_104138d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104138d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104138e0; body size 23 bytes.
#line 1 "ENTRY_104138e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_104138e0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_10413a80(param_1,param_2), 0);
  return (bool)(iVar1 != 0);
}


// Reference entry 10413b30; body size 280 bytes.
#line 1 "ENTRY_10413b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10413b30(SCStr *param_1,undefined4 *param_2,SCStr *param_3)

{
 try {
  char cVar1;
  undefined1 *puVar2;
  SCStr *pSVar3;
  undefined4 uVar4;
  undefined4 uStack_41c;
  void *pvStack_418;
  undefined1 *puStack_414;
  undefined4 uStack_410;
  char acStack_40c [1028];
  uint uStack_8;

  uStack_8 = (uint)(DAT_12126b84 ^ (uint)(uint)&acStack_40c);

  pSVar3 = (SCStr *)(param_1);
  memset((char *)&acStack_40c,0,0x401);
  ((SCStr *)(param_1))->m_op_ctor(param_3);
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }

  uVar4 = (undefined4)(1);
  cVar1 = (char)(thunk_FUN_1109f0a0(puVar2,(uint)&acStack_40c,0x401), 0);
  if ((cVar1 != '\0') && (acStack_40c[0] != '\0')) {
    ((SCStr *)((SCStr *)&uStack_41c))->int_allocRep((uint)&acStack_40c);

    if ((SCStr *)(&uStack_41c) != (SCStr *)((param_1))) {
      ((SCStr *)(param_1))->int_release();
      *(undefined4*)param_1 = (undefined4)((SCStr *)(uStack_41c));
      ((SCStr *)(param_1))->int_addref();
    }

    ((SCStr *)((SCStr *)&uStack_41c))->int_release();
  }

  thunk_FUN_1148ac28(pSVar3,uVar4);
  return;

 } catch (...) { }
}


// Reference entry 10413f90; body size 6 bytes.
#line 1 "ENTRY_10413f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10413f90(void)

{
  return (char *)("SCIFeatureManager");
}


// Reference entry 10414340; body size 4 bytes.
#line 1 "ENTRY_10414340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10414340(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x31));
}


// Reference entry 10414350; body size 5 bytes.
#line 1 "ENTRY_10414350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __stdcall FUN_10414350(unsigned int recovered_unused_stack_0)

{
  return (undefined1)(0);
}


// Reference entry 10414360; body size 5 bytes.
#line 1 "ENTRY_10414360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __stdcall FUN_10414360(unsigned int recovered_unused_stack_0)

{
  return (undefined1)(0);
}


// Reference entry 10414be0; body size 3 bytes.
#line 1 "ENTRY_10414be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10414be0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10414bf0; body size 6 bytes.
#line 1 "ENTRY_10414bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10414bf0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10414c00; body size 6 bytes.
#line 1 "ENTRY_10414c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10414c00(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10414c10; body size 6 bytes.
#line 1 "ENTRY_10414c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10414c10(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10414c20; body size 6 bytes.
#line 1 "ENTRY_10414c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10414c20(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10414c30; body size 6 bytes.
#line 1 "ENTRY_10414c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10414c30(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10414c40; body size 6 bytes.
#line 1 "ENTRY_10414c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10414c40(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10414d90; body size 5 bytes.
#line 1 "ENTRY_10414d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10414d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10414da0; body size 3 bytes.
#line 1 "ENTRY_10414da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10414da0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10414db0; body size 3 bytes.
#line 1 "ENTRY_10414db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10414db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10414fb0; body size 28 bytes.
#line 1 "ENTRY_10414fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10414fb0(undefined4 *param_1)

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


// Reference entry 10415330; body size 9 bytes.
#line 1 "ENTRY_10415330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10415330(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10415ed0; body size 91 bytes.
#line 1 "ENTRY_10415ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10415ed0(int *param_2)
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


// Reference entry 10415f50; body size 26 bytes.
#line 1 "ENTRY_10415f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10415f50(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10415ff0; body size 26 bytes.
#line 1 "ENTRY_10415ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10415ff0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10416010; body size 26 bytes.
#line 1 "ENTRY_10416010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10416010(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10416030; body size 6 bytes.
#line 1 "ENTRY_10416030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10416030(void)

{
  return (char *)("SCISettingsMenuItem");
}


// Reference entry 10416040; body size 27 bytes.
#line 1 "ENTRY_10416040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10416040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10416070; body size 16 bytes.
#line 1 "ENTRY_10416070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10416070(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10416090; body size 32 bytes.
#line 1 "ENTRY_10416090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10416090(undefined4 *param_2)
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


// Reference entry 10416100; body size 16 bytes.
#line 1 "ENTRY_10416100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10416100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10416120; body size 16 bytes.
#line 1 "ENTRY_10416120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10416120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10416210; body size 9 bytes.
#line 1 "ENTRY_10416210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10416210(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISettingsMenuItem);
  return (undefined4 *)(param_1);
}


// Reference entry 10416220; body size 33 bytes.
#line 1 "ENTRY_10416220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10416220(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingDateValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 10416250; body size 33 bytes.
#line 1 "ENTRY_10416250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10416250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingTimeIntervalValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 10416280; body size 33 bytes.
#line 1 "ENTRY_10416280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10416280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingTimeValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 104162b0; body size 33 bytes.
#line 1 "ENTRY_104162b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104162b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 10416770; body size 33 bytes.
#line 1 "ENTRY_10416770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10416770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShowUnsupportedOSMessageDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 104167a0; body size 33 bytes.
#line 1 "ENTRY_104167a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104167a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCShowUpdateMessageDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10416a20; body size 7 bytes.
#line 1 "ENTRY_10416a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10416a20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10416a30; body size 19 bytes.
#line 1 "ENTRY_10416a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10416a30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10416a50; body size 19 bytes.
#line 1 "ENTRY_10416a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10416a50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10416a70; body size 19 bytes.
#line 1 "ENTRY_10416a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10416a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10416ec0; body size 19 bytes.
#line 1 "ENTRY_10416ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10416ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10416ee0; body size 19 bytes.
#line 1 "ENTRY_10416ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10416ee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10416fe0; body size 65 bytes.
#line 1 "ENTRY_10416fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10416fe0(int *param_2)
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


// Reference entry 10417120; body size 7 bytes.
#line 1 "ENTRY_10417120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10417120(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10417130; body size 7 bytes.
#line 1 "ENTRY_10417130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10417130(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10417140; body size 3 bytes.
#line 1 "ENTRY_10417140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10417140(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10417150; body size 7 bytes.
#line 1 "ENTRY_10417150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10417150(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10417160; body size 7 bytes.
#line 1 "ENTRY_10417160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10417160(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10417170; body size 7 bytes.
#line 1 "ENTRY_10417170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10417170(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10417180; body size 3 bytes.
#line 1 "ENTRY_10417180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10417180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10417190; body size 3 bytes.
#line 1 "ENTRY_10417190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10417190(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104171a0; body size 3 bytes.
#line 1 "ENTRY_104171a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104171a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104171b0; body size 3 bytes.
#line 1 "ENTRY_104171b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104171b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041cb60; body size 6 bytes.
#line 1 "ENTRY_1041cb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1041cb60(void)

{
  return (char *)("SCISettingsMenuItem");
}


// Reference entry 1041cca0; body size 3 bytes.
#line 1 "ENTRY_1041cca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041cca0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041ce50; body size 28 bytes.
#line 1 "ENTRY_1041ce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041ce50(undefined4 *param_1)

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


// Reference entry 1041ce80; body size 28 bytes.
#line 1 "ENTRY_1041ce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041ce80(undefined4 *param_1)

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


// Reference entry 1041ceb0; body size 28 bytes.
#line 1 "ENTRY_1041ceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041ceb0(undefined4 *param_1)

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


// Reference entry 1041da20; body size 26 bytes.
#line 1 "ENTRY_1041da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1041da20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1041da40; body size 26 bytes.
#line 1 "ENTRY_1041da40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1041da40(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1041da60; body size 26 bytes.
#line 1 "ENTRY_1041da60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1041da60(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1041da80; body size 26 bytes.
#line 1 "ENTRY_1041da80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1041da80(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1041e0d0; body size 39 bytes.
#line 1 "ENTRY_1041e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1041e0d0(undefined4 *param_2)
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


// Reference entry 1041e100; body size 7 bytes.
#line 1 "ENTRY_1041e100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1041e100(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041e450; body size 18 bytes.
#line 1 "ENTRY_1041e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1041e450(int *param_1,int param_2)

{
  *param_1 = (int)(*param_1 + param_2 * 8);
  return;
}


// Reference entry 1041e470; body size 12 bytes.
#line 1 "ENTRY_1041e470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1041e470(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 1041e510; body size 5 bytes.
#line 1 "ENTRY_1041e510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1041e510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1041e520; body size 5 bytes.
#line 1 "ENTRY_1041e520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1041e520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1041e530; body size 5 bytes.
#line 1 "ENTRY_1041e530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1041e530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1041e540; body size 5 bytes.
#line 1 "ENTRY_1041e540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1041e540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1041e8a0; body size 12 bytes.
#line 1 "ENTRY_1041e8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1041e8a0(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 8);
}


// Reference entry 1041ec40; body size 95 bytes.
#line 1 "ENTRY_1041ec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1041ec40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_106f7150(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1041ecc0; body size 95 bytes.
#line 1 "ENTRY_1041ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1041ecc0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_106fd7f0(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1041ed40; body size 95 bytes.
#line 1 "ENTRY_1041ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1041ed40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10702ba0(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1041edc0; body size 95 bytes.
#line 1 "ENTRY_1041edc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1041edc0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_107123b0(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 1041ef40; body size 16 bytes.
#line 1 "ENTRY_1041ef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1041ef40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1041ef60; body size 3 bytes.
#line 1 "ENTRY_1041ef60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ef60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1041ef70; body size 3 bytes.
#line 1 "ENTRY_1041ef70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ef70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1041ef80; body size 3 bytes.
#line 1 "ENTRY_1041ef80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ef80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1041ef90; body size 3 bytes.
#line 1 "ENTRY_1041ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ef90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1041efa0; body size 3 bytes.
#line 1 "ENTRY_1041efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041efa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1041efb0; body size 10 bytes.
#line 1 "ENTRY_1041efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1041efb0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1041efc0; body size 10 bytes.
#line 1 "ENTRY_1041efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1041efc0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1041efd0; body size 10 bytes.
#line 1 "ENTRY_1041efd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1041efd0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1041efe0; body size 10 bytes.
#line 1 "ENTRY_1041efe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1041efe0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1041f1f0; body size 18 bytes.
#line 1 "ENTRY_1041f1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1041f1f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1041f2a0; body size 33 bytes.
#line 1 "ENTRY_1041f2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1041f2a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCResetPasswordActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 1041f520; body size 33 bytes.
#line 1 "ENTRY_1041f520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1041f520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSignOutDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 1041f810; body size 53 bytes.
#line 1 "ENTRY_1041f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041f810(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0<>(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110<>(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0<>(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1041f860; body size 53 bytes.
#line 1 "ENTRY_1041f860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041f860(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0<>(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110<>(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0<>(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1041f8b0; body size 53 bytes.
#line 1 "ENTRY_1041f8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041f8b0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0<>(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110<>(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0<>(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1041f900; body size 53 bytes.
#line 1 "ENTRY_1041f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041f900(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0<>(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110<>(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0<>(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 1041fd20; body size 19 bytes.
#line 1 "ENTRY_1041fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041fd20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1041fe70; body size 25 bytes.
#line 1 "ENTRY_1041fe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041fe70(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEntitlement);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEntitlement);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEntitlement);

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


// Reference entry 1041fe90; body size 19 bytes.
#line 1 "ENTRY_1041fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1041fe90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1041feb0; body size 65 bytes.
#line 1 "ENTRY_1041feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1041feb0(int *param_2)
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


// Reference entry 1041ff10; body size 26 bytes.
#line 1 "ENTRY_1041ff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_1041ff10(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1041dbe0<>(param_2,param_3,param_2);
  return (undefined4)(param_1);
}


// Reference entry 1041ff30; body size 3 bytes.
#line 1 "ENTRY_1041ff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ff30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041ff40; body size 3 bytes.
#line 1 "ENTRY_1041ff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ff40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041ff50; body size 3 bytes.
#line 1 "ENTRY_1041ff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ff50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041ff60; body size 3 bytes.
#line 1 "ENTRY_1041ff60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ff60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041ff70; body size 3 bytes.
#line 1 "ENTRY_1041ff70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ff70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041ff80; body size 3 bytes.
#line 1 "ENTRY_1041ff80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ff80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041ff90; body size 3 bytes.
#line 1 "ENTRY_1041ff90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ff90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1041ffa0; body size 3 bytes.
#line 1 "ENTRY_1041ffa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1041ffa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104219d0; body size 25 bytes.
#line 1 "ENTRY_104219d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104219d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 104219f0; body size 25 bytes.
#line 1 "ENTRY_104219f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104219f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10421a10; body size 25 bytes.
#line 1 "ENTRY_10421a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10421a10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10421a30; body size 25 bytes.
#line 1 "ENTRY_10421a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10421a30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10422330; body size 129 bytes.
#line 1 "ENTRY_10422330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10422330(uint param_2)
{
  uint *param_1 = (uint *)this;
  void *pvVar1;
  uint uVar2;
  
  if (param_2 < 0x20000000) {
    param_2 = (uint)(param_2 * 8);
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


// Reference entry 104223e0; body size 277 bytes.
#line 1 "ENTRY_104223e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104223e0(uint param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (0x1fffffff < param_2) {
                    
    thunk_FUN_10413500();
  }
  uVar3 = (uint)(*param_1);
  uVar4 = (uint)((int)(param_1[2] - uVar3) >> 3);
  if (0x1fffffff - (uVar4 >> 1) < uVar4) {
    uVar4 = (uint)(0x1fffffff);
  }
  else {
    uVar4 = (uint)((uVar4 >> 1) + uVar4);
    if (uVar4 < param_2) {
      uVar4 = (uint)(param_2);
    }
  }
  if (uVar3 != 0) {
    thunk_FUN_10225d70(uVar3,param_1[1],param_1);
    uVar3 = (uint)(*param_1);
    uVar5 = (uint)(param_1[2] - uVar3 & 0xfffffff8);
    uVar1 = (uint)(uVar3);
    if (0xfff < uVar5) {
      uVar1 = (uint)(*(uint *)(uVar3 - 4));
      uVar5 = (uint)(uVar5 + 0x23);
      if (0x1f < (uVar3 - uVar1) - 4) goto LAB_104224b4;
    }
    thunk_FUN_1148a50e(uVar1,uVar5);
    *param_1 = (uint)(0);
    param_1[1] = (uint)(0);
    param_1[2] = (uint)(0);
  }
  if (uVar4 < 0x20000000) {
    uVar4 = (uint)(uVar4 * 8);
    if (uVar4 < 0x1000) {
      if (uVar4 == 0) {
        *param_1 = (uint)(0);
        param_1[1] = (uint)(0);
        param_1[2] = (uint)(0);
        return;
      }
      pvVar2 = (void *)(operator_new(uVar4), 0);
      *param_1 = (uint)((uint)pvVar2);
      param_1[1] = (uint)((uint)pvVar2);
      param_1[2] = (uint)((uint)((int)pvVar2 + uVar4));
      return;
    }
    if (uVar4 < uVar4 + 0x23) {
      pvVar2 = (char *)(operator_new(uVar4 + 0x23), 0);
      if ((void *)(pvVar2) != (void *)(0x0)) {
        uVar3 = (uint)((int)pvVar2 + 0x23U & 0xffffffe0);
        *(void**)(uVar3 - 4) = (void *)(pvVar2);
        *param_1 = (uint)(uVar3);
        param_1[1] = (uint)(uVar3);
        param_1[2] = (uint)(uVar3 + uVar4);
        return;
      }
LAB_104224b4:
                    
      _invalid_parameter_noinfo_noreturn();
    }
  }
                    
  thunk_FUN_1012a2a0();
}


// Reference entry 10422970; body size 8 bytes.
#line 1 "ENTRY_10422970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10422970(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10422980; body size 8 bytes.
#line 1 "ENTRY_10422980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10422980(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10422990; body size 8 bytes.
#line 1 "ENTRY_10422990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10422990(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 104229a0; body size 8 bytes.
#line 1 "ENTRY_104229a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104229a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10422a40; body size 4 bytes.
#line 1 "ENTRY_10422a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422a40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10422a50; body size 4 bytes.
#line 1 "ENTRY_10422a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422a50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10422a60; body size 4 bytes.
#line 1 "ENTRY_10422a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422a60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10422a70; body size 4 bytes.
#line 1 "ENTRY_10422a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422a70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10422a80; body size 7 bytes.
#line 1 "ENTRY_10422a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10422a80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10422a90; body size 7 bytes.
#line 1 "ENTRY_10422a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10422a90(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10422aa0; body size 7 bytes.
#line 1 "ENTRY_10422aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10422aa0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10422ab0; body size 7 bytes.
#line 1 "ENTRY_10422ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10422ab0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10422ba0; body size 26 bytes.
#line 1 "ENTRY_10422ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10422ba0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10422bc0; body size 26 bytes.
#line 1 "ENTRY_10422bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10422bc0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10422be0; body size 26 bytes.
#line 1 "ENTRY_10422be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10422be0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10422c00; body size 26 bytes.
#line 1 "ENTRY_10422c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10422c00(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10422c20; body size 10 bytes.
#line 1 "ENTRY_10422c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10422c20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10422c30; body size 10 bytes.
#line 1 "ENTRY_10422c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10422c30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10422c40; body size 10 bytes.
#line 1 "ENTRY_10422c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10422c40(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10422c50; body size 10 bytes.
#line 1 "ENTRY_10422c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10422c50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10422db0; body size 3 bytes.
#line 1 "ENTRY_10422db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10422dc0; body size 4 bytes.
#line 1 "ENTRY_10422dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422dc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10422dd0; body size 3 bytes.
#line 1 "ENTRY_10422dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422dd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10422ed0; body size 4 bytes.
#line 1 "ENTRY_10422ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422ed0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10422fb0; body size 5 bytes.
#line 1 "ENTRY_10422fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422fb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10422fc0; body size 5 bytes.
#line 1 "ENTRY_10422fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422fc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10422fd0; body size 5 bytes.
#line 1 "ENTRY_10422fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422fd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10422fe0; body size 5 bytes.
#line 1 "ENTRY_10422fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10422fe0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 104235b0; body size 7 bytes.
#line 1 "ENTRY_104235b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104235b0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10423890; body size 3 bytes.
#line 1 "ENTRY_10423890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10423890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104238a0; body size 3 bytes.
#line 1 "ENTRY_104238a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104238a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104238b0; body size 3 bytes.
#line 1 "ENTRY_104238b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104238b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104238c0; body size 3 bytes.
#line 1 "ENTRY_104238c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104238c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104239d0; body size 28 bytes.
#line 1 "ENTRY_104239d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104239d0(undefined4 *param_1)

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


// Reference entry 10423a00; body size 28 bytes.
#line 1 "ENTRY_10423a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10423a00(undefined4 *param_1)

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


// Reference entry 10423a30; body size 28 bytes.
#line 1 "ENTRY_10423a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10423a30(undefined4 *param_1)

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


// Reference entry 10423a60; body size 28 bytes.
#line 1 "ENTRY_10423a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10423a60(undefined4 *param_1)

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


// Reference entry 10423a90; body size 39 bytes.
#line 1 "ENTRY_10423a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10423a90(SCStr *param_2)
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


// Reference entry 10423ac0; body size 36 bytes.
#line 1 "ENTRY_10423ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10423ac0(SCStr *param_2)
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


// Reference entry 10423af0; body size 25 bytes.
#line 1 "ENTRY_10423af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10423af0(void)

{
  undefined **appuStack_2c [9];
  undefined1 *puStack_8;
  
  puStack_8 = (undefined1 *)((undefined1 *)(uint)&appuStack_2c);
  appuStack_2c[0] = (undefined **)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  thunk_FUN_101f1fa0();
  return;
}


// Reference entry 10425be0; body size 91 bytes.
#line 1 "ENTRY_10425be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10425be0(int *param_2)
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


// Reference entry 10425c60; body size 78 bytes.
#line 1 "ENTRY_10425c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10425c60(int *param_2)
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


// Reference entry 104260e0; body size 5 bytes.
#line 1 "ENTRY_104260e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104260e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10426130; body size 6 bytes.
#line 1 "ENTRY_10426130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10426130(void)

{
  return (char *)("SCIAlarm");
}


// Reference entry 104262c0; body size 32 bytes.
#line 1 "ENTRY_104262c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104262c0(undefined4 *param_2)
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


// Reference entry 10426350; body size 3 bytes.
#line 1 "ENTRY_10426350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10426350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10426360; body size 3 bytes.
#line 1 "ENTRY_10426360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10426360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10426370; body size 10 bytes.
#line 1 "ENTRY_10426370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10426370(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10426380; body size 49 bytes.
#line 1 "ENTRY_10426380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10426380(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  ((SCStr *)((SCStr *)(param_1 + 1)))->m_op_ctor((SCStr *)(param_2 + 1));
  param_1[2] = (undefined4)(param_2[2]);
  param_1[3] = (undefined4)(param_2[3]);
  return (undefined4 *)(param_1);
}


// Reference entry 10426560; body size 33 bytes.
#line 1 "ENTRY_10426560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10426560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingIntToPercentValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 10426590; body size 33 bytes.
#line 1 "ENTRY_10426590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10426590(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingRecurrenceValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1042a9b0; body size 19 bytes.
#line 1 "ENTRY_1042a9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1042a9b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1042a9d0; body size 19 bytes.
#line 1 "ENTRY_1042a9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1042a9d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1042b0c0; body size 65 bytes.
#line 1 "ENTRY_1042b0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1042b0c0(int *param_2)
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


// Reference entry 1042b120; body size 3 bytes.
#line 1 "ENTRY_1042b120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1042b120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1042b130; body size 7 bytes.
#line 1 "ENTRY_1042b130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1042b130(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1042b140; body size 7 bytes.
#line 1 "ENTRY_1042b140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1042b140(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1042b150; body size 3 bytes.
#line 1 "ENTRY_1042b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1042b150(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1042b160; body size 7 bytes.
#line 1 "ENTRY_1042b160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1042b160(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1042b170; body size 7 bytes.
#line 1 "ENTRY_1042b170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1042b170(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1042b180; body size 7 bytes.
#line 1 "ENTRY_1042b180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1042b180(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1042b190; body size 7 bytes.
#line 1 "ENTRY_1042b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1042b190(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1042b1a0; body size 3 bytes.
#line 1 "ENTRY_1042b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1042b1a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1042b1b0; body size 3 bytes.
#line 1 "ENTRY_1042b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1042b1b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1042b1c0; body size 3 bytes.
#line 1 "ENTRY_1042b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1042b1c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1042bbd0; body size 8 bytes.
#line 1 "ENTRY_1042bbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1042bbd0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1042bc20; body size 4 bytes.
#line 1 "ENTRY_1042bc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1042bc20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1042bc30; body size 7 bytes.
#line 1 "ENTRY_1042bc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1042bc30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1042bcc0; body size 10 bytes.
#line 1 "ENTRY_1042bcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1042bcc0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1042bfb0; body size 9 bytes.
#line 1 "ENTRY_1042bfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1042bfb0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1042da20; body size 6 bytes.
#line 1 "ENTRY_1042da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1042da20(void)

{
  return (char *)("SCIAlarm");
}


// Reference entry 10430420; body size 3 bytes.
#line 1 "ENTRY_10430420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10430420(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10430430; body size 3 bytes.
#line 1 "ENTRY_10430430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10430430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10430790; body size 28 bytes.
#line 1 "ENTRY_10430790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10430790(undefined4 *param_1)

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


// Reference entry 104307c0; body size 28 bytes.
#line 1 "ENTRY_104307c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104307c0(undefined4 *param_1)

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


// Reference entry 104307f0; body size 28 bytes.
#line 1 "ENTRY_104307f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104307f0(undefined4 *param_1)

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


// Reference entry 10430820; body size 20 bytes.
#line 1 "ENTRY_10430820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10430820(int *param_1)

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


// Reference entry 10432540; body size 18 bytes.
#line 1 "ENTRY_10432540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10432540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10432560; body size 34 bytes.
#line 1 "ENTRY_10432560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __thiscall Recovered_Bulk::m_FUN_10432560(undefined4 param_2,undefined2 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined2 *param_1 = (undefined2 *)this;
  *param_1 = (undefined2)(*param_3);
  *(undefined4*)(param_1 + 2) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined2 *)(param_1);
}


// Reference entry 10432590; body size 11 bytes.
#line 1 "ENTRY_10432590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10432590(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104325a0; body size 11 bytes.
#line 1 "ENTRY_104325a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104325a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104325b0; body size 22 bytes.
#line 1 "ENTRY_104325b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104325b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104325d0; body size 18 bytes.
#line 1 "ENTRY_104325d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104325d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104326b0; body size 22 bytes.
#line 1 "ENTRY_104326b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104326b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104326d0; body size 11 bytes.
#line 1 "ENTRY_104326d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104326d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 104326e0; body size 36 bytes.
#line 1 "ENTRY_104326e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __thiscall Recovered_Bulk::m_FUN_104326e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined2 *param_1 = (undefined2 *)this;
  *param_1 = (undefined2)(*(undefined2 *)*param_2);
  *(undefined4*)(param_1 + 2) = (undefined4)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined2 *)(param_1);
}


// Reference entry 10432710; body size 91 bytes.
#line 1 "ENTRY_10432710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10432710(int *param_2)
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


// Reference entry 10432af0; body size 26 bytes.
#line 1 "ENTRY_10432af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10432af0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10432e60; body size 25 bytes.
#line 1 "ENTRY_10432e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10432e60(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10432e80; body size 13 bytes.
#line 1 "ENTRY_10432e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10432e80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10432e90; body size 13 bytes.
#line 1 "ENTRY_10432e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10432e90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10432ea0; body size 3 bytes.
#line 1 "ENTRY_10432ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10432ea0(void)

{
  return;
}


// Reference entry 10432fb0; body size 75 bytes.
#line 1 "ENTRY_10432fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10432fb0(int *param_2,ushort *param_3)
{
  int *param_1 = (int *)this;
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar3 = (int)(*param_1);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar3 + 4), 0);
  *param_2 = (int)((int)puVar4);
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar3);
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar1 = (ushort)(*param_3);
    do {
      *param_2 = (int)((int)puVar4);
      uVar2 = (ushort)(*(ushort *)(puVar4 + 4));
      if (uVar1 <= uVar2) {
        param_2[2] = (int)((int)puVar4);
        puVar4 = (undefined4 *)((undefined4 *)*puVar4);
      }
      else {
        puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
      }
      param_2[1] = (int)((uint)(uVar1 <= uVar2));
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 10433010; body size 15 bytes.
#line 1 "ENTRY_10433010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10433010(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 104330b0; body size 5 bytes.
#line 1 "ENTRY_104330b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104330b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104330c0; body size 33 bytes.
#line 1 "ENTRY_104330c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_104330c0(int param_1,ushort *param_2)

{
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') &&
     (in_EAX = ((uint)((short)((uint)param_2 >> 0x10)) << 16 | (uint)(*param_2)), *(ushort *)(param_1 + 0x10) <= (ushort)(*param_2))) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10433240; body size 7 bytes.
#line 1 "ENTRY_10433240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10433250; body size 5 bytes.
#line 1 "ENTRY_10433250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10433260; body size 5 bytes.
#line 1 "ENTRY_10433260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10433270; body size 5 bytes.
#line 1 "ENTRY_10433270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10433280; body size 5 bytes.
#line 1 "ENTRY_10433280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10433290; body size 5 bytes.
#line 1 "ENTRY_10433290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104332d0; body size 31 bytes.
#line 1 "ENTRY_104332d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104332d0(undefined4 param_1,undefined2 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined2)(*(undefined2 *)*param_4);
  *(undefined4*)(param_2 + 2) = (undefined4)(0);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10433370; body size 15 bytes.
#line 1 "ENTRY_10433370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433370(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10433390; body size 15 bytes.
#line 1 "ENTRY_10433390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433390(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 104333b0; body size 5 bytes.
#line 1 "ENTRY_104333b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104333b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104333c0; body size 5 bytes.
#line 1 "ENTRY_104333c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104333c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104333d0; body size 5 bytes.
#line 1 "ENTRY_104333d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104333d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104333e0; body size 5 bytes.
#line 1 "ENTRY_104333e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104333e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104333f0; body size 5 bytes.
#line 1 "ENTRY_104333f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104333f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10433400; body size 5 bytes.
#line 1 "ENTRY_10433400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10433410; body size 11 bytes.
#line 1 "ENTRY_10433410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10433410(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10433420; body size 6 bytes.
#line 1 "ENTRY_10433420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10433420(void)

{
  return (char *)("SCILifecycleAppProvider");
}


// Reference entry 10433430; body size 18 bytes.
#line 1 "ENTRY_10433430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

ushort * FUN_10433430(ushort *param_1,ushort *param_2)

{
  if (*param_1 < (ushort)(*(param_2))) {
    param_1 = (ushort *)(param_2);
  }
  return (ushort *)(param_1);
}


// Reference entry 10433450; body size 18 bytes.
#line 1 "ENTRY_10433450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

ushort * FUN_10433450(ushort *param_1,ushort *param_2)

{
  if (*param_2 < (ushort)(*(param_1))) {
    param_1 = (ushort *)(param_2);
  }
  return (ushort *)(param_1);
}


// Reference entry 10433470; body size 5 bytes.
#line 1 "ENTRY_10433470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10433470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10433480; body size 16 bytes.
#line 1 "ENTRY_10433480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10433480(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104334a0; body size 32 bytes.
#line 1 "ENTRY_104334a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104334a0(undefined4 *param_2)
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


// Reference entry 104334d0; body size 16 bytes.
#line 1 "ENTRY_104334d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104334d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10433530; body size 18 bytes.
#line 1 "ENTRY_10433530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10433530(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10433590; body size 11 bytes.
#line 1 "ENTRY_10433590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10433590(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104335a0; body size 9 bytes.
#line 1 "ENTRY_104335a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104335a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104335b0; body size 11 bytes.
#line 1 "ENTRY_104335b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104335b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104335c0; body size 9 bytes.
#line 1 "ENTRY_104335c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104335c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10433650; body size 11 bytes.
#line 1 "ENTRY_10433650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10433650(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10433660; body size 9 bytes.
#line 1 "ENTRY_10433660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10433660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10433670; body size 16 bytes.
#line 1 "ENTRY_10433670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10433670(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10433690; body size 3 bytes.
#line 1 "ENTRY_10433690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10433690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104336a0; body size 52 bytes.
#line 1 "ENTRY_104336a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104336a0(undefined4 *param_1)

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


// Reference entry 104336f0; body size 13 bytes.
#line 1 "ENTRY_104336f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104336f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10433700; body size 42 bytes.
#line 1 "ENTRY_10433700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10433700(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleManager_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10433740; body size 18 bytes.
#line 1 "ENTRY_10433740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10433740(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1127d260(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10433760; body size 9 bytes.
#line 1 "ENTRY_10433760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10433760(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpdateManifestProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 10433cf0; body size 19 bytes.
#line 1 "ENTRY_10433cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10433cf0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10433db0; body size 19 bytes.
#line 1 "ENTRY_10433db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10433db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10434020; body size 65 bytes.
#line 1 "ENTRY_10434020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10434020(int *param_2)
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


// Reference entry 104340f0; body size 18 bytes.
#line 1 "ENTRY_104340f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_104340f0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1127e820(param_2);
  return (undefined4)(param_1);
}


// Reference entry 10434110; body size 14 bytes.
#line 1 "ENTRY_10434110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10434110(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10434130; body size 14 bytes.
#line 1 "ENTRY_10434130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10434130(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10434280; body size 3 bytes.
#line 1 "ENTRY_10434280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434280(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10434290; body size 7 bytes.
#line 1 "ENTRY_10434290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10434290(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104342a0; body size 7 bytes.
#line 1 "ENTRY_104342a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104342a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104342b0; body size 7 bytes.
#line 1 "ENTRY_104342b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104342b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104342c0; body size 3 bytes.
#line 1 "ENTRY_104342c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104342c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104342d0; body size 7 bytes.
#line 1 "ENTRY_104342d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104342d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104342e0; body size 3 bytes.
#line 1 "ENTRY_104342e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104342e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104342f0; body size 3 bytes.
#line 1 "ENTRY_104342f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104342f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10434300; body size 3 bytes.
#line 1 "ENTRY_10434300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10434310; body size 6 bytes.
#line 1 "ENTRY_10434310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10434310(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10434320; body size 6 bytes.
#line 1 "ENTRY_10434320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10434320(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10434330; body size 6 bytes.
#line 1 "ENTRY_10434330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10434330(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10434490; body size 20 bytes.
#line 1 "ENTRY_10434490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10434490(ushort *param_1,ushort *param_2)

{
  return (bool)(*param_1 < (ushort)(*(param_2)));
}


// Reference entry 104346b0; body size 31 bytes.
#line 1 "ENTRY_104346b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104346b0(undefined4 *param_1)

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


// Reference entry 10434700; body size 14 bytes.
#line 1 "ENTRY_10434700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10434700(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10434720; body size 3 bytes.
#line 1 "ENTRY_10434720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10434730; body size 3 bytes.
#line 1 "ENTRY_10434730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10434740; body size 3 bytes.
#line 1 "ENTRY_10434740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10434750; body size 3 bytes.
#line 1 "ENTRY_10434750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10434760; body size 3 bytes.
#line 1 "ENTRY_10434760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10434770; body size 3 bytes.
#line 1 "ENTRY_10434770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10434780; body size 3 bytes.
#line 1 "ENTRY_10434780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10434790; body size 3 bytes.
#line 1 "ENTRY_10434790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10434a30; body size 79 bytes.
#line 1 "ENTRY_10434a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10434a30(int param_2)
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


// Reference entry 10434aa0; body size 31 bytes.
#line 1 "ENTRY_10434aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10434aa0(int *param_1)

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


// Reference entry 10434ad0; body size 3 bytes.
#line 1 "ENTRY_10434ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10434ad0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10434ae0; body size 11 bytes.
#line 1 "ENTRY_10434ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10434ae0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10434af0; body size 83 bytes.
#line 1 "ENTRY_10434af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10434af0(int *param_2)
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


// Reference entry 10434be0; body size 97 bytes.
#line 1 "ENTRY_10434be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10434be0(uint param_1)

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


// Reference entry 10434d90; body size 13 bytes.
#line 1 "ENTRY_10434d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10434d90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10434da0; body size 24 bytes.
#line 1 "ENTRY_10434da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10434da0(int param_1)

{
  if ((*(char *)(param_1 + 0xd0c) != '\0') && (*(int *)(param_1 + 0x2cd18) != 0)) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 104357f0; body size 63 bytes.
#line 1 "ENTRY_104357f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_104357f0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10435840; body size 66 bytes.
#line 1 "ENTRY_10435840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10435840(int param_1,int param_2)

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


// Reference entry 104358a0; body size 9 bytes.
#line 1 "ENTRY_104358a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104358a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10436100; body size 11 bytes.
#line 1 "ENTRY_10436100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10436100(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 104365f0; body size 35 bytes.
#line 1 "ENTRY_104365f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_104365f0(undefined4 param_1,undefined4 param_2)

{
  undefined2 uVar1;
  
  uVar1 = (undefined2)(thunk_FUN_11272de0(), 0);
  thunk_FUN_10436400(param_1,uVar1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 10436940; body size 40 bytes.
#line 1 "ENTRY_10436940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10436940(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1127fa00(param_1,param_2);
  return;
}


// Reference entry 10436980; body size 7 bytes.
#line 1 "ENTRY_10436980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10436980(int param_1)

{
  return (int)(param_1 + 0x1b1c);
}


// Reference entry 10437130; body size 8 bytes.
#line 1 "ENTRY_10437130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10437130(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x2cd14));
}


// Reference entry 10437630; body size 6 bytes.
#line 1 "ENTRY_10437630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10437630(void)

{
  return (char *)("SCILifecycleAppProvider");
}


// Reference entry 10437640; body size 193 bytes.
#line 1 "ENTRY_10437640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10437640(undefined1 *param_1)

{
 try {
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puStack_e38;
  void *pvStack_e34;
  undefined1 *puStack_e30;
  undefined4 uStack_e2c;
  undefined1 auStack_e28 [3616];
  uint uStack_8;


  uVar1 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_e28);

  puStack_e38 = (undefined1 *)(param_1);
  uStack_8 = (uint)(uVar1);
  thunk_FUN_1127e450(param_1 + 0x59ab4);

  ((SCStr *)((SCStr *)&puStack_e38))->int_allocRep("<?xml version=\"1.0\"?>     <update_manifest>       <supported_models>         <model_list swgen=\"2\">3,4,8,9,10,11,12,13,14,17.3,17.5,20,21,22,23,24,25,26,27,28,29,30,32,33,34,35,36,37,38,40</model_list>         <model_list swgen=\"1\">1.3,1.16,2,3,4,5.0,6,7,8,9,10,11,12,13,14,16.2,16.3,16.4,16.5,17,20,21,22,23,24,25,26.1,28.1,29</model_list>       </supported_models>     </update_manifest>     <!-- SIGNATURE:0 -->\n");
  *(unsigned char*)((char *)&uStack_e2c + 0) = (unsigned char)(1);
  puVar3 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)(puStack_e38) != (undefined1 *)(0x0)) {
    puVar3 = (undefined1 *)(puStack_e38);
  }
  uVar2 = (uint)(((SCStr *)((SCStr *)&puStack_e38))->length(), 0);
  thunk_FUN_1127feb0(puVar3,uVar2);
  func_0x1007123d(0,uVar1);
  uStack_e2c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_e2c + 1)) << 8 | (uint)(2)));
  ((SCStr *)((SCStr *)&puStack_e38))->int_release();
  puStack_e38 = (undefined1 *)((undefined1 *)0x0);
  thunk_FUN_1127e620();

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10437940; body size 71 bytes.
#line 1 "ENTRY_10437940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10437940(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  char cVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 0x5a7c0) != '\0') {
    sVar2 = (short)(*(short *)(param_1 + 0x867ea) + -1);
    if (sVar2 == 0) {
      sVar2 = (short)(1);
    }
    cVar1 = (char)(thunk_FUN_112810c0(param_2,param_3,sVar2), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10437b70; body size 5 bytes.
#line 1 "ENTRY_10437b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10437b70(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 6));
}


// Reference entry 10437e20; body size 7 bytes.
#line 1 "ENTRY_10437e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10437e20(int param_1)

{
  return (int)(param_1 + 0x442);
}


// Reference entry 10437e30; body size 7 bytes.
#line 1 "ENTRY_10437e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10437e30(int param_1)

{
  return (int)(param_1 + 0x44a);
}


// Reference entry 10437e40; body size 6 bytes.
#line 1 "ENTRY_10437e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10437e40(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10437e50; body size 6 bytes.
#line 1 "ENTRY_10437e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10437e50(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 104384b0; body size 5 bytes.
#line 1 "ENTRY_104384b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104384b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10438560; body size 3 bytes.
#line 1 "ENTRY_10438560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10438560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10438570; body size 3 bytes.
#line 1 "ENTRY_10438570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10438570(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10438680; body size 28 bytes.
#line 1 "ENTRY_10438680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10438680(undefined4 *param_1)

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


// Reference entry 104386b0; body size 28 bytes.
#line 1 "ENTRY_104386b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104386b0(undefined4 *param_1)

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


// Reference entry 104386e0; body size 28 bytes.
#line 1 "ENTRY_104386e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104386e0(undefined4 *param_1)

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


// Reference entry 10438710; body size 20 bytes.
#line 1 "ENTRY_10438710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10438710(int *param_1)

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


// Reference entry 10439e40; body size 91 bytes.
#line 1 "ENTRY_10439e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10439e40(int *param_2)
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


// Reference entry 10439ec0; body size 130 bytes.
#line 1 "ENTRY_10439ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10439ec0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (*(code ***)param_1)[1]();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (*(code ***)piVar2)[2]();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 10439f70; body size 5 bytes.
#line 1 "ENTRY_10439f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10439f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10439f80; body size 70 bytes.
#line 1 "ENTRY_10439f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10439f80(undefined4 *param_1)

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


// Reference entry 1043a020; body size 10 bytes.
#line 1 "ENTRY_1043a020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1043a020(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1043a030; body size 12 bytes.
#line 1 "ENTRY_1043a030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1043a030(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1043a0c0; body size 9 bytes.
#line 1 "ENTRY_1043a0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1043a0c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAbilityManager_Listener);
  return (undefined4 *)(param_1);
}


// Reference entry 1043a0d0; body size 33 bytes.
#line 1 "ENTRY_1043a0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1043a0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpCB);
  return (undefined4 *)(param_1);
}


// Reference entry 1043aa70; body size 8 bytes.
#line 1 "ENTRY_1043aa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1043aa70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1043aa80; body size 4 bytes.
#line 1 "ENTRY_1043aa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1043aa80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1043add0; body size 8 bytes.
#line 1 "ENTRY_1043add0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1043add0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1043ade0; body size 4 bytes.
#line 1 "ENTRY_1043ade0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1043ade0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1043adf0; body size 7 bytes.
#line 1 "ENTRY_1043adf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1043adf0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1043ae00; body size 26 bytes.
#line 1 "ENTRY_1043ae00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1043ae00(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 1043ae20; body size 10 bytes.
#line 1 "ENTRY_1043ae20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1043ae20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1043b150; body size 16 bytes.
#line 1 "ENTRY_1043b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1043b150(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1043b5f0; body size 4 bytes.
#line 1 "ENTRY_1043b5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1043b5f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1043ca40; body size 28 bytes.
#line 1 "ENTRY_1043ca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1043ca40(undefined4 *param_1)

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


// Reference entry 1043f7b0; body size 42 bytes.
#line 1 "ENTRY_1043f7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1043f7b0(undefined1 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *(undefined1*)(param_1 + 2) = (undefined1)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHistoryTurnOnActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 104403d0; body size 19 bytes.
#line 1 "ENTRY_104403d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104403d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10440480; body size 35 bytes.
#line 1 "ENTRY_10440480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10440480(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCIObj);
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


// Reference entry 10440940; body size 28 bytes.
#line 1 "ENTRY_10440940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10440940(void)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)((int *)thunk_FUN_110828b0(), 0);
  if ((int *)(piVar2) != (int *)(0x0)) {
    cVar1 = (char)((**(code **)(*piVar2 + 0x3c))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10440e50; body size 33 bytes.
#line 1 "ENTRY_10440e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10440e50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingTimeZoneValueFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 10441c50; body size 19 bytes.
#line 1 "ENTRY_10441c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10441c50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10441e20; body size 3 bytes.
#line 1 "ENTRY_10441e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10441e20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10442210; body size 28 bytes.
#line 1 "ENTRY_10442210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10442210(undefined4 *param_1)

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


// Reference entry 10442b50; body size 26 bytes.
#line 1 "ENTRY_10442b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10442b50(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10442e80; body size 5 bytes.
#line 1 "ENTRY_10442e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10442e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10443030; body size 95 bytes.
#line 1 "ENTRY_10443030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10443030(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10957cf0(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 104430f0; body size 16 bytes.
#line 1 "ENTRY_104430f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104430f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10443150; body size 3 bytes.
#line 1 "ENTRY_10443150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10443150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10443160; body size 10 bytes.
#line 1 "ENTRY_10443160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10443160(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 104438e0; body size 53 bytes.
#line 1 "ENTRY_104438e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104438e0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0<>(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110<>(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0<>(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10443f70; body size 3 bytes.
#line 1 "ENTRY_10443f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10443f70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10443f80; body size 3 bytes.
#line 1 "ENTRY_10443f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10443f80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10443f90; body size 7 bytes.
#line 1 "ENTRY_10443f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10443f90(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10443fa0; body size 3 bytes.
#line 1 "ENTRY_10443fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10443fa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10443fb0; body size 3 bytes.
#line 1 "ENTRY_10443fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10443fb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10443fc0; body size 25 bytes.
#line 1 "ENTRY_10443fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10443fc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10444750; body size 8 bytes.
#line 1 "ENTRY_10444750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10444750(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10444770; body size 4 bytes.
#line 1 "ENTRY_10444770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10444770(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10444780; body size 7 bytes.
#line 1 "ENTRY_10444780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10444780(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 104447a0; body size 26 bytes.
#line 1 "ENTRY_104447a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104447a0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104447c0; body size 10 bytes.
#line 1 "ENTRY_104447c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104447c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10446040; body size 5 bytes.
#line 1 "ENTRY_10446040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10446040(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 104462c0; body size 7 bytes.
#line 1 "ENTRY_104462c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104462c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10449fe0; body size 3 bytes.
#line 1 "ENTRY_10449fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10449fe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10449ff0; body size 3 bytes.
#line 1 "ENTRY_10449ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10449ff0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1044a000; body size 3 bytes.
#line 1 "ENTRY_1044a000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1044a000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1044a0a0; body size 28 bytes.
#line 1 "ENTRY_1044a0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1044a0a0(undefined4 *param_1)

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


// Reference entry 1044a0d0; body size 28 bytes.
#line 1 "ENTRY_1044a0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1044a0d0(undefined4 *param_1)

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


// Reference entry 1044a1c0; body size 16 bytes.
#line 1 "ENTRY_1044a1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1044a1c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1044a1e0; body size 42 bytes.
#line 1 "ENTRY_1044a1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1044a1e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumeration_EventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 1044a220; body size 33 bytes.
#line 1 "ENTRY_1044a220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1044a220(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingMusicLibraryCompilationsFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1044a250; body size 33 bytes.
#line 1 "ENTRY_1044a250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1044a250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingMusicLibrarySortByFormatter);
  return (undefined4 *)(param_1);
}


// Reference entry 1044b2d0; body size 19 bytes.
#line 1 "ENTRY_1044b2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1044b2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1044b2f0; body size 19 bytes.
#line 1 "ENTRY_1044b2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1044b2f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1044b310; body size 19 bytes.
#line 1 "ENTRY_1044b310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1044b310(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1044b430; body size 25 bytes.
#line 1 "ENTRY_1044b430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1044b430(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumerationWithAuth);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumerationWithAuth);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumerationWithAuth);

  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumeration);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumeration);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCSettingsMenuEnumeration);

  ((SCStr *)((SCStr *)(param_1 + 0x28)))->int_release();
  param_1[0x28] = (undefined4)(0);
  piVar1 = (int *)((int *)param_1[0x27]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x26] = (undefined4)(0);
    param_1[0x27] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))(uVar2);
  }
  piVar1 = (int *)((int *)param_1[0x25]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x24] = (undefined4)(0);
    param_1[0x25] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  thunk_FUN_101eb2b0();

  return;

 } catch (...) { }
}


// Reference entry 1044b4c0; body size 3 bytes.
#line 1 "ENTRY_1044b4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1044b4c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1044b4d0; body size 7 bytes.
#line 1 "ENTRY_1044b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1044b4d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1044b4e0; body size 3 bytes.
#line 1 "ENTRY_1044b4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1044b4e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1044b4f0; body size 3 bytes.
#line 1 "ENTRY_1044b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1044b4f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1044e8f0; body size 3 bytes.
#line 1 "ENTRY_1044e8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1044e8f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1044e900; body size 3 bytes.
#line 1 "ENTRY_1044e900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1044e900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1044e910; body size 3 bytes.
#line 1 "ENTRY_1044e910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1044e910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1044ea20; body size 28 bytes.
#line 1 "ENTRY_1044ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1044ea20(undefined4 *param_1)

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


// Reference entry 1044ed80; body size 16 bytes.
#line 1 "ENTRY_1044ed80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1044ed80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1044eda0; body size 40 bytes.
#line 1 "ENTRY_1044eda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1044eda0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSearchTermStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 1044fd70; body size 3 bytes.
#line 1 "ENTRY_1044fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1044fd70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1044fd80; body size 3 bytes.
#line 1 "ENTRY_1044fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1044fd80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10451500; body size 3 bytes.
#line 1 "ENTRY_10451500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10451500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10451620; body size 28 bytes.
#line 1 "ENTRY_10451620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10451620(undefined4 *param_1)

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


// Reference entry 10451d50; body size 83 bytes.
#line 1 "ENTRY_10451d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10451d50(int *param_2)
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


// Reference entry 10451df0; body size 6 bytes.
#line 1 "ENTRY_10451df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10451df0(void)

{
  return (char *)("SCIUrbanAirshipDelegate");
}


// Reference entry 10451e00; body size 27 bytes.
#line 1 "ENTRY_10451e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10451e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10451e30; body size 16 bytes.
#line 1 "ENTRY_10451e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10451e30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10451e50; body size 9 bytes.
#line 1 "ENTRY_10451e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10451e50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10451e60; body size 9 bytes.
#line 1 "ENTRY_10451e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10451e60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIUrbanAirshipListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10452220; body size 7 bytes.
#line 1 "ENTRY_10452220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10452220(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 104523c0; body size 7 bytes.
#line 1 "ENTRY_104523c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104523c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104523d0; body size 3 bytes.
#line 1 "ENTRY_104523d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104523d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10452650; body size 6 bytes.
#line 1 "ENTRY_10452650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10452650(void)

{
  return (char *)("SCIUrbanAirshipDelegate");
}


// Reference entry 10452660; body size 7 bytes.
#line 1 "ENTRY_10452660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10452660(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10452670; body size 7 bytes.
#line 1 "ENTRY_10452670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10452670(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10452680; body size 7 bytes.
#line 1 "ENTRY_10452680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10452680(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104536e0; body size 3 bytes.
#line 1 "ENTRY_104536e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104536e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10453820; body size 20 bytes.
#line 1 "ENTRY_10453820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10453820(int *param_1)

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


// Reference entry 10453dc0; body size 25 bytes.
#line 1 "ENTRY_10453dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10453dc0(undefined4 *param_1)

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


// Reference entry 10453f80; body size 43 bytes.
#line 1 "ENTRY_10453f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10453f80(int *param_2)
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


// Reference entry 10454350; body size 6 bytes.
#line 1 "ENTRY_10454350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10454350(void)

{
  return (char *)("SCIArea");
}


// Reference entry 10454a10; body size 7 bytes.
#line 1 "ENTRY_10454a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10454a10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10454a20; body size 3 bytes.
#line 1 "ENTRY_10454a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10454a20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10454ef0; body size 6 bytes.
#line 1 "ENTRY_10454ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10454ef0(void)

{
  return (char *)("SCIArea");
}


// Reference entry 104551e0; body size 3 bytes.
#line 1 "ENTRY_104551e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104551e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104551f0; body size 3 bytes.
#line 1 "ENTRY_104551f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104551f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10455280; body size 28 bytes.
#line 1 "ENTRY_10455280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10455280(undefined4 *param_1)

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


// Reference entry 104552b0; body size 20 bytes.
#line 1 "ENTRY_104552b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104552b0(int *param_1)

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


// Reference entry 10455850; body size 78 bytes.
#line 1 "ENTRY_10455850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10455850(int *param_2)
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


// Reference entry 104558c0; body size 78 bytes.
#line 1 "ENTRY_104558c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104558c0(int *param_2)
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


// Reference entry 10455970; body size 16 bytes.
#line 1 "ENTRY_10455970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10455970(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10455b70; body size 40 bytes.
#line 1 "ENTRY_10455b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10455b70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGroupNameStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 104575c0; body size 7 bytes.
#line 1 "ENTRY_104575c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104575c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104575d0; body size 3 bytes.
#line 1 "ENTRY_104575d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104575d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104575e0; body size 3 bytes.
#line 1 "ENTRY_104575e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104575e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104575f0; body size 3 bytes.
#line 1 "ENTRY_104575f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104575f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1045c1a0; body size 28 bytes.
#line 1 "ENTRY_1045c1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1045c1a0(undefined4 *param_1)

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


// Reference entry 1045cd10; body size 40 bytes.
#line 1 "ENTRY_1045cd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1045cd10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMuseHouseholdNameStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 1045ec80; body size 25 bytes.
#line 1 "ENTRY_1045ec80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1045ec80(undefined4 *param_1)

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


// Reference entry 10460fb0; body size 91 bytes.
#line 1 "ENTRY_10460fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10460fb0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = (int)(thunk_FUN_110b0460(1), 0);
  if (iVar1 != 0) {
    iVar1 = (int)(param_1 + 0x90);
    iVar2 = (int)(iVar1);
    if (param_1 == 0) {
      iVar2 = (int)(0);
    }
    thunk_FUN_110adac0(iVar2);
    if (param_1 == 0) {
      iVar1 = (int)(0);
    }
    puVar3 = (undefined1 *)(&DAT_1186d2ee);
    if (*(undefined1 **)(param_1 + 0x9c) != (undefined1 *)((0x0))) {
      puVar3 = (undefined1 *)(*(undefined1 **)(param_1 + 0x9c), 0);
    }
    thunk_FUN_110b2900<>(iVar1,puVar3,&DAT_118a52bc,0);
  }
  return;
}


// Reference entry 10461070; body size 78 bytes.
#line 1 "ENTRY_10461070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10461070(int *param_2)
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


// Reference entry 10461120; body size 120 bytes.
#line 1 "ENTRY_10461120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10461120(SCStr *param_1,SCStr *param_2,int param_3)

{
  SCStr *pSVar1;
  SCStr *pSVar2;
  SCStr *this_;
  
  if ((SCStr *)(param_1) != (SCStr *)(param_2)) {
    this_ = (SCStr *)((SCStr *)(param_3 + 8));
    pSVar2 = (SCStr *)(param_1 + 8);
    do {
      if ((SCStr *)(pSVar2) != (SCStr *)(this_)) {
        ((SCStr *)(this_ + -4))->int_release();
        *(undefined4*)(this_ + -4) = (undefined4)(*(undefined4 *)(pSVar2 + -4));
        ((SCStr *)(this_ + -4))->int_addref();
        if ((SCStr *)(pSVar2) != (SCStr *)(this_)) {
          ((SCStr *)(this_))->int_release();
          *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)pSVar2));
          ((SCStr *)(this_))->int_addref();
        }
      }
      param_3 = (int)(param_3 + 0x10);
      *(undefined4*)(this_ + 4) = (undefined4)(*(undefined4 *)(pSVar2 + 4));
      this_ = (SCStr *)(this_ + 0x10);
      pSVar1 = (SCStr *)(pSVar2 + 8);
      pSVar2 = (SCStr *)(pSVar2 + 0x10);
    } while ((SCStr *)(pSVar1) != (SCStr *)(param_2));
    return (int)(param_3);
  }
  return (int)(param_3);
}


// Reference entry 104611e0; body size 5 bytes.
#line 1 "ENTRY_104611e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104611e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10461200; body size 5 bytes.
#line 1 "ENTRY_10461200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10461200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10461210; body size 130 bytes.
#line 1 "ENTRY_10461210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10461210(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (*(code ***)param_1)[1]();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (*(code ***)piVar2)[2]();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 104612c0; body size 130 bytes.
#line 1 "ENTRY_104612c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104612c0(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  (*(code ***)param_1)[1]();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    (*(code ***)piVar2)[2]();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)((*(code ***)piVar1)[3](), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      (**(code **)(*(int *)param_1[1] + 0x14))(param_3);
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 10461370; body size 11 bytes.
#line 1 "ENTRY_10461370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10461370(undefined4 param_1,undefined4 *param_2)

{
  (**(code **)*param_2)(0);
  return;
}


// Reference entry 104613a0; body size 5 bytes.
#line 1 "ENTRY_104613a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104613a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104613e0; body size 5 bytes.
#line 1 "ENTRY_104613e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104613e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104614c0; body size 70 bytes.
#line 1 "ENTRY_104614c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104614c0(undefined4 *param_1)

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


// Reference entry 10461520; body size 32 bytes.
#line 1 "ENTRY_10461520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10461520(undefined4 *param_2)
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


// Reference entry 10461590; body size 32 bytes.
#line 1 "ENTRY_10461590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10461590(undefined4 *param_2)
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


// Reference entry 104615c0; body size 10 bytes.
#line 1 "ENTRY_104615c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104615c0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 104615d0; body size 11 bytes.
#line 1 "ENTRY_104615d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104615d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104615e0; body size 11 bytes.
#line 1 "ENTRY_104615e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104615e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 104615f0; body size 12 bytes.
#line 1 "ENTRY_104615f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104615f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10461680; body size 9 bytes.
#line 1 "ENTRY_10461680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10461680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDevicePostAIOOp_PostPropBagProvider);
  return (undefined4 *)(param_1);
}


// Reference entry 10462560; body size 65 bytes.
#line 1 "ENTRY_10462560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10462560(int *param_2)
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


// Reference entry 104625f0; body size 83 bytes.
#line 1 "ENTRY_104625f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_104625f0(int param_2)
{
  int param_1 = (int )this;
  SCStr *pSVar1;
  
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 4));
  if ((SCStr *)((param_2 + 4)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 4)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  pSVar1 = (SCStr *)((SCStr *)(param_1 + 8));
  if ((SCStr *)((param_2 + 8)) != (SCStr *)(pSVar1)) {
    ((SCStr *)(pSVar1))->int_release();
    *(undefined4*)pSVar1 = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 8)));
    ((SCStr *)(pSVar1))->int_addref();
  }
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*(undefined4 *)(param_2 + 0xc));
  return (int)(param_1);
}


// Reference entry 10462660; body size 12 bytes.
#line 1 "ENTRY_10462660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10462660(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(param_2 * 0x10 + *param_1);
}


// Reference entry 10462670; body size 8 bytes.
#line 1 "ENTRY_10462670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10462670(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10462680; body size 4 bytes.
#line 1 "ENTRY_10462680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10462680(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10462690; body size 3 bytes.
#line 1 "ENTRY_10462690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10462690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104626a0; body size 3 bytes.
#line 1 "ENTRY_104626a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104626a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104626b0; body size 18 bytes.
#line 1 "ENTRY_104626b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104626b0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(param_3 * 0x10 + *param_1);
  return;
}


// Reference entry 10462770; body size 14 bytes.
#line 1 "ENTRY_10462770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10462770(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 0x10);
  return (int *)(param_1);
}


// Reference entry 10462790; body size 14 bytes.
#line 1 "ENTRY_10462790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10462790(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 0x10);
  return (int *)(param_1);
}


// Reference entry 10462c70; body size 8 bytes.
#line 1 "ENTRY_10462c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10462c70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10462c90; body size 3 bytes.
#line 1 "ENTRY_10462c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10462c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10462ca0; body size 3 bytes.
#line 1 "ENTRY_10462ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10462ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10462cb0; body size 4 bytes.
#line 1 "ENTRY_10462cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10462cb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10462cc0; body size 7 bytes.
#line 1 "ENTRY_10462cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10462cc0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10462ce0; body size 26 bytes.
#line 1 "ENTRY_10462ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10462ce0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10462d00; body size 10 bytes.
#line 1 "ENTRY_10462d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10462d00(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10462d50; body size 3 bytes.
#line 1 "ENTRY_10462d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10462d50(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 104638e0; body size 11 bytes.
#line 1 "ENTRY_104638e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104638e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10463940; body size 16 bytes.
#line 1 "ENTRY_10463940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10463940(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10463960; body size 16 bytes.
#line 1 "ENTRY_10463960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10463960(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10463980; body size 9 bytes.
#line 1 "ENTRY_10463980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10463980(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10464830; body size 13 bytes.
#line 1 "ENTRY_10464830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10464830(int param_2)
{
  int param_1 = (int )this;
  return (int)(param_2 * 0x10 + *(int *)(param_1 + 8));
}


// Reference entry 104648a0; body size 31 bytes.
#line 1 "ENTRY_104648a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104648a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x20));
  piVar1 = (int *)(*(int **)(param_1 + 0x24), 0);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 104648d0; body size 4 bytes.
#line 1 "ENTRY_104648d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104648d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10465040; body size 28 bytes.
#line 1 "ENTRY_10465040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10465040(undefined4 *param_1)

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


// Reference entry 10465070; body size 28 bytes.
#line 1 "ENTRY_10465070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10465070(undefined4 *param_1)

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


// Reference entry 10465200; body size 155 bytes.
#line 1 "ENTRY_10465200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10465200(uint param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  SCStr *this_;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4)) {
    iVar1 = (int)(*(int *)(param_1 + 0xc));
    iVar2 = (int)(param_2 * 0x10 + 0x10 + *(int *)(param_1 + 8));
    if (iVar2 != iVar1) {
      this_ = (SCStr *)((SCStr *)(iVar2 + -8));
      do {
        if (this_ + 0xc != (SCStr *)(this_) + -4) {
          ((SCStr *)(this_ + -4))->int_release();
          *(undefined4*)(this_ + -4) = (undefined4)(*(undefined4 *)(this_ + 0xc));
          ((SCStr *)(this_ + -4))->int_addref();
        }
        if (this_ + 0x10 != (SCStr *)(this_)) {
          ((SCStr *)(this_))->int_release();
          *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(this_ + 0x10)));
          ((SCStr *)(this_))->int_addref();
        }
        iVar2 = (int)(iVar2 + 0x10);
        *(undefined4*)(this_ + 4) = (undefined4)(*(undefined4 *)(this_ + 0x14));
        this_ = (SCStr *)(this_ + 0x10);
      } while (iVar2 != iVar1);
      iVar1 = (int)(*(int *)(param_1 + 0xc));
    }
    (*(code *)**(undefined4 **)(iVar1 + -0x10))(0);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + -0x10);
  }
  return;
}


// Reference entry 104656a0; body size 10 bytes.
#line 1 "ENTRY_104656a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104656a0(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 4);
}


// Reference entry 104656b0; body size 9 bytes.
#line 1 "ENTRY_104656b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_104656b0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 4);
}


// Reference entry 10465d00; body size 25 bytes.
#line 1 "ENTRY_10465d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10465d00(undefined4 *param_1)

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


// Reference entry 10465f40; body size 91 bytes.
#line 1 "ENTRY_10465f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10465f40(int *param_2)
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


// Reference entry 10465fc0; body size 26 bytes.
#line 1 "ENTRY_10465fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10465fc0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10465fe0; body size 24 bytes.
#line 1 "ENTRY_10465fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10465fe0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(0);
  func_0x10075a36(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10466000; body size 78 bytes.
#line 1 "ENTRY_10466000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10466000(int *param_2)
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


// Reference entry 104662c0; body size 16 bytes.
#line 1 "ENTRY_104662c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104662c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 104662e0; body size 9 bytes.
#line 1 "ENTRY_104662e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_104662e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10467c30; body size 33 bytes.
#line 1 "ENTRY_10467c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10467c30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUpdateMusicIndexActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10467f90; body size 19 bytes.
#line 1 "ENTRY_10467f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10467f90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10467fb0; body size 3 bytes.
#line 1 "ENTRY_10467fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10467fb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10467fc0; body size 7 bytes.
#line 1 "ENTRY_10467fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10467fc0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10467fd0; body size 3 bytes.
#line 1 "ENTRY_10467fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10467fd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10467fe0; body size 7 bytes.
#line 1 "ENTRY_10467fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10467fe0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10467ff0; body size 3 bytes.
#line 1 "ENTRY_10467ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10467ff0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10468000; body size 3 bytes.
#line 1 "ENTRY_10468000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10468000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10468010; body size 3 bytes.
#line 1 "ENTRY_10468010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10468010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104690e0; body size 3 bytes.
#line 1 "ENTRY_104690e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104690e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 104690f0; body size 3 bytes.
#line 1 "ENTRY_104690f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104690f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10469230; body size 28 bytes.
#line 1 "ENTRY_10469230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10469230(undefined4 *param_1)

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


// Reference entry 10469260; body size 20 bytes.
#line 1 "ENTRY_10469260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10469260(int *param_1)

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


// Reference entry 1046a2d0; body size 25 bytes.
#line 1 "ENTRY_1046a2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1046a2d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1046a2f0; body size 3 bytes.
#line 1 "ENTRY_1046a2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1046a2f0(void)

{
  return;
}


// Reference entry 1046a300; body size 23 bytes.
#line 1 "ENTRY_1046a300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1046a300(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1046a320; body size 3 bytes.
#line 1 "ENTRY_1046a320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1046a320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1046a330; body size 23 bytes.
#line 1 "ENTRY_1046a330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1046a330(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1046a350; body size 41 bytes.
#line 1 "ENTRY_1046a350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1046a350(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_11131cc0<>(param_2,2,0);
  param_1[8] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPWifiModeDevicesEnumerator);
  return (undefined4 *)(param_1);
}


// Reference entry 1046b150; body size 12 bytes.
#line 1 "ENTRY_1046b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_1046b150(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 1046b3a0; body size 3 bytes.
#line 1 "ENTRY_1046b3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1046b3a0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1046b3b0; body size 3 bytes.
#line 1 "ENTRY_1046b3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1046b3b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1046b3c0; body size 3 bytes.
#line 1 "ENTRY_1046b3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1046b3c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1046b480; body size 61 bytes.
#line 1 "ENTRY_1046b480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1046b480(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 8);
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


// Reference entry 1046ba80; body size 9 bytes.
#line 1 "ENTRY_1046ba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1046ba80(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 1046db00; body size 16 bytes.
#line 1 "ENTRY_1046db00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1046db00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1046e740; body size 33 bytes.
#line 1 "ENTRY_1046e740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1046e740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCToggleExplicitFilterActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 1046e940; body size 19 bytes.
#line 1 "ENTRY_1046e940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1046e940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1046e9d0; body size 12 bytes.
#line 1 "ENTRY_1046e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_1046e9d0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 1046e9e0; body size 3 bytes.
#line 1 "ENTRY_1046e9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1046e9e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1046e9f0; body size 3 bytes.
#line 1 "ENTRY_1046e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1046e9f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1046ea00; body size 6 bytes.
#line 1 "ENTRY_1046ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_1046ea00(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 1046fa70; body size 3 bytes.
#line 1 "ENTRY_1046fa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1046fa70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1046fb00; body size 28 bytes.
#line 1 "ENTRY_1046fb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1046fb00(undefined4 *param_1)

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


// Reference entry 104700f0; body size 78 bytes.
#line 1 "ENTRY_104700f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104700f0(int *param_2)
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


// Reference entry 10470590; body size 7 bytes.
#line 1 "ENTRY_10470590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10470590(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 104705a0; body size 7 bytes.
#line 1 "ENTRY_104705a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104705a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10471500; body size 4 bytes.
#line 1 "ENTRY_10471500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10471500(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10471880; body size 26 bytes.
#line 1 "ENTRY_10471880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10471880(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 104718a0; body size 91 bytes.
#line 1 "ENTRY_104718a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_104718a0(int *param_2)
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


// Reference entry 10471920; body size 26 bytes.
#line 1 "ENTRY_10471920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10471920(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10471cc0; body size 5 bytes.
#line 1 "ENTRY_10471cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10471cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10471ce0; body size 6 bytes.
#line 1 "ENTRY_10471ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10471ce0(void)

{
  return (char *)("SCIRoomResource");
}


// Reference entry 10471e80; body size 95 bytes.
#line 1 "ENTRY_10471e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10471e80(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10999150(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10471f80; body size 16 bytes.
#line 1 "ENTRY_10471f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10471f80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10471fa0; body size 3 bytes.
#line 1 "ENTRY_10471fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10471fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10471fb0; body size 10 bytes.
#line 1 "ENTRY_10471fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10471fb0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10472040; body size 40 bytes.
#line 1 "ENTRY_10472040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10472040(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDeviceNameStandaloneInput);
  return (undefined4 *)(param_1);
}


// Reference entry 104727f0; body size 53 bytes.
#line 1 "ENTRY_104727f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_104727f0(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0<>(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110<>(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0<>(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10472cf0; body size 3 bytes.
#line 1 "ENTRY_10472cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10472cf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10472d00; body size 3 bytes.
#line 1 "ENTRY_10472d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10472d00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10472d10; body size 7 bytes.
#line 1 "ENTRY_10472d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10472d10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10472d20; body size 3 bytes.
#line 1 "ENTRY_10472d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10472d20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10472d30; body size 3 bytes.
#line 1 "ENTRY_10472d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10472d30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10472d40; body size 3 bytes.
#line 1 "ENTRY_10472d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10472d40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10472d50; body size 25 bytes.
#line 1 "ENTRY_10472d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10472d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10473310; body size 8 bytes.
#line 1 "ENTRY_10473310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10473310(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10473330; body size 4 bytes.
#line 1 "ENTRY_10473330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10473330(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10473340; body size 7 bytes.
#line 1 "ENTRY_10473340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10473340(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10473360; body size 26 bytes.
#line 1 "ENTRY_10473360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10473360(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10473380; body size 10 bytes.
#line 1 "ENTRY_10473380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10473380(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10473900; body size 9 bytes.
#line 1 "ENTRY_10473900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10473900(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10473ca0; body size 5 bytes.
#line 1 "ENTRY_10473ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10473ca0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 10473e20; body size 6 bytes.
#line 1 "ENTRY_10473e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10473e20(void)

{
  return (char *)("SCIRoomResource");
}


// Reference entry 10474380; body size 3 bytes.
#line 1 "ENTRY_10474380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10474380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10474390; body size 3 bytes.
#line 1 "ENTRY_10474390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10474390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10474430; body size 28 bytes.
#line 1 "ENTRY_10474430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10474430(undefined4 *param_1)

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


// Reference entry 10474460; body size 28 bytes.
#line 1 "ENTRY_10474460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10474460(undefined4 *param_1)

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


// Reference entry 10474490; body size 28 bytes.
#line 1 "ENTRY_10474490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10474490(undefined4 *param_1)

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


// Reference entry 10474700; body size 26 bytes.
#line 1 "ENTRY_10474700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10474700(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 10474980; body size 5 bytes.
#line 1 "ENTRY_10474980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10474980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10474cc0; body size 3 bytes.
#line 1 "ENTRY_10474cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10474cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10474cd0; body size 10 bytes.
#line 1 "ENTRY_10474cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10474cd0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10475610; body size 53 bytes.
#line 1 "ENTRY_10475610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10475610(undefined4 *param_1)

{
 try {
  undefined4 *puVar1;
  int *piVar2;
  uint uVar3;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);


  uVar3 = (uint)(DAT_12126b84);

  puVar1 = (undefined4 *)(param_1 + 0x14);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  *puVar1 = (undefined4)((uint)&ghidra_vftable_SCNewWizController);
  thunk_FUN_1106b1c0(puVar1,uVar3);
  if ((int *)param_1[0x15] != (int *)(((0x0)))) {
    (**(code **)(*(int *)param_1[0x15] + 0x2c))(1);
  }
  ((_Tree<> *)(0))->m_op_dtor();
  piVar2 = (int *)((int *)param_1[0x33]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x32] = (undefined4)(0);
    param_1[0x33] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  thunk_FUN_105a52b0<>(param_1 + 0x30,*(undefined4 *)(param_1[0x30] + 4));
  thunk_FUN_1148a50e(param_1[0x30],0x1c);
  thunk_FUN_105a5110<>(param_1 + 0x2e,*(undefined4 *)(param_1[0x2e] + 4));
  thunk_FUN_1148a50e(param_1[0x2e],0x20);
  thunk_FUN_105a51f0<>(param_1 + 0x2a,*(undefined4 *)(param_1[0x2a] + 4));
  thunk_FUN_1148a50e(param_1[0x2a],0x38);
  FUN_100517a8();

  ((SCStr *)((SCStr *)(param_1 + 0x1b)))->int_release();
  param_1[0x1b] = (undefined4)(0);

  ((SCStr *)((SCStr *)(param_1 + 0x1a)))->int_release();
  param_1[0x1a] = (undefined4)(0);
  piVar2 = (int *)((int *)param_1[0x17]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x16] = (undefined4)(0);
    param_1[0x17] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  *puVar1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  piVar2 = (int *)((int *)param_1[0x13]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0x12] = (undefined4)(0);
    param_1[0x13] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  piVar2 = (int *)((int *)param_1[0x10]);

  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[0xf] = (undefined4)(0);
    param_1[0x10] = (undefined4)(0);
    (**(code **)(*piVar2 + 8))();
  }

  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCLoggingHelper);
  thunk_FUN_105a05f0();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10475b50; body size 3 bytes.
#line 1 "ENTRY_10475b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10475b50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10475b60; body size 3 bytes.
#line 1 "ENTRY_10475b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10475b60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10475b70; body size 3 bytes.
#line 1 "ENTRY_10475b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10475b70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10475b80; body size 3 bytes.
#line 1 "ENTRY_10475b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10475b80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10475bd0; body size 25 bytes.
#line 1 "ENTRY_10475bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10475bd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{ int stack0x00000004;
 try {
  if (*(int **)(param_1 + 0x24) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x24) + 8))(&stack0x00000004);
    return;
  }
                    
  std::_Xbad_function_call();

 } catch (...) { }
}


// Reference entry 10476280; body size 8 bytes.
#line 1 "ENTRY_10476280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10476280(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 104762a0; body size 4 bytes.
#line 1 "ENTRY_104762a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_104762a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 104762b0; body size 7 bytes.
#line 1 "ENTRY_104762b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_104762b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 104762d0; body size 26 bytes.
#line 1 "ENTRY_104762d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104762d0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)((**(code **)**(undefined4 **)(param_2 + 0x24))(param_1), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 104762f0; body size 10 bytes.
#line 1 "ENTRY_104762f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_104762f0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10476340; body size 3 bytes.
#line 1 "ENTRY_10476340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10476340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10476350; body size 4 bytes.
#line 1 "ENTRY_10476350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10476350(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10477f80; body size 3 bytes.
#line 1 "ENTRY_10477f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10477f80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10478170; body size 5 bytes.
#line 1 "ENTRY_10478170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10478170(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 104782f0; body size 4 bytes.
#line 1 "ENTRY_104782f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_104782f0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x20));
}


// Reference entry 10478980; body size 3 bytes.
#line 1 "ENTRY_10478980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10478980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10478990; body size 3 bytes.
#line 1 "ENTRY_10478990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10478990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10478a30; body size 28 bytes.
#line 1 "ENTRY_10478a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10478a30(undefined4 *param_1)

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


// Reference entry 10478a60; body size 28 bytes.
#line 1 "ENTRY_10478a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10478a60(undefined4 *param_1)

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


// Reference entry 10478a90; body size 28 bytes.
#line 1 "ENTRY_10478a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10478a90(undefined4 *param_1)

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


// Reference entry 10478b70; body size 25 bytes.
#line 1 "ENTRY_10478b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10478b70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10478f40; body size 39 bytes.
#line 1 "ENTRY_10478f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10478f40(undefined4 *param_2)
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


// Reference entry 10479230; body size 3 bytes.
#line 1 "ENTRY_10479230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10479230(void)

{
  return;
}


// Reference entry 10479360; body size 5 bytes.
#line 1 "ENTRY_10479360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10479360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104793d0; body size 5 bytes.
#line 1 "ENTRY_104793d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104793d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10479690; body size 5 bytes.
#line 1 "ENTRY_10479690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10479690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10479700; body size 32 bytes.
#line 1 "ENTRY_10479700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10479700(undefined4 *param_2)
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


// Reference entry 10479730; body size 16 bytes.
#line 1 "ENTRY_10479730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10479730(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10479750; body size 23 bytes.
#line 1 "ENTRY_10479750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10479750(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10479770; body size 3 bytes.
#line 1 "ENTRY_10479770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10479770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10479780; body size 23 bytes.
#line 1 "ENTRY_10479780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10479780(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10479e50; body size 60 bytes.
#line 1 "ENTRY_10479e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10479e50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_1047a750();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10479ea0; body size 3 bytes.
#line 1 "ENTRY_10479ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10479ea0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10479eb0; body size 3 bytes.
#line 1 "ENTRY_10479eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10479eb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1047a580; body size 3 bytes.
#line 1 "ENTRY_1047a580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1047a580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1047a6b0; body size 43 bytes.
#line 1 "ENTRY_1047a6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1047a6b0(undefined4 *param_2)
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


// Reference entry 1047a850; body size 3 bytes.
#line 1 "ENTRY_1047a850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1047a850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1047a860; body size 4 bytes.
#line 1 "ENTRY_1047a860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1047a860(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1047d4d0; body size 3 bytes.
#line 1 "ENTRY_1047d4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1047d4d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1047d5c0; body size 28 bytes.
#line 1 "ENTRY_1047d5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1047d5c0(undefined4 *param_1)

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


// Reference entry 1047df70; body size 25 bytes.
#line 1 "ENTRY_1047df70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1047df70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1047f070; body size 26 bytes.
#line 1 "ENTRY_1047f070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1047f070(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1047f090; body size 26 bytes.
#line 1 "ENTRY_1047f090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1047f090(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1047f0b0; body size 26 bytes.
#line 1 "ENTRY_1047f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1047f0b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1047f0d0; body size 26 bytes.
#line 1 "ENTRY_1047f0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1047f0d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1047f0f0; body size 26 bytes.
#line 1 "ENTRY_1047f0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1047f0f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (*(code ***)param_2)[1]();
  }
  return (int *)(param_1);
}


// Reference entry 1047f270; body size 91 bytes.
#line 1 "ENTRY_1047f270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1047f270(int *param_2)
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


// Reference entry 1047fd70; body size 33 bytes.
#line 1 "ENTRY_1047fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1047fd70(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 1047fda0; body size 18 bytes.
#line 1 "ENTRY_1047fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1047fda0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 1047fdc0; body size 39 bytes.
#line 1 "ENTRY_1047fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1047fdc0(undefined4 *param_2)
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


// Reference entry 104800e0; body size 7 bytes.
#line 1 "ENTRY_104800e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104800e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10481540; body size 5 bytes.
#line 1 "ENTRY_10481540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10481540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10481550; body size 36 bytes.
#line 1 "ENTRY_10481550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10481550(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10481680; body size 13 bytes.
#line 1 "ENTRY_10481680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10481680(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10481690; body size 36 bytes.
#line 1 "ENTRY_10481690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10481690(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_1047fdf0<>(puVar1,param_2);
  return;
}


// Reference entry 104817e0; body size 5 bytes.
#line 1 "ENTRY_104817e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104817e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 104817f0; body size 5 bytes.
#line 1 "ENTRY_104817f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_104817f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10481800; body size 5 bytes.
#line 1 "ENTRY_10481800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10481800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10481810; body size 5 bytes.
#line 1 "ENTRY_10481810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10481810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10481820; body size 5 bytes.
#line 1 "ENTRY_10481820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10481820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10481830; body size 5 bytes.
#line 1 "ENTRY_10481830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10481830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10482930; body size 95 bytes.
#line 1 "ENTRY_10482930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10482930(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10961ad0(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 104829b0; body size 95 bytes.
#line 1 "ENTRY_104829b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_104829b0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10b31d30(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10482a30; body size 95 bytes.
#line 1 "ENTRY_10482a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10482a30(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_109cb7a0(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10482ab0; body size 95 bytes.
#line 1 "ENTRY_10482ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10482ab0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_109f3c80(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10482b30; body size 95 bytes.
#line 1 "ENTRY_10482b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10482b30(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)thunk_FUN_10a08d00(), 0);
  uVar2 = (undefined4)((*(code ***)piVar1)[3](param_2,param_3,param_4), 0);
  thunk_FUN_105a7950(uVar2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0xe] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x11] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  param_1[0x14] = (undefined4)((uint)&ghidra_vftable_SCNewWizControllerFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10482cf0; body size 3 bytes.
#line 1 "ENTRY_10482cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10482cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10482d00; body size 3 bytes.
#line 1 "ENTRY_10482d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10482d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10482d10; body size 3 bytes.
#line 1 "ENTRY_10482d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10482d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10482d20; body size 3 bytes.
#line 1 "ENTRY_10482d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10482d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10482d30; body size 3 bytes.
#line 1 "ENTRY_10482d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10482d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10482d40; body size 10 bytes.
#line 1 "ENTRY_10482d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10482d40(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10482d50; body size 10 bytes.
#line 1 "ENTRY_10482d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10482d50(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10482d60; body size 10 bytes.
#line 1 "ENTRY_10482d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10482d60(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10482d70; body size 10 bytes.
#line 1 "ENTRY_10482d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10482d70(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10482d80; body size 10 bytes.
#line 1 "ENTRY_10482d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10482d80(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10482d90; body size 23 bytes.
#line 1 "ENTRY_10482d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10482d90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10482db0; body size 3 bytes.
#line 1 "ENTRY_10482db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10482db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10483040; body size 23 bytes.
#line 1 "ENTRY_10483040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10483040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


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
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } template<class... A> int stringWithFormat(A...); };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AVTransport { char _pad; AVTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct BleV4 { char _pad; BleV4(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ConnectionManager { char _pad; ConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetButtonLockState { char _pad; GetButtonLockState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetLEDState { char _pad; GetLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetProtocolInfo { char _pad; GetProtocolInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Pause { char _pad; Pause(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDevice { char _pad; SCIDevice(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDeviceAutoplay { char _pad; SCIDeviceAutoplay(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDeviceLineIn { char _pad; SCIDeviceLineIn(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDeviceLineOut { char _pad; SCIDeviceLineOut(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDeviceMusicEqualization { char _pad; SCIDeviceMusicEqualization(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpConnectionManagerGetProtocolInfo { char _pad; SCIOpConnectionManagerGetProtocolInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePropertiesGetButtonLockState { char _pad; SCIOpDevicePropertiesGetButtonLockState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePropertiesGetLEDState { char _pad; SCIOpDevicePropertiesGetLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePropertiesSetButtonLockState { char _pad; SCIOpDevicePropertiesSetButtonLockState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePropertiesSetLEDState { char _pad; SCIOpDevicePropertiesSetLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIPortableDevice { char _pad; SCIPortableDevice(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIVersionRange { char _pad; SCIVersionRange(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetButtonLockState { char _pad; SetButtonLockState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetLEDState { char _pad; SetLEDState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetZoneAttributes { char _pad; SetZoneAttributes(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *BT;
typedef void *E9;
typedef void *MDP;
typedef void *WARNING;
using namespace std;
extern "C" void LAB_10001cda(void);
extern "C" void LAB_1000296e(void);
extern "C" void LAB_1000357b(void);
extern "C" void LAB_10009b7e(void);
extern "C" void LAB_10009c23(void);
extern "C" void LAB_1000c4b9(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e21e(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_1000e7d7(void);
extern "C" void LAB_10011310(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10016568(void);
extern "C" void LAB_10016676(void);
extern "C" void LAB_10018ce6(void);
extern "C" void LAB_10019d35(void);
extern "C" void LAB_1001bf27(void);
extern "C" void LAB_1001e49d(void);
extern "C" void LAB_100243f7(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10026dff(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002b70b(void);
extern "C" void LAB_10030c56(void);
extern "C" void LAB_100316f1(void);
extern "C" void LAB_10033dfc(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100379ed(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003adcd(void);
extern "C" void LAB_1003b7a5(void);
extern "C" void LAB_1003c1d7(void);
extern "C" void LAB_1003d32a(void);
extern "C" void LAB_1003eec8(void);
extern "C" void LAB_1003f828(void);
extern "C" void LAB_100418e4(void);
extern "C" void LAB_100429ce(void);
extern "C" void LAB_10042e24(void);
extern "C" void LAB_10044b20(void);
extern "C" void LAB_10044c51(void);
extern "C" void LAB_1004532c(void);
extern "C" void LAB_10047e83(void);
extern "C" void LAB_100487ed(void);
extern "C" void LAB_10049634(void);
extern "C" void LAB_10049a94(void);
extern "C" void LAB_10049c4c(void);
extern "C" void LAB_1004a089(void);
extern "C" void LAB_1004a3ea(void);
extern "C" void LAB_1004de23(void);
extern "C" void LAB_1004dfea(void);
extern "C" void LAB_1004f09d(void);
extern "C" void LAB_1005024a(void);
extern "C" void LAB_10051c6c(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10055a8d(void);
extern "C" void LAB_1005a7b3(void);
extern "C" void LAB_1005a920(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005e6ce(void);
extern "C" void LAB_1005fe7a(void);
extern "C" void LAB_10062418(void);
extern "C" void LAB_10062ea4(void);
extern "C" void LAB_10063494(void);
extern "C" void LAB_10064312(void);
extern "C" void LAB_10064b69(void);
extern "C" void LAB_10069083(void);
extern "C" void LAB_1006a064(void);
extern "C" void LAB_1006a316(void);
extern "C" void LAB_1006b7de(void);
extern "C" void LAB_1006bc3e(void);
extern "C" void LAB_10070748(void);
extern "C" void LAB_10070928(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10073394(void);
extern "C" void LAB_10073a83(void);
extern "C" void LAB_10073dda(void);
extern "C" void LAB_10074fa5(void);
extern "C" void LAB_10077a61(void);
extern "C" void LAB_1007ea73(void);
extern "C" void LAB_10080193(void);
extern "C" void LAB_10084cb6(void);
extern "C" void LAB_10085602(void);
extern "C" void LAB_10086caa(void);
extern "C" void LAB_10086cb9(void);
extern "C" void LAB_10086ed0(void);
extern "C" void LAB_10088177(void);
extern "C" void LAB_1008a4d1(void);
extern "C" void LAB_1008b48a(void);
extern "C" void LAB_1008dde8(void);
extern "C" void LAB_10091f7e(void);
extern "C" void LAB_10093c7f(void);
extern "C" void LAB_10093dce(void);
extern "C" void LAB_10097f23(void);
extern "C" void LAB_1009903f(void);
extern "C" void LAB_10099fb7(void);
extern "C" void LAB_1009a426(void);
extern "C" void LAB_103122b0(void);
extern "C" void LAB_1031232f(void);
extern "C" void LAB_103124c0(void);
extern "C" void LAB_1031253f(void);
extern "C" void LAB_1031ca42(void);
extern "C" void LAB_1031f610(void);
extern "C" void LAB_10320700(void);
extern "C" void LAB_10321ae4(void);
extern "C" void LAB_10321afc(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187be18(void);
extern "C" void LAB_1187ead8(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11882ff0(void);
extern "C" void LAB_11884fb8(void);
extern "C" void LAB_1188bc94(void);
extern "C" void LAB_1188feb0(void);
extern "C" void LAB_118920dc(void);
extern "C" void LAB_1189359c(void);
extern "C" void LAB_11893684(void);
extern "C" void LAB_118938f4(void);
extern "C" void LAB_1189392c(void);
extern "C" void LAB_11893974(void);
extern "C" void LAB_118939b0(void);
extern "C" void LAB_118939bc(void);
extern "C" void LAB_118939c8(void);
extern "C" void LAB_11893a10(void);
extern "C" void LAB_11893a4c(void);
extern "C" void LAB_11893aa4(void);
extern "C" void LAB_11893aec(void);
extern "C" void LAB_11893b28(void);
extern "C" void LAB_11893b34(void);
extern "C" void LAB_11893b48(void);
extern "C" void LAB_11893b98(void);
extern "C" void LAB_11893c50(void);
extern "C" void LAB_11893ca4(void);
extern "C" void LAB_11893d3c(void);
extern "C" void LAB_11893d84(void);
extern "C" void LAB_11893dc0(void);
extern "C" void LAB_11893dcc(void);
extern "C" void LAB_11893ddc(void);
extern "C" void LAB_11893e30(void);
extern "C" void LAB_11893e78(void);
extern "C" void LAB_11893eb4(void);
extern "C" void LAB_11893ec0(void);
extern "C" void LAB_11893fb4(void);
extern "C" void LAB_11893ffc(void);
extern "C" void LAB_11894038(void);
extern "C" void LAB_11894044(void);
extern "C" void LAB_118940bc(void);
extern "C" void LAB_11894104(void);
extern "C" void LAB_11894140(void);
extern "C" void LAB_1189414c(void);
extern "C" void LAB_11894184(void);
extern "C" void LAB_118941cc(void);
extern "C" void LAB_11894208(void);
extern "C" void LAB_11894214(void);
extern "C" void LAB_118942b4(void);
extern "C" void LAB_11894358(void);
extern "C" void LAB_118943a0(void);
extern "C" void LAB_118943b0(void);
extern "C" void LAB_1189445c(void);
extern "C" void LAB_118944a8(void);
extern "C" void LAB_11894528(void);
extern "C" void LAB_118945cc(void);
extern "C" void LAB_11894614(void);
extern "C" void LAB_11894624(void);
extern "C" void LAB_118946d0(void);
extern "C" void LAB_1189471c(void);
extern "C" void LAB_1189472c(void);
extern "C" void LAB_118947a8(void);
extern "C" void LAB_11894ef8(void);
extern "C" void LAB_11894fb0(void);
extern "C" void LAB_11895850(void);
extern "C" void LAB_11895874(void);
extern "C" void LAB_11895898(void);
extern "C" void LAB_11895a48(void);
extern "C" void LAB_11895ab4(void);
extern "C" void LAB_11895ad8(void);
extern "C" void LAB_11895afc(void);
extern "C" void LAB_11895b20(void);
extern "C" void LAB_1189602c(void);
extern "C" void LAB_11899ed0(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_121a1028(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fca60(void);


struct Recovered_Bulk { char _pad; void __thiscall m_FUN_1030d390(undefined4 *param_2); template<class... A> int m_FUN_1030d390(A...); void __thiscall m_FUN_1030d3b0(undefined4 *param_2); template<class... A> int m_FUN_1030d3b0(A...); void __thiscall m_FUN_1030d3d0(undefined4 *param_2); template<class... A> int m_FUN_1030d3d0(A...); undefined4 * __thiscall m_FUN_1030eb40(undefined4 param_2); template<class... A> int m_FUN_1030eb40(A...); undefined4 * __thiscall m_FUN_1030eb60(undefined4 param_2); template<class... A> int m_FUN_1030eb60(A...); undefined4 * __thiscall m_FUN_1030eb80(undefined4 param_2); template<class... A> int m_FUN_1030eb80(A...); undefined4 * __thiscall m_FUN_1030ee10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030ee10(A...); undefined4 * __thiscall m_FUN_1030ee20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030ee20(A...); undefined4 * __thiscall m_FUN_1030ee30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030ee30(A...); undefined4 * __thiscall m_FUN_1030ee40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030ee40(A...); undefined4 * __thiscall m_FUN_1030ee50(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030ee50(A...); undefined4 * __thiscall m_FUN_1030ee60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030ee60(A...); undefined4 * __thiscall m_FUN_1030ee70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030ee70(A...); undefined4 * __thiscall m_FUN_1030ee80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030ee80(A...); undefined4 * __thiscall m_FUN_1030ee90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030ee90(A...); undefined4 * __thiscall m_FUN_1030eea0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030eea0(A...); undefined4 * __thiscall m_FUN_1030eeb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030eeb0(A...); undefined4 * __thiscall m_FUN_1030eec0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1030eec0(A...); undefined4 * __thiscall m_FUN_1030ef60(undefined4 *param_2); template<class... A> int m_FUN_1030ef60(A...); undefined4 * __thiscall m_FUN_1030ef70(undefined4 param_2); template<class... A> int m_FUN_1030ef70(A...); undefined4 * __thiscall m_FUN_1030ef90(undefined4 param_2); template<class... A> int m_FUN_1030ef90(A...); undefined4 * __thiscall m_FUN_1030efb0(undefined4 param_2); template<class... A> int m_FUN_1030efb0(A...); undefined4 * __thiscall m_FUN_1030efd0(undefined4 *param_2); template<class... A> int m_FUN_1030efd0(A...); undefined4 * __thiscall m_FUN_1030efe0(undefined4 *param_2); template<class... A> int m_FUN_1030efe0(A...); undefined4 * __thiscall m_FUN_1030f110(undefined4 *param_2); template<class... A> int m_FUN_1030f110(A...); undefined4 * __thiscall m_FUN_1030f5f0(undefined4 param_2); template<class... A> int m_FUN_1030f5f0(A...); undefined4 * __thiscall m_FUN_1030f600(undefined4 param_2); template<class... A> int m_FUN_1030f600(A...); undefined4 * __thiscall m_FUN_1030f610(undefined4 param_2); template<class... A> int m_FUN_1030f610(A...); undefined4 * __thiscall m_FUN_1030f620(undefined4 param_2,int param_3); template<class... A> int m_FUN_1030f620(A...); undefined4 * __thiscall m_FUN_1030f640(undefined4 param_2,int param_3); template<class... A> int m_FUN_1030f640(A...); undefined4 * __thiscall m_FUN_1030f660(undefined4 param_2,int param_3); template<class... A> int m_FUN_1030f660(A...); bool __thiscall m_FUN_1030fed0(int *param_2); template<class... A> int m_FUN_1030fed0(A...); bool __thiscall m_FUN_1030fef0(int *param_2); template<class... A> int m_FUN_1030fef0(A...); bool __thiscall m_FUN_1030ff10(int *param_2); template<class... A> int m_FUN_1030ff10(A...); bool __thiscall m_FUN_1030ff30(int *param_2); template<class... A> int m_FUN_1030ff30(A...); bool __thiscall m_FUN_1030ff50(int *param_2); template<class... A> int m_FUN_1030ff50(A...); bool __thiscall m_FUN_1030ff70(int *param_2); template<class... A> int m_FUN_1030ff70(A...); bool __thiscall m_FUN_1030ff90(int *param_2); template<class... A> int m_FUN_1030ff90(A...); bool __thiscall m_FUN_1030ffb0(int *param_2); template<class... A> int m_FUN_1030ffb0(A...); bool __thiscall m_FUN_1030ffd0(int *param_2); template<class... A> int m_FUN_1030ffd0(A...); bool __thiscall m_FUN_1030fff0(int *param_2); template<class... A> int m_FUN_1030fff0(A...); bool __thiscall m_FUN_10310010(int *param_2); template<class... A> int m_FUN_10310010(A...); bool __thiscall m_FUN_10310030(int *param_2); template<class... A> int m_FUN_10310030(A...); void __thiscall m_FUN_10310ce0(int *param_2,int param_3); template<class... A> int m_FUN_10310ce0(A...); void __thiscall m_FUN_10310d30(int *param_2,int param_3); template<class... A> int m_FUN_10310d30(A...); void __thiscall m_FUN_10310d80(int *param_2,int param_3); template<class... A> int m_FUN_10310d80(A...); int * __thiscall m_FUN_10311510(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10311510(A...); int * __thiscall m_FUN_10311590(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10311590(A...); int * __thiscall m_FUN_10311610(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10311610(A...); void __thiscall m_FUN_10311d70(undefined4 *param_2); template<class... A> int m_FUN_10311d70(A...); void __thiscall m_FUN_10311d90(undefined4 *param_2); template<class... A> int m_FUN_10311d90(A...); void __thiscall m_FUN_10311db0(undefined4 *param_2); template<class... A> int m_FUN_10311db0(A...); void __thiscall m_FUN_10311dd0(undefined4 *param_2); template<class... A> int m_FUN_10311dd0(A...); void __thiscall m_FUN_10311de0(undefined4 *param_2); template<class... A> int m_FUN_10311de0(A...); void __thiscall m_FUN_10311df0(undefined4 *param_2); template<class... A> int m_FUN_10311df0(A...); void __thiscall m_FUN_10311e00(undefined4 *param_2); template<class... A> int m_FUN_10311e00(A...); void __thiscall m_FUN_10311e10(undefined4 *param_2); template<class... A> int m_FUN_10311e10(A...); void __thiscall m_FUN_10311e20(undefined4 *param_2); template<class... A> int m_FUN_10311e20(A...); void __thiscall m_FUN_10311e30(undefined4 *param_2); template<class... A> int m_FUN_10311e30(A...); void __thiscall m_FUN_10311e40(undefined4 *param_2); template<class... A> int m_FUN_10311e40(A...); void __thiscall m_FUN_10311e50(undefined4 *param_2); template<class... A> int m_FUN_10311e50(A...); void __thiscall m_FUN_10311e60(int *param_2); template<class... A> int m_FUN_10311e60(A...); int * __thiscall m_FUN_103121c0(int *param_2,int *param_3); template<class... A> int m_FUN_103121c0(A...); int * __thiscall m_FUN_103123d0(int *param_2,int *param_3); template<class... A> int m_FUN_103123d0(A...); int __thiscall m_FUN_103125e0(int *param_2); template<class... A> int m_FUN_103125e0(A...); int __thiscall m_FUN_10312610(int *param_2); template<class... A> int m_FUN_10312610(A...); void __thiscall m_FUN_10312a30(undefined4 *param_2); template<class... A> int m_FUN_10312a30(A...); void __thiscall m_FUN_10312a50(undefined4 *param_2); template<class... A> int m_FUN_10312a50(A...); uint __thiscall m_FUN_10312a60(byte *param_2); template<class... A> int m_FUN_10312a60(A...); uint __thiscall m_FUN_10312ac0(byte *param_2); template<class... A> int m_FUN_10312ac0(A...); uint __thiscall m_FUN_10312b20(byte *param_2); template<class... A> int m_FUN_10312b20(A...); void __thiscall m_FUN_103131a0(undefined4 *param_2); template<class... A> int m_FUN_103131a0(A...); void __thiscall m_FUN_103131b0(undefined4 *param_2); template<class... A> int m_FUN_103131b0(A...); void __thiscall m_FUN_103131c0(undefined4 *param_2); template<class... A> int m_FUN_103131c0(A...); void __thiscall m_FUN_103131d0(undefined4 *param_2); template<class... A> int m_FUN_103131d0(A...); void __thiscall m_FUN_103131e0(undefined4 *param_2); template<class... A> int m_FUN_103131e0(A...); void __thiscall m_FUN_103131f0(undefined4 *param_2); template<class... A> int m_FUN_103131f0(A...); undefined4 * __thiscall m_FUN_10314190(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_10314190(A...); int * __thiscall m_FUN_103141c0(int *param_2); template<class... A> int m_FUN_103141c0(A...); int * __thiscall m_FUN_10314200(int *param_2); template<class... A> int m_FUN_10314200(A...); undefined4 * __thiscall m_FUN_10314220(undefined4 *param_2); template<class... A> int m_FUN_10314220(A...); uint * __thiscall m_FUN_10314240(int *param_2); template<class... A> int m_FUN_10314240(A...); int * __thiscall m_FUN_10314270(int *param_2); template<class... A> int m_FUN_10314270(A...); int * __thiscall m_FUN_10314290(int *param_2); template<class... A> int m_FUN_10314290(A...); int * __thiscall m_FUN_103142b0(int *param_2); template<class... A> int m_FUN_103142b0(A...); int * __thiscall m_FUN_103142d0(int *param_2); template<class... A> int m_FUN_103142d0(A...); int * __thiscall m_FUN_103142f0(int *param_2); template<class... A> int m_FUN_103142f0(A...); int * __thiscall m_FUN_10314310(int *param_2); template<class... A> int m_FUN_10314310(A...); int * __thiscall m_FUN_10314630(int *param_2); template<class... A> int m_FUN_10314630(A...); int * __thiscall m_FUN_103146a0(int *param_2); template<class... A> int m_FUN_103146a0(A...); int * __thiscall m_FUN_10314710(int *param_2); template<class... A> int m_FUN_10314710(A...); int * __thiscall m_FUN_10314780(int *param_2); template<class... A> int m_FUN_10314780(A...); void __thiscall m_FUN_10314c30(undefined4 *param_2); template<class... A> int m_FUN_10314c30(A...); void __thiscall m_FUN_10314c60(undefined4 *param_2); template<class... A> int m_FUN_10314c60(A...); void __thiscall m_FUN_10314c90(undefined4 *param_2); template<class... A> int m_FUN_10314c90(A...); undefined4 * __thiscall m_FUN_10316240(undefined4 param_2); template<class... A> int m_FUN_10316240(A...); undefined4 * __thiscall m_FUN_10316280(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10316280(A...); undefined4 * __thiscall m_FUN_103162a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_103162a0(A...); undefined4 * __thiscall m_FUN_103162f0(undefined4 *param_2); template<class... A> int m_FUN_103162f0(A...); undefined4 * __thiscall m_FUN_10316390(undefined4 *param_2); template<class... A> int m_FUN_10316390(A...); undefined4 * __thiscall m_FUN_10316420(undefined4 param_2,undefined4 param_3,undefined1 param_4); template<class... A> int m_FUN_10316420(A...); undefined4 * __thiscall m_FUN_10316470(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10316470(A...); undefined4 * __thiscall m_FUN_10316510(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10316510(A...); undefined4 * __thiscall m_FUN_103165b0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_103165b0(A...); undefined4 * __thiscall m_FUN_10316660(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10316660(A...); undefined4 * __thiscall m_FUN_10316710(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10316710(A...); undefined4 * __thiscall m_FUN_10316860(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10316860(A...); undefined4 * __thiscall m_FUN_10316900(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10316900(A...); undefined4 * __thiscall m_FUN_103169a0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_103169a0(A...); void __thiscall m_FUN_10318fb0(undefined4 param_2); template<class... A> int m_FUN_10318fb0(A...); void __thiscall m_FUN_10318fc0(char param_2); template<class... A> int m_FUN_10318fc0(A...); void __thiscall m_FUN_103190c0(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103190c0(A...); uint __thiscall m_FUN_10319cf0(uint param_2); template<class... A> int m_FUN_10319cf0(A...); void __thiscall m_FUN_1031b130(undefined4 *param_2); template<class... A> int m_FUN_1031b130(A...); void __thiscall m_FUN_1031c8a0(undefined4 *param_2,SCStr *param_3); template<class... A> int m_FUN_1031c8a0(A...); void __thiscall m_FUN_1031dde0(undefined4 *param_2); template<class... A> int m_FUN_1031dde0(A...); void __thiscall m_FUN_1031e6b0(undefined4 *param_2); template<class... A> int m_FUN_1031e6b0(A...); void __thiscall m_FUN_1031fd70(undefined4 *param_2); template<class... A> int m_FUN_1031fd70(A...); SCStr * __thiscall m_FUN_10321850(SCStr *param_2); template<class... A> int m_FUN_10321850(A...); SCStr * __thiscall m_FUN_10321a40(SCStr *param_2); template<class... A> int m_FUN_10321a40(A...); undefined4 __thiscall m_FUN_103272e0(undefined4 *param_2); template<class... A> int m_FUN_103272e0(A...); SCStr * __thiscall m_FUN_10328f30(SCStr *param_2); template<class... A> int m_FUN_10328f30(A...); void __thiscall m_FUN_1032af10(undefined4 param_2); template<class... A> int m_FUN_1032af10(A...); void __thiscall m_FUN_1032af30(undefined4 param_2); template<class... A> int m_FUN_1032af30(A...); void __thiscall m_FUN_1032af50(undefined1 param_2); template<class... A> int m_FUN_1032af50(A...); void __thiscall m_FUN_1032aff0(undefined4 param_2); template<class... A> int m_FUN_1032aff0(A...); void __thiscall m_FUN_1032b000(undefined4 param_2); template<class... A> int m_FUN_1032b000(A...); void __thiscall m_FUN_1032b010(undefined4 param_2); template<class... A> int m_FUN_1032b010(A...); void __thiscall m_FUN_1032b020(undefined4 param_2); template<class... A> int m_FUN_1032b020(A...); void __thiscall m_FUN_1032b030(undefined4 param_2); template<class... A> int m_FUN_1032b030(A...); SCStr * __thiscall m_FUN_1032bf60(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1032bf60(A...); undefined4 * __thiscall m_FUN_1032bf90(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1032bf90(A...); undefined4 * __thiscall m_FUN_1032c040(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_1032c040(A...); undefined4 * __thiscall m_FUN_1032c2b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1032c2b0(A...); undefined4 * __thiscall m_FUN_1032c2d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1032c2d0(A...); undefined4 * __thiscall m_FUN_1032cc70(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1032cc70(A...); undefined4 * __thiscall m_FUN_1032cc90(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1032cc90(A...); undefined4 * __thiscall m_FUN_1032ccb0(int *param_2); template<class... A> int m_FUN_1032ccb0(A...); undefined4 * __thiscall m_FUN_1032ce40(int *param_2); template<class... A> int m_FUN_1032ce40(A...); undefined4 * __thiscall m_FUN_1032cfd0(int *param_2); template<class... A> int m_FUN_1032cfd0(A...); undefined4 * __thiscall m_FUN_1032d160(int *param_2); template<class... A> int m_FUN_1032d160(A...); undefined4 * __thiscall m_FUN_1032d2f0(int *param_2); template<class... A> int m_FUN_1032d2f0(A...); undefined4 * __thiscall m_FUN_1032d480(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1032d480(A...); SCStr * __thiscall m_FUN_1032dc80(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_1032dc80(A...); undefined4 * __thiscall m_FUN_1032dcc0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_1032dcc0(A...); int * __thiscall m_FUN_1032dcf0(int *param_2); template<class... A> int m_FUN_1032dcf0(A...); int * __thiscall m_FUN_1032dd10(int *param_2); template<class... A> int m_FUN_1032dd10(A...); undefined4 * __thiscall m_FUN_1032dd30(undefined4 param_2); template<class... A> int m_FUN_1032dd30(A...); undefined4 * __thiscall m_FUN_1032dd40(undefined4 param_2); template<class... A> int m_FUN_1032dd40(A...); undefined4 * __thiscall m_FUN_1032dd50(undefined4 *param_2,int *param_3); template<class... A> int m_FUN_1032dd50(A...); undefined4 * __thiscall m_FUN_1032dda0(undefined4 *param_2,int *param_3); template<class... A> int m_FUN_1032dda0(A...); undefined4 * __thiscall m_FUN_1032ddf0(undefined4 *param_2); template<class... A> int m_FUN_1032ddf0(A...); void __thiscall m_FUN_1032ea00(undefined4 *param_2); template<class... A> int m_FUN_1032ea00(A...); void __thiscall m_FUN_1032eb20(undefined4 *param_2); template<class... A> int m_FUN_1032eb20(A...); void __thiscall m_FUN_1032f120(int *param_2,int *param_3); template<class... A> int m_FUN_1032f120(A...); int * __thiscall m_FUN_1032f9e0(int *param_2,SCStr *param_3); template<class... A> int m_FUN_1032f9e0(A...); undefined4 * __thiscall m_FUN_10333760(undefined4 *param_2); template<class... A> int m_FUN_10333760(A...); undefined4 * __thiscall m_FUN_103337d0(undefined4 *param_2); template<class... A> int m_FUN_103337d0(A...); undefined4 * __thiscall m_FUN_10333920(undefined4 *param_2); template<class... A> int m_FUN_10333920(A...); undefined4 * __thiscall m_FUN_10333960(undefined4 param_2); template<class... A> int m_FUN_10333960(A...); undefined4 * __thiscall m_FUN_10333980(undefined4 param_2); template<class... A> int m_FUN_10333980(A...); undefined4 * __thiscall m_FUN_103339a0(undefined4 param_2); template<class... A> int m_FUN_103339a0(A...); undefined4 * __thiscall m_FUN_10333ac0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333ac0(A...); undefined4 * __thiscall m_FUN_10333ad0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333ad0(A...); undefined4 * __thiscall m_FUN_10333ae0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333ae0(A...); undefined4 * __thiscall m_FUN_10333af0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333af0(A...); undefined4 * __thiscall m_FUN_10333b00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333b00(A...); undefined4 * __thiscall m_FUN_10333b10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333b10(A...); undefined4 * __thiscall m_FUN_10333ca0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333ca0(A...); undefined4 * __thiscall m_FUN_10333cb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333cb0(A...); undefined4 * __thiscall m_FUN_10333cc0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333cc0(A...); undefined4 * __thiscall m_FUN_10333cd0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333cd0(A...); undefined4 * __thiscall m_FUN_10333d40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10333d40(A...); undefined4 * __thiscall m_FUN_10333d60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10333d60(A...); undefined4 * __thiscall m_FUN_10333d80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333d80(A...); undefined4 * __thiscall m_FUN_10333d90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10333d90(A...); undefined4 * __thiscall m_FUN_10333f20(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10333f20(A...); undefined4 * __thiscall m_FUN_10333f40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10333f40(A...); undefined4 * __thiscall m_FUN_10333f60(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10333f60(A...); undefined4 * __thiscall m_FUN_10334070(undefined4 *param_2); template<class... A> int m_FUN_10334070(A...); undefined4 * __thiscall m_FUN_103340b0(undefined4 *param_2); template<class... A> int m_FUN_103340b0(A...); undefined4 * __thiscall m_FUN_103340f0(undefined4 *param_2); template<class... A> int m_FUN_103340f0(A...); undefined4 * __thiscall m_FUN_10334280(undefined4 *param_2); template<class... A> int m_FUN_10334280(A...); int * __thiscall m_FUN_10336e20(int *param_2); template<class... A> int m_FUN_10336e20(A...); bool __thiscall m_FUN_103371b0(char *param_2); template<class... A> int m_FUN_103371b0(A...); undefined1 __thiscall m_FUN_103371e0(char *param_2); template<class... A> int m_FUN_103371e0(A...); bool __thiscall m_FUN_10337210(int *param_2); template<class... A> int m_FUN_10337210(A...); bool __thiscall m_FUN_10337230(int *param_2); template<class... A> int m_FUN_10337230(A...); bool __thiscall m_FUN_10337250(int *param_2); template<class... A> int m_FUN_10337250(A...); bool __thiscall m_FUN_10337270(int *param_2); template<class... A> int m_FUN_10337270(A...); bool __thiscall m_FUN_10337290(char *param_2); template<class... A> int m_FUN_10337290(A...); undefined1 __thiscall m_FUN_103372c0(char *param_2); template<class... A> int m_FUN_103372c0(A...); bool __thiscall m_FUN_103372f0(int *param_2); template<class... A> int m_FUN_103372f0(A...); bool __thiscall m_FUN_10337310(int *param_2); template<class... A> int m_FUN_10337310(A...); bool __thiscall m_FUN_10337330(int *param_2); template<class... A> int m_FUN_10337330(A...); bool __thiscall m_FUN_10337350(int *param_2); template<class... A> int m_FUN_10337350(A...); int * __thiscall m_FUN_103376a0(int *param_2); template<class... A> int m_FUN_103376a0(A...); int * __thiscall m_FUN_10337740(int *param_2); template<class... A> int m_FUN_10337740(A...); undefined4 * __thiscall m_FUN_10337890(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10337890(A...); void __thiscall m_FUN_10337930(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10337930(A...); void __thiscall m_FUN_10338770(uint param_2); template<class... A> int m_FUN_10338770(A...); uint __thiscall m_FUN_10338840(uint param_2); template<class... A> int m_FUN_10338840(A...); int __thiscall m_FUN_103399a0(int param_2,int param_3); template<class... A> int m_FUN_103399a0(A...); void __thiscall m_FUN_1033a9b0(int param_2); template<class... A> int m_FUN_1033a9b0(A...); void __thiscall m_FUN_1033aa20(int param_2); template<class... A> int m_FUN_1033aa20(A...); void __thiscall m_FUN_1033aa90(int param_2); template<class... A> int m_FUN_1033aa90(A...); void __thiscall m_FUN_1033af50(int param_2); template<class... A> int m_FUN_1033af50(A...); void __thiscall m_FUN_1033af70(int *param_2); template<class... A> int m_FUN_1033af70(A...); void __thiscall m_FUN_1033afd0(int *param_2); template<class... A> int m_FUN_1033afd0(A...); void __thiscall m_FUN_1033b040(int *param_2); template<class... A> int m_FUN_1033b040(A...); void __thiscall m_FUN_1033b0b0(int *param_2); template<class... A> int m_FUN_1033b0b0(A...); void __thiscall m_FUN_1033b190(undefined4 param_2); template<class... A> int m_FUN_1033b190(A...); void __thiscall m_FUN_1033b1a0(undefined4 param_2); template<class... A> int m_FUN_1033b1a0(A...); void __thiscall m_FUN_1033b1b0(undefined4 param_2); template<class... A> int m_FUN_1033b1b0(A...); void __thiscall m_FUN_1033b590(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1033b590(A...); void __thiscall m_FUN_1033b5b0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1033b5b0(A...); void __thiscall m_FUN_1033b5d0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1033b5d0(A...); void __thiscall m_FUN_1033b5f0(undefined4 *param_2); template<class... A> int m_FUN_1033b5f0(A...); void __thiscall m_FUN_1033bfe0(undefined4 *param_2); template<class... A> int m_FUN_1033bfe0(A...); void __thiscall m_FUN_1033bff0(undefined4 *param_2); template<class... A> int m_FUN_1033bff0(A...); void __thiscall m_FUN_1033c000(undefined4 *param_2); template<class... A> int m_FUN_1033c000(A...); void __thiscall m_FUN_1033c040(undefined4 *param_2); template<class... A> int m_FUN_1033c040(A...); void __thiscall m_FUN_1033c810(undefined4 *param_2); template<class... A> int m_FUN_1033c810(A...); void __thiscall m_FUN_1033c820(undefined4 *param_2); template<class... A> int m_FUN_1033c820(A...); void __thiscall m_FUN_1033c860(undefined4 *param_2); template<class... A> int m_FUN_1033c860(A...); void __thiscall m_FUN_1033ca30(int *param_2,int param_3,int param_4); template<class... A> int m_FUN_1033ca30(A...); int * __thiscall m_FUN_1033cce0(int *param_2); template<class... A> int m_FUN_1033cce0(A...); void __thiscall m_FUN_10340640(undefined4 param_2); template<class... A> int m_FUN_10340640(A...); undefined4 * __thiscall m_FUN_103438d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103438d0(A...); undefined4 * __thiscall m_FUN_10343ac0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10343ac0(A...); undefined4 * __thiscall m_FUN_10343af0(undefined4 param_2); template<class... A> int m_FUN_10343af0(A...); undefined4 * __thiscall m_FUN_10343b00(undefined4 param_2); template<class... A> int m_FUN_10343b00(A...); undefined4 * __thiscall m_FUN_10343b10(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343b10(A...); undefined4 * __thiscall m_FUN_10343b40(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343b40(A...); undefined4 * __thiscall m_FUN_10343b70(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343b70(A...); undefined4 * __thiscall m_FUN_10343ba0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343ba0(A...); undefined4 * __thiscall m_FUN_10343bd0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343bd0(A...); undefined4 * __thiscall m_FUN_10343c00(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343c00(A...); undefined4 * __thiscall m_FUN_10343c30(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343c30(A...); undefined4 * __thiscall m_FUN_10343c60(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343c60(A...); undefined4 * __thiscall m_FUN_10343c90(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343c90(A...); undefined4 * __thiscall m_FUN_10343cc0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343cc0(A...); undefined4 * __thiscall m_FUN_10343cf0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343cf0(A...); undefined4 * __thiscall m_FUN_10343d20(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343d20(A...); undefined4 * __thiscall m_FUN_10343d50(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343d50(A...); undefined4 * __thiscall m_FUN_10343d80(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343d80(A...); undefined4 * __thiscall m_FUN_10343db0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343db0(A...); undefined4 * __thiscall m_FUN_10343de0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343de0(A...); undefined4 * __thiscall m_FUN_10343e10(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343e10(A...); undefined4 * __thiscall m_FUN_10343e40(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343e40(A...); undefined4 * __thiscall m_FUN_10343e70(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343e70(A...); undefined4 * __thiscall m_FUN_10343ea0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10343ea0(A...); undefined4 * __thiscall m_FUN_10343ed0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10343ed0(A...); undefined4 * __thiscall m_FUN_10343ee0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10343ee0(A...); undefined4 * __thiscall m_FUN_10343f40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10343f40(A...); undefined4 * __thiscall m_FUN_10343f50(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_10343f50(A...); undefined4 * __thiscall m_FUN_10343f60(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10343f60(A...); undefined4 * __thiscall m_FUN_103440c0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103440c0(A...); void __thiscall m_FUN_10344310(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10344310(A...); void __thiscall m_FUN_103445c0(undefined4 *param_2); template<class... A> int m_FUN_103445c0(A...); void __thiscall m_FUN_103445e0(undefined4 *param_2); template<class... A> int m_FUN_103445e0(A...); void __thiscall m_FUN_103451d0(undefined4 *param_2); template<class... A> int m_FUN_103451d0(A...); undefined1 * __thiscall m_FUN_103459e0(undefined1 *param_2); template<class... A> int m_FUN_103459e0(A...); undefined4 * __thiscall m_FUN_10345a60(undefined4 param_2); template<class... A> int m_FUN_10345a60(A...); undefined4 * __thiscall m_FUN_10345a80(undefined4 param_2); template<class... A> int m_FUN_10345a80(A...); undefined4 * __thiscall m_FUN_10345b70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10345b70(A...); undefined4 * __thiscall m_FUN_10345b80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10345b80(A...); undefined4 * __thiscall m_FUN_10345b90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10345b90(A...); undefined4 * __thiscall m_FUN_10345ba0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10345ba0(A...); undefined4 * __thiscall m_FUN_10345c10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10345c10(A...); undefined4 * __thiscall m_FUN_10345d00(undefined4 *param_2); template<class... A> int m_FUN_10345d00(A...); undefined4 * __thiscall m_FUN_10345d10(undefined4 param_2); template<class... A> int m_FUN_10345d10(A...); undefined4 * __thiscall m_FUN_10345d30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10345d30(A...); undefined4 * __thiscall m_FUN_10345d40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10345d40(A...); undefined4 * __thiscall m_FUN_10345dc0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10345dc0(A...); undefined4 * __thiscall m_FUN_10345f80(undefined4 *param_2); template<class... A> int m_FUN_10345f80(A...); undefined4 * __thiscall m_FUN_10345fb0(undefined4 *param_2); template<class... A> int m_FUN_10345fb0(A...); undefined4 * __thiscall m_FUN_10346970(undefined4 param_2); template<class... A> int m_FUN_10346970(A...); undefined4 * __thiscall m_FUN_10346980(undefined4 param_2,int param_3); template<class... A> int m_FUN_10346980(A...); void __thiscall m_FUN_10346f70(undefined4 *param_2); template<class... A> int m_FUN_10346f70(A...); undefined1 * __thiscall m_FUN_10346f90(undefined1 *param_2); template<class... A> int m_FUN_10346f90(A...); void __thiscall m_FUN_10347000(undefined4 *param_2); template<class... A> int m_FUN_10347000(A...); void __thiscall m_FUN_10347020(undefined1 *param_2); template<class... A> int m_FUN_10347020(A...); ushort __thiscall m_FUN_10347040(char *param_2); template<class... A> int m_FUN_10347040(A...); bool __thiscall m_FUN_10347070(char *param_2); template<class... A> int m_FUN_10347070(A...); undefined4 __thiscall m_FUN_103470a0(char *param_2); template<class... A> int m_FUN_103470a0(A...); bool __thiscall m_FUN_103470d0(char *param_2); template<class... A> int m_FUN_103470d0(A...); bool __thiscall m_FUN_10347100(char *param_2); template<class... A> int m_FUN_10347100(A...); bool __thiscall m_FUN_10347130(int *param_2); template<class... A> int m_FUN_10347130(A...); bool __thiscall m_FUN_10347150(int *param_2); template<class... A> int m_FUN_10347150(A...); bool __thiscall m_FUN_10347170(int *param_2); template<class... A> int m_FUN_10347170(A...); bool __thiscall m_FUN_10347190(int *param_2); template<class... A> int m_FUN_10347190(A...); bool __thiscall m_FUN_103471b0(int *param_2); template<class... A> int m_FUN_103471b0(A...); bool __thiscall m_FUN_103471d0(int *param_2); template<class... A> int m_FUN_103471d0(A...); bool __thiscall m_FUN_103471f0(int *param_2); template<class... A> int m_FUN_103471f0(A...); bool __thiscall m_FUN_10347220(int *param_2); template<class... A> int m_FUN_10347220(A...); SCStr * __thiscall m_FUN_10347370(SCStr *param_2); template<class... A> int m_FUN_10347370(A...); void __thiscall m_FUN_10347480(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10347480(A...); uint __thiscall m_FUN_10347810(uint param_2); template<class... A> int m_FUN_10347810(A...); int * __thiscall m_FUN_10347d50(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10347d50(A...); void __thiscall m_FUN_103483a0(undefined4 *param_2); template<class... A> int m_FUN_103483a0(A...); void __thiscall m_FUN_103483c0(undefined4 *param_2); template<class... A> int m_FUN_103483c0(A...); void __thiscall m_FUN_103483d0(undefined4 *param_2); template<class... A> int m_FUN_103483d0(A...); void __thiscall m_FUN_103483e0(undefined4 *param_2); template<class... A> int m_FUN_103483e0(A...); void __thiscall m_FUN_10348400(undefined4 *param_2); template<class... A> int m_FUN_10348400(A...); bool __thiscall m_FUN_10348960(int param_2,char param_3); template<class... A> int m_FUN_10348960(A...); void __thiscall m_FUN_10349010(undefined4 *param_2); template<class... A> int m_FUN_10349010(A...); uint __thiscall m_FUN_10349020(byte *param_2); template<class... A> int m_FUN_10349020(A...); void __thiscall m_FUN_1034cec0(undefined4 *param_2); template<class... A> int m_FUN_1034cec0(A...); void __thiscall m_FUN_1034ced0(undefined4 *param_2); template<class... A> int m_FUN_1034ced0(A...); void __thiscall m_FUN_1034cee0(undefined4 *param_2); template<class... A> int m_FUN_1034cee0(A...); void __thiscall m_FUN_1034cf00(undefined4 *param_2); template<class... A> int m_FUN_1034cf00(A...); void __thiscall m_FUN_1034cf10(undefined4 *param_2); template<class... A> int m_FUN_1034cf10(A...); SCStr * __thiscall m_FUN_1034d190(SCStr *param_2); template<class... A> int m_FUN_1034d190(A...); SCStr * __thiscall m_FUN_1034d910(SCStr *param_2); template<class... A> int m_FUN_1034d910(A...); void __thiscall m_FUN_1034ebb0(undefined4 *param_2); template<class... A> int m_FUN_1034ebb0(A...); undefined4 * __thiscall m_FUN_1034f3b0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1034f3b0(A...); SCStr * __thiscall m_FUN_1034f3e0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1034f3e0(A...); SCStr * __thiscall m_FUN_1034f410(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1034f410(A...); undefined4 * __thiscall m_FUN_1034f520(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1034f520(A...); undefined4 * __thiscall m_FUN_1034f540(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_1034f540(A...); undefined4 * __thiscall m_FUN_1034f560(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_1034f560(A...); undefined4 * __thiscall m_FUN_1034f580(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_1034f580(A...); undefined4 * __thiscall m_FUN_1034f5a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1034f5a0(A...); undefined4 * __thiscall m_FUN_1034f5c0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1034f5c0(A...); SCStr * __thiscall m_FUN_1034fc60(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1034fc60(A...); undefined4 * __thiscall m_FUN_1034fc90(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_1034fc90(A...); undefined4 * __thiscall m_FUN_1034fca0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1034fca0(A...); undefined4 * __thiscall m_FUN_1034fcc0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1034fcc0(A...); undefined4 * __thiscall m_FUN_1034fce0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1034fce0(A...); undefined4 * __thiscall m_FUN_1034fd20(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_1034fd20(A...); int * __thiscall m_FUN_103503e0(int *param_2); template<class... A> int m_FUN_103503e0(A...); int * __thiscall m_FUN_10350400(int *param_2); template<class... A> int m_FUN_10350400(A...); int * __thiscall m_FUN_10350420(int *param_2); template<class... A> int m_FUN_10350420(A...); int * __thiscall m_FUN_10350440(int *param_2); template<class... A> int m_FUN_10350440(A...); int * __thiscall m_FUN_10350460(int *param_2); template<class... A> int m_FUN_10350460(A...); int * __thiscall m_FUN_10350480(int *param_2); template<class... A> int m_FUN_10350480(A...); undefined4 * __thiscall m_FUN_103504c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_103504c0(A...); undefined4 * __thiscall m_FUN_103504f0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_103504f0(A...); undefined4 * __thiscall m_FUN_10350520(int *param_2); template<class... A> int m_FUN_10350520(A...); undefined4 * __thiscall m_FUN_103506c0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103506c0(A...); SCStr * __thiscall m_FUN_103506f0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103506f0(A...); SCStr * __thiscall m_FUN_10350720(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10350720(A...); SCStr * __thiscall m_FUN_10350770(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10350770(A...); int * __thiscall m_FUN_103507b0(int *param_2); template<class... A> int m_FUN_103507b0(A...); undefined4 * __thiscall m_FUN_103507d0(undefined4 *param_2); template<class... A> int m_FUN_103507d0(A...); int * __thiscall m_FUN_103507f0(int *param_2); template<class... A> int m_FUN_103507f0(A...); undefined4 * __thiscall m_FUN_10350810(undefined4 *param_2); template<class... A> int m_FUN_10350810(A...); int * __thiscall m_FUN_10350830(int *param_2); template<class... A> int m_FUN_10350830(A...); undefined4 * __thiscall m_FUN_10350850(undefined4 *param_2); template<class... A> int m_FUN_10350850(A...); undefined4 * __thiscall m_FUN_103508f0(undefined4 *param_2); template<class... A> int m_FUN_103508f0(A...); int * __thiscall m_FUN_10350ad0(int *param_2); template<class... A> int m_FUN_10350ad0(A...); int * __thiscall m_FUN_10350b50(int *param_2); template<class... A> int m_FUN_10350b50(A...); undefined4 * __thiscall m_FUN_10350e10(undefined4 param_2); template<class... A> int m_FUN_10350e10(A...); int * __thiscall m_FUN_103510b0(int *param_2); template<class... A> int m_FUN_103510b0(A...); int * __thiscall m_FUN_103510d0(int *param_2); template<class... A> int m_FUN_103510d0(A...); int * __thiscall m_FUN_103510f0(int *param_2); template<class... A> int m_FUN_103510f0(A...); int * __thiscall m_FUN_10351110(int *param_2); template<class... A> int m_FUN_10351110(A...); int * __thiscall m_FUN_10351130(int *param_2); template<class... A> int m_FUN_10351130(A...); int * __thiscall m_FUN_10351150(int *param_2); template<class... A> int m_FUN_10351150(A...); int * __thiscall m_FUN_10351170(int *param_2); template<class... A> int m_FUN_10351170(A...); int * __thiscall m_FUN_10351190(int *param_2); template<class... A> int m_FUN_10351190(A...); int * __thiscall m_FUN_103511b0(int *param_2); template<class... A> int m_FUN_103511b0(A...); int * __thiscall m_FUN_103511d0(int *param_2); template<class... A> int m_FUN_103511d0(A...); int * __thiscall m_FUN_10351250(int *param_2); template<class... A> int m_FUN_10351250(A...); int * __thiscall m_FUN_10351270(int *param_2); template<class... A> int m_FUN_10351270(A...); int * __thiscall m_FUN_10351290(int *param_2); template<class... A> int m_FUN_10351290(A...); undefined4 * __thiscall m_FUN_10351310(undefined4 *param_2); template<class... A> int m_FUN_10351310(A...); undefined4 * __thiscall m_FUN_10351330(undefined4 *param_2); template<class... A> int m_FUN_10351330(A...); int * __thiscall m_FUN_10351350(int *param_2); template<class... A> int m_FUN_10351350(A...); int * __thiscall m_FUN_103513f0(int *param_2); template<class... A> int m_FUN_103513f0(A...); undefined4 * __thiscall m_FUN_10351410(undefined4 *param_2); template<class... A> int m_FUN_10351410(A...); int * __thiscall m_FUN_10351430(int *param_2); template<class... A> int m_FUN_10351430(A...); int * __thiscall m_FUN_10351450(int *param_2); template<class... A> int m_FUN_10351450(A...); int * __thiscall m_FUN_103514d0(int *param_2); template<class... A> int m_FUN_103514d0(A...); undefined4 * __thiscall m_FUN_10351510(undefined4 *param_2); template<class... A> int m_FUN_10351510(A...); int * __thiscall m_FUN_10351530(int *param_2); template<class... A> int m_FUN_10351530(A...); int * __thiscall m_FUN_10352210(int *param_2); template<class... A> int m_FUN_10352210(A...); int * __thiscall m_FUN_10352280(int *param_2); template<class... A> int m_FUN_10352280(A...); int * __thiscall m_FUN_10352360(int *param_2); template<class... A> int m_FUN_10352360(A...); int * __thiscall m_FUN_103523d0(int *param_2); template<class... A> int m_FUN_103523d0(A...); void __thiscall m_FUN_10352c90(undefined4 *param_2); template<class... A> int m_FUN_10352c90(A...); void __thiscall m_FUN_10352cc0(undefined4 *param_2); template<class... A> int m_FUN_10352cc0(A...); void __thiscall m_FUN_10352cf0(undefined4 *param_2); template<class... A> int m_FUN_10352cf0(A...); void __thiscall m_FUN_10352dc0(undefined4 *param_2); template<class... A> int m_FUN_10352dc0(A...); void __thiscall m_FUN_10352df0(undefined4 *param_2); template<class... A> int m_FUN_10352df0(A...); void __thiscall m_FUN_10352ed0(undefined4 *param_2); template<class... A> int m_FUN_10352ed0(A...); void __thiscall m_FUN_10352f00(undefined4 *param_2); template<class... A> int m_FUN_10352f00(A...); void __thiscall m_FUN_10352f20(undefined4 *param_2); template<class... A> int m_FUN_10352f20(A...); };

extern int FUN_1005a7b3(...);
extern int FUN_10091f7e(...);
extern int FUN_103177f0(...);
extern int FUN_10317800(...);
extern int FUN_10317810(...);
extern int FUN_10317820(...);
extern int FUN_1031f610(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _localtime64(...);
extern int func_0x10001cda(...);
extern int func_0x10009b7e(...);
extern int func_0x10011310(...);
extern int func_0x100243f7(...);
extern int func_0x1003b7a5(...);
extern int func_0x1003eec8(...);
extern int func_0x1005a920(...);
extern int func_0x1005e6ce(...);
extern int func_0x10062418(...);
extern int func_0x10064b69(...);
extern int func_0x1006a064(...);
extern int func_0x1006b7de(...);
extern int func_0x1008a4d1(...);
extern int func_0x10099fb7(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101b94f0(...);
extern int thunk_FUN_101ba0d0(...);
template<class... A> int __stdcall thunk_FUN_10246170(A...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_103021f0(...);
extern int thunk_FUN_1030d760(...);
template<class... A> int __stdcall thunk_FUN_1030e0d0(A...);
template<class... A> int __stdcall thunk_FUN_1030e350(A...);
extern int thunk_FUN_1030e6e0(...);
extern int thunk_FUN_1030e760(...);
extern int thunk_FUN_1030e7e0(...);
extern int thunk_FUN_1030f6e0(...);
extern int thunk_FUN_1030f760(...);
extern int thunk_FUN_1030f810(...);
extern int thunk_FUN_10312640(...);
extern int thunk_FUN_103265e0(...);
extern int thunk_FUN_1032e8b0(...);
template<class... A> int __stdcall thunk_FUN_1032f250(A...);
extern int thunk_FUN_1032f4d0(...);
extern int thunk_FUN_103307f0(...);
extern int thunk_FUN_10331820(...);
extern int thunk_FUN_10339ac0(...);
extern int thunk_FUN_1033b640(...);
template<class... A> int __stdcall thunk_FUN_1033d2d0(A...);
template<class... A> int __stdcall thunk_FUN_1033ea60(A...);
template<class... A> int __stdcall thunk_FUN_1033f3d0(A...);
extern int thunk_FUN_1033f550(...);
template<class... A> int __stdcall thunk_FUN_10340690(A...);
extern int thunk_FUN_103443d0(...);
extern int thunk_FUN_10344600(...);
extern int thunk_FUN_103447b0(...);
extern int thunk_FUN_10344a10(...);
extern int thunk_FUN_10345240(...);
extern int thunk_FUN_10345520(...);
extern int thunk_FUN_10346a50(...);
extern int thunk_FUN_103556e0(...);
extern int thunk_FUN_10363080(...);
extern int thunk_FUN_103659a0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d0730(...);
template<class... A> int __stdcall thunk_FUN_103d3340(A...);
extern int thunk_FUN_105ee7e0(...);
extern int thunk_FUN_105f2130(...);
extern int thunk_FUN_10c61e30(...);
extern int thunk_FUN_10c62100(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_11082ef0(...);
extern int thunk_FUN_11082f10(...);
extern int thunk_FUN_11093c70(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a0140(...);
extern int thunk_FUN_110d3140(...);
template<class... A> int __stdcall thunk_FUN_110d9820(A...);
extern int thunk_FUN_110d9b30(...);
template<class... A> int __stdcall thunk_FUN_11131cc0(A...);
extern int thunk_FUN_11138290(...);
template<class... A> int __stdcall thunk_FUN_111a06b0(A...);
extern int thunk_FUN_111a0720(...);
extern int thunk_FUN_111c06e0(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1124f350(...);
template<class... A> int __stdcall thunk_FUN_1124f3c0(A...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_1127a020(...);
extern int thunk_FUN_1127a510(...);
extern int thunk_FUN_1127c6b0(...);
extern int thunk_FUN_1127caf0(...);
extern int thunk_FUN_1127cb00(...);
extern int thunk_FUN_1127ccf0(...);
extern int thunk_FUN_1127cd20(...);
extern int thunk_FUN_112a7c30(...);
extern int thunk_FUN_112a7f20(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_114568e0(...);
extern int thunk_FUN_11456f80(...);
extern int thunk_FUN_11457240(...);
extern int thunk_FUN_11457320(...);
extern int thunk_FUN_11457630(...);
extern int thunk_FUN_114576f0(...);
extern int thunk_FUN_114577b0(...);
extern int thunk_FUN_11457fd0(...);
extern int thunk_FUN_11458800(...);
extern int thunk_FUN_11458a30(...);
extern int thunk_FUN_11458a40(...);
extern int thunk_FUN_11458e90(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c720(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11881128;
extern int DAT_11882ff0;
extern int DAT_118872c0;
extern int DAT_1188bc94;
extern int DAT_1188f3d4;
extern int DAT_1188feb0;
extern int DAT_118939bc;
extern int DAT_11d330dc;
extern int DAT_12126b84;
extern int DAT_121a1028;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RStereoPairZPCandidateEnumerator;
extern int ghidra_vftable_RUpnpAVTPauseAIOOp;
extern int ghidra_vftable_RUpnpAVTStopAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp;
extern int ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp;
extern int ghidra_vftable_RUpnpDPGetLEDStateAIOOp;
extern int ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp;
extern int ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp;
extern int ghidra_vftable_RUpnpDPSetLEDStateAIOOp;
extern int ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp;
extern int ghidra_vftable_SCIDevice;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpConnectionManagerGetProtocolInfo;
extern int ghidra_vftable_SCIOpDevicePropertiesGetButtonLockState;
extern int ghidra_vftable_SCIOpDevicePropertiesGetLEDState;
extern int ghidra_vftable_SCIOpDevicePropertiesSetButtonLockState;
extern int ghidra_vftable_SCIOpDevicePropertiesSetLEDState;
extern int ghidra_vftable_SCIPortableDevice;
extern int ghidra_vftable_SCIVersionRange;
extern int ghidra_vftable_SCOpConnectionManagerGetProtocolInfo;
extern int ghidra_vftable_SCOpDevicePropertiesGetButtonLockState;
extern int ghidra_vftable_SCOpDevicePropertiesGetLEDState;
extern int ghidra_vftable_SCOpDevicePropertiesSetButtonLockState;
extern int ghidra_vftable_SCOpDevicePropertiesSetLEDState;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCTestPoint;
extern int ghidra_vftable_SCWrapperObj;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_AX;
extern int in_EAX;
extern int uStack_10;
extern int uStack_14;
extern int uStack_18;
extern int uStack_1c;
extern int uStack_24;
extern int uStack_28;
extern int uStack_2c;
extern int uStack_4;
extern int uStack_70;
extern int uStack_8;
extern int uStack_b8;
extern int uStack_ec;
extern int uStack_f0;
extern int uStack_f4;
extern int uStack_f8;
extern int unaff_EBX;
extern int unaff_ESI;
extern undefined1 LAB_10312324[];
extern undefined1 LAB_10312534[];
extern undefined1 LAB_1031ca82[];
extern undefined1 LAB_1031cafe[];
extern undefined1 LAB_1031cbf8[];
extern undefined1 LAB_1031f70f[];
extern undefined1 LAB_1033f767[];
extern undefined1 LAB_10348e87[];
extern undefined1 LAB_110d33c5[];
extern undefined1 LAB_110d33ca[];
extern undefined1 LAB_110d6634[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11532480[];
extern undefined1 LAB_115324b0[];
extern undefined1 LAB_115324e0[];
extern undefined1 LAB_11532510[];
extern undefined1 LAB_11532540[];
extern undefined1 LAB_1153354d[];
extern undefined1 LAB_115396ad[];
extern undefined1 LAB_1154fc30[];
extern undefined1 LAB_117adaf7[];
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d270(void);
template<class... A> int FUN_1030d270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d280(void);
template<class... A> int FUN_1030d280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d290(void);
template<class... A> int FUN_1030d290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d2a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030d2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d2b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030d2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d2c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030d2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d2d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030d2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d2e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030d2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d2f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030d2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d300(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030d300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d310(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030d310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d320(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030d320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d330(void);
template<class... A> int FUN_1030d330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d340(void);
template<class... A> int FUN_1030d340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d350(void);
template<class... A> int FUN_1030d350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d360(void);
template<class... A> int FUN_1030d360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d370(void);
template<class... A> int FUN_1030d370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d380(void);
template<class... A> int FUN_1030d380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1030d5f0(uint param_1,byte *param_2);
template<class... A> int FUN_1030d5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1030d640(uint param_1,byte *param_2);
template<class... A> int FUN_1030d640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1030d690(uint param_1,byte *param_2);
template<class... A> int FUN_1030d690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d6e0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_1030d6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d720(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_1030d720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d7d0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1030d7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d7f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1030d7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d810(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1030d810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d830(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1030d830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d850(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1030d850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030d870(undefined4 param_1,int param_2);
template<class... A> int FUN_1030d870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1030d8c0(uint param_1);
template<class... A> int FUN_1030d8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030d8e0(undefined4 *param_1);
template<class... A> int FUN_1030d8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030d8f0(undefined4 *param_1);
template<class... A> int FUN_1030d8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030d900(undefined4 *param_1);
template<class... A> int FUN_1030d900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1030d910(byte *param_1);
template<class... A> int FUN_1030d910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1030d960(byte *param_1);
template<class... A> int FUN_1030d960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1030d9b0(byte *param_1);
template<class... A> int FUN_1030d9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030da00(undefined4 param_1);
template<class... A> int FUN_1030da00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030dd90(undefined4 *param_1);
template<class... A> int FUN_1030dd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030dda0(undefined4 param_1);
template<class... A> int FUN_1030dda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ddb0(undefined4 param_1);
template<class... A> int FUN_1030ddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ddc0(undefined4 param_1);
template<class... A> int FUN_1030ddc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ddd0(undefined4 param_1);
template<class... A> int FUN_1030ddd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030dde0(undefined4 param_1);
template<class... A> int FUN_1030dde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ddf0(undefined4 param_1);
template<class... A> int FUN_1030ddf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de00(undefined4 param_1);
template<class... A> int FUN_1030de00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de10(undefined4 param_1);
template<class... A> int FUN_1030de10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de20(undefined4 param_1);
template<class... A> int FUN_1030de20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de30(undefined4 param_1);
template<class... A> int FUN_1030de30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de40(undefined4 param_1);
template<class... A> int FUN_1030de40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de50(undefined4 param_1);
template<class... A> int FUN_1030de50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de60(undefined4 param_1);
template<class... A> int FUN_1030de60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de70(undefined4 param_1);
template<class... A> int FUN_1030de70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de80(undefined4 param_1);
template<class... A> int FUN_1030de80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030de90(undefined4 param_1);
template<class... A> int FUN_1030de90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030dea0(undefined4 param_1);
template<class... A> int FUN_1030dea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030deb0(undefined4 param_1);
template<class... A> int FUN_1030deb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030dec0(undefined4 param_1);
template<class... A> int FUN_1030dec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ded0(undefined4 param_1);
template<class... A> int FUN_1030ded0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030dee0(undefined4 param_1);
template<class... A> int FUN_1030dee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030def0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1030def0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030df00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1030df00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030e070(void);
template<class... A> int FUN_1030e070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030e080(void);
template<class... A> int FUN_1030e080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030e090(undefined4 param_1,int param_2);
template<class... A> int FUN_1030e090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e680(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030e680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e6a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030e6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e6c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1030e6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e960(undefined4 param_1);
template<class... A> int FUN_1030e960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e970(undefined4 param_1);
template<class... A> int FUN_1030e970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e980(undefined4 param_1);
template<class... A> int FUN_1030e980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e990(undefined4 param_1);
template<class... A> int FUN_1030e990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e9a0(undefined4 param_1);
template<class... A> int FUN_1030e9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e9b0(undefined4 param_1);
template<class... A> int FUN_1030e9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e9c0(undefined4 param_1);
template<class... A> int FUN_1030e9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e9d0(undefined4 param_1);
template<class... A> int FUN_1030e9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e9e0(undefined4 param_1);
template<class... A> int FUN_1030e9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030e9f0(undefined4 param_1);
template<class... A> int FUN_1030e9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ea00(undefined4 param_1);
template<class... A> int FUN_1030ea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ea10(undefined4 param_1);
template<class... A> int FUN_1030ea10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ea20(undefined4 param_1);
template<class... A> int FUN_1030ea20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ea30(undefined4 param_1);
template<class... A> int FUN_1030ea30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ea40(undefined4 param_1);
template<class... A> int FUN_1030ea40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ea50(undefined4 param_1);
template<class... A> int FUN_1030ea50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ea60(undefined4 param_1);
template<class... A> int FUN_1030ea60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ea70(undefined4 param_1);
template<class... A> int FUN_1030ea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030ea80(undefined4 param_1);
template<class... A> int FUN_1030ea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030ea90(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_1030ea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1030eaa0(undefined4 param_1);
template<class... A> int FUN_1030eaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030eab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1030eab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030eae0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1030eae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030eb10(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_1030eb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030eed0(undefined4 *param_1);
template<class... A> int FUN_1030eed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030eef0(undefined4 *param_1);
template<class... A> int FUN_1030eef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030ef10(undefined4 *param_1);
template<class... A> int FUN_1030ef10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030ef30(undefined4 *param_1);
template<class... A> int FUN_1030ef30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030ef40(undefined4 *param_1);
template<class... A> int FUN_1030ef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030ef50(undefined4 *param_1);
template<class... A> int FUN_1030ef50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030eff0(undefined4 *param_1);
template<class... A> int FUN_1030eff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030f010(undefined4 *param_1);
template<class... A> int FUN_1030f010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1030f030(undefined4 *param_1);
template<class... A> int FUN_1030f030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1030f050(undefined4 param_1);
template<class... A> int FUN_1030f050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1030f060(undefined4 param_1);
template<class... A> int FUN_1030f060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1030f070(undefined4 param_1);
template<class... A> int FUN_1030f070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030fab0(void);
template<class... A> int FUN_1030fab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030fac0(void);
template<class... A> int FUN_1030fac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1030fad0(void);
template<class... A> int FUN_1030fad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fba0(int param_1);
template<class... A> int FUN_1030fba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fbe0(int param_1);
template<class... A> int FUN_1030fbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fbf0(int param_1);
template<class... A> int FUN_1030fbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fc90(int *param_1);
template<class... A> int FUN_1030fc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fd10(int *param_1);
template<class... A> int FUN_1030fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fdc0(int *param_1);
template<class... A> int FUN_1030fdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fe70(int param_1);
template<class... A> int FUN_1030fe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030fe90(int param_1);
template<class... A> int FUN_1030fe90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1030feb0(int param_1);
template<class... A> int FUN_1030feb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10310080(int *param_1);
template<class... A> int FUN_10310080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10310090(int *param_1);
template<class... A> int FUN_10310090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103100a0(int *param_1);
template<class... A> int FUN_103100a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103100b0(int *param_1);
template<class... A> int FUN_103100b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103100c0(int *param_1);
template<class... A> int FUN_103100c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103100d0(int *param_1);
template<class... A> int FUN_103100d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103100e0(int *param_1);
template<class... A> int FUN_103100e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103100f0(int *param_1);
template<class... A> int FUN_103100f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10310100(undefined4 *param_1);
template<class... A> int FUN_10310100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10310110(undefined4 *param_1);
template<class... A> int FUN_10310110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10310120(undefined4 *param_1);
template<class... A> int FUN_10310120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10310130(undefined4 *param_1);
template<class... A> int FUN_10310130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10310140(undefined4 *param_1);
template<class... A> int FUN_10310140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10310150(int *param_1);
template<class... A> int FUN_10310150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10310160(int *param_1);
template<class... A> int FUN_10310160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10310170(int *param_1);
template<class... A> int FUN_10310170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10310180(byte *param_1);
template<class... A> int __stdcall FUN_10310180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_103101d0(byte *param_1);
template<class... A> int __stdcall FUN_103101d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10310220(byte *param_1);
template<class... A> int __stdcall FUN_10310220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10310270(int *param_1,int *param_2);
template<class... A> int FUN_10310270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10310290(int *param_1,int *param_2);
template<class... A> int FUN_10310290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_103102b0(int *param_1,int *param_2);
template<class... A> int FUN_103102b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10310380(undefined4 *param_1);
template<class... A> int FUN_10310380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103103a0(undefined4 *param_1);
template<class... A> int FUN_103103a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103103c0(undefined4 *param_1);
template<class... A> int FUN_103103c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10310860(int param_1);
template<class... A> int FUN_10310860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10310880(int param_1);
template<class... A> int FUN_10310880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103108a0(int param_1);
template<class... A> int FUN_103108a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103108c0(float *param_1);
template<class... A> int FUN_103108c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10310920(float *param_1);
template<class... A> int FUN_10310920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10310980(float *param_1);
template<class... A> int FUN_10310980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10310bf0(byte *param_1);
template<class... A> int FUN_10310bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10310c40(byte *param_1);
template<class... A> int FUN_10310c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10310c90(byte *param_1);
template<class... A> int FUN_10310c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10310dd0(undefined4 param_1);
template<class... A> int FUN_10310dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10310de0(undefined4 param_1);
template<class... A> int FUN_10310de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311330(undefined4 param_1);
template<class... A> int FUN_10311330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311340(undefined4 param_1);
template<class... A> int FUN_10311340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311350(undefined4 param_1);
template<class... A> int FUN_10311350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311360(undefined4 param_1);
template<class... A> int FUN_10311360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311370(undefined4 param_1);
template<class... A> int FUN_10311370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311380(undefined4 param_1);
template<class... A> int FUN_10311380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311390(undefined4 param_1);
template<class... A> int FUN_10311390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103113a0(undefined4 param_1);
template<class... A> int FUN_103113a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103113b0(undefined4 param_1);
template<class... A> int FUN_103113b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103113c0(undefined4 param_1);
template<class... A> int FUN_103113c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103113d0(undefined4 param_1);
template<class... A> int FUN_103113d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103113e0(undefined4 param_1);
template<class... A> int FUN_103113e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103113f0(undefined4 param_1);
template<class... A> int FUN_103113f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311400(undefined4 param_1);
template<class... A> int FUN_10311400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311410(undefined4 param_1);
template<class... A> int FUN_10311410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311420(undefined4 param_1);
template<class... A> int FUN_10311420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311430(undefined4 param_1);
template<class... A> int FUN_10311430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311440(undefined4 param_1);
template<class... A> int FUN_10311440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311450(undefined4 param_1);
template<class... A> int FUN_10311450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311460(undefined4 param_1);
template<class... A> int FUN_10311460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311470(undefined4 param_1);
template<class... A> int FUN_10311470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311480(undefined4 param_1);
template<class... A> int FUN_10311480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311490(undefined4 param_1);
template<class... A> int FUN_10311490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103114a0(undefined4 param_1);
template<class... A> int FUN_103114a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103114b0(undefined4 param_1);
template<class... A> int FUN_103114b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103114c0(undefined4 param_1);
template<class... A> int FUN_103114c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103114d0(undefined4 param_1);
template<class... A> int FUN_103114d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103114e0(undefined4 param_1);
template<class... A> int FUN_103114e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103114f0(undefined4 param_1);
template<class... A> int FUN_103114f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311500(undefined4 param_1);
template<class... A> int FUN_10311500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10311690(undefined4 param_1);
template<class... A> int FUN_10311690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103116a0(undefined4 param_1);
template<class... A> int FUN_103116a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103116b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_103116b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103116c0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_103116c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103116d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_103116d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103116e0(undefined4 param_1);
template<class... A> int FUN_103116e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103116f0(undefined4 param_1);
template<class... A> int FUN_103116f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311700(undefined4 param_1);
template<class... A> int FUN_10311700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311710(undefined4 param_1);
template<class... A> int FUN_10311710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311720(undefined4 param_1);
template<class... A> int FUN_10311720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311730(undefined4 param_1);
template<class... A> int FUN_10311730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10311890(void);
template<class... A> int FUN_10311890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103118a0(void);
template<class... A> int FUN_103118a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103118b0(void);
template<class... A> int FUN_103118b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103118c0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_103118c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103118d0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_103118d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103118e0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_103118e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311b00(int param_1);
template<class... A> int FUN_10311b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311b10(int param_1);
template<class... A> int FUN_10311b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10311b20(int param_1);
template<class... A> int FUN_10311b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10311b30(undefined4 *param_1);
template<class... A> int FUN_10311b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10311b40(undefined4 *param_1);
template<class... A> int FUN_10311b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10311b50(undefined4 *param_1);
template<class... A> int FUN_10311b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10311cb0(int *param_1);
template<class... A> int FUN_10311cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10311d00(int *param_1);
template<class... A> int FUN_10311d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103126b0(int param_1,int param_2,int param_3);
template<class... A> int FUN_103126b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103126f0(int param_1,int param_2,int param_3);
template<class... A> int FUN_103126f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312730(int param_1,int param_2,int param_3);
template<class... A> int FUN_10312730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10312770(uint param_1);
template<class... A> int FUN_10312770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103127f0(uint param_1);
template<class... A> int FUN_103127f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10312870(uint param_1);
template<class... A> int FUN_10312870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103128e0(uint param_1);
template<class... A> int FUN_103128e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10312950(uint param_1);
template<class... A> int FUN_10312950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103129c0(uint param_1);
template<class... A> int FUN_103129c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10312b80(int param_1);
template<class... A> int FUN_10312b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10312b90(int param_1);
template<class... A> int FUN_10312b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10312ba0(int param_1);
template<class... A> int FUN_10312ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312bb0(void);
template<class... A> int FUN_10312bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312c00(int param_1);
template<class... A> int FUN_10312c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312c80(int param_1);
template<class... A> int FUN_10312c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312d20(int param_1);
template<class... A> int FUN_10312d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312dc0(int *param_1);
template<class... A> int FUN_10312dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10312e10(int *param_1);
template<class... A> int FUN_10312e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312e90(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10312e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312ee0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10312ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10312f30(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10312f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10312f80(int param_1,int param_2);
template<class... A> int FUN_10312f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10312fd0(int param_1,int param_2);
template<class... A> int FUN_10312fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10313020(int param_1,int param_2);
template<class... A> int FUN_10313020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10313070(int param_1,int param_2);
template<class... A> int FUN_10313070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103130c0(int param_1,int param_2);
template<class... A> int FUN_103130c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10313110(int param_1,int param_2);
template<class... A> int FUN_10313110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10313160(int param_1);
template<class... A> int FUN_10313160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10313170(int param_1);
template<class... A> int FUN_10313170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10313180(int param_1);
template<class... A> int FUN_10313180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10313190(int param_1);
template<class... A> int FUN_10313190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103136e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_103136e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10313700(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10313700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_103137d0(float *param_1);
template<class... A> int FUN_103137d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_103137e0(float *param_1);
template<class... A> int FUN_103137e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_103137f0(float *param_1);
template<class... A> int FUN_103137f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313800(void);
template<class... A> int FUN_10313800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313810(void);
template<class... A> int FUN_10313810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313820(void);
template<class... A> int FUN_10313820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313830(void);
template<class... A> int FUN_10313830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313840(void);
template<class... A> int FUN_10313840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313850(void);
template<class... A> int FUN_10313850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313860(void);
template<class... A> int FUN_10313860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313870(void);
template<class... A> int FUN_10313870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313880(void);
template<class... A> int FUN_10313880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10313890(void);
template<class... A> int FUN_10313890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103138a0(void);
template<class... A> int FUN_103138a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103138b0(void);
template<class... A> int FUN_103138b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103139c0(undefined4 param_1);
template<class... A> int FUN_103139c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10313ab0(int param_1);
template<class... A> int FUN_10313ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10313ac0(int *param_1);
template<class... A> int FUN_10313ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10313ad0(int *param_1);
template<class... A> int FUN_10313ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10313ae0(int *param_1);
template<class... A> int FUN_10313ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10313af0(int param_1);
template<class... A> int FUN_10313af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10313c80(int param_1);
template<class... A> int FUN_10313c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10313e30(int *param_1);
template<class... A> int FUN_10313e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ longlong __fastcall FUN_10313f90(int *param_1);
template<class... A> int FUN_10313f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10314000(int *param_1);
template<class... A> int FUN_10314000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10314120(undefined4 param_1);
template<class... A> int FUN_10314120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10314140(undefined4 param_1);
template<class... A> int FUN_10314140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10314170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10314170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10314f80(undefined4 *param_1);
template<class... A> int FUN_10314f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103150d0(undefined4 param_1);
template<class... A> int FUN_103150d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103150e0(undefined4 param_1);
template<class... A> int FUN_103150e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103150f0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_103150f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10315130(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10315130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10315160(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10315160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10315190(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10315190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10315210(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10315210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10315230(undefined4 param_1);
template<class... A> int FUN_10315230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10315240(undefined4 param_1);
template<class... A> int FUN_10315240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10315250(undefined4 param_1);
template<class... A> int FUN_10315250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10315260(undefined4 param_1);
template<class... A> int FUN_10315260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10315270(undefined4 param_1);
template<class... A> int FUN_10315270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10315280(void);
template<class... A> int FUN_10315280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10315290(void);
template<class... A> int FUN_10315290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103152a0(void);
template<class... A> int FUN_103152a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103152b0(void);
template<class... A> int FUN_103152b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103152c0(void);
template<class... A> int FUN_103152c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103152d0(void);
template<class... A> int FUN_103152d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103152e0(void);
template<class... A> int FUN_103152e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103152f0(void);
template<class... A> int FUN_103152f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10315300(void);
template<class... A> int FUN_10315300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10315310(void);
template<class... A> int FUN_10315310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10315320(void);
template<class... A> int FUN_10315320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10315330(void);
template<class... A> int FUN_10315330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10315340(undefined4 param_1);
template<class... A> int FUN_10315340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10315350(undefined4 param_1);
template<class... A> int FUN_10315350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315630(undefined4 *param_1);
template<class... A> int FUN_10315630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315660(undefined4 *param_1);
template<class... A> int FUN_10315660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315690(undefined4 *param_1);
template<class... A> int FUN_10315690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103156c0(undefined4 *param_1);
template<class... A> int FUN_103156c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103156f0(undefined4 *param_1);
template<class... A> int FUN_103156f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315720(undefined4 *param_1);
template<class... A> int FUN_10315720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315750(undefined4 *param_1);
template<class... A> int FUN_10315750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10315fe0(undefined4 *param_1);
template<class... A> int FUN_10315fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316000(undefined4 *param_1);
template<class... A> int FUN_10316000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316020(undefined4 *param_1);
template<class... A> int FUN_10316020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316040(undefined4 *param_1);
template<class... A> int FUN_10316040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103162c0(undefined4 *param_1);
template<class... A> int FUN_103162c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103162e0(undefined4 param_1);
template<class... A> int FUN_103162e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316330(undefined4 *param_1);
template<class... A> int FUN_10316330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316350(undefined4 *param_1);
template<class... A> int FUN_10316350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103163d0(undefined4 *param_1);
template<class... A> int FUN_103163d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103163f0(int param_1);
template<class... A> int FUN_103163f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316f90(undefined4 *param_1);
template<class... A> int FUN_10316f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316fa0(undefined4 *param_1);
template<class... A> int FUN_10316fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316fb0(undefined4 *param_1);
template<class... A> int FUN_10316fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316fc0(undefined4 *param_1);
template<class... A> int FUN_10316fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316fd0(undefined4 *param_1);
template<class... A> int FUN_10316fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316fe0(undefined4 *param_1);
template<class... A> int FUN_10316fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10316ff0(undefined4 *param_1);
template<class... A> int FUN_10316ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10317000(undefined4 *param_1);
template<class... A> int FUN_10317000(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_103177f0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10317800 (ram,0x101ba14a) */ void __fastcall FUN_10317800(undefined4 *param_1);
/* WARNING: Removing unreachable block_10317810 (ram,0x101ba14a) */ void __fastcall FUN_10317810(undefined4 *param_1);
/* WARNING: Removing unreachable block_10317820 (ram,0x101ba14a) */ void __fastcall FUN_10317820(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10317840(undefined4 *param_1);
template<class... A> int FUN_10317840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318910(undefined4 *param_1);
template<class... A> int FUN_10318910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318940(undefined4 *param_1);
template<class... A> int FUN_10318940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318970(undefined4 *param_1);
template<class... A> int FUN_10318970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103189a0(undefined4 *param_1);
template<class... A> int FUN_103189a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103189d0(undefined4 *param_1);
template<class... A> int FUN_103189d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a00(undefined4 *param_1);
template<class... A> int FUN_10318a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a30(undefined4 *param_1);
template<class... A> int FUN_10318a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a60(undefined4 *param_1);
template<class... A> int FUN_10318a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318a90(undefined4 *param_1);
template<class... A> int FUN_10318a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318dd0(undefined4 *param_1);
template<class... A> int FUN_10318dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318de0(undefined4 *param_1);
template<class... A> int FUN_10318de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318df0(undefined4 *param_1);
template<class... A> int FUN_10318df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e00(undefined4 *param_1);
template<class... A> int FUN_10318e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e10(undefined4 *param_1);
template<class... A> int FUN_10318e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e20(undefined4 *param_1);
template<class... A> int FUN_10318e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e40(undefined4 *param_1);
template<class... A> int FUN_10318e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e50(undefined4 *param_1);
template<class... A> int FUN_10318e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e70(undefined4 *param_1);
template<class... A> int FUN_10318e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318e90(undefined4 *param_1);
template<class... A> int FUN_10318e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318eb0(undefined4 *param_1);
template<class... A> int FUN_10318eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10318ed0(undefined4 *param_1);
template<class... A> int FUN_10318ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10318fd0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10318fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10318ff0(undefined4 *param_1);
template<class... A> int FUN_10318ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10319000(int *param_1);
template<class... A> int FUN_10319000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319010(undefined4 *param_1);
template<class... A> int FUN_10319010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319020(undefined4 *param_1);
template<class... A> int FUN_10319020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319030(undefined4 *param_1);
template<class... A> int FUN_10319030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319040(undefined4 *param_1);
template<class... A> int FUN_10319040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319050(undefined4 *param_1);
template<class... A> int FUN_10319050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10319060(int *param_1);
template<class... A> int FUN_10319060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319070(undefined4 *param_1);
template<class... A> int FUN_10319070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319080(int param_1);
template<class... A> int FUN_10319080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319090(int param_1);
template<class... A> int FUN_10319090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103190a0(int param_1);
template<class... A> int FUN_103190a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103190b0(undefined4 *param_1);
template<class... A> int FUN_103190b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103190e0(int *param_1);
template<class... A> int FUN_103190e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10319ce0(int param_1);
template<class... A> int FUN_10319ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319dc0(undefined4 param_1);
template<class... A> int FUN_10319dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319dd0(undefined4 param_1);
template<class... A> int FUN_10319dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10319de0(undefined4 param_1);
template<class... A> int FUN_10319de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void  __stdcall FUN_10319df0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10319df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10319e00(undefined4 *param_1);
template<class... A> int FUN_10319e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031b140(int param_1);
template<class... A> int FUN_1031b140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1031b2b0(int *param_1);
template<class... A> int FUN_1031b2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031dbe0(undefined4 *param_1);
template<class... A> int FUN_1031dbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031dc00(undefined4 *param_1);
template<class... A> int FUN_1031dc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031dc10(undefined4 *param_1);
template<class... A> int FUN_1031dc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031dc20(undefined4 *param_1);
template<class... A> int FUN_1031dc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031dc30(undefined4 *param_1);
template<class... A> int FUN_1031dc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031dc40(undefined4 *param_1);
template<class... A> int FUN_1031dc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1031ddf0(int param_1);
template<class... A> int FUN_1031ddf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031e010(int param_1);
template<class... A> int FUN_1031e010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1031e300(int param_1);
template<class... A> int FUN_1031e300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031f360(int param_1);
template<class... A> int FUN_1031f360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1031f6c0(undefined4 param_1);
template<class... A> int __stdcall FUN_1031f6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031f6e0(int param_1);
template<class... A> int FUN_1031f6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1031f980(int param_1);
template<class... A> int FUN_1031f980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1031fbe0(int param_1);
template<class... A> int FUN_1031fbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10320050(int param_1);
template<class... A> int FUN_10320050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103201d0(int param_1);
template<class... A> int FUN_103201d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10320370(int param_1);
template<class... A> int FUN_10320370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103206a0(int param_1);
template<class... A> int FUN_103206a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10320860(int param_1);
template<class... A> int FUN_10320860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10320870(int param_1);
template<class... A> int FUN_10320870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10320880(int param_1);
template<class... A> int FUN_10320880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10320890(int param_1);
template<class... A> int FUN_10320890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10320a90(int param_1);
template<class... A> int FUN_10320a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10321830(int param_1);
template<class... A> int FUN_10321830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103218a0(int param_1);
template<class... A> int FUN_103218a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103218b0(int param_1);
template<class... A> int FUN_103218b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10321a30(int param_1);
template<class... A> int FUN_10321a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10322020(int param_1);
template<class... A> int FUN_10322020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10322d60(int param_1);
template<class... A> int FUN_10322d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10322d70(int param_1);
template<class... A> int FUN_10322d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10322e50(int param_1);
template<class... A> int FUN_10322e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10322f00(int param_1);
template<class... A> int FUN_10322f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10323ae0(int param_1);
template<class... A> int FUN_10323ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10323cc0(int param_1);
template<class... A> int FUN_10323cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10323de0(int param_1);
template<class... A> int FUN_10323de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10323e40(int param_1);
template<class... A> int FUN_10323e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10323e50(int param_1);
template<class... A> int FUN_10323e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10324080(int param_1);
template<class... A> int FUN_10324080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103240d0(int param_1);
template<class... A> int FUN_103240d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10325540(int param_1);
template<class... A> int FUN_10325540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10325550(int param_1);
template<class... A> int FUN_10325550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10325570(int param_1);
template<class... A> int FUN_10325570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103257a0(int param_1);
template<class... A> int FUN_103257a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103258c0(int param_1);
template<class... A> int FUN_103258c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103258d0(int param_1);
template<class... A> int FUN_103258d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103258e0(int param_1);
template<class... A> int FUN_103258e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10325910(int param_1);
template<class... A> int FUN_10325910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10325950(int param_1);
template<class... A> int FUN_10325950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10325df0(void);
template<class... A> int FUN_10325df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10326880(void);
template<class... A> int FUN_10326880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10326890(void);
template<class... A> int FUN_10326890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103268a0(void);
template<class... A> int FUN_103268a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103268b0(void);
template<class... A> int FUN_103268b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103268c0(void);
template<class... A> int FUN_103268c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103268d0(void);
template<class... A> int FUN_103268d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103268e0(void);
template<class... A> int FUN_103268e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103268f0(void);
template<class... A> int FUN_103268f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10326900(void);
template<class... A> int FUN_10326900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10326910(void);
template<class... A> int FUN_10326910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10326920(void);
template<class... A> int FUN_10326920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10326930(void);
template<class... A> int FUN_10326930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10326e20(int param_1);
template<class... A> int FUN_10326e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10327390(int param_1);
template<class... A> int FUN_10327390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10327530(int param_1);
template<class... A> int FUN_10327530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10327670(int param_1);
template<class... A> int FUN_10327670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10327740(int param_1);
template<class... A> int FUN_10327740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103277c0(int param_1);
template<class... A> int FUN_103277c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10327880(int *param_1);
template<class... A> int FUN_10327880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10327890(int *param_1);
template<class... A> int FUN_10327890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103278a0(int *param_1);
template<class... A> int FUN_103278a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103278b0(int *param_1);
template<class... A> int FUN_103278b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10327980(int param_1);
template<class... A> int FUN_10327980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10327a80(int param_1);
template<class... A> int FUN_10327a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10327f60(int param_1);
template<class... A> int FUN_10327f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10327f80(int *param_1);
template<class... A> int FUN_10327f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10327f90(int *param_1);
template<class... A> int FUN_10327f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10327fa0(int *param_1);
template<class... A> int FUN_10327fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10327fb0(int *param_1);
template<class... A> int FUN_10327fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10327fc0(int *param_1);
template<class... A> int FUN_10327fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10328620(int param_1);
template<class... A> int FUN_10328620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103286c0(int param_1);
template<class... A> int FUN_103286c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103287a0(undefined1 *param_1);
template<class... A> int FUN_103287a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10328ec0(int param_1);
template<class... A> int FUN_10328ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10328ed0(void);
template<class... A> int FUN_10328ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10328ee0(void);
template<class... A> int FUN_10328ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10328ef0(int param_1);
template<class... A> int FUN_10328ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10328f20(undefined4 param_1);
template<class... A> int FUN_10328f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10328fa0(int param_1);
template<class... A> int FUN_10328fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10328fb0(int param_1);
template<class... A> int FUN_10328fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10328fc0(int param_1);
template<class... A> int FUN_10328fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10328fd0(int param_1);
template<class... A> int FUN_10328fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103295f0(undefined4 *param_1);
template<class... A> int FUN_103295f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10329600(undefined4 *param_1);
template<class... A> int FUN_10329600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10329610(undefined4 *param_1);
template<class... A> int FUN_10329610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10329620(undefined4 *param_1);
template<class... A> int FUN_10329620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10329630(undefined4 *param_1);
template<class... A> int FUN_10329630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10329640(undefined4 *param_1);
template<class... A> int FUN_10329640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10329650(undefined4 *param_1);
template<class... A> int FUN_10329650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a550(undefined4 *param_1);
template<class... A> int FUN_1032a550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a580(undefined4 *param_1);
template<class... A> int FUN_1032a580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a5b0(undefined4 *param_1);
template<class... A> int FUN_1032a5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a5e0(undefined4 *param_1);
template<class... A> int FUN_1032a5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a610(undefined4 *param_1);
template<class... A> int FUN_1032a610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a640(undefined4 *param_1);
template<class... A> int FUN_1032a640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a670(undefined4 *param_1);
template<class... A> int FUN_1032a670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a6a0(undefined4 *param_1);
template<class... A> int FUN_1032a6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a6d0(undefined4 *param_1);
template<class... A> int FUN_1032a6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a700(undefined4 *param_1);
template<class... A> int FUN_1032a700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a730(undefined4 *param_1);
template<class... A> int FUN_1032a730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032a760(undefined4 *param_1);
template<class... A> int FUN_1032a760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1032b270(int param_1);
template<class... A> int FUN_1032b270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_1032b280(int param_1);
template<class... A> int FUN_1032b280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1032b630(int *param_1);
template<class... A> int FUN_1032b630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1032b6f0(int param_1);
template<class... A> int FUN_1032b6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1032b750(int param_1);
template<class... A> int FUN_1032b750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1032bfc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1032bfc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1032bfe0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1032bfe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1032c000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1032c000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1032c020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1032c020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1032c2f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1032c2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1032c310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1032c310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1032c330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1032c330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1032cc50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1032cc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1032dc60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1032dc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e370(void);
template<class... A> int FUN_1032e370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e380(void);
template<class... A> int FUN_1032e380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e390(void);
template<class... A> int FUN_1032e390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e3a0(void);
template<class... A> int FUN_1032e3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e3b0(void);
template<class... A> int FUN_1032e3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e3c0(void);
template<class... A> int FUN_1032e3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e3e0(void);
template<class... A> int FUN_1032e3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e400(void);
template<class... A> int FUN_1032e400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e420(int param_1,undefined4 *param_2);
template<class... A> int FUN_1032e420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e450(int param_1,undefined4 *param_2);
template<class... A> int FUN_1032e450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e480(int param_1,undefined4 *param_2);
template<class... A> int FUN_1032e480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e4b0(int param_1,undefined4 *param_2);
template<class... A> int FUN_1032e4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e4e0(int param_1,undefined4 *param_2);
template<class... A> int FUN_1032e4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032e800(undefined4 param_1);
template<class... A> int FUN_1032e800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e810(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1032e810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e820(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1032e820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e830(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1032e830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e840(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1032e840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e850(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1032e850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e860(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1032e860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e870(void);
template<class... A> int FUN_1032e870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e880(void);
template<class... A> int FUN_1032e880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e890(void);
template<class... A> int FUN_1032e890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032e8a0(void);
template<class... A> int FUN_1032e8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032fb10(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1032fb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032fb30(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1032fb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032fb50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1032fb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032fb70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1032fb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1032fd30(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1032fd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032fd50(undefined4 *param_1);
template<class... A> int FUN_1032fd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032fd60(undefined4 *param_1);
template<class... A> int FUN_1032fd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032fd70(undefined4 *param_1);
template<class... A> int FUN_1032fd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032fd80(undefined4 param_1);
template<class... A> int FUN_1032fd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032fd90(undefined4 *param_1);
template<class... A> int FUN_1032fd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032fda0(undefined4 *param_1);
template<class... A> int FUN_1032fda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032fdb0(undefined4 *param_1);
template<class... A> int FUN_1032fdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032fdc0(undefined4 *param_1);
template<class... A> int FUN_1032fdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1032fdd0(undefined4 *param_1);
template<class... A> int FUN_1032fdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10330720(undefined4 param_1);
template<class... A> int FUN_10330720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10330730(undefined4 param_1);
template<class... A> int FUN_10330730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10330740(undefined4 param_1);
template<class... A> int FUN_10330740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10330750(undefined4 param_1);
template<class... A> int FUN_10330750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10330760(int param_1,SCStr *param_2);
template<class... A> int FUN_10330760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10330790(int param_1,uint *param_2);
template<class... A> int FUN_10330790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_103307c0(int param_1,uint *param_2);
template<class... A> int FUN_103307c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103309c0(undefined4 param_1);
template<class... A> int FUN_103309c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103310b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103310b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103310c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103310c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_103310d0(void);
template<class... A> int FUN_103310d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_103310e0(void);
template<class... A> int FUN_103310e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_103310f0(void);
template<class... A> int FUN_103310f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10331100(void);
template<class... A> int FUN_10331100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10331110(void);
template<class... A> int FUN_10331110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103314e0(undefined4 *param_1);
template<class... A> int FUN_103314e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331690(undefined4 param_1);
template<class... A> int FUN_10331690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103318c0(undefined4 param_1);
template<class... A> int FUN_103318c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103318d0(undefined4 param_1);
template<class... A> int FUN_103318d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103318e0(undefined4 param_1);
template<class... A> int FUN_103318e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103318f0(undefined4 param_1);
template<class... A> int FUN_103318f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331900(undefined4 param_1);
template<class... A> int FUN_10331900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331910(undefined4 param_1);
template<class... A> int FUN_10331910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331920(undefined4 param_1);
template<class... A> int FUN_10331920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331930(undefined4 param_1);
template<class... A> int FUN_10331930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331940(undefined4 param_1);
template<class... A> int FUN_10331940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331a60(undefined4 param_1);
template<class... A> int FUN_10331a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331a70(undefined4 param_1);
template<class... A> int FUN_10331a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331a80(undefined4 param_1);
template<class... A> int FUN_10331a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331a90(undefined4 param_1);
template<class... A> int FUN_10331a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331aa0(undefined4 param_1);
template<class... A> int FUN_10331aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331ab0(undefined4 param_1);
template<class... A> int FUN_10331ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331ac0(undefined4 param_1);
template<class... A> int FUN_10331ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331ad0(undefined4 param_1);
template<class... A> int FUN_10331ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331ae0(undefined4 param_1);
template<class... A> int FUN_10331ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331af0(undefined4 param_1);
template<class... A> int FUN_10331af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331b00(undefined4 param_1);
template<class... A> int FUN_10331b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331b10(undefined4 param_1);
template<class... A> int FUN_10331b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331b20(undefined4 param_1);
template<class... A> int FUN_10331b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331b30(undefined4 param_1);
template<class... A> int FUN_10331b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331b40(undefined4 param_1);
template<class... A> int FUN_10331b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331b50(undefined4 param_1);
template<class... A> int FUN_10331b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10331b60(undefined4 param_1);
template<class... A> int FUN_10331b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10331b70(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10331b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10331ba0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10331ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10331bd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10331bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10331c00(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10331c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10331f80(void);
template<class... A> int FUN_10331f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10331f90(undefined4 param_1,int param_2);
template<class... A> int FUN_10331f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10331fc0(int param_1,int param_2);
template<class... A> int FUN_10331fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10331fd0(int *param_1,int *param_2);
template<class... A> int FUN_10331fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332190(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10332190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103321b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103321b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103321d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103321d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103321f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103321f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332210(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10332210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332230(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10332230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332250(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10332250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332340(undefined4 param_1);
template<class... A> int FUN_10332340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332350(undefined4 param_1);
template<class... A> int FUN_10332350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332360(undefined4 param_1);
template<class... A> int FUN_10332360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332370(undefined4 param_1);
template<class... A> int FUN_10332370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332380(undefined4 param_1);
template<class... A> int FUN_10332380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332390(undefined4 param_1);
template<class... A> int FUN_10332390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103323a0(undefined4 param_1);
template<class... A> int FUN_103323a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103323b0(undefined4 param_1);
template<class... A> int FUN_103323b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103323c0(undefined4 param_1);
template<class... A> int FUN_103323c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103323d0(undefined4 param_1);
template<class... A> int FUN_103323d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103323e0(undefined4 param_1);
template<class... A> int FUN_103323e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103323f0(undefined4 param_1);
template<class... A> int FUN_103323f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332400(undefined4 param_1);
template<class... A> int FUN_10332400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332410(undefined4 param_1);
template<class... A> int FUN_10332410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332420(undefined4 param_1);
template<class... A> int FUN_10332420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332430(undefined4 param_1);
template<class... A> int FUN_10332430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332440(undefined4 param_1);
template<class... A> int FUN_10332440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332450(undefined4 param_1);
template<class... A> int FUN_10332450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332460(undefined4 param_1);
template<class... A> int FUN_10332460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332470(undefined4 param_1);
template<class... A> int FUN_10332470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332480(undefined4 param_1);
template<class... A> int FUN_10332480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332490(undefined4 param_1);
template<class... A> int FUN_10332490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103324a0(undefined4 param_1);
template<class... A> int FUN_103324a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103324b0(undefined4 param_1);
template<class... A> int FUN_103324b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103324c0(undefined4 param_1);
template<class... A> int FUN_103324c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103325e0(undefined4 param_1);
template<class... A> int FUN_103325e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103325f0(undefined4 param_1);
template<class... A> int FUN_103325f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332600(undefined4 param_1);
template<class... A> int FUN_10332600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332610(undefined4 param_1);
template<class... A> int FUN_10332610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332620(undefined4 param_1);
template<class... A> int FUN_10332620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332630(undefined4 param_1);
template<class... A> int FUN_10332630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332640(undefined4 param_1);
template<class... A> int FUN_10332640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332650(undefined4 param_1);
template<class... A> int FUN_10332650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332660(undefined4 param_1);
template<class... A> int FUN_10332660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332670(undefined4 param_1);
template<class... A> int FUN_10332670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332680(undefined4 param_1);
template<class... A> int FUN_10332680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332690(undefined4 param_1);
template<class... A> int FUN_10332690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103327b0(undefined4 param_1);
template<class... A> int FUN_103327b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103327c0(undefined4 param_1);
template<class... A> int FUN_103327c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103327d0(undefined4 param_1);
template<class... A> int FUN_103327d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103327e0(undefined4 param_1);
template<class... A> int FUN_103327e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103327f0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_103327f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10332ac0(int param_1,undefined4 *param_2);
template<class... A> int FUN_10332ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10332af0(int param_1,undefined4 *param_2);
template<class... A> int FUN_10332af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10332b20(int param_1,undefined4 *param_2);
template<class... A> int FUN_10332b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10332b50(int param_1,undefined4 *param_2);
template<class... A> int FUN_10332b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10332b80(int param_1,undefined4 *param_2);
template<class... A> int FUN_10332b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332ea0(undefined4 param_1);
template<class... A> int FUN_10332ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332eb0(undefined4 param_1);
template<class... A> int FUN_10332eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332ec0(undefined4 param_1);
template<class... A> int FUN_10332ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332ed0(undefined4 param_1);
template<class... A> int FUN_10332ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332ee0(undefined4 param_1);
template<class... A> int FUN_10332ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10332ef0(undefined4 param_1);
template<class... A> int FUN_10332ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10333010(undefined4 param_1);
template<class... A> int FUN_10333010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10333020(undefined4 param_1);
template<class... A> int FUN_10333020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10333030(undefined4 param_1);
template<class... A> int FUN_10333030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10333040(undefined4 param_1);
template<class... A> int FUN_10333040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10333840(undefined4 *param_1);
template<class... A> int FUN_10333840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103338a0(undefined4 *param_1);
template<class... A> int FUN_103338a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103339c0(undefined4 param_1);
template<class... A> int FUN_103339c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103339d0(undefined4 param_1);
template<class... A> int FUN_103339d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103339e0(int param_1);
template<class... A> int FUN_103339e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103339f0(int param_1);
template<class... A> int FUN_103339f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10333ce0(undefined4 *param_1);
template<class... A> int FUN_10333ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10333d00(undefined4 *param_1);
template<class... A> int FUN_10333d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10333d20(undefined4 *param_1);
template<class... A> int FUN_10333d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10333da0(undefined4 *param_1);
template<class... A> int FUN_10333da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10333dc0(undefined4 *param_1);
template<class... A> int FUN_10333dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10333de0(undefined4 param_1);
template<class... A> int FUN_10333de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10333df0(undefined4 param_1);
template<class... A> int FUN_10333df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10333e00(undefined4 param_1);
template<class... A> int FUN_10333e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10333e10(undefined4 param_1);
template<class... A> int FUN_10333e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10333e20(undefined4 param_1);
template<class... A> int FUN_10333e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10333f80(undefined4 *param_1);
template<class... A> int FUN_10333f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10333fd0(undefined4 *param_1);
template<class... A> int FUN_10333fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10334020(undefined4 *param_1);
template<class... A> int FUN_10334020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10334290(undefined4 *param_1);
template<class... A> int FUN_10334290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10335fb0(int param_1);
template<class... A> int FUN_10335fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10335fe0(int param_1);
template<class... A> int FUN_10335fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336010(int param_1);
template<class... A> int FUN_10336010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336040(int param_1);
template<class... A> int FUN_10336040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336070(int param_1);
template<class... A> int FUN_10336070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336500(undefined4 *param_1);
template<class... A> int FUN_10336500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336870(undefined4 *param_1);
template<class... A> int FUN_10336870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336880(undefined4 *param_1);
template<class... A> int FUN_10336880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103368c0(undefined4 *param_1);
template<class... A> int FUN_103368c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103368d0(undefined4 *param_1);
template<class... A> int FUN_103368d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103368e0(undefined4 *param_1);
template<class... A> int FUN_103368e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336920(undefined4 *param_1);
template<class... A> int FUN_10336920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336ae0(undefined4 *param_1);
template<class... A> int FUN_10336ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336af0(undefined4 *param_1);
template<class... A> int FUN_10336af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336b00(undefined4 *param_1);
template<class... A> int FUN_10336b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336b60(int *param_1);
template<class... A> int FUN_10336b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336ba0(int *param_1);
template<class... A> int FUN_10336ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336be0(int *param_1);
template<class... A> int FUN_10336be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336c20(int *param_1);
template<class... A> int FUN_10336c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10336c60(int *param_1);
template<class... A> int FUN_10336c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103375c0(undefined4 *param_1);
template<class... A> int FUN_103375c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103375d0(undefined4 *param_1);
template<class... A> int FUN_103375d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103375e0(int *param_1);
template<class... A> int FUN_103375e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103375f0(int param_1);
template<class... A> int FUN_103375f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10337600(undefined4 *param_1);
template<class... A> int FUN_10337600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10337610(undefined4 *param_1);
template<class... A> int FUN_10337610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10337620(undefined4 *param_1);
template<class... A> int FUN_10337620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10337630(undefined4 *param_1);
template<class... A> int FUN_10337630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10337640(int *param_1);
template<class... A> int FUN_10337640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10337650(int *param_1);
template<class... A> int FUN_10337650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10337660(int *param_1);
template<class... A> int FUN_10337660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10337670(int *param_1);
template<class... A> int FUN_10337670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10337680(undefined4 *param_1);
template<class... A> int FUN_10337680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10337690(undefined4 *param_1);
template<class... A> int FUN_10337690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103376d0(int *param_1);
template<class... A> int FUN_103376d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103376e0(int *param_1);
template<class... A> int FUN_103376e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103376f0(int *param_1);
template<class... A> int FUN_103376f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10337700(int *param_1);
template<class... A> int FUN_10337700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10337710(int *param_1);
template<class... A> int FUN_10337710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10337720(int *param_1);
template<class... A> int FUN_10337720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10337730(int *param_1);
template<class... A> int FUN_10337730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10337920(int *param_1);
template<class... A> int FUN_10337920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __fastcall FUN_10337d30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10337d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10337d50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10337d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10337d80(int *param_1,int *param_2);
template<class... A> int FUN_10337d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10338680(undefined4 *param_1);
template<class... A> int FUN_10338680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103386b0(undefined4 *param_1);
template<class... A> int FUN_103386b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103386e0(undefined4 *param_1);
template<class... A> int FUN_103386e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10338940(int param_1);
template<class... A> int FUN_10338940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10338960(int param_1);
template<class... A> int FUN_10338960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10338980(int param_1);
template<class... A> int FUN_10338980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103389a0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_103389a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10339980(int param_1);
template<class... A> int FUN_10339980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10339990(int param_1);
template<class... A> int FUN_10339990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10339a60(undefined4 param_1);
template<class... A> int __stdcall FUN_10339a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10339aa0(undefined4 param_1);
template<class... A> int FUN_10339aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10339ab0(undefined4 param_1);
template<class... A> int FUN_10339ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10339f80(undefined4 param_1);
template<class... A> int FUN_10339f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10339f90(undefined4 param_1);
template<class... A> int FUN_10339f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10339fa0(undefined4 param_1);
template<class... A> int FUN_10339fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10339fb0(undefined4 param_1);
template<class... A> int FUN_10339fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10339fc0(undefined4 param_1);
template<class... A> int FUN_10339fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10339fd0(undefined4 param_1);
template<class... A> int FUN_10339fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10339fe0(undefined4 param_1);
template<class... A> int FUN_10339fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10339ff0(undefined4 param_1);
template<class... A> int FUN_10339ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a000(undefined4 param_1);
template<class... A> int FUN_1033a000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a010(undefined4 param_1);
template<class... A> int FUN_1033a010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a020(undefined4 param_1);
template<class... A> int FUN_1033a020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a030(undefined4 param_1);
template<class... A> int FUN_1033a030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a040(undefined4 param_1);
template<class... A> int FUN_1033a040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a050(undefined4 param_1);
template<class... A> int FUN_1033a050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a060(undefined4 param_1);
template<class... A> int FUN_1033a060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a070(undefined4 param_1);
template<class... A> int FUN_1033a070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a080(undefined4 param_1);
template<class... A> int FUN_1033a080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a090(undefined4 param_1);
template<class... A> int FUN_1033a090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a0a0(undefined4 param_1);
template<class... A> int FUN_1033a0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a0b0(undefined4 param_1);
template<class... A> int FUN_1033a0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a0c0(undefined4 param_1);
template<class... A> int FUN_1033a0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a0d0(undefined4 param_1);
template<class... A> int FUN_1033a0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a0e0(undefined4 param_1);
template<class... A> int FUN_1033a0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a0f0(undefined4 param_1);
template<class... A> int FUN_1033a0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a100(undefined4 param_1);
template<class... A> int FUN_1033a100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a110(undefined4 param_1);
template<class... A> int FUN_1033a110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a120(undefined4 param_1);
template<class... A> int FUN_1033a120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a130(undefined4 param_1);
template<class... A> int FUN_1033a130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a150(undefined4 param_1);
template<class... A> int FUN_1033a150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a160(undefined4 param_1);
template<class... A> int FUN_1033a160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a170(undefined4 param_1);
template<class... A> int FUN_1033a170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a180(undefined4 param_1);
template<class... A> int FUN_1033a180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a190(undefined4 param_1);
template<class... A> int FUN_1033a190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a1a0(undefined4 param_1);
template<class... A> int FUN_1033a1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a1b0(undefined4 param_1);
template<class... A> int FUN_1033a1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a1c0(int param_1);
template<class... A> int FUN_1033a1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033a1d0(int param_1);
template<class... A> int FUN_1033a1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1033a990(int param_1);
template<class... A> int FUN_1033a990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1033a9a0(int param_1);
template<class... A> int FUN_1033a9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1033ab70(int param_1);
template<class... A> int FUN_1033ab70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1033aba0(int param_1);
template<class... A> int FUN_1033aba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1033abd0(int param_1);
template<class... A> int FUN_1033abd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1033ac00(int *param_1);
template<class... A> int FUN_1033ac00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_1033ac30(int *param_1);
template<class... A> int FUN_1033ac30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1033aeb0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1033aeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1033aec0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1033aec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1033aed0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1033aed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1033aee0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1033aee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1033aef0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1033aef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033af00(int param_1);
template<class... A> int FUN_1033af00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033af10(int param_1);
template<class... A> int FUN_1033af10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033af20(int param_1);
template<class... A> int FUN_1033af20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1033af30(undefined4 *param_1);
template<class... A> int FUN_1033af30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1033af40(undefined4 *param_1);
template<class... A> int FUN_1033af40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033b600(undefined4 *param_1);
template<class... A> int FUN_1033b600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033b610(int param_1);
template<class... A> int FUN_1033b610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033b620(undefined4 *param_1);
template<class... A> int FUN_1033b620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1033bd70(uint param_1);
template<class... A> int FUN_1033bd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1033bdf0(uint param_1);
template<class... A> int FUN_1033bdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1033be70(uint param_1);
template<class... A> int FUN_1033be70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033c010(undefined4 *param_1);
template<class... A> int FUN_1033c010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033c020(undefined4 *param_1);
template<class... A> int FUN_1033c020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033c030(undefined4 *param_1);
template<class... A> int FUN_1033c030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1033c050(int *param_1);
template<class... A> int FUN_1033c050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1033c1f0(int param_1);
template<class... A> int FUN_1033c1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1033c470(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1033c470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1033c4c0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1033c4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1033c510(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1033c510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1033c560(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1033c560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1033c5b0(int param_1,int param_2);
template<class... A> int FUN_1033c5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1033c610(int param_1,int param_2);
template<class... A> int FUN_1033c610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1033c670(int param_1,int param_2);
template<class... A> int FUN_1033c670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033c800(int *param_1);
template<class... A> int FUN_1033c800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033c830(int param_1);
template<class... A> int FUN_1033c830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033c840(int param_1);
template<class... A> int FUN_1033c840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1033c850(int param_1);
template<class... A> int FUN_1033c850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_1033f670(undefined4 param_1);
template<class... A> int __stdcall FUN_1033f670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1033f6a0(undefined1 *param_1);
template<class... A> int FUN_1033f6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1033f6b0(undefined1 *param_1);
template<class... A> int FUN_1033f6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1033f6c0(void);
template<class... A> int FUN_1033f6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f8a0(void);
template<class... A> int FUN_1033f8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f8b0(void);
template<class... A> int FUN_1033f8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f8c0(void);
template<class... A> int FUN_1033f8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f8d0(void);
template<class... A> int FUN_1033f8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f8e0(void);
template<class... A> int FUN_1033f8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f8f0(void);
template<class... A> int FUN_1033f8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f900(void);
template<class... A> int FUN_1033f900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f910(void);
template<class... A> int FUN_1033f910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f920(void);
template<class... A> int FUN_1033f920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1033f930(void);
template<class... A> int FUN_1033f930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1033ffe0(int param_1);
template<class... A> int FUN_1033ffe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10340bd0(undefined4 param_1);
template<class... A> int __stdcall FUN_10340bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10340e30(undefined4 param_1);
template<class... A> int __stdcall FUN_10340e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103429c0(undefined4 param_1);
template<class... A> int FUN_103429c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103429d0(undefined4 param_1);
template<class... A> int FUN_103429d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103429e0(undefined4 param_1);
template<class... A> int FUN_103429e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103429f0(undefined4 param_1);
template<class... A> int FUN_103429f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10342aa0(undefined4 *param_1);
template<class... A> int FUN_10342aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10342ab0(undefined4 *param_1);
template<class... A> int FUN_10342ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10342ac0(undefined4 *param_1);
template<class... A> int FUN_10342ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10342ad0(undefined4 *param_1);
template<class... A> int FUN_10342ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10342eb0(undefined4 *param_1);
template<class... A> int FUN_10342eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10342ee0(undefined4 *param_1);
template<class... A> int FUN_10342ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10342f10(undefined4 *param_1);
template<class... A> int FUN_10342f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103430b0(undefined4 param_1);
template<class... A> int FUN_103430b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10343890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10343890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103438b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103438b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103438f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_103438f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10343a60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10343a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10343a80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10343a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10343aa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10343aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10343f00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10343f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10343f20(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10343f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10343f30(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10343f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10343f80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10343f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_103440f0(byte *param_1);
template<class... A> int __stdcall FUN_103440f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10344140(int *param_1,int *param_2);
template<class... A> int FUN_10344140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344160(void);
template<class... A> int FUN_10344160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344170(void);
template<class... A> int FUN_10344170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344180(void);
template<class... A> int FUN_10344180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103442c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103442c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103442d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103442d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103442e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103442e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103442f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103442f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344300(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10344300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103443a0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_103443a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344590(void);
template<class... A> int FUN_10344590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103445a0(void);
template<class... A> int FUN_103445a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103445b0(void);
template<class... A> int FUN_103445b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103449c0(uint param_1,byte *param_2);
template<class... A> int FUN_103449c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344ac0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10344ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344b60(undefined4 *param_1);
template<class... A> int FUN_10344b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344b70(undefined4 *param_1);
template<class... A> int FUN_10344b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344b80(undefined4 *param_1);
template<class... A> int FUN_10344b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10344b90(byte *param_1);
template<class... A> int FUN_10344b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344be0(undefined4 param_1);
template<class... A> int FUN_10344be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10344bf0(int param_1,uint *param_2);
template<class... A> int FUN_10344bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344d40(undefined4 *param_1);
template<class... A> int FUN_10344d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344d50(undefined4 param_1);
template<class... A> int FUN_10344d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10344d60(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10344d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344d90(undefined4 param_1);
template<class... A> int FUN_10344d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344da0(undefined4 param_1);
template<class... A> int FUN_10344da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344db0(undefined4 param_1);
template<class... A> int FUN_10344db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344dc0(undefined4 param_1);
template<class... A> int FUN_10344dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344dd0(undefined4 param_1);
template<class... A> int FUN_10344dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344de0(undefined4 param_1);
template<class... A> int FUN_10344de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344df0(undefined4 param_1);
template<class... A> int FUN_10344df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344e00(undefined4 param_1);
template<class... A> int FUN_10344e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344e10(undefined4 param_1);
template<class... A> int FUN_10344e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344e20(undefined4 param_1);
template<class... A> int FUN_10344e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10344e30(undefined4 param_1);
template<class... A> int FUN_10344e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344e40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10344e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344e60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10344e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344e80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10344e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344eb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10344eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10344f30(void);
template<class... A> int FUN_10344f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345200(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10345200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345220(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10345220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345340(undefined4 param_1);
template<class... A> int FUN_10345340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345350(undefined4 param_1);
template<class... A> int FUN_10345350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345360(undefined4 param_1);
template<class... A> int FUN_10345360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345370(undefined4 param_1);
template<class... A> int FUN_10345370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345380(undefined4 param_1);
template<class... A> int FUN_10345380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345390(undefined4 param_1);
template<class... A> int FUN_10345390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103453a0(undefined4 param_1);
template<class... A> int FUN_103453a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103453b0(undefined4 param_1);
template<class... A> int FUN_103453b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103453c0(undefined4 param_1);
template<class... A> int FUN_103453c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103453d0(undefined4 param_1);
template<class... A> int FUN_103453d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103453e0(undefined4 param_1);
template<class... A> int FUN_103453e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103453f0(undefined4 param_1);
template<class... A> int FUN_103453f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345400(undefined4 param_1);
template<class... A> int FUN_10345400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345410(undefined4 param_1);
template<class... A> int FUN_10345410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345420(undefined4 param_1);
template<class... A> int FUN_10345420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345430(undefined4 param_1);
template<class... A> int FUN_10345430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345440(undefined4 param_1);
template<class... A> int FUN_10345440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345450(undefined4 param_1);
template<class... A> int FUN_10345450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345460(undefined4 param_1);
template<class... A> int FUN_10345460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345470(undefined4 param_1);
template<class... A> int FUN_10345470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345480(undefined4 param_1);
template<class... A> int FUN_10345480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345490(undefined4 param_1);
template<class... A> int FUN_10345490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103454a0(undefined4 param_1);
template<class... A> int FUN_103454a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103454b0(undefined4 param_1);
template<class... A> int FUN_103454b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103454c0(undefined4 param_1);
template<class... A> int FUN_103454c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103454d0(undefined4 param_1);
template<class... A> int FUN_103454d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103454e0(undefined4 param_1);
template<class... A> int FUN_103454e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103454f0(undefined4 param_1);
template<class... A> int FUN_103454f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345500(undefined4 param_1);
template<class... A> int FUN_10345500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10345510(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10345510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10345970(undefined4 param_1);
template<class... A> int FUN_10345970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10345980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10345980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103459b0(undefined1 *param_1);
template<class... A> int FUN_103459b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103459c0(undefined1 *param_1);
template<class... A> int FUN_103459c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_103459d0(undefined1 *param_1);
template<class... A> int FUN_103459d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10345a10(undefined1 *param_1);
template<class... A> int FUN_10345a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10345a30(undefined1 *param_1);
template<class... A> int FUN_10345a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10345a40(undefined1 *param_1);
template<class... A> int FUN_10345a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10345a50(undefined1 *param_1);
template<class... A> int FUN_10345a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10345bb0(undefined4 *param_1);
template<class... A> int FUN_10345bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10345cd0(undefined4 *param_1);
template<class... A> int FUN_10345cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10345cf0(undefined4 *param_1);
template<class... A> int FUN_10345cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10345d50(undefined4 *param_1);
template<class... A> int FUN_10345d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10345d70(undefined4 *param_1);
template<class... A> int FUN_10345d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10345d90(undefined4 param_1);
template<class... A> int FUN_10345d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10345da0(undefined4 param_1);
template<class... A> int FUN_10345da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10345db0(undefined4 param_1);
template<class... A> int FUN_10345db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10345f30(undefined4 *param_1);
template<class... A> int FUN_10345f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103460b0(undefined4 *param_1);
template<class... A> int FUN_103460b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10346bd0(undefined4 param_1);
template<class... A> int FUN_10346bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10346c00(int param_1);
template<class... A> int FUN_10346c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10346c20(int param_1);
template<class... A> int FUN_10346c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10346c40(void);
template<class... A> int FUN_10346c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10346cf0(int param_1);
template<class... A> int FUN_10346cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10346ed0(int *param_1);
template<class... A> int FUN_10346ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10346f50(int param_1);
template<class... A> int FUN_10346f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347210(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10347210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10347330(int *param_1);
template<class... A> int FUN_10347330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10347340(int param_1);
template<class... A> int FUN_10347340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347350(int param_1);
template<class... A> int FUN_10347350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347360(int param_1);
template<class... A> int FUN_10347360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347390(int param_1);
template<class... A> int FUN_10347390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103473a0(int param_1);
template<class... A> int FUN_103473a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103473b0(int *param_1);
template<class... A> int FUN_103473b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103473c0(int *param_1);
template<class... A> int FUN_103473c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103473d0(int *param_1);
template<class... A> int FUN_103473d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103473e0(int *param_1);
template<class... A> int FUN_103473e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103473f0(int *param_1);
template<class... A> int FUN_103473f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10347400(int *param_1);
template<class... A> int FUN_10347400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10347410(int *param_1);
template<class... A> int FUN_10347410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347420(undefined4 *param_1);
template<class... A> int FUN_10347420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347430(undefined4 *param_1);
template<class... A> int FUN_10347430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10347440(undefined4 *param_1);
template<class... A> int FUN_10347440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10347450(undefined4 *param_1);
template<class... A> int FUN_10347450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10347470(int *param_1);
template<class... A> int FUN_10347470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103474a0(int *param_1);
template<class... A> int FUN_103474a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_103474b0(byte *param_1);
template<class... A> int __stdcall FUN_103474b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10347500(int *param_1,int *param_2);
template<class... A> int FUN_10347500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103475d0(undefined4 *param_1);
template<class... A> int FUN_103475d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10347600(undefined4 *param_1);
template<class... A> int FUN_10347600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103478c0(int param_1);
template<class... A> int FUN_103478c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103478e0(int param_1);
template<class... A> int FUN_103478e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10347900(float *param_1);
template<class... A> int FUN_10347900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10347960(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10347960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10347a20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10347a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10347a30(byte *param_1);
template<class... A> int FUN_10347a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10347a80(undefined4 param_1);
template<class... A> int FUN_10347a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347c50(undefined4 param_1);
template<class... A> int FUN_10347c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347c60(undefined4 param_1);
template<class... A> int FUN_10347c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347c70(undefined4 param_1);
template<class... A> int FUN_10347c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347c80(undefined4 param_1);
template<class... A> int FUN_10347c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347c90(undefined4 param_1);
template<class... A> int FUN_10347c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347ca0(undefined4 param_1);
template<class... A> int FUN_10347ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347cb0(undefined4 param_1);
template<class... A> int FUN_10347cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347cc0(undefined4 param_1);
template<class... A> int FUN_10347cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347cd0(undefined4 param_1);
template<class... A> int FUN_10347cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347ce0(undefined4 param_1);
template<class... A> int FUN_10347ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347cf0(undefined4 param_1);
template<class... A> int FUN_10347cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347d00(undefined4 param_1);
template<class... A> int FUN_10347d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347d10(undefined4 param_1);
template<class... A> int FUN_10347d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347d20(undefined4 param_1);
template<class... A> int FUN_10347d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347d30(undefined4 param_1);
template<class... A> int FUN_10347d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10347d40(undefined4 param_1);
template<class... A> int FUN_10347d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10348060(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10348060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10348070(undefined4 param_1);
template<class... A> int FUN_10348070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10348080(undefined4 param_1);
template<class... A> int FUN_10348080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10348100(void);
template<class... A> int FUN_10348100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10348110(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10348110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103481d0(int param_1);
template<class... A> int FUN_103481d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103481e0(int param_1);
template<class... A> int FUN_103481e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103481f0(int param_1);
template<class... A> int FUN_103481f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10348200(undefined4 *param_1);
template<class... A> int FUN_10348200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10348310(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10348310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10348340(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10348340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10348370(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10348370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103483f0(undefined1 *param_1);
template<class... A> int __stdcall FUN_103483f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10348670(int param_1,int param_2,int param_3);
template<class... A> int FUN_10348670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103487a0(uint param_1);
template<class... A> int FUN_103487a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10348810(uint param_1);
template<class... A> int FUN_10348810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10348880(uint param_1);
template<class... A> int FUN_10348880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103488f0(uint param_1);
template<class... A> int FUN_103488f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10348ff0(int param_1);
template<class... A> int FUN_10348ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10349000(undefined4 *param_1);
template<class... A> int FUN_10349000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10349080(int param_1);
template<class... A> int FUN_10349080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10349100(int *param_1);
template<class... A> int FUN_10349100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10349110(int param_1);
template<class... A> int FUN_10349110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1034cc40(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1034cc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1034cc90(int param_1,int param_2);
template<class... A> int FUN_1034cc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1034cce0(int param_1,int param_2);
template<class... A> int FUN_1034cce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1034cd30(int param_1,int param_2);
template<class... A> int FUN_1034cd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1034cd80(int param_1,int param_2);
template<class... A> int FUN_1034cd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1034cef0(int param_1);
template<class... A> int FUN_1034cef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1034dcd0(int param_1);
template<class... A> int FUN_1034dcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1034e360(int param_1);
template<class... A> int FUN_1034e360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1034e420(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1034e420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1034e480(int param_1);
template<class... A> int FUN_1034e480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1034e530(int param_1);
template<class... A> int FUN_1034e530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1034e550(int param_1);
template<class... A> int FUN_1034e550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1034e620(int param_1);
template<class... A> int FUN_1034e620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1034e660(int param_1);
template<class... A> int FUN_1034e660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1034e6d0(undefined1 *param_1);
template<class... A> int FUN_1034e6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1034e6e0(undefined1 *param_1);
template<class... A> int FUN_1034e6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1034e6f0(undefined1 *param_1);
template<class... A> int FUN_1034e6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1034e700(undefined1 *param_1);
template<class... A> int FUN_1034e700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1034e710(undefined1 *param_1);
template<class... A> int FUN_1034e710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1034e740(undefined4 param_1);
template<class... A> int __stdcall FUN_1034e740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 FUN_1034ea50(void);
template<class... A> int FUN_1034ea50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_1034ea60(float *param_1);
template<class... A> int FUN_1034ea60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034ea70(void);
template<class... A> int FUN_1034ea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034ea80(void);
template<class... A> int FUN_1034ea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034ea90(void);
template<class... A> int FUN_1034ea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034eaa0(void);
template<class... A> int FUN_1034eaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034eab0(void);
template<class... A> int FUN_1034eab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034eac0(void);
template<class... A> int FUN_1034eac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034ead0(void);
template<class... A> int FUN_1034ead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034eae0(void);
template<class... A> int FUN_1034eae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034eb80(undefined4 param_1);
template<class... A> int FUN_1034eb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034eb90(undefined4 param_1);
template<class... A> int FUN_1034eb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1034eba0(int param_1);
template<class... A> int FUN_1034eba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1034f330(undefined4 param_1);
template<class... A> int FUN_1034f330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1034f340(int *param_1);
template<class... A> int FUN_1034f340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1034f350(int *param_1);
template<class... A> int FUN_1034f350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1034f360(char *param_1);
template<class... A> int FUN_1034f360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034f460(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1034f460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034f480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1034f480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034f4a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1034f4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034f4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1034f4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034f4e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1034f4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034f500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1034f500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034f5e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1034f5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034f600(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1034f600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034f620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_1034f620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034fb70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1034fb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034fb90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1034fb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1034fbb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1034fbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1034fd00(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1034fd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1034fd10(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1034fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103504a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_103504a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10352440(int param_1);
template<class... A> int FUN_10352440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10352450(byte *param_1);
template<class... A> int __stdcall FUN_10352450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_103524a0(int *param_1,int *param_2);
template<class... A> int FUN_103524a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103525c0(void);
template<class... A> int FUN_103525c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103525d0(void);
template<class... A> int FUN_103525d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103525e0(void);
template<class... A> int FUN_103525e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103525f0(void);
template<class... A> int FUN_103525f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352600(void);
template<class... A> int FUN_10352600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352610(void);
template<class... A> int FUN_10352610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352630(void);
template<class... A> int FUN_10352630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352650(void);
template<class... A> int FUN_10352650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352870(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_10352870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103528b0(undefined4 param_1);
template<class... A> int FUN_103528b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103528c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103528c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103528d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103528d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103528e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103528e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103528f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103528f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10352900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352910(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10352910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352920(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10352920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352930(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10352930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352940(void);
template<class... A> int FUN_10352940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352950(void);
template<class... A> int FUN_10352950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352960(void);
template<class... A> int FUN_10352960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352970(void);
template<class... A> int FUN_10352970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352980(void);
template<class... A> int FUN_10352980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352a60(int param_1,int param_2);
template<class... A> int FUN_10352a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10352bd0(void);
template<class... A> int FUN_10352bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10353dd0(uint param_1,byte *param_2);
template<class... A> int FUN_10353dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10353ee0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10353ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10353f00(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10353f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10353f20(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10353f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10353f40(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10353f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10353fe0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10353fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10354140(undefined4 param_1);
template<class... A> int FUN_10354140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10354150(undefined4 param_1);
template<class... A> int FUN_10354150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10354160(undefined4 *param_1);
template<class... A> int FUN_10354160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10354170(undefined4 *param_1);
template<class... A> int FUN_10354170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10354180(undefined4 *param_1);
template<class... A> int FUN_10354180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10354190(undefined4 *param_1);
template<class... A> int FUN_10354190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103541a0(undefined4 *param_1);
template<class... A> int FUN_103541a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103541b0(undefined4 *param_1);
template<class... A> int FUN_103541b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103541c0(undefined4 *param_1);
template<class... A> int FUN_103541c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10354770(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_10354770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10354830(byte *param_1);
template<class... A> int FUN_10354830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10355410(undefined4 param_1);
template<class... A> int FUN_10355410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10355420(undefined4 param_1);
template<class... A> int FUN_10355420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10355430(undefined4 param_1);
template<class... A> int FUN_10355430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10355440(int param_1,SCStr *param_2);
template<class... A> int FUN_10355440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10355470(int param_1,SCStr *param_2);
template<class... A> int FUN_10355470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_103558f0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_103558f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10355a70(int param_1);
template<class... A> int FUN_10355a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103566a0(undefined4 param_1);
template<class... A> int FUN_103566a0(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RUpnpCMGetProtocolInfoAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpDPGetButtonLockStateAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpDPGetLEDStateAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpDPSetButtonLockStateAIOOp_;

// Reference entry 1030d270; body size 3 bytes.
extern int __stdcall thunk_FUN_101b94f0(int a1);
extern int __stdcall thunk_FUN_10246170(int a1,int a2);
extern int __stdcall thunk_FUN_10246290(int a1,int a2);
extern int __stdcall thunk_FUN_10312640(int a1);
extern int __stdcall thunk_FUN_103265e0(int a1,int a2,int a3,int a4,int a5);
extern int __stdcall thunk_FUN_1032f250(int a1,int a2);
extern int __stdcall thunk_FUN_1032f4d0(int a1,int a2);
extern int __stdcall thunk_FUN_1033f550(int a1);
extern int __stdcall thunk_FUN_103443d0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_103447b0(int a1);
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_11082ef0(int a1,int a2);
extern int __stdcall thunk_FUN_11082f10(int a1,int a2);
extern int __stdcall thunk_FUN_11093c70(int a1);
extern int __stdcall thunk_FUN_11131cc0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_111a0720(int a1);
extern int __stdcall thunk_FUN_111c06e0(int a1);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
extern int __stdcall thunk_FUN_1127a510(int a1);
extern int __stdcall thunk_FUN_1127c6b0(int a1);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_1_2 { virtual void _p0(); virtual int v(int a1,int a2); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_2_3 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_3_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_4_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(void); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_51_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual int v(void); };
int FUN_1001bf27();
int FUN_10047e83();
int FUN_1008b728();
int FUN_100769e5();
int FUN_100310bb();
int FUN_100679f9();
int FUN_10005c86();
int FUN_1005c743(void);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
template<class... A> int FUN_1005c743(A...);
#line 1 "ENTRY_1030d270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d270(void)

{
  return;
}


// Reference entry 1030d280; body size 3 bytes.
#line 1 "ENTRY_1030d280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d280(void)

{
  return;
}


// Reference entry 1030d290; body size 3 bytes.
#line 1 "ENTRY_1030d290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d290(void)

{
  return;
}


// Reference entry 1030d2a0; body size 13 bytes.
#line 1 "ENTRY_1030d2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d2a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1030d2b0; body size 13 bytes.
#line 1 "ENTRY_1030d2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d2b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1030d2c0; body size 13 bytes.
#line 1 "ENTRY_1030d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d2c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1030d2d0; body size 13 bytes.
#line 1 "ENTRY_1030d2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d2d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1030d2e0; body size 13 bytes.
#line 1 "ENTRY_1030d2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d2e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1030d2f0; body size 13 bytes.
#line 1 "ENTRY_1030d2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d2f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1030d300; body size 13 bytes.
#line 1 "ENTRY_1030d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d300(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1030d310; body size 13 bytes.
#line 1 "ENTRY_1030d310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d310(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1030d320; body size 13 bytes.
#line 1 "ENTRY_1030d320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d320(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1030d330; body size 3 bytes.
#line 1 "ENTRY_1030d330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d330(void)

{
  return;
}


// Reference entry 1030d340; body size 3 bytes.
#line 1 "ENTRY_1030d340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d340(void)

{
  return;
}


// Reference entry 1030d350; body size 3 bytes.
#line 1 "ENTRY_1030d350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d350(void)

{
  return;
}


// Reference entry 1030d360; body size 3 bytes.
#line 1 "ENTRY_1030d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d360(void)

{
  return;
}


// Reference entry 1030d370; body size 3 bytes.
#line 1 "ENTRY_1030d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d370(void)

{
  return;
}


// Reference entry 1030d380; body size 3 bytes.
#line 1 "ENTRY_1030d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d380(void)

{
  return;
}


// Reference entry 1030d390; body size 18 bytes.
#line 1 "ENTRY_1030d390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1030d390(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 1030d3b0; body size 18 bytes.
#line 1 "ENTRY_1030d3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1030d3b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 1030d3d0; body size 18 bytes.
#line 1 "ENTRY_1030d3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1030d3d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 1030d5f0; body size 54 bytes.
#line 1 "ENTRY_1030d5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1030d5f0(uint param_1,byte *param_2)

{
  return (int)(((((*param_2 ^ param_1) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) *
          0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 1030d640; body size 54 bytes.
#line 1 "ENTRY_1030d640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1030d640(uint param_1,byte *param_2)

{
  return (int)(((((*param_2 ^ param_1) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) *
          0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 1030d690; body size 54 bytes.
#line 1 "ENTRY_1030d690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1030d690(uint param_1,byte *param_2)

{
  return (int)(((((*param_2 ^ param_1) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) *
          0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 1030d6e0; body size 41 bytes.
#line 1 "ENTRY_1030d6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d6e0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_1148a50e(puVar2,0xc);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 1030d720; body size 41 bytes.
#line 1 "ENTRY_1030d720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d720(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_1148a50e(puVar2,0xc);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 1030d7d0; body size 15 bytes.
#line 1 "ENTRY_1030d7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d7d0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0xc);
  return;
}


// Reference entry 1030d7f0; body size 15 bytes.
#line 1 "ENTRY_1030d7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d7f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0xc);
  return;
}


// Reference entry 1030d810; body size 15 bytes.
#line 1 "ENTRY_1030d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d810(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x4c);
  return;
}


// Reference entry 1030d830; body size 15 bytes.
#line 1 "ENTRY_1030d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d830(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0xc);
  return;
}


// Reference entry 1030d850; body size 15 bytes.
#line 1 "ENTRY_1030d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030d850(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0xc);
  return;
}


// Reference entry 1030d870; body size 59 bytes.
#line 1 "ENTRY_1030d870"

__declspec(naked) void FUN_1030d870(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [edi + 0x30]
  __asm mov edx, dword ptr [eax]
  __asm cmp edx, eax
  __asm je 0x1030d88d
  __asm nop
  __asm mov eax, dword ptr [edx + 8]
  __asm mov byte ptr [eax], 0
  __asm mov edx, dword ptr [edx]
  __asm cmp edx, dword ptr [edi + 0x30]
  __asm jne 0x1030d880
  __asm lea ecx, [edi + 0x2c]
  __asm call LAB_10047e83
  __asm lea ecx, [edi + 0xc]
  __asm call LAB_10070748
  __asm push 0x4c
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1030d8c0; body size 19 bytes.
#line 1 "ENTRY_1030d8c0"

__declspec(naked) void FUN_1030d8c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x35e50d7
  __asm ja LAB_10070f3b
  __asm imul eax, eax, 0x4c
  __asm ret
}



// Reference entry 1030d8e0; body size 7 bytes.
#line 1 "ENTRY_1030d8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030d8e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1030d8f0; body size 7 bytes.
#line 1 "ENTRY_1030d8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030d8f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1030d900; body size 7 bytes.
#line 1 "ENTRY_1030d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030d900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1030d910; body size 55 bytes.
#line 1 "ENTRY_1030d910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1030d910(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1030d960; body size 55 bytes.
#line 1 "ENTRY_1030d960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1030d960(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1030d9b0; body size 55 bytes.
#line 1 "ENTRY_1030d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1030d9b0(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1030da00; body size 5 bytes.
#line 1 "ENTRY_1030da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030da00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030dd90; body size 7 bytes.
#line 1 "ENTRY_1030dd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030dd90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1030dda0; body size 5 bytes.
#line 1 "ENTRY_1030dda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030dda0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ddb0; body size 5 bytes.
#line 1 "ENTRY_1030ddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ddb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ddc0; body size 5 bytes.
#line 1 "ENTRY_1030ddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ddc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ddd0; body size 5 bytes.
#line 1 "ENTRY_1030ddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ddd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030dde0; body size 5 bytes.
#line 1 "ENTRY_1030dde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030dde0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ddf0; body size 5 bytes.
#line 1 "ENTRY_1030ddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ddf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de00; body size 5 bytes.
#line 1 "ENTRY_1030de00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de10; body size 5 bytes.
#line 1 "ENTRY_1030de10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de20; body size 5 bytes.
#line 1 "ENTRY_1030de20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de30; body size 5 bytes.
#line 1 "ENTRY_1030de30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de40; body size 5 bytes.
#line 1 "ENTRY_1030de40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de50; body size 5 bytes.
#line 1 "ENTRY_1030de50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de60; body size 5 bytes.
#line 1 "ENTRY_1030de60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de70; body size 5 bytes.
#line 1 "ENTRY_1030de70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de80; body size 5 bytes.
#line 1 "ENTRY_1030de80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030de90; body size 5 bytes.
#line 1 "ENTRY_1030de90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030de90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030dea0; body size 5 bytes.
#line 1 "ENTRY_1030dea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030dea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030deb0; body size 5 bytes.
#line 1 "ENTRY_1030deb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030deb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030dec0; body size 5 bytes.
#line 1 "ENTRY_1030dec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030dec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ded0; body size 5 bytes.
#line 1 "ENTRY_1030ded0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ded0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030dee0; body size 5 bytes.
#line 1 "ENTRY_1030dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030dee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030def0; body size 13 bytes.
#line 1 "ENTRY_1030def0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030def0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 1030df00; body size 13 bytes.
#line 1 "ENTRY_1030df00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030df00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 1030e070; body size 3 bytes.
#line 1 "ENTRY_1030e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030e070(void)

{
  return;
}


// Reference entry 1030e080; body size 3 bytes.
#line 1 "ENTRY_1030e080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030e080(void)

{
  return;
}


// Reference entry 1030e090; body size 46 bytes.
#line 1 "ENTRY_1030e090"

__declspec(naked) void FUN_1030e090(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [esi + 0x28]
  __asm mov edx, dword ptr [eax]
  __asm cmp edx, eax
  __asm je 0x1030e0ad
  __asm nop
  __asm mov eax, dword ptr [edx + 8]
  __asm mov byte ptr [eax], 0
  __asm mov edx, dword ptr [edx]
  __asm cmp edx, dword ptr [esi + 0x28]
  __asm jne 0x1030e0a0
  __asm lea ecx, [esi + 0x24]
  __asm call LAB_10047e83
  __asm lea ecx, [esi + 4]
  __asm pop esi
  __asm jmp LAB_10070748
}



// Reference entry 1030e680; body size 15 bytes.
#line 1 "ENTRY_1030e680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e680(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1030e6a0; body size 15 bytes.
#line 1 "ENTRY_1030e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e6a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1030e6c0; body size 15 bytes.
#line 1 "ENTRY_1030e6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e6c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1030e960; body size 5 bytes.
#line 1 "ENTRY_1030e960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030e970; body size 5 bytes.
#line 1 "ENTRY_1030e970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030e980; body size 5 bytes.
#line 1 "ENTRY_1030e980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030e990; body size 5 bytes.
#line 1 "ENTRY_1030e990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030e9a0; body size 5 bytes.
#line 1 "ENTRY_1030e9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e9a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030e9b0; body size 5 bytes.
#line 1 "ENTRY_1030e9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e9b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030e9c0; body size 5 bytes.
#line 1 "ENTRY_1030e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030e9d0; body size 5 bytes.
#line 1 "ENTRY_1030e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e9d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030e9e0; body size 5 bytes.
#line 1 "ENTRY_1030e9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030e9f0; body size 5 bytes.
#line 1 "ENTRY_1030e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030e9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea00; body size 5 bytes.
#line 1 "ENTRY_1030ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ea00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea10; body size 5 bytes.
#line 1 "ENTRY_1030ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ea10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea20; body size 5 bytes.
#line 1 "ENTRY_1030ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ea20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea30; body size 5 bytes.
#line 1 "ENTRY_1030ea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ea30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea40; body size 5 bytes.
#line 1 "ENTRY_1030ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ea40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea50; body size 5 bytes.
#line 1 "ENTRY_1030ea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ea50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea60; body size 5 bytes.
#line 1 "ENTRY_1030ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ea60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea70; body size 5 bytes.
#line 1 "ENTRY_1030ea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ea70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea80; body size 5 bytes.
#line 1 "ENTRY_1030ea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030ea80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030ea90; body size 11 bytes.
#line 1 "ENTRY_1030ea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030ea90(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1030eaa0; body size 5 bytes.
#line 1 "ENTRY_1030eaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1030eaa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030eab0; body size 30 bytes.
#line 1 "ENTRY_1030eab0"

__declspec(naked) void FUN_1030eab0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm je 0x1030eacd
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm jne 0x1030eac1
  __asm pop esi
  __asm ret
}



// Reference entry 1030eae0; body size 30 bytes.
#line 1 "ENTRY_1030eae0"

__declspec(naked) void FUN_1030eae0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm je 0x1030eafd
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm jne 0x1030eaf1
  __asm pop esi
  __asm ret
}



// Reference entry 1030eb10; body size 30 bytes.
#line 1 "ENTRY_1030eb10"

__declspec(naked) void FUN_1030eb10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm je 0x1030eb2d
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm jne 0x1030eb21
  __asm pop esi
  __asm ret
}



// Reference entry 1030eb40; body size 18 bytes.
#line 1 "ENTRY_1030eb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030eb40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030eb60; body size 18 bytes.
#line 1 "ENTRY_1030eb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030eb60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030eb80; body size 18 bytes.
#line 1 "ENTRY_1030eb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030eb80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ee10; body size 11 bytes.
#line 1 "ENTRY_1030ee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ee10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ee20; body size 11 bytes.
#line 1 "ENTRY_1030ee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ee20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ee30; body size 11 bytes.
#line 1 "ENTRY_1030ee30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ee30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ee40; body size 11 bytes.
#line 1 "ENTRY_1030ee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ee40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ee50; body size 11 bytes.
#line 1 "ENTRY_1030ee50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ee50(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ee60; body size 11 bytes.
#line 1 "ENTRY_1030ee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ee60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ee70; body size 11 bytes.
#line 1 "ENTRY_1030ee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ee70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ee80; body size 11 bytes.
#line 1 "ENTRY_1030ee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ee80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ee90; body size 11 bytes.
#line 1 "ENTRY_1030ee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ee90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030eea0; body size 11 bytes.
#line 1 "ENTRY_1030eea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030eea0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030eeb0; body size 11 bytes.
#line 1 "ENTRY_1030eeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030eeb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030eec0; body size 11 bytes.
#line 1 "ENTRY_1030eec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030eec0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030eed0; body size 16 bytes.
#line 1 "ENTRY_1030eed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030eed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030eef0; body size 16 bytes.
#line 1 "ENTRY_1030eef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030eef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ef10; body size 16 bytes.
#line 1 "ENTRY_1030ef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030ef10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ef30; body size 9 bytes.
#line 1 "ENTRY_1030ef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030ef30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ef40; body size 9 bytes.
#line 1 "ENTRY_1030ef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030ef40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ef50; body size 9 bytes.
#line 1 "ENTRY_1030ef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030ef50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ef60; body size 13 bytes.
#line 1 "ENTRY_1030ef60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ef60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ef70; body size 14 bytes.
#line 1 "ENTRY_1030ef70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ef70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030ef90; body size 14 bytes.
#line 1 "ENTRY_1030ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030ef90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030efb0; body size 14 bytes.
#line 1 "ENTRY_1030efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030efb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030efd0; body size 13 bytes.
#line 1 "ENTRY_1030efd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030efd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030efe0; body size 13 bytes.
#line 1 "ENTRY_1030efe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030efe0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030eff0; body size 23 bytes.
#line 1 "ENTRY_1030eff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030eff0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030f010; body size 23 bytes.
#line 1 "ENTRY_1030f010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030f010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030f030; body size 23 bytes.
#line 1 "ENTRY_1030f030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1030f030(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1030f050; body size 3 bytes.
#line 1 "ENTRY_1030f050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1030f050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030f060; body size 3 bytes.
#line 1 "ENTRY_1030f060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1030f060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030f070; body size 3 bytes.
#line 1 "ENTRY_1030f070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1030f070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1030f110; body size 13 bytes.
#line 1 "ENTRY_1030f110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030f110(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030f5f0; body size 11 bytes.
#line 1 "ENTRY_1030f5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030f5f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030f600; body size 11 bytes.
#line 1 "ENTRY_1030f600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030f600(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030f610; body size 11 bytes.
#line 1 "ENTRY_1030f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030f610(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1030f620; body size 24 bytes.
#line 1 "ENTRY_1030f620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030f620(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030f640; body size 24 bytes.
#line 1 "ENTRY_1030f640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030f640(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030f660; body size 24 bytes.
#line 1 "ENTRY_1030f660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1030f660(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1030fab0; body size 3 bytes.
#line 1 "ENTRY_1030fab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030fab0(void)

{
  return;
}


// Reference entry 1030fac0; body size 3 bytes.
#line 1 "ENTRY_1030fac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030fac0(void)

{
  return;
}


// Reference entry 1030fad0; body size 3 bytes.
#line 1 "ENTRY_1030fad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1030fad0(void)

{
  return;
}


// Reference entry 1030fba0; body size 45 bytes.
#line 1 "ENTRY_1030fba0"

__declspec(naked) void FUN_1030fba0(void)

{
  __asm mov eax, dword ptr [ecx + 0x28]
  __asm push esi
  __asm lea esi, [ecx + 4]
  __asm mov edx, dword ptr [eax]
  __asm cmp edx, eax
  __asm je 0x1030fbbd
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov eax, dword ptr [edx + 8]
  __asm mov byte ptr [eax], 0
  __asm mov edx, dword ptr [edx]
  __asm cmp edx, dword ptr [esi + 0x24]
  __asm jne 0x1030fbb0
  __asm lea ecx, [esi + 0x20]
  __asm call LAB_10047e83
  __asm mov ecx, esi
  __asm pop esi
  __asm jmp LAB_10070748
}



// Reference entry 1030fbe0; body size 5 bytes.
#line 1 "ENTRY_1030fbe0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1030fbe0(int param_1)

{ __asm jmp FUN_1001bf27 }


// Reference entry 1030fbf0; body size 5 bytes.
#line 1 "ENTRY_1030fbf0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1030fbf0(int param_1)

{ __asm jmp FUN_10047e83 }


// Reference entry 1030fc90; body size 98 bytes.
#line 1 "ENTRY_1030fc90"

__declspec(naked) void FUN_1030fc90(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm test esi, esi
  __asm je 0x1030fcef
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm je 0x1030fcef
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm shr eax, 3
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm cmp eax, ecx
  __asm jbe 0x1030fcbd
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_1005e6ce
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push dword ptr [edi]
  __asm push edi
  __asm call LAB_10009c23
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esp + 0x10], eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push dword ptr [esi + 0x10]
  __asm push dword ptr [esi + 0xc]
  __asm call LAB_10033dfc
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 1030fd10; body size 131 bytes.
#line 1 "ENTRY_1030fd10"

__declspec(naked) void FUN_1030fd10(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm test edi, edi
  __asm je 0x1030fd90
  __asm mov ecx, dword ptr [edi + 8]
  __asm test ecx, ecx
  __asm je 0x1030fd90
  __asm mov eax, dword ptr [edi + 0x1c]
  __asm shr eax, 3
  __asm cmp eax, ecx
  __asm jbe 0x1030fd39
  __asm mov eax, dword ptr [edi + 4]
  __asm mov ecx, edi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_10001cda
  __asm pop edi
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, dword ptr [ecx + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm je 0x1030fd64
  __asm push esi
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm mov esi, dword ptr [eax]
  __asm push 0xc
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm test esi, esi
  __asm jne 0x1030fd50
  __asm pop esi
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esp + 4], eax
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm push dword ptr [edi + 0x10]
  __asm push dword ptr [edi + 0xc]
  __asm call LAB_10042e24
  __asm add esp, 0xc
  __asm pop edi
  __asm pop ecx
  __asm ret
}



// Reference entry 1030fdc0; body size 131 bytes.
#line 1 "ENTRY_1030fdc0"

__declspec(naked) void FUN_1030fdc0(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm test edi, edi
  __asm je 0x1030fe40
  __asm mov ecx, dword ptr [edi + 8]
  __asm test ecx, ecx
  __asm je 0x1030fe40
  __asm mov eax, dword ptr [edi + 0x1c]
  __asm shr eax, 3
  __asm cmp eax, ecx
  __asm jbe 0x1030fde9
  __asm mov eax, dword ptr [edi + 4]
  __asm mov ecx, edi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_10011310
  __asm pop edi
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, dword ptr [ecx + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm je 0x1030fe14
  __asm push esi
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm mov esi, dword ptr [eax]
  __asm push 0xc
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm test esi, esi
  __asm jne 0x1030fe00
  __asm pop esi
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esp + 4], eax
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm push dword ptr [edi + 0x10]
  __asm push dword ptr [edi + 0xc]
  __asm call LAB_1004a3ea
  __asm add esp, 0xc
  __asm pop edi
  __asm pop ecx
  __asm ret
}



// Reference entry 1030fe70; body size 18 bytes.
#line 1 "ENTRY_1030fe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1030fe70(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1030fe90; body size 18 bytes.
#line 1 "ENTRY_1030fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1030fe90(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1030feb0; body size 18 bytes.
#line 1 "ENTRY_1030feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1030feb0(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1030fed0; body size 14 bytes.
#line 1 "ENTRY_1030fed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030fed0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1030fef0; body size 14 bytes.
#line 1 "ENTRY_1030fef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030fef0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1030ff10; body size 14 bytes.
#line 1 "ENTRY_1030ff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030ff10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1030ff30; body size 14 bytes.
#line 1 "ENTRY_1030ff30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030ff30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1030ff50; body size 14 bytes.
#line 1 "ENTRY_1030ff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030ff50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1030ff70; body size 14 bytes.
#line 1 "ENTRY_1030ff70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030ff70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1030ff90; body size 14 bytes.
#line 1 "ENTRY_1030ff90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030ff90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1030ffb0; body size 14 bytes.
#line 1 "ENTRY_1030ffb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030ffb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1030ffd0; body size 14 bytes.
#line 1 "ENTRY_1030ffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030ffd0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1030fff0; body size 14 bytes.
#line 1 "ENTRY_1030fff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1030fff0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10310010; body size 14 bytes.
#line 1 "ENTRY_10310010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10310010(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10310030; body size 14 bytes.
#line 1 "ENTRY_10310030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10310030(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10310080; body size 6 bytes.
#line 1 "ENTRY_10310080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10310080(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10310090; body size 6 bytes.
#line 1 "ENTRY_10310090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10310090(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103100a0; body size 6 bytes.
#line 1 "ENTRY_103100a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103100a0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103100b0; body size 6 bytes.
#line 1 "ENTRY_103100b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103100b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103100c0; body size 6 bytes.
#line 1 "ENTRY_103100c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103100c0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103100d0; body size 6 bytes.
#line 1 "ENTRY_103100d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103100d0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103100e0; body size 6 bytes.
#line 1 "ENTRY_103100e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103100e0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103100f0; body size 6 bytes.
#line 1 "ENTRY_103100f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103100f0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10310100; body size 9 bytes.
#line 1 "ENTRY_10310100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10310100(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10310110; body size 9 bytes.
#line 1 "ENTRY_10310110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10310110(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10310120; body size 9 bytes.
#line 1 "ENTRY_10310120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10310120(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10310130; body size 9 bytes.
#line 1 "ENTRY_10310130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10310130(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10310140; body size 9 bytes.
#line 1 "ENTRY_10310140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10310140(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10310150; body size 10 bytes.
#line 1 "ENTRY_10310150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10310150(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10310160; body size 10 bytes.
#line 1 "ENTRY_10310160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10310160(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10310170; body size 10 bytes.
#line 1 "ENTRY_10310170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10310170(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10310180; body size 57 bytes.
#line 1 "ENTRY_10310180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10310180(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 103101d0; body size 57 bytes.
#line 1 "ENTRY_103101d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_103101d0(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10310220; body size 57 bytes.
#line 1 "ENTRY_10310220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10310220(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10310270; body size 18 bytes.
#line 1 "ENTRY_10310270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10310270(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10310290; body size 18 bytes.
#line 1 "ENTRY_10310290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10310290(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103102b0; body size 18 bytes.
#line 1 "ENTRY_103102b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_103102b0(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10310380; body size 22 bytes.
#line 1 "ENTRY_10310380"

__declspec(naked) void FUN_10310380(void)

{
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret
}



// Reference entry 103103a0; body size 22 bytes.
#line 1 "ENTRY_103103a0"

__declspec(naked) void FUN_103103a0(void)

{
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret
}



// Reference entry 103103c0; body size 22 bytes.
#line 1 "ENTRY_103103c0"

__declspec(naked) void FUN_103103c0(void)

{
  __asm push esi
  __asm push 0x4c
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10310860; body size 20 bytes.
#line 1 "ENTRY_10310860"

__declspec(naked) void FUN_10310860(void)

{
  __asm cmp dword ptr [ecx + 8], 0x35e50d7
  __asm je 0x1031086a
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}



// Reference entry 10310880; body size 20 bytes.
#line 1 "ENTRY_10310880"

__declspec(naked) void FUN_10310880(void)

{
  __asm cmp dword ptr [ecx + 8], 0x15555555
  __asm je 0x1031088a
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}



// Reference entry 103108a0; body size 20 bytes.
#line 1 "ENTRY_103108a0"

__declspec(naked) void FUN_103108a0(void)

{
  __asm cmp dword ptr [ecx + 8], 0x15555555
  __asm je 0x103108aa
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}



// Reference entry 103108c0; body size 66 bytes.
#line 1 "ENTRY_103108c0"

__declspec(naked) void FUN_103108c0(void)

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



// Reference entry 10310920; body size 66 bytes.
#line 1 "ENTRY_10310920"

__declspec(naked) void FUN_10310920(void)

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



// Reference entry 10310980; body size 66 bytes.
#line 1 "ENTRY_10310980"

__declspec(naked) void FUN_10310980(void)

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



// Reference entry 10310bf0; body size 55 bytes.
#line 1 "ENTRY_10310bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10310bf0(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10310c40; body size 55 bytes.
#line 1 "ENTRY_10310c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10310c40(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10310c90; body size 55 bytes.
#line 1 "ENTRY_10310c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10310c90(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10310ce0; body size 54 bytes.
#line 1 "ENTRY_10310ce0"

__declspec(naked) void FUN_10310ce0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, dword ptr [ecx + 0xc]
  __asm lea edx, [edx + eax*8]
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [edx + 4], eax
  __asm jne 0x10310d0b
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10310d02
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov dword ptr [edx], eax
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10310d13
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm ret 8
}



// Reference entry 10310d30; body size 54 bytes.
#line 1 "ENTRY_10310d30"

__declspec(naked) void FUN_10310d30(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, dword ptr [ecx + 0xc]
  __asm lea edx, [edx + eax*8]
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [edx + 4], eax
  __asm jne 0x10310d5b
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10310d52
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov dword ptr [edx], eax
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10310d63
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm ret 8
}



// Reference entry 10310d80; body size 54 bytes.
#line 1 "ENTRY_10310d80"

__declspec(naked) void FUN_10310d80(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, dword ptr [ecx + 0xc]
  __asm lea edx, [edx + eax*8]
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [edx + 4], eax
  __asm jne 0x10310dab
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10310da2
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov dword ptr [edx], eax
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10310db3
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm ret 8
}



// Reference entry 10310dd0; body size 5 bytes.
#line 1 "ENTRY_10310dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10310dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10310de0; body size 5 bytes.
#line 1 "ENTRY_10310de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10310de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311330; body size 3 bytes.
#line 1 "ENTRY_10311330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311340; body size 3 bytes.
#line 1 "ENTRY_10311340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311350; body size 3 bytes.
#line 1 "ENTRY_10311350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311360; body size 3 bytes.
#line 1 "ENTRY_10311360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311370; body size 3 bytes.
#line 1 "ENTRY_10311370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311380; body size 3 bytes.
#line 1 "ENTRY_10311380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311390; body size 3 bytes.
#line 1 "ENTRY_10311390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103113a0; body size 3 bytes.
#line 1 "ENTRY_103113a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103113a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103113b0; body size 3 bytes.
#line 1 "ENTRY_103113b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103113b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103113c0; body size 3 bytes.
#line 1 "ENTRY_103113c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103113c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103113d0; body size 3 bytes.
#line 1 "ENTRY_103113d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103113d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103113e0; body size 3 bytes.
#line 1 "ENTRY_103113e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103113e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103113f0; body size 3 bytes.
#line 1 "ENTRY_103113f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103113f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311400; body size 3 bytes.
#line 1 "ENTRY_10311400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311410; body size 3 bytes.
#line 1 "ENTRY_10311410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311420; body size 3 bytes.
#line 1 "ENTRY_10311420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311430; body size 3 bytes.
#line 1 "ENTRY_10311430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311440; body size 3 bytes.
#line 1 "ENTRY_10311440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311450; body size 3 bytes.
#line 1 "ENTRY_10311450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311460; body size 3 bytes.
#line 1 "ENTRY_10311460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311470; body size 3 bytes.
#line 1 "ENTRY_10311470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311480; body size 3 bytes.
#line 1 "ENTRY_10311480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311490; body size 3 bytes.
#line 1 "ENTRY_10311490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103114a0; body size 3 bytes.
#line 1 "ENTRY_103114a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103114a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103114b0; body size 3 bytes.
#line 1 "ENTRY_103114b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103114b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103114c0; body size 3 bytes.
#line 1 "ENTRY_103114c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103114c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103114d0; body size 3 bytes.
#line 1 "ENTRY_103114d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103114d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103114e0; body size 3 bytes.
#line 1 "ENTRY_103114e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103114e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103114f0; body size 3 bytes.
#line 1 "ENTRY_103114f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103114f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311500; body size 3 bytes.
#line 1 "ENTRY_10311500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311510; body size 92 bytes.
#line 1 "ENTRY_10311510"

__declspec(naked) void FUN_10311510(void)

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
  __asm jne 0x1031154e
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [eax + 4], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp ecx, edi
  __asm jne 0x1031155c
  __asm mov dword ptr [eax], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp dword ptr [eax + 4], ebx
  __asm jne 0x10311564
  __asm mov dword ptr [eax + 4], esi
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
}



// Reference entry 10311590; body size 92 bytes.
#line 1 "ENTRY_10311590"

__declspec(naked) void FUN_10311590(void)

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
  __asm jne 0x103115ce
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [eax + 4], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp ecx, edi
  __asm jne 0x103115dc
  __asm mov dword ptr [eax], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp dword ptr [eax + 4], ebx
  __asm jne 0x103115e4
  __asm mov dword ptr [eax + 4], esi
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
}



// Reference entry 10311610; body size 92 bytes.
#line 1 "ENTRY_10311610"

__declspec(naked) void FUN_10311610(void)

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
  __asm jne 0x1031164e
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [eax + 4], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp ecx, edi
  __asm jne 0x1031165c
  __asm mov dword ptr [eax], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp dword ptr [eax + 4], ebx
  __asm jne 0x10311664
  __asm mov dword ptr [eax + 4], esi
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
}



// Reference entry 10311690; body size 5 bytes.
#line 1 "ENTRY_10311690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10311690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103116a0; body size 5 bytes.
#line 1 "ENTRY_103116a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103116a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103116b0; body size 13 bytes.
#line 1 "ENTRY_103116b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103116b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 103116c0; body size 13 bytes.
#line 1 "ENTRY_103116c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103116c0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 103116d0; body size 13 bytes.
#line 1 "ENTRY_103116d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103116d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 103116e0; body size 3 bytes.
#line 1 "ENTRY_103116e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103116e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103116f0; body size 3 bytes.
#line 1 "ENTRY_103116f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103116f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311700; body size 3 bytes.
#line 1 "ENTRY_10311700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311710; body size 3 bytes.
#line 1 "ENTRY_10311710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311720; body size 3 bytes.
#line 1 "ENTRY_10311720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311730; body size 3 bytes.
#line 1 "ENTRY_10311730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10311890; body size 3 bytes.
#line 1 "ENTRY_10311890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10311890(void)

{
  return;
}


// Reference entry 103118a0; body size 3 bytes.
#line 1 "ENTRY_103118a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103118a0(void)

{
  return;
}


// Reference entry 103118b0; body size 3 bytes.
#line 1 "ENTRY_103118b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103118b0(void)

{
  return;
}


// Reference entry 103118c0; body size 3 bytes.
#line 1 "ENTRY_103118c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103118c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103118d0; body size 3 bytes.
#line 1 "ENTRY_103118d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103118d0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103118e0; body size 3 bytes.
#line 1 "ENTRY_103118e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103118e0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10311b00; body size 11 bytes.
#line 1 "ENTRY_10311b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311b00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10311b10; body size 11 bytes.
#line 1 "ENTRY_10311b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311b10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10311b20; body size 11 bytes.
#line 1 "ENTRY_10311b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10311b20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10311b30; body size 6 bytes.
#line 1 "ENTRY_10311b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10311b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10311b40; body size 6 bytes.
#line 1 "ENTRY_10311b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10311b40(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10311b50; body size 6 bytes.
#line 1 "ENTRY_10311b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10311b50(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10311cb0; body size 55 bytes.
#line 1 "ENTRY_10311cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10311cb0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0xc);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0xc);
  return;
}


// Reference entry 10311d00; body size 55 bytes.
#line 1 "ENTRY_10311d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10311d00(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0xc);
    puVar1 = (undefined4 *)(puVar2);
  }
  thunk_FUN_1148a50e(*param_1,0xc);
  return;
}


// Reference entry 10311d70; body size 14 bytes.
#line 1 "ENTRY_10311d70"

__declspec(naked) void FUN_10311d70(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 10311d90; body size 14 bytes.
#line 1 "ENTRY_10311d90"

__declspec(naked) void FUN_10311d90(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 10311db0; body size 14 bytes.
#line 1 "ENTRY_10311db0"

__declspec(naked) void FUN_10311db0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 10311dd0; body size 13 bytes.
#line 1 "ENTRY_10311dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10311dd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10311de0; body size 13 bytes.
#line 1 "ENTRY_10311de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10311de0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10311df0; body size 13 bytes.
#line 1 "ENTRY_10311df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10311df0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10311e00; body size 12 bytes.
#line 1 "ENTRY_10311e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10311e00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10311e10; body size 12 bytes.
#line 1 "ENTRY_10311e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10311e10(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10311e20; body size 12 bytes.
#line 1 "ENTRY_10311e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10311e20(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10311e30; body size 11 bytes.
#line 1 "ENTRY_10311e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10311e30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10311e40; body size 11 bytes.
#line 1 "ENTRY_10311e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10311e40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10311e50; body size 11 bytes.
#line 1 "ENTRY_10311e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10311e50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10311e60; body size 145 bytes.
#line 1 "ENTRY_10311e60"

__declspec(naked) void FUN_10311e60(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm movzx eax, byte ptr [esi + 8]
  __asm xor eax, 0x811c9dc5
  __asm imul edx, eax, 0x1000193
  __asm movzx eax, byte ptr [esi + 9]
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 0xa]
  __asm imul edx, edx, 0x1000193
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 0xb]
  __asm imul ecx, edx, 0x1000193
  __asm xor ecx, eax
  __asm imul eax, ecx, 0x1000193
  __asm mov ecx, dword ptr [edi + 0x18]
  __asm and ecx, eax
  __asm mov eax, dword ptr [edi + 0xc]
  __asm lea ecx, [eax + ecx*8]
  __asm mov eax, dword ptr [ecx]
  __asm cmp dword ptr [ecx + 4], esi
  __asm jne 0x10311edb
  __asm cmp eax, esi
  __asm jne 0x10311ec7
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [ecx], eax
  __asm mov dword ptr [ecx + 4], eax
  __asm lea ecx, [edi + 4]
  __asm push esi
  __asm call LAB_100429ce
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [ecx + 4], eax
  __asm lea ecx, [edi + 4]
  __asm push esi
  __asm call LAB_100429ce
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm cmp eax, esi
  __asm jne 0x10311ee3
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [ecx], eax
  __asm push esi
  __asm lea ecx, [edi + 4]
  __asm call LAB_100429ce
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 103121c0; body size 419 bytes.
#line 1 "ENTRY_103121c0"

__declspec(naked) void FUN_103121c0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm sub esp, 0x14
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x24]
  __asm mov ebx, ecx
  __asm cmp edx, ebp
  __asm je LAB_1031232f
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov dword ptr [esp + 0x10], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esp + 0x24], eax
  __asm movzx eax, byte ptr [edx + 8]
  __asm xor eax, 0x811c9dc5
  __asm imul ecx, eax, 0x1000193
  __asm movzx eax, byte ptr [edx + 9]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebx + 0xc]
  __asm mov esi, edx
  __asm xor ecx, eax
  __asm mov dword ptr [esp + 0x20], edi
  __asm movzx eax, byte ptr [edx + 0xa]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm movzx eax, byte ptr [edx + 0xb]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm mov eax, dword ptr [ebx + 0x18]
  __asm imul ecx, ecx, 0x1000193
  __asm and eax, ecx
  __asm mov ecx, dword ptr [edi + eax*8]
  __asm mov dword ptr [esp + 0x14], ecx
  __asm lea eax, [edi + eax*8]
  __asm mov dword ptr [esp + 0x10], eax
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esp + 0x1c], eax
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov eax, esi
  __asm mov edi, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0xc
  __asm push eax
  __asm call LAB_100131d8
  __asm dec dword ptr [ebx + 8]
  __asm add esp, 8
  __asm cmp edi, dword ptr [esp + 0x1c]
  __asm je 0x10312287
  __asm cmp esi, ebp
  __asm jne 0x10312240
  __asm mov eax, dword ptr [esp + 0x14]
  __asm cmp eax, dword ptr [esp + 0x28]
  __asm jne LAB_10312324
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm pop edi
  __asm mov dword ptr [ecx], esi
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, ebp
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0x14
  __asm ret 8
  __asm mov eax, dword ptr [esp + 0x14]
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm cmp eax, dword ptr [esp + 0x28]
  __asm jne 0x1031229d
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov dword ptr [ecx], eax
  __asm jmp 0x103122a1
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm mov dword ptr [ecx + 4], eax
  __asm cmp esi, ebp
  __asm je LAB_10312324
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm movzx eax, byte ptr [esi + 8]
  __asm xor eax, 0x811c9dc5
  __asm imul ecx, eax, 0x1000193
  __asm movzx eax, byte ptr [esi + 9]
  __asm xor ecx, eax
  __asm movzx eax, byte ptr [esi + 0xa]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm movzx eax, byte ptr [esi + 0xb]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm imul eax, ecx, 0x1000193
  __asm mov ecx, dword ptr [ebx + 0x18]
  __asm and ecx, eax
  __asm mov eax, dword ptr [esp + 0x20]
  __asm lea eax, [eax + ecx*8]
  __asm mov dword ptr [esp + 0x28], eax
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esp + 0x1c], eax
  __asm nop word ptr [eax + eax]
  __asm mov eax, esi
  __asm mov edi, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0xc
  __asm push eax
  __asm call LAB_100131d8
  __asm dec dword ptr [ebx + 8]
  __asm add esp, 8
  __asm cmp edi, dword ptr [esp + 0x1c]
  __asm je 0x10312339
  __asm cmp esi, ebp
  __asm jne 0x10312300
  __asm mov eax, dword ptr [esp + 0x28]
  __asm mov dword ptr [eax], esi
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm pop edi
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm mov eax, ebp
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0x14
  __asm ret 8
  __asm mov eax, dword ptr [esp + 0x28]
  __asm mov edx, dword ptr [esp + 0x18]
  __asm mov dword ptr [eax], edx
  __asm mov dword ptr [eax + 4], edx
  __asm cmp esi, ebp
  __asm jne LAB_103122b0
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm pop edi
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, ebp
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0x14
  __asm ret 8
}



// Reference entry 103123d0; body size 419 bytes.
#line 1 "ENTRY_103123d0"

__declspec(naked) void FUN_103123d0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm sub esp, 0x14
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x24]
  __asm mov ebx, ecx
  __asm cmp edx, ebp
  __asm je LAB_1031253f
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov dword ptr [esp + 0x10], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esp + 0x24], eax
  __asm movzx eax, byte ptr [edx + 8]
  __asm xor eax, 0x811c9dc5
  __asm imul ecx, eax, 0x1000193
  __asm movzx eax, byte ptr [edx + 9]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebx + 0xc]
  __asm mov esi, edx
  __asm xor ecx, eax
  __asm mov dword ptr [esp + 0x20], edi
  __asm movzx eax, byte ptr [edx + 0xa]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm movzx eax, byte ptr [edx + 0xb]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm mov eax, dword ptr [ebx + 0x18]
  __asm imul ecx, ecx, 0x1000193
  __asm and eax, ecx
  __asm mov ecx, dword ptr [edi + eax*8]
  __asm mov dword ptr [esp + 0x14], ecx
  __asm lea eax, [edi + eax*8]
  __asm mov dword ptr [esp + 0x10], eax
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esp + 0x1c], eax
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov eax, esi
  __asm mov edi, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0xc
  __asm push eax
  __asm call LAB_100131d8
  __asm dec dword ptr [ebx + 8]
  __asm add esp, 8
  __asm cmp edi, dword ptr [esp + 0x1c]
  __asm je 0x10312497
  __asm cmp esi, ebp
  __asm jne 0x10312450
  __asm mov eax, dword ptr [esp + 0x14]
  __asm cmp eax, dword ptr [esp + 0x28]
  __asm jne LAB_10312534
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm pop edi
  __asm mov dword ptr [ecx], esi
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, ebp
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0x14
  __asm ret 8
  __asm mov eax, dword ptr [esp + 0x14]
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm cmp eax, dword ptr [esp + 0x28]
  __asm jne 0x103124ad
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov dword ptr [ecx], eax
  __asm jmp 0x103124b1
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm mov dword ptr [ecx + 4], eax
  __asm cmp esi, ebp
  __asm je LAB_10312534
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm movzx eax, byte ptr [esi + 8]
  __asm xor eax, 0x811c9dc5
  __asm imul ecx, eax, 0x1000193
  __asm movzx eax, byte ptr [esi + 9]
  __asm xor ecx, eax
  __asm movzx eax, byte ptr [esi + 0xa]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm movzx eax, byte ptr [esi + 0xb]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm imul eax, ecx, 0x1000193
  __asm mov ecx, dword ptr [ebx + 0x18]
  __asm and ecx, eax
  __asm mov eax, dword ptr [esp + 0x20]
  __asm lea eax, [eax + ecx*8]
  __asm mov dword ptr [esp + 0x28], eax
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esp + 0x1c], eax
  __asm nop word ptr [eax + eax]
  __asm mov eax, esi
  __asm mov edi, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0xc
  __asm push eax
  __asm call LAB_100131d8
  __asm dec dword ptr [ebx + 8]
  __asm add esp, 8
  __asm cmp edi, dword ptr [esp + 0x1c]
  __asm je 0x10312549
  __asm cmp esi, ebp
  __asm jne 0x10312510
  __asm mov eax, dword ptr [esp + 0x28]
  __asm mov dword ptr [eax], esi
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm pop edi
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm mov eax, ebp
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0x14
  __asm ret 8
  __asm mov eax, dword ptr [esp + 0x28]
  __asm mov edx, dword ptr [esp + 0x18]
  __asm mov dword ptr [eax], edx
  __asm mov dword ptr [eax + 4], edx
  __asm cmp esi, ebp
  __asm jne LAB_103124c0
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm pop edi
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, ebp
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0x14
  __asm ret 8
}



// Reference entry 103125e0; body size 38 bytes.
#line 1 "ENTRY_103125e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103125e0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  *(int*)param_2[1] = (int)((int)(iVar1));
  *(int*)(iVar1 + 4) = (int)(param_2[1]);
  thunk_FUN_1148a50e(param_2,0xc);
  return (int)(iVar1);
}


// Reference entry 10312610; body size 38 bytes.
#line 1 "ENTRY_10312610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10312610(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  *(int*)param_2[1] = (int)((int)(iVar1));
  *(int*)(iVar1 + 4) = (int)(param_2[1]);
  thunk_FUN_1148a50e(param_2,0xc);
  return (int)(iVar1);
}


// Reference entry 103126b0; body size 43 bytes.
#line 1 "ENTRY_103126b0"

__declspec(naked) void FUN_103126b0(void)

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



// Reference entry 103126f0; body size 43 bytes.
#line 1 "ENTRY_103126f0"

__declspec(naked) void FUN_103126f0(void)

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



// Reference entry 10312730; body size 43 bytes.
#line 1 "ENTRY_10312730"

__declspec(naked) void FUN_10312730(void)

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



// Reference entry 10312770; body size 90 bytes.
#line 1 "ENTRY_10312770"

__declspec(naked) void FUN_10312770(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x15555555
  __asm ja 0x103127c5
  __asm lea eax, [eax + eax*2]
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x103127b0
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x103127c5
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x103127aa
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x103127c0
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 103127f0; body size 90 bytes.
#line 1 "ENTRY_103127f0"

__declspec(naked) void FUN_103127f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x15555555
  __asm ja 0x10312845
  __asm lea eax, [eax + eax*2]
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10312830
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10312845
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x1031282a
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10312840
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10312870; body size 87 bytes.
#line 1 "ENTRY_10312870"

__declspec(naked) void FUN_10312870(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x35e50d7
  __asm ja 0x103128c2
  __asm imul eax, eax, 0x4c
  __asm cmp eax, 0x1000
  __asm jb 0x103128ad
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x103128c2
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x103128a7
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x103128bd
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 103128e0; body size 87 bytes.
#line 1 "ENTRY_103128e0"

__declspec(naked) void FUN_103128e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10312932
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x1031291d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10312932
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10312917
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x1031292d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10312950; body size 87 bytes.
#line 1 "ENTRY_10312950"

__declspec(naked) void FUN_10312950(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x103129a2
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x1031298d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x103129a2
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10312987
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x1031299d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 103129c0; body size 87 bytes.
#line 1 "ENTRY_103129c0"

__declspec(naked) void FUN_103129c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10312a12
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x103129fd
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10312a12
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x103129f7
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10312a0d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10312a30; body size 14 bytes.
#line 1 "ENTRY_10312a30"

__declspec(naked) void FUN_10312a30(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 10312a50; body size 13 bytes.
#line 1 "ENTRY_10312a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10312a50(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10312a60; body size 68 bytes.
#line 1 "ENTRY_10312a60"

__declspec(naked) void FUN_10312a60(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm movzx eax, byte ptr [esi]
  __asm xor eax, 0x811c9dc5
  __asm imul edx, eax, 0x1000193
  __asm movzx eax, byte ptr [esi + 1]
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 2]
  __asm imul edx, edx, 0x1000193
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 3]
  __asm imul ecx, edx, 0x1000193
  __asm xor ecx, eax
  __asm mov eax, dword ptr [edi + 0x18]
  __asm imul ecx, ecx, 0x1000193
  __asm pop edi
  __asm pop esi
  __asm and eax, ecx
  __asm ret 4
}



// Reference entry 10312ac0; body size 68 bytes.
#line 1 "ENTRY_10312ac0"

__declspec(naked) void FUN_10312ac0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm movzx eax, byte ptr [esi]
  __asm xor eax, 0x811c9dc5
  __asm imul edx, eax, 0x1000193
  __asm movzx eax, byte ptr [esi + 1]
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 2]
  __asm imul edx, edx, 0x1000193
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 3]
  __asm imul ecx, edx, 0x1000193
  __asm xor ecx, eax
  __asm mov eax, dword ptr [edi + 0x18]
  __asm imul ecx, ecx, 0x1000193
  __asm pop edi
  __asm pop esi
  __asm and eax, ecx
  __asm ret 4
}



// Reference entry 10312b20; body size 68 bytes.
#line 1 "ENTRY_10312b20"

__declspec(naked) void FUN_10312b20(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm movzx eax, byte ptr [esi]
  __asm xor eax, 0x811c9dc5
  __asm imul edx, eax, 0x1000193
  __asm movzx eax, byte ptr [esi + 1]
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 2]
  __asm imul edx, edx, 0x1000193
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 3]
  __asm imul ecx, edx, 0x1000193
  __asm xor ecx, eax
  __asm mov eax, dword ptr [edi + 0x18]
  __asm imul ecx, ecx, 0x1000193
  __asm pop edi
  __asm pop esi
  __asm and eax, ecx
  __asm ret 4
}



// Reference entry 10312b80; body size 4 bytes.
#line 1 "ENTRY_10312b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10312b80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10312b90; body size 4 bytes.
#line 1 "ENTRY_10312b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10312b90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10312ba0; body size 4 bytes.
#line 1 "ENTRY_10312ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10312ba0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10312bb0; body size 60 bytes.
#line 1 "ENTRY_10312bb0"

__declspec(naked) void FUN_10312bb0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [LAB_121a1028]
  __asm mov dword ptr [LAB_121a1028], 0
  __asm test esi, esi
  __asm je 0x10312bea
  __asm push esi
  __asm call LAB_1001e49d
  __asm lea eax, [esi + 8]
  __asm push eax
  __asm call LAB_10018ce6
  __asm add esp, 8
  __asm lea ecx, [esi + 0x30]
  __asm call LAB_1001bf27
  __asm push 0x50
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 10312c00; body size 94 bytes.
#line 1 "ENTRY_10312c00"

__declspec(naked) void FUN_10312c00(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10312c5b
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm shr eax, 3
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm cmp eax, ecx
  __asm jbe 0x10312c29
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_1005e6ce
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push dword ptr [edi]
  __asm push edi
  __asm call LAB_10009c23
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esp + 0x10], eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push dword ptr [esi + 0x10]
  __asm push dword ptr [esi + 0xc]
  __asm call LAB_10033dfc
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10312c80; body size 123 bytes.
#line 1 "ENTRY_10312c80"

__declspec(naked) void FUN_10312c80(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [edi + 8]
  __asm test ecx, ecx
  __asm je 0x10312cf8
  __asm mov eax, dword ptr [edi + 0x1c]
  __asm shr eax, 3
  __asm cmp eax, ecx
  __asm jbe 0x10312ca5
  __asm mov eax, dword ptr [edi + 4]
  __asm mov ecx, edi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_10001cda
  __asm pop edi
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, dword ptr [ecx + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm je 0x10312ccc
  __asm push esi
  __asm mov esi, dword ptr [eax]
  __asm push 0xc
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm test esi, esi
  __asm jne 0x10312cb8
  __asm pop esi
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esp + 4], eax
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm push dword ptr [edi + 0x10]
  __asm push dword ptr [edi + 0xc]
  __asm call LAB_10042e24
  __asm add esp, 0xc
  __asm pop edi
  __asm pop ecx
  __asm ret
}



// Reference entry 10312d20; body size 123 bytes.
#line 1 "ENTRY_10312d20"

__declspec(naked) void FUN_10312d20(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [edi + 8]
  __asm test ecx, ecx
  __asm je 0x10312d98
  __asm mov eax, dword ptr [edi + 0x1c]
  __asm shr eax, 3
  __asm cmp eax, ecx
  __asm jbe 0x10312d45
  __asm mov eax, dword ptr [edi + 4]
  __asm mov ecx, edi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_10011310
  __asm pop edi
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, dword ptr [ecx + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm je 0x10312d6c
  __asm push esi
  __asm mov esi, dword ptr [eax]
  __asm push 0xc
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm test esi, esi
  __asm jne 0x10312d58
  __asm pop esi
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esp + 4], eax
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm push dword ptr [edi + 0x10]
  __asm push dword ptr [edi + 0xc]
  __asm call LAB_1004a3ea
  __asm add esp, 0xc
  __asm pop edi
  __asm pop ecx
  __asm ret
}



// Reference entry 10312dc0; body size 59 bytes.
#line 1 "ENTRY_10312dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10312dc0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0xc);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10312e10; body size 59 bytes.
#line 1 "ENTRY_10312e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10312e10(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *(undefined4*)puVar1[1] = (undefined4)((undefined4)(0));
  puVar1 = (undefined4 *)((undefined4 *)*puVar1);
  while ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    puVar2 = (undefined4 *)((undefined4 *)*puVar1);
    thunk_FUN_1148a50e(puVar1,0xc);
    puVar1 = (undefined4 *)(puVar2);
  }
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10312e90; body size 57 bytes.
#line 1 "ENTRY_10312e90"

__declspec(naked) void FUN_10312e90(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10312eb8
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10312ec3
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10312ee0; body size 57 bytes.
#line 1 "ENTRY_10312ee0"

__declspec(naked) void FUN_10312ee0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10312f08
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10312f13
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10312f30; body size 52 bytes.
#line 1 "ENTRY_10312f30"

__declspec(naked) void FUN_10312f30(void)

{
  __asm imul ecx, dword ptr [esp + 0xc], 0x4c
  __asm mov eax, dword ptr [esp + 8]
  __asm cmp ecx, 0x1000
  __asm jb 0x10312f53
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10312f5e
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10312f80; body size 60 bytes.
#line 1 "ENTRY_10312f80"

__declspec(naked) void FUN_10312f80(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10312fa8
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10312fb5
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10312fd0; body size 60 bytes.
#line 1 "ENTRY_10312fd0"

__declspec(naked) void FUN_10312fd0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10312ff8
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10313005
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10313020; body size 55 bytes.
#line 1 "ENTRY_10313020"

__declspec(naked) void FUN_10313020(void)

{
  __asm imul ecx, dword ptr [esp + 8], 0x4c
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10313043
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10313050
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10313070; body size 61 bytes.
#line 1 "ENTRY_10313070"

__declspec(naked) void FUN_10313070(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10313099
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x103130a6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 103130c0; body size 61 bytes.
#line 1 "ENTRY_103130c0"

__declspec(naked) void FUN_103130c0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x103130e9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x103130f6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10313110; body size 61 bytes.
#line 1 "ENTRY_10313110"

__declspec(naked) void FUN_10313110(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10313139
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10313146
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10313160; body size 8 bytes.
#line 1 "ENTRY_10313160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10313160(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) == 0);
}


// Reference entry 10313170; body size 8 bytes.
#line 1 "ENTRY_10313170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10313170(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) == 0);
}


// Reference entry 10313180; body size 8 bytes.
#line 1 "ENTRY_10313180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10313180(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10313190; body size 8 bytes.
#line 1 "ENTRY_10313190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10313190(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 103131a0; body size 12 bytes.
#line 1 "ENTRY_103131a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103131a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103131b0; body size 12 bytes.
#line 1 "ENTRY_103131b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103131b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103131c0; body size 12 bytes.
#line 1 "ENTRY_103131c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103131c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103131d0; body size 11 bytes.
#line 1 "ENTRY_103131d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103131d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103131e0; body size 11 bytes.
#line 1 "ENTRY_103131e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103131e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103131f0; body size 11 bytes.
#line 1 "ENTRY_103131f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103131f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103136e0; body size 20 bytes.
#line 1 "ENTRY_103136e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_103136e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1030e0d0<>(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 10313700; body size 20 bytes.
#line 1 "ENTRY_10313700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10313700(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1030e350<>(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 103137d0; body size 3 bytes.
#line 1 "ENTRY_103137d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_103137d0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 103137e0; body size 3 bytes.
#line 1 "ENTRY_103137e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_103137e0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 103137f0; body size 3 bytes.
#line 1 "ENTRY_103137f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_103137f0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10313800; body size 6 bytes.
#line 1 "ENTRY_10313800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313800(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10313810; body size 6 bytes.
#line 1 "ENTRY_10313810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313810(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 10313820; body size 6 bytes.
#line 1 "ENTRY_10313820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313820(void)

{
  return (undefined4)(0x35e50d7);
}


// Reference entry 10313830; body size 6 bytes.
#line 1 "ENTRY_10313830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313830(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10313840; body size 6 bytes.
#line 1 "ENTRY_10313840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313840(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10313850; body size 6 bytes.
#line 1 "ENTRY_10313850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313850(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10313860; body size 6 bytes.
#line 1 "ENTRY_10313860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313860(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10313870; body size 6 bytes.
#line 1 "ENTRY_10313870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313870(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10313880; body size 6 bytes.
#line 1 "ENTRY_10313880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313880(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10313890; body size 6 bytes.
#line 1 "ENTRY_10313890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10313890(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 103138a0; body size 6 bytes.
#line 1 "ENTRY_103138a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103138a0(void)

{
  return (undefined4)(0x15555555);
}


// Reference entry 103138b0; body size 6 bytes.
#line 1 "ENTRY_103138b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103138b0(void)

{
  return (undefined4)(0x35e50d7);
}


// Reference entry 103139c0; body size 5 bytes.
#line 1 "ENTRY_103139c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103139c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10313ab0; body size 4 bytes.
#line 1 "ENTRY_10313ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10313ab0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10313ac0; body size 9 bytes.
#line 1 "ENTRY_10313ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10313ac0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10313ad0; body size 9 bytes.
#line 1 "ENTRY_10313ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10313ad0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10313ae0; body size 9 bytes.
#line 1 "ENTRY_10313ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10313ae0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10313af0; body size 4 bytes.
#line 1 "ENTRY_10313af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10313af0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10313c80; body size 8 bytes.
#line 1 "ENTRY_10313c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10313c80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x28) == 0);
}


// Reference entry 10313e30; body size 26 bytes.
#line 1 "ENTRY_10313e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10313e30(int *param_1)

{
  if ((param_1[1] != 0) || (*param_1 != (int)((0)))) {
    thunk_FUN_1145c930(param_1 + 2,0);
  }
  return;
}


// Reference entry 10313f90; body size 38 bytes.
#line 1 "ENTRY_10313f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

longlong __fastcall FUN_10313f90(int *param_1)

{
  return (longlong)((longlong)(param_1[2] - *param_1) * 1000000000 + (longlong)((param_1[3] - param_1[1]) * 1000));
}


// Reference entry 10314000; body size 40 bytes.
#line 1 "ENTRY_10314000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10314000(int *param_1)

{
  return (int)(((((param_1[3] - param_1[1]) + 500000) * 1000) / 1000000000 + param_1[2]) - *param_1);
}


// Reference entry 10314120; body size 15 bytes.
#line 1 "ENTRY_10314120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10314120(undefined4 param_1)

{
  thunk_FUN_1145c930(param_1,0);
  return;
}


// Reference entry 10314140; body size 12 bytes.
#line 1 "ENTRY_10314140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10314140(undefined4 param_1)

{
  thunk_FUN_1145c930(param_1,0);
  return;
}


// Reference entry 10314170; body size 25 bytes.
#line 1 "ENTRY_10314170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10314170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10314190; body size 33 bytes.
#line 1 "ENTRY_10314190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10314190(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 103141c0; body size 43 bytes.
#line 1 "ENTRY_103141c0"

__declspec(naked) void FUN_103141c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x103141e5
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



// Reference entry 10314200; body size 26 bytes.
#line 1 "ENTRY_10314200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10314200(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10314220; body size 25 bytes.
#line 1 "ENTRY_10314220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10314220(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10314240; body size 34 bytes.
#line 1 "ENTRY_10314240"

__declspec(naked) void FUN_10314240(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [edx + 0xc]
  __asm neg edx
  __asm sbb edx, edx
  __asm and edx, eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], edx
  __asm ret 4
}



// Reference entry 10314270; body size 26 bytes.
#line 1 "ENTRY_10314270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10314270(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10314290; body size 26 bytes.
#line 1 "ENTRY_10314290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10314290(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103142b0; body size 26 bytes.
#line 1 "ENTRY_103142b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103142b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103142d0; body size 26 bytes.
#line 1 "ENTRY_103142d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103142d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103142f0; body size 26 bytes.
#line 1 "ENTRY_103142f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103142f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10314310; body size 26 bytes.
#line 1 "ENTRY_10314310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10314310(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10314630; body size 78 bytes.
#line 1 "ENTRY_10314630"

__declspec(naked) void FUN_10314630(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10314659
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10314670
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



// Reference entry 103146a0; body size 78 bytes.
#line 1 "ENTRY_103146a0"

__declspec(naked) void FUN_103146a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x103146c9
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x103146e0
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



// Reference entry 10314710; body size 78 bytes.
#line 1 "ENTRY_10314710"

__declspec(naked) void FUN_10314710(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10314739
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10314750
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



// Reference entry 10314780; body size 78 bytes.
#line 1 "ENTRY_10314780"

__declspec(naked) void FUN_10314780(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x103147a9
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x103147c0
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



// Reference entry 10314c30; body size 39 bytes.
#line 1 "ENTRY_10314c30"

__declspec(naked) void FUN_10314c30(void)

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
  __asm je 0x10314c4e
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10314c60; body size 39 bytes.
#line 1 "ENTRY_10314c60"

__declspec(naked) void FUN_10314c60(void)

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
  __asm je 0x10314c7e
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10314c90; body size 39 bytes.
#line 1 "ENTRY_10314c90"

__declspec(naked) void FUN_10314c90(void)

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
  __asm je 0x10314cae
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10314f80; body size 7 bytes.
#line 1 "ENTRY_10314f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10314f80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103150d0; body size 5 bytes.
#line 1 "ENTRY_103150d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103150d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103150e0; body size 5 bytes.
#line 1 "ENTRY_103150e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103150e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103150f0; body size 40 bytes.
#line 1 "ENTRY_103150f0"

__declspec(naked) void FUN_103150f0(void)

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



// Reference entry 10315130; body size 28 bytes.
#line 1 "ENTRY_10315130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10315130(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10315160; body size 28 bytes.
#line 1 "ENTRY_10315160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10315160(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10315190; body size 28 bytes.
#line 1 "ENTRY_10315190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10315190(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10315210; body size 15 bytes.
#line 1 "ENTRY_10315210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10315210(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10315230; body size 5 bytes.
#line 1 "ENTRY_10315230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10315230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10315240; body size 5 bytes.
#line 1 "ENTRY_10315240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10315240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10315250; body size 5 bytes.
#line 1 "ENTRY_10315250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10315250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10315260; body size 5 bytes.
#line 1 "ENTRY_10315260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10315260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10315270; body size 5 bytes.
#line 1 "ENTRY_10315270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10315270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10315280; body size 6 bytes.
#line 1 "ENTRY_10315280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10315280(void)

{
  return (char *)("SCIDevice");
}


// Reference entry 10315290; body size 6 bytes.
#line 1 "ENTRY_10315290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10315290(void)

{
  return (char *)("SCIDeviceAutoplay");
}


// Reference entry 103152a0; body size 6 bytes.
#line 1 "ENTRY_103152a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103152a0(void)

{
  return (char *)("SCIDeviceLineIn");
}


// Reference entry 103152b0; body size 6 bytes.
#line 1 "ENTRY_103152b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103152b0(void)

{
  return (char *)("SCIDeviceLineOut");
}


// Reference entry 103152c0; body size 6 bytes.
#line 1 "ENTRY_103152c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103152c0(void)

{
  return (char *)("SCIDeviceMusicEqualization");
}


// Reference entry 103152d0; body size 6 bytes.
#line 1 "ENTRY_103152d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103152d0(void)

{
  return (char *)("SCIOpConnectionManagerGetProtocolInfo");
}


// Reference entry 103152e0; body size 6 bytes.
#line 1 "ENTRY_103152e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103152e0(void)

{
  return (char *)("SCIOpDevicePropertiesGetButtonLockState");
}


// Reference entry 103152f0; body size 6 bytes.
#line 1 "ENTRY_103152f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103152f0(void)

{
  return (char *)("SCIOpDevicePropertiesGetLEDState");
}


// Reference entry 10315300; body size 6 bytes.
#line 1 "ENTRY_10315300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10315300(void)

{
  return (char *)("SCIOpDevicePropertiesSetButtonLockState");
}


// Reference entry 10315310; body size 6 bytes.
#line 1 "ENTRY_10315310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10315310(void)

{
  return (char *)("SCIOpDevicePropertiesSetLEDState");
}


// Reference entry 10315320; body size 6 bytes.
#line 1 "ENTRY_10315320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10315320(void)

{
  return (char *)("SCIPortableDevice");
}


// Reference entry 10315330; body size 6 bytes.
#line 1 "ENTRY_10315330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10315330(void)

{
  return (char *)("SCIVersionRange");
}


// Reference entry 10315340; body size 5 bytes.
#line 1 "ENTRY_10315340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10315340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10315350; body size 5 bytes.
#line 1 "ENTRY_10315350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10315350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10315630; body size 27 bytes.
#line 1 "ENTRY_10315630"

__declspec(naked) void FUN_10315630(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1189359c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10315660; body size 27 bytes.
#line 1 "ENTRY_10315660"

__declspec(naked) void FUN_10315660(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11893b98
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10315690; body size 27 bytes.
#line 1 "ENTRY_10315690"

__declspec(naked) void FUN_10315690(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11894624
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 103156c0; body size 27 bytes.
#line 1 "ENTRY_103156c0"

__declspec(naked) void FUN_103156c0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118943b0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 103156f0; body size 27 bytes.
#line 1 "ENTRY_103156f0"

__declspec(naked) void FUN_103156f0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11894528
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10315720; body size 27 bytes.
#line 1 "ENTRY_10315720"

__declspec(naked) void FUN_10315720(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_118942b4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10315750; body size 27 bytes.
#line 1 "ENTRY_10315750"

__declspec(naked) void FUN_10315750(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1189472c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10315fe0; body size 16 bytes.
#line 1 "ENTRY_10315fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10315fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316000; body size 16 bytes.
#line 1 "ENTRY_10316000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316000(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316020; body size 16 bytes.
#line 1 "ENTRY_10316020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316040; body size 16 bytes.
#line 1 "ENTRY_10316040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316240; body size 42 bytes.
#line 1 "ENTRY_10316240"

__declspec(naked) void FUN_10316240(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_1189359c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11893684
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10316280; body size 21 bytes.
#line 1 "ENTRY_10316280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10316280(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103162a0; body size 25 bytes.
#line 1 "ENTRY_103162a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103162a0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 103162c0; body size 23 bytes.
#line 1 "ENTRY_103162c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103162c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103162e0; body size 3 bytes.
#line 1 "ENTRY_103162e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103162e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103162f0; body size 49 bytes.
#line 1 "ENTRY_103162f0"

__declspec(naked) void FUN_103162f0(void)

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



// Reference entry 10316330; body size 23 bytes.
#line 1 "ENTRY_10316330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316330(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316350; body size 44 bytes.
#line 1 "ENTRY_10316350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316350(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10316390; body size 49 bytes.
#line 1 "ENTRY_10316390"

__declspec(naked) void FUN_10316390(void)

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



// Reference entry 103163d0; body size 23 bytes.
#line 1 "ENTRY_103163d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103163d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103163f0; body size 28 bytes.
#line 1 "ENTRY_103163f0"

__declspec(naked) void FUN_103163f0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm call LAB_10097f23
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x08 __asm _emit 0x05 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10316420; body size 58 bytes.
#line 1 "ENTRY_10316420"

__declspec(naked) void FUN_10316420(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm push 2
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 0x10], esi
  __asm call LAB_10051c6c
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 0x24], eax
  __asm mov al, byte ptr [esp + 0x14]
  __asm mov byte ptr [esi + 0x28], al
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_118947a8
  __asm mov word ptr [esi + 0x20], 0
  __asm mov byte ptr [esi + 0x22], 0
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}



// Reference entry 10316470; body size 127 bytes.
#line 1 "ENTRY_10316470"

__declspec(naked) void FUN_10316470(void)

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
  __asm je 0x10316497
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x1031649a
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
  __asm push offset LAB_11884fb8
  __asm push offset LAB_118938f4
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_118939c8
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_11893a10
  __asm mov dword ptr [edi + 0x46c], LAB_11893a4c
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 10316510; body size 127 bytes.
#line 1 "ENTRY_10316510"

__declspec(naked) void FUN_10316510(void)

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
  __asm je 0x10316537
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x1031653a
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
  __asm push offset LAB_118939bc
  __asm push offset LAB_118938f4
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_1189392c
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_11893974
  __asm mov dword ptr [edi + 0x46c], LAB_118939b0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 103165b0; body size 141 bytes.
#line 1 "ENTRY_103165b0"

__declspec(naked) void FUN_103165b0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 0xc], edi
  __asm mov eax, dword ptr [esi + 4]
  __asm lea ecx, [esi + 4]
  __asm mov eax, dword ptr [eax + 4]
  __asm add ecx, eax
  __asm cmp byte ptr [esp + 0x28], 0
  __asm mov eax, dword ptr [ecx]
  __asm je 0x103165d7
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x103165da
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
  __asm push offset LAB_11893b34
  __asm push offset LAB_11893b48
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11893aa4
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_11893aec
  __asm mov dword ptr [edi + 0x46c], LAB_11893b28
  __asm mov byte ptr [edi + 0xd7d0], 0
  __asm mov byte ptr [edi + 0xdbd0], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 10316660; body size 134 bytes.
#line 1 "ENTRY_10316660"

__declspec(naked) void FUN_10316660(void)

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
  __asm je 0x10316687
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x1031668a
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
  __asm push offset LAB_11894214
  __asm push offset LAB_11893ddc
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11894184
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_118941cc
  __asm mov dword ptr [edi + 0x46c], LAB_11894208
  __asm mov byte ptr [edi + 0xd7d0], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 10316710; body size 134 bytes.
#line 1 "ENTRY_10316710"

__declspec(naked) void FUN_10316710(void)

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
  __asm je 0x10316737
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x1031673a
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
  __asm push offset LAB_11893ec0
  __asm push offset LAB_11893ddc
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11893e30
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_11893e78
  __asm mov dword ptr [edi + 0x46c], LAB_11893eb4
  __asm mov byte ptr [edi + 0xd7d0], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 10316860; body size 127 bytes.
#line 1 "ENTRY_10316860"

__declspec(naked) void FUN_10316860(void)

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
  __asm je 0x10316887
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x1031688a
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
  __asm push offset LAB_1189414c
  __asm push offset LAB_11893ddc
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_118940bc
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_11894104
  __asm mov dword ptr [edi + 0x46c], LAB_11894140
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 10316900; body size 127 bytes.
#line 1 "ENTRY_10316900"

__declspec(naked) void FUN_10316900(void)

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
  __asm je 0x10316927
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x1031692a
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
  __asm push offset LAB_11893dcc
  __asm push offset LAB_11893ddc
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11893d3c
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_11893d84
  __asm mov dword ptr [edi + 0x46c], LAB_11893dc0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 103169a0; body size 127 bytes.
#line 1 "ENTRY_103169a0"

__declspec(naked) void FUN_103169a0(void)

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
  __asm je 0x103169c7
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x103169ca
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
  __asm push offset LAB_11894044
  __asm push offset LAB_11893ddc
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11893fb4
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_11893ffc
  __asm mov dword ptr [edi + 0x46c], LAB_11894038
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 10316f90; body size 9 bytes.
#line 1 "ENTRY_10316f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316f90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDevice);
  return (undefined4 *)(param_1);
}


// Reference entry 10316fa0; body size 9 bytes.
#line 1 "ENTRY_10316fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpConnectionManagerGetProtocolInfo);
  return (undefined4 *)(param_1);
}


// Reference entry 10316fb0; body size 9 bytes.
#line 1 "ENTRY_10316fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePropertiesGetButtonLockState);
  return (undefined4 *)(param_1);
}


// Reference entry 10316fc0; body size 9 bytes.
#line 1 "ENTRY_10316fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePropertiesGetLEDState);
  return (undefined4 *)(param_1);
}


// Reference entry 10316fd0; body size 9 bytes.
#line 1 "ENTRY_10316fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePropertiesSetButtonLockState);
  return (undefined4 *)(param_1);
}


// Reference entry 10316fe0; body size 9 bytes.
#line 1 "ENTRY_10316fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePropertiesSetLEDState);
  return (undefined4 *)(param_1);
}


// Reference entry 10316ff0; body size 9 bytes.
#line 1 "ENTRY_10316ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10316ff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPortableDevice);
  return (undefined4 *)(param_1);
}


// Reference entry 10317000; body size 9 bytes.
#line 1 "ENTRY_10317000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10317000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIVersionRange);
  return (undefined4 *)(param_1);
}


// Reference entry 103177f0; body size 11 bytes.
#line 1 "ENTRY_103177f0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103177f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpCMGetProtocolInfoAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10317800; body size 11 bytes.
#line 1 "ENTRY_10317800"

/* WARNING: Removing unreachable block_10317800 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10317800(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpDPGetButtonLockStateAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10317810; body size 11 bytes.
#line 1 "ENTRY_10317810"

/* WARNING: Removing unreachable block_10317810 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10317810(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpDPGetLEDStateAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10317820; body size 11 bytes.
#line 1 "ENTRY_10317820"

/* WARNING: Removing unreachable block_10317820 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10317820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpDPSetButtonLockStateAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10317840; body size 19 bytes.
#line 1 "ENTRY_10317840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10317840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10318910; body size 28 bytes.
#line 1 "ENTRY_10318910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318910(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPauseAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPauseAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTPauseAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10318940; body size 28 bytes.
#line 1 "ENTRY_10318940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318940(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTStopAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTStopAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTStopAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10318970; body size 28 bytes.
#line 1 "ENTRY_10318970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318970(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpCMGetProtocolInfoAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 103189a0; body size 28 bytes.
#line 1 "ENTRY_103189a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103189a0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetButtonLockStateAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 103189d0; body size 28 bytes.
#line 1 "ENTRY_103189d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103189d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpDPGetLEDStateAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10318a00; body size 28 bytes.
#line 1 "ENTRY_10318a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318a00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpDPRemoveBondedZonesAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10318a30; body size 28 bytes.
#line 1 "ENTRY_10318a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318a30(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetButtonLockStateAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10318a60; body size 28 bytes.
#line 1 "ENTRY_10318a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318a60(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetLEDStateAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10318a90; body size 28 bytes.
#line 1 "ENTRY_10318a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318a90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpDPSetZoneAttributesAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10318dd0; body size 7 bytes.
#line 1 "ENTRY_10318dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10318de0; body size 7 bytes.
#line 1 "ENTRY_10318de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10318df0; body size 7 bytes.
#line 1 "ENTRY_10318df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10318e00; body size 7 bytes.
#line 1 "ENTRY_10318e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10318e10; body size 7 bytes.
#line 1 "ENTRY_10318e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10318e20; body size 7 bytes.
#line 1 "ENTRY_10318e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318e20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10318e40; body size 7 bytes.
#line 1 "ENTRY_10318e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10318e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10318e50; body size 18 bytes.
#line 1 "ENTRY_10318e50"

__declspec(naked) void FUN_10318e50(void)

{
  __asm mov dword ptr [ecx], LAB_11893c50
  __asm mov dword ptr [ecx + 8], LAB_11893ca4
  __asm jmp LAB_10016568
}



// Reference entry 10318e70; body size 18 bytes.
#line 1 "ENTRY_10318e70"

__declspec(naked) void FUN_10318e70(void)

{
  __asm mov dword ptr [ecx], LAB_118946d0
  __asm mov dword ptr [ecx + 8], LAB_1189471c
  __asm jmp LAB_1008b48a
}



// Reference entry 10318e90; body size 18 bytes.
#line 1 "ENTRY_10318e90"

__declspec(naked) void FUN_10318e90(void)

{
  __asm mov dword ptr [ecx], LAB_1189445c
  __asm mov dword ptr [ecx + 8], LAB_118944a8
  __asm jmp LAB_1005024a
}



// Reference entry 10318eb0; body size 18 bytes.
#line 1 "ENTRY_10318eb0"

__declspec(naked) void FUN_10318eb0(void)

{
  __asm mov dword ptr [ecx], LAB_118945cc
  __asm mov dword ptr [ecx + 8], LAB_11894614
  __asm jmp LAB_10044c51
}



// Reference entry 10318ed0; body size 18 bytes.
#line 1 "ENTRY_10318ed0"

__declspec(naked) void FUN_10318ed0(void)

{
  __asm mov dword ptr [ecx], LAB_11894358
  __asm mov dword ptr [ecx + 8], LAB_118943a0
  __asm jmp LAB_10064312
}



// Reference entry 10318fb0; body size 5 bytes.
#line 1 "ENTRY_10318fb0"

__declspec(naked) void FUN_10318fb0(void)
{ __asm jmp FUN_1008b728 }


// Reference entry 10318fc0; body size 5 bytes.
#line 1 "ENTRY_10318fc0"

__declspec(naked) void FUN_10318fc0(void)
{ __asm jmp FUN_100769e5 }


// Reference entry 10318fd0; body size 22 bytes.
#line 1 "ENTRY_10318fd0"

__declspec(naked) void FUN_10318fd0(void)

{
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm call LAB_10093dce
  __asm add esp, 8
  __asm test al, al
  __asm sete al
  __asm ret
}



// Reference entry 10318ff0; body size 3 bytes.
#line 1 "ENTRY_10318ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10318ff0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10319000; body size 7 bytes.
#line 1 "ENTRY_10319000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10319000(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10319010; body size 3 bytes.
#line 1 "ENTRY_10319010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10319020; body size 3 bytes.
#line 1 "ENTRY_10319020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10319030; body size 3 bytes.
#line 1 "ENTRY_10319030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319030(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10319040; body size 3 bytes.
#line 1 "ENTRY_10319040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319040(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10319050; body size 3 bytes.
#line 1 "ENTRY_10319050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10319060; body size 7 bytes.
#line 1 "ENTRY_10319060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10319060(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10319070; body size 3 bytes.
#line 1 "ENTRY_10319070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319070(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10319080; body size 4 bytes.
#line 1 "ENTRY_10319080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319080(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10319090; body size 4 bytes.
#line 1 "ENTRY_10319090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319090(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103190a0; body size 4 bytes.
#line 1 "ENTRY_103190a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103190a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103190b0; body size 3 bytes.
#line 1 "ENTRY_103190b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103190b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103190c0; body size 16 bytes.
#line 1 "ENTRY_103190c0"

__declspec(naked) void FUN_103190c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 8
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}



// Reference entry 103190e0; body size 6 bytes.
#line 1 "ENTRY_103190e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103190e0(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10319ce0; body size 7 bytes.
#line 1 "ENTRY_10319ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10319ce0(int param_1)

{
  return (int)(param_1 + 0x4ca);
}


// Reference entry 10319cf0; body size 49 bytes.
#line 1 "ENTRY_10319cf0"

__declspec(naked) void FUN_10319cf0(void)

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
  __asm jbe 0x10319d11
  __asm mov eax, 0x1fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10319dc0; body size 3 bytes.
#line 1 "ENTRY_10319dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10319dd0; body size 3 bytes.
#line 1 "ENTRY_10319dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10319de0; body size 3 bytes.
#line 1 "ENTRY_10319de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10319de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10319df0; body size 3 bytes.
#line 1 "ENTRY_10319df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void  __stdcall FUN_10319df0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
}


// Reference entry 10319e00; body size 6 bytes.
#line 1 "ENTRY_10319e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10319e00(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1031b130; body size 11 bytes.
#line 1 "ENTRY_1031b130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1031b130(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1031b140; body size 14 bytes.
#line 1 "ENTRY_1031b140"

__declspec(naked) void FUN_1031b140(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne LAB_1000e7d7
  __asm xor al, al
  __asm ret
}



// Reference entry 1031b2b0; body size 9 bytes.
#line 1 "ENTRY_1031b2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1031b2b0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 1031c8a0; body size 893 bytes.
#line 1 "ENTRY_1031c8a0"

__declspec(naked) void FUN_1031c8a0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0xc4]
  __asm sub esp, 0xc4
  __asm push -1
  __asm push offset LAB_1153354d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x34
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm mov dword ptr [ebp + 0xc0], eax
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ecx
  __asm mov dword ptr [ebp - 0x34], esi
  __asm mov edi, dword ptr [ebp + 0xcc]
  __asm xor ebx, ebx
  __asm mov eax, dword ptr [ebp + 0xd0]
  __asm mov dword ptr [ebp - 0x40], edi
  __asm mov dword ptr [ebp - 0x28], ebx
  __asm mov dword ptr [ebp - 0x3c], edi
  __asm mov dword ptr [ebp - 0x20], eax
  __asm cmp dword ptr [esi + 8], ebx
  __asm jne 0x1031c969
  __asm push 0x48
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x40], esi
  __asm mov dword ptr [ebp - 4], ebx
  __asm test esi, esi
  __asm je 0x1031c94c
  __asm push 0x6c
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [ebp - 0x3c], eax
  __asm mov byte ptr [ebp - 4], 1
  __asm test eax, eax
  __asm je 0x1031c93d
  __asm push ebx
  __asm mov ecx, eax
  __asm call LAB_10073dda
  __asm push eax
  __asm mov ecx, esi
  __asm mov byte ptr [ebp - 4], bl
  __asm call LAB_1003adcd
  __asm jmp 0x1031c94e
  __asm xor eax, eax
  __asm mov ecx, esi
  __asm push eax
  __asm mov byte ptr [ebp - 4], al
  __asm call LAB_1003adcd
  __asm jmp 0x1031c94e
  __asm xor eax, eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm mov dword ptr [edi], eax
  __asm test eax, eax
  __asm je 0x1031c962
  __asm mov edx, dword ptr [eax]
  __asm mov ecx, eax
  __asm call dword ptr [edx + 4]
  __asm mov eax, edi
  __asm jmp LAB_1031cbf8
  __asm call LAB_1000e23c
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov edi, eax
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x1031c9ae
  __asm add ecx, 0x378
  __asm call LAB_10049634
  __asm mov ecx, dword ptr [esi + 8]
  __asm test al, al
  __asm je 0x1031c9b1
  __asm call LAB_1008dde8
  __asm cmp eax, 0xb
  __asm mov ecx, edi
  __asm lea eax, [ebp - 0x1c]
  __asm push eax
  __asm lea eax, [ebp - 0x14]
  __asm push eax
  __asm jne 0x1031c9a7
  __asm call LAB_10062418
  __asm jmp 0x1031c9ed
  __asm call LAB_10093c7f
  __asm jmp 0x1031c9ed
  __asm mov ecx, dword ptr [esi + 8]
  __asm call LAB_10009b7e
  __asm test al, al
  __asm je 0x1031c9cb
  __asm lea eax, [ebp - 0x1c]
  __asm mov ecx, edi
  __asm push eax
  __asm lea eax, [ebp - 0x14]
  __asm push eax
  __asm call LAB_1003b7a5
  __asm jmp 0x1031c9ed
  __asm mov ecx, dword ptr [esi + 8]
  __asm call LAB_1003eec8
  __asm test al, al
  __asm mov ecx, edi
  __asm lea eax, [ebp - 0x1c]
  __asm push eax
  __asm lea eax, [ebp - 0x14]
  __asm push eax
  __asm je 0x1031c9e8
  __asm call LAB_1008a4d1
  __asm jmp 0x1031c9ed
  __asm call LAB_1004532c
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm push offset LAB_1186d2ee
  __asm push dword ptr [eax + 8]
  __asm call LAB_10077a61
  __asm push eax
  __asm push offset LAB_1188bc94
  __asm lea eax, [ebp + 0x80]
  __asm push 0x40
  __asm push eax
  __asm call LAB_10086cb9
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm push dword ptr [eax + 0xc]
  __asm lea eax, [ebp]
  __asm push offset LAB_118920dc
  __asm push 0x80
  __asm push eax
  __asm call LAB_10086cb9
  __asm add esp, 0x28
  __asm lea eax, [ebp + 0x80]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_1004f09d
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, eax
  __asm test esi, esi
  __asm je 0x1031ca82
  __asm mov eax, dword ptr [ebp - 0x34]
  __asm lea ecx, [ebp - 0x30]
  __asm push ecx
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 0x14]
  __asm mov ecx, dword ptr [esi + 0x5c]
  __asm or ebx, 2
  __asm test ecx, ecx
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, offset LAB_1186d2ee
  __asm mov dword ptr [ebp - 0x28], ebx
  __asm cmovne edx, ecx
  __asm push eax
  __asm push edx
  __asm call LAB_10093dce
  __asm add esp, 8
  __asm mov byte ptr [ebp - 0xd], 1
  __asm test al, al
  __asm je 0x1031ca86
  __asm mov byte ptr [ebp - 0xd], 0
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm test bl, 2
  __asm je 0x1031cab5
  __asm and ebx, 0xfffffffd
  __asm mov dword ptr [ebp - 0x28], ebx
  __asm lea ecx, [ebp - 0x30]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff
  __asm cmp byte ptr [ebp - 0xd], 0
  __asm je 0x1031cafe
  __asm push dword ptr [ebp - 0x18]
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm push offset LAB_1186d2ee
  __asm push dword ptr [eax + 8]
  __asm call LAB_10077a61
  __asm add esp, 8
  __asm push eax
  __asm push offset LAB_1188feb0
  __asm lea eax, [ebp + 0x80]
  __asm push 0x40
  __asm push eax
  __asm call LAB_10086cb9
  __asm add esp, 0x14
  __asm lea eax, [ebp + 0x80]
  __asm mov ecx, edi
  __asm push eax
  __asm call LAB_1004f09d
  __asm inc dword ptr [ebp - 0x18]
  __asm jmp LAB_1031ca42
  __asm lea eax, [ebp + 0x80]
  __asm push eax
  __asm lea ecx, [ebp - 0x38]
  __asm call LAB_1005273e
  __asm lea eax, [ebp]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm lea ecx, [ebp - 0x2c]
  __asm call LAB_1005273e
  __asm mov esi, dword ptr [ebp - 0x20]
  __asm mov byte ptr [ebp - 4], 5
  __asm test esi, esi
  __asm je 0x1031cb64
  __asm lea eax, [ebp + 0x80]
  __asm push eax
  __asm lea ecx, [ebp - 0x24]
  __asm call LAB_1005273e
  __asm lea eax, [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 6
  __asm cmp eax, esi
  __asm je 0x1031cb58
  __asm mov ecx, esi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp - 0x24]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp - 0x24]
  __asm mov byte ptr [ebp - 4], 7
  __asm call LAB_1005c315
  __asm push offset LAB_1186d2ee
  __asm lea ecx, [ebp - 0x20]
  __asm mov byte ptr [ebp - 4], 8
  __asm call LAB_1005273e
  __asm push offset LAB_1186d2ee
  __asm lea ecx, [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005273e
  __asm mov esi, dword ptr [ebp - 0x3c]
  __asm lea eax, [ebp - 0x20]
  __asm mov ecx, dword ptr [ebp - 0x34]
  __asm push eax
  __asm lea eax, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0xa
  __asm push eax
  __asm lea eax, [ebp - 0x2c]
  __asm push eax
  __asm lea eax, [ebp - 0x38]
  __asm push eax
  __asm push esi
  __asm call LAB_1006bc3e
  __asm or ebx, 4
  __asm mov dword ptr [ebp - 0x28], ebx
  __asm lea ecx, [ebp - 0x18]
  __asm mov byte ptr [ebp - 4], 0xb
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xe8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x20]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x2c]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xd4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp - 0x38]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x0e __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [ebp + 0xc0]
  __asm xor ecx, ebp
  __asm call LAB_100382f3
  __asm lea esp, [ebp + 0xc4]
  __asm pop ebp
  __asm ret 8
}



// Reference entry 1031dbe0; body size 16 bytes.
#line 1 "ENTRY_1031dbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031dbe0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1031dc00; body size 9 bytes.
#line 1 "ENTRY_1031dc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031dc00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1031dc10; body size 9 bytes.
#line 1 "ENTRY_1031dc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031dc10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1031dc20; body size 9 bytes.
#line 1 "ENTRY_1031dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031dc20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1031dc30; body size 9 bytes.
#line 1 "ENTRY_1031dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031dc30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1031dc40; body size 9 bytes.
#line 1 "ENTRY_1031dc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031dc40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1031dde0; body size 12 bytes.
#line 1 "ENTRY_1031dde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1031dde0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1031ddf0; body size 8 bytes.
#line 1 "ENTRY_1031ddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1031ddf0(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 1031e010; body size 4 bytes.
#line 1 "ENTRY_1031e010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031e010(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 1031e300; body size 7 bytes.
#line 1 "ENTRY_1031e300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1031e300(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x551));
}


// Reference entry 1031e6b0; body size 26 bytes.
#line 1 "ENTRY_1031e6b0"

__declspec(naked) void FUN_1031e6b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm lea esi, [ecx + 0x564]
  __asm mov edi, eax
  __asm mov ecx, 0x143
  __asm _emit 0xf3 __asm _emit 0xa5
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1031f360; body size 4 bytes.
#line 1 "ENTRY_1031f360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1031f360(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 1031f6c0; body size 15 bytes.
#line 1 "ENTRY_1031f6c0"

__declspec(naked) void FUN_1031f6c0(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_1031f610
  __asm add esp, 4
  __asm ret 4
}



// Reference entry 1031f6e0; body size 59 bytes.
#line 1 "ENTRY_1031f6e0"

__declspec(naked) void FUN_1031f6e0(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [edi + 8]
  __asm test ecx, ecx
  __asm jne 0x1031f6ef
  __asm lea eax, [ecx + 0xa]
  __asm pop edi
  __asm ret
  __asm push esi
  __asm or esi, 0xffffffff
  __asm cmp byte ptr [ecx + 0xa70], 0
  __asm jne 0x1031f705
  __asm call LAB_1005a7b3
  __asm test al, al
  __asm je 0x1031f70f
  __asm mov ecx, dword ptr [edi + 8]
  __asm call LAB_100243f7
  __asm mov esi, eax
  __asm push esi
  __asm call LAB_1031f610
  __asm add esp, 4
  __asm pop esi
  __asm pop edi
  __asm ret
}



// Reference entry 1031f980; body size 21 bytes.
#line 1 "ENTRY_1031f980"

__declspec(naked) void FUN_1031f980(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x1031f992
  __asm add ecx, 0x378
  __asm jmp LAB_1000e21e
  __asm xor eax, eax
  __asm ret
}



// Reference entry 1031fbe0; body size 7 bytes.
#line 1 "ENTRY_1031fbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1031fbe0(int param_1)

{
  return (int)(param_1 + 0xa8);
}


// Reference entry 1031fd70; body size 26 bytes.
#line 1 "ENTRY_1031fd70"

__declspec(naked) void FUN_1031fd70(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm lea esi, [ecx + 0x564]
  __asm mov edi, eax
  __asm mov ecx, 0x143
  __asm _emit 0xf3 __asm _emit 0xa5
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10320050; body size 7 bytes.
#line 1 "ENTRY_10320050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10320050(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 103201d0; body size 7 bytes.
#line 1 "ENTRY_103201d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103201d0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10320370; body size 4 bytes.
#line 1 "ENTRY_10320370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10320370(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 103206a0; body size 28 bytes.
#line 1 "ENTRY_103206a0"

__declspec(naked) void FUN_103206a0(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm test eax, eax
  __asm je 0x103206fb
  __asm mov eax, dword ptr [eax + 0x54c]
  __asm cmp eax, 0xd
  __asm ja 0x103206fb
  __asm jmp dword ptr [eax*4 + LAB_10320700]
  __asm _emit 0xb8 __asm _emit 0x01 __asm _emit 0x00
}



// Reference entry 10320860; body size 7 bytes.
#line 1 "ENTRY_10320860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10320860(int param_1)

{
  return (int)(param_1 + 0x4fa);
}


// Reference entry 10320870; body size 13 bytes.
#line 1 "ENTRY_10320870"

__declspec(naked) void FUN_10320870(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm test eax, eax
  __asm jne 0x10320878
  __asm ret
  __asm mov ax, word ptr [eax + 0x74]
  __asm ret
}



// Reference entry 10320880; body size 5 bytes.
#line 1 "ENTRY_10320880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10320880(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x74));
}


// Reference entry 10320890; body size 19 bytes.
#line 1 "ENTRY_10320890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10320890(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x1c) + 0x56c));
  }
  return (undefined1 *)(&DAT_1186d2ee);
}


// Reference entry 10320a90; body size 7 bytes.
#line 1 "ENTRY_10320a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10320a90(int param_1)

{
  return (int)(param_1 + 0xf9);
}


// Reference entry 10321830; body size 19 bytes.
#line 1 "ENTRY_10321830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10321830(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x1c) + 0x5ad));
  }
  return (undefined1 *)(&DAT_1186d2ee);
}


// Reference entry 10321850; body size 58 bytes.
#line 1 "ENTRY_10321850"

__declspec(naked) void FUN_10321850(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm test eax, eax
  __asm je 0x10321874
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm test eax, eax
  __asm je 0x10321874
  __asm mov ecx, dword ptr [esp + 4]
  __asm add eax, 0x5ad
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, offset LAB_1186d2ee
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 103218a0; body size 4 bytes.
#line 1 "ENTRY_103218a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103218a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103218b0; body size 19 bytes.
#line 1 "ENTRY_103218b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103218b0(int param_1)

{
  if (*(int *)(param_1 + 0x1c) != 0) {
    return (undefined1 *)((undefined1 *)(*(int *)(param_1 + 0x1c) + 0x62f));
  }
  return (undefined1 *)(&DAT_1186d2ee);
}


// Reference entry 10321a30; body size 4 bytes.
#line 1 "ENTRY_10321a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10321a30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x50));
}


// Reference entry 10321a40; body size 42 bytes.
#line 1 "ENTRY_10321a40"

__declspec(naked) void FUN_10321a40(void)

{
  __asm mov eax, dword ptr [ecx + 0x50]
  __asm push esi
  __asm cmp eax, 3
  __asm ja LAB_10321ae4
  __asm jmp dword ptr [eax*4 + LAB_10321afc]
  __asm push offset LAB_11882ff0
  __asm push 0x2672
  __asm call LAB_10077a61
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm add esp, 8
}



// Reference entry 10322020; body size 7 bytes.
#line 1 "ENTRY_10322020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10322020(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x544));
}


// Reference entry 10322d60; body size 13 bytes.
#line 1 "ENTRY_10322d60"

__declspec(naked) void FUN_10322d60(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm test eax, eax
  __asm jne 0x10322d68
  __asm ret
  __asm mov ax, word ptr [eax + 0x70]
  __asm ret
}



// Reference entry 10322d70; body size 5 bytes.
#line 1 "ENTRY_10322d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10322d70(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x70));
}


// Reference entry 10322e50; body size 4 bytes.
#line 1 "ENTRY_10322e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10322e50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10322f00; body size 4 bytes.
#line 1 "ENTRY_10322f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10322f00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 10323ae0; body size 7 bytes.
#line 1 "ENTRY_10323ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10323ae0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x538));
}


// Reference entry 10323cc0; body size 7 bytes.
#line 1 "ENTRY_10323cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10323cc0(int param_1)

{
  return (int)(param_1 + 0xdbd0);
}


// Reference entry 10323de0; body size 7 bytes.
#line 1 "ENTRY_10323de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10323de0(int param_1)

{
  return (int)(param_1 + 0xa0);
}


// Reference entry 10323e40; body size 7 bytes.
#line 1 "ENTRY_10323e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10323e40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x534));
}


// Reference entry 10323e50; body size 7 bytes.
#line 1 "ENTRY_10323e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10323e50(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10324080; body size 4 bytes.
#line 1 "ENTRY_10324080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10324080(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 103240d0; body size 7 bytes.
#line 1 "ENTRY_103240d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103240d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x528));
}


// Reference entry 10325540; body size 4 bytes.
#line 1 "ENTRY_10325540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10325540(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x14));
}


// Reference entry 10325550; body size 18 bytes.
#line 1 "ENTRY_10325550"

__declspec(naked) void FUN_10325550(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x1032555c
  __asm mov eax, dword ptr [ecx]
  __asm jmp dword ptr [eax + 0x1c]
  __asm mov eax, offset LAB_1186d2ee
  __asm ret
}



// Reference entry 10325570; body size 14 bytes.
#line 1 "ENTRY_10325570"

__declspec(naked) void FUN_10325570(void)

{
  __asm mov ecx, dword ptr [ecx + 0x78]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}



// Reference entry 103257a0; body size 7 bytes.
#line 1 "ENTRY_103257a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103257a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x53c));
}


// Reference entry 103258c0; body size 4 bytes.
#line 1 "ENTRY_103258c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103258c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 103258d0; body size 4 bytes.
#line 1 "ENTRY_103258d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103258d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 103258e0; body size 7 bytes.
#line 1 "ENTRY_103258e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103258e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54c));
}


// Reference entry 10325910; body size 7 bytes.
#line 1 "ENTRY_10325910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10325910(int param_1)

{
  return (int)(param_1 + 0x56c);
}


// Reference entry 10325950; body size 21 bytes.
#line 1 "ENTRY_10325950"

__declspec(naked) void FUN_10325950(void)

{
  __asm push dword ptr [ecx + 0x54c]
  __asm call LAB_1008dde8
  __asm push eax
  __asm call LAB_1003d32a
  __asm add esp, 8
  __asm ret
}



// Reference entry 10325df0; body size 15 bytes.
#line 1 "ENTRY_10325df0"

__declspec(naked) void FUN_10325df0(void)

{
  __asm call LAB_1008dde8
  __asm push eax
  __asm call LAB_1003c1d7
  __asm add esp, 4
  __asm ret
}



// Reference entry 10326880; body size 6 bytes.
#line 1 "ENTRY_10326880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10326880(void)

{
  return (char *)("SCIDevice");
}


// Reference entry 10326890; body size 6 bytes.
#line 1 "ENTRY_10326890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10326890(void)

{
  return (char *)("SCIDeviceAutoplay");
}


// Reference entry 103268a0; body size 6 bytes.
#line 1 "ENTRY_103268a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103268a0(void)

{
  return (char *)("SCIDeviceLineIn");
}


// Reference entry 103268b0; body size 6 bytes.
#line 1 "ENTRY_103268b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103268b0(void)

{
  return (char *)("SCIDeviceLineOut");
}


// Reference entry 103268c0; body size 6 bytes.
#line 1 "ENTRY_103268c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103268c0(void)

{
  return (char *)("SCIDeviceMusicEqualization");
}


// Reference entry 103268d0; body size 6 bytes.
#line 1 "ENTRY_103268d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103268d0(void)

{
  return (char *)("SCIOpConnectionManagerGetProtocolInfo");
}


// Reference entry 103268e0; body size 6 bytes.
#line 1 "ENTRY_103268e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103268e0(void)

{
  return (char *)("SCIOpDevicePropertiesGetButtonLockState");
}


// Reference entry 103268f0; body size 6 bytes.
#line 1 "ENTRY_103268f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103268f0(void)

{
  return (char *)("SCIOpDevicePropertiesGetLEDState");
}


// Reference entry 10326900; body size 6 bytes.
#line 1 "ENTRY_10326900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10326900(void)

{
  return (char *)("SCIOpDevicePropertiesSetButtonLockState");
}


// Reference entry 10326910; body size 6 bytes.
#line 1 "ENTRY_10326910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10326910(void)

{
  return (char *)("SCIOpDevicePropertiesSetLEDState");
}


// Reference entry 10326920; body size 6 bytes.
#line 1 "ENTRY_10326920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10326920(void)

{
  return (char *)("SCIPortableDevice");
}


// Reference entry 10326930; body size 6 bytes.
#line 1 "ENTRY_10326930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10326930(void)

{
  return (char *)("SCIVersionRange");
}


// Reference entry 10326e20; body size 7 bytes.
#line 1 "ENTRY_10326e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10326e20(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x551));
}


// Reference entry 103272e0; body size 42 bytes.
#line 1 "ENTRY_103272e0"

__declspec(naked) void FUN_103272e0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm je 0x10327300
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm mov dword ptr [esp + 4], edx
  __asm jmp LAB_1004a089
  __asm xor al, al
  __asm ret 4
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 10327390; body size 14 bytes.
#line 1 "ENTRY_10327390"

__declspec(naked) void FUN_10327390(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne LAB_10086ed0
  __asm xor al, al
  __asm ret
}



// Reference entry 10327530; body size 7 bytes.
#line 1 "ENTRY_10327530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10327530(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x520));
}


// Reference entry 10327670; body size 65 bytes.
#line 1 "ENTRY_10327670"

__declspec(naked) void FUN_10327670(void)

{
  __asm mov ecx, dword ptr [ecx + 0x78]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm mov ecx, offset LAB_1187ead8
  __asm mov dl, byte ptr [eax]
  __asm cmp dl, byte ptr [ecx]
  __asm jne 0x103276a6
  __asm test dl, dl
  __asm je 0x1032769e
  __asm mov dl, byte ptr [eax + 1]
  __asm cmp dl, byte ptr [ecx + 1]
  __asm jne 0x103276a6
  __asm add eax, 2
  __asm add ecx, 2
  __asm test dl, dl
  __asm jne 0x10327682
  __asm xor eax, eax
  __asm test eax, eax
  __asm sete al
  __asm ret
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm sete al
  __asm ret
}



// Reference entry 10327740; body size 65 bytes.
#line 1 "ENTRY_10327740"

__declspec(naked) void FUN_10327740(void)

{
  __asm mov ecx, dword ptr [ecx + 0x78]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm mov ecx, offset LAB_1187be18
  __asm mov dl, byte ptr [eax]
  __asm cmp dl, byte ptr [ecx]
  __asm jne 0x10327776
  __asm test dl, dl
  __asm je 0x1032776e
  __asm mov dl, byte ptr [eax + 1]
  __asm cmp dl, byte ptr [ecx + 1]
  __asm jne 0x10327776
  __asm add eax, 2
  __asm add ecx, 2
  __asm test dl, dl
  __asm jne 0x10327752
  __asm xor eax, eax
  __asm test eax, eax
  __asm sete al
  __asm ret
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm sete al
  __asm ret
}



// Reference entry 103277c0; body size 7 bytes.
#line 1 "ENTRY_103277c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103277c0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x560));
}


// Reference entry 10327880; body size 7 bytes.
#line 1 "ENTRY_10327880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10327880(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10327890; body size 7 bytes.
#line 1 "ENTRY_10327890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10327890(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 103278a0; body size 7 bytes.
#line 1 "ENTRY_103278a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103278a0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 103278b0; body size 7 bytes.
#line 1 "ENTRY_103278b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103278b0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10327980; body size 7 bytes.
#line 1 "ENTRY_10327980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10327980(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xa70));
}


// Reference entry 10327a80; body size 7 bytes.
#line 1 "ENTRY_10327a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10327a80(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x51e));
}


// Reference entry 10327f60; body size 21 bytes.
#line 1 "ENTRY_10327f60"

__declspec(naked) void FUN_10327f60(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x10327f72
  __asm add ecx, 0x378
  __asm jmp LAB_10069083
  __asm xor al, al
  __asm ret
}



// Reference entry 10327f80; body size 7 bytes.
#line 1 "ENTRY_10327f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10327f80(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10327f90; body size 7 bytes.
#line 1 "ENTRY_10327f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10327f90(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10327fa0; body size 7 bytes.
#line 1 "ENTRY_10327fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10327fa0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10327fb0; body size 7 bytes.
#line 1 "ENTRY_10327fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10327fb0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10327fc0; body size 7 bytes.
#line 1 "ENTRY_10327fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10327fc0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10328620; body size 21 bytes.
#line 1 "ENTRY_10328620"

__declspec(naked) void FUN_10328620(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x10328632
  __asm add ecx, 0x378
  __asm jmp LAB_10074fa5
  __asm xor al, al
  __asm ret
}



// Reference entry 103286c0; body size 21 bytes.
#line 1 "ENTRY_103286c0"

__declspec(naked) void FUN_103286c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x1c]
  __asm test ecx, ecx
  __asm je 0x103286d2
  __asm add ecx, 0x378
  __asm jmp LAB_10091f7e
  __asm xor al, al
  __asm ret
}



// Reference entry 103287a0; body size 5 bytes.
#line 1 "ENTRY_103287a0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103287a0(undefined1 *param_1)

{ __asm jmp FUN_100310bb }


// Reference entry 10328ec0; body size 4 bytes.
#line 1 "ENTRY_10328ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10328ec0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10328ed0; body size 6 bytes.
#line 1 "ENTRY_10328ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10328ed0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10328ee0; body size 6 bytes.
#line 1 "ENTRY_10328ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10328ee0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10328ef0; body size 7 bytes.
#line 1 "ENTRY_10328ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10328ef0(int param_1)

{
  return (int)(param_1 + 0x5ad);
}


// Reference entry 10328f20; body size 3 bytes.
#line 1 "ENTRY_10328f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10328f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10328f30; body size 83 bytes.
#line 1 "ENTRY_10328f30"

__declspec(naked) void FUN_10328f30(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm push esi
  __asm test eax, eax
  __asm jne 0x10328f4e
  __asm mov ecx, dword ptr [esp + 8]
  __asm push offset LAB_1186d2ee
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [eax + 0x1c]
  __asm test eax, eax
  __asm je 0x10328f6c
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x62f
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, offset LAB_1186d2ee
  __asm push eax
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 8]
  __asm pop esi
  __asm ret 4
}



// Reference entry 10328fa0; body size 7 bytes.
#line 1 "ENTRY_10328fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10328fa0(int param_1)

{
  return (int)(param_1 + 0x62f);
}


// Reference entry 10328fb0; body size 4 bytes.
#line 1 "ENTRY_10328fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10328fb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10328fc0; body size 4 bytes.
#line 1 "ENTRY_10328fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10328fc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10328fd0; body size 14 bytes.
#line 1 "ENTRY_10328fd0"

__declspec(naked) void FUN_10328fd0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne LAB_1000357b
  __asm xor eax, eax
  __asm ret
}



// Reference entry 103295f0; body size 3 bytes.
#line 1 "ENTRY_103295f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103295f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10329600; body size 3 bytes.
#line 1 "ENTRY_10329600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10329600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10329610; body size 3 bytes.
#line 1 "ENTRY_10329610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10329610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10329620; body size 3 bytes.
#line 1 "ENTRY_10329620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10329620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10329630; body size 3 bytes.
#line 1 "ENTRY_10329630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10329630(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10329640; body size 3 bytes.
#line 1 "ENTRY_10329640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10329640(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10329650; body size 3 bytes.
#line 1 "ENTRY_10329650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10329650(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1032a550; body size 28 bytes.
#line 1 "ENTRY_1032a550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a550(undefined4 *param_1)

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


// Reference entry 1032a580; body size 28 bytes.
#line 1 "ENTRY_1032a580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a580(undefined4 *param_1)

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


// Reference entry 1032a5b0; body size 28 bytes.
#line 1 "ENTRY_1032a5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a5b0(undefined4 *param_1)

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


// Reference entry 1032a5e0; body size 28 bytes.
#line 1 "ENTRY_1032a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a5e0(undefined4 *param_1)

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


// Reference entry 1032a610; body size 28 bytes.
#line 1 "ENTRY_1032a610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a610(undefined4 *param_1)

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


// Reference entry 1032a640; body size 28 bytes.
#line 1 "ENTRY_1032a640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a640(undefined4 *param_1)

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


// Reference entry 1032a670; body size 28 bytes.
#line 1 "ENTRY_1032a670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a670(undefined4 *param_1)

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


// Reference entry 1032a6a0; body size 28 bytes.
#line 1 "ENTRY_1032a6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a6a0(undefined4 *param_1)

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


// Reference entry 1032a6d0; body size 28 bytes.
#line 1 "ENTRY_1032a6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a6d0(undefined4 *param_1)

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


// Reference entry 1032a700; body size 28 bytes.
#line 1 "ENTRY_1032a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a700(undefined4 *param_1)

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


// Reference entry 1032a730; body size 28 bytes.
#line 1 "ENTRY_1032a730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a730(undefined4 *param_1)

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


// Reference entry 1032a760; body size 28 bytes.
#line 1 "ENTRY_1032a760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1032a760(undefined4 *param_1)

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


// Reference entry 1032af10; body size 10 bytes.
#line 1 "ENTRY_1032af10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1032af10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x40) = (undefined4)(param_2);
  return;
}


// Reference entry 1032af30; body size 10 bytes.
#line 1 "ENTRY_1032af30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1032af30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x34) = (undefined4)(param_2);
  return;
}


// Reference entry 1032af50; body size 13 bytes.
#line 1 "ENTRY_1032af50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1032af50(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x80) = (undefined1)(param_2);
  return;
}


// Reference entry 1032aff0; body size 10 bytes.
#line 1 "ENTRY_1032aff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1032aff0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x58) = (undefined4)(param_2);
  return;
}


// Reference entry 1032b000; body size 10 bytes.
#line 1 "ENTRY_1032b000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1032b000(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x4c) = (undefined4)(param_2);
  return;
}


// Reference entry 1032b010; body size 10 bytes.
#line 1 "ENTRY_1032b010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1032b010(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x54) = (undefined4)(param_2);
  return;
}


// Reference entry 1032b020; body size 10 bytes.
#line 1 "ENTRY_1032b020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1032b020(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x50) = (undefined4)(param_2);
  return;
}


// Reference entry 1032b030; body size 10 bytes.
#line 1 "ENTRY_1032b030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1032b030(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x60) = (undefined4)(param_2);
  return;
}


// Reference entry 1032b270; body size 4 bytes.
#line 1 "ENTRY_1032b270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1032b270(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1032b280; body size 8 bytes.
#line 1 "ENTRY_1032b280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_1032b280(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x56a));
}


// Reference entry 1032b630; body size 18 bytes.
#line 1 "ENTRY_1032b630"

__declspec(naked) void FUN_1032b630(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xcc]
  __asm push eax
  __asm call LAB_10055a8d
  __asm add esp, 4
  __asm ret
}



// Reference entry 1032b6f0; body size 14 bytes.
#line 1 "ENTRY_1032b6f0"

__declspec(naked) void FUN_1032b6f0(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne LAB_1004dfea
  __asm xor al, al
  __asm ret
}



// Reference entry 1032b750; body size 57 bytes.
#line 1 "ENTRY_1032b750"

__declspec(naked) void FUN_1032b750(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne LAB_100418e4
  __asm xor al, al
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
  __asm _emit 0xcc __asm _emit 0xcc
  __asm mov ecx, dword ptr [ecx + 8]
  __asm test ecx, ecx
  __asm jne LAB_100487ed
  __asm xor al, al
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}



// Reference entry 1032bf60; body size 38 bytes.
#line 1 "ENTRY_1032bf60"

__declspec(naked) void FUN_1032bf60(void)

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



// Reference entry 1032bf90; body size 32 bytes.
#line 1 "ENTRY_1032bf90"

__declspec(naked) void FUN_1032bf90(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0xc
}



// Reference entry 1032bfc0; body size 18 bytes.
#line 1 "ENTRY_1032bfc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1032bfc0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032bfe0; body size 18 bytes.
#line 1 "ENTRY_1032bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1032bfe0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032c000; body size 18 bytes.
#line 1 "ENTRY_1032c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1032c000(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032c020; body size 25 bytes.
#line 1 "ENTRY_1032c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1032c020(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032c040; body size 22 bytes.
#line 1 "ENTRY_1032c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1032c040(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1032c2b0; body size 22 bytes.
#line 1 "ENTRY_1032c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1032c2b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1032c2d0; body size 22 bytes.
#line 1 "ENTRY_1032c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1032c2d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1032c2f0; body size 18 bytes.
#line 1 "ENTRY_1032c2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1032c2f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032c310; body size 18 bytes.
#line 1 "ENTRY_1032c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1032c310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032c330; body size 18 bytes.
#line 1 "ENTRY_1032c330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1032c330(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032cc50; body size 25 bytes.
#line 1 "ENTRY_1032cc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1032cc50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032cc70; body size 22 bytes.
#line 1 "ENTRY_1032cc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1032cc70(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1032cc90; body size 22 bytes.
#line 1 "ENTRY_1032cc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1032cc90(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1032ccb0; body size 106 bytes.
#line 1 "ENTRY_1032ccb0"

__declspec(naked) void FUN_1032ccb0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], LAB_11895afc
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032cd11
  __asm cmp ecx, edi
  __asm jne 0x1032cd07
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032cd11
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
  __asm mov dword ptr [ebx + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1032ce40; body size 106 bytes.
#line 1 "ENTRY_1032ce40"

__declspec(naked) void FUN_1032ce40(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], LAB_11895b20
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032cea1
  __asm cmp ecx, edi
  __asm jne 0x1032ce97
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032cea1
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
  __asm mov dword ptr [ebx + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1032cfd0; body size 106 bytes.
#line 1 "ENTRY_1032cfd0"

__declspec(naked) void FUN_1032cfd0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], LAB_11895850
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032d031
  __asm cmp ecx, edi
  __asm jne 0x1032d027
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032d031
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
  __asm mov dword ptr [ebx + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1032d160; body size 106 bytes.
#line 1 "ENTRY_1032d160"

__declspec(naked) void FUN_1032d160(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], LAB_11895874
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032d1c1
  __asm cmp ecx, edi
  __asm jne 0x1032d1b7
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032d1c1
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
  __asm mov dword ptr [ebx + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1032d2f0; body size 106 bytes.
#line 1 "ENTRY_1032d2f0"

__declspec(naked) void FUN_1032d2f0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], LAB_11895898
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032d351
  __asm cmp ecx, edi
  __asm jne 0x1032d347
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032d351
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
  __asm mov dword ptr [ebx + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
}



// Reference entry 1032d480; body size 11 bytes.
#line 1 "ENTRY_1032d480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1032d480(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1032dc60; body size 25 bytes.
#line 1 "ENTRY_1032dc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1032dc60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1032dc80; body size 40 bytes.
#line 1 "ENTRY_1032dc80"

__declspec(naked) void FUN_1032dc80(void)

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



// Reference entry 1032dcc0; body size 34 bytes.
#line 1 "ENTRY_1032dcc0"

__declspec(naked) void FUN_1032dcc0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0x10
}



// Reference entry 1032dcf0; body size 26 bytes.
#line 1 "ENTRY_1032dcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1032dcf0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1032dd10; body size 26 bytes.
#line 1 "ENTRY_1032dd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1032dd10(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1032dd30; body size 11 bytes.
#line 1 "ENTRY_1032dd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1032dd30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1032dd40; body size 11 bytes.
#line 1 "ENTRY_1032dd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1032dd40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1032dd50; body size 62 bytes.
#line 1 "ENTRY_1032dd50"

__declspec(naked) void FUN_1032dd50(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1032dd87
  __asm mov eax, dword ptr [ecx + 0x24]
  __asm add ecx, 0x24
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 1032dda0; body size 58 bytes.
#line 1 "ENTRY_1032dda0"

__declspec(naked) void FUN_1032dda0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi + 4], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x1032ddd3
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 1032ddf0; body size 125 bytes.
#line 1 "ENTRY_1032ddf0"

__declspec(naked) void FUN_1032ddf0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [edx]
  __asm push edi
  __asm lea edi, [edx + 8]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esi], eax
  __asm cmp ebx, edi
  __asm je 0x1032de65
  __asm mov ecx, dword ptr [ebx + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032de23
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, ebx
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032de65
  __asm cmp ecx, edi
  __asm jne 0x1032de5b
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032de65
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm mov dword ptr [ebx + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 1032e370; body size 3 bytes.
#line 1 "ENTRY_1032e370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e370(void)

{
  return;
}


// Reference entry 1032e380; body size 3 bytes.
#line 1 "ENTRY_1032e380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e380(void)

{
  return;
}


// Reference entry 1032e390; body size 3 bytes.
#line 1 "ENTRY_1032e390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e390(void)

{
  return;
}


// Reference entry 1032e3a0; body size 3 bytes.
#line 1 "ENTRY_1032e3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e3a0(void)

{
  return;
}


// Reference entry 1032e3b0; body size 3 bytes.
#line 1 "ENTRY_1032e3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e3b0(void)

{
  return;
}


// Reference entry 1032e3c0; body size 25 bytes.
#line 1 "ENTRY_1032e3c0"

__declspec(naked) void FUN_1032e3c0(void)

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



// Reference entry 1032e3e0; body size 25 bytes.
#line 1 "ENTRY_1032e3e0"

__declspec(naked) void FUN_1032e3e0(void)

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



// Reference entry 1032e400; body size 25 bytes.
#line 1 "ENTRY_1032e400"

__declspec(naked) void FUN_1032e400(void)

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



// Reference entry 1032e420; body size 38 bytes.
#line 1 "ENTRY_1032e420"

__declspec(naked) void FUN_1032e420(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 1032e450; body size 38 bytes.
#line 1 "ENTRY_1032e450"

__declspec(naked) void FUN_1032e450(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 1032e480; body size 38 bytes.
#line 1 "ENTRY_1032e480"

__declspec(naked) void FUN_1032e480(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 1032e4b0; body size 38 bytes.
#line 1 "ENTRY_1032e4b0"

__declspec(naked) void FUN_1032e4b0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 1032e4e0; body size 38 bytes.
#line 1 "ENTRY_1032e4e0"

__declspec(naked) void FUN_1032e4e0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 1032e800; body size 5 bytes.
#line 1 "ENTRY_1032e800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032e800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1032e810; body size 13 bytes.
#line 1 "ENTRY_1032e810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e810(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1032e820; body size 13 bytes.
#line 1 "ENTRY_1032e820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1032e830; body size 13 bytes.
#line 1 "ENTRY_1032e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1032e840; body size 13 bytes.
#line 1 "ENTRY_1032e840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1032e850; body size 13 bytes.
#line 1 "ENTRY_1032e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e850(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1032e860; body size 13 bytes.
#line 1 "ENTRY_1032e860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e860(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1032e870; body size 3 bytes.
#line 1 "ENTRY_1032e870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e870(void)

{
  return;
}


// Reference entry 1032e880; body size 3 bytes.
#line 1 "ENTRY_1032e880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e880(void)

{
  return;
}


// Reference entry 1032e890; body size 3 bytes.
#line 1 "ENTRY_1032e890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e890(void)

{
  return;
}


// Reference entry 1032e8a0; body size 3 bytes.
#line 1 "ENTRY_1032e8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032e8a0(void)

{
  return;
}


// Reference entry 1032ea00; body size 107 bytes.
#line 1 "ENTRY_1032ea00"

__declspec(naked) void FUN_1032ea00(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [edx]
  __asm lea ebx, [edx + 8]
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi + 4]
  __asm mov dword ptr [esi], eax
  __asm add esi, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebx + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032ea61
  __asm cmp ecx, ebx
  __asm jne 0x1032ea57
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [esi + 0x24], eax
  __asm mov ecx, dword ptr [ebx + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032ea61
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, ebx
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add dword ptr [edi + 4], 0x30
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm mov dword ptr [esi + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add dword ptr [edi + 4], 0x30
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 1032eb20; body size 107 bytes.
#line 1 "ENTRY_1032eb20"

__declspec(naked) void FUN_1032eb20(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov eax, dword ptr [edx]
  __asm lea ebx, [edx + 8]
  __asm mov edi, ecx
  __asm mov esi, dword ptr [edi + 4]
  __asm mov dword ptr [esi], eax
  __asm add esi, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebx + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032eb81
  __asm cmp ecx, ebx
  __asm jne 0x1032eb77
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [esi + 0x24], eax
  __asm mov ecx, dword ptr [ebx + 0x24]
  __asm test ecx, ecx
  __asm je 0x1032eb81
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, ebx
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add dword ptr [edi + 4], 0x30
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm mov dword ptr [esi + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add dword ptr [edi + 4], 0x30
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 1032f120; body size 118 bytes.
#line 1 "ENTRY_1032f120"

__declspec(naked) void FUN_1032f120(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [ecx]
  __asm mov edx, ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov ecx, eax
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x1032f163
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebp]
  __asm nop word ptr [eax + eax]
  __asm mov esi, dword ptr [ecx + 0x10]
  __asm cmp esi, edi
  __asm jge 0x1032f14c
  __asm mov ecx, dword ptr [ecx + 8]
  __asm jmp 0x1032f15b
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x1032f157
  __asm cmp edi, esi
  __asm cmovl edx, ecx
  __asm mov ebx, ecx
  __asm mov ecx, dword ptr [ecx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm je 0x1032f140
  __asm pop edi
  __asm pop esi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x1032f16b
  __asm mov eax, dword ptr [edx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x1032f188
  __asm mov ecx, dword ptr [ebp]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jge 0x1032f17f
  __asm mov edx, eax
  __asm mov eax, dword ptr [eax]
  __asm jmp 0x1032f182
  __asm mov eax, dword ptr [eax + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x1032f174
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop ebp
  __asm mov dword ptr [eax], ebx
  __asm mov dword ptr [eax + 4], edx
  __asm pop ebx
  __asm ret 8
}



// Reference entry 1032f9e0; body size 83 bytes.
#line 1 "ENTRY_1032f9e0"

__declspec(naked) void FUN_1032f9e0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, dword ptr [eax + 4]
  __asm mov dword ptr [edi], esi
  __asm cmp byte ptr [esi + 0xd], 0
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edi + 8], eax
  __asm jne 0x1032fa2c
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push ebx
  __asm lea ecx, [esi + 0x10]
  __asm mov dword ptr [edi], esi
  __asm call LAB_10070fbd
  __asm test al, al
  __asm je 0x1032fa18
  __asm mov esi, dword ptr [esi + 8]
  __asm xor eax, eax
  __asm jmp 0x1032fa22
  __asm mov dword ptr [edi + 8], esi
  __asm mov eax, 1
  __asm mov esi, dword ptr [esi]
  __asm mov dword ptr [edi + 4], eax
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x1032fa02
  __asm pop ebx
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}



// Reference entry 1032fb10; body size 15 bytes.
#line 1 "ENTRY_1032fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032fb10(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 1032fb30; body size 15 bytes.
#line 1 "ENTRY_1032fb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032fb30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 1032fb50; body size 15 bytes.
#line 1 "ENTRY_1032fb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032fb50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 1032fb70; body size 15 bytes.
#line 1 "ENTRY_1032fb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032fb70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 1032fd30; body size 15 bytes.
#line 1 "ENTRY_1032fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1032fd30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 1032fd50; body size 7 bytes.
#line 1 "ENTRY_1032fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032fd50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1032fd60; body size 7 bytes.
#line 1 "ENTRY_1032fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032fd60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1032fd70; body size 7 bytes.
#line 1 "ENTRY_1032fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032fd70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1032fd80; body size 5 bytes.
#line 1 "ENTRY_1032fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032fd80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1032fd90; body size 7 bytes.
#line 1 "ENTRY_1032fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032fd90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1032fda0; body size 7 bytes.
#line 1 "ENTRY_1032fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032fda0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1032fdb0; body size 7 bytes.
#line 1 "ENTRY_1032fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032fdb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1032fdc0; body size 7 bytes.
#line 1 "ENTRY_1032fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032fdc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1032fdd0; body size 7 bytes.
#line 1 "ENTRY_1032fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1032fdd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10330720; body size 5 bytes.
#line 1 "ENTRY_10330720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10330720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10330730; body size 5 bytes.
#line 1 "ENTRY_10330730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10330730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10330740; body size 5 bytes.
#line 1 "ENTRY_10330740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10330740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10330750; body size 5 bytes.
#line 1 "ENTRY_10330750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10330750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10330760; body size 37 bytes.
#line 1 "ENTRY_10330760"

__declspec(naked) void FUN_10330760(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10330780
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10330780
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10330790; body size 31 bytes.
#line 1 "ENTRY_10330790"

__declspec(naked) void FUN_10330790(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x103307aa
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x103307aa
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 103307c0; body size 31 bytes.
#line 1 "ENTRY_103307c0"

__declspec(naked) void FUN_103307c0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x103307da
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x103307da
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 103309c0; body size 5 bytes.
#line 1 "ENTRY_103309c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103309c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103310b0; body size 13 bytes.
#line 1 "ENTRY_103310b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103310b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103310c0; body size 13 bytes.
#line 1 "ENTRY_103310c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103310c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103310d0; body size 3 bytes.
#line 1 "ENTRY_103310d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_103310d0(void)

{
  return (undefined1)(1);
}


// Reference entry 103310e0; body size 3 bytes.
#line 1 "ENTRY_103310e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_103310e0(void)

{
  return (undefined1)(1);
}


// Reference entry 103310f0; body size 3 bytes.
#line 1 "ENTRY_103310f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_103310f0(void)

{
  return (undefined1)(1);
}


// Reference entry 10331100; body size 3 bytes.
#line 1 "ENTRY_10331100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10331100(void)

{
  return (undefined1)(1);
}


// Reference entry 10331110; body size 3 bytes.
#line 1 "ENTRY_10331110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10331110(void)

{
  return (undefined1)(1);
}


// Reference entry 103314e0; body size 7 bytes.
#line 1 "ENTRY_103314e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103314e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10331690; body size 5 bytes.
#line 1 "ENTRY_10331690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103318c0; body size 5 bytes.
#line 1 "ENTRY_103318c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103318c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103318d0; body size 5 bytes.
#line 1 "ENTRY_103318d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103318d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103318e0; body size 5 bytes.
#line 1 "ENTRY_103318e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103318e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103318f0; body size 5 bytes.
#line 1 "ENTRY_103318f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103318f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331900; body size 5 bytes.
#line 1 "ENTRY_10331900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331910; body size 5 bytes.
#line 1 "ENTRY_10331910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331920; body size 5 bytes.
#line 1 "ENTRY_10331920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331930; body size 5 bytes.
#line 1 "ENTRY_10331930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331940; body size 5 bytes.
#line 1 "ENTRY_10331940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331a60; body size 5 bytes.
#line 1 "ENTRY_10331a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331a70; body size 5 bytes.
#line 1 "ENTRY_10331a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331a80; body size 5 bytes.
#line 1 "ENTRY_10331a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331a90; body size 5 bytes.
#line 1 "ENTRY_10331a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331aa0; body size 5 bytes.
#line 1 "ENTRY_10331aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331ab0; body size 5 bytes.
#line 1 "ENTRY_10331ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331ac0; body size 5 bytes.
#line 1 "ENTRY_10331ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331ad0; body size 5 bytes.
#line 1 "ENTRY_10331ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331ae0; body size 5 bytes.
#line 1 "ENTRY_10331ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331af0; body size 5 bytes.
#line 1 "ENTRY_10331af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331b00; body size 5 bytes.
#line 1 "ENTRY_10331b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331b10; body size 5 bytes.
#line 1 "ENTRY_10331b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331b20; body size 5 bytes.
#line 1 "ENTRY_10331b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331b30; body size 5 bytes.
#line 1 "ENTRY_10331b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331b30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331b40; body size 5 bytes.
#line 1 "ENTRY_10331b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331b40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331b50; body size 5 bytes.
#line 1 "ENTRY_10331b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331b60; body size 5 bytes.
#line 1 "ENTRY_10331b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10331b60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10331b70; body size 34 bytes.
#line 1 "ENTRY_10331b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10331b70(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10331ba0; body size 34 bytes.
#line 1 "ENTRY_10331ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10331ba0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  piVar1 = (int *)((int *)param_3[2]);
  param_2[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    ((SCVtbl_1_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 10331bd0; body size 34 bytes.
#line 1 "ENTRY_10331bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10331bd0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int *piVar1;
  
  *param_2 = (undefined4)(*param_3);
  param_2[1] = (undefined4)(param_3[1]);
  piVar1 = (int *)((int *)param_3[2]);
  param_2[2] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
    ((SCVtbl_1_0*)(piVar1))->v();
    return;
  }
  return;
}


// Reference entry 10331c00; body size 29 bytes.
#line 1 "ENTRY_10331c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10331c00(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10331f80; body size 3 bytes.
#line 1 "ENTRY_10331f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10331f80(void)

{
  return;
}


// Reference entry 10331f90; body size 38 bytes.
#line 1 "ENTRY_10331f90"

__declspec(naked) void FUN_10331f90(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm add esi, 8
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10331fb4
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10331fc0; body size 12 bytes.
#line 1 "ENTRY_10331fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10331fc0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 10331fd0; body size 86 bytes.
#line 1 "ENTRY_10331fd0"

__declspec(naked) void FUN_10331fd0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm xor edi, edi
  __asm cmp eax, ecx
  __asm je 0x10332022
  __asm push esi
  __asm mov edx, dword ptr [eax + 8]
  __asm inc edi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10332007
  __asm mov edx, dword ptr [eax + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10332003
  __asm cmp eax, dword ptr [edx + 8]
  __asm jne 0x10332003
  __asm mov eax, edx
  __asm mov edx, dword ptr [edx + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10331ff3
  __asm mov eax, edx
  __asm jmp 0x1033201d
  __asm mov eax, edx
  __asm mov esi, dword ptr [eax]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x1033201d
  __asm mov edx, dword ptr [esi]
  __asm mov eax, esi
  __asm mov esi, edx
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10332011
  __asm cmp eax, ecx
  __asm jne 0x10331fe0
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret
}



// Reference entry 10332190; body size 15 bytes.
#line 1 "ENTRY_10332190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332190(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103321b0; body size 15 bytes.
#line 1 "ENTRY_103321b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103321b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103321d0; body size 15 bytes.
#line 1 "ENTRY_103321d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103321d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103321f0; body size 15 bytes.
#line 1 "ENTRY_103321f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103321f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10332210; body size 15 bytes.
#line 1 "ENTRY_10332210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332210(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10332230; body size 15 bytes.
#line 1 "ENTRY_10332230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332230(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10332250; body size 15 bytes.
#line 1 "ENTRY_10332250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332250(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10332340; body size 5 bytes.
#line 1 "ENTRY_10332340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332350; body size 5 bytes.
#line 1 "ENTRY_10332350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332360; body size 5 bytes.
#line 1 "ENTRY_10332360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332370; body size 5 bytes.
#line 1 "ENTRY_10332370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332380; body size 5 bytes.
#line 1 "ENTRY_10332380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332390; body size 5 bytes.
#line 1 "ENTRY_10332390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103323a0; body size 5 bytes.
#line 1 "ENTRY_103323a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103323a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103323b0; body size 5 bytes.
#line 1 "ENTRY_103323b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103323b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103323c0; body size 5 bytes.
#line 1 "ENTRY_103323c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103323c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103323d0; body size 5 bytes.
#line 1 "ENTRY_103323d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103323d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103323e0; body size 5 bytes.
#line 1 "ENTRY_103323e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103323e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103323f0; body size 5 bytes.
#line 1 "ENTRY_103323f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103323f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332400; body size 5 bytes.
#line 1 "ENTRY_10332400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332410; body size 5 bytes.
#line 1 "ENTRY_10332410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332420; body size 5 bytes.
#line 1 "ENTRY_10332420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332430; body size 5 bytes.
#line 1 "ENTRY_10332430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332440; body size 5 bytes.
#line 1 "ENTRY_10332440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332450; body size 5 bytes.
#line 1 "ENTRY_10332450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332460; body size 5 bytes.
#line 1 "ENTRY_10332460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332470; body size 5 bytes.
#line 1 "ENTRY_10332470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332480; body size 5 bytes.
#line 1 "ENTRY_10332480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332490; body size 5 bytes.
#line 1 "ENTRY_10332490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103324a0; body size 5 bytes.
#line 1 "ENTRY_103324a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103324a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103324b0; body size 5 bytes.
#line 1 "ENTRY_103324b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103324b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103324c0; body size 5 bytes.
#line 1 "ENTRY_103324c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103324c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103325e0; body size 5 bytes.
#line 1 "ENTRY_103325e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103325e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103325f0; body size 5 bytes.
#line 1 "ENTRY_103325f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103325f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332600; body size 5 bytes.
#line 1 "ENTRY_10332600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332610; body size 5 bytes.
#line 1 "ENTRY_10332610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332620; body size 5 bytes.
#line 1 "ENTRY_10332620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332620(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332630; body size 5 bytes.
#line 1 "ENTRY_10332630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332640; body size 5 bytes.
#line 1 "ENTRY_10332640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332650; body size 5 bytes.
#line 1 "ENTRY_10332650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332660; body size 5 bytes.
#line 1 "ENTRY_10332660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332670; body size 5 bytes.
#line 1 "ENTRY_10332670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332680; body size 5 bytes.
#line 1 "ENTRY_10332680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332690; body size 5 bytes.
#line 1 "ENTRY_10332690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103327b0; body size 5 bytes.
#line 1 "ENTRY_103327b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103327b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103327c0; body size 5 bytes.
#line 1 "ENTRY_103327c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103327c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103327d0; body size 5 bytes.
#line 1 "ENTRY_103327d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103327d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103327e0; body size 5 bytes.
#line 1 "ENTRY_103327e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103327e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103327f0; body size 11 bytes.
#line 1 "ENTRY_103327f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103327f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10332ac0; body size 38 bytes.
#line 1 "ENTRY_10332ac0"

__declspec(naked) void FUN_10332ac0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 10332af0; body size 38 bytes.
#line 1 "ENTRY_10332af0"

__declspec(naked) void FUN_10332af0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 10332b20; body size 38 bytes.
#line 1 "ENTRY_10332b20"

__declspec(naked) void FUN_10332b20(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 10332b50; body size 38 bytes.
#line 1 "ENTRY_10332b50"

__declspec(naked) void FUN_10332b50(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 10332b80; body size 38 bytes.
#line 1 "ENTRY_10332b80"

__declspec(naked) void FUN_10332b80(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret
}



// Reference entry 10332ea0; body size 5 bytes.
#line 1 "ENTRY_10332ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332eb0; body size 5 bytes.
#line 1 "ENTRY_10332eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332ec0; body size 5 bytes.
#line 1 "ENTRY_10332ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332ed0; body size 5 bytes.
#line 1 "ENTRY_10332ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332ee0; body size 5 bytes.
#line 1 "ENTRY_10332ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10332ef0; body size 5 bytes.
#line 1 "ENTRY_10332ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10332ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333010; body size 5 bytes.
#line 1 "ENTRY_10333010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10333010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333020; body size 5 bytes.
#line 1 "ENTRY_10333020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10333020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333030; body size 5 bytes.
#line 1 "ENTRY_10333030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10333030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333040; body size 5 bytes.
#line 1 "ENTRY_10333040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10333040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333760; body size 32 bytes.
#line 1 "ENTRY_10333760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333760(undefined4 *param_2)
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


// Reference entry 103337d0; body size 32 bytes.
#line 1 "ENTRY_103337d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103337d0(undefined4 *param_2)
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


// Reference entry 10333840; body size 16 bytes.
#line 1 "ENTRY_10333840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10333840(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103338a0; body size 16 bytes.
#line 1 "ENTRY_103338a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103338a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10333920; body size 25 bytes.
#line 1 "ENTRY_10333920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333920(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10333960; body size 18 bytes.
#line 1 "ENTRY_10333960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10333980; body size 18 bytes.
#line 1 "ENTRY_10333980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333980(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103339a0; body size 18 bytes.
#line 1 "ENTRY_103339a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103339a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103339c0; body size 3 bytes.
#line 1 "ENTRY_103339c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103339c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103339d0; body size 3 bytes.
#line 1 "ENTRY_103339d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103339d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103339e0; body size 10 bytes.
#line 1 "ENTRY_103339e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103339e0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103339f0; body size 10 bytes.
#line 1 "ENTRY_103339f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103339f0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10333ac0; body size 11 bytes.
#line 1 "ENTRY_10333ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333ac0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333ad0; body size 11 bytes.
#line 1 "ENTRY_10333ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333ad0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333ae0; body size 11 bytes.
#line 1 "ENTRY_10333ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333ae0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333af0; body size 11 bytes.
#line 1 "ENTRY_10333af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333af0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333b00; body size 11 bytes.
#line 1 "ENTRY_10333b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333b00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333b10; body size 11 bytes.
#line 1 "ENTRY_10333b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333b10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333ca0; body size 11 bytes.
#line 1 "ENTRY_10333ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333ca0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333cb0; body size 11 bytes.
#line 1 "ENTRY_10333cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333cb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333cc0; body size 11 bytes.
#line 1 "ENTRY_10333cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333cc0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333cd0; body size 11 bytes.
#line 1 "ENTRY_10333cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333cd0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333ce0; body size 16 bytes.
#line 1 "ENTRY_10333ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10333ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10333d00; body size 16 bytes.
#line 1 "ENTRY_10333d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10333d00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10333d20; body size 16 bytes.
#line 1 "ENTRY_10333d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10333d20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10333d40; body size 21 bytes.
#line 1 "ENTRY_10333d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333d40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10333d60; body size 21 bytes.
#line 1 "ENTRY_10333d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333d60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10333d80; body size 11 bytes.
#line 1 "ENTRY_10333d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333d80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333d90; body size 11 bytes.
#line 1 "ENTRY_10333d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333d90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10333da0; body size 23 bytes.
#line 1 "ENTRY_10333da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10333da0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10333dc0; body size 23 bytes.
#line 1 "ENTRY_10333dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10333dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10333de0; body size 3 bytes.
#line 1 "ENTRY_10333de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10333de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333df0; body size 3 bytes.
#line 1 "ENTRY_10333df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10333df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333e00; body size 3 bytes.
#line 1 "ENTRY_10333e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10333e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333e10; body size 3 bytes.
#line 1 "ENTRY_10333e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10333e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333e20; body size 3 bytes.
#line 1 "ENTRY_10333e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10333e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10333f20; body size 18 bytes.
#line 1 "ENTRY_10333f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333f20(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10333f40; body size 18 bytes.
#line 1 "ENTRY_10333f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333f40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10333f60; body size 18 bytes.
#line 1 "ENTRY_10333f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10333f60(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10333f80; body size 52 bytes.
#line 1 "ENTRY_10333f80"

__declspec(naked) void FUN_10333f80(void)

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



// Reference entry 10333fd0; body size 52 bytes.
#line 1 "ENTRY_10333fd0"

__declspec(naked) void FUN_10333fd0(void)

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



// Reference entry 10334020; body size 52 bytes.
#line 1 "ENTRY_10334020"

__declspec(naked) void FUN_10334020(void)

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



// Reference entry 10334070; body size 44 bytes.
#line 1 "ENTRY_10334070"

__declspec(naked) void FUN_10334070(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 8], ecx
  __asm test ecx, ecx
  __asm je 0x10334095
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 103340b0; body size 44 bytes.
#line 1 "ENTRY_103340b0"

__declspec(naked) void FUN_103340b0(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, dword ptr [edx + 8]
  __asm mov dword ptr [esi + 8], ecx
  __asm test ecx, ecx
  __asm je 0x103340d5
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 103340f0; body size 100 bytes.
#line 1 "ENTRY_103340f0"

__declspec(naked) void FUN_103340f0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm mov eax, dword ptr [edx]
  __asm lea ebx, [esi + 8]
  __asm push edi
  __asm lea edi, [edx + 8]
  __asm mov dword ptr [esi], eax
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1033414c
  __asm cmp ecx, edi
  __asm jne 0x10334142
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1033414c
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm mov dword ptr [ebx + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 10334280; body size 13 bytes.
#line 1 "ENTRY_10334280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10334280(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10334290; body size 23 bytes.
#line 1 "ENTRY_10334290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10334290(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10335fb0; body size 34 bytes.
#line 1 "ENTRY_10335fb0"

__declspec(naked) void FUN_10335fb0(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10335fd0
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10335fe0; body size 34 bytes.
#line 1 "ENTRY_10335fe0"

__declspec(naked) void FUN_10335fe0(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10336000
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10336010; body size 34 bytes.
#line 1 "ENTRY_10336010"

__declspec(naked) void FUN_10336010(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10336030
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10336040; body size 34 bytes.
#line 1 "ENTRY_10336040"

__declspec(naked) void FUN_10336040(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10336060
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10336070; body size 34 bytes.
#line 1 "ENTRY_10336070"

__declspec(naked) void FUN_10336070(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10336090
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}



// Reference entry 10336500; body size 17 bytes.
#line 1 "ENTRY_10336500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336500(undefined4 *param_1)

{
  thunk_FUN_1032e8b0(*param_1,param_1[1],param_1[2]);
  return;
}


// Reference entry 10336870; body size 5 bytes.
#line 1 "ENTRY_10336870"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336870(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10336880; body size 5 bytes.
#line 1 "ENTRY_10336880"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336880(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 103368c0; body size 5 bytes.
#line 1 "ENTRY_103368c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103368c0(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 103368d0; body size 5 bytes.
#line 1 "ENTRY_103368d0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103368d0(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 103368e0; body size 5 bytes.
#line 1 "ENTRY_103368e0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103368e0(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10336920; body size 5 bytes.
#line 1 "ENTRY_10336920"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336920(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10336ae0; body size 5 bytes.
#line 1 "ENTRY_10336ae0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336ae0(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10336af0; body size 5 bytes.
#line 1 "ENTRY_10336af0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336af0(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10336b00; body size 5 bytes.
#line 1 "ENTRY_10336b00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336b00(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10336b60; body size 18 bytes.
#line 1 "ENTRY_10336b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336b60(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10336ba0; body size 18 bytes.
#line 1 "ENTRY_10336ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336ba0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10336be0; body size 18 bytes.
#line 1 "ENTRY_10336be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336be0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10336c20; body size 18 bytes.
#line 1 "ENTRY_10336c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336c20(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10336c60; body size 18 bytes.
#line 1 "ENTRY_10336c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10336c60(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10336e20; body size 112 bytes.
#line 1 "ENTRY_10336e20"

__declspec(naked) void FUN_10336e20(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm cmp esi, edi
  __asm je 0x10336e89
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10336e48
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10336e89
  __asm cmp ecx, edi
  __asm jne 0x10336e7f
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [esi + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10336e89
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm ret 4
  __asm mov dword ptr [esi + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 103371b0; body size 28 bytes.
#line 1 "ENTRY_103371b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103371b0(char *param_2)
{
  char *param_1 = (char *)this;
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(*param_1)));
  if ((*param_1 == (char)(*(param_2))) && (uVar1 = (uint)(*(uint *)(param_1 + 4)),(uint)( uVar1) == *(uint *)(param_2 + 4))) {
    return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 103371e0; body size 28 bytes.
#line 1 "ENTRY_103371e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::m_FUN_103371e0(char *param_2)
{
  char *param_1 = (char *)this;
  if ((*param_1 == (char)(*(param_2))) && (param_1[1] == param_2[1])) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 10337210; body size 14 bytes.
#line 1 "ENTRY_10337210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10337210(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10337230; body size 14 bytes.
#line 1 "ENTRY_10337230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10337230(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10337250; body size 14 bytes.
#line 1 "ENTRY_10337250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10337250(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10337270; body size 14 bytes.
#line 1 "ENTRY_10337270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10337270(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10337290; body size 28 bytes.
#line 1 "ENTRY_10337290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10337290(char *param_2)
{
  char *param_1 = (char *)this;
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(*param_1)));
  if ((*param_1 == (char)(*(param_2))) && (uVar1 = (uint)(*(uint *)(param_1 + 4)),(uint)( uVar1) == *(uint *)(param_2 + 4))) {
    return (bool)0;
  }
  return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 103372c0; body size 28 bytes.
#line 1 "ENTRY_103372c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::m_FUN_103372c0(char *param_2)
{
  char *param_1 = (char *)this;
  if ((*param_1 == (char)(*(param_2))) && (param_1[1] == param_2[1])) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 103372f0; body size 14 bytes.
#line 1 "ENTRY_103372f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103372f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10337310; body size 14 bytes.
#line 1 "ENTRY_10337310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10337310(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10337330; body size 14 bytes.
#line 1 "ENTRY_10337330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10337330(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10337350; body size 14 bytes.
#line 1 "ENTRY_10337350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10337350(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103375c0; body size 3 bytes.
#line 1 "ENTRY_103375c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103375c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103375d0; body size 3 bytes.
#line 1 "ENTRY_103375d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103375d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103375e0; body size 7 bytes.
#line 1 "ENTRY_103375e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103375e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103375f0; body size 4 bytes.
#line 1 "ENTRY_103375f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103375f0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 1));
}


// Reference entry 10337600; body size 3 bytes.
#line 1 "ENTRY_10337600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10337600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10337610; body size 3 bytes.
#line 1 "ENTRY_10337610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10337610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10337620; body size 3 bytes.
#line 1 "ENTRY_10337620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10337620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10337630; body size 3 bytes.
#line 1 "ENTRY_10337630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10337630(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10337640; body size 6 bytes.
#line 1 "ENTRY_10337640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10337640(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10337650; body size 6 bytes.
#line 1 "ENTRY_10337650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10337650(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10337660; body size 6 bytes.
#line 1 "ENTRY_10337660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10337660(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10337670; body size 6 bytes.
#line 1 "ENTRY_10337670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10337670(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10337680; body size 3 bytes.
#line 1 "ENTRY_10337680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10337680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10337690; body size 3 bytes.
#line 1 "ENTRY_10337690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10337690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103376a0; body size 28 bytes.
#line 1 "ENTRY_103376a0"

__declspec(naked) void FUN_103376a0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 0x14]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x103376b6
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 103376d0; body size 6 bytes.
#line 1 "ENTRY_103376d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103376d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103376e0; body size 6 bytes.
#line 1 "ENTRY_103376e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103376e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103376f0; body size 6 bytes.
#line 1 "ENTRY_103376f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103376f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10337700; body size 6 bytes.
#line 1 "ENTRY_10337700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10337700(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10337710; body size 6 bytes.
#line 1 "ENTRY_10337710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10337710(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10337720; body size 6 bytes.
#line 1 "ENTRY_10337720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10337720(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10337730; body size 6 bytes.
#line 1 "ENTRY_10337730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10337730(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10337740; body size 28 bytes.
#line 1 "ENTRY_10337740"

__declspec(naked) void FUN_10337740(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, dword ptr [eax + 0x14]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10337756
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10337890; body size 20 bytes.
#line 1 "ENTRY_10337890"

__declspec(naked) void FUN_10337890(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_1007ea73
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10337920; body size 6 bytes.
#line 1 "ENTRY_10337920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10337920(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x30);
  return (int *)(param_1);
}


// Reference entry 10337930; body size 16 bytes.
#line 1 "ENTRY_10337930"

__declspec(naked) void FUN_10337930(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 0x30
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}



// Reference entry 10337d30; body size 25 bytes.
#line 1 "ENTRY_10337d30"

__declspec(naked) void FUN_10337d30(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10337d44
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 4
  __asm call LAB_1148a05a
}



// Reference entry 10337d50; body size 37 bytes.
#line 1 "ENTRY_10337d50"

__declspec(naked) void FUN_10337d50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10337d70
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 0xc]
  __asm push edx
  __asm lea edx, [esp + 0xc]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm lea edx, [esp + 0xc]
  __asm push edx
  __asm call eax
  __asm ret 0xc
  __asm call LAB_1148a05a
}



// Reference entry 10337d80; body size 18 bytes.
#line 1 "ENTRY_10337d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10337d80(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 10338680; body size 31 bytes.
#line 1 "ENTRY_10338680"

__declspec(naked) void FUN_10338680(void)

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



// Reference entry 103386b0; body size 31 bytes.
#line 1 "ENTRY_103386b0"

__declspec(naked) void FUN_103386b0(void)

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



// Reference entry 103386e0; body size 31 bytes.
#line 1 "ENTRY_103386e0"

__declspec(naked) void FUN_103386e0(void)

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



// Reference entry 10338770; body size 25 bytes.
#line 1 "ENTRY_10338770"

__declspec(naked) void FUN_10338770(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x1fffffff
  __asm ja 0x10338784
  __asm mov dword ptr [esp + 4], eax
  __asm jmp LAB_10084cb6
  __asm call LAB_100316f1
}



// Reference entry 10338840; body size 63 bytes.
#line 1 "ENTRY_10338840"

__declspec(naked) void FUN_10338840(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov eax, 0x2aaaaaab
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x5555555
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
  __asm jbe 0x1033886f
  __asm mov eax, 0x5555555
  __asm pop esi
  __asm ret 4
  __asm lea eax, [edx + esi]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10338940; body size 14 bytes.
#line 1 "ENTRY_10338940"

__declspec(naked) void FUN_10338940(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10338960; body size 14 bytes.
#line 1 "ENTRY_10338960"

__declspec(naked) void FUN_10338960(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10338980; body size 14 bytes.
#line 1 "ENTRY_10338980"

__declspec(naked) void FUN_10338980(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 103389a0; body size 3 bytes.
#line 1 "ENTRY_103389a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103389a0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10339980; body size 8 bytes.
#line 1 "ENTRY_10339980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10339980(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10339990; body size 8 bytes.
#line 1 "ENTRY_10339990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10339990(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103399a0; body size 142 bytes.
#line 1 "ENTRY_103399a0"

__declspec(naked) void FUN_103399a0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [edi]
  __asm cmp esi, dword ptr [ebx]
  __asm jne 0x103399fb
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x103399fb
  __asm mov esi, dword ptr [ebx + 4]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x103399e2
  __asm push dword ptr [esi + 8]
  __asm mov ecx, edi
  __asm push edi
  __asm call LAB_10073a83
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x20
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x103399c2
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
  __asm je 0x10339a28
  __asm nop
  __asm lea ecx, [esp + 0x10]
  __asm call LAB_1007ea73
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_10073394
  __asm push 0x20
  __asm push eax
  __asm call LAB_100131d8
  __asm mov esi, dword ptr [esp + 0x18]
  __asm add esp, 8
  __asm mov eax, dword ptr [esp + 0x14]
  __asm cmp esi, eax
  __asm jne 0x10339a00
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}



// Reference entry 10339a60; body size 51 bytes.
#line 1 "ENTRY_10339a60"

__declspec(naked) void FUN_10339a60(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esp + 8]
  __asm call LAB_1007ea73
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_10073394
  __asm push 0x20
  __asm push eax
  __asm call LAB_100131d8
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10339aa0; body size 5 bytes.
#line 1 "ENTRY_10339aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10339aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10339ab0; body size 5 bytes.
#line 1 "ENTRY_10339ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10339ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10339f80; body size 3 bytes.
#line 1 "ENTRY_10339f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10339f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10339f90; body size 3 bytes.
#line 1 "ENTRY_10339f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10339f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10339fa0; body size 3 bytes.
#line 1 "ENTRY_10339fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10339fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10339fb0; body size 3 bytes.
#line 1 "ENTRY_10339fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10339fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10339fc0; body size 3 bytes.
#line 1 "ENTRY_10339fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10339fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10339fd0; body size 3 bytes.
#line 1 "ENTRY_10339fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10339fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10339fe0; body size 3 bytes.
#line 1 "ENTRY_10339fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10339fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10339ff0; body size 3 bytes.
#line 1 "ENTRY_10339ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10339ff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a000; body size 3 bytes.
#line 1 "ENTRY_1033a000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a010; body size 3 bytes.
#line 1 "ENTRY_1033a010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a020; body size 3 bytes.
#line 1 "ENTRY_1033a020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a030; body size 3 bytes.
#line 1 "ENTRY_1033a030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a040; body size 3 bytes.
#line 1 "ENTRY_1033a040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a050; body size 3 bytes.
#line 1 "ENTRY_1033a050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a060; body size 3 bytes.
#line 1 "ENTRY_1033a060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a070; body size 3 bytes.
#line 1 "ENTRY_1033a070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a080; body size 3 bytes.
#line 1 "ENTRY_1033a080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a090; body size 3 bytes.
#line 1 "ENTRY_1033a090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a0a0; body size 3 bytes.
#line 1 "ENTRY_1033a0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a0b0; body size 3 bytes.
#line 1 "ENTRY_1033a0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a0b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a0c0; body size 3 bytes.
#line 1 "ENTRY_1033a0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a0c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a0d0; body size 3 bytes.
#line 1 "ENTRY_1033a0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a0e0; body size 3 bytes.
#line 1 "ENTRY_1033a0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a0f0; body size 3 bytes.
#line 1 "ENTRY_1033a0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a100; body size 3 bytes.
#line 1 "ENTRY_1033a100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a110; body size 3 bytes.
#line 1 "ENTRY_1033a110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a120; body size 3 bytes.
#line 1 "ENTRY_1033a120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a130; body size 3 bytes.
#line 1 "ENTRY_1033a130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a150; body size 3 bytes.
#line 1 "ENTRY_1033a150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a160; body size 3 bytes.
#line 1 "ENTRY_1033a160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a170; body size 3 bytes.
#line 1 "ENTRY_1033a170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a180; body size 3 bytes.
#line 1 "ENTRY_1033a180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a190; body size 3 bytes.
#line 1 "ENTRY_1033a190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a1a0; body size 3 bytes.
#line 1 "ENTRY_1033a1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a1a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a1b0; body size 3 bytes.
#line 1 "ENTRY_1033a1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a1b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1033a1c0; body size 4 bytes.
#line 1 "ENTRY_1033a1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a1c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1033a1d0; body size 4 bytes.
#line 1 "ENTRY_1033a1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033a1d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1033a990; body size 7 bytes.
#line 1 "ENTRY_1033a990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1033a990(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1033a9a0; body size 7 bytes.
#line 1 "ENTRY_1033a9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1033a9a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1033a9b0; body size 79 bytes.
#line 1 "ENTRY_1033a9b0"

__declspec(naked) void FUN_1033a9b0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x1033a9c8
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x1033a9e1
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x1033a9f3
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



// Reference entry 1033aa20; body size 79 bytes.
#line 1 "ENTRY_1033aa20"

__declspec(naked) void FUN_1033aa20(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x1033aa38
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x1033aa51
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x1033aa63
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



// Reference entry 1033aa90; body size 79 bytes.
#line 1 "ENTRY_1033aa90"

__declspec(naked) void FUN_1033aa90(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x1033aaa8
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x1033aac1
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x1033aad3
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



// Reference entry 1033ab70; body size 30 bytes.
#line 1 "ENTRY_1033ab70"

__declspec(naked) void FUN_1033ab70(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x1033ab8b
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x1033ab80
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 1033aba0; body size 30 bytes.
#line 1 "ENTRY_1033aba0"

__declspec(naked) void FUN_1033aba0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x1033abbb
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x1033abb0
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 1033abd0; body size 30 bytes.
#line 1 "ENTRY_1033abd0"

__declspec(naked) void FUN_1033abd0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x1033abeb
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x1033abe0
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 1033ac00; body size 31 bytes.
#line 1 "ENTRY_1033ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1033ac00(int *param_1)

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


// Reference entry 1033ac30; body size 31 bytes.
#line 1 "ENTRY_1033ac30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_1033ac30(int *param_1)

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


// Reference entry 1033aeb0; body size 3 bytes.
#line 1 "ENTRY_1033aeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1033aeb0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1033aec0; body size 3 bytes.
#line 1 "ENTRY_1033aec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1033aec0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1033aed0; body size 3 bytes.
#line 1 "ENTRY_1033aed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1033aed0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1033aee0; body size 3 bytes.
#line 1 "ENTRY_1033aee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1033aee0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1033aef0; body size 3 bytes.
#line 1 "ENTRY_1033aef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1033aef0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1033af00; body size 11 bytes.
#line 1 "ENTRY_1033af00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033af00(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1033af10; body size 11 bytes.
#line 1 "ENTRY_1033af10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033af10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1033af20; body size 11 bytes.
#line 1 "ENTRY_1033af20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033af20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1033af30; body size 6 bytes.
#line 1 "ENTRY_1033af30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1033af30(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1033af40; body size 6 bytes.
#line 1 "ENTRY_1033af40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1033af40(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1033af50; body size 26 bytes.
#line 1 "ENTRY_1033af50"

__declspec(naked) void FUN_1033af50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x1033af66
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 1033af70; body size 76 bytes.
#line 1 "ENTRY_1033af70"

__declspec(naked) void FUN_1033af70(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1033afb7
  __asm cmp ecx, esi
  __asm jne 0x1033afad
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [edi + 0x24], eax
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x1033afb7
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, esi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 4
  __asm mov dword ptr [edi + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1033afd0; body size 83 bytes.
#line 1 "ENTRY_1033afd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033afd0(int *param_2)
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


// Reference entry 1033b040; body size 83 bytes.
#line 1 "ENTRY_1033b040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033b040(int *param_2)
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


// Reference entry 1033b0b0; body size 83 bytes.
#line 1 "ENTRY_1033b0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033b0b0(int *param_2)
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


// Reference entry 1033b190; body size 9 bytes.
#line 1 "ENTRY_1033b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033b190(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1033b1a0; body size 10 bytes.
#line 1 "ENTRY_1033b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033b1a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1033b1b0; body size 10 bytes.
#line 1 "ENTRY_1033b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033b1b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1033b590; body size 24 bytes.
#line 1 "ENTRY_1033b590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033b590(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10331820(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1033b5b0; body size 24 bytes.
#line 1 "ENTRY_1033b5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033b5b0(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10331820(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1033b5d0; body size 24 bytes.
#line 1 "ENTRY_1033b5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033b5d0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10331820(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1033b5f0; body size 13 bytes.
#line 1 "ENTRY_1033b5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033b5f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1033b600; body size 3 bytes.
#line 1 "ENTRY_1033b600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033b600(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1033b610; body size 4 bytes.
#line 1 "ENTRY_1033b610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033b610(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1033b620; body size 3 bytes.
#line 1 "ENTRY_1033b620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033b620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1033bd70; body size 97 bytes.
#line 1 "ENTRY_1033bd70"

__declspec(naked) void FUN_1033bd70(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 0x9249249
  __asm ja 0x1033bdcc
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub eax, ecx
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x1033bdb7
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x1033bdcc
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x1033bdb1
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x1033bdc7
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 1033bdf0; body size 97 bytes.
#line 1 "ENTRY_1033bdf0"

__declspec(naked) void FUN_1033bdf0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 0x9249249
  __asm ja 0x1033be4c
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub eax, ecx
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x1033be37
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x1033be4c
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x1033be31
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x1033be47
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 1033be70; body size 97 bytes.
#line 1 "ENTRY_1033be70"

__declspec(naked) void FUN_1033be70(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 0x9249249
  __asm ja 0x1033becc
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub eax, ecx
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x1033beb7
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x1033becc
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x1033beb1
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x1033bec7
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 1033bfe0; body size 13 bytes.
#line 1 "ENTRY_1033bfe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033bfe0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1033bff0; body size 13 bytes.
#line 1 "ENTRY_1033bff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033bff0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1033c000; body size 13 bytes.
#line 1 "ENTRY_1033c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033c000(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1033c010; body size 3 bytes.
#line 1 "ENTRY_1033c010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033c010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1033c020; body size 3 bytes.
#line 1 "ENTRY_1033c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033c020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1033c030; body size 3 bytes.
#line 1 "ENTRY_1033c030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033c030(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1033c040; body size 11 bytes.
#line 1 "ENTRY_1033c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033c040(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1033c050; body size 23 bytes.
#line 1 "ENTRY_1033c050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1033c050(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x30);
}


// Reference entry 1033c1f0; body size 43 bytes.
#line 1 "ENTRY_1033c1f0"

__declspec(naked) void FUN_1033c1f0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 0xa4]
  __asm push edi
  __asm lea edi, [ecx + 0xa4]
  __asm mov ecx, edi
  __asm push dword ptr [esi + 4]
  __asm push edi
  __asm call LAB_10044b20
  __asm mov dword ptr [esi + 4], esi
  __asm mov dword ptr [esi], esi
  __asm mov dword ptr [esi + 8], esi
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 1033c470; body size 63 bytes.
#line 1 "ENTRY_1033c470"

__declspec(naked) void FUN_1033c470(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x1033c49e
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1033c4a9
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 1033c4c0; body size 63 bytes.
#line 1 "ENTRY_1033c4c0"

__declspec(naked) void FUN_1033c4c0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x1033c4ee
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1033c4f9
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 1033c510; body size 63 bytes.
#line 1 "ENTRY_1033c510"

__declspec(naked) void FUN_1033c510(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x1033c53e
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1033c549
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 1033c560; body size 54 bytes.
#line 1 "ENTRY_1033c560"

__declspec(naked) void FUN_1033c560(void)

{
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 5
  __asm cmp ecx, 0x1000
  __asm jb 0x1033c585
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1033c590
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 1033c5b0; body size 66 bytes.
#line 1 "ENTRY_1033c5b0"

__declspec(naked) void FUN_1033c5b0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x1033c5de
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1033c5eb
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 1033c610; body size 66 bytes.
#line 1 "ENTRY_1033c610"

__declspec(naked) void FUN_1033c610(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x1033c63e
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1033c64b
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 1033c670; body size 66 bytes.
#line 1 "ENTRY_1033c670"

__declspec(naked) void FUN_1033c670(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x1033c69e
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1033c6ab
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 1033c800; body size 9 bytes.
#line 1 "ENTRY_1033c800"

__declspec(naked) void FUN_1033c800(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm cmp eax, dword ptr [ecx + 4]
  __asm sete al
  __asm ret
}



// Reference entry 1033c810; body size 11 bytes.
#line 1 "ENTRY_1033c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033c810(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1033c820; body size 11 bytes.
#line 1 "ENTRY_1033c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033c820(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1033c830; body size 4 bytes.
#line 1 "ENTRY_1033c830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033c830(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1033c840; body size 4 bytes.
#line 1 "ENTRY_1033c840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033c840(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1033c850; body size 4 bytes.
#line 1 "ENTRY_1033c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1033c850(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1033c860; body size 12 bytes.
#line 1 "ENTRY_1033c860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1033c860(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1033ca30; body size 57 bytes.
#line 1 "ENTRY_1033ca30"

__declspec(naked) void FUN_1033ca30(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push ebx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm cmp edi, eax
  __asm je 0x1033ca5e
  __asm push esi
  __asm push edi
  __asm push dword ptr [ebx + 4]
  __asm push eax
  __asm call LAB_10019d35
  __asm push ebx
  __asm push dword ptr [ebx + 4]
  __asm mov esi, eax
  __asm push esi
  __asm call LAB_10030c56
  __asm add esp, 0x18
  __asm mov dword ptr [ebx + 4], esi
  __asm pop esi
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [eax], edi
  __asm pop edi
  __asm pop ebx
  __asm ret 0xc
}



// Reference entry 1033cce0; body size 25 bytes.
#line 1 "ENTRY_1033cce0"

__declspec(naked) void FUN_1033cce0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x34]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x1033ccf3
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 1033f670; body size 33 bytes.
#line 1 "ENTRY_1033f670"

__declspec(naked) void FUN_1033f670(void)

{
  __asm push ebx
  __asm push edi
  __asm push dword ptr [esp + 0xc]
  __asm mov ebx, ecx
  __asm call LAB_10088177
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, ebx
  __asm mov edi, eax
  __asm call LAB_10070928
  __asm or eax, edi
  __asm pop edi
  __asm pop ebx
  __asm ret 4
}



// Reference entry 1033f6a0; body size 3 bytes.
#line 1 "ENTRY_1033f6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1033f6a0(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 1033f6b0; body size 3 bytes.
#line 1 "ENTRY_1033f6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1033f6b0(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 1033f6c0; body size 378 bytes.
#line 1 "ENTRY_1033f6c0"

__declspec(naked) void FUN_1033f6c0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x68]
  __asm sub esp, 0x68
  __asm push -1
  __asm push offset LAB_115396ad
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x28
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm mov dword ptr [ebp + 0x64], eax
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, ecx
  __asm lea eax, [ebp - 0x34]
  __asm lea ecx, [ebp]
  __asm mov dword ptr [ebp + 0x28], eax
  __asm call LAB_100379ed
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 0x30
  __asm mov byte ptr [ebp - 4], 1
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm lea edi, [esi + 8]
  __asm mov dword ptr [esi], LAB_11895898
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp + 0x24]
  __asm test ecx, ecx
  __asm je 0x1033f767
  __asm lea eax, [ebp]
  __asm cmp ecx, eax
  __asm jne 0x1033f75f
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [edi + 0x24], eax
  __asm mov ecx, dword ptr [ebp + 0x24]
  __asm test ecx, ecx
  __asm je 0x1033f767
  __asm mov edx, dword ptr [ecx]
  __asm lea eax, [ebp]
  __asm cmp ecx, eax
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm jmp 0x1033f762
  __asm mov dword ptr [edi + 0x24], ecx
  __asm xor ecx, ecx
  __asm mov dword ptr [ebp + 0x24], ecx
  __asm mov dword ptr [ebp - 0x10], esi
  __asm test ecx, ecx
  __asm je 0x1033f786
  __asm mov edx, dword ptr [ecx]
  __asm lea eax, [ebp]
  __asm cmp ecx, eax
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub esp, 0x28
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, esp
  __asm xor esi, esi
  __asm mov dword ptr [ebp + 0x28], edi
  __asm mov dword ptr [edi + 0x24], esi
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 3
  __asm test ecx, ecx
  __asm je 0x1033f7ad
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax]
  __asm mov dword ptr [edi + 0x24], eax
  __asm lea eax, [ebp + 0x2c]
  __asm mov byte ptr [ebp - 4], 2
  __asm push eax
  __asm mov ecx, ebx
  __asm call LAB_10085602
  __asm mov eax, dword ptr [ebp + 0x30]
  __asm mov byte ptr [ebp - 4], 4
  __asm cmp eax, dword ptr [ebp + 0x34]
  __asm je 0x1033f7e1
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x84 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea ecx, [ebp + 0x2c]
  __asm inc esi
  __asm call LAB_10016676
  __asm mov eax, dword ptr [ebp + 0x30]
  __asm cmp eax, dword ptr [ebp + 0x34]
  __asm jne 0x1033f7d0
  __asm mov ecx, dword ptr [ebp + 0x60]
  __asm test ecx, ecx
  __asm je 0x1033f800
  __asm mov edx, dword ptr [ecx]
  __asm lea eax, [ebp + 0x3c]
  __asm cmp ecx, eax
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0x60 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0x10]
  __asm test ecx, ecx
  __asm je 0x1033f818
  __asm mov edx, dword ptr [ecx]
  __asm lea eax, [ebp - 0x34]
  __asm cmp ecx, eax
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm test esi, esi
  __asm setne al
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [ebp + 0x64]
  __asm xor ecx, ebp
  __asm call LAB_100382f3
  __asm lea esp, [ebp + 0x68]
  __asm pop ebp
  __asm ret
}



// Reference entry 1033f8a0; body size 6 bytes.
#line 1 "ENTRY_1033f8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f8a0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 1033f8b0; body size 6 bytes.
#line 1 "ENTRY_1033f8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f8b0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 1033f8c0; body size 6 bytes.
#line 1 "ENTRY_1033f8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f8c0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 1033f8d0; body size 6 bytes.
#line 1 "ENTRY_1033f8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f8d0(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 1033f8e0; body size 6 bytes.
#line 1 "ENTRY_1033f8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f8e0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1033f8f0; body size 6 bytes.
#line 1 "ENTRY_1033f8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f8f0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 1033f900; body size 6 bytes.
#line 1 "ENTRY_1033f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f900(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 1033f910; body size 6 bytes.
#line 1 "ENTRY_1033f910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f910(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 1033f920; body size 6 bytes.
#line 1 "ENTRY_1033f920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f920(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 1033f930; body size 6 bytes.
#line 1 "ENTRY_1033f930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1033f930(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1033ffe0; body size 44 bytes.
#line 1 "ENTRY_1033ffe0"

__declspec(naked) void FUN_1033ffe0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push offset LAB_11894ef8
  __asm push 4
  __asm lea eax, [esi + 0x74]
  __asm push eax
  __asm call LAB_10049c4c
  __asm sub esp, 0x1c
  __asm mov ecx, esi
  __asm mov eax, esp
  __asm mov dword ptr [eax], LAB_11895a48
  __asm mov dword ptr [eax + 0x24], eax
  __asm call LAB_10086caa
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10340640; body size 54 bytes.
#line 1 "ENTRY_10340640"

__declspec(naked) void FUN_10340640(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm push esi
  __asm push offset LAB_11894fb0
  __asm push 3
  __asm lea eax, [edi + 0x74]
  __asm push eax
  __asm call LAB_10049c4c
  __asm sub esp, 0x18
  __asm mov ecx, edi
  __asm mov eax, esp
  __asm mov dword ptr [eax], LAB_11895ad8
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [eax + 0x24], eax
  __asm call LAB_10086caa
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10340bd0; body size 43 bytes.
#line 1 "ENTRY_10340bd0"

__declspec(naked) void FUN_10340bd0(void)

{
  __asm push ecx
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x10 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm sub esp, 0x28
  __asm mov edx, esp
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30
  __asm mov eax, dword ptr [esp + 0x30]
  __asm mov dword ptr [edx], LAB_11895ab4
  __asm mov dword ptr [edx + 4], eax
  __asm mov dword ptr [edx + 0x24], edx
  __asm call LAB_10086caa
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10340e30; body size 14 bytes.
#line 1 "ENTRY_10340e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10340e30(undefined4 param_1)

{
  thunk_FUN_1033ea60<>(param_1,4);
  return;
}


// Reference entry 103429c0; body size 5 bytes.
#line 1 "ENTRY_103429c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103429c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103429d0; body size 5 bytes.
#line 1 "ENTRY_103429d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103429d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103429e0; body size 5 bytes.
#line 1 "ENTRY_103429e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103429e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103429f0; body size 5 bytes.
#line 1 "ENTRY_103429f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103429f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10342aa0; body size 3 bytes.
#line 1 "ENTRY_10342aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10342aa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10342ab0; body size 3 bytes.
#line 1 "ENTRY_10342ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10342ab0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10342ac0; body size 3 bytes.
#line 1 "ENTRY_10342ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10342ac0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10342ad0; body size 3 bytes.
#line 1 "ENTRY_10342ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10342ad0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10342eb0; body size 28 bytes.
#line 1 "ENTRY_10342eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10342eb0(undefined4 *param_1)

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


// Reference entry 10342ee0; body size 28 bytes.
#line 1 "ENTRY_10342ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10342ee0(undefined4 *param_1)

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


// Reference entry 10342f10; body size 28 bytes.
#line 1 "ENTRY_10342f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10342f10(undefined4 *param_1)

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


// Reference entry 103430b0; body size 5 bytes.
#line 1 "ENTRY_103430b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103430b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10343890; body size 18 bytes.
#line 1 "ENTRY_10343890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10343890(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103438b0; body size 25 bytes.
#line 1 "ENTRY_103438b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103438b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103438d0; body size 22 bytes.
#line 1 "ENTRY_103438d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103438d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103438f0; body size 18 bytes.
#line 1 "ENTRY_103438f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103438f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10343a60; body size 18 bytes.
#line 1 "ENTRY_10343a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10343a60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10343a80; body size 25 bytes.
#line 1 "ENTRY_10343a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10343a80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10343aa0; body size 25 bytes.
#line 1 "ENTRY_10343aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10343aa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10343ac0; body size 27 bytes.
#line 1 "ENTRY_10343ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10343ac0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10343af0; body size 11 bytes.
#line 1 "ENTRY_10343af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10343af0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10343b00; body size 11 bytes.
#line 1 "ENTRY_10343b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10343b00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10343b10; body size 35 bytes.
#line 1 "ENTRY_10343b10"

__declspec(naked) void FUN_10343b10(void)

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



// Reference entry 10343b40; body size 35 bytes.
#line 1 "ENTRY_10343b40"

__declspec(naked) void FUN_10343b40(void)

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



// Reference entry 10343b70; body size 35 bytes.
#line 1 "ENTRY_10343b70"

__declspec(naked) void FUN_10343b70(void)

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



// Reference entry 10343ba0; body size 35 bytes.
#line 1 "ENTRY_10343ba0"

__declspec(naked) void FUN_10343ba0(void)

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



// Reference entry 10343bd0; body size 35 bytes.
#line 1 "ENTRY_10343bd0"

__declspec(naked) void FUN_10343bd0(void)

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



// Reference entry 10343c00; body size 35 bytes.
#line 1 "ENTRY_10343c00"

__declspec(naked) void FUN_10343c00(void)

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



// Reference entry 10343c30; body size 35 bytes.
#line 1 "ENTRY_10343c30"

__declspec(naked) void FUN_10343c30(void)

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



// Reference entry 10343c60; body size 35 bytes.
#line 1 "ENTRY_10343c60"

__declspec(naked) void FUN_10343c60(void)

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



// Reference entry 10343c90; body size 35 bytes.
#line 1 "ENTRY_10343c90"

__declspec(naked) void FUN_10343c90(void)

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



// Reference entry 10343cc0; body size 35 bytes.
#line 1 "ENTRY_10343cc0"

__declspec(naked) void FUN_10343cc0(void)

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



// Reference entry 10343cf0; body size 35 bytes.
#line 1 "ENTRY_10343cf0"

__declspec(naked) void FUN_10343cf0(void)

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



// Reference entry 10343d20; body size 35 bytes.
#line 1 "ENTRY_10343d20"

__declspec(naked) void FUN_10343d20(void)

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



// Reference entry 10343d50; body size 35 bytes.
#line 1 "ENTRY_10343d50"

__declspec(naked) void FUN_10343d50(void)

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



// Reference entry 10343d80; body size 35 bytes.
#line 1 "ENTRY_10343d80"

__declspec(naked) void FUN_10343d80(void)

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



// Reference entry 10343db0; body size 35 bytes.
#line 1 "ENTRY_10343db0"

__declspec(naked) void FUN_10343db0(void)

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



// Reference entry 10343de0; body size 35 bytes.
#line 1 "ENTRY_10343de0"

__declspec(naked) void FUN_10343de0(void)

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



// Reference entry 10343e10; body size 35 bytes.
#line 1 "ENTRY_10343e10"

__declspec(naked) void FUN_10343e10(void)

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



// Reference entry 10343e40; body size 35 bytes.
#line 1 "ENTRY_10343e40"

__declspec(naked) void FUN_10343e40(void)

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



// Reference entry 10343e70; body size 35 bytes.
#line 1 "ENTRY_10343e70"

__declspec(naked) void FUN_10343e70(void)

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



// Reference entry 10343ea0; body size 35 bytes.
#line 1 "ENTRY_10343ea0"

__declspec(naked) void FUN_10343ea0(void)

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



// Reference entry 10343ed0; body size 13 bytes.
#line 1 "ENTRY_10343ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10343ed0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10343ee0; body size 22 bytes.
#line 1 "ENTRY_10343ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10343ee0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10343f00; body size 18 bytes.
#line 1 "ENTRY_10343f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10343f00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10343f20; body size 5 bytes.
#line 1 "ENTRY_10343f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10343f20(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10343f30; body size 5 bytes.
#line 1 "ENTRY_10343f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10343f30(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10343f40; body size 11 bytes.
#line 1 "ENTRY_10343f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10343f40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10343f50; body size 13 bytes.
#line 1 "ENTRY_10343f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10343f50(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10343f60; body size 22 bytes.
#line 1 "ENTRY_10343f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10343f60(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10343f80; body size 18 bytes.
#line 1 "ENTRY_10343f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10343f80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103440c0; body size 29 bytes.
#line 1 "ENTRY_103440c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103440c0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103440f0; body size 57 bytes.
#line 1 "ENTRY_103440f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_103440f0(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10344140; body size 18 bytes.
#line 1 "ENTRY_10344140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10344140(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10344160; body size 3 bytes.
#line 1 "ENTRY_10344160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10344160(void)

{
  return;
}


// Reference entry 10344170; body size 3 bytes.
#line 1 "ENTRY_10344170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10344170(void)

{
  return;
}


// Reference entry 10344180; body size 25 bytes.
#line 1 "ENTRY_10344180"

__declspec(naked) void FUN_10344180(void)

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



// Reference entry 103442c0; body size 13 bytes.
#line 1 "ENTRY_103442c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103442c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103442d0; body size 13 bytes.
#line 1 "ENTRY_103442d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103442d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103442e0; body size 13 bytes.
#line 1 "ENTRY_103442e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103442e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103442f0; body size 13 bytes.
#line 1 "ENTRY_103442f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103442f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10344300; body size 13 bytes.
#line 1 "ENTRY_10344300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10344300(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10344310; body size 113 bytes.
#line 1 "ENTRY_10344310"

__declspec(naked) void FUN_10344310(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_10062ea4
  __asm mov ecx, dword ptr [edi]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov esi, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm mov edx, dword ptr [esi + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10344375
  __asm mov ecx, dword ptr [edx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10344352
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, ecx
  __asm mov ecx, eax
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10344346
  __asm mov dword ptr [esi], edx
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x1034436d
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10344362
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



// Reference entry 103443a0; body size 33 bytes.
#line 1 "ENTRY_103443a0"

__declspec(naked) void FUN_103443a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [edi + esi]
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10344590; body size 3 bytes.
#line 1 "ENTRY_10344590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10344590(void)

{
  return;
}


// Reference entry 103445a0; body size 3 bytes.
#line 1 "ENTRY_103445a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103445a0(void)

{
  return;
}


// Reference entry 103445b0; body size 3 bytes.
#line 1 "ENTRY_103445b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103445b0(void)

{
  return;
}


// Reference entry 103445c0; body size 18 bytes.
#line 1 "ENTRY_103445c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103445c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 103445e0; body size 18 bytes.
#line 1 "ENTRY_103445e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103445e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 103449c0; body size 54 bytes.
#line 1 "ENTRY_103449c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103449c0(uint param_1,byte *param_2)

{
  return (int)(((((*param_2 ^ param_1) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) *
          0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10344ac0; body size 15 bytes.
#line 1 "ENTRY_10344ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10344ac0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10344b60; body size 7 bytes.
#line 1 "ENTRY_10344b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344b60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10344b70; body size 7 bytes.
#line 1 "ENTRY_10344b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344b70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10344b80; body size 7 bytes.
#line 1 "ENTRY_10344b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344b80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10344b90; body size 55 bytes.
#line 1 "ENTRY_10344b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10344b90(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10344be0; body size 5 bytes.
#line 1 "ENTRY_10344be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344bf0; body size 31 bytes.
#line 1 "ENTRY_10344bf0"

__declspec(naked) void FUN_10344bf0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10344c0a
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10344c0a
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10344d40; body size 7 bytes.
#line 1 "ENTRY_10344d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344d40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10344d50; body size 5 bytes.
#line 1 "ENTRY_10344d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344d60; body size 36 bytes.
#line 1 "ENTRY_10344d60"

__declspec(naked) void FUN_10344d60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm sar edi, 2
  __asm add esp, 0xc
  __asm lea eax, [esi + edi*4]
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10344d90; body size 5 bytes.
#line 1 "ENTRY_10344d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344da0; body size 5 bytes.
#line 1 "ENTRY_10344da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344db0; body size 5 bytes.
#line 1 "ENTRY_10344db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344dc0; body size 5 bytes.
#line 1 "ENTRY_10344dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344dd0; body size 5 bytes.
#line 1 "ENTRY_10344dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344de0; body size 5 bytes.
#line 1 "ENTRY_10344de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344df0; body size 5 bytes.
#line 1 "ENTRY_10344df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344e00; body size 5 bytes.
#line 1 "ENTRY_10344e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344e10; body size 5 bytes.
#line 1 "ENTRY_10344e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344e20; body size 5 bytes.
#line 1 "ENTRY_10344e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344e30; body size 5 bytes.
#line 1 "ENTRY_10344e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10344e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10344e40; body size 25 bytes.
#line 1 "ENTRY_10344e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10344e40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  ((SCStr *)((SCStr *)(param_2 + 1)))->m_op_ctor((SCStr *)(param_3 + 1));
  return;
}


// Reference entry 10344e60; body size 15 bytes.
#line 1 "ENTRY_10344e60"

__declspec(naked) void FUN_10344e60(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm movups xmm0, xmmword ptr [eax]
  __asm mov eax, dword ptr [esp + 8]
  __asm movups xmmword ptr [eax], xmm0
  __asm ret
}



// Reference entry 10344e80; body size 29 bytes.
#line 1 "ENTRY_10344e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10344e80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  return;
}


// Reference entry 10344eb0; body size 13 bytes.
#line 1 "ENTRY_10344eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10344eb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10344f30; body size 3 bytes.
#line 1 "ENTRY_10344f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10344f30(void)

{
  return;
}


// Reference entry 103451d0; body size 36 bytes.
#line 1 "ENTRY_103451d0"

__declspec(naked) void FUN_103451d0(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x103451e7
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10026dff
  __asm ret 4
}



// Reference entry 10345200; body size 15 bytes.
#line 1 "ENTRY_10345200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345200(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10345220; body size 15 bytes.
#line 1 "ENTRY_10345220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345220(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10345340; body size 5 bytes.
#line 1 "ENTRY_10345340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345350; body size 5 bytes.
#line 1 "ENTRY_10345350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345360; body size 5 bytes.
#line 1 "ENTRY_10345360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345370; body size 5 bytes.
#line 1 "ENTRY_10345370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345380; body size 5 bytes.
#line 1 "ENTRY_10345380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345390; body size 5 bytes.
#line 1 "ENTRY_10345390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103453a0; body size 5 bytes.
#line 1 "ENTRY_103453a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103453a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103453b0; body size 5 bytes.
#line 1 "ENTRY_103453b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103453b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103453c0; body size 5 bytes.
#line 1 "ENTRY_103453c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103453c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103453d0; body size 5 bytes.
#line 1 "ENTRY_103453d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103453d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103453e0; body size 5 bytes.
#line 1 "ENTRY_103453e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103453e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103453f0; body size 5 bytes.
#line 1 "ENTRY_103453f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103453f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345400; body size 5 bytes.
#line 1 "ENTRY_10345400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345410; body size 5 bytes.
#line 1 "ENTRY_10345410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345420; body size 5 bytes.
#line 1 "ENTRY_10345420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345430; body size 5 bytes.
#line 1 "ENTRY_10345430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345440; body size 5 bytes.
#line 1 "ENTRY_10345440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345450; body size 5 bytes.
#line 1 "ENTRY_10345450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345460; body size 5 bytes.
#line 1 "ENTRY_10345460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345470; body size 5 bytes.
#line 1 "ENTRY_10345470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345480; body size 5 bytes.
#line 1 "ENTRY_10345480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345490; body size 5 bytes.
#line 1 "ENTRY_10345490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103454a0; body size 5 bytes.
#line 1 "ENTRY_103454a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103454a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103454b0; body size 5 bytes.
#line 1 "ENTRY_103454b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103454b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103454c0; body size 5 bytes.
#line 1 "ENTRY_103454c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103454c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103454d0; body size 5 bytes.
#line 1 "ENTRY_103454d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103454d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103454e0; body size 5 bytes.
#line 1 "ENTRY_103454e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103454e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103454f0; body size 5 bytes.
#line 1 "ENTRY_103454f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103454f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345500; body size 5 bytes.
#line 1 "ENTRY_10345500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345510; body size 11 bytes.
#line 1 "ENTRY_10345510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10345510(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10345970; body size 5 bytes.
#line 1 "ENTRY_10345970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10345970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345980; body size 30 bytes.
#line 1 "ENTRY_10345980"

__declspec(naked) void FUN_10345980(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm je 0x1034599d
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm jne 0x10345991
  __asm pop esi
  __asm ret
}



// Reference entry 103459b0; body size 6 bytes.
#line 1 "ENTRY_103459b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103459b0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 103459c0; body size 6 bytes.
#line 1 "ENTRY_103459c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103459c0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 103459d0; body size 6 bytes.
#line 1 "ENTRY_103459d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_103459d0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 103459e0; body size 35 bytes.
#line 1 "ENTRY_103459e0"

__declspec(naked) void FUN_103459e0(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov al, byte ptr [edx]
  __asm mov byte ptr [esi], al
  __asm lea ecx, [esi + 4]
  __asm lea eax, [edx + 4]
  __asm push eax
  __asm call LAB_10036c23
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10345a10; body size 18 bytes.
#line 1 "ENTRY_10345a10"

__declspec(naked) void FUN_10345a10(void)

{
  __asm push ecx
  __asm mov byte ptr [ecx], 0
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10345a30; body size 6 bytes.
#line 1 "ENTRY_10345a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10345a30(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 10345a40; body size 6 bytes.
#line 1 "ENTRY_10345a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10345a40(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 10345a50; body size 6 bytes.
#line 1 "ENTRY_10345a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10345a50(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 10345a60; body size 18 bytes.
#line 1 "ENTRY_10345a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345a60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10345a80; body size 18 bytes.
#line 1 "ENTRY_10345a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345a80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10345b70; body size 11 bytes.
#line 1 "ENTRY_10345b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345b70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10345b80; body size 11 bytes.
#line 1 "ENTRY_10345b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345b80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10345b90; body size 11 bytes.
#line 1 "ENTRY_10345b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345b90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10345ba0; body size 11 bytes.
#line 1 "ENTRY_10345ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345ba0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10345bb0; body size 16 bytes.
#line 1 "ENTRY_10345bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10345bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10345c10; body size 51 bytes.
#line 1 "ENTRY_10345c10"

__declspec(naked) void FUN_10345c10(void)

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



// Reference entry 10345cd0; body size 16 bytes.
#line 1 "ENTRY_10345cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10345cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10345cf0; body size 9 bytes.
#line 1 "ENTRY_10345cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10345cf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10345d00; body size 13 bytes.
#line 1 "ENTRY_10345d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345d00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10345d10; body size 14 bytes.
#line 1 "ENTRY_10345d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345d10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10345d30; body size 11 bytes.
#line 1 "ENTRY_10345d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345d30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10345d40; body size 11 bytes.
#line 1 "ENTRY_10345d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345d40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10345d50; body size 23 bytes.
#line 1 "ENTRY_10345d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10345d50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10345d70; body size 23 bytes.
#line 1 "ENTRY_10345d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10345d70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10345d90; body size 3 bytes.
#line 1 "ENTRY_10345d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10345d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345da0; body size 3 bytes.
#line 1 "ENTRY_10345da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10345da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345db0; body size 3 bytes.
#line 1 "ENTRY_10345db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10345db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10345dc0; body size 18 bytes.
#line 1 "ENTRY_10345dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345dc0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10345f30; body size 52 bytes.
#line 1 "ENTRY_10345f30"

__declspec(naked) void FUN_10345f30(void)

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



// Reference entry 10345f80; body size 35 bytes.
#line 1 "ENTRY_10345f80"

__declspec(naked) void FUN_10345f80(void)

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



// Reference entry 10345fb0; body size 13 bytes.
#line 1 "ENTRY_10345fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10345fb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103460b0; body size 23 bytes.
#line 1 "ENTRY_103460b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103460b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10346970; body size 11 bytes.
#line 1 "ENTRY_10346970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10346970(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10346980; body size 24 bytes.
#line 1 "ENTRY_10346980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10346980(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10346bd0; body size 7 bytes.
#line 1 "ENTRY_10346bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10346bd0(undefined4 param_1)

{
  thunk_FUN_103447b0((int)(param_1));
  return;
}


// Reference entry 10346c00; body size 19 bytes.
#line 1 "ENTRY_10346c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10346c00(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10346c20; body size 19 bytes.
#line 1 "ENTRY_10346c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10346c20(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10346c40; body size 3 bytes.
#line 1 "ENTRY_10346c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10346c40(void)

{
  return;
}


// Reference entry 10346cf0; body size 5 bytes.
#line 1 "ENTRY_10346cf0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10346cf0(int param_1)

{ __asm jmp FUN_10005c86 }


// Reference entry 10346ed0; body size 98 bytes.
#line 1 "ENTRY_10346ed0"

__declspec(naked) void FUN_10346ed0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm test esi, esi
  __asm je 0x10346f2f
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm je 0x10346f2f
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm shr eax, 3
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm cmp eax, ecx
  __asm jbe 0x10346efd
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_10064b69
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push dword ptr [edi]
  __asm push edi
  __asm call LAB_1003f828
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esp + 0x10], eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push dword ptr [esi + 0x10]
  __asm push dword ptr [esi + 0xc]
  __asm call LAB_10080193
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10346f50; body size 18 bytes.
#line 1 "ENTRY_10346f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10346f50(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10346f70; body size 15 bytes.
#line 1 "ENTRY_10346f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10346f70(undefined4 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_2);
  return;
}


// Reference entry 10346f90; body size 49 bytes.
#line 1 "ENTRY_10346f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10346f90(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 4));
  *param_1 = (undefined1)(*param_2);
  if ((SCStr *)((param_2 + 4)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)(param_2 + 4)));
    ((SCStr *)(this_))->int_addref();
  }
  return (undefined1 *)(param_1);
}


// Reference entry 10347000; body size 15 bytes.
#line 1 "ENTRY_10347000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10347000(undefined4 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_2);
  return;
}


// Reference entry 10347020; body size 15 bytes.
#line 1 "ENTRY_10347020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10347020(undefined1 *param_2)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(1);
  param_1[1] = (undefined1)(*param_2);
  return;
}


// Reference entry 10347040; body size 30 bytes.
#line 1 "ENTRY_10347040"

__declspec(naked) void FUN_10347040(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov al, byte ptr [ecx]
  __asm cmp al, byte ptr [edx]
  __asm jne 0x10347059
  __asm mov ax, word ptr [ecx + 2]
  __asm cmp ax, word ptr [edx + 2]
  __asm jne 0x10347059
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 10347070; body size 28 bytes.
#line 1 "ENTRY_10347070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10347070(char *param_2)
{
  char *param_1 = (char *)this;
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(*param_1)));
  if ((*param_1 == (char)(*(param_2))) && (uVar1 = (uint)(*(uint *)(param_1 + 4)),(uint)( uVar1) == *(uint *)(param_2 + 4))) {
    return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 103470a0; body size 36 bytes.
#line 1 "ENTRY_103470a0"

__declspec(naked) void FUN_103470a0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov al, byte ptr [ecx]
  __asm cmp al, byte ptr [edx]
  __asm jne 0x103470bf
  __asm lea eax, [edx + 4]
  __asm add ecx, 4
  __asm push eax
  __asm call LAB_10049a94
  __asm test al, al
  __asm je 0x103470bf
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}



// Reference entry 103470d0; body size 28 bytes.
#line 1 "ENTRY_103470d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103470d0(char *param_2)
{
  char *param_1 = (char *)this;
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(*param_1)));
  if ((*param_1 == (char)(*(param_2))) && (uVar1 = (uint)(*(uint *)(param_1 + 4)),(uint)( uVar1) == *(uint *)(param_2 + 4))) {
    return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 10347100; body size 28 bytes.
#line 1 "ENTRY_10347100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10347100(char *param_2)
{
  char *param_1 = (char *)this;
  undefined4 in_EAX;
  uint uVar1;
  
  uVar1 = (uint)(((uint)((int3)((uint)in_EAX >> 8)) << 8 | (uint)(*param_1)));
  if ((*param_1 == (char)(*(param_2))) && (uVar1 = (uint)(*(uint *)(param_1 + 4)),(uint)( uVar1) == *(uint *)(param_2 + 4))) {
    return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 10347130; body size 14 bytes.
#line 1 "ENTRY_10347130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10347130(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10347150; body size 14 bytes.
#line 1 "ENTRY_10347150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10347150(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10347170; body size 14 bytes.
#line 1 "ENTRY_10347170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10347170(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10347190; body size 14 bytes.
#line 1 "ENTRY_10347190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10347190(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103471b0; body size 14 bytes.
#line 1 "ENTRY_103471b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103471b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103471d0; body size 14 bytes.
#line 1 "ENTRY_103471d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103471d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103471f0; body size 14 bytes.
#line 1 "ENTRY_103471f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103471f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10347210; body size 12 bytes.
#line 1 "ENTRY_10347210"

__declspec(naked) void FUN_10347210(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm sete al
  __asm ret 4
}



// Reference entry 10347220; body size 14 bytes.
#line 1 "ENTRY_10347220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10347220(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10347330; body size 7 bytes.
#line 1 "ENTRY_10347330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10347330(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10347340; body size 5 bytes.
#line 1 "ENTRY_10347340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10347340(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 2));
}


// Reference entry 10347350; body size 4 bytes.
#line 1 "ENTRY_10347350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347350(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10347360; body size 4 bytes.
#line 1 "ENTRY_10347360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347360(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10347370; body size 20 bytes.
#line 1 "ENTRY_10347370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10347370(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 4));
  return (SCStr *)(param_2);
}


// Reference entry 10347390; body size 4 bytes.
#line 1 "ENTRY_10347390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347390(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103473a0; body size 4 bytes.
#line 1 "ENTRY_103473a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103473a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103473b0; body size 6 bytes.
#line 1 "ENTRY_103473b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103473b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103473c0; body size 6 bytes.
#line 1 "ENTRY_103473c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103473c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103473d0; body size 6 bytes.
#line 1 "ENTRY_103473d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103473d0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103473e0; body size 6 bytes.
#line 1 "ENTRY_103473e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103473e0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 103473f0; body size 6 bytes.
#line 1 "ENTRY_103473f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103473f0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10347400; body size 6 bytes.
#line 1 "ENTRY_10347400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10347400(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10347410; body size 6 bytes.
#line 1 "ENTRY_10347410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10347410(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10347420; body size 3 bytes.
#line 1 "ENTRY_10347420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347420(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10347430; body size 3 bytes.
#line 1 "ENTRY_10347430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347430(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10347440; body size 9 bytes.
#line 1 "ENTRY_10347440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10347440(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10347450; body size 9 bytes.
#line 1 "ENTRY_10347450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10347450(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10347470; body size 6 bytes.
#line 1 "ENTRY_10347470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10347470(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10347480; body size 16 bytes.
#line 1 "ENTRY_10347480"

__declspec(naked) void FUN_10347480(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 4
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}



// Reference entry 103474a0; body size 10 bytes.
#line 1 "ENTRY_103474a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103474a0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 103474b0; body size 57 bytes.
#line 1 "ENTRY_103474b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_103474b0(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10347500; body size 18 bytes.
#line 1 "ENTRY_10347500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10347500(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103475d0; body size 31 bytes.
#line 1 "ENTRY_103475d0"

__declspec(naked) void FUN_103475d0(void)

{
  __asm push esi
  __asm push 0x20
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



// Reference entry 10347600; body size 22 bytes.
#line 1 "ENTRY_10347600"

__declspec(naked) void FUN_10347600(void)

{
  __asm push esi
  __asm push 0x10
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret
}



// Reference entry 10347810; body size 49 bytes.
#line 1 "ENTRY_10347810"

__declspec(naked) void FUN_10347810(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x3fffffff
  __asm sar edx, 2
  __asm push esi
  __asm mov esi, edx
  __asm _emit 0xd1 __asm _emit 0xee
  __asm sub ecx, esi
  __asm cmp edx, ecx
  __asm jbe 0x10347831
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 103478c0; body size 14 bytes.
#line 1 "ENTRY_103478c0"

__declspec(naked) void FUN_103478c0(void)

{
  __asm cmp dword ptr [ecx + 4], 0x7ffffff
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 103478e0; body size 20 bytes.
#line 1 "ENTRY_103478e0"

__declspec(naked) void FUN_103478e0(void)

{
  __asm cmp dword ptr [ecx + 8], 0xfffffff
  __asm je 0x103478ea
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}



// Reference entry 10347900; body size 66 bytes.
#line 1 "ENTRY_10347900"

__declspec(naked) void FUN_10347900(void)

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



// Reference entry 10347960; body size 3 bytes.
#line 1 "ENTRY_10347960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10347960(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10347a20; body size 3 bytes.
#line 1 "ENTRY_10347a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10347a20(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10347a30; body size 55 bytes.
#line 1 "ENTRY_10347a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10347a30(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10347a80; body size 5 bytes.
#line 1 "ENTRY_10347a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10347a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347c50; body size 3 bytes.
#line 1 "ENTRY_10347c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347c60; body size 3 bytes.
#line 1 "ENTRY_10347c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347c70; body size 3 bytes.
#line 1 "ENTRY_10347c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347c80; body size 3 bytes.
#line 1 "ENTRY_10347c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347c90; body size 3 bytes.
#line 1 "ENTRY_10347c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347ca0; body size 3 bytes.
#line 1 "ENTRY_10347ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347cb0; body size 3 bytes.
#line 1 "ENTRY_10347cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347cc0; body size 3 bytes.
#line 1 "ENTRY_10347cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347cd0; body size 3 bytes.
#line 1 "ENTRY_10347cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347ce0; body size 3 bytes.
#line 1 "ENTRY_10347ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347cf0; body size 3 bytes.
#line 1 "ENTRY_10347cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347d00; body size 3 bytes.
#line 1 "ENTRY_10347d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347d10; body size 3 bytes.
#line 1 "ENTRY_10347d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347d10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347d20; body size 3 bytes.
#line 1 "ENTRY_10347d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347d30; body size 3 bytes.
#line 1 "ENTRY_10347d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347d40; body size 3 bytes.
#line 1 "ENTRY_10347d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10347d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10347d50; body size 92 bytes.
#line 1 "ENTRY_10347d50"

__declspec(naked) void FUN_10347d50(void)

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
  __asm jne 0x10347d8e
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [eax + 4], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp ecx, edi
  __asm jne 0x10347d9c
  __asm mov dword ptr [eax], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp dword ptr [eax + 4], ebx
  __asm jne 0x10347da4
  __asm mov dword ptr [eax + 4], esi
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
}



// Reference entry 10348060; body size 13 bytes.
#line 1 "ENTRY_10348060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10348060(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10348070; body size 3 bytes.
#line 1 "ENTRY_10348070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10348070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10348080; body size 3 bytes.
#line 1 "ENTRY_10348080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10348080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10348100; body size 3 bytes.
#line 1 "ENTRY_10348100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10348100(void)

{
  return;
}


// Reference entry 10348110; body size 3 bytes.
#line 1 "ENTRY_10348110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10348110(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 103481d0; body size 11 bytes.
#line 1 "ENTRY_103481d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103481d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103481e0; body size 11 bytes.
#line 1 "ENTRY_103481e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103481e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103481f0; body size 8 bytes.
#line 1 "ENTRY_103481f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103481f0(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10348200; body size 6 bytes.
#line 1 "ENTRY_10348200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10348200(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10348310; body size 38 bytes.
#line 1 "ENTRY_10348310"

__declspec(naked) void FUN_10348310(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm sub edi, eax
  __asm push edi
  __asm push eax
  __asm push esi
  __asm call LAB_1148cdf3
  __asm sar edi, 2
  __asm add esp, 0xc
  __asm lea eax, [esi + edi*4]
  __asm pop edi
  __asm pop esi
  __asm ret 0xc
}



// Reference entry 10348340; body size 27 bytes.
#line 1 "ENTRY_10348340"

__declspec(naked) void FUN_10348340(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 8]
  __asm sub eax, ecx
  __asm push eax
  __asm push ecx
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm ret 0x10
}



// Reference entry 10348370; body size 27 bytes.
#line 1 "ENTRY_10348370"

__declspec(naked) void FUN_10348370(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 8]
  __asm sub eax, ecx
  __asm push eax
  __asm push ecx
  __asm push dword ptr [esp + 0x14]
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm ret 0xc
}



// Reference entry 103483a0; body size 14 bytes.
#line 1 "ENTRY_103483a0"

__declspec(naked) void FUN_103483a0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 103483c0; body size 13 bytes.
#line 1 "ENTRY_103483c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103483c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103483d0; body size 13 bytes.
#line 1 "ENTRY_103483d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103483d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103483e0; body size 12 bytes.
#line 1 "ENTRY_103483e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103483e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103483f0; body size 10 bytes.
#line 1 "ENTRY_103483f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103483f0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 10348400; body size 11 bytes.
#line 1 "ENTRY_10348400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10348400(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10348670; body size 43 bytes.
#line 1 "ENTRY_10348670"

__declspec(naked) void FUN_10348670(void)

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



// Reference entry 103487a0; body size 87 bytes.
#line 1 "ENTRY_103487a0"

__declspec(naked) void FUN_103487a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xfffffff
  __asm ja 0x103487f2
  __asm shl eax, 4
  __asm cmp eax, 0x1000
  __asm jb 0x103487dd
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x103487f2
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x103487d7
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x103487ed
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10348810; body size 87 bytes.
#line 1 "ENTRY_10348810"

__declspec(naked) void FUN_10348810(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x7ffffff
  __asm ja 0x10348862
  __asm shl eax, 5
  __asm cmp eax, 0x1000
  __asm jb 0x1034884d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10348862
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10348847
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x1034885d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10348880; body size 87 bytes.
#line 1 "ENTRY_10348880"

__declspec(naked) void FUN_10348880(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x103488d2
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x103488bd
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x103488d2
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x103488b7
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x103488cd
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 103488f0; body size 87 bytes.
#line 1 "ENTRY_103488f0"

__declspec(naked) void FUN_103488f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10348942
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x1034892d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10348942
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10348927
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x1034893d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10348960; body size 1333 bytes.
#line 1 "ENTRY_10348960"

__declspec(naked) void FUN_10348960(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov al, byte ptr [esi + 0x24]
  __asm test al, al
  __asm je 0x1034898c
  __asm cmp al, byte ptr [edi + 0x24]
  __asm jne LAB_10348e87
  __asm lea eax, [edi + 0x28]
  __asm push eax
  __asm lea ecx, [esi + 0x28]
  __asm call LAB_10049a94
  __asm test al, al
  __asm je LAB_10348e87
  __asm mov al, byte ptr [esi + 0x2c]
  __asm test al, al
  __asm je 0x103489b0
  __asm cmp al, byte ptr [edi + 0x2c]
  __asm jne LAB_10348e87
  __asm lea eax, [edi + 0x30]
  __asm push eax
  __asm lea ecx, [esi + 0x30]
  __asm call LAB_10049a94
  __asm test al, al
  __asm je LAB_10348e87
  __asm mov al, byte ptr [esi + 0x34]
  __asm test al, al
  __asm je 0x103489d4
  __asm cmp al, byte ptr [edi + 0x34]
  __asm jne LAB_10348e87
  __asm lea eax, [edi + 0x38]
  __asm push eax
  __asm lea ecx, [esi + 0x38]
  __asm call LAB_10049a94
  __asm test al, al
  __asm je LAB_10348e87
  __asm mov al, byte ptr [esi + 0x3c]
  __asm test al, al
  __asm je 0x103489f8
  __asm cmp al, byte ptr [edi + 0x3c]
  __asm jne LAB_10348e87
  __asm lea eax, [edi + 0x40]
  __asm push eax
  __asm lea ecx, [esi + 0x40]
  __asm call LAB_10049a94
  __asm test al, al
  __asm je LAB_10348e87
  __asm mov al, byte ptr [esi + 0x44]
  __asm test al, al
  __asm je 0x10348a1c
  __asm cmp al, byte ptr [edi + 0x44]
  __asm jne LAB_10348e87
  __asm lea eax, [edi + 0x48]
  __asm push eax
  __asm lea ecx, [esi + 0x48]
  __asm call LAB_10049a94
  __asm test al, al
  __asm je LAB_10348e87
  __asm mov al, byte ptr [esi + 0x4c]
  __asm test al, al
  __asm je 0x10348a40
  __asm cmp al, byte ptr [edi + 0x4c]
  __asm jne LAB_10348e87
  __asm lea eax, [edi + 0x50]
  __asm push eax
  __asm lea ecx, [esi + 0x50]
  __asm call LAB_10049a94
  __asm test al, al
  __asm je LAB_10348e87
  __asm mov al, byte ptr [esi + 0x54]
  __asm test al, al
  __asm je 0x10348a64
  __asm cmp al, byte ptr [edi + 0x54]
  __asm jne LAB_10348e87
  __asm lea eax, [edi + 0x58]
  __asm push eax
  __asm lea ecx, [esi + 0x58]
  __asm call LAB_10049a94
  __asm test al, al
  __asm je LAB_10348e87
  __asm mov al, byte ptr [esi + 0x5c]
  __asm test al, al
  __asm je 0x10348a80
  __asm cmp al, byte ptr [edi + 0x5c]
  __asm jne LAB_10348e87
  __asm mov al, byte ptr [esi + 0x5d]
  __asm cmp al, byte ptr [edi + 0x5d]
  __asm jne LAB_10348e87
  __asm mov al, byte ptr [esi + 0x5e]
  __asm test al, al
  __asm je 0x10348a9c
  __asm cmp al, byte ptr [edi + 0x5e]
  __asm jne LAB_10348e87
  __asm mov al, byte ptr [esi + 0x5f]
  __asm cmp al, byte ptr [edi + 0x5f]
  __asm jne LAB_10348e87
  __asm cmp byte ptr [esi + 0x60], 0
  __asm lea ecx, [esi + 0x60]
  __asm je 0x10348ab6
  __asm lea eax, [edi + 0x60]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x62], 0
  __asm lea ecx, [esi + 0x62]
  __asm je 0x10348ad0
  __asm lea eax, [edi + 0x62]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x64], 0
  __asm lea ecx, [esi + 0x64]
  __asm je 0x10348aea
  __asm lea eax, [edi + 0x64]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x66], 0
  __asm lea ecx, [esi + 0x66]
  __asm je 0x10348b04
  __asm lea eax, [edi + 0x66]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x68], 0
  __asm lea ecx, [esi + 0x68]
  __asm je 0x10348b1e
  __asm lea eax, [edi + 0x68]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x6a], 0
  __asm lea ecx, [esi + 0x6a]
  __asm je 0x10348b38
  __asm lea eax, [edi + 0x6a]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x6c], 0
  __asm lea ecx, [esi + 0x6c]
  __asm je 0x10348b52
  __asm lea eax, [edi + 0x6c]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x6e], 0
  __asm lea ecx, [esi + 0x6e]
  __asm je 0x10348b6c
  __asm lea eax, [edi + 0x6e]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x70], 0
  __asm lea ecx, [esi + 0x70]
  __asm je 0x10348b86
  __asm lea eax, [edi + 0x70]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x72], 0
  __asm lea ecx, [esi + 0x72]
  __asm je 0x10348ba0
  __asm lea eax, [edi + 0x72]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x74], 0
  __asm lea ecx, [esi + 0x74]
  __asm je 0x10348bba
  __asm lea eax, [edi + 0x74]
  __asm push eax
  __asm call LAB_10099fb7
  __asm test al, al
  __asm je LAB_10348e87
  __asm mov al, byte ptr [esi + 0x78]
  __asm test al, al
  __asm je 0x10348bd6
  __asm cmp al, byte ptr [edi + 0x78]
  __asm jne LAB_10348e87
  __asm mov eax, dword ptr [esi + 0x7c]
  __asm cmp eax, dword ptr [edi + 0x7c]
  __asm jne LAB_10348e87
  __asm cmp byte ptr [esi + 0x80], 0
  __asm lea ecx, [esi + 0x80]
  __asm je 0x10348bf9
  __asm lea eax, [edi + 0x80]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x88], 0
  __asm lea ecx, [esi + 0x88]
  __asm je 0x10348c1c
  __asm lea eax, [edi + 0x88]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x90], 0
  __asm lea ecx, [esi + 0x90]
  __asm je 0x10348c3f
  __asm lea eax, [edi + 0x90]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0x98], 0
  __asm lea ecx, [esi + 0x98]
  __asm je 0x10348c62
  __asm lea eax, [edi + 0x98]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xa0], 0
  __asm lea ecx, [esi + 0xa0]
  __asm je 0x10348c85
  __asm lea eax, [edi + 0xa0]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xa8], 0
  __asm lea ecx, [esi + 0xa8]
  __asm je 0x10348ca8
  __asm lea eax, [edi + 0xa8]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xb0], 0
  __asm lea ecx, [esi + 0xb0]
  __asm je 0x10348cd2
  __asm cmp byte ptr [esp + 0x10], 0
  __asm jne 0x10348cd2
  __asm lea eax, [edi + 0xb0]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xb8], 0
  __asm lea ecx, [esi + 0xb8]
  __asm je 0x10348cf5
  __asm lea eax, [edi + 0xb8]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xc0], 0
  __asm lea ecx, [esi + 0xc0]
  __asm je 0x10348d18
  __asm lea eax, [edi + 0xc0]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xc8], 0
  __asm lea ecx, [esi + 0xc8]
  __asm je 0x10348d3b
  __asm lea eax, [edi + 0xc8]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xd0], 0
  __asm lea ecx, [esi + 0xd0]
  __asm je 0x10348d5e
  __asm lea eax, [edi + 0xd0]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xd8], 0
  __asm lea ecx, [esi + 0xd8]
  __asm je 0x10348d81
  __asm lea eax, [edi + 0xd8]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xe0], 0
  __asm lea ecx, [esi + 0xe0]
  __asm je 0x10348da4
  __asm lea eax, [edi + 0xe0]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xe8], 0
  __asm lea ecx, [esi + 0xe8]
  __asm je 0x10348dc7
  __asm lea eax, [edi + 0xe8]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xf0], 0
  __asm lea ecx, [esi + 0xf0]
  __asm je 0x10348dea
  __asm lea eax, [edi + 0xf0]
  __asm push eax
  __asm call LAB_1006b7de
  __asm test al, al
  __asm je LAB_10348e87
  __asm cmp byte ptr [esi + 0xf8], 0
  __asm lea ecx, [esi + 0xf8]
  __asm je 0x10348e09
  __asm lea eax, [edi + 0xf8]
  __asm push eax
  __asm call LAB_1005a920
  __asm test al, al
  __asm je 0x10348e87
  __asm cmp byte ptr [esi + 0xfc], 0
  __asm lea ecx, [esi + 0xfc]
  __asm je 0x10348e28
  __asm lea eax, [edi + 0xfc]
  __asm push eax
  __asm call LAB_1005a920
  __asm test al, al
  __asm je 0x10348e87
  __asm cmp byte ptr [esi + 0x100], 0
  __asm lea ecx, [esi + 0x100]
  __asm je 0x10348e47
  __asm lea eax, [edi + 0x100]
  __asm push eax
  __asm call LAB_1005a920
  __asm test al, al
  __asm je 0x10348e87
  __asm mov al, byte ptr [esi + 0x104]
  __asm test al, al
  __asm je 0x10348e67
  __asm cmp al, byte ptr [edi + 0x104]
  __asm jne 0x10348e87
  __asm mov eax, dword ptr [esi + 0x108]
  __asm cmp eax, dword ptr [edi + 0x108]
  __asm jne 0x10348e87
  __asm mov al, byte ptr [esi + 0x10c]
  __asm test al, al
  __asm je 0x10348e8e
  __asm cmp al, byte ptr [edi + 0x10c]
  __asm jne 0x10348e87
  __asm mov eax, dword ptr [esi + 0x110]
  __asm cmp eax, dword ptr [edi + 0x110]
  __asm je 0x10348e8e
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret 8
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret 8
}



// Reference entry 10348ff0; body size 7 bytes.
#line 1 "ENTRY_10348ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10348ff0(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -4);
}


// Reference entry 10349000; body size 3 bytes.
#line 1 "ENTRY_10349000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10349000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10349010; body size 11 bytes.
#line 1 "ENTRY_10349010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10349010(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10349020; body size 68 bytes.
#line 1 "ENTRY_10349020"

__declspec(naked) void FUN_10349020(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm movzx eax, byte ptr [esi]
  __asm xor eax, 0x811c9dc5
  __asm imul edx, eax, 0x1000193
  __asm movzx eax, byte ptr [esi + 1]
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 2]
  __asm imul edx, edx, 0x1000193
  __asm xor edx, eax
  __asm movzx eax, byte ptr [esi + 3]
  __asm imul ecx, edx, 0x1000193
  __asm xor ecx, eax
  __asm mov eax, dword ptr [edi + 0x18]
  __asm imul ecx, ecx, 0x1000193
  __asm pop edi
  __asm pop esi
  __asm and eax, ecx
  __asm ret 4
}



// Reference entry 10349080; body size 4 bytes.
#line 1 "ENTRY_10349080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10349080(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10349100; body size 9 bytes.
#line 1 "ENTRY_10349100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10349100(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10349110; body size 94 bytes.
#line 1 "ENTRY_10349110"

__declspec(naked) void FUN_10349110(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm je 0x1034916b
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm shr eax, 3
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm cmp eax, ecx
  __asm jbe 0x10349139
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_10064b69
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push dword ptr [edi]
  __asm push edi
  __asm call LAB_1003f828
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esp + 0x10], eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push dword ptr [esi + 0x10]
  __asm push dword ptr [esi + 0xc]
  __asm call LAB_10080193
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 1034cc40; body size 54 bytes.
#line 1 "ENTRY_1034cc40"

__declspec(naked) void FUN_1034cc40(void)

{
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 4
  __asm cmp ecx, 0x1000
  __asm jb 0x1034cc65
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1034cc70
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 1034cc90; body size 57 bytes.
#line 1 "ENTRY_1034cc90"

__declspec(naked) void FUN_1034cc90(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 4
  __asm cmp ecx, 0x1000
  __asm jb 0x1034ccb5
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1034ccc2
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 1034cce0; body size 57 bytes.
#line 1 "ENTRY_1034cce0"

__declspec(naked) void FUN_1034cce0(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 5
  __asm cmp ecx, 0x1000
  __asm jb 0x1034cd05
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1034cd12
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 1034cd30; body size 61 bytes.
#line 1 "ENTRY_1034cd30"

__declspec(naked) void FUN_1034cd30(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x1034cd59
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1034cd66
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 1034cd80; body size 61 bytes.
#line 1 "ENTRY_1034cd80"

__declspec(naked) void FUN_1034cd80(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x1034cda9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x1034cdb6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 1034cec0; body size 12 bytes.
#line 1 "ENTRY_1034cec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1034cec0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1034ced0; body size 11 bytes.
#line 1 "ENTRY_1034ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1034ced0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1034cee0; body size 11 bytes.
#line 1 "ENTRY_1034cee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1034cee0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1034cef0; body size 4 bytes.
#line 1 "ENTRY_1034cef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1034cef0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1034cf00; body size 11 bytes.
#line 1 "ENTRY_1034cf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1034cf00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1034cf10; body size 12 bytes.
#line 1 "ENTRY_1034cf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1034cf10(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1034d190; body size 57 bytes.
#line 1 "ENTRY_1034d190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1034d190(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x90) == '\0') {
    ((SCStr *)(param_2))->int_allocRep("No color provided");
    return (SCStr *)(param_2);
  }
  thunk_FUN_10c61e30(param_2,*(undefined4 *)(param_1 + 0x94));
  return (SCStr *)(param_2);
}


// Reference entry 1034d910; body size 57 bytes.
#line 1 "ENTRY_1034d910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1034d910(SCStr *param_2)
{
  int param_1 = (int )this;
  if (*(char *)(param_1 + 0x80) == '\0') {
    ((SCStr *)(param_2))->int_allocRep("No MDP model provided");
    return (SCStr *)(param_2);
  }
  thunk_FUN_10c62100(param_2,*(undefined4 *)(param_1 + 0x84));
  return (SCStr *)(param_2);
}


// Reference entry 1034dcd0; body size 19 bytes.
#line 1 "ENTRY_1034dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1034dcd0(int param_1)

{
  if (*(char *)(param_1 + 0xb0) != '\0') {
    return (undefined4)(*(undefined4 *)(param_1 + 0xb4));
  }
  return (undefined4)(0);
}


// Reference entry 1034e360; body size 79 bytes.
#line 1 "ENTRY_1034e360"

__declspec(naked) void FUN_1034e360(void)

{
  __asm cmp byte ptr [ecx + 0x78], 0
  __asm je 0x1034e373
  __asm mov eax, dword ptr [ecx + 0x7c]
  __asm push eax
  __asm call LAB_1002b70b
  __asm add esp, 4
  __asm ret
  __asm cmp byte ptr [ecx + 0x80], 0
  __asm je 0x1034e3a3
  __asm cmp byte ptr [ecx + 0x88], 0
  __asm je 0x1034e3a3
  __asm push dword ptr [ecx + 0x8c]
  __asm push dword ptr [ecx + 0x84]
  __asm call LAB_1005fe7a
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1002b70b
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1002b70b
  __asm add esp, 4
  __asm ret
}



// Reference entry 1034e420; body size 16 bytes.
#line 1 "ENTRY_1034e420"

__declspec(naked) void FUN_1034e420(void)

{
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm call LAB_1000c4b9
  __asm ret 8
}



// Reference entry 1034e480; body size 18 bytes.
#line 1 "ENTRY_1034e480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1034e480(int param_1)

{
  if ((*(char *)(param_1 + 0x72) != '\0') && (*(char *)(param_1 + 0x73) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1034e530; body size 18 bytes.
#line 1 "ENTRY_1034e530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1034e530(int param_1)

{
  if ((*(char *)(param_1 + 0x6e) != '\0') && (*(char *)(param_1 + 0x6f) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1034e550; body size 79 bytes.
#line 1 "ENTRY_1034e550"

__declspec(naked) void FUN_1034e550(void)

{
  __asm cmp byte ptr [ecx + 0x78], 0
  __asm je 0x1034e563
  __asm mov eax, dword ptr [ecx + 0x7c]
  __asm push eax
  __asm call LAB_1004de23
  __asm add esp, 4
  __asm ret
  __asm cmp byte ptr [ecx + 0x80], 0
  __asm je 0x1034e593
  __asm cmp byte ptr [ecx + 0x88], 0
  __asm je 0x1034e593
  __asm push dword ptr [ecx + 0x8c]
  __asm push dword ptr [ecx + 0x84]
  __asm call LAB_1005fe7a
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1004de23
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1004de23
  __asm add esp, 4
  __asm ret
}



// Reference entry 1034e620; body size 18 bytes.
#line 1 "ENTRY_1034e620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1034e620(int param_1)

{
  if ((*(char *)(param_1 + 0x5e) != '\0') && (*(char *)(param_1 + 0x5f) != '\0')) {
    return (undefined1)(1);
  }
  return (undefined1)(0);
}


// Reference entry 1034e660; body size 79 bytes.
#line 1 "ENTRY_1034e660"

__declspec(naked) void FUN_1034e660(void)

{
  __asm cmp byte ptr [ecx + 0x78], 0
  __asm je 0x1034e673
  __asm mov eax, dword ptr [ecx + 0x7c]
  __asm push eax
  __asm call LAB_1000296e
  __asm add esp, 4
  __asm ret
  __asm cmp byte ptr [ecx + 0x80], 0
  __asm je 0x1034e6a3
  __asm cmp byte ptr [ecx + 0x88], 0
  __asm je 0x1034e6a3
  __asm push dword ptr [ecx + 0x8c]
  __asm push dword ptr [ecx + 0x84]
  __asm call LAB_1005fe7a
  __asm add esp, 8
  __asm push eax
  __asm call LAB_1000296e
  __asm add esp, 4
  __asm ret
  __asm xor eax, eax
  __asm push eax
  __asm call LAB_1000296e
  __asm add esp, 4
  __asm ret
}



// Reference entry 1034e6d0; body size 3 bytes.
#line 1 "ENTRY_1034e6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1034e6d0(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 1034e6e0; body size 3 bytes.
#line 1 "ENTRY_1034e6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1034e6e0(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 1034e6f0; body size 3 bytes.
#line 1 "ENTRY_1034e6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1034e6f0(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 1034e700; body size 3 bytes.
#line 1 "ENTRY_1034e700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1034e700(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 1034e710; body size 3 bytes.
#line 1 "ENTRY_1034e710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1034e710(undefined1 *param_1)

{
  return (undefined1)(*param_1);
}


// Reference entry 1034e740; body size 7 bytes.
#line 1 "ENTRY_1034e740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1034e740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1034ea50; body size 9 bytes.
#line 1 "ENTRY_1034ea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined8 FUN_1034ea50(void)

{
  return (undefined8)(0x7fffffffffffffff);
}


// Reference entry 1034ea60; body size 3 bytes.
#line 1 "ENTRY_1034ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_1034ea60(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 1034ea70; body size 6 bytes.
#line 1 "ENTRY_1034ea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034ea70(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 1034ea80; body size 6 bytes.
#line 1 "ENTRY_1034ea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034ea80(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 1034ea90; body size 6 bytes.
#line 1 "ENTRY_1034ea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034ea90(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 1034eaa0; body size 6 bytes.
#line 1 "ENTRY_1034eaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034eaa0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 1034eab0; body size 6 bytes.
#line 1 "ENTRY_1034eab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034eab0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 1034eac0; body size 6 bytes.
#line 1 "ENTRY_1034eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034eac0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 1034ead0; body size 6 bytes.
#line 1 "ENTRY_1034ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034ead0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 1034eae0; body size 6 bytes.
#line 1 "ENTRY_1034eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034eae0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 1034eb80; body size 5 bytes.
#line 1 "ENTRY_1034eb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034eb80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1034eb90; body size 5 bytes.
#line 1 "ENTRY_1034eb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034eb90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1034eba0; body size 5 bytes.
#line 1 "ENTRY_1034eba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1034eba0(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  return;
}


// Reference entry 1034ebb0; body size 36 bytes.
#line 1 "ENTRY_1034ebb0"

__declspec(naked) void FUN_1034ebb0(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x1034ebc7
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10026dff
  __asm ret 4
}



// Reference entry 1034f330; body size 5 bytes.
#line 1 "ENTRY_1034f330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1034f330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1034f340; body size 9 bytes.
#line 1 "ENTRY_1034f340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1034f340(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 1034f350; body size 9 bytes.
#line 1 "ENTRY_1034f350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1034f350(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 1034f360; body size 41 bytes.
#line 1 "ENTRY_1034f360"

__declspec(naked) void FUN_1034f360(void)

{
  __asm lea eax, [esp + 8]
  __asm push eax
  __asm call dword ptr [LAB_122fca60]
  __asm push dword ptr [eax]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax + 8]
  __asm push offset LAB_1189602c
  __asm push dword ptr [esp + 0x18]
  __asm call LAB_1006a316
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm add esp, 0x18
  __asm ret
}



// Reference entry 1034f3b0; body size 32 bytes.
#line 1 "ENTRY_1034f3b0"

__declspec(naked) void FUN_1034f3b0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0xc
}



// Reference entry 1034f3e0; body size 31 bytes.
#line 1 "ENTRY_1034f3e0"

__declspec(naked) void FUN_1034f3e0(void)

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



// Reference entry 1034f410; body size 59 bytes.
#line 1 "ENTRY_1034f410"

__declspec(naked) void FUN_1034f410(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm xorps xmm0, xmm0
  __asm mov eax, esi
  __asm movups xmmword ptr [esi + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}



// Reference entry 1034f460; body size 18 bytes.
#line 1 "ENTRY_1034f460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034f460(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f480; body size 18 bytes.
#line 1 "ENTRY_1034f480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034f480(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f4a0; body size 18 bytes.
#line 1 "ENTRY_1034f4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034f4a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f4c0; body size 25 bytes.
#line 1 "ENTRY_1034f4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034f4c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f4e0; body size 25 bytes.
#line 1 "ENTRY_1034f4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034f4e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f500; body size 25 bytes.
#line 1 "ENTRY_1034f500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034f500(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f520; body size 22 bytes.
#line 1 "ENTRY_1034f520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034f520(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f540; body size 22 bytes.
#line 1 "ENTRY_1034f540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034f540(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f560; body size 22 bytes.
#line 1 "ENTRY_1034f560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034f560(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f580; body size 22 bytes.
#line 1 "ENTRY_1034f580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034f580(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f5a0; body size 22 bytes.
#line 1 "ENTRY_1034f5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034f5a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f5c0; body size 22 bytes.
#line 1 "ENTRY_1034f5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034f5c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f5e0; body size 18 bytes.
#line 1 "ENTRY_1034f5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034f5e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f600; body size 18 bytes.
#line 1 "ENTRY_1034f600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034f600(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034f620; body size 18 bytes.
#line 1 "ENTRY_1034f620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034f620(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034fb70; body size 18 bytes.
#line 1 "ENTRY_1034fb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034fb70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034fb90; body size 25 bytes.
#line 1 "ENTRY_1034fb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034fb90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034fbb0; body size 25 bytes.
#line 1 "ENTRY_1034fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1034fbb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1034fc60; body size 38 bytes.
#line 1 "ENTRY_1034fc60"

__declspec(naked) void FUN_1034fc60(void)

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



// Reference entry 1034fc90; body size 13 bytes.
#line 1 "ENTRY_1034fc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034fc90(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034fca0; body size 22 bytes.
#line 1 "ENTRY_1034fca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034fca0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034fcc0; body size 22 bytes.
#line 1 "ENTRY_1034fcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034fcc0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034fce0; body size 22 bytes.
#line 1 "ENTRY_1034fce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034fce0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1034fd00; body size 5 bytes.
#line 1 "ENTRY_1034fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1034fd00(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1034fd10; body size 5 bytes.
#line 1 "ENTRY_1034fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1034fd10(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1034fd20; body size 13 bytes.
#line 1 "ENTRY_1034fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1034fd20(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 103503e0; body size 26 bytes.
#line 1 "ENTRY_103503e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103503e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10350400; body size 26 bytes.
#line 1 "ENTRY_10350400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10350400(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10350420; body size 26 bytes.
#line 1 "ENTRY_10350420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10350420(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10350440; body size 26 bytes.
#line 1 "ENTRY_10350440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10350440(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10350460; body size 26 bytes.
#line 1 "ENTRY_10350460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10350460(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10350480; body size 26 bytes.
#line 1 "ENTRY_10350480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10350480(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103504a0; body size 25 bytes.
#line 1 "ENTRY_103504a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103504a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103504c0; body size 33 bytes.
#line 1 "ENTRY_103504c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103504c0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 103504f0; body size 33 bytes.
#line 1 "ENTRY_103504f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103504f0(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10350520; body size 106 bytes.
#line 1 "ENTRY_10350520"

__declspec(naked) void FUN_10350520(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], LAB_11899ed0
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10350581
  __asm cmp ecx, edi
  __asm jne 0x10350577
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10350581
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
  __asm mov dword ptr [ebx + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 4
}



// Reference entry 103506c0; body size 34 bytes.
#line 1 "ENTRY_103506c0"

__declspec(naked) void FUN_103506c0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0x10
}



// Reference entry 103506f0; body size 33 bytes.
#line 1 "ENTRY_103506f0"

__declspec(naked) void FUN_103506f0(void)

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



// Reference entry 10350720; body size 61 bytes.
#line 1 "ENTRY_10350720"

__declspec(naked) void FUN_10350720(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm push dword ptr [eax]
  __asm call LAB_10036c23
  __asm xorps xmm0, xmm0
  __asm mov eax, esi
  __asm movups xmmword ptr [esi + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}



// Reference entry 10350770; body size 40 bytes.
#line 1 "ENTRY_10350770"

__declspec(naked) void FUN_10350770(void)

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



// Reference entry 103507b0; body size 26 bytes.
#line 1 "ENTRY_103507b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103507b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103507d0; body size 25 bytes.
#line 1 "ENTRY_103507d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103507d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 103507f0; body size 26 bytes.
#line 1 "ENTRY_103507f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103507f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10350810; body size 25 bytes.
#line 1 "ENTRY_10350810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10350810(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10350830; body size 26 bytes.
#line 1 "ENTRY_10350830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10350830(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10350850; body size 25 bytes.
#line 1 "ENTRY_10350850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10350850(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 103508f0; body size 25 bytes.
#line 1 "ENTRY_103508f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103508f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10350ad0; body size 91 bytes.
#line 1 "ENTRY_10350ad0"

__declspec(naked) void FUN_10350ad0(void)

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
  __asm je 0x10350b06
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10350b1d
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



// Reference entry 10350b50; body size 26 bytes.
#line 1 "ENTRY_10350b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10350b50(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10350e10; body size 24 bytes.
#line 1 "ENTRY_10350e10"

__declspec(naked) void FUN_10350e10(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1006a064
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 103510b0; body size 26 bytes.
#line 1 "ENTRY_103510b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103510b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103510d0; body size 26 bytes.
#line 1 "ENTRY_103510d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103510d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103510f0; body size 26 bytes.
#line 1 "ENTRY_103510f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103510f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10351110; body size 26 bytes.
#line 1 "ENTRY_10351110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351110(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10351130; body size 26 bytes.
#line 1 "ENTRY_10351130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351130(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10351150; body size 26 bytes.
#line 1 "ENTRY_10351150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351150(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10351170; body size 26 bytes.
#line 1 "ENTRY_10351170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351170(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10351190; body size 26 bytes.
#line 1 "ENTRY_10351190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351190(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103511b0; body size 26 bytes.
#line 1 "ENTRY_103511b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103511b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103511d0; body size 91 bytes.
#line 1 "ENTRY_103511d0"

__declspec(naked) void FUN_103511d0(void)

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
  __asm je 0x10351206
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x1035121d
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



// Reference entry 10351250; body size 26 bytes.
#line 1 "ENTRY_10351250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351250(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10351270; body size 26 bytes.
#line 1 "ENTRY_10351270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351270(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10351290; body size 91 bytes.
#line 1 "ENTRY_10351290"

__declspec(naked) void FUN_10351290(void)

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
  __asm je 0x103512c6
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x103512dd
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



// Reference entry 10351310; body size 25 bytes.
#line 1 "ENTRY_10351310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10351310(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10351330; body size 25 bytes.
#line 1 "ENTRY_10351330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10351330(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10351350; body size 26 bytes.
#line 1 "ENTRY_10351350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351350(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103513f0; body size 26 bytes.
#line 1 "ENTRY_103513f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103513f0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10351410; body size 25 bytes.
#line 1 "ENTRY_10351410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10351410(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10351430; body size 26 bytes.
#line 1 "ENTRY_10351430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351430(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10351450; body size 91 bytes.
#line 1 "ENTRY_10351450"

__declspec(naked) void FUN_10351450(void)

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
  __asm je 0x10351486
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x1035149d
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



// Reference entry 103514d0; body size 43 bytes.
#line 1 "ENTRY_103514d0"

__declspec(naked) void FUN_103514d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x103514f5
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



// Reference entry 10351510; body size 25 bytes.
#line 1 "ENTRY_10351510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10351510(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10351530; body size 26 bytes.
#line 1 "ENTRY_10351530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10351530(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10352210; body size 83 bytes.
#line 1 "ENTRY_10352210"

__declspec(naked) void FUN_10352210(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm cmp edi, dword ptr [esi]
  __asm je 0x1035225c
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10352237
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10352255
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



// Reference entry 10352280; body size 78 bytes.
#line 1 "ENTRY_10352280"

__declspec(naked) void FUN_10352280(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x103522a9
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x103522c0
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



// Reference entry 10352360; body size 78 bytes.
#line 1 "ENTRY_10352360"

__declspec(naked) void FUN_10352360(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10352389
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x103523a0
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



// Reference entry 103523d0; body size 78 bytes.
#line 1 "ENTRY_103523d0"

__declspec(naked) void FUN_103523d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x103523f9
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10352410
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



// Reference entry 10352440; body size 12 bytes.
#line 1 "ENTRY_10352440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10352440(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10352450; body size 57 bytes.
#line 1 "ENTRY_10352450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10352450(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 103524a0; body size 18 bytes.
#line 1 "ENTRY_103524a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_103524a0(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103525c0; body size 3 bytes.
#line 1 "ENTRY_103525c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103525c0(void)

{
  return;
}


// Reference entry 103525d0; body size 3 bytes.
#line 1 "ENTRY_103525d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103525d0(void)

{
  return;
}


// Reference entry 103525e0; body size 3 bytes.
#line 1 "ENTRY_103525e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103525e0(void)

{
  return;
}


// Reference entry 103525f0; body size 3 bytes.
#line 1 "ENTRY_103525f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103525f0(void)

{
  return;
}


// Reference entry 10352600; body size 3 bytes.
#line 1 "ENTRY_10352600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352600(void)

{
  return;
}


// Reference entry 10352610; body size 25 bytes.
#line 1 "ENTRY_10352610"

__declspec(naked) void FUN_10352610(void)

{
  __asm push 0x24
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}



// Reference entry 10352630; body size 25 bytes.
#line 1 "ENTRY_10352630"

__declspec(naked) void FUN_10352630(void)

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



// Reference entry 10352650; body size 25 bytes.
#line 1 "ENTRY_10352650"

__declspec(naked) void FUN_10352650(void)

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



// Reference entry 10352870; body size 40 bytes.
#line 1 "ENTRY_10352870"

__declspec(naked) void FUN_10352870(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm push dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 0xc]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret
}



// Reference entry 103528b0; body size 5 bytes.
#line 1 "ENTRY_103528b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103528b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103528c0; body size 13 bytes.
#line 1 "ENTRY_103528c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103528c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103528d0; body size 13 bytes.
#line 1 "ENTRY_103528d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103528d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103528e0; body size 13 bytes.
#line 1 "ENTRY_103528e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103528e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103528f0; body size 13 bytes.
#line 1 "ENTRY_103528f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103528f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10352900; body size 13 bytes.
#line 1 "ENTRY_10352900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352900(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10352910; body size 13 bytes.
#line 1 "ENTRY_10352910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352910(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10352920; body size 13 bytes.
#line 1 "ENTRY_10352920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352920(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10352930; body size 13 bytes.
#line 1 "ENTRY_10352930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352930(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10352940; body size 3 bytes.
#line 1 "ENTRY_10352940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352940(void)

{
  return;
}


// Reference entry 10352950; body size 3 bytes.
#line 1 "ENTRY_10352950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352950(void)

{
  return;
}


// Reference entry 10352960; body size 3 bytes.
#line 1 "ENTRY_10352960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352960(void)

{
  return;
}


// Reference entry 10352970; body size 3 bytes.
#line 1 "ENTRY_10352970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352970(void)

{
  return;
}


// Reference entry 10352980; body size 3 bytes.
#line 1 "ENTRY_10352980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352980(void)

{
  return;
}


// Reference entry 10352a60; body size 33 bytes.
#line 1 "ENTRY_10352a60"

__declspec(naked) void FUN_10352a60(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp esi, edi
  __asm je 0x10352a7e
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_1009a426
  __asm add esi, 0x18
  __asm cmp esi, edi
  __asm jne 0x10352a70
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10352bd0; body size 3 bytes.
#line 1 "ENTRY_10352bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10352bd0(void)

{
  return;
}


// Reference entry 10352c90; body size 39 bytes.
#line 1 "ENTRY_10352c90"

__declspec(naked) void FUN_10352c90(void)

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
  __asm je 0x10352cae
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10352cc0; body size 39 bytes.
#line 1 "ENTRY_10352cc0"

__declspec(naked) void FUN_10352cc0(void)

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
  __asm je 0x10352cde
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10352cf0; body size 18 bytes.
#line 1 "ENTRY_10352cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10352cf0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10352dc0; body size 39 bytes.
#line 1 "ENTRY_10352dc0"

__declspec(naked) void FUN_10352dc0(void)

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
  __asm je 0x10352dde
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10352df0; body size 39 bytes.
#line 1 "ENTRY_10352df0"

__declspec(naked) void FUN_10352df0(void)

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
  __asm je 0x10352e0e
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10352ed0; body size 39 bytes.
#line 1 "ENTRY_10352ed0"

__declspec(naked) void FUN_10352ed0(void)

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
  __asm je 0x10352eee
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10352f00; body size 18 bytes.
#line 1 "ENTRY_10352f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10352f00(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10352f20; body size 39 bytes.
#line 1 "ENTRY_10352f20"

__declspec(naked) void FUN_10352f20(void)

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
  __asm je 0x10352f3e
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10353dd0; body size 54 bytes.
#line 1 "ENTRY_10353dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10353dd0(uint param_1,byte *param_2)

{
  return (int)(((((*param_2 ^ param_1) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) *
          0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10353ee0; body size 15 bytes.
#line 1 "ENTRY_10353ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10353ee0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10353f00; body size 15 bytes.
#line 1 "ENTRY_10353f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10353f00(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x24);
  return;
}


// Reference entry 10353f20; body size 15 bytes.
#line 1 "ENTRY_10353f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10353f20(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10353f40; body size 15 bytes.
#line 1 "ENTRY_10353f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10353f40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10353fe0; body size 26 bytes.
#line 1 "ENTRY_10353fe0"

__declspec(naked) void FUN_10353fe0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea ecx, [esi + 0x10]
  __asm call LAB_1009903f
  __asm push 0x24
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 10354140; body size 5 bytes.
#line 1 "ENTRY_10354140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10354140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10354150; body size 5 bytes.
#line 1 "ENTRY_10354150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10354150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10354160; body size 7 bytes.
#line 1 "ENTRY_10354160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10354160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10354170; body size 7 bytes.
#line 1 "ENTRY_10354170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10354170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10354180; body size 7 bytes.
#line 1 "ENTRY_10354180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10354180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10354190; body size 7 bytes.
#line 1 "ENTRY_10354190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10354190(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103541a0; body size 7 bytes.
#line 1 "ENTRY_103541a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103541a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103541b0; body size 7 bytes.
#line 1 "ENTRY_103541b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103541b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103541c0; body size 7 bytes.
#line 1 "ENTRY_103541c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103541c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10354770; body size 152 bytes.
#line 1 "ENTRY_10354770"

__declspec(naked) void FUN_10354770(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm mov eax, ebx
  __asm sub eax, ecx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x18]
  __asm sar eax, 3
  __asm push esi
  __asm cmp eax, 0x28
  __asm jle 0x103547ef
  __asm push edi
  __asm inc eax
  __asm sar eax, 3
  __asm mov edi, eax
  __asm shl edi, 4
  __asm push ebp
  __asm _emit 0x8d __asm _emit 0x34 __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea edx, [esi + ecx]
  __asm lea eax, [edi + ecx]
  __asm mov dword ptr [esp + 0x20], edx
  __asm push eax
  __asm push edx
  __asm push ecx
  __asm call LAB_10063494
  __asm mov ecx, dword ptr [esp + 0x28]
  __asm push ebp
  __asm lea eax, [esi + ecx]
  __asm push eax
  __asm push ecx
  __asm sub ecx, esi
  __asm push ecx
  __asm call LAB_10063494
  __asm mov ebp, ebx
  __asm sub ebp, esi
  __asm mov esi, dword ptr [esp + 0x40]
  __asm push esi
  __asm push ebx
  __asm push ebp
  __asm sub ebx, edi
  __asm push ebx
  __asm call LAB_10063494
  __asm mov ecx, dword ptr [esp + 0x4c]
  __asm add esp, 0x30
  __asm pop edi
  __asm push esi
  __asm push ebp
  __asm push dword ptr [esp + 0x1c]
  __asm push ecx
  __asm call LAB_10063494
  __asm add esp, 0x10
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
  __asm mov esi, dword ptr [esp + 0x1c]
  __asm mov ebp, ebx
  __asm push esi
  __asm push ebp
  __asm push dword ptr [esp + 0x1c]
  __asm push ecx
  __asm call LAB_10063494
  __asm add esp, 0x10
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 10354830; body size 55 bytes.
#line 1 "ENTRY_10354830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10354830(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10355410; body size 5 bytes.
#line 1 "ENTRY_10355410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10355410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10355420; body size 5 bytes.
#line 1 "ENTRY_10355420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10355420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10355430; body size 5 bytes.
#line 1 "ENTRY_10355430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10355430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10355440; body size 37 bytes.
#line 1 "ENTRY_10355440"

__declspec(naked) void FUN_10355440(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10355460
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10355460
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10355470; body size 37 bytes.
#line 1 "ENTRY_10355470"

__declspec(naked) void FUN_10355470(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10355490
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10355490
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 103558f0; body size 93 bytes.
#line 1 "ENTRY_103558f0"

__declspec(naked) void FUN_103558f0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp edi, ebx
  __asm je 0x10355946
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [edi - 8]
  __asm sub edi, 8
  __asm sub esi, 8
  __asm cmp eax, dword ptr [esi]
  __asm je 0x1035593c
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x1035592b
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x1035593c
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm cmp edi, ebx
  __asm jne 0x10355903
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



// Reference entry 10355a70; body size 8 bytes.
#line 1 "ENTRY_10355a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10355a70(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 103566a0; body size 5 bytes.
#line 1 "ENTRY_103566a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103566a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


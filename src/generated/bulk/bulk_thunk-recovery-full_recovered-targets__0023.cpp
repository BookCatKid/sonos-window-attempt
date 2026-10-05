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
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AddBondedZones { char _pad; AddBondedZones(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CurrentTrack { char _pad; CurrentTrack(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DeviceProperties { char _pad; DeviceProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Exceeded { char _pad; Exceeded(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct FlashDebugObjects { char _pad; FlashDebugObjects(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetAlbumArtistDisplayOption { char _pad; GetAlbumArtistDisplayOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetIRRepeaterState { char _pad; GetIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetRoomCalibrationStatus { char _pad; GetRoomCalibrationStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct HTControl { char _pad; HTControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Incomplete { char _pad; Incomplete(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Memory { char _pad; Memory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Missing { char _pad; Missing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Of { char _pad; Of(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Out { char _pad; Out(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RenderingControl { char _pad; RenderingControl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDeviceVolume { char _pad; SCIDeviceVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINowPlayingRatings { char _pad; SCINowPlayingRatings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINowPlayingSleepTimer { char _pad; SCINowPlayingSleepTimer(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpContentDirectoryGetAlbumArtistDisplayOption { char _pad; SCIOpContentDirectoryGetAlbumArtistDisplayOption(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpHTControlGetIRRepeaterState { char _pad; SCIOpHTControlGetIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpHTControlSetIRRepeaterState { char _pad; SCIOpHTControlSetIRRepeaterState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpHTControlSetLEDFeedbackState { char _pad; SCIOpHTControlSetLEDFeedbackState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpRenderingControlGetRoomCalibrationStatus { char _pad; SCIOpRenderingControlGetRoomCalibrationStatus(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpSubmitDiagnostics { char _pad; SCIOpSubmitDiagnostics(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSettingsReplicator { char _pad; SCSettingsReplicator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCSwfListenerGroupVolume { char _pad; SCSwfListenerGroupVolume(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Sequence { char _pad; Sequence(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SubmitDiagnostics { char _pad; SubmitDiagnostics(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unexpected { char _pad; Unexpected(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ZoneGroupTopology { char _pad; ZoneGroupTopology(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *BLAHBLAHBLAH;
typedef void *BLE;
typedef void *BTCLASSIC;
typedef void *CLOUD;
typedef void *E9;
typedef void *LAN;
typedef void *SONOSMULTIPARTBOUNDARY;
typedef void *WARNING;
typedef void *WIFISCAN;
using namespace std;
extern "C" void LAB_10005ccc(void);
extern "C" void LAB_10007158(void);
extern "C" void LAB_1000ccc0(void);
extern "C" void LAB_1000d1d4(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_1000f993(void);
extern "C" void LAB_10011838(void);
extern "C" void LAB_10012553(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_100181bf(void);
extern "C" void LAB_1001becd(void);
extern "C" void LAB_1001cf5d(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10026e0e(void);
extern "C" void LAB_10027ed0(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002ac39(void);
extern "C" void LAB_1002d41b(void);
extern "C" void LAB_10031cdc(void);
extern "C" void LAB_10032ea7(void);
extern "C" void LAB_10033da7(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10037088(void);
extern "C" void LAB_10037a97(void);
extern "C" void LAB_10037d85(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100386a9(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003a904(void);
extern "C" void LAB_1003a9e0(void);
extern "C" void LAB_1004568d(void);
extern "C" void LAB_100460a1(void);
extern "C" void LAB_10046f56(void);
extern "C" void LAB_100476e0(void);
extern "C" void LAB_10047ec4(void);
extern "C" void LAB_100491a7(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10052ffe(void);
extern "C" void LAB_1005452f(void);
extern "C" void LAB_1005907a(void);
extern "C" void LAB_1005a141(void);
extern "C" void LAB_1005b7ee(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005d94a(void);
extern "C" void LAB_1005e31d(void);
extern "C" void LAB_1005f6c8(void);
extern "C" void LAB_10061257(void);
extern "C" void LAB_10061e0f(void);
extern "C" void LAB_10065348(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_10070892(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007210b(void);
extern "C" void LAB_10074f7d(void);
extern "C" void LAB_10076463(void);
extern "C" void LAB_10077403(void);
extern "C" void LAB_10077886(void);
extern "C" void LAB_10079c49(void);
extern "C" void LAB_1007c98a(void);
extern "C" void LAB_1007d00b(void);
extern "C" void LAB_1007fdbf(void);
extern "C" void LAB_10087079(void);
extern "C" void LAB_1008abbb(void);
extern "C" void LAB_1008b179(void);
extern "C" void LAB_1008dbcc(void);
extern "C" void LAB_100900ed(void);
extern "C" void LAB_10090cd2(void);
extern "C" void LAB_10090d31(void);
extern "C" void LAB_10090f7f(void);
extern "C" void LAB_100911af(void);
extern "C" void LAB_10095e03(void);
extern "C" void LAB_1009a363(void);
extern "C" void LAB_10f031d4(void);
extern "C" void LAB_10f1270d(void);
extern "C" void LAB_10f138c0(void);
extern "C" void LAB_10f53174(void);
extern "C" void LAB_10f53234(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a2f7(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1176757d(void);
extern "C" void LAB_117675cd(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187b694(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881488(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_11883b7c(void);
extern "C" void LAB_11889d1c(void);
extern "C" void LAB_11889d24(void);
extern "C" void LAB_1188c32c(void);
extern "C" void LAB_1188cf08(void);
extern "C" void LAB_1188d1d0(void);
extern "C" void LAB_1188db30(void);
extern "C" void LAB_11890714(void);
extern "C" void LAB_11893ddc(void);
extern "C" void LAB_11896904(void);
extern "C" void LAB_1189cc1c(void);
extern "C" void LAB_1189eb60(void);
extern "C" void LAB_118b27c8(void);
extern "C" void LAB_118ba554(void);
extern "C" void LAB_118ba664(void);
extern "C" void LAB_1191ac08(void);
extern "C" void LAB_1194c490(void);
extern "C" void LAB_1194cbec(void);
extern "C" void LAB_1194ccc0(void);
extern "C" void LAB_1194cd20(void);
extern "C" void LAB_1194cdac(void);
extern "C" void LAB_1194ce0c(void);
extern "C" void LAB_1194ce98(void);
extern "C" void LAB_1194cf04(void);
extern "C" void LAB_1194cf14(void);
extern "C" void LAB_1194cf5c(void);
extern "C" void LAB_1194cf98(void);
extern "C" void LAB_1194cfa4(void);
extern "C" void LAB_1194cfec(void);
extern "C" void LAB_1194d104(void);
extern "C" void LAB_1194d110(void);
extern "C" void LAB_1194d140(void);
extern "C" void LAB_1194d1bc(void);
extern "C" void LAB_1194d1d8(void);
extern "C" void LAB_1194d200(void);
extern "C" void LAB_1194d228(void);
extern "C" void LAB_1194d240(void);
extern "C" void LAB_1194d2b8(void);
extern "C" void LAB_1194d3b8(void);
extern "C" void LAB_1194d510(void);
extern "C" void LAB_1194d52c(void);
extern "C" void LAB_1194d554(void);
extern "C" void LAB_1194d580(void);
extern "C" void LAB_1194d58c(void);
extern "C" void LAB_1194e3e8(void);
extern "C" void LAB_1194e674(void);
extern "C" void LAB_1194e6bc(void);
extern "C" void LAB_1194e6cc(void);
extern "C" void LAB_1194e714(void);
extern "C" void LAB_1194e724(void);
extern "C" void LAB_1194e76c(void);
extern "C" void LAB_1194e7a8(void);
extern "C" void LAB_1194e7b4(void);
extern "C" void LAB_1194f190(void);
extern "C" void LAB_1194f1dc(void);
extern "C" void LAB_1194f250(void);
extern "C" void LAB_1194f29c(void);
extern "C" void LAB_1194f310(void);
extern "C" void LAB_1194f35c(void);
extern "C" void LAB_1194f3d0(void);
extern "C" void LAB_1194f41c(void);
extern "C" void LAB_1194f42c(void);
extern "C" void LAB_1194f448(void);
extern "C" void LAB_119502fc(void);
extern "C" void LAB_11950a7c(void);
extern "C" void LAB_11950c38(void);
extern "C" void LAB_11950c68(void);
extern "C" void LAB_11950ca4(void);
extern "C" void LAB_11950d80(void);
extern "C" void LAB_11950dc4(void);
extern "C" void LAB_11950e10(void);
extern "C" void LAB_11951578(void);
extern "C" void LAB_119516a4(void);
extern "C" void LAB_119517d4(void);
extern "C" void LAB_11951800(void);
extern "C" void LAB_11951824(void);
extern "C" void LAB_11951880(void);
extern "C" void LAB_119518e4(void);
extern "C" void LAB_11951b48(void);
extern "C" void LAB_11951b70(void);
extern "C" void LAB_11951b80(void);
extern "C" void LAB_11951cd4(void);
extern "C" void LAB_11951d1c(void);
extern "C" void LAB_11951d58(void);
extern "C" void LAB_11951d64(void);
extern "C" void LAB_11951da8(void);
extern "C" void LAB_11951df0(void);
extern "C" void LAB_11951e2c(void);
extern "C" void LAB_11951e38(void);
extern "C" void LAB_11951ed8(void);
extern "C" void LAB_11951f7c(void);
extern "C" void LAB_11951fc4(void);
extern "C" void LAB_11952040(void);
extern "C" void LAB_119520ec(void);
extern "C" void LAB_11952138(void);
extern "C" void LAB_119521b0(void);
extern "C" void LAB_11952254(void);
extern "C" void LAB_1195229c(void);
extern "C" void LAB_1195232c(void);
extern "C" void LAB_119523e4(void);
extern "C" void LAB_11952438(void);
extern "C" void LAB_11952604(void);
extern "C" void LAB_1195264c(void);
extern "C" void LAB_11952688(void);
extern "C" void LAB_11952694(void);
extern "C" void LAB_1195273c(void);
extern "C" void LAB_119527e8(void);
extern "C" void LAB_11952834(void);
extern "C" void LAB_11952844(void);
extern "C" void LAB_1195286c(void);
extern "C" void LAB_1195287c(void);
extern "C" void LAB_11952b74(void);
extern "C" void LAB_11952bc0(void);
extern "C" void LAB_11952bd0(void);
extern "C" void LAB_11952be0(void);
extern "C" void LAB_11952d98(void);
extern "C" void LAB_11952e18(void);
extern "C" void LAB_11952e2c(void);
extern "C" void LAB_11952e44(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc8a0(void);

extern "C" void LAB_10005ccc(void);
extern "C" void LAB_10007158(void);
extern "C" void LAB_1000ccc0(void);
extern "C" void LAB_1000d1d4(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_1000f993(void);
extern "C" void LAB_10011838(void);
extern "C" void LAB_10012553(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_100181bf(void);
extern "C" void LAB_1001becd(void);
extern "C" void LAB_1001cf5d(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_10026e0e(void);
extern "C" void LAB_10027ed0(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002ac39(void);
extern "C" void LAB_1002d41b(void);
extern "C" void LAB_10031cdc(void);
extern "C" void LAB_10032ea7(void);
extern "C" void LAB_10033da7(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10037088(void);
extern "C" void LAB_10037a97(void);
extern "C" void LAB_10037d85(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100386a9(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003a904(void);
extern "C" void LAB_1003a9e0(void);
extern "C" void LAB_1004568d(void);
extern "C" void LAB_100460a1(void);
extern "C" void LAB_10046f56(void);
extern "C" void LAB_100476e0(void);
extern "C" void LAB_10047ec4(void);
extern "C" void LAB_100491a7(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10052ffe(void);
extern "C" void LAB_1005452f(void);
extern "C" void LAB_1005907a(void);
extern "C" void LAB_1005a141(void);
extern "C" void LAB_1005b7ee(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005d94a(void);
extern "C" void LAB_1005e31d(void);
extern "C" void LAB_1005f6c8(void);
extern "C" void LAB_10061257(void);
extern "C" void LAB_10061e0f(void);
extern "C" void LAB_10065348(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_10070892(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_1007210b(void);
extern "C" void LAB_10074f7d(void);
extern "C" void LAB_10076463(void);
extern "C" void LAB_10077403(void);
extern "C" void LAB_10077886(void);
extern "C" void LAB_10079c49(void);
extern "C" void LAB_1007c98a(void);
extern "C" void LAB_1007d00b(void);
extern "C" void LAB_1007fdbf(void);
extern "C" void LAB_10087079(void);
extern "C" void LAB_1008abbb(void);
extern "C" void LAB_1008b179(void);
extern "C" void LAB_1008dbcc(void);
extern "C" void LAB_100900ed(void);
extern "C" void LAB_10090cd2(void);
extern "C" void LAB_10090d31(void);
extern "C" void LAB_10090f7f(void);
extern "C" void LAB_100911af(void);
extern "C" void LAB_10095e03(void);
extern "C" void LAB_1009a363(void);
extern "C" void LAB_10f031d4(void);
extern "C" void LAB_10f1270d(void);
extern "C" void LAB_10f138c0(void);
extern "C" void LAB_10f53174(void);
extern "C" void LAB_10f53234(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a2f7(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187b694(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881488(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_11883b7c(void);
extern "C" void LAB_11889d1c(void);
extern "C" void LAB_11889d24(void);
extern "C" void LAB_1188c32c(void);
extern "C" void LAB_1188cf08(void);
extern "C" void LAB_1188d1d0(void);
extern "C" void LAB_1188db30(void);
extern "C" void LAB_11890714(void);
extern "C" void LAB_11893ddc(void);
extern "C" void LAB_11896904(void);
extern "C" void LAB_1189cc1c(void);
extern "C" void LAB_1189eb60(void);
extern "C" void LAB_118b27c8(void);
extern "C" void LAB_118ba554(void);
extern "C" void LAB_118ba664(void);
extern "C" void LAB_1191ac08(void);
extern "C" void LAB_1194c490(void);
extern "C" void LAB_1194cbec(void);
extern "C" void LAB_1194ccc0(void);
extern "C" void LAB_1194cd20(void);
extern "C" void LAB_1194cdac(void);
extern "C" void LAB_1194ce0c(void);
extern "C" void LAB_1194ce98(void);
extern "C" void LAB_1194cf04(void);
extern "C" void LAB_1194cf14(void);
extern "C" void LAB_1194cf5c(void);
extern "C" void LAB_1194cf98(void);
extern "C" void LAB_1194cfa4(void);
extern "C" void LAB_1194cfec(void);
extern "C" void LAB_1194d104(void);
extern "C" void LAB_1194d110(void);
extern "C" void LAB_1194d140(void);
extern "C" void LAB_1194d1bc(void);
extern "C" void LAB_1194d1d8(void);
extern "C" void LAB_1194d200(void);
extern "C" void LAB_1194d228(void);
extern "C" void LAB_1194d240(void);
extern "C" void LAB_1194d2b8(void);
extern "C" void LAB_1194d3b8(void);
extern "C" void LAB_1194d510(void);
extern "C" void LAB_1194d52c(void);
extern "C" void LAB_1194d554(void);
extern "C" void LAB_1194d580(void);
extern "C" void LAB_1194d58c(void);
extern "C" void LAB_1194e3e8(void);
extern "C" void LAB_1194e674(void);
extern "C" void LAB_1194e6bc(void);
extern "C" void LAB_1194e6cc(void);
extern "C" void LAB_1194e714(void);
extern "C" void LAB_1194e724(void);
extern "C" void LAB_1194e76c(void);
extern "C" void LAB_1194e7a8(void);
extern "C" void LAB_1194e7b4(void);
extern "C" void LAB_1194f190(void);
extern "C" void LAB_1194f1dc(void);
extern "C" void LAB_1194f250(void);
extern "C" void LAB_1194f29c(void);
extern "C" void LAB_1194f310(void);
extern "C" void LAB_1194f35c(void);
extern "C" void LAB_1194f3d0(void);
extern "C" void LAB_1194f41c(void);
extern "C" void LAB_1194f42c(void);
extern "C" void LAB_1194f448(void);
extern "C" void LAB_119502fc(void);
extern "C" void LAB_11950a7c(void);
extern "C" void LAB_11950c38(void);
extern "C" void LAB_11950c68(void);
extern "C" void LAB_11950ca4(void);
extern "C" void LAB_11950d80(void);
extern "C" void LAB_11950dc4(void);
extern "C" void LAB_11950e10(void);
extern "C" void LAB_11951578(void);
extern "C" void LAB_119516a4(void);
extern "C" void LAB_119517d4(void);
extern "C" void LAB_11951800(void);
extern "C" void LAB_11951824(void);
extern "C" void LAB_11951880(void);
extern "C" void LAB_119518e4(void);
extern "C" void LAB_11951b48(void);
extern "C" void LAB_11951b70(void);
extern "C" void LAB_11951b80(void);
extern "C" void LAB_11951cd4(void);
extern "C" void LAB_11951d1c(void);
extern "C" void LAB_11951d58(void);
extern "C" void LAB_11951d64(void);
extern "C" void LAB_11951da8(void);
extern "C" void LAB_11951df0(void);
extern "C" void LAB_11951e2c(void);
extern "C" void LAB_11951e38(void);
extern "C" void LAB_11951ed8(void);
extern "C" void LAB_11951f7c(void);
extern "C" void LAB_11951fc4(void);
extern "C" void LAB_11952040(void);
extern "C" void LAB_119520ec(void);
extern "C" void LAB_11952138(void);
extern "C" void LAB_119521b0(void);
extern "C" void LAB_11952254(void);
extern "C" void LAB_1195229c(void);
extern "C" void LAB_1195232c(void);
extern "C" void LAB_119523e4(void);
extern "C" void LAB_11952438(void);
extern "C" void LAB_11952604(void);
extern "C" void LAB_1195264c(void);
extern "C" void LAB_11952688(void);
extern "C" void LAB_11952694(void);
extern "C" void LAB_1195273c(void);
extern "C" void LAB_119527e8(void);
extern "C" void LAB_11952834(void);
extern "C" void LAB_11952844(void);
extern "C" void LAB_1195286c(void);
extern "C" void LAB_1195287c(void);
extern "C" void LAB_11952b74(void);
extern "C" void LAB_11952bc0(void);
extern "C" void LAB_11952bd0(void);
extern "C" void LAB_11952be0(void);
extern "C" void LAB_11952d98(void);
extern "C" void LAB_11952e18(void);
extern "C" void LAB_11952e2c(void);
extern "C" void LAB_11952e44(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fc8a0(void);


extern "C" void FUN_10065348(void);
extern "C" void FUN_10070892(void);

struct Recovered_Bulk { char _pad; void __thiscall m_FUN_10ef5750(int param_2); template<class... A> int m_FUN_10ef5750(A...); uint __thiscall m_FUN_10ef5780(uint param_2); template<class... A> int m_FUN_10ef5780(A...); uint __thiscall m_FUN_10ef57c0(uint param_2); template<class... A> int m_FUN_10ef57c0(A...); void __thiscall m_FUN_10ef5c40(int param_2); template<class... A> int m_FUN_10ef5c40(A...); void __thiscall m_FUN_10ef5ce0(int *param_2); template<class... A> int m_FUN_10ef5ce0(A...); void __thiscall m_FUN_10ef5d50(undefined4 param_2); template<class... A> int m_FUN_10ef5d50(A...); void __thiscall m_FUN_10ef5d60(undefined4 param_2); template<class... A> int m_FUN_10ef5d60(A...); void __thiscall m_FUN_10ef62f0(undefined4 *param_2); template<class... A> int m_FUN_10ef62f0(A...); void __thiscall m_FUN_10ef6300(undefined4 *param_2); template<class... A> int m_FUN_10ef6300(A...); void __thiscall m_FUN_10ef7020(undefined4 *param_2); template<class... A> int m_FUN_10ef7020(A...); void __thiscall m_FUN_10ef7030(undefined4 *param_2); template<class... A> int m_FUN_10ef7030(A...); void __thiscall m_FUN_10ef7040(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10ef7040(A...); void __thiscall m_FUN_10ef7080(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10ef7080(A...); void __thiscall m_FUN_10ef7940(undefined4 param_2,int param_3); template<class... A> int m_FUN_10ef7940(A...); void __thiscall m_FUN_10ef8250(undefined4 *param_2); template<class... A> int m_FUN_10ef8250(A...); undefined4 * __thiscall m_FUN_10ef9560(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef9560(A...); undefined4 * __thiscall m_FUN_10ef9590(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ef9590(A...); undefined4 * __thiscall m_FUN_10ef9730(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef9730(A...); undefined4 * __thiscall m_FUN_10ef9760(undefined4 param_2); template<class... A> int m_FUN_10ef9760(A...); undefined4 * __thiscall m_FUN_10ef9770(undefined4 param_2); template<class... A> int m_FUN_10ef9770(A...); undefined4 * __thiscall m_FUN_10ef9780(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ef9780(A...); undefined4 * __thiscall m_FUN_10ef97a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ef97a0(A...); undefined4 * __thiscall m_FUN_10ef97b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ef97b0(A...); undefined4 * __thiscall m_FUN_10ef97c0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10ef97c0(A...); undefined4 * __thiscall m_FUN_10ef97f0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10ef97f0(A...); undefined4 * __thiscall m_FUN_10ef9820(undefined4 param_2); template<class... A> int m_FUN_10ef9820(A...); undefined4 * __thiscall m_FUN_10ef9830(undefined4 param_2); template<class... A> int m_FUN_10ef9830(A...); undefined4 * __thiscall m_FUN_10ef9cf0(undefined4 param_2); template<class... A> int m_FUN_10ef9cf0(A...); undefined4 * __thiscall m_FUN_10ef9d10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef9d10(A...); undefined4 * __thiscall m_FUN_10ef9d20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef9d20(A...); undefined4 * __thiscall m_FUN_10ef9db0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ef9db0(A...); undefined4 * __thiscall m_FUN_10ef9dc0(undefined4 *param_2); template<class... A> int m_FUN_10ef9dc0(A...); undefined4 * __thiscall m_FUN_10ef9dd0(undefined4 *param_2); template<class... A> int m_FUN_10ef9dd0(A...); bool __thiscall m_FUN_10ef9ec0(int *param_2); template<class... A> int m_FUN_10ef9ec0(A...); bool __thiscall m_FUN_10ef9ee0(int *param_2); template<class... A> int m_FUN_10ef9ee0(A...); void __thiscall m_FUN_10efa250(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10efa250(A...); void __thiscall m_FUN_10efa5b0(int param_2); template<class... A> int m_FUN_10efa5b0(A...); void __thiscall m_FUN_10efa660(int *param_2); template<class... A> int m_FUN_10efa660(A...); void __thiscall m_FUN_10efa900(undefined4 *param_2); template<class... A> int m_FUN_10efa900(A...); void __thiscall m_FUN_10efa910(undefined4 *param_2); template<class... A> int m_FUN_10efa910(A...); void __thiscall m_FUN_10efabc0(undefined4 *param_2); template<class... A> int m_FUN_10efabc0(A...); void __thiscall m_FUN_10efabd0(undefined4 *param_2); template<class... A> int m_FUN_10efabd0(A...); void __thiscall m_FUN_10efabe0(undefined4 *param_2); template<class... A> int m_FUN_10efabe0(A...); undefined4 * __thiscall m_FUN_10f01580(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f01580(A...); undefined4 * __thiscall m_FUN_10f015a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f015a0(A...); undefined4 * __thiscall m_FUN_10f016b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f016b0(A...); undefined4 * __thiscall m_FUN_10f016d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f016d0(A...); undefined4 * __thiscall m_FUN_10f01890(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f01890(A...); undefined4 * __thiscall m_FUN_10f018b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f018b0(A...); undefined4 * __thiscall m_FUN_10f02130(undefined4 param_2); template<class... A> int m_FUN_10f02130(A...); undefined4 * __thiscall m_FUN_10f02230(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f02230(A...); undefined4 * __thiscall m_FUN_10f02240(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f02240(A...); undefined4 * __thiscall m_FUN_10f02350(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f02350(A...); undefined4 * __thiscall m_FUN_10f023f0(undefined4 *param_2); template<class... A> int m_FUN_10f023f0(A...); void __thiscall m_FUN_10f03810(int param_2); template<class... A> int m_FUN_10f03810(A...); void __thiscall m_FUN_10f03880(int param_2); template<class... A> int m_FUN_10f03880(A...); void __thiscall m_FUN_10f03900(int *param_2); template<class... A> int m_FUN_10f03900(A...); void __thiscall m_FUN_10f03970(int *param_2); template<class... A> int m_FUN_10f03970(A...); void __thiscall m_FUN_10f039e0(undefined4 *param_2); template<class... A> int m_FUN_10f039e0(A...); void __thiscall m_FUN_10f03a10(undefined4 *param_2); template<class... A> int m_FUN_10f03a10(A...); int * __thiscall m_FUN_10f06520(int *param_2); template<class... A> int m_FUN_10f06520(A...); undefined4 * __thiscall m_FUN_10f0e8e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10f0e8e0(A...); SCStr * __thiscall m_FUN_10f11bb0(SCStr *param_2); template<class... A> int m_FUN_10f11bb0(A...); SCStr * __thiscall m_FUN_10f11bd0(SCStr *param_2); template<class... A> int m_FUN_10f11bd0(A...); int * __thiscall m_FUN_10f11c50(int *param_2); template<class... A> int m_FUN_10f11c50(A...); SCStr * __thiscall m_FUN_10f11fb0(SCStr *param_2); template<class... A> int m_FUN_10f11fb0(A...); SCStr * __thiscall m_FUN_10f11fd0(SCStr *param_2); template<class... A> int m_FUN_10f11fd0(A...); void __thiscall m_FUN_10f12420(undefined4 param_2); template<class... A> int m_FUN_10f12420(A...); void __thiscall m_FUN_10f12470(SCStr *param_2); template<class... A> int m_FUN_10f12470(A...); void __thiscall m_FUN_10f125c0(int param_2,undefined4 *param_3,char param_4); template<class... A> int m_FUN_10f125c0(A...); void __thiscall m_FUN_10f14300(undefined4 *param_2); template<class... A> int m_FUN_10f14300(A...); undefined4 * __thiscall m_FUN_10f15970(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10f15970(A...); undefined4 * __thiscall m_FUN_10f159a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f159a0(A...); undefined4 * __thiscall m_FUN_10f15b40(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f15b40(A...); void __thiscall m_FUN_10f15e10(undefined4 *param_2); template<class... A> int m_FUN_10f15e10(A...); void __thiscall m_FUN_10f15f30(undefined4 *param_2); template<class... A> int m_FUN_10f15f30(A...); undefined4 * __thiscall m_FUN_10f16ea0(undefined4 param_2); template<class... A> int m_FUN_10f16ea0(A...); undefined4 * __thiscall m_FUN_10f16ec0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f16ec0(A...); undefined4 * __thiscall m_FUN_10f16ee0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f16ee0(A...); undefined4 * __thiscall m_FUN_10f16f70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f16f70(A...); undefined4 * __thiscall m_FUN_10f16f80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f16f80(A...); undefined4 * __thiscall m_FUN_10f17010(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f17010(A...); undefined4 * __thiscall m_FUN_10f17020(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f17020(A...); undefined4 * __thiscall m_FUN_10f17050(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f17050(A...); undefined4 * __thiscall m_FUN_10f174b0(undefined4 *param_2); template<class... A> int m_FUN_10f174b0(A...); undefined4 * __thiscall m_FUN_10f17a10(undefined4 *param_2); template<class... A> int m_FUN_10f17a10(A...); SCStr * __thiscall m_FUN_10f17cd0(SCStr *param_2); template<class... A> int m_FUN_10f17cd0(A...); bool __thiscall m_FUN_10f17d20(int *param_2); template<class... A> int m_FUN_10f17d20(A...); bool __thiscall m_FUN_10f17d40(int *param_2); template<class... A> int m_FUN_10f17d40(A...); bool __thiscall m_FUN_10f17d60(int *param_2); template<class... A> int m_FUN_10f17d60(A...); bool __thiscall m_FUN_10f17d80(int *param_2); template<class... A> int m_FUN_10f17d80(A...); undefined4 * __thiscall m_FUN_10f17f50(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f17f50(A...); uint __thiscall m_FUN_10f18360(uint param_2); template<class... A> int m_FUN_10f18360(A...); int __thiscall m_FUN_10f18490(int param_2,int param_3); template<class... A> int m_FUN_10f18490(A...); undefined4 __thiscall m_FUN_10f18520(undefined4 param_2); template<class... A> int m_FUN_10f18520(A...); uint __thiscall m_FUN_10f189e0(uint param_2); template<class... A> int m_FUN_10f189e0(A...); uint __thiscall m_FUN_10f189f0(uint param_2); template<class... A> int m_FUN_10f189f0(A...); void __thiscall m_FUN_10f19090(int *param_2); template<class... A> int m_FUN_10f19090(A...); void __thiscall m_FUN_10f192d0(undefined4 *param_2); template<class... A> int m_FUN_10f192d0(A...); void __thiscall m_FUN_10f19300(undefined4 *param_2); template<class... A> int m_FUN_10f19300(A...); void __thiscall m_FUN_10f195f0(undefined4 *param_2); template<class... A> int m_FUN_10f195f0(A...); void __thiscall m_FUN_10f19600(int *param_2); template<class... A> int m_FUN_10f19600(A...); void __thiscall m_FUN_10f1a120(undefined4 *param_2); template<class... A> int m_FUN_10f1a120(A...); undefined4 * __thiscall m_FUN_10f1ac40(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f1ac40(A...); undefined4 * __thiscall m_FUN_10f1ac90(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f1ac90(A...); undefined4 * __thiscall m_FUN_10f1acd0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f1acd0(A...); undefined4 * __thiscall m_FUN_10f1acf0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f1acf0(A...); undefined4 * __thiscall m_FUN_10f1ad10(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f1ad10(A...); SCStr * __thiscall m_FUN_10f1afe0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f1afe0(A...); undefined4 * __thiscall m_FUN_10f1b010(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f1b010(A...); undefined4 * __thiscall m_FUN_10f1b030(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f1b030(A...); undefined4 * __thiscall m_FUN_10f1b050(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f1b050(A...); undefined4 * __thiscall m_FUN_10f1b070(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f1b070(A...); undefined4 * __thiscall m_FUN_10f1b0c0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f1b0c0(A...); SCStr * __thiscall m_FUN_10f1b100(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f1b100(A...); undefined4 * __thiscall m_FUN_10f1bee0(undefined4 param_2); template<class... A> int m_FUN_10f1bee0(A...); undefined4 * __thiscall m_FUN_10f1bf00(undefined4 param_2); template<class... A> int m_FUN_10f1bf00(A...); undefined4 * __thiscall m_FUN_10f1bf20(undefined4 param_2); template<class... A> int m_FUN_10f1bf20(A...); void __thiscall m_FUN_10f1db60(int param_2); template<class... A> int m_FUN_10f1db60(A...); void __thiscall m_FUN_10f1dbd0(int param_2); template<class... A> int m_FUN_10f1dbd0(A...); void __thiscall m_FUN_10f1dc40(int param_2); template<class... A> int m_FUN_10f1dc40(A...); void __thiscall m_FUN_10f1dce0(int *param_2); template<class... A> int m_FUN_10f1dce0(A...); void __thiscall m_FUN_10f1dd50(int *param_2); template<class... A> int m_FUN_10f1dd50(A...); void __thiscall m_FUN_10f1ddc0(int *param_2); template<class... A> int m_FUN_10f1ddc0(A...); undefined4 * __thiscall m_FUN_10f217f0(undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 param_5,undefined4 param_6); template<class... A> int m_FUN_10f217f0(A...); undefined4 * __thiscall m_FUN_10f22970(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f22970(A...); undefined4 * __thiscall m_FUN_10f22a10(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f22a10(A...); undefined4 * __thiscall m_FUN_10f22b10(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f22b10(A...); undefined4 * __thiscall m_FUN_10f22b90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f22b90(A...); undefined4 * __thiscall m_FUN_10f22e40(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f22e40(A...); undefined4 * __thiscall m_FUN_10f22e70(undefined4 param_2); template<class... A> int m_FUN_10f22e70(A...); undefined4 * __thiscall m_FUN_10f22e80(undefined4 param_2); template<class... A> int m_FUN_10f22e80(A...); void __thiscall m_FUN_10f231d0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10f231d0(A...); void __thiscall m_FUN_10f23260(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10f23260(A...); void __thiscall m_FUN_10f23880(undefined4 *param_2); template<class... A> int m_FUN_10f23880(A...); int * __thiscall m_FUN_10f23c70(int *param_2,int *param_3); template<class... A> int m_FUN_10f23c70(A...); void __thiscall m_FUN_10f243a0(undefined4 *param_2); template<class... A> int m_FUN_10f243a0(A...); undefined4 * __thiscall m_FUN_10f24890(undefined4 param_2); template<class... A> int m_FUN_10f24890(A...); undefined4 * __thiscall m_FUN_10f248b0(int *param_2); template<class... A> int m_FUN_10f248b0(A...); undefined4 * __thiscall m_FUN_10f24900(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10f24900(A...); undefined4 * __thiscall m_FUN_10f24940(int *param_2); template<class... A> int m_FUN_10f24940(A...); undefined4 * __thiscall m_FUN_10f24990(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10f24990(A...); undefined4 * __thiscall m_FUN_10f249d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f249d0(A...); undefined4 * __thiscall m_FUN_10f249f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f249f0(A...); undefined4 * __thiscall m_FUN_10f24a80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f24a80(A...); undefined4 * __thiscall m_FUN_10f24a90(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f24a90(A...); undefined4 * __thiscall m_FUN_10f24ad0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f24ad0(A...); undefined4 * __thiscall m_FUN_10f24b10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f24b10(A...); undefined4 * __thiscall m_FUN_10f24ba0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f24ba0(A...); undefined4 * __thiscall m_FUN_10f24f00(undefined4 *param_2); template<class... A> int m_FUN_10f24f00(A...); undefined4 * __thiscall m_FUN_10f24f40(undefined4 *param_2); template<class... A> int m_FUN_10f24f40(A...); undefined4 * __thiscall m_FUN_10f24f80(undefined4 *param_2); template<class... A> int m_FUN_10f24f80(A...); undefined4 * __thiscall m_FUN_10f24fb0(undefined4 *param_2); template<class... A> int m_FUN_10f24fb0(A...); undefined4 * __thiscall m_FUN_10f24fc0(undefined4 *param_2); template<class... A> int m_FUN_10f24fc0(A...); undefined4 * __thiscall m_FUN_10f255c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10f255c0(A...); undefined4 * __thiscall m_FUN_10f25980(int *param_2); template<class... A> int m_FUN_10f25980(A...); int * __thiscall m_FUN_10f26280(int *param_2); template<class... A> int m_FUN_10f26280(A...); bool __thiscall m_FUN_10f262c0(int param_2); template<class... A> int m_FUN_10f262c0(A...); bool __thiscall m_FUN_10f262e0(int param_2); template<class... A> int m_FUN_10f262e0(A...); bool __thiscall m_FUN_10f26300(int *param_2); template<class... A> int m_FUN_10f26300(A...); bool __thiscall m_FUN_10f26320(int param_2); template<class... A> int m_FUN_10f26320(A...); bool __thiscall m_FUN_10f26340(int param_2); template<class... A> int m_FUN_10f26340(A...); bool __thiscall m_FUN_10f26360(int *param_2); template<class... A> int m_FUN_10f26360(A...); int __thiscall m_FUN_10f264c0(int param_2); template<class... A> int m_FUN_10f264c0(A...); void __thiscall m_FUN_10f26c00(undefined4 *param_2); template<class... A> int m_FUN_10f26c00(A...); void __thiscall m_FUN_10f26c70(int param_2); template<class... A> int m_FUN_10f26c70(A...); uint __thiscall m_FUN_10f26ca0(uint param_2); template<class... A> int m_FUN_10f26ca0(A...); uint __thiscall m_FUN_10f26ea0(uint param_2); template<class... A> int m_FUN_10f26ea0(A...); uint __thiscall m_FUN_10f26ec0(uint param_2); template<class... A> int m_FUN_10f26ec0(A...); void __thiscall m_FUN_10f27390(int param_2); template<class... A> int m_FUN_10f27390(A...); void __thiscall m_FUN_10f27550(int *param_2); template<class... A> int m_FUN_10f27550(A...); void __thiscall m_FUN_10f275c0(int param_2); template<class... A> int m_FUN_10f275c0(A...); void __thiscall m_FUN_10f275d0(undefined4 *param_2); template<class... A> int m_FUN_10f275d0(A...); void __thiscall m_FUN_10f27850(int *param_2); template<class... A> int m_FUN_10f27850(A...); void __thiscall m_FUN_10f27870(undefined4 *param_2); template<class... A> int m_FUN_10f27870(A...); void __thiscall m_FUN_10f27bd0(undefined4 *param_2); template<class... A> int m_FUN_10f27bd0(A...); void __thiscall m_FUN_10f27be0(undefined4 *param_2); template<class... A> int m_FUN_10f27be0(A...); void __thiscall m_FUN_10f27bf0(undefined4 *param_2); template<class... A> int m_FUN_10f27bf0(A...); void __thiscall m_FUN_10f29d20(undefined4 *param_2); template<class... A> int m_FUN_10f29d20(A...); void __thiscall m_FUN_10f29d30(undefined4 *param_2); template<class... A> int m_FUN_10f29d30(A...); SCStr * __thiscall m_FUN_10f2a930(SCStr *param_2); template<class... A> int m_FUN_10f2a930(A...); void __thiscall m_FUN_10f2bf10(undefined4 *param_2); template<class... A> int m_FUN_10f2bf10(A...); int * __thiscall m_FUN_10f33f50(int *param_2); template<class... A> int m_FUN_10f33f50(A...); int * __thiscall m_FUN_10f33f80(int *param_2); template<class... A> int m_FUN_10f33f80(A...); int * __thiscall m_FUN_10f33fb0(int *param_2); template<class... A> int m_FUN_10f33fb0(A...); int * __thiscall m_FUN_10f33fe0(int *param_2); template<class... A> int m_FUN_10f33fe0(A...); int * __thiscall m_FUN_10f34010(int *param_2); template<class... A> int m_FUN_10f34010(A...); int * __thiscall m_FUN_10f34040(int *param_2); template<class... A> int m_FUN_10f34040(A...); SCStr * __thiscall m_FUN_10f341b0(SCStr *param_2); template<class... A> int m_FUN_10f341b0(A...); undefined4 * __thiscall m_FUN_10f37330(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f37330(A...); undefined4 * __thiscall m_FUN_10f37370(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f37370(A...); undefined4 * __thiscall m_FUN_10f37390(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f37390(A...); SCStr * __thiscall m_FUN_10f37560(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f37560(A...); undefined4 * __thiscall m_FUN_10f37590(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f37590(A...); undefined4 * __thiscall m_FUN_10f375b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f375b0(A...); undefined4 * __thiscall m_FUN_10f375d0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f375d0(A...); SCStr * __thiscall m_FUN_10f37610(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f37610(A...); undefined4 * __thiscall m_FUN_10f37e20(undefined4 param_2); template<class... A> int m_FUN_10f37e20(A...); undefined4 * __thiscall m_FUN_10f37e40(undefined4 param_2); template<class... A> int m_FUN_10f37e40(A...); void __thiscall m_FUN_10f39050(int param_2); template<class... A> int m_FUN_10f39050(A...); void __thiscall m_FUN_10f390c0(int param_2); template<class... A> int m_FUN_10f390c0(A...); void __thiscall m_FUN_10f39150(int *param_2); template<class... A> int m_FUN_10f39150(A...); void __thiscall m_FUN_10f391c0(int *param_2); template<class... A> int m_FUN_10f391c0(A...); SCStr * __thiscall m_FUN_10f3a0c0(SCStr *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f3a0c0(A...); int * __thiscall m_FUN_10f40a80(int *param_2); template<class... A> int m_FUN_10f40a80(A...); int * __thiscall m_FUN_10f40aa0(int *param_2); template<class... A> int m_FUN_10f40aa0(A...); int * __thiscall m_FUN_10f40ac0(int *param_2); template<class... A> int m_FUN_10f40ac0(A...); int * __thiscall m_FUN_10f40ae0(int *param_2); template<class... A> int m_FUN_10f40ae0(A...); int * __thiscall m_FUN_10f40b20(int *param_2); template<class... A> int m_FUN_10f40b20(A...); int * __thiscall m_FUN_10f40c20(int *param_2); template<class... A> int m_FUN_10f40c20(A...); int * __thiscall m_FUN_10f40c90(int *param_2); template<class... A> int m_FUN_10f40c90(A...); int * __thiscall m_FUN_10f40d00(int *param_2); template<class... A> int m_FUN_10f40d00(A...); int * __thiscall m_FUN_10f40d70(int *param_2); template<class... A> int m_FUN_10f40d70(A...); undefined4 * __thiscall m_FUN_10f40e50(undefined4 param_2); template<class... A> int m_FUN_10f40e50(A...); undefined4 * __thiscall m_FUN_10f40e90(undefined4 param_2); template<class... A> int m_FUN_10f40e90(A...); int * __thiscall m_FUN_10f43930(int *param_2); template<class... A> int m_FUN_10f43930(A...); int * __thiscall m_FUN_10f43a30(int *param_2); template<class... A> int m_FUN_10f43a30(A...); int * __thiscall m_FUN_10f43b90(int *param_2); template<class... A> int m_FUN_10f43b90(A...); undefined4 * __thiscall m_FUN_10f43ce0(undefined4 param_2); template<class... A> int m_FUN_10f43ce0(A...); undefined4 * __thiscall m_FUN_10f43d20(undefined4 param_2); template<class... A> int m_FUN_10f43d20(A...); int * __thiscall m_FUN_10f49360(int *param_2); template<class... A> int m_FUN_10f49360(A...); void __thiscall m_FUN_10f49420(undefined4 *param_2); template<class... A> int m_FUN_10f49420(A...); void __thiscall m_FUN_10f49450(undefined4 *param_2); template<class... A> int m_FUN_10f49450(A...); void __thiscall m_FUN_10f49480(undefined4 *param_2); template<class... A> int m_FUN_10f49480(A...); undefined4 * __thiscall m_FUN_10f49ad0(undefined4 param_2); template<class... A> int m_FUN_10f49ad0(A...); undefined4 * __thiscall m_FUN_10f49b10(undefined4 param_2); template<class... A> int m_FUN_10f49b10(A...); undefined4 * __thiscall m_FUN_10f49b50(undefined4 *param_2); template<class... A> int m_FUN_10f49b50(A...); undefined4 * __thiscall m_FUN_10f49be0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f49be0(A...); undefined4 * __thiscall m_FUN_10f4a650(undefined4 param_2); template<class... A> int m_FUN_10f4a650(A...); int __thiscall m_FUN_10f4ab50(int param_2); template<class... A> int m_FUN_10f4ab50(A...); uint __thiscall m_FUN_10f4b0b0(uint param_2); template<class... A> int m_FUN_10f4b0b0(A...); undefined4 __thiscall m_FUN_10f4b470(int param_2); template<class... A> int m_FUN_10f4b470(A...); undefined4 __thiscall m_FUN_10f4d0b0(int param_2); template<class... A> int m_FUN_10f4d0b0(A...); int * __thiscall m_FUN_10f4d4c0(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f4d4c0(A...); undefined4 * __thiscall m_FUN_10f4d510(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f4d510(A...); undefined4 * __thiscall m_FUN_10f4d650(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f4d650(A...); int * __thiscall m_FUN_10f4d690(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f4d690(A...); int * __thiscall m_FUN_10f4d6e0(int *param_2); template<class... A> int m_FUN_10f4d6e0(A...); int * __thiscall m_FUN_10f4d760(int *param_2); template<class... A> int m_FUN_10f4d760(A...); int * __thiscall m_FUN_10f4d780(int *param_2); template<class... A> int m_FUN_10f4d780(A...); int * __thiscall m_FUN_10f4d7a0(int *param_2); template<class... A> int m_FUN_10f4d7a0(A...); void __thiscall m_FUN_10f4d870(undefined4 *param_2); template<class... A> int m_FUN_10f4d870(A...); undefined4 * __thiscall m_FUN_10f4df30(undefined4 *param_2); template<class... A> int m_FUN_10f4df30(A...); undefined4 * __thiscall m_FUN_10f4dfa0(undefined4 param_2); template<class... A> int m_FUN_10f4dfa0(A...); undefined4 * __thiscall m_FUN_10f4e090(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f4e090(A...); undefined4 * __thiscall m_FUN_10f4e0a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f4e0a0(A...); undefined4 * __thiscall m_FUN_10f4e0d0(undefined4 *param_2); template<class... A> int m_FUN_10f4e0d0(A...); undefined4 * __thiscall m_FUN_10f4e0e0(undefined4 param_2); template<class... A> int m_FUN_10f4e0e0(A...); undefined4 * __thiscall m_FUN_10f4e4c0(undefined4 param_2); template<class... A> int m_FUN_10f4e4c0(A...); undefined4 * __thiscall m_FUN_10f4e500(undefined4 param_2); template<class... A> int m_FUN_10f4e500(A...); int * __thiscall m_FUN_10f4eb80(int *param_2); template<class... A> int m_FUN_10f4eb80(A...); bool __thiscall m_FUN_10f4ec50(int *param_2); template<class... A> int m_FUN_10f4ec50(A...); bool __thiscall m_FUN_10f4ec70(int *param_2); template<class... A> int m_FUN_10f4ec70(A...); int * __thiscall m_FUN_10f4f3c0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10f4f3c0(A...); void __thiscall m_FUN_10f4f680(undefined4 *param_2); template<class... A> int m_FUN_10f4f680(A...); void __thiscall m_FUN_10f4f6a0(undefined4 *param_2); template<class... A> int m_FUN_10f4f6a0(A...); void __thiscall m_FUN_10f4f6b0(undefined4 *param_2); template<class... A> int m_FUN_10f4f6b0(A...); void __thiscall m_FUN_10f4f6c0(undefined4 *param_2); template<class... A> int m_FUN_10f4f6c0(A...); uint __thiscall m_FUN_10f4f820(undefined4 *param_2); template<class... A> int m_FUN_10f4f820(A...); int __thiscall m_FUN_10f51df0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10f51df0(A...); void __thiscall m_FUN_10f52810(int param_2); template<class... A> int m_FUN_10f52810(A...); void __thiscall m_FUN_10f52830(undefined4 param_2); template<class... A> int m_FUN_10f52830(A...); SCStr * __thiscall m_FUN_10f53120(SCStr *param_2); template<class... A> int m_FUN_10f53120(A...); SCStr * __thiscall m_FUN_10f531e0(SCStr *param_2); template<class... A> int m_FUN_10f531e0(A...); int * __thiscall m_FUN_10f552a0(int *param_2); template<class... A> int m_FUN_10f552a0(A...); int * __thiscall m_FUN_10f552c0(int *param_2); template<class... A> int m_FUN_10f552c0(A...); int * __thiscall m_FUN_10f552e0(int *param_2); template<class... A> int m_FUN_10f552e0(A...); int * __thiscall m_FUN_10f55300(int *param_2); template<class... A> int m_FUN_10f55300(A...); int * __thiscall m_FUN_10f55320(int *param_2); template<class... A> int m_FUN_10f55320(A...); int * __thiscall m_FUN_10f55340(int *param_2); template<class... A> int m_FUN_10f55340(A...); int * __thiscall m_FUN_10f55360(int *param_2); template<class... A> int m_FUN_10f55360(A...); int * __thiscall m_FUN_10f55380(int *param_2); template<class... A> int m_FUN_10f55380(A...); int * __thiscall m_FUN_10f553a0(int *param_2); template<class... A> int m_FUN_10f553a0(A...); int * __thiscall m_FUN_10f553c0(int *param_2); template<class... A> int m_FUN_10f553c0(A...); int * __thiscall m_FUN_10f553e0(int *param_2); template<class... A> int m_FUN_10f553e0(A...); int * __thiscall m_FUN_10f55530(int *param_2); template<class... A> int m_FUN_10f55530(A...); int * __thiscall m_FUN_10f555a0(int *param_2); template<class... A> int m_FUN_10f555a0(A...); int * __thiscall m_FUN_10f556f0(int *param_2); template<class... A> int m_FUN_10f556f0(A...); int * __thiscall m_FUN_10f55760(int *param_2); template<class... A> int m_FUN_10f55760(A...); int * __thiscall m_FUN_10f557d0(int *param_2); template<class... A> int m_FUN_10f557d0(A...); int * __thiscall m_FUN_10f55840(int *param_2); template<class... A> int m_FUN_10f55840(A...); int * __thiscall m_FUN_10f558b0(int *param_2); template<class... A> int m_FUN_10f558b0(A...); undefined4 * __thiscall m_FUN_10f562e0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10f562e0(A...); undefined4 * __thiscall m_FUN_10f56390(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10f56390(A...); int * __thiscall m_FUN_10f64be0(int *param_2); template<class... A> int m_FUN_10f64be0(A...); int * __thiscall m_FUN_10f64c00(int *param_2); template<class... A> int m_FUN_10f64c00(A...); int __thiscall m_FUN_10f64c70(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10f64c70(A...); undefined4 * __thiscall m_FUN_10f65180(undefined4 param_2); template<class... A> int m_FUN_10f65180(A...); undefined4 * __thiscall m_FUN_10f651c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10f651c0(A...); void __thiscall m_FUN_10f666e0(int param_2); template<class... A> int m_FUN_10f666e0(A...); void __thiscall m_FUN_10f66700(undefined4 param_2); template<class... A> int m_FUN_10f66700(A...); int __thiscall m_FUN_10f69100(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10f69100(A...); int __thiscall m_FUN_10f691b0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10f691b0(A...); undefined4 * __thiscall m_FUN_10f692e0(undefined4 *param_2); template<class... A> int m_FUN_10f692e0(A...); undefined4 * __thiscall m_FUN_10f6b180(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f6b180(A...); undefined4 * __thiscall m_FUN_10f6b1b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f6b1b0(A...); undefined4 * __thiscall m_FUN_10f6b2b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f6b2b0(A...); undefined4 * __thiscall m_FUN_10f6b2d0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f6b2d0(A...); undefined4 * __thiscall m_FUN_10f6b910(undefined4 *param_2); template<class... A> int m_FUN_10f6b910(A...); undefined4 * __thiscall m_FUN_10f6b960(undefined4 param_2); template<class... A> int m_FUN_10f6b960(A...); undefined4 * __thiscall m_FUN_10f6b9c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f6b9c0(A...); undefined4 * __thiscall m_FUN_10f6b9d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f6b9d0(A...); undefined4 * __thiscall m_FUN_10f6ba60(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f6ba60(A...); undefined4 * __thiscall m_FUN_10f6ba70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f6ba70(A...); int * __thiscall m_FUN_10f6c040(int *param_2); template<class... A> int m_FUN_10f6c040(A...); bool __thiscall m_FUN_10f6c0a0(int *param_2); template<class... A> int m_FUN_10f6c0a0(A...); bool __thiscall m_FUN_10f6c0c0(int *param_2); template<class... A> int m_FUN_10f6c0c0(A...); undefined4 * __thiscall m_FUN_10f6c200(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f6c200(A...); void __thiscall m_FUN_10f6cc60(undefined4 *param_2); template<class... A> int m_FUN_10f6cc60(A...); void __thiscall m_FUN_10f6d0d0(undefined4 *param_2); template<class... A> int m_FUN_10f6d0d0(A...); void __thiscall m_FUN_10f6d300(undefined4 *param_2); template<class... A> int m_FUN_10f6d300(A...); undefined4 * __thiscall m_FUN_10f6e740(int *param_2); template<class... A> int m_FUN_10f6e740(A...); void __thiscall m_FUN_10f6ee70(SCStr *param_2); template<class... A> int m_FUN_10f6ee70(A...); void __thiscall m_FUN_10f6f2d0(int *param_2); template<class... A> int m_FUN_10f6f2d0(A...); int __thiscall m_FUN_10f6f4d0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10f6f4d0(A...); undefined4 * __thiscall m_FUN_10f6fd30(undefined4 *param_2); template<class... A> int m_FUN_10f6fd30(A...); void __thiscall m_FUN_10f71550(uint param_2); template<class... A> int m_FUN_10f71550(A...); void __thiscall m_FUN_10f71a70(int param_2); template<class... A> int m_FUN_10f71a70(A...); void __thiscall m_FUN_10f71a90(int param_2); template<class... A> int m_FUN_10f71a90(A...); void __thiscall m_FUN_10f71ab0(int *param_2); template<class... A> int m_FUN_10f71ab0(A...); void __thiscall m_FUN_10f71b10(int *param_2); template<class... A> int m_FUN_10f71b10(A...); void __thiscall m_FUN_10f71b70(undefined4 param_2); template<class... A> int m_FUN_10f71b70(A...); void __thiscall m_FUN_10f71b80(undefined4 param_2); template<class... A> int m_FUN_10f71b80(A...); int * __thiscall m_FUN_10f725e0(int *param_2); template<class... A> int m_FUN_10f725e0(A...); int * __thiscall m_FUN_10f72610(int *param_2); template<class... A> int m_FUN_10f72610(A...); int * __thiscall m_FUN_10f741b0(int *param_2); template<class... A> int m_FUN_10f741b0(A...); undefined4 * __thiscall m_FUN_10f74650(int *param_2); template<class... A> int m_FUN_10f74650(A...); int __thiscall m_FUN_10f75910(int param_2,int param_3); template<class... A> int m_FUN_10f75910(A...); int __thiscall m_FUN_10f76300(int param_2,int param_3); template<class... A> int m_FUN_10f76300(A...); };

extern int FUN_10f0eec0(...);
extern int FUN_10f0eee0(...);
extern int FUN_10f0eef0(...);
extern int FUN_10f259e0(...);
extern int FUN_10f317c0(...);
extern int FUN_10f317d0(...);
extern int FUN_10f317e0(...);
extern int FUN_10f317f0(...);
extern int FUN_10f3f200(...);
extern int FUN_10f4e610(...);
extern int FUN_10f57000(...);
extern int FUN_10f57010(...);
extern int FUN_10f57020(...);
extern int FUN_10f57030(...);
extern int FUN_10f65b10(...);
extern int FUN_10f708a0(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _Thrd_hardware_concurrency(...);
extern int __alldiv(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int terminate(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012cdb0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a2e20(...);
extern int thunk_FUN_101a3700(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_101d9790(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_10280c00(...);
extern int thunk_FUN_10282450(...);
extern int thunk_FUN_103beae0(...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_105ad900(...);
template<class... A> int __stdcall thunk_FUN_107558b0(A...);
template<class... A> int __stdcall thunk_FUN_107af2b0(A...);
template<class... A> int __stdcall thunk_FUN_10a0bf70(A...);
extern int thunk_FUN_10b93810(...);
extern int thunk_FUN_10cf34e0(...);
extern int thunk_FUN_10ec0860(...);
template<class... A> int __stdcall thunk_FUN_10ef4470(A...);
extern int thunk_FUN_10ef55c0(...);
extern int thunk_FUN_10ef6280(...);
extern int thunk_FUN_10ef8ce0(...);
template<class... A> int __stdcall thunk_FUN_10ef8e40(A...);
extern int thunk_FUN_10f01e70(...);
extern int thunk_FUN_10f16280(...);
extern int thunk_FUN_10f16480(...);
template<class... A> int __stdcall thunk_FUN_10f17c50(A...);
extern int thunk_FUN_10f18560(...);
extern int thunk_FUN_10f19370(...);
template<class... A> int __stdcall thunk_FUN_10f23350(A...);
template<class... A> int __stdcall thunk_FUN_10f234a0(A...);
extern int thunk_FUN_10f238a0(...);
template<class... A> int __stdcall thunk_FUN_10f27b60(A...);
extern int thunk_FUN_10f4dd60(...);
extern int thunk_FUN_10f4e610(...);
extern int thunk_FUN_10f4e790(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_110bc160(...);
extern int thunk_FUN_1113eb00(...);
extern int thunk_FUN_111a2140(...);
extern int thunk_FUN_111a4bc0(...);
extern int thunk_FUN_111a74d0(...);
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
extern int thunk_FUN_11261760(...);
extern int thunk_FUN_11261e50(...);
template<class... A> int __stdcall thunk_FUN_11287e20(A...);
template<class... A> int __stdcall thunk_FUN_11287e50(A...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145afb0(...);
extern int thunk_FUN_1145c250(...);
extern int thunk_FUN_1145c460(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_1187b694;
extern int DAT_11880fb0;
extern int DAT_11889d24;
extern int DAT_1191ac08;
extern int DAT_1194d580;
extern int DAT_11d330dc;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RInitiateDiagnosticsRequest;
extern int ghidra_vftable_RNSSendBeginSetupOp;
extern int ghidra_vftable_RReportDiagnosticsStatusRequest;
extern int ghidra_vftable_RServiceAuthHeaderBuilderFactory;
extern int ghidra_vftable_RSubmitDiagnosticsAIOOp;
extern int ghidra_vftable_RTempDisableNetworkRequest;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp;
extern int ghidra_vftable_RUpnpDPAddBondedZonesAIOOp;
extern int ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp;
extern int ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp;
extern int ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp;
extern int ghidra_vftable_RefCountBase;
extern int ghidra_vftable_SCBitmapResizer;
extern int ghidra_vftable_SCIArea;
extern int ghidra_vftable_SCIDeviceVolume;
extern int ghidra_vftable_SCIGroupVolume;
extern int ghidra_vftable_SCINowPlaying;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpContentDirectoryGetAlbumArtistDisplayOption;
extern int ghidra_vftable_SCIOpHTControlGetIRRepeaterState;
extern int ghidra_vftable_SCIOpHTControlSetIRRepeaterState;
extern int ghidra_vftable_SCIOpHTControlSetLEDFeedbackState;
extern int ghidra_vftable_SCIOpJoinHousehold;
extern int ghidra_vftable_SCIOpRenderingControlGetRoomCalibrationStatus;
extern int ghidra_vftable_SCIOpSubmitDiagnostics;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCIPlayQueue;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCImprovedBitmapEnlarger;
extern int ghidra_vftable_SCOpBonding;
extern int ghidra_vftable_SCOpContentDirectoryGetAlbumArtistDisplayOption;
extern int ghidra_vftable_SCOpControllerOnlySubmitDirectDiagnostics;
extern int ghidra_vftable_SCOpGetEthernetStatus;
extern int ghidra_vftable_SCOpGetNetworkConnectivityTestResult;
extern int ghidra_vftable_SCOpHTControlGetIRRepeaterState;
extern int ghidra_vftable_SCOpHTControlSetIRRepeaterState;
extern int ghidra_vftable_SCOpHTControlSetLEDFeedbackState;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpMuseGetUserSettings;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpRenderingControlGetRoomCalibrationStatus;
extern int ghidra_vftable_SCOpStartNetworkConnectivityTest;
extern int ghidra_vftable_SCOpSubmitDiagnostics;
extern int ghidra_vftable_SCOpSubmitDirectDiagnostics;
extern int ghidra_vftable_SCOpTempDisableNetwork;
extern int ghidra_vftable_SCOpUnbonding;
extern int ghidra_vftable_SCServiceAuthHeaderBuilderFactory;
extern int ghidra_vftable_SCSettingsReplicatorEqualizerSink;
extern int ghidra_vftable_SCSettingsReplicatorMusicLibrary_EventSink;
extern int ghidra_vftable_SCSwfListenerGroupVolume;
extern int ghidra_vftable_SCSwfObjJHHListener;
extern int ghidra_vftable_SwfObj;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_20c;
extern int uStack_21c;
extern int uStack_4;
extern int uStack_410;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11766da0[];
extern undefined1 LAB_11766dd0[];
extern undefined1 LAB_11766e00[];
extern "C" void LAB_1176757d(void);
extern "C" void LAB_117675cd(void);
extern undefined1 LAB_1176aca0[];
extern undefined1 LAB_1176cc50[];
extern undefined1 LAB_1176cc80[];
extern undefined1 LAB_1176ccb0[];
extern undefined1 LAB_1176cce0[];
extern undefined1 LAB_11772eb0[];
extern undefined1 LAB_11774740[];
extern undefined1 LAB_11774770[];
extern undefined1 LAB_117747a0[];
extern undefined1 LAB_117747d0[];
extern undefined1 LAB_117776e0[];
extern undefined1 LAB_11779b80[];
extern undefined1 LAB_117c1080[];
extern undefined1 LAB_117c174c[];
extern undefined1 LAB_117c17f0[];
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef58e0(int param_1);
template<class... A> int FUN_10ef58e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5900(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10ef5900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5910(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10ef5910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5920(undefined4 param_1);
template<class... A> int FUN_10ef5920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5930(undefined4 param_1);
template<class... A> int FUN_10ef5930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5940(undefined4 param_1);
template<class... A> int FUN_10ef5940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5950(undefined4 param_1);
template<class... A> int FUN_10ef5950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5960(undefined4 param_1);
template<class... A> int FUN_10ef5960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5970(undefined4 param_1);
template<class... A> int FUN_10ef5970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5980(undefined4 param_1);
template<class... A> int FUN_10ef5980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5990(undefined4 param_1);
template<class... A> int FUN_10ef5990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef59a0(undefined4 param_1);
template<class... A> int FUN_10ef59a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5cb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ef5cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5cc0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10ef5cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5cd0(int param_1);
template<class... A> int FUN_10ef5cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ef5d70(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef5d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10ef5da0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef5da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5dd0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10ef5dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5e00(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10ef5e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5e30(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef5e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef5e60(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10ef5e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5e90(undefined4 *param_1);
template<class... A> int FUN_10ef5e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ef5ea0(undefined4 *param_1);
template<class... A> int FUN_10ef5ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ef6210(uint param_1);
template<class... A> int FUN_10ef6210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ef6310(int *param_1);
template<class... A> int FUN_10ef6310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ef6320(int *param_1);
template<class... A> int FUN_10ef6320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef6330(undefined4 *param_1);
template<class... A> int FUN_10ef6330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ef6450(int param_1,int param_2);
template<class... A> int FUN_10ef6450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7c70(void);
template<class... A> int FUN_10ef7c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7c80(void);
template<class... A> int FUN_10ef7c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7c90(void);
template<class... A> int FUN_10ef7c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7ca0(void);
template<class... A> int FUN_10ef7ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7cb0(void);
template<class... A> int FUN_10ef7cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef7cc0(void);
template<class... A> int FUN_10ef7cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef86b0(undefined4 param_1);
template<class... A> int FUN_10ef86b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ef86c0(int *param_1);
template<class... A> int FUN_10ef86c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9840(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ef9840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef98f0(undefined4 param_1);
template<class... A> int FUN_10ef98f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10ef9900(int param_1,uint *param_2);
template<class... A> int FUN_10ef9900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9b70(undefined4 *param_1);
template<class... A> int FUN_10ef9b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9b80(undefined4 *param_1);
template<class... A> int FUN_10ef9b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9b90(undefined4 param_1);
template<class... A> int FUN_10ef9b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9ba0(undefined4 param_1);
template<class... A> int FUN_10ef9ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9bb0(undefined4 param_1);
template<class... A> int FUN_10ef9bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9bc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10ef9bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9bf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10ef9bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ef9c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c40(undefined4 param_1);
template<class... A> int FUN_10ef9c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c50(undefined4 param_1);
template<class... A> int FUN_10ef9c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c60(undefined4 param_1);
template<class... A> int FUN_10ef9c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c70(undefined4 param_1);
template<class... A> int FUN_10ef9c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c80(undefined4 param_1);
template<class... A> int FUN_10ef9c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9c90(undefined4 param_1);
template<class... A> int FUN_10ef9c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9ca0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10ef9ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ef9cb0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10ef9cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9cc0(undefined4 param_1);
template<class... A> int FUN_10ef9cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9cd0(undefined4 param_1);
template<class... A> int FUN_10ef9cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ef9ce0(undefined4 param_1);
template<class... A> int FUN_10ef9ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ef9ea0(int param_1);
template<class... A> int FUN_10ef9ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10efa0e0(int *param_1);
template<class... A> int FUN_10efa0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10efa0f0(int *param_1);
template<class... A> int FUN_10efa0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10efa270(int *param_1,int *param_2);
template<class... A> int FUN_10efa270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10efa2b0(int param_1);
template<class... A> int FUN_10efa2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa2d0(undefined4 param_1);
template<class... A> int FUN_10efa2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa2e0(undefined4 param_1);
template<class... A> int FUN_10efa2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa2f0(undefined4 param_1);
template<class... A> int FUN_10efa2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa300(undefined4 param_1);
template<class... A> int FUN_10efa300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa310(undefined4 param_1);
template<class... A> int FUN_10efa310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10efa620(int *param_1);
template<class... A> int FUN_10efa620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10efa650(int param_1);
template<class... A> int FUN_10efa650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10efab60(int param_1,int param_2);
template<class... A> int FUN_10efab60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f00ab0(void);
template<class... A> int FUN_10f00ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f00ac0(void);
template<class... A> int FUN_10f00ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f00ad0(undefined4 param_1);
template<class... A> int FUN_10f00ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f010d0(int param_1);
template<class... A> int FUN_10f010d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f01540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f01540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f01560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f01560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f015c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f015c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f015e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f015e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f018d0(void);
template<class... A> int FUN_10f018d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f018f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f018f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01900(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f01900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01910(void);
template<class... A> int FUN_10f01910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01cf0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f01cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01d10(undefined4 param_1,int param_2);
template<class... A> int FUN_10f01d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f01d40(uint param_1);
template<class... A> int FUN_10f01d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01d60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f01d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01d80(undefined4 param_1);
template<class... A> int FUN_10f01d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01d90(undefined4 param_1);
template<class... A> int FUN_10f01d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01da0(undefined4 param_1);
template<class... A> int FUN_10f01da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01db0(undefined4 param_1);
template<class... A> int FUN_10f01db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f01e60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f01e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f01f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f01f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f60(undefined4 param_1);
template<class... A> int FUN_10f01f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f70(undefined4 param_1);
template<class... A> int FUN_10f01f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f80(undefined4 param_1);
template<class... A> int FUN_10f01f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01f90(undefined4 param_1);
template<class... A> int FUN_10f01f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01fa0(undefined4 param_1);
template<class... A> int FUN_10f01fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01fb0(undefined4 param_1);
template<class... A> int FUN_10f01fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01fc0(undefined4 param_1);
template<class... A> int FUN_10f01fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f01fd0(undefined4 param_1);
template<class... A> int FUN_10f01fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f020e0(undefined4 param_1);
template<class... A> int FUN_10f020e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f020f0(undefined4 param_1);
template<class... A> int FUN_10f020f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f02100(undefined4 param_1);
template<class... A> int FUN_10f02100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f02110(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f02110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f02360(undefined4 *param_1);
template<class... A> int FUN_10f02360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f02380(undefined4 param_1);
template<class... A> int FUN_10f02380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f02390(undefined4 param_1);
template<class... A> int FUN_10f02390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f023a0(undefined4 *param_1);
template<class... A> int FUN_10f023a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f02450(undefined4 *param_1);
template<class... A> int FUN_10f02450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f02e60(int param_1);
template<class... A> int FUN_10f02e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f02ea0(int param_1);
template<class... A> int FUN_10f02ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f02fd0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f02fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f02fe0(int *param_1);
template<class... A> int FUN_10f02fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f02ff0(int *param_1);
template<class... A> int FUN_10f02ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f03000(int *param_1);
template<class... A> int FUN_10f03000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f031a0(undefined4 param_1);
template<class... A> int FUN_10f031a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f03200(undefined4 *param_1);
template<class... A> int FUN_10f03200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f03250(int param_1);
template<class... A> int FUN_10f03250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f03270(int param_1);
template<class... A> int FUN_10f03270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f03290(undefined4 param_1);
template<class... A> int FUN_10f03290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032a0(undefined4 param_1);
template<class... A> int FUN_10f032a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032b0(undefined4 param_1);
template<class... A> int FUN_10f032b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032c0(undefined4 param_1);
template<class... A> int FUN_10f032c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032d0(undefined4 param_1);
template<class... A> int FUN_10f032d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f032e0(undefined4 param_1);
template<class... A> int FUN_10f032e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f038f0(int param_1);
template<class... A> int FUN_10f038f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f03a20(undefined1 *param_1);
template<class... A> int __stdcall FUN_10f03a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f03f30(uint param_1);
template<class... A> int FUN_10f03f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f03fa0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f03fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f03ff0(int param_1,int param_2);
template<class... A> int FUN_10f03ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f047f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f047f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04810(void);
template<class... A> int FUN_10f04810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04820(void);
template<class... A> int FUN_10f04820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04830(void);
template<class... A> int FUN_10f04830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04840(void);
template<class... A> int FUN_10f04840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04d20(undefined4 param_1);
template<class... A> int FUN_10f04d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f04db0(int *param_1);
template<class... A> int FUN_10f04db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f05dd0(void);
template<class... A> int FUN_10f05dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f06420(undefined4 param_1);
template<class... A> int __stdcall FUN_10f06420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f06450(undefined4 param_1);
template<class... A> int __stdcall FUN_10f06450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f06470(undefined4 param_1);
template<class... A> int __stdcall FUN_10f06470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f064a0(undefined4 param_1);
template<class... A> int __stdcall FUN_10f064a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f064c0(undefined4 param_1);
template<class... A> int __stdcall FUN_10f064c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f064f0(undefined4 param_1);
template<class... A> int __stdcall FUN_10f064f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f06540(undefined4 param_1);
template<class... A> int __stdcall FUN_10f06540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10f0b980(void);
template<class... A> int FUN_10f0b980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f0d4c0(void);
template<class... A> int FUN_10f0d4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f0d4d0(void);
template<class... A> int FUN_10f0d4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0d570(undefined4 *param_1);
template<class... A> int FUN_10f0d570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0d6c0(undefined4 *param_1);
template<class... A> int FUN_10f0d6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0d6f0(undefined4 *param_1);
template<class... A> int FUN_10f0d6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0e4a0(undefined4 *param_1);
template<class... A> int FUN_10f0e4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0e560(undefined4 *param_1);
template<class... A> int FUN_10f0e560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0e610(undefined4 *param_1);
template<class... A> int FUN_10f0e610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f0e990(undefined4 *param_1);
template<class... A> int FUN_10f0e990(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10f0eec0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f0eee0 (ram,0x101ba14a) */ void __fastcall FUN_10f0eee0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f0eef0 (ram,0x101ba14a) */ void __fastcall FUN_10f0eef0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f0fa00(void);
template<class... A> int FUN_10f0fa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f0fa10(void);
template<class... A> int FUN_10f0fa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f0fa20(void);
template<class... A> int FUN_10f0fa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f0fd90(undefined4 *param_1);
template<class... A> int FUN_10f0fd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f0fdc0(undefined4 *param_1);
template<class... A> int FUN_10f0fdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f0fdd0(undefined4 *param_1);
template<class... A> int FUN_10f0fdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f0fdf0(undefined4 *param_1);
template<class... A> int FUN_10f0fdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f0fe10(undefined4 *param_1);
template<class... A> int FUN_10f0fe10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f0fe30(char *param_1);
template<class... A> int __stdcall FUN_10f0fe30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fe60(int param_1);
template<class... A> int FUN_10f0fe60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fe70(int param_1);
template<class... A> int FUN_10f0fe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fe80(int param_1);
template<class... A> int FUN_10f0fe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fe90(int param_1);
template<class... A> int FUN_10f0fe90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f0fea0(int param_1);
template<class... A> int FUN_10f0fea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f0feb0(char *param_1);
template<class... A> int __stdcall FUN_10f0feb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f10f40(void);
template<class... A> int FUN_10f10f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11510(int param_1);
template<class... A> int FUN_10f11510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f11570(int param_1);
template<class... A> int FUN_10f11570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11590(int param_1);
template<class... A> int FUN_10f11590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f11710(int param_1);
template<class... A> int FUN_10f11710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11f10(int param_1);
template<class... A> int FUN_10f11f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11f20(int param_1);
template<class... A> int FUN_10f11f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f11f30(int param_1);
template<class... A> int FUN_10f11f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f12050(int param_1);
template<class... A> int FUN_10f12050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f12070(int param_1);
template<class... A> int FUN_10f12070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f12090(int param_1);
template<class... A> int FUN_10f12090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f120b0(int param_1);
template<class... A> int FUN_10f120b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f120d0(int param_1);
template<class... A> int FUN_10f120d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f13630(void);
template<class... A> int FUN_10f13630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f13860(undefined4 param_1);
template<class... A> int FUN_10f13860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f13ed0(undefined4 *param_1);
template<class... A> int FUN_10f13ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f141b0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10f141b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f141d0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10f141d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f15900(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f15900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f15920(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f15920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f15950(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f15950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f159c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f159c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f15c80(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f15c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f15c90(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f15c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d20(void);
template<class... A> int FUN_10f15d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d30(void);
template<class... A> int FUN_10f15d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d40(void);
template<class... A> int FUN_10f15d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f15d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15d70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f15d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f15d80(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f15d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15db0(void);
template<class... A> int FUN_10f15db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15dc0(void);
template<class... A> int FUN_10f15dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15dd0(void);
template<class... A> int FUN_10f15dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f15de0(int param_1,int param_2);
template<class... A> int FUN_10f15de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16460(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f16460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16540(undefined4 param_1);
template<class... A> int FUN_10f16540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16550(undefined4 *param_1);
template<class... A> int FUN_10f16550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16560(undefined4 *param_1);
template<class... A> int FUN_10f16560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16570(undefined4 *param_1);
template<class... A> int FUN_10f16570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f16580(int *param_1,int *param_2);
template<class... A> int FUN_10f16580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16610(undefined4 param_1);
template<class... A> int FUN_10f16610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f16620(int param_1,SCStr *param_2);
template<class... A> int FUN_10f16620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16650(void);
template<class... A> int FUN_10f16650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16660(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f16660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16880(undefined4 param_1);
template<class... A> int FUN_10f16880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16890(undefined4 param_1);
template<class... A> int FUN_10f16890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f168a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f168a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f168f0(void *param_1,int param_2);
template<class... A> int FUN_10f168f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16920(undefined4 param_1);
template<class... A> int FUN_10f16920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f16930(void *param_1,int param_2);
template<class... A> int FUN_10f16930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16960(undefined4 param_1);
template<class... A> int FUN_10f16960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16970(undefined4 param_1);
template<class... A> int FUN_10f16970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16980(undefined4 param_1);
template<class... A> int FUN_10f16980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16990(undefined4 param_1);
template<class... A> int FUN_10f16990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f169a0(undefined4 param_1);
template<class... A> int FUN_10f169a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f169b0(undefined4 param_1);
template<class... A> int FUN_10f169b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16ab0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f16ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16b90(undefined4 param_1,int *param_2);
template<class... A> int FUN_10f16b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f16bc0(undefined4 param_1,int param_2);
template<class... A> int FUN_10f16bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f16be0(int *param_1,int *param_2);
template<class... A> int FUN_10f16be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16ca0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f16ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16cc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f16cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 FUN_10f16d00(undefined8 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f16d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d30(undefined4 param_1);
template<class... A> int FUN_10f16d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d40(undefined4 param_1);
template<class... A> int FUN_10f16d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d60(undefined4 param_1);
template<class... A> int FUN_10f16d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d70(undefined4 param_1);
template<class... A> int FUN_10f16d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16d80(undefined4 param_1);
template<class... A> int FUN_10f16d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16dc0(undefined4 param_1);
template<class... A> int FUN_10f16dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16e30(undefined4 param_1);
template<class... A> int FUN_10f16e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16e40(undefined4 param_1);
template<class... A> int FUN_10f16e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f16e50(undefined4 param_1);
template<class... A> int FUN_10f16e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f16e60(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f16e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f16f00(undefined4 *param_1);
template<class... A> int FUN_10f16f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f17030(undefined4 *param_1);
template<class... A> int FUN_10f17030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f17070(undefined4 *param_1);
template<class... A> int FUN_10f17070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f17090(undefined4 param_1);
template<class... A> int FUN_10f17090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f170a0(undefined4 param_1);
template<class... A> int FUN_10f170a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f170b0(undefined4 param_1);
template<class... A> int FUN_10f170b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f17110(int param_1);
template<class... A> int FUN_10f17110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f17120(undefined4 *param_1);
template<class... A> int FUN_10f17120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f17200(undefined4 *param_1);
template<class... A> int FUN_10f17200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f175d0(int *param_1);
template<class... A> int FUN_10f175d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f17da0(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f17da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f17ee0(int *param_1);
template<class... A> int FUN_10f17ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f17f00(int *param_1);
template<class... A> int FUN_10f17f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f17f20(int *param_1);
template<class... A> int FUN_10f17f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f17f30(int *param_1);
template<class... A> int FUN_10f17f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f18310(undefined4 *param_1);
template<class... A> int FUN_10f18310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f18440(int param_1);
template<class... A> int FUN_10f18440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f18460(int param_1,int param_2);
template<class... A> int FUN_10f18460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f188c0(undefined4 param_1);
template<class... A> int FUN_10f188c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f188d0(undefined4 param_1);
template<class... A> int FUN_10f188d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f188f0(undefined4 param_1);
template<class... A> int FUN_10f188f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18900(undefined4 param_1);
template<class... A> int FUN_10f18900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18910(undefined4 param_1);
template<class... A> int FUN_10f18910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18920(undefined4 param_1);
template<class... A> int FUN_10f18920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18930(undefined4 param_1);
template<class... A> int FUN_10f18930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18940(undefined4 param_1);
template<class... A> int FUN_10f18940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18950(undefined4 param_1);
template<class... A> int FUN_10f18950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18960(undefined4 param_1);
template<class... A> int FUN_10f18960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18970(undefined4 param_1);
template<class... A> int FUN_10f18970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18980(undefined4 param_1);
template<class... A> int FUN_10f18980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18990(undefined4 param_1);
template<class... A> int FUN_10f18990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f189a0(undefined4 param_1);
template<class... A> int FUN_10f189a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f189b0(undefined4 param_1);
template<class... A> int FUN_10f189b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f189c0(undefined4 param_1);
template<class... A> int FUN_10f189c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f189d0(undefined4 param_1);
template<class... A> int FUN_10f189d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f18a00(undefined4 param_1);
template<class... A> int FUN_10f18a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f18f10(int param_1);
template<class... A> int FUN_10f18f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f18f20(int param_1);
template<class... A> int FUN_10f18f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f18f30(int param_1);
template<class... A> int FUN_10f18f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f19010(int param_1);
template<class... A> int FUN_10f19010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f19020(int param_1);
template<class... A> int FUN_10f19020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f19030(int param_1);
template<class... A> int FUN_10f19030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f19040(void);
template<class... A> int FUN_10f19040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f19050(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10f19050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f19060(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f19060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f19070(int param_1);
template<class... A> int FUN_10f19070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f19080(undefined4 *param_1);
template<class... A> int FUN_10f19080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f19550(undefined4 *param_1, undefined4 *param_2, int param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10f19550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f195a0(undefined4 *param_1,undefined4 *param_2,int param_3);
template<class... A> int FUN_10f195a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f19620(undefined4 *param_1);
template<class... A> int FUN_10f19620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __stdcall FUN_10f19630(undefined1 *param_1);
template<class... A> int __stdcall FUN_10f19630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f19640(int param_1);
template<class... A> int FUN_10f19640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f19670(uint param_1);
template<class... A> int FUN_10f19670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f196e0(uint param_1);
template<class... A> int FUN_10f196e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f19760(uint param_1);
template<class... A> int FUN_10f19760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f197e0(uint param_1);
template<class... A> int FUN_10f197e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f19c70(int *param_1);
template<class... A> int FUN_10f19c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f19cb0(int *param_1);
template<class... A> int FUN_10f19cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f19f70(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f19f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f19fc0(int param_1,int param_2);
template<class... A> int FUN_10f19fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1a010(int param_1,int param_2);
template<class... A> int FUN_10f1a010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1a060(int param_1,int param_2);
template<class... A> int FUN_10f1a060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1a0b0(int param_1,int param_2);
template<class... A> int FUN_10f1a0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1a100(int param_1);
template<class... A> int FUN_10f1a100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1a110(int param_1);
template<class... A> int FUN_10f1a110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1a5c0(int param_1);
template<class... A> int FUN_10f1a5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1a5e0(int param_1);
template<class... A> int FUN_10f1a5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1a610(int param_1);
template<class... A> int FUN_10f1a610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */void FUN_10f1a670(void);
template<class... A> int FUN_10f1a670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1a6e0(int param_1);
template<class... A> int FUN_10f1a6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a6f0(void);
template<class... A> int FUN_10f1a6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a700(void);
template<class... A> int FUN_10f1a700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a710(void);
template<class... A> int FUN_10f1a710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a720(void);
template<class... A> int FUN_10f1a720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a730(void);
template<class... A> int FUN_10f1a730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1a740(void);
template<class... A> int FUN_10f1a740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1ac00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f1ac00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1ac20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f1ac20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1ad30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f1ad30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1ad50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f1ad50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b130(void);
template<class... A> int FUN_10f1b130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b150(void);
template<class... A> int FUN_10f1b150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b170(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1b170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b180(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1b180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b190(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1b190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b1a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1b1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b1b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1b1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b1c0(void);
template<class... A> int FUN_10f1b1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b1d0(void);
template<class... A> int FUN_10f1b1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b550(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f1b550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1b570(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f1b570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1b6e0(undefined4 param_1);
template<class... A> int FUN_10f1b6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1b6f0(undefined4 param_1);
template<class... A> int FUN_10f1b6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1b700(undefined4 param_1);
template<class... A> int FUN_10f1b700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10f1b710(int param_1,uint *param_2);
template<class... A> int FUN_10f1b710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10f1b740(int param_1,uint *param_2);
template<class... A> int FUN_10f1b740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f1b770(int param_1,SCStr *param_2);
template<class... A> int FUN_10f1b770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb40(undefined4 param_1);
template<class... A> int FUN_10f1bb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb50(undefined4 param_1);
template<class... A> int FUN_10f1bb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb60(undefined4 param_1);
template<class... A> int FUN_10f1bb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb70(undefined4 param_1);
template<class... A> int FUN_10f1bb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb80(undefined4 param_1);
template<class... A> int FUN_10f1bb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bb90(undefined4 param_1);
template<class... A> int FUN_10f1bb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bba0(undefined4 param_1);
template<class... A> int FUN_10f1bba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bbb0(undefined4 param_1);
template<class... A> int FUN_10f1bbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bbc0(undefined4 param_1);
template<class... A> int FUN_10f1bbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bbd0(undefined4 param_1);
template<class... A> int FUN_10f1bbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bbe0(undefined4 param_1);
template<class... A> int FUN_10f1bbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1bbf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f1bbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1bc30(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f1bc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1bc60(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f1bc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bdc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1bdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bde0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1bde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1be00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1be20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f1be40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be60(undefined4 param_1);
template<class... A> int FUN_10f1be60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be70(undefined4 param_1);
template<class... A> int FUN_10f1be70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be80(undefined4 param_1);
template<class... A> int FUN_10f1be80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1be90(undefined4 param_1);
template<class... A> int FUN_10f1be90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bea0(undefined4 param_1);
template<class... A> int FUN_10f1bea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1beb0(undefined4 param_1);
template<class... A> int FUN_10f1beb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bec0(undefined4 param_1);
template<class... A> int FUN_10f1bec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f1bed0(undefined4 param_1);
template<class... A> int FUN_10f1bed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c140(undefined4 *param_1);
template<class... A> int FUN_10f1c140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c160(undefined4 *param_1);
template<class... A> int FUN_10f1c160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1c180(undefined4 param_1);
template<class... A> int FUN_10f1c180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1c190(undefined4 param_1);
template<class... A> int FUN_10f1c190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c1a0(undefined4 *param_1);
template<class... A> int FUN_10f1c1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c1f0(undefined4 *param_1);
template<class... A> int FUN_10f1c1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c2d0(undefined4 *param_1);
template<class... A> int FUN_10f1c2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f1c300(undefined4 *param_1);
template<class... A> int FUN_10f1c300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1c730(int param_1);
template<class... A> int FUN_10f1c730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1c750(int param_1);
template<class... A> int FUN_10f1c750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1d140(undefined4 *param_1);
template<class... A> int FUN_10f1d140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1d170(undefined4 *param_1);
template<class... A> int FUN_10f1d170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1d200(int param_1);
template<class... A> int FUN_10f1d200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1d220(int param_1);
template<class... A> int FUN_10f1d220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f1d240(int param_1);
template<class... A> int FUN_10f1d240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d260(undefined4 param_1);
template<class... A> int FUN_10f1d260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d270(undefined4 param_1);
template<class... A> int FUN_10f1d270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d280(undefined4 param_1);
template<class... A> int FUN_10f1d280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d290(undefined4 param_1);
template<class... A> int FUN_10f1d290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2a0(undefined4 param_1);
template<class... A> int FUN_10f1d2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2b0(undefined4 param_1);
template<class... A> int FUN_10f1d2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2c0(undefined4 param_1);
template<class... A> int FUN_10f1d2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2d0(undefined4 param_1);
template<class... A> int FUN_10f1d2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2e0(undefined4 param_1);
template<class... A> int FUN_10f1d2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d2f0(undefined4 param_1);
template<class... A> int FUN_10f1d2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d300(undefined4 param_1);
template<class... A> int FUN_10f1d300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d310(undefined4 param_1);
template<class... A> int FUN_10f1d310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d320(undefined4 param_1);
template<class... A> int FUN_10f1d320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d330(undefined4 param_1);
template<class... A> int FUN_10f1d330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d340(undefined4 param_1);
template<class... A> int FUN_10f1d340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d350(undefined4 param_1);
template<class... A> int FUN_10f1d350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d360(undefined4 param_1);
template<class... A> int FUN_10f1d360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d370(undefined4 param_1);
template<class... A> int FUN_10f1d370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d380(undefined4 param_1);
template<class... A> int FUN_10f1d380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d390(undefined4 param_1);
template<class... A> int FUN_10f1d390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1d3a0(undefined4 param_1);
template<class... A> int FUN_10f1d3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1dcb0(int param_1);
template<class... A> int FUN_10f1dcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1dcc0(int param_1);
template<class... A> int FUN_10f1dcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f1dcd0(int param_1);
template<class... A> int FUN_10f1dcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f1de30(uint param_1);
template<class... A> int FUN_10f1de30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f1dea0(uint param_1);
template<class... A> int FUN_10f1dea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1fb70(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f1fb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f1fbc0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f1fbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1fc10(int param_1,int param_2);
template<class... A> int FUN_10f1fc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1fc60(int param_1,int param_2);
template<class... A> int FUN_10f1fc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f1fcc0(int param_1,int param_2);
template<class... A> int FUN_10f1fcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1fd10(int param_1);
template<class... A> int FUN_10f1fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f1fd20(int param_1);
template<class... A> int FUN_10f1fd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f20a40(int param_1);
template<class... A> int FUN_10f20a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f20af0(int *param_1);
template<class... A> int FUN_10f20af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f214e0(void);
template<class... A> int FUN_10f214e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f214f0(void);
template<class... A> int FUN_10f214f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f21500(void);
template<class... A> int FUN_10f21500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f21510(void);
template<class... A> int FUN_10f21510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f21520(void);
template<class... A> int FUN_10f21520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f21530(void);
template<class... A> int FUN_10f21530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f21740(int param_1);
template<class... A> int FUN_10f21740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f217d0(int param_1);
template<class... A> int FUN_10f217d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f217e0(int param_1);
template<class... A> int FUN_10f217e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f219e0(undefined4 *param_1);
template<class... A> int FUN_10f219e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f21ef0(int param_1);
template<class... A> int FUN_10f21ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f229a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f229a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f229c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f229c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f229f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f229f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22a30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f22a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22b30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10f22b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22b50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10f22b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f22b70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f22b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f22b80(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f22b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22ba0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f22ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22ce0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f22ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22e20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f22e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f22e90(undefined4 *param_1);
template<class... A> int FUN_10f22e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f22eb0(void);
template<class... A> int FUN_10f22eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f22ec0(void);
template<class... A> int FUN_10f22ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f22ed0(void);
template<class... A> int FUN_10f22ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f231b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f231b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f231c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f231c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f232f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f232f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f23320(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f23320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23740(void);
template<class... A> int FUN_10f23740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23750(void);
template<class... A> int FUN_10f23750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23760(void);
template<class... A> int FUN_10f23760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23770(void);
template<class... A> int FUN_10f23770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23cd0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f23cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23d70(undefined4 *param_1,int *param_2);
template<class... A> int FUN_10f23d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23da0(undefined4 *param_1);
template<class... A> int FUN_10f23da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23db0(undefined4 *param_1);
template<class... A> int FUN_10f23db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23dc0(undefined4 *param_1,int *param_2);
template<class... A> int FUN_10f23dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23df0(undefined4 *param_1);
template<class... A> int FUN_10f23df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f23e00(int *param_1,int *param_2);
template<class... A> int FUN_10f23e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23e20(undefined4 param_1);
template<class... A> int FUN_10f23e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10f23e30(int param_1,uint *param_2);
template<class... A> int FUN_10f23e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23e60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f23e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f23e70(int param_1,int param_2);
template<class... A> int FUN_10f23e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f23fe0(undefined4 *param_1);
template<class... A> int FUN_10f23fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10f23ff0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f23ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24020(undefined4 param_1);
template<class... A> int FUN_10f24020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24030(undefined4 param_1);
template<class... A> int FUN_10f24030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f24040(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f24040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f24070(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f24070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f240a0(void *param_1,int param_2);
template<class... A> int FUN_10f240a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f240d0(undefined4 param_1);
template<class... A> int FUN_10f240d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f240e0(void *param_1,int param_2);
template<class... A> int FUN_10f240e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24110(undefined4 param_1);
template<class... A> int FUN_10f24110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24120(undefined4 param_1);
template<class... A> int FUN_10f24120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24130(undefined4 param_1);
template<class... A> int FUN_10f24130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24140(undefined4 param_1);
template<class... A> int FUN_10f24140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24150(undefined4 param_1);
template<class... A> int FUN_10f24150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10f24160(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f24160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f24180(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f24180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f241a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f241a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f241d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f241d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f24200(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f24200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f242a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f242a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10f243d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f243d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f24400(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f24400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24410(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f24410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24430(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f24430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24500(undefined4 param_1);
template<class... A> int FUN_10f24500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24510(undefined4 param_1);
template<class... A> int FUN_10f24510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24520(undefined4 param_1);
template<class... A> int FUN_10f24520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24530(undefined4 param_1);
template<class... A> int FUN_10f24530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24540(undefined4 param_1);
template<class... A> int FUN_10f24540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24550(undefined4 param_1);
template<class... A> int FUN_10f24550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24560(undefined4 param_1);
template<class... A> int FUN_10f24560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24570(undefined4 param_1);
template<class... A> int FUN_10f24570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24580(undefined4 param_1);
template<class... A> int FUN_10f24580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24590(undefined4 param_1);
template<class... A> int FUN_10f24590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245a0(undefined4 param_1);
template<class... A> int FUN_10f245a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245b0(undefined4 param_1);
template<class... A> int FUN_10f245b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245c0(undefined4 param_1);
template<class... A> int FUN_10f245c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245d0(undefined4 param_1);
template<class... A> int FUN_10f245d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245e0(undefined4 param_1);
template<class... A> int FUN_10f245e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f245f0(undefined4 param_1);
template<class... A> int FUN_10f245f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24600(undefined4 param_1);
template<class... A> int FUN_10f24600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f24610(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10f24610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24620(undefined4 param_1);
template<class... A> int FUN_10f24620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24630(undefined4 param_1);
template<class... A> int FUN_10f24630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24640(undefined4 param_1);
template<class... A> int FUN_10f24640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f24650(undefined4 param_1);
template<class... A> int FUN_10f24650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f24660(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f24660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f24a10(undefined4 *param_1);
template<class... A> int FUN_10f24a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f24bb0(undefined4 *param_1);
template<class... A> int FUN_10f24bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f24bd0(undefined4 *param_1);
template<class... A> int FUN_10f24bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f24bf0(undefined4 param_1);
template<class... A> int FUN_10f24bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f24c00(undefined4 param_1);
template<class... A> int FUN_10f24c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f24c10(undefined4 param_1);
template<class... A> int FUN_10f24c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f24d90(undefined4 *param_1);
template<class... A> int FUN_10f24d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f25040(undefined4 *param_1);
template<class... A> int FUN_10f25040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f259c0(undefined4 *param_1);
template<class... A> int FUN_10f259c0(A...);
/* WARNING: Removing unreachable block_10f259e0 (ram,0x101ba14a) */ void __fastcall FUN_10f259e0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f25b60(void);
template<class... A> int FUN_10f25b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f25b70(void);
template<class... A> int FUN_10f25b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f25b80(undefined4 *param_1);
template<class... A> int FUN_10f25b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f25cb0(int param_1);
template<class... A> int FUN_10f25cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f26180(undefined4 *param_1);
template<class... A> int FUN_10f26180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f26230(undefined4 *param_1);
template<class... A> int FUN_10f26230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f26250(undefined4 *param_1);
template<class... A> int FUN_10f26250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f26270(void);
template<class... A> int FUN_10f26270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10f26380(undefined4 param_1);
template<class... A> int __stdcall FUN_10f26380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f264d0(int param_1);
template<class... A> int FUN_10f264d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f264e0(int *param_1);
template<class... A> int FUN_10f264e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f264f0(int *param_1);
template<class... A> int FUN_10f264f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26520(int *param_1);
template<class... A> int FUN_10f26520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26550(int *param_1);
template<class... A> int FUN_10f26550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26560(int *param_1);
template<class... A> int FUN_10f26560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26570(int *param_1);
template<class... A> int FUN_10f26570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26580(int param_1);
template<class... A> int FUN_10f26580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f26590(int param_1);
template<class... A> int FUN_10f26590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10f26780(int *param_1,int *param_2);
template<class... A> int FUN_10f26780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f26c20(undefined4 *param_1);
template<class... A> int FUN_10f26c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f26d50(int param_1);
template<class... A> int FUN_10f26d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f26d70(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10f26d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f26d80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f26d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26d90(undefined4 param_1);
template<class... A> int FUN_10f26d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26da0(undefined4 param_1);
template<class... A> int FUN_10f26da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26db0(undefined4 param_1);
template<class... A> int FUN_10f26db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26dc0(undefined4 param_1);
template<class... A> int FUN_10f26dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26dd0(undefined4 param_1);
template<class... A> int FUN_10f26dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26de0(undefined4 param_1);
template<class... A> int FUN_10f26de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26df0(undefined4 param_1);
template<class... A> int FUN_10f26df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e00(undefined4 param_1);
template<class... A> int FUN_10f26e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e10(undefined4 param_1);
template<class... A> int FUN_10f26e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e20(undefined4 param_1);
template<class... A> int FUN_10f26e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e30(undefined4 param_1);
template<class... A> int FUN_10f26e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e50(undefined4 param_1);
template<class... A> int FUN_10f26e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e60(undefined4 param_1);
template<class... A> int FUN_10f26e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e70(undefined4 param_1);
template<class... A> int FUN_10f26e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e80(undefined4 param_1);
template<class... A> int FUN_10f26e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26e90(undefined4 param_1);
template<class... A> int FUN_10f26e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26ee0(undefined4 param_1);
template<class... A> int FUN_10f26ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f26ef0(int *param_1);
template<class... A> int FUN_10f26ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f27400(int param_1);
template<class... A> int FUN_10f27400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f27410(int param_1);
template<class... A> int FUN_10f27410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f27420(int param_1);
template<class... A> int FUN_10f27420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f27450(int param_1);
template<class... A> int FUN_10f27450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10f27480(int *param_1);
template<class... A> int FUN_10f27480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f274b0(int param_1);
template<class... A> int FUN_10f274b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f274c0(int param_1);
template<class... A> int FUN_10f274c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f274d0(int param_1);
template<class... A> int FUN_10f274d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f274e0(void);
template<class... A> int FUN_10f274e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f274f0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10f274f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f27500(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10f27500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f27510(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f27510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f27520(int param_1);
template<class... A> int FUN_10f27520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f27530(int param_1);
template<class... A> int FUN_10f27530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f27540(int param_1);
template<class... A> int FUN_10f27540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10f277c0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f277c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f277f0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10f277f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f27820(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f27820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f27a00(uint param_1);
template<class... A> int FUN_10f27a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f27a70(uint param_1);
template<class... A> int FUN_10f27a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f27af0(uint param_1);
template<class... A> int FUN_10f27af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f27e70(int *param_1);
template<class... A> int FUN_10f27e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f29b70(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f29b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f29bc0(int param_1,int param_2);
template<class... A> int FUN_10f29bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f29c10(int param_1,int param_2);
template<class... A> int FUN_10f29c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f29c70(int param_1,int param_2);
template<class... A> int FUN_10f29c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f29cc0(int param_1,int param_2);
template<class... A> int FUN_10f29cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f29d10(int param_1);
template<class... A> int FUN_10f29d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f29d60(int param_1);
template<class... A> int FUN_10f29d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f2b810(undefined4 param_1);
template<class... A> int __stdcall FUN_10f2b810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f2b820(undefined4 param_1);
template<class... A> int __stdcall FUN_10f2b820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b830(void);
template<class... A> int FUN_10f2b830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b840(void);
template<class... A> int FUN_10f2b840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b850(void);
template<class... A> int FUN_10f2b850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b860(void);
template<class... A> int FUN_10f2b860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b870(void);
template<class... A> int FUN_10f2b870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2b880(void);
template<class... A> int FUN_10f2b880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2bc70(undefined4 param_1);
template<class... A> int FUN_10f2bc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2ce10(undefined4 param_1);
template<class... A> int FUN_10f2ce10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2ce20(undefined4 param_1);
template<class... A> int FUN_10f2ce20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f2ce30(undefined4 param_1);
template<class... A> int FUN_10f2ce30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f2ce90(int param_1);
template<class... A> int FUN_10f2ce90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f2cea0(int param_1);
template<class... A> int FUN_10f2cea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f2ceb0(int *param_1);
template<class... A> int FUN_10f2ceb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f30bd0(undefined4 *param_1);
template<class... A> int FUN_10f30bd0(A...);
/* WARNING: Removing unreachable block_10f317c0 (ram,0x101ba14a) */ void __fastcall FUN_10f317c0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f317d0 (ram,0x101ba14a) */ void __fastcall FUN_10f317d0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f317e0 (ram,0x101ba14a) */ void __fastcall FUN_10f317e0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f317f0 (ram,0x101ba14a) */ void __fastcall FUN_10f317f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f327a0(undefined4 *param_1);
template<class... A> int FUN_10f327a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f327c0(undefined4 *param_1);
template<class... A> int FUN_10f327c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f327e0(undefined4 *param_1);
template<class... A> int FUN_10f327e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f32800(undefined4 *param_1);
template<class... A> int FUN_10f32800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f32820(int param_1);
template<class... A> int FUN_10f32820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f32830(int param_1);
template<class... A> int FUN_10f32830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f32840(int param_1);
template<class... A> int FUN_10f32840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f32850(int param_1);
template<class... A> int FUN_10f32850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f33ea0(int param_1);
template<class... A> int FUN_10f33ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f00(int param_1);
template<class... A> int FUN_10f33f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f10(int param_1);
template<class... A> int FUN_10f33f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f20(int param_1);
template<class... A> int FUN_10f33f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f30(int param_1);
template<class... A> int FUN_10f33f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f33f40(int param_1);
template<class... A> int FUN_10f33f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f34130(int param_1);
template<class... A> int FUN_10f34130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f34150(int param_1);
template<class... A> int FUN_10f34150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f34170(int param_1);
template<class... A> int FUN_10f34170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f34190(int param_1);
template<class... A> int FUN_10f34190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f35920(int param_1);
template<class... A> int FUN_10f35920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f35930(int param_1);
template<class... A> int FUN_10f35930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f35940(int param_1);
template<class... A> int FUN_10f35940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f35950(int param_1);
template<class... A> int FUN_10f35950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f35990(int param_1);
template<class... A> int FUN_10f35990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f365a0(int param_1);
template<class... A> int FUN_10f365a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f365b0(int param_1);
template<class... A> int FUN_10f365b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f36640(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f36640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f36680(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f36680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f366c0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f366c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f36700(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f36700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f37310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f37310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f373b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f373b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37640(void);
template<class... A> int FUN_10f37640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37660(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f37660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37670(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f37670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37680(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f37680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37690(void);
template<class... A> int FUN_10f37690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37880(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f37880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37940(undefined4 param_1);
template<class... A> int FUN_10f37940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37950(undefined4 param_1);
template<class... A> int FUN_10f37950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10f37960(int param_1,uint *param_2);
template<class... A> int FUN_10f37960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f37990(int param_1,SCStr *param_2);
template<class... A> int FUN_10f37990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c20(undefined4 param_1);
template<class... A> int FUN_10f37c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c30(undefined4 param_1);
template<class... A> int FUN_10f37c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c40(undefined4 param_1);
template<class... A> int FUN_10f37c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c50(undefined4 param_1);
template<class... A> int FUN_10f37c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c60(undefined4 param_1);
template<class... A> int FUN_10f37c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37c70(undefined4 param_1);
template<class... A> int FUN_10f37c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37c80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f37c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f37cb0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f37cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37d70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f37d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37d90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f37d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37db0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f37db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37dd0(undefined4 param_1);
template<class... A> int FUN_10f37dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37de0(undefined4 param_1);
template<class... A> int FUN_10f37de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37df0(undefined4 param_1);
template<class... A> int FUN_10f37df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37e00(undefined4 param_1);
template<class... A> int FUN_10f37e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f37e10(undefined4 param_1);
template<class... A> int FUN_10f37e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f37fa0(undefined4 *param_1);
template<class... A> int FUN_10f37fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f37fc0(undefined4 param_1);
template<class... A> int FUN_10f37fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f37fd0(undefined4 *param_1);
template<class... A> int FUN_10f37fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f38020(undefined4 *param_1);
template<class... A> int FUN_10f38020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38040(undefined4 param_1);
template<class... A> int FUN_10f38040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f38320(int param_1);
template<class... A> int FUN_10f38320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f389b0(undefined4 *param_1);
template<class... A> int FUN_10f389b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f38a20(int param_1);
template<class... A> int FUN_10f38a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f38a40(int param_1);
template<class... A> int FUN_10f38a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38a60(undefined4 param_1);
template<class... A> int FUN_10f38a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38a70(undefined4 param_1);
template<class... A> int FUN_10f38a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38a80(undefined4 param_1);
template<class... A> int FUN_10f38a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38a90(undefined4 param_1);
template<class... A> int FUN_10f38a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38aa0(undefined4 param_1);
template<class... A> int FUN_10f38aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38ab0(undefined4 param_1);
template<class... A> int FUN_10f38ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38ac0(undefined4 param_1);
template<class... A> int FUN_10f38ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38ad0(undefined4 param_1);
template<class... A> int FUN_10f38ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38ae0(undefined4 param_1);
template<class... A> int FUN_10f38ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38af0(undefined4 param_1);
template<class... A> int FUN_10f38af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38b00(undefined4 param_1);
template<class... A> int FUN_10f38b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38b10(undefined4 param_1);
template<class... A> int FUN_10f38b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f38b20(undefined4 param_1);
template<class... A> int FUN_10f38b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f39130(int param_1);
template<class... A> int FUN_10f39130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f39140(int param_1);
template<class... A> int FUN_10f39140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f39230(uint param_1);
template<class... A> int FUN_10f39230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f39c00(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f39c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f39c50(int param_1,int param_2);
template<class... A> int FUN_10f39c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f39cb0(int param_1,int param_2);
template<class... A> int FUN_10f39cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f39d00(int param_1);
template<class... A> int FUN_10f39d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f3bd30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f3bd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f3be00(int param_1);
template<class... A> int FUN_10f3be00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f3c750(void);
template<class... A> int FUN_10f3c750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f3c760(void);
template<class... A> int FUN_10f3c760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f3c770(void);
template<class... A> int FUN_10f3c770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f3c780(void);
template<class... A> int FUN_10f3c780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f3c990(int param_1);
template<class... A> int FUN_10f3c990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f3ca20(int param_1);
template<class... A> int FUN_10f3ca20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f3ca30(undefined4 *param_1);
template<class... A> int FUN_10f3ca30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f3ca60(undefined4 *param_1);
template<class... A> int FUN_10f3ca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f3ce10(undefined4 *param_1);
template<class... A> int FUN_10f3ce10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f3ce40(undefined4 *param_1);
template<class... A> int FUN_10f3ce40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f3f0e0(undefined4 *param_1);
template<class... A> int FUN_10f3f0e0(A...);
/* WARNING: Removing unreachable block_10f3f200 (ram,0x101ba14a) */ void __fastcall FUN_10f3f200(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f40170(undefined4 param_1);
template<class... A> int FUN_10f40170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10f40570(void);
template<class... A> int FUN_10f40570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f40580(void);
template<class... A> int FUN_10f40580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f40de0(void);
template<class... A> int FUN_10f40de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f40df0(void);
template<class... A> int FUN_10f40df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40e00(undefined4 *param_1);
template<class... A> int FUN_10f40e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40e20(undefined4 *param_1);
template<class... A> int FUN_10f40e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40ed0(undefined4 *param_1);
template<class... A> int FUN_10f40ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40ef0(undefined4 *param_1);
template<class... A> int FUN_10f40ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40f10(undefined4 *param_1);
template<class... A> int FUN_10f40f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40f30(undefined4 *param_1);
template<class... A> int FUN_10f40f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f40fd0(undefined4 *param_1);
template<class... A> int FUN_10f40fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f41270(undefined4 *param_1);
template<class... A> int FUN_10f41270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f41290(undefined4 *param_1);
template<class... A> int FUN_10f41290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f41610(undefined4 *param_1);
template<class... A> int FUN_10f41610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f419c0(undefined4 *param_1);
template<class... A> int FUN_10f419c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f419d0(undefined4 *param_1);
template<class... A> int FUN_10f419d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f419e0(undefined4 *param_1);
template<class... A> int FUN_10f419e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f419f0(undefined4 *param_1);
template<class... A> int FUN_10f419f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f41a00(int *param_1);
template<class... A> int FUN_10f41a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f41a10(undefined4 *param_1);
template<class... A> int FUN_10f41a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f41b70(void);
template<class... A> int FUN_10f41b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f41b80(int param_1);
template<class... A> int FUN_10f41b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42040(undefined4 *param_1);
template<class... A> int FUN_10f42040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42060(undefined4 *param_1);
template<class... A> int FUN_10f42060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42070(undefined4 *param_1);
template<class... A> int FUN_10f42070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42080(undefined4 *param_1);
template<class... A> int FUN_10f42080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42090(undefined4 *param_1);
template<class... A> int FUN_10f42090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f428a0(int param_1);
template<class... A> int FUN_10f428a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f428b0(void);
template<class... A> int FUN_10f428b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f428c0(void);
template<class... A> int FUN_10f428c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d10(int *param_1);
template<class... A> int FUN_10f42d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d20(int *param_1);
template<class... A> int FUN_10f42d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d30(int *param_1);
template<class... A> int FUN_10f42d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d40(int *param_1);
template<class... A> int FUN_10f42d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d50(int *param_1);
template<class... A> int FUN_10f42d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d60(int *param_1);
template<class... A> int FUN_10f42d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d70(int *param_1);
template<class... A> int FUN_10f42d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d80(int *param_1);
template<class... A> int FUN_10f42d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f42d90(int *param_1);
template<class... A> int FUN_10f42d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e00(undefined4 *param_1);
template<class... A> int FUN_10f42e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e10(undefined4 *param_1);
template<class... A> int FUN_10f42e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e20(undefined4 *param_1);
template<class... A> int FUN_10f42e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e30(undefined4 *param_1);
template<class... A> int FUN_10f42e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f42e40(undefined4 *param_1);
template<class... A> int FUN_10f42e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f435d0(undefined4 *param_1);
template<class... A> int FUN_10f435d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f43600(undefined4 *param_1);
template<class... A> int FUN_10f43600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f43630(undefined4 *param_1);
template<class... A> int FUN_10f43630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f43660(undefined4 *param_1);
template<class... A> int FUN_10f43660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f43c30(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10f43c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f43c70(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10f43c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f43cb0(undefined4 *param_1);
template<class... A> int FUN_10f43cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f43d60(undefined4 *param_1);
template<class... A> int FUN_10f43d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f43dc0(undefined4 *param_1);
template<class... A> int FUN_10f43dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f43e80(undefined4 *param_1);
template<class... A> int FUN_10f43e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f44640(undefined4 *param_1);
template<class... A> int FUN_10f44640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f44660(undefined4 *param_1);
template<class... A> int FUN_10f44660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f44990(undefined4 *param_1);
template<class... A> int FUN_10f44990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f44e60(undefined4 *param_1);
template<class... A> int FUN_10f44e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f44e70(int *param_1);
template<class... A> int FUN_10f44e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f44e80(undefined4 *param_1);
template<class... A> int FUN_10f44e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f44e90(undefined4 *param_1);
template<class... A> int FUN_10f44e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f44ea0(undefined4 *param_1);
template<class... A> int FUN_10f44ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45850(undefined4 *param_1);
template<class... A> int FUN_10f45850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45870(undefined4 *param_1);
template<class... A> int FUN_10f45870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45890(undefined4 *param_1);
template<class... A> int FUN_10f45890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f458a0(undefined4 *param_1);
template<class... A> int FUN_10f458a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f45de0(int param_1);
template<class... A> int FUN_10f45de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f45f70(int param_1);
template<class... A> int FUN_10f45f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45fe0(int param_1);
template<class... A> int FUN_10f45fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f45ff0(int param_1);
template<class... A> int FUN_10f45ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f460d0(int param_1);
template<class... A> int FUN_10f460d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f46be0(int param_1);
template<class... A> int FUN_10f46be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f46bf0(int *param_1);
template<class... A> int FUN_10f46bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f46c10(int *param_1);
template<class... A> int FUN_10f46c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f46c20(int param_1);
template<class... A> int FUN_10f46c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f46c50(int param_1);
template<class... A> int FUN_10f46c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10f46c60(int param_1);
template<class... A> int FUN_10f46c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f47890(undefined4 *param_1);
template<class... A> int FUN_10f47890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f478a0(undefined4 *param_1);
template<class... A> int FUN_10f478a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f47e70(undefined4 *param_1);
template<class... A> int FUN_10f47e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f47ea0(undefined4 *param_1);
template<class... A> int FUN_10f47ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f47ed0(undefined4 *param_1);
template<class... A> int FUN_10f47ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f47f00(undefined4 *param_1);
template<class... A> int FUN_10f47f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f47f30(undefined4 *param_1);
template<class... A> int FUN_10f47f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f47f60(int *param_1);
template<class... A> int FUN_10f47f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f48130(undefined4 *param_1);
template<class... A> int FUN_10f48130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f483d0(undefined4 *param_1);
template<class... A> int FUN_10f483d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f484b0(undefined4 *param_1);
template<class... A> int FUN_10f484b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f49340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49770(undefined4 *param_1);
template<class... A> int FUN_10f49770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49780(undefined4 param_1);
template<class... A> int FUN_10f49780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f498d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f498d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f49900(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f49900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f49930(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f49930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49a20(undefined4 param_1);
template<class... A> int FUN_10f49a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49a30(undefined4 param_1);
template<class... A> int FUN_10f49a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49a40(undefined4 param_1);
template<class... A> int FUN_10f49a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f49a50(void);
template<class... A> int FUN_10f49a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f49a60(undefined4 param_1);
template<class... A> int FUN_10f49a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49a70(undefined4 *param_1);
template<class... A> int FUN_10f49a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49aa0(undefined4 *param_1);
template<class... A> int FUN_10f49aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49c00(undefined4 *param_1);
template<class... A> int FUN_10f49c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f49c20(undefined4 param_1);
template<class... A> int FUN_10f49c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f49c30(undefined4 *param_1);
template<class... A> int FUN_10f49c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4a560(undefined4 *param_1);
template<class... A> int FUN_10f4a560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4a570(undefined4 *param_1);
template<class... A> int FUN_10f4a570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4a6b0(undefined4 *param_1);
template<class... A> int FUN_10f4a6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4a6d0(undefined4 *param_1);
template<class... A> int FUN_10f4a6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4aa20(undefined4 *param_1);
template<class... A> int FUN_10f4aa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4aa30(undefined4 *param_1);
template<class... A> int FUN_10f4aa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4aad0(undefined4 *param_1);
template<class... A> int FUN_10f4aad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ab60(undefined4 *param_1);
template<class... A> int FUN_10f4ab60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4ab70(int *param_1);
template<class... A> int FUN_10f4ab70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ab80(undefined4 *param_1);
template<class... A> int FUN_10f4ab80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ab90(undefined4 *param_1);
template<class... A> int FUN_10f4ab90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4b1a0(undefined4 param_1);
template<class... A> int FUN_10f4b1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4b1b0(undefined4 param_1);
template<class... A> int FUN_10f4b1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4b1c0(undefined4 param_1);
template<class... A> int FUN_10f4b1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4b1d0(undefined4 param_1);
template<class... A> int FUN_10f4b1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f4b1e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f4b1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4b1f0(undefined4 *param_1);
template<class... A> int FUN_10f4b1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f4b520(uint param_1);
template<class... A> int FUN_10f4b520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4b9b0(int *param_1);
template<class... A> int FUN_10f4b9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4be40(int param_1);
template<class... A> int FUN_10f4be40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4be80(int param_1);
template<class... A> int FUN_10f4be80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f4be90(int param_1);
template<class... A> int FUN_10f4be90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f4bea0(int param_1);
template<class... A> int FUN_10f4bea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4c1c0(int param_1);
template<class... A> int FUN_10f4c1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f4c220(void);
template<class... A> int FUN_10f4c220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4c810(void);
template<class... A> int FUN_10f4c810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4c820(void);
template<class... A> int FUN_10f4c820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4c960(undefined4 *param_1);
template<class... A> int FUN_10f4c960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4cfb0(undefined4 *param_1);
template<class... A> int FUN_10f4cfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4d280(int *param_1);
template<class... A> int FUN_10f4d280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4d5f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f4d5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4d610(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f4d610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4d630(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f4d630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4d670(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f4d670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4d680(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f4d680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d810(void);
template<class... A> int FUN_10f4d810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d820(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f4d820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d830(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f4d830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d840(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f4d840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d850(void);
template<class... A> int FUN_10f4d850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d860(void);
template<class... A> int FUN_10f4d860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d960(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10f4d960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d9a0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f4d9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4d9c0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f4d9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4d9e0(undefined4 *param_1);
template<class... A> int FUN_10f4d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4d9f0(undefined4 param_1);
template<class... A> int FUN_10f4d9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dc90(undefined4 param_1);
template<class... A> int FUN_10f4dc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dca0(undefined4 param_1);
template<class... A> int FUN_10f4dca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dcb0(undefined4 param_1);
template<class... A> int FUN_10f4dcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dcc0(undefined4 param_1);
template<class... A> int FUN_10f4dcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dcd0(undefined4 param_1);
template<class... A> int FUN_10f4dcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4dce0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f4dce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4dd30(undefined4 param_1,int *param_2);
template<class... A> int FUN_10f4dd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dd40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f4dd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4dde0(undefined4 param_1);
template<class... A> int FUN_10f4dde0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4ddf0(undefined4 param_1);
template<class... A> int FUN_10f4ddf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4de00(undefined4 param_1);
template<class... A> int FUN_10f4de00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4de10(undefined4 param_1);
template<class... A> int FUN_10f4de10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f4de20(undefined4 param_1);
template<class... A> int FUN_10f4de20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4de30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f4de30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4df60(undefined4 *param_1);
template<class... A> int FUN_10f4df60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4e0b0(undefined4 *param_1);
template<class... A> int FUN_10f4e0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4e100(undefined4 *param_1);
template<class... A> int FUN_10f4e100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4e120(undefined4 param_1);
template<class... A> int FUN_10f4e120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4e510(void);
template<class... A> int FUN_10f4e510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4e720(void);
template<class... A> int FUN_10f4e720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4e860(void);
template<class... A> int FUN_10f4e860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4ea60(undefined4 *param_1);
template<class... A> int FUN_10f4ea60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4ecc0(int *param_1);
template<class... A> int FUN_10f4ecc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ecd0(undefined4 *param_1);
template<class... A> int FUN_10f4ecd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4ece0(int *param_1);
template<class... A> int FUN_10f4ece0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ecf0(undefined4 *param_1);
template<class... A> int FUN_10f4ecf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4ed00(undefined4 *param_1);
template<class... A> int FUN_10f4ed00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4ed10(int *param_1);
template<class... A> int FUN_10f4ed10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f4ed20(int *param_1);
template<class... A> int FUN_10f4ed20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4ed30(undefined4 *param_1);
template<class... A> int FUN_10f4ed30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f4ed40(undefined4 *param_1);
template<class... A> int FUN_10f4ed40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10f4ed50(int *param_1);
template<class... A> int FUN_10f4ed50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4ee10(undefined4 *param_1);
template<class... A> int FUN_10f4ee10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4ef70(int param_1);
template<class... A> int FUN_10f4ef70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f4ef90(float *param_1);
template<class... A> int FUN_10f4ef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f360(undefined4 param_1);
template<class... A> int FUN_10f4f360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f370(undefined4 param_1);
template<class... A> int FUN_10f4f370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f380(undefined4 param_1);
template<class... A> int FUN_10f4f380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f390(undefined4 param_1);
template<class... A> int FUN_10f4f390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f3a0(undefined4 param_1);
template<class... A> int FUN_10f4f3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f3b0(undefined4 param_1);
template<class... A> int FUN_10f4f3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f440(undefined4 param_1);
template<class... A> int FUN_10f4f440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f450(undefined4 param_1);
template<class... A> int FUN_10f4f450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4f4d0(void);
template<class... A> int FUN_10f4f4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f590(int param_1);
template<class... A> int FUN_10f4f590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4f5a0(undefined4 *param_1);
template<class... A> int FUN_10f4f5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4f6d0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10f4f6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f4f730(uint param_1);
template<class... A> int FUN_10f4f730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f4f7b0(uint param_1);
template<class... A> int FUN_10f4f7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4f850(int param_1);
template<class... A> int FUN_10f4f850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f4f860(int param_1);
template<class... A> int FUN_10f4f860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f4f950(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f4f950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f4f9a0(int param_1,int param_2);
template<class... A> int FUN_10f4f9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f4f9f0(int param_1,int param_2);
template<class... A> int FUN_10f4f9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f4fa40(undefined4 *param_1);
template<class... A> int FUN_10f4fa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10f513c0(float *param_1);
template<class... A> int FUN_10f513c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f513d0(void);
template<class... A> int FUN_10f513d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f513e0(void);
template<class... A> int FUN_10f513e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f513f0(void);
template<class... A> int FUN_10f513f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f51400(void);
template<class... A> int FUN_10f51400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f514f0(undefined4 *param_1);
template<class... A> int FUN_10f514f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f51500(undefined4 *param_1);
template<class... A> int FUN_10f51500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f51640(undefined4 *param_1);
template<class... A> int FUN_10f51640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f51de0(int *param_1);
template<class... A> int FUN_10f51de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f51ea0(undefined4 param_1);
template<class... A> int FUN_10f51ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f51eb0(undefined4 *param_1);
template<class... A> int FUN_10f51eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f51f50(int param_1);
template<class... A> int FUN_10f51f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f51f60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f51f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f525a0(int param_1);
template<class... A> int FUN_10f525a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f527e0(int param_1);
template<class... A> int FUN_10f527e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f527f0(int param_1);
template<class... A> int FUN_10f527f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f52800(int param_1);
template<class... A> int FUN_10f52800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f53110(int param_1);
template<class... A> int FUN_10f53110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f535d0(undefined4 *param_1);
template<class... A> int FUN_10f535d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f55920(void);
template<class... A> int FUN_10f55920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f55930(void);
template<class... A> int FUN_10f55930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f55940(void);
template<class... A> int FUN_10f55940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f55950(void);
template<class... A> int FUN_10f55950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f55ba0(undefined4 *param_1);
template<class... A> int FUN_10f55ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f55bd0(undefined4 *param_1);
template<class... A> int FUN_10f55bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f55c00(undefined4 *param_1);
template<class... A> int FUN_10f55c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f55c30(undefined4 *param_1);
template<class... A> int FUN_10f55c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f56440(undefined4 *param_1);
template<class... A> int FUN_10f56440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f56450(undefined4 *param_1);
template<class... A> int FUN_10f56450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f56460(undefined4 *param_1);
template<class... A> int FUN_10f56460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f56470(undefined4 *param_1);
template<class... A> int FUN_10f56470(A...);
/* WARNING: Removing unreachable block_10f57000 (ram,0x101ba14a) */ void __fastcall FUN_10f57000(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f57010 (ram,0x101ba14a) */ void __fastcall FUN_10f57010(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f57020 (ram,0x101ba14a) */ void __fastcall FUN_10f57020(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f57030 (ram,0x101ba14a) */ void __fastcall FUN_10f57030(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f577c0(undefined4 *param_1);
template<class... A> int FUN_10f577c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f577f0(undefined4 *param_1);
template<class... A> int FUN_10f577f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57820(undefined4 *param_1);
template<class... A> int FUN_10f57820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57830(undefined4 *param_1);
template<class... A> int FUN_10f57830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57840(undefined4 *param_1);
template<class... A> int FUN_10f57840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57850(undefined4 *param_1);
template<class... A> int FUN_10f57850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57860(undefined4 *param_1);
template<class... A> int FUN_10f57860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f57880(undefined4 *param_1);
template<class... A> int FUN_10f57880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f578a0(undefined4 *param_1);
template<class... A> int FUN_10f578a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f578c0(undefined4 *param_1);
template<class... A> int FUN_10f578c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58020(int param_1);
template<class... A> int FUN_10f58020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58030(undefined4 *param_1);
template<class... A> int FUN_10f58030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58040(int *param_1);
template<class... A> int FUN_10f58040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58050(undefined4 *param_1);
template<class... A> int FUN_10f58050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58060(int *param_1);
template<class... A> int FUN_10f58060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58070(undefined4 *param_1);
template<class... A> int FUN_10f58070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58080(int *param_1);
template<class... A> int FUN_10f58080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58090(undefined4 *param_1);
template<class... A> int FUN_10f58090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f580a0(int *param_1);
template<class... A> int FUN_10f580a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f580b0(undefined4 *param_1);
template<class... A> int FUN_10f580b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f580c0(int *param_1);
template<class... A> int FUN_10f580c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f580d0(undefined4 *param_1);
template<class... A> int FUN_10f580d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f580e0(int *param_1);
template<class... A> int FUN_10f580e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f580f0(undefined4 *param_1);
template<class... A> int FUN_10f580f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58100(int *param_1);
template<class... A> int FUN_10f58100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58110(undefined4 *param_1);
template<class... A> int FUN_10f58110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58120(int *param_1);
template<class... A> int FUN_10f58120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58130(undefined4 *param_1);
template<class... A> int FUN_10f58130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58140(int *param_1);
template<class... A> int FUN_10f58140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58150(undefined4 *param_1);
template<class... A> int FUN_10f58150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58160(int *param_1);
template<class... A> int FUN_10f58160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58170(undefined4 *param_1);
template<class... A> int FUN_10f58170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58180(int *param_1);
template<class... A> int FUN_10f58180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f58190(int *param_1);
template<class... A> int FUN_10f58190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581a0(int param_1);
template<class... A> int FUN_10f581a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581b0(int param_1);
template<class... A> int FUN_10f581b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581c0(undefined4 *param_1);
template<class... A> int FUN_10f581c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581d0(undefined4 *param_1);
template<class... A> int FUN_10f581d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581e0(undefined4 *param_1);
template<class... A> int FUN_10f581e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f581f0(undefined4 *param_1);
template<class... A> int FUN_10f581f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58200(undefined4 *param_1);
template<class... A> int FUN_10f58200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58210(undefined4 *param_1);
template<class... A> int FUN_10f58210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58220(undefined4 *param_1);
template<class... A> int FUN_10f58220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58230(undefined4 *param_1);
template<class... A> int FUN_10f58230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58240(undefined4 *param_1);
template<class... A> int FUN_10f58240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58250(undefined4 *param_1);
template<class... A> int FUN_10f58250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f58260(undefined4 *param_1);
template<class... A> int FUN_10f58260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f5e690(int param_1);
template<class... A> int FUN_10f5e690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f5e800(int param_1);
template<class... A> int FUN_10f5e800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f61560(int param_1);
template<class... A> int FUN_10f61560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f61580(int param_1);
template<class... A> int FUN_10f61580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f61880(void);
template<class... A> int FUN_10f61880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f61890(void);
template<class... A> int FUN_10f61890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f618a0(void);
template<class... A> int FUN_10f618a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f618b0(void);
template<class... A> int FUN_10f618b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62040(undefined4 *param_1);
template<class... A> int FUN_10f62040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62050(undefined4 *param_1);
template<class... A> int FUN_10f62050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62060(undefined4 *param_1);
template<class... A> int FUN_10f62060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62070(undefined4 *param_1);
template<class... A> int FUN_10f62070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62080(undefined4 *param_1);
template<class... A> int FUN_10f62080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f62090(undefined4 *param_1);
template<class... A> int FUN_10f62090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620a0(undefined4 *param_1);
template<class... A> int FUN_10f620a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620b0(undefined4 *param_1);
template<class... A> int FUN_10f620b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620c0(undefined4 *param_1);
template<class... A> int FUN_10f620c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620d0(undefined4 *param_1);
template<class... A> int FUN_10f620d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f620e0(undefined4 *param_1);
template<class... A> int FUN_10f620e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f62da0(undefined4 *param_1);
template<class... A> int FUN_10f62da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f62dd0(undefined4 *param_1);
template<class... A> int FUN_10f62dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f62e00(undefined4 *param_1);
template<class... A> int FUN_10f62e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f62e30(undefined4 *param_1);
template<class... A> int FUN_10f62e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f64d20(undefined4 param_1);
template<class... A> int FUN_10f64d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f64d30(void);
template<class... A> int FUN_10f64d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f64dd0(undefined4 *param_1);
template<class... A> int FUN_10f64dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f64f60(undefined4 *param_1);
template<class... A> int FUN_10f64f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f650e0(int param_1);
template<class... A> int FUN_10f650e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f650f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f650f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f65280(undefined4 *param_1);
template<class... A> int FUN_10f65280(A...);
/* WARNING: Removing unreachable block_10f65b10 (ram,0x101ba14a) */ void __fastcall FUN_10f65b10(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f65f30(undefined4 *param_1);
template<class... A> int FUN_10f65f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f65f50(undefined4 *param_1);
template<class... A> int FUN_10f65f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f65f80(undefined4 *param_1);
template<class... A> int FUN_10f65f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f65f90(undefined4 *param_1);
template<class... A> int FUN_10f65f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f661f0(undefined4 *param_1);
template<class... A> int FUN_10f661f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f66200(int *param_1);
template<class... A> int FUN_10f66200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f66210(int param_1);
template<class... A> int FUN_10f66210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f66220(int param_1);
template<class... A> int FUN_10f66220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f66230(int param_1);
template<class... A> int FUN_10f66230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f666b0(int param_1);
template<class... A> int FUN_10f666b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f666c0(int param_1);
template<class... A> int FUN_10f666c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f666d0(int param_1);
template<class... A> int FUN_10f666d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f66d70(undefined4 *param_1);
template<class... A> int FUN_10f66d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f66f40(int param_1);
template<class... A> int FUN_10f66f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f675b0(int param_1);
template<class... A> int FUN_10f675b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f676d0(void);
template<class... A> int FUN_10f676d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f678e0(undefined4 *param_1);
template<class... A> int FUN_10f678e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f68420(undefined4 *param_1);
template<class... A> int FUN_10f68420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f68450(undefined4 *param_1);
template<class... A> int FUN_10f68450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f68480(undefined4 *param_1);
template<class... A> int FUN_10f68480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f69c80(undefined4 *param_1);
template<class... A> int FUN_10f69c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f69ca0(undefined4 *param_1);
template<class... A> int FUN_10f69ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f6a920(undefined4 *param_1);
template<class... A> int FUN_10f6a920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6b160(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f6b160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6b1d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f6b1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b300(void);
template<class... A> int FUN_10f6b300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b320(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f6b320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b330(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f6b330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b340(void);
template<class... A> int FUN_10f6b340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b4f0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f6b4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b590(undefined4 param_1);
template<class... A> int FUN_10f6b590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10f6b5a0(int param_1,uint *param_2);
template<class... A> int FUN_10f6b5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b6f0(undefined4 param_1);
template<class... A> int FUN_10f6b6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b700(undefined4 param_1);
template<class... A> int FUN_10f6b700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b710(undefined4 param_1);
template<class... A> int FUN_10f6b710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b720(undefined4 param_1);
template<class... A> int FUN_10f6b720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b730(undefined4 param_1);
template<class... A> int FUN_10f6b730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b740(undefined4 param_1);
template<class... A> int FUN_10f6b740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6b750(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f6b750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b8a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f6b8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b8c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f6b8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b8e0(undefined4 param_1);
template<class... A> int FUN_10f6b8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b8f0(undefined4 param_1);
template<class... A> int FUN_10f6b8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6b900(undefined4 param_1);
template<class... A> int FUN_10f6b900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6b940(undefined4 *param_1);
template<class... A> int FUN_10f6b940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6ba80(undefined4 *param_1);
template<class... A> int FUN_10f6ba80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6baa0(undefined4 param_1);
template<class... A> int FUN_10f6baa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6bab0(undefined4 *param_1);
template<class... A> int FUN_10f6bab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f6bd70(int param_1);
template<class... A> int FUN_10f6bd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c1d0(undefined4 *param_1);
template<class... A> int FUN_10f6c1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6c1e0(int *param_1);
template<class... A> int FUN_10f6c1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6c1f0(int *param_1);
template<class... A> int FUN_10f6c1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f6c370(undefined4 *param_1);
template<class... A> int FUN_10f6c370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f6c3c0(int param_1);
template<class... A> int FUN_10f6c3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c7f0(undefined4 param_1);
template<class... A> int FUN_10f6c7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c800(undefined4 param_1);
template<class... A> int FUN_10f6c800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c810(undefined4 param_1);
template<class... A> int FUN_10f6c810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c820(undefined4 param_1);
template<class... A> int FUN_10f6c820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c830(undefined4 param_1);
template<class... A> int FUN_10f6c830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c840(undefined4 param_1);
template<class... A> int FUN_10f6c840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c850(undefined4 param_1);
template<class... A> int FUN_10f6c850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6c860(undefined4 param_1);
template<class... A> int FUN_10f6c860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f6cb70(int param_1);
template<class... A> int FUN_10f6cb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f6cbd0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10f6cbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6cbe0(int param_1);
template<class... A> int FUN_10f6cbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f6d050(uint param_1);
template<class... A> int FUN_10f6d050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6d250(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f6d250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f6d2a0(int param_1,int param_2);
template<class... A> int FUN_10f6d2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f6d810(int *param_1);
template<class... A> int FUN_10f6d810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f6d820(int *param_1);
template<class... A> int FUN_10f6d820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6d830(void);
template<class... A> int FUN_10f6d830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6d840(void);
template<class... A> int FUN_10f6d840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6d850(undefined4 param_1);
template<class... A> int FUN_10f6d850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6e500(int param_1);
template<class... A> int FUN_10f6e500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6e560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f6e560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6ee20(int param_1,undefined4 *param_2,ushort *param_3);
template<class... A> int FUN_10f6ee20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6ee90(undefined4 *param_1);
template<class... A> int FUN_10f6ee90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10f6f380(int param_1);
template<class... A> int FUN_10f6f380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f4c0(undefined4 param_1);
template<class... A> int FUN_10f6f4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f6f7c0(int param_1,int param_2);
template<class... A> int FUN_10f6f7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f7d0(undefined4 param_1);
template<class... A> int FUN_10f6f7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f7f0(undefined4 param_1);
template<class... A> int FUN_10f6f7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f800(undefined4 param_1);
template<class... A> int FUN_10f6f800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f820(undefined4 param_1);
template<class... A> int FUN_10f6f820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f830(undefined4 param_1);
template<class... A> int FUN_10f6f830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f6f990(int param_1,undefined4 *param_2,ushort *param_3);
template<class... A> int FUN_10f6f990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6f9f0(undefined4 param_1);
template<class... A> int FUN_10f6f9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f6fa00(undefined4 param_1);
template<class... A> int FUN_10f6fa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f6fc90(undefined4 *param_1);
template<class... A> int FUN_10f6fc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6fda0(undefined4 param_1);
template<class... A> int FUN_10f6fda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f6fdb0(undefined4 param_1);
template<class... A> int FUN_10f6fdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6fdc0(int param_1);
template<class... A> int FUN_10f6fdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6fdd0(int param_1);
template<class... A> int FUN_10f6fdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f6fed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f6fed0(A...);
/* WARNING: Removing unreachable block_10f708a0 (ram,0x101ba14a) */ void __fastcall FUN_10f708a0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f70ca0(int param_1);
template<class... A> int FUN_10f70ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f70f50(undefined4 *param_1);
template<class... A> int FUN_10f70f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f710f0(int *param_1);
template<class... A> int FUN_10f710f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71140(undefined4 *param_1);
template<class... A> int FUN_10f71140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f71150(int param_1);
template<class... A> int FUN_10f71150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f71160(int param_1);
template<class... A> int FUN_10f71160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71170(int param_1);
template<class... A> int FUN_10f71170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71180(undefined4 *param_1);
template<class... A> int FUN_10f71180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f71190(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f71190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f719d0(int param_1);
template<class... A> int FUN_10f719d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f719e0(int param_1);
template<class... A> int FUN_10f719e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71a10(int param_1);
template<class... A> int FUN_10f71a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f71a20(int param_1);
template<class... A> int FUN_10f71a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f71a30(int param_1);
template<class... A> int FUN_10f71a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f71a40(int param_1);
template<class... A> int FUN_10f71a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f72480(undefined4 *param_1);
template<class... A> int FUN_10f72480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f72560(int param_1);
template<class... A> int FUN_10f72560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f72580(int param_1);
template<class... A> int FUN_10f72580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f725b0(int param_1);
template<class... A> int FUN_10f725b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f725c0(int param_1);
template<class... A> int FUN_10f725c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f725d0(int param_1);
template<class... A> int FUN_10f725d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f72680(int param_1);
template<class... A> int FUN_10f72680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f73410(int *param_1);
template<class... A> int FUN_10f73410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f73630(undefined4 *param_1);
template<class... A> int FUN_10f73630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f736d0(undefined4 *param_1);
template<class... A> int FUN_10f736d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f73700(undefined4 *param_1);
template<class... A> int FUN_10f73700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f73790(void);
template<class... A> int FUN_10f73790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f741a0(undefined4 *param_1);
template<class... A> int FUN_10f741a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f749a0(undefined4 *param_1);
template<class... A> int FUN_10f749a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f74f00(undefined4 *param_1);
template<class... A> int FUN_10f74f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f75900(int param_1);
template<class... A> int FUN_10f75900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76bb0(int param_1);
template<class... A> int FUN_10f76bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76bc0(int param_1);
template<class... A> int FUN_10f76bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f76be0(int param_1);
template<class... A> int FUN_10f76be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f76bf0(int param_1);
template<class... A> int FUN_10f76bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f76d20(void);
template<class... A> int FUN_10f76d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76f90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f76f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76fa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f76fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f76fb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f76fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f77120(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f77120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f77130(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f77130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f77280(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f77280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f77290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f77290(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);
extern void __fastcall FUN_111a4f00(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);
extern void __fastcall thunk_FUN_111a4f00(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RBondingOp_;
extern int ghidra_vftable_RControlAIOOpRef_RControllerOnlySubmitDirectDiagnosticsAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RGetEthernetStatusAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RGetNetworkConnectivityTestResultAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RMuseGetUserSettingsAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RStartNetworkConnectivityTestAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSubmitDiagnosticsAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RSubmitDirectDiagnosticsAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RTempDisableNetworkAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpAsyncIOOperation_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpCDGetAlbumArtistDisplayOptionAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpHTCGetIRRepeaterStateAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpHTCSetIRRepeaterStateAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpHTCSetLEDFeedbackStateAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpRCGetRoomCalibrationStatusAIOOp_;

// Reference entry 10ef5750; body size 30 bytes.
extern int __stdcall thunk_FUN_101a2e20(int a1);
extern int __stdcall thunk_FUN_102207b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_10cf34e0(int a1);
extern int __stdcall thunk_FUN_10f16280(int a1,int a2);
extern int __stdcall thunk_FUN_10f23350(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10f234a0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_110bc160(int a1);
extern int __stdcall thunk_FUN_1113eb00(int a1);
extern int __stdcall thunk_FUN_111a4bc0(int a1,int a2);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
extern int __stdcall thunk_FUN_1124a200(int a1,int a2);
extern int __stdcall thunk_FUN_11287e20(int a1,int a2);
extern int __stdcall thunk_FUN_11287e50(int a1,int a2);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_0_3 { virtual int v(int a1,int a2,int a3); };
struct SCVtbl_1_2 { virtual void _p0(); virtual int v(int a1,int a2); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_4_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(void); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_6_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(void); };
struct SCVtbl_7_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(void); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_26_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual int v(int a1,int a2); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
int FUN_1005d201();
int FUN_10093329();
int FUN_1148a2f7();
int FUN_1005c743(void);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
template<class... A> int FUN_1005c743(A...);
#line 1 "ENTRY_10ef5750"

__declspec(naked) void FUN_10ef5750(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_10052ffe
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*4]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10ef5780; body size 49 bytes.
#line 1 "ENTRY_10ef5780"

__declspec(naked) void FUN_10ef5780(void)

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
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10ef57c0; body size 49 bytes.
#line 1 "ENTRY_10ef57c0"

__declspec(naked) void FUN_10ef57c0(void)

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
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10ef58e0; body size 14 bytes.
#line 1 "ENTRY_10ef58e0"

__declspec(naked) void FUN_10ef58e0(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10ef5900; body size 3 bytes.
#line 1 "ENTRY_10ef5900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef5900(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10ef5910; body size 3 bytes.
#line 1 "ENTRY_10ef5910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef5910(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10ef5920; body size 3 bytes.
#line 1 "ENTRY_10ef5920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef5930; body size 3 bytes.
#line 1 "ENTRY_10ef5930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef5940; body size 3 bytes.
#line 1 "ENTRY_10ef5940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef5950; body size 3 bytes.
#line 1 "ENTRY_10ef5950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef5960; body size 3 bytes.
#line 1 "ENTRY_10ef5960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef5970; body size 3 bytes.
#line 1 "ENTRY_10ef5970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef5980; body size 3 bytes.
#line 1 "ENTRY_10ef5980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef5990; body size 3 bytes.
#line 1 "ENTRY_10ef5990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef59a0; body size 3 bytes.
#line 1 "ENTRY_10ef59a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef59a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef5c40; body size 79 bytes.
#line 1 "ENTRY_10ef5c40"

__declspec(naked) void FUN_10ef5c40(void)

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




// Reference entry 10ef5cb0; body size 3 bytes.
#line 1 "ENTRY_10ef5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef5cb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ef5cc0; body size 3 bytes.
#line 1 "ENTRY_10ef5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ef5cc0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10ef5cd0; body size 11 bytes.
#line 1 "ENTRY_10ef5cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5cd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ef5ce0; body size 83 bytes.
#line 1 "ENTRY_10ef5ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ef5ce0(int *param_2)
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


// Reference entry 10ef5d50; body size 9 bytes.
#line 1 "ENTRY_10ef5d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ef5d50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef5d60; body size 9 bytes.
#line 1 "ENTRY_10ef5d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ef5d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef5d70; body size 38 bytes.
#line 1 "ENTRY_10ef5d70"

__declspec(naked) void FUN_10ef5d70(void)

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




// Reference entry 10ef5da0; body size 38 bytes.
#line 1 "ENTRY_10ef5da0"

__declspec(naked) void FUN_10ef5da0(void)

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




// Reference entry 10ef5dd0; body size 27 bytes.
#line 1 "ENTRY_10ef5dd0"

__declspec(naked) void FUN_10ef5dd0(void)

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




// Reference entry 10ef5e00; body size 27 bytes.
#line 1 "ENTRY_10ef5e00"

__declspec(naked) void FUN_10ef5e00(void)

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




// Reference entry 10ef5e30; body size 27 bytes.
#line 1 "ENTRY_10ef5e30"

__declspec(naked) void FUN_10ef5e30(void)

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




// Reference entry 10ef5e60; body size 27 bytes.
#line 1 "ENTRY_10ef5e60"

__declspec(naked) void FUN_10ef5e60(void)

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




// Reference entry 10ef5e90; body size 3 bytes.
#line 1 "ENTRY_10ef5e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5e90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef5ea0; body size 3 bytes.
#line 1 "ENTRY_10ef5ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ef5ea0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef6210; body size 87 bytes.
#line 1 "ENTRY_10ef6210"

__declspec(naked) void FUN_10ef6210(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm _emit 0x77 __asm _emit 0x47
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




// Reference entry 10ef62f0; body size 11 bytes.
#line 1 "ENTRY_10ef62f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ef62f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ef6300; body size 11 bytes.
#line 1 "ENTRY_10ef6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ef6300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ef6310; body size 9 bytes.
#line 1 "ENTRY_10ef6310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ef6310(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ef6320; body size 9 bytes.
#line 1 "ENTRY_10ef6320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ef6320(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10ef6330; body size 6 bytes.
#line 1 "ENTRY_10ef6330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef6330(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10ef6450; body size 66 bytes.
#line 1 "ENTRY_10ef6450"

__declspec(naked) void FUN_10ef6450(void)

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




// Reference entry 10ef7020; body size 12 bytes.
#line 1 "ENTRY_10ef7020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ef7020(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ef7030; body size 12 bytes.
#line 1 "ENTRY_10ef7030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ef7030(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10ef7040; body size 42 bytes.
#line 1 "ENTRY_10ef7040"

__declspec(naked) void FUN_10ef7040(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm lea edx, [edi + 4]
  __asm sub eax, edx
  __asm push eax
  __asm push edx
  __asm push edi
  __asm call LAB_1148cdf3
  __asm mov eax, dword ptr [esp + 0x18]
  __asm add esp, 0xc
  __asm add dword ptr [esi + 4], -4
  __asm mov dword ptr [eax], edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10ef7080; body size 42 bytes.
#line 1 "ENTRY_10ef7080"

__declspec(naked) void FUN_10ef7080(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm lea edx, [edi + 4]
  __asm sub eax, edx
  __asm push eax
  __asm push edx
  __asm push edi
  __asm call LAB_1148cdf3
  __asm mov eax, dword ptr [esp + 0x18]
  __asm add esp, 0xc
  __asm add dword ptr [esi + 4], -4
  __asm mov dword ptr [eax], edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10ef7940; body size 153 bytes.
#line 1 "ENTRY_10ef7940"

__declspec(naked) void FUN_10ef7940(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm push edi
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x18]
  __asm mov edi, dword ptr [esi + 0x14]
  __asm sub eax, edi
  __asm sar eax, 2
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x21
  __asm cmp edi, dword ptr [esi + 0x18]
  __asm _emit 0x74 __asm _emit 0x19
  __asm mov ecx, dword ptr [edi]
  __asm add edi, 4
  __asm push dword ptr [esi + 4]
  __asm push esi
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0x18]
  __asm call dword ptr [eax]
  __asm cmp edi, dword ptr [esi + 0x18]
  __asm _emit 0x75 __asm _emit 0xea
  __asm mov edi, dword ptr [esi + 0x14]
  __asm mov dword ptr [esi + 0x18], edi
  __asm mov ecx, dword ptr [ebx + 8]
  __asm mov eax, dword ptr [ebx + 4]
  __asm cmp eax, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm nop word ptr [eax + eax]
  __asm cmp dword ptr [eax], esi
  __asm _emit 0x74 __asm _emit 0x07
  __asm add eax, 4
  __asm cmp eax, ecx
  __asm _emit 0x75 __asm _emit 0xf5
  __asm lea edx, [eax + 4]
  __asm sub ecx, edx
  __asm push ecx
  __asm push edx
  __asm push eax
  __asm call LAB_1148cdf3
  __asm add dword ptr [ebx + 8], -4
  __asm add esp, 0xc
  __asm cmp byte ptr [esp + 0x10], 0
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov ecx, dword ptr [esi + 4]
  __asm push esi
  __asm call LAB_10027ed0
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x09
  __asm push 1
  __asm mov ecx, esi
  __asm call LAB_10037d85
  __asm mov ecx, ebx
  __asm call LAB_1001cf5d
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}




// Reference entry 10ef7c70; body size 6 bytes.
#line 1 "ENTRY_10ef7c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7c70(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ef7c80; body size 6 bytes.
#line 1 "ENTRY_10ef7c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7c80(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ef7c90; body size 6 bytes.
#line 1 "ENTRY_10ef7c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7c90(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10ef7ca0; body size 6 bytes.
#line 1 "ENTRY_10ef7ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7ca0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10ef7cb0; body size 6 bytes.
#line 1 "ENTRY_10ef7cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7cb0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ef7cc0; body size 6 bytes.
#line 1 "ENTRY_10ef7cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef7cc0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10ef8250; body size 36 bytes.
#line 1 "ENTRY_10ef8250"

__declspec(naked) void FUN_10ef8250(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10061e0f
  __asm ret 4
}




// Reference entry 10ef86b0; body size 5 bytes.
#line 1 "ENTRY_10ef86b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef86b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef86c0; body size 9 bytes.
#line 1 "ENTRY_10ef86c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ef86c0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10ef9560; body size 32 bytes.
#line 1 "ENTRY_10ef9560"

__declspec(naked) void FUN_10ef9560(void)

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




// Reference entry 10ef9590; body size 22 bytes.
#line 1 "ENTRY_10ef9590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9590(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9730; body size 32 bytes.
#line 1 "ENTRY_10ef9730"

__declspec(naked) void FUN_10ef9730(void)

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




// Reference entry 10ef9760; body size 11 bytes.
#line 1 "ENTRY_10ef9760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9760(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9770; body size 11 bytes.
#line 1 "ENTRY_10ef9770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9770(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9780; body size 22 bytes.
#line 1 "ENTRY_10ef9780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9780(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef97a0; body size 11 bytes.
#line 1 "ENTRY_10ef97a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef97a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef97b0; body size 11 bytes.
#line 1 "ENTRY_10ef97b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef97b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef97c0; body size 34 bytes.
#line 1 "ENTRY_10ef97c0"

__declspec(naked) void FUN_10ef97c0(void)

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




// Reference entry 10ef97f0; body size 34 bytes.
#line 1 "ENTRY_10ef97f0"

__declspec(naked) void FUN_10ef97f0(void)

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




// Reference entry 10ef9820; body size 11 bytes.
#line 1 "ENTRY_10ef9820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9820(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9830; body size 11 bytes.
#line 1 "ENTRY_10ef9830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9830(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9840; body size 13 bytes.
#line 1 "ENTRY_10ef9840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ef98f0; body size 5 bytes.
#line 1 "ENTRY_10ef98f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef98f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9900; body size 31 bytes.
#line 1 "ENTRY_10ef9900"

__declspec(naked) void FUN_10ef9900(void)

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




// Reference entry 10ef9b70; body size 7 bytes.
#line 1 "ENTRY_10ef9b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9b70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef9b80; body size 7 bytes.
#line 1 "ENTRY_10ef9b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9b80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ef9b90; body size 5 bytes.
#line 1 "ENTRY_10ef9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9b90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9ba0; body size 5 bytes.
#line 1 "ENTRY_10ef9ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9ba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9bb0; body size 5 bytes.
#line 1 "ENTRY_10ef9bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9bc0; body size 29 bytes.
#line 1 "ENTRY_10ef9bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9bc0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10ef9bf0; body size 29 bytes.
#line 1 "ENTRY_10ef9bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9bf0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10ef9c20; body size 15 bytes.
#line 1 "ENTRY_10ef9c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ef9c40; body size 5 bytes.
#line 1 "ENTRY_10ef9c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9c50; body size 5 bytes.
#line 1 "ENTRY_10ef9c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9c60; body size 5 bytes.
#line 1 "ENTRY_10ef9c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9c70; body size 5 bytes.
#line 1 "ENTRY_10ef9c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9c80; body size 5 bytes.
#line 1 "ENTRY_10ef9c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9c90; body size 5 bytes.
#line 1 "ENTRY_10ef9c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9ca0; body size 11 bytes.
#line 1 "ENTRY_10ef9ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9ca0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef9cb0; body size 11 bytes.
#line 1 "ENTRY_10ef9cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ef9cb0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10ef9cc0; body size 5 bytes.
#line 1 "ENTRY_10ef9cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9cd0; body size 5 bytes.
#line 1 "ENTRY_10ef9cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9ce0; body size 5 bytes.
#line 1 "ENTRY_10ef9ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ef9ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ef9cf0; body size 18 bytes.
#line 1 "ENTRY_10ef9cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9cf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9d10; body size 11 bytes.
#line 1 "ENTRY_10ef9d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9d10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9d20; body size 11 bytes.
#line 1 "ENTRY_10ef9d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9d20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9db0; body size 11 bytes.
#line 1 "ENTRY_10ef9db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9db0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9dc0; body size 13 bytes.
#line 1 "ENTRY_10ef9dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9dc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9dd0; body size 13 bytes.
#line 1 "ENTRY_10ef9dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ef9dd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ef9ea0; body size 19 bytes.
#line 1 "ENTRY_10ef9ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ef9ea0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10ef9ec0; body size 14 bytes.
#line 1 "ENTRY_10ef9ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ef9ec0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ef9ee0; body size 14 bytes.
#line 1 "ENTRY_10ef9ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ef9ee0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10efa0e0; body size 6 bytes.
#line 1 "ENTRY_10efa0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10efa0e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10efa0f0; body size 6 bytes.
#line 1 "ENTRY_10efa0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10efa0f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10efa250; body size 16 bytes.
#line 1 "ENTRY_10efa250"

__declspec(naked) void FUN_10efa250(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx]
  __asm mov dword ptr [eax], edx
  __asm add edx, 8
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}




// Reference entry 10efa270; body size 18 bytes.
#line 1 "ENTRY_10efa270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10efa270(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 10efa2b0; body size 14 bytes.
#line 1 "ENTRY_10efa2b0"

__declspec(naked) void FUN_10efa2b0(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10efa2d0; body size 3 bytes.
#line 1 "ENTRY_10efa2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10efa2e0; body size 3 bytes.
#line 1 "ENTRY_10efa2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10efa2f0; body size 3 bytes.
#line 1 "ENTRY_10efa2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa2f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10efa300; body size 3 bytes.
#line 1 "ENTRY_10efa300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10efa310; body size 3 bytes.
#line 1 "ENTRY_10efa310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10efa5b0; body size 79 bytes.
#line 1 "ENTRY_10efa5b0"

__declspec(naked) void FUN_10efa5b0(void)

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




// Reference entry 10efa620; body size 31 bytes.
#line 1 "ENTRY_10efa620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10efa620(int *param_1)

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


// Reference entry 10efa650; body size 11 bytes.
#line 1 "ENTRY_10efa650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10efa650(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10efa660; body size 83 bytes.
#line 1 "ENTRY_10efa660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10efa660(int *param_2)
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


// Reference entry 10efa900; body size 13 bytes.
#line 1 "ENTRY_10efa900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10efa900(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10efa910; body size 11 bytes.
#line 1 "ENTRY_10efa910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10efa910(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10efab60; body size 66 bytes.
#line 1 "ENTRY_10efab60"

__declspec(naked) void FUN_10efab60(void)

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




// Reference entry 10efabc0; body size 11 bytes.
#line 1 "ENTRY_10efabc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10efabc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10efabd0; body size 11 bytes.
#line 1 "ENTRY_10efabd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10efabd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10efabe0; body size 12 bytes.
#line 1 "ENTRY_10efabe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10efabe0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10f00ab0; body size 6 bytes.
#line 1 "ENTRY_10f00ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f00ab0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f00ac0; body size 6 bytes.
#line 1 "ENTRY_10f00ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f00ac0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f00ad0; body size 5 bytes.
#line 1 "ENTRY_10f00ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f00ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f010d0; body size 4 bytes.
#line 1 "ENTRY_10f010d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f010d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f01540; body size 18 bytes.
#line 1 "ENTRY_10f01540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f01540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f01560; body size 18 bytes.
#line 1 "ENTRY_10f01560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f01560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f01580; body size 22 bytes.
#line 1 "ENTRY_10f01580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f01580(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f015a0; body size 22 bytes.
#line 1 "ENTRY_10f015a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f015a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f015c0; body size 18 bytes.
#line 1 "ENTRY_10f015c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f015c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f015e0; body size 18 bytes.
#line 1 "ENTRY_10f015e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f015e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f016b0; body size 22 bytes.
#line 1 "ENTRY_10f016b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f016b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f016d0; body size 22 bytes.
#line 1 "ENTRY_10f016d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f016d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f01890; body size 22 bytes.
#line 1 "ENTRY_10f01890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f01890(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f018b0; body size 22 bytes.
#line 1 "ENTRY_10f018b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f018b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f018d0; body size 25 bytes.
#line 1 "ENTRY_10f018d0"

__declspec(naked) void FUN_10f018d0(void)

{
  __asm push 0x74
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}




// Reference entry 10f018f0; body size 13 bytes.
#line 1 "ENTRY_10f018f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f018f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f01900; body size 13 bytes.
#line 1 "ENTRY_10f01900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01900(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f01910; body size 3 bytes.
#line 1 "ENTRY_10f01910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01910(void)

{
  return;
}


// Reference entry 10f01cf0; body size 15 bytes.
#line 1 "ENTRY_10f01cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01cf0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x74);
  return;
}


// Reference entry 10f01d10; body size 31 bytes.
#line 1 "ENTRY_10f01d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01d10(undefined4 param_1,int param_2)

{
  thunk_FUN_10f01e70(param_1,param_2 + 0x10);
  thunk_FUN_1148a50e(param_2,0x74);
  return;
}


// Reference entry 10f01d40; body size 19 bytes.
#line 1 "ENTRY_10f01d40"

__declspec(naked) void FUN_10f01d40(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x234f72c
  __asm ja LAB_10070f3b
  __asm imul eax, eax, 0x74
  __asm ret
}




// Reference entry 10f01d60; body size 19 bytes.
#line 1 "ENTRY_10f01d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01d60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10f01d80; body size 5 bytes.
#line 1 "ENTRY_10f01d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01d90; body size 5 bytes.
#line 1 "ENTRY_10f01d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01da0; body size 5 bytes.
#line 1 "ENTRY_10f01da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01db0; body size 5 bytes.
#line 1 "ENTRY_10f01db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01e60; body size 13 bytes.
#line 1 "ENTRY_10f01e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f01e60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10f01f20; body size 15 bytes.
#line 1 "ENTRY_10f01f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f01f40; body size 15 bytes.
#line 1 "ENTRY_10f01f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f01f60; body size 5 bytes.
#line 1 "ENTRY_10f01f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01f70; body size 5 bytes.
#line 1 "ENTRY_10f01f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01f80; body size 5 bytes.
#line 1 "ENTRY_10f01f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01f90; body size 5 bytes.
#line 1 "ENTRY_10f01f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01fa0; body size 5 bytes.
#line 1 "ENTRY_10f01fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01fb0; body size 5 bytes.
#line 1 "ENTRY_10f01fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01fc0; body size 5 bytes.
#line 1 "ENTRY_10f01fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f01fd0; body size 5 bytes.
#line 1 "ENTRY_10f01fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f01fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f020e0; body size 5 bytes.
#line 1 "ENTRY_10f020e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f020e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f020f0; body size 5 bytes.
#line 1 "ENTRY_10f020f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f020f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f02100; body size 5 bytes.
#line 1 "ENTRY_10f02100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f02100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f02110; body size 19 bytes.
#line 1 "ENTRY_10f02110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f02110(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10f02130; body size 18 bytes.
#line 1 "ENTRY_10f02130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f02130(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f02230; body size 11 bytes.
#line 1 "ENTRY_10f02230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f02230(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f02240; body size 11 bytes.
#line 1 "ENTRY_10f02240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f02240(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f02350; body size 11 bytes.
#line 1 "ENTRY_10f02350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f02350(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f02360; body size 16 bytes.
#line 1 "ENTRY_10f02360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f02360(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f02380; body size 3 bytes.
#line 1 "ENTRY_10f02380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f02380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f02390; body size 3 bytes.
#line 1 "ENTRY_10f02390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f02390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f023a0; body size 52 bytes.
#line 1 "ENTRY_10f023a0"

__declspec(naked) void FUN_10f023a0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x74
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




// Reference entry 10f023f0; body size 76 bytes.
#line 1 "ENTRY_10f023f0"

__declspec(naked) void FUN_10f023f0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x28
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




// Reference entry 10f02450; body size 52 bytes.
#line 1 "ENTRY_10f02450"

__declspec(naked) void FUN_10f02450(void)

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




// Reference entry 10f02e60; body size 19 bytes.
#line 1 "ENTRY_10f02e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f02e60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10f02ea0; body size 19 bytes.
#line 1 "ENTRY_10f02ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f02ea0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10f02fd0; body size 12 bytes.
#line 1 "ENTRY_10f02fd0"

__declspec(naked) void FUN_10f02fd0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm sete al
  __asm ret 4
}




// Reference entry 10f02fe0; body size 6 bytes.
#line 1 "ENTRY_10f02fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f02fe0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f02ff0; body size 6 bytes.
#line 1 "ENTRY_10f02ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f02ff0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f03000; body size 6 bytes.
#line 1 "ENTRY_10f03000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f03000(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f031a0; body size 22 bytes.
#line 1 "ENTRY_10f031a0"

__declspec(naked) void FUN_10f031a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 4
  __asm _emit 0x77 __asm _emit 0x25
  __asm jmp dword ptr [eax*4 + LAB_10f031d4]
  __asm mov eax, offset LAB_1194c490
  __asm ret
}




// Reference entry 10f03200; body size 31 bytes.
#line 1 "ENTRY_10f03200"

__declspec(naked) void FUN_10f03200(void)

{
  __asm push esi
  __asm push 0x74
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




// Reference entry 10f03250; body size 14 bytes.
#line 1 "ENTRY_10f03250"

__declspec(naked) void FUN_10f03250(void)

{
  __asm cmp dword ptr [ecx + 4], 0x234f72c
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f03270; body size 14 bytes.
#line 1 "ENTRY_10f03270"

__declspec(naked) void FUN_10f03270(void)

{
  __asm cmp dword ptr [ecx + 4], 0xccccccc
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f03290; body size 5 bytes.
#line 1 "ENTRY_10f03290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f03290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f032a0; body size 3 bytes.
#line 1 "ENTRY_10f032a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f032b0; body size 3 bytes.
#line 1 "ENTRY_10f032b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f032c0; body size 3 bytes.
#line 1 "ENTRY_10f032c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f032d0; body size 3 bytes.
#line 1 "ENTRY_10f032d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f032e0; body size 3 bytes.
#line 1 "ENTRY_10f032e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f032e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f03810; body size 79 bytes.
#line 1 "ENTRY_10f03810"

__declspec(naked) void FUN_10f03810(void)

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




// Reference entry 10f03880; body size 79 bytes.
#line 1 "ENTRY_10f03880"

__declspec(naked) void FUN_10f03880(void)

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




// Reference entry 10f038f0; body size 11 bytes.
#line 1 "ENTRY_10f038f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f038f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f03900; body size 83 bytes.
#line 1 "ENTRY_10f03900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f03900(int *param_2)
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


// Reference entry 10f03970; body size 83 bytes.
#line 1 "ENTRY_10f03970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f03970(int *param_2)
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


// Reference entry 10f039e0; body size 33 bytes.
#line 1 "ENTRY_10f039e0"

__declspec(naked) void FUN_10f039e0(void)

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




// Reference entry 10f03a10; body size 13 bytes.
#line 1 "ENTRY_10f03a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f03a10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f03a20; body size 10 bytes.
#line 1 "ENTRY_10f03a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f03a20(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return;
}


// Reference entry 10f03f30; body size 87 bytes.
#line 1 "ENTRY_10f03f30"

__declspec(naked) void FUN_10f03f30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x234f72c
  __asm _emit 0x77 __asm _emit 0x47
  __asm imul eax, eax, 0x74
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




// Reference entry 10f03fa0; body size 52 bytes.
#line 1 "ENTRY_10f03fa0"

__declspec(naked) void FUN_10f03fa0(void)

{
  __asm imul ecx, dword ptr [esp + 0xc], 0x74
  __asm mov eax, dword ptr [esp + 8]
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




// Reference entry 10f03ff0; body size 55 bytes.
#line 1 "ENTRY_10f03ff0"

__declspec(naked) void FUN_10f03ff0(void)

{
  __asm imul ecx, dword ptr [esp + 8], 0x74
  __asm mov eax, dword ptr [esp + 4]
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




// Reference entry 10f047f0; body size 21 bytes.
#line 1 "ENTRY_10f047f0"

__declspec(naked) void FUN_10f047f0(void)

{
  __asm push 0
  __asm push 0x3e8
  __asm push dword ptr [esp + 0x10]
  __asm push dword ptr [esp + 0x10]
  __asm call LAB_1008abbb
  __asm ret
}




// Reference entry 10f04810; body size 6 bytes.
#line 1 "ENTRY_10f04810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04810(void)

{
  return (undefined4)(0x234f72c);
}


// Reference entry 10f04820; body size 6 bytes.
#line 1 "ENTRY_10f04820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04820(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10f04830; body size 6 bytes.
#line 1 "ENTRY_10f04830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04830(void)

{
  return (undefined4)(0x234f72c);
}


// Reference entry 10f04840; body size 6 bytes.
#line 1 "ENTRY_10f04840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04840(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10f04d20; body size 5 bytes.
#line 1 "ENTRY_10f04d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f04db0; body size 5 bytes.
#line 1 "ENTRY_10f04db0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f04db0(int *param_1)

{ __asm jmp FUN_1005d201 }


// Reference entry 10f05dd0; body size 15 bytes.
#line 1 "ENTRY_10f05dd0"

__declspec(naked) undefined4 FUN_10f05dd0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm call LAB_100911af
  __asm mov ecx, eax
  __asm jmp LAB_100491a7
}




// Reference entry 10f06420; body size 30 bytes.
#line 1 "ENTRY_10f06420"

__declspec(naked) void FUN_10f06420(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm call LAB_100911af
  __asm push dword ptr [esp + 4]
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10f06450; body size 26 bytes.
#line 1 "ENTRY_10f06450"

__declspec(naked) void FUN_10f06450(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm call LAB_100911af
  __asm push dword ptr [esp + 4]
  __asm mov ecx, eax
  __asm call LAB_100900ed
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10f06470; body size 30 bytes.
#line 1 "ENTRY_10f06470"

__declspec(naked) void FUN_10f06470(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm call LAB_100911af
  __asm push dword ptr [esp + 4]
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10f064a0; body size 26 bytes.
#line 1 "ENTRY_10f064a0"

__declspec(naked) void FUN_10f064a0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm call LAB_100911af
  __asm push dword ptr [esp + 4]
  __asm mov ecx, eax
  __asm call LAB_1007c98a
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10f064c0; body size 30 bytes.
#line 1 "ENTRY_10f064c0"

__declspec(naked) void FUN_10f064c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm call LAB_100911af
  __asm push dword ptr [esp + 4]
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10f064f0; body size 30 bytes.
#line 1 "ENTRY_10f064f0"

__declspec(naked) void FUN_10f064f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm call LAB_100911af
  __asm push dword ptr [esp + 4]
  __asm lea ecx, [eax + 0xe8]
  __asm call LAB_10090cd2
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10f06520; body size 25 bytes.
#line 1 "ENTRY_10f06520"

__declspec(naked) void FUN_10f06520(void)

{
  __asm mov ecx, dword ptr [ecx + 0x18]
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




// Reference entry 10f06540; body size 26 bytes.
#line 1 "ENTRY_10f06540"

__declspec(naked) void FUN_10f06540(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm call LAB_100911af
  __asm push dword ptr [esp + 4]
  __asm mov ecx, eax
  __asm call LAB_100181bf
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10f0b980; body size 15 bytes.
#line 1 "ENTRY_10f0b980"

__declspec(naked) undefined1 FUN_10f0b980(void)

{
  __asm mov ecx, dword ptr [ecx + 0x10]
  __asm call LAB_100911af
  __asm mov ecx, eax
  __asm jmp LAB_10087079
}




// Reference entry 10f0d4c0; body size 6 bytes.
#line 1 "ENTRY_10f0d4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f0d4c0(void)

{
  return (undefined4)(2);
}


// Reference entry 10f0d4d0; body size 6 bytes.
#line 1 "ENTRY_10f0d4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f0d4d0(void)

{
  return (char *)("SCIOpSubmitDiagnostics");
}


// Reference entry 10f0d570; body size 28 bytes.
#line 1 "ENTRY_10f0d570"

__declspec(naked) void FUN_10f0d570(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1194d58c
  __asm pop ecx
  __asm ret
}




// Reference entry 10f0d6c0; body size 28 bytes.
#line 1 "ENTRY_10f0d6c0"

__declspec(naked) void FUN_10f0d6c0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1194d104
  __asm pop ecx
  __asm ret
}




// Reference entry 10f0d6f0; body size 27 bytes.
#line 1 "ENTRY_10f0d6f0"

__declspec(naked) void FUN_10f0d6f0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1194cbec
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f0e4a0; body size 147 bytes.
#line 1 "ENTRY_10f0e4a0"

__declspec(naked) void FUN_10f0e4a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm mov esi, ecx
  __asm push offset LAB_1194d200
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1005f6c8
  __asm mov dword ptr [esi + 0x620c], LAB_1189cc1c
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x10 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x14 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x18 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0x621c], 1
  __asm mov byte ptr [esi + 0x621e], 0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x20 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_1194d1bc
  __asm mov dword ptr [esi + 0x620c], LAB_1194d1d8
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x24 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x28 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x2c __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0x30 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10f0e560; body size 137 bytes.
#line 1 "ENTRY_10f0e560"

__declspec(naked) void FUN_10f0e560(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm mov esi, ecx
  __asm push offset LAB_1188cf08
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1005f6c8
  __asm mov dword ptr [esi + 0x620c], LAB_1189cc1c
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x10 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x14 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x18 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [esi + 0x621c], 1
  __asm mov byte ptr [esi + 0x621e], 0
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x20 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_1194d510
  __asm mov dword ptr [esi + 0x620c], LAB_1194d52c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x24 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x28 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x2c __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10f0e610; body size 52 bytes.
#line 1 "ENTRY_10f0e610"

__declspec(naked) void FUN_10f0e610(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm call LAB_100386a9
  __asm mov dword ptr [esi], LAB_1194d110
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], LAB_1194d140
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 0x1c], LAB_1194d104
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10f0e8e0; body size 137 bytes.
#line 1 "ENTRY_10f0e8e0"

__declspec(naked) void FUN_10f0e8e0(void)

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
  __asm push offset LAB_1194cfa4
  __asm push offset LAB_11896904
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_1194cf14
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_1194cf5c
  __asm mov dword ptr [edi + 0x46c], LAB_1194cf98
  __asm _emit 0xc7 __asm _emit 0x87 __asm _emit 0xd0 __asm _emit 0xd7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}




// Reference entry 10f0e990; body size 9 bytes.
#line 1 "ENTRY_10f0e990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f0e990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpSubmitDiagnostics);
  return (undefined4 *)(param_1);
}


// Reference entry 10f0eec0; body size 11 bytes.
#line 1 "ENTRY_10f0eec0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f0eec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RControllerOnlySubmitDirectDiagnosticsAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f0eee0; body size 11 bytes.
#line 1 "ENTRY_10f0eee0"

/* WARNING: Removing unreachable block_10f0eee0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f0eee0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSubmitDiagnosticsAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f0eef0; body size 11 bytes.
#line 1 "ENTRY_10f0eef0"

/* WARNING: Removing unreachable block_10f0eef0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f0eef0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RSubmitDirectDiagnosticsAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f0fa00; body size 3 bytes.
#line 1 "ENTRY_10f0fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f0fa00(void)

{
  return;
}


// Reference entry 10f0fa10; body size 3 bytes.
#line 1 "ENTRY_10f0fa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f0fa10(void)

{
  return;
}


// Reference entry 10f0fa20; body size 3 bytes.
#line 1 "ENTRY_10f0fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f0fa20(void)

{
  return;
}


// Reference entry 10f0fd90; body size 28 bytes.
#line 1 "ENTRY_10f0fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f0fd90(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTSubmitDiagnosticsAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10f0fdc0; body size 7 bytes.
#line 1 "ENTRY_10f0fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f0fdc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f0fdd0; body size 18 bytes.
#line 1 "ENTRY_10f0fdd0"

__declspec(naked) void FUN_10f0fdd0(void)

{
  __asm mov dword ptr [ecx], LAB_1194ce98
  __asm mov dword ptr [ecx + 8], LAB_1194cf04
  __asm jmp LAB_10011838
}




// Reference entry 10f0fdf0; body size 18 bytes.
#line 1 "ENTRY_10f0fdf0"

__declspec(naked) void FUN_10f0fdf0(void)

{
  __asm mov dword ptr [ecx], LAB_1194ccc0
  __asm mov dword ptr [ecx + 8], LAB_1194cd20
  __asm jmp LAB_1004568d
}




// Reference entry 10f0fe10; body size 18 bytes.
#line 1 "ENTRY_10f0fe10"

__declspec(naked) void FUN_10f0fe10(void)

{
  __asm mov dword ptr [ecx], LAB_1194cdac
  __asm mov dword ptr [ecx + 8], LAB_1194ce0c
  __asm jmp LAB_1005e31d
}




// Reference entry 10f0fe30; body size 39 bytes.
#line 1 "ENTRY_10f0fe30"

__declspec(naked) void FUN_10f0fe30(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, edx
  __asm push esi
  __asm push edi
  __asm mov esi, ecx
  __asm lea edi, [eax + 1]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov cl, byte ptr [eax]
  __asm inc eax
  __asm test cl, cl
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub eax, edi
  __asm mov ecx, esi
  __asm push eax
  __asm push edx
  __asm call LAB_10037a97
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10f0fe60; body size 4 bytes.
#line 1 "ENTRY_10f0fe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fe60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0fe70; body size 4 bytes.
#line 1 "ENTRY_10f0fe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fe70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0fe80; body size 4 bytes.
#line 1 "ENTRY_10f0fe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fe80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0fe90; body size 4 bytes.
#line 1 "ENTRY_10f0fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fe90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0fea0; body size 4 bytes.
#line 1 "ENTRY_10f0fea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f0fea0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f0feb0; body size 39 bytes.
#line 1 "ENTRY_10f0feb0"

__declspec(naked) void FUN_10f0feb0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, edx
  __asm push esi
  __asm push edi
  __asm mov esi, ecx
  __asm lea edi, [eax + 1]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov cl, byte ptr [eax]
  __asm inc eax
  __asm test cl, cl
  __asm _emit 0x75 __asm _emit 0xf9
  __asm sub eax, edi
  __asm mov ecx, esi
  __asm push eax
  __asm push edx
  __asm call LAB_1002d41b
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10f10f40; body size 19 bytes.
#line 1 "ENTRY_10f10f40"

__declspec(naked) void FUN_10f10f40(void)

{
  __asm push 0x27
  __asm push offset LAB_1194d3b8
  __asm add ecx, 0x6228
  __asm call LAB_1002d41b
  __asm ret
}




// Reference entry 10f11510; body size 73 bytes.
#line 1 "ENTRY_10f11510"

__declspec(naked) void FUN_10f11510(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm lea eax, [esi + 0x28]
  __asm push eax
  __asm call LAB_1002ac39
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x2b
  __asm cmp dword ptr [esi + 0x6310], 0xc8
  __asm _emit 0x75 __asm _emit 0x1f
  __asm cmp dword ptr [esi + 0xc448], 0xc8
  __asm _emit 0x75 __asm _emit 0x13
  __asm cmp dword ptr [esi + 0x1269c], 0xc8
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, dword ptr [esp + 4]
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10f11570; body size 17 bytes.
#line 1 "ENTRY_10f11570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f11570(int param_1)

{
  if (*(int *)(param_1 + 0x20) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x20) + 0xd7d0));
  }
  return (undefined4)(0);
}


// Reference entry 10f11590; body size 64 bytes.
#line 1 "ENTRY_10f11590"

__declspec(naked) void FUN_10f11590(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm lea eax, [esp + 4]
  __asm push eax
  __asm lea eax, [esi + 0x617c]
  __asm push eax
  __asm call LAB_1002ac39
  __asm add esp, 8
  __asm test al, al
  __asm _emit 0x74 __asm _emit 0x1f
  __asm cmp dword ptr [esi + 0xc348], 0xc8
  __asm _emit 0x75 __asm _emit 0x13
  __asm cmp dword ptr [esi + 0x1259c], 0xc8
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, dword ptr [esp + 4]
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10f11710; body size 7 bytes.
#line 1 "ENTRY_10f11710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f11710(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d0));
}


// Reference entry 10f11bb0; body size 20 bytes.
#line 1 "ENTRY_10f11bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10f11bb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(param_1 + 0x39));
  return (SCStr *)(param_2);
}


// Reference entry 10f11bd0; body size 23 bytes.
#line 1 "ENTRY_10f11bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10f11bd0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(param_1 + 0x618d));
  return (SCStr *)(param_2);
}


// Reference entry 10f11c50; body size 28 bytes.
#line 1 "ENTRY_10f11c50"

__declspec(naked) void FUN_10f11c50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x613c]
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




// Reference entry 10f11f10; body size 7 bytes.
#line 1 "ENTRY_10f11f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f11f10(int param_1)

{
  return (int)(param_1 + 0x6220);
}


// Reference entry 10f11f20; body size 7 bytes.
#line 1 "ENTRY_10f11f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f11f20(int param_1)

{
  return (int)(param_1 + 0x6120);
}


// Reference entry 10f11f30; body size 7 bytes.
#line 1 "ENTRY_10f11f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f11f30(int param_1)

{
  return (int)(param_1 + 0x6220);
}


// Reference entry 10f11fb0; body size 20 bytes.
#line 1 "ENTRY_10f11fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10f11fb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(param_1 + 0x7a));
  return (SCStr *)(param_2);
}


// Reference entry 10f11fd0; body size 23 bytes.
#line 1 "ENTRY_10f11fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10f11fd0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(param_1 + 0x61ce));
  return (SCStr *)(param_2);
}


// Reference entry 10f12050; body size 17 bytes.
#line 1 "ENTRY_10f12050"

__declspec(naked) void FUN_10f12050(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6224]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f12070; body size 17 bytes.
#line 1 "ENTRY_10f12070"

__declspec(naked) void FUN_10f12070(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6138]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f12090; body size 17 bytes.
#line 1 "ENTRY_10f12090"

__declspec(naked) void FUN_10f12090(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6124]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f120b0; body size 17 bytes.
#line 1 "ENTRY_10f120b0"

__declspec(naked) void FUN_10f120b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6228]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f120d0; body size 17 bytes.
#line 1 "ENTRY_10f120d0"

__declspec(naked) void FUN_10f120d0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6224]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f12420; body size 57 bytes.
#line 1 "ENTRY_10f12420"

__declspec(naked) void FUN_10f12420(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm push offset LAB_1187b694
  __asm push offset LAB_1188c32c
  __asm call LAB_1000ccc0
  __asm mov ecx, eax
  __asm call LAB_10012553
  __asm movzx eax, ax
  __asm push eax
  __asm lea eax, [esi + 0x6124]
  __asm push offset LAB_1194d2b8
  __asm push eax
  __asm call LAB_1003a1de
  __asm add esp, 0x18
  __asm pop esi
  __asm ret 4
}




// Reference entry 10f12470; body size 258 bytes.
#line 1 "ENTRY_10f12470"

__declspec(naked) void FUN_10f12470(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x408]
  __asm sub esp, 0x408
  __asm push -1
  __asm push offset LAB_1176757d
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm push ecx
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm mov dword ptr [ebp + 0x404], eax
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [ebp + 0x410]
  __asm lea esi, [edi + 0x6224]
  __asm cmp ebx, esi
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov ecx, esi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm cmovne ecx, eax
  __asm lea eax, [edi + 0x622c]
  __asm push ecx
  __asm push offset LAB_1194d228
  __asm push eax
  __asm call LAB_1003a1de
  __asm push 2
  __asm push offset LAB_1194d240
  __asm lea eax, [ebp]
  __asm _emit 0xc7 __asm _emit 0x87 __asm _emit 0x30 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push 0x401
  __asm push eax
  __asm call LAB_10074f7d
  __asm add esp, 0x1c
  __asm lea eax, [ebp]
  __asm lea ecx, [ebp - 0x10]
  __asm push eax
  __asm call LAB_1005273e
  __asm lea esi, [edi + 0x6228]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x10]
  __asm cmp eax, esi
  __asm _emit 0x74 __asm _emit 0x13
  __asm mov ecx, esi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp - 0x10]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp - 0x10]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [ebp + 0x404]
  __asm xor ecx, ebp
  __asm call LAB_100382f3
  __asm lea esp, [ebp + 0x408]
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10f125c0; body size 380 bytes.
#line 1 "ENTRY_10f125c0"

__declspec(naked) void FUN_10f125c0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0x204]
  __asm sub esp, 0x204
  __asm push -1
  __asm push offset LAB_117675cd
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x1c
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm mov dword ptr [ebp + 0x200], eax
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, ecx
  __asm mov eax, dword ptr [ebp + 0x210]
  __asm mov ebx, dword ptr [ebp + 0x20c]
  __asm mov dword ptr [ebp - 0x18], eax
  __asm mov al, byte ptr [ebp + 0x214]
  __asm mov byte ptr [ebp - 0xd], al
  __asm call LAB_1000e23c
  __asm test eax, eax
  __asm je LAB_10f1270d
  __asm mov edx, dword ptr [eax + 0x1c]
  __asm lea ecx, [eax + 0x1c]
  __asm push 1
  __asm lea eax, [ebx + 0x7b]
  __asm push eax
  __asm call dword ptr [edx + 4]
  __asm test eax, eax
  __asm je LAB_10f1270d
  __asm mov ecx, dword ptr [eax + 0x6c]
  __asm mov esi, offset LAB_1186d2ee
  __asm movzx eax, word ptr [eax + 0x72]
  __asm test ecx, ecx
  __asm push eax
  __asm mov edx, esi
  __asm lea eax, [edi + 0x6224]
  __asm cmovne edx, ecx
  __asm push edx
  __asm push offset LAB_1194d554
  __asm push eax
  __asm call LAB_1003a1de
  __asm add esp, 0x10
  __asm lea eax, [ebp]
  __asm lea ecx, [ebp - 0x28]
  __asm push 0x200
  __asm push eax
  __asm call LAB_10061257
  __asm lea eax, [ebx + 0x19]
  __asm push eax
  __asm push offset LAB_1194d580
  __asm lea ecx, [ebp - 0x28]
  __asm call LAB_100460a1
  __asm mov ecx, dword ptr [ebp - 0x18]
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm lea ecx, [ebp - 0x28]
  __asm cmovne esi, eax
  __asm push esi
  __asm push offset LAB_1191ac08
  __asm call LAB_100460a1
  __asm cmp byte ptr [ebp - 0xd], 0
  __asm mov ecx, offset LAB_11889d1c
  __asm mov eax, offset LAB_11889d24
  __asm cmove eax, ecx
  __asm lea ecx, [ebp - 0x28]
  __asm push eax
  __asm push offset LAB_118b27c8
  __asm call LAB_100460a1
  __asm push offset LAB_11889d24
  __asm push offset LAB_11890714
  __asm lea ecx, [ebp - 0x28]
  __asm call LAB_100460a1
  __asm lea eax, [ebp]
  __asm push eax
  __asm lea ecx, [ebp - 0x14]
  __asm call LAB_1005273e
  __asm lea esi, [edi + 0x6228]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp - 0x14]
  __asm cmp eax, esi
  __asm _emit 0x74 __asm _emit 0x13
  __asm mov ecx, esi
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp - 0x14]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm lea ecx, [ebp - 0x14]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm _emit 0xc7 __asm _emit 0x87 __asm _emit 0x2c __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [ebp + 0x200]
  __asm xor ecx, ebp
  __asm call LAB_100382f3
  __asm lea esp, [ebp + 0x204]
  __asm pop ebp
  __asm ret 0xc
}




// Reference entry 10f13630; body size 6 bytes.
#line 1 "ENTRY_10f13630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f13630(void)

{
  return (char *)("SCIOpSubmitDiagnostics");
}


// Reference entry 10f13860; body size 22 bytes.
#line 1 "ENTRY_10f13860"

__declspec(naked) void FUN_10f13860(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xc
  __asm _emit 0x77 __asm _emit 0x4f
  __asm jmp dword ptr [eax*4 + LAB_10f138c0]
  __asm mov eax, offset LAB_1194cfec
  __asm ret
}




// Reference entry 10f13ed0; body size 28 bytes.
#line 1 "ENTRY_10f13ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f13ed0(undefined4 *param_1)

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


// Reference entry 10f141b0; body size 24 bytes.
#line 1 "ENTRY_10f141b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f141b0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0((int)(param_1),(int)(param_2),(int)(param_3));
  return (undefined4)(param_1);
}


// Reference entry 10f141d0; body size 24 bytes.
#line 1 "ENTRY_10f141d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f141d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0((int)(param_1),(int)(param_2),(int)(param_3));
  return (undefined4)(param_1);
}


// Reference entry 10f14300; body size 34 bytes.
#line 1 "ENTRY_10f14300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f14300(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_1145c250(param_1 + 0x7a,puVar1,0x21);
  return;
}


// Reference entry 10f15900; body size 18 bytes.
#line 1 "ENTRY_10f15900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f15900(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f15920; body size 39 bytes.
#line 1 "ENTRY_10f15920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f15920(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f15950; body size 25 bytes.
#line 1 "ENTRY_10f15950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f15950(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f15970; body size 22 bytes.
#line 1 "ENTRY_10f15970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f15970(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f159a0; body size 22 bytes.
#line 1 "ENTRY_10f159a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f159a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f159c0; body size 18 bytes.
#line 1 "ENTRY_10f159c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f159c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f15b40; body size 22 bytes.
#line 1 "ENTRY_10f15b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f15b40(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f15c80; body size 5 bytes.
#line 1 "ENTRY_10f15c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f15c80(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f15c90; body size 5 bytes.
#line 1 "ENTRY_10f15c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f15c90(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f15d20; body size 3 bytes.
#line 1 "ENTRY_10f15d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15d20(void)

{
  return;
}


// Reference entry 10f15d30; body size 3 bytes.
#line 1 "ENTRY_10f15d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15d30(void)

{
  return;
}


// Reference entry 10f15d40; body size 25 bytes.
#line 1 "ENTRY_10f15d40"

__declspec(naked) void FUN_10f15d40(void)

{
  __asm push 0x30
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}




// Reference entry 10f15d60; body size 13 bytes.
#line 1 "ENTRY_10f15d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15d60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f15d70; body size 13 bytes.
#line 1 "ENTRY_10f15d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15d70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f15d80; body size 33 bytes.
#line 1 "ENTRY_10f15d80"

__declspec(naked) void FUN_10f15d80(void)

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




// Reference entry 10f15db0; body size 3 bytes.
#line 1 "ENTRY_10f15db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15db0(void)

{
  return;
}


// Reference entry 10f15dc0; body size 3 bytes.
#line 1 "ENTRY_10f15dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15dc0(void)

{
  return;
}


// Reference entry 10f15dd0; body size 3 bytes.
#line 1 "ENTRY_10f15dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15dd0(void)

{
  return;
}


// Reference entry 10f15de0; body size 36 bytes.
#line 1 "ENTRY_10f15de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f15de0(int param_1,int param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (*(int *)(param_1 + 4) != 0) break;
    param_1 = (int)(param_1 + 8);
  }
                    
                    
                    
  terminate();
  return;
}


// Reference entry 10f15e10; body size 41 bytes.
#line 1 "ENTRY_10f15e10"

__declspec(naked) void FUN_10f15e10(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ecx + 4]
  __asm mov esi, dword ptr [eax + 4]
  __asm mov edx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edi + 4], esi
  __asm mov dword ptr [edi], edx
  __asm add dword ptr [ecx + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10f15f30; body size 41 bytes.
#line 1 "ENTRY_10f15f30"

__declspec(naked) void FUN_10f15f30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ecx + 4]
  __asm mov esi, dword ptr [eax + 4]
  __asm mov edx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edi + 4], esi
  __asm mov dword ptr [edi], edx
  __asm add dword ptr [ecx + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10f16460; body size 15 bytes.
#line 1 "ENTRY_10f16460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f16460(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 10f16540; body size 5 bytes.
#line 1 "ENTRY_10f16540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16550; body size 7 bytes.
#line 1 "ENTRY_10f16550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16550(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f16560; body size 7 bytes.
#line 1 "ENTRY_10f16560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16560(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f16570; body size 7 bytes.
#line 1 "ENTRY_10f16570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16570(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f16580; body size 16 bytes.
#line 1 "ENTRY_10f16580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f16580(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 10f16610; body size 5 bytes.
#line 1 "ENTRY_10f16610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16620; body size 37 bytes.
#line 1 "ENTRY_10f16620"

__declspec(naked) void FUN_10f16620(void)

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




// Reference entry 10f16650; body size 3 bytes.
#line 1 "ENTRY_10f16650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f16650(void)

{
  return;
}


// Reference entry 10f16660; body size 13 bytes.
#line 1 "ENTRY_10f16660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f16660(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f16880; body size 5 bytes.
#line 1 "ENTRY_10f16880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16890; body size 5 bytes.
#line 1 "ENTRY_10f16890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f168a0; body size 54 bytes.
#line 1 "ENTRY_10f168a0"

__declspec(naked) void FUN_10f168a0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp ecx, edi
  __asm _emit 0x74 __asm _emit 0x23
  __asm push esi
  __asm mov edx, dword ptr [ecx]
  __asm mov esi, dword ptr [ecx + 4]
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add ecx, 8
  __asm mov dword ptr [eax], edx
  __asm mov dword ptr [eax + 4], esi
  __asm add eax, 8
  __asm cmp ecx, edi
  __asm _emit 0x75 __asm _emit 0xdf
  __asm pop esi
  __asm pop edi
  __asm ret
}




// Reference entry 10f168f0; body size 35 bytes.
#line 1 "ENTRY_10f168f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f168f0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((char *)(param_2 * 4 + (int)param_1));
}


// Reference entry 10f16920; body size 5 bytes.
#line 1 "ENTRY_10f16920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16930; body size 27 bytes.
#line 1 "ENTRY_10f16930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f16930(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (int)(param_2);
}


// Reference entry 10f16960; body size 5 bytes.
#line 1 "ENTRY_10f16960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16970; body size 5 bytes.
#line 1 "ENTRY_10f16970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16980; body size 5 bytes.
#line 1 "ENTRY_10f16980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16990; body size 5 bytes.
#line 1 "ENTRY_10f16990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f169a0; body size 5 bytes.
#line 1 "ENTRY_10f169a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f169a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f169b0; body size 5 bytes.
#line 1 "ENTRY_10f169b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f169b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16ab0; body size 32 bytes.
#line 1 "ENTRY_10f16ab0"

__declspec(naked) void FUN_10f16ab0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [eax]
  __asm mov edx, dword ptr [eax + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [eax], ecx
  __asm mov dword ptr [eax + 4], edx
  __asm ret
}




// Reference entry 10f16b90; body size 35 bytes.
#line 1 "ENTRY_10f16b90"

__declspec(naked) void FUN_10f16b90(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10f16bc0; body size 17 bytes.
#line 1 "ENTRY_10f16bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f16bc0(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 4) != 0) {
                    
                    
                    
    terminate();
    return;
  }
  return;
}


// Reference entry 10f16be0; body size 86 bytes.
#line 1 "ENTRY_10f16be0"

__declspec(naked) void FUN_10f16be0(void)

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




// Reference entry 10f16ca0; body size 15 bytes.
#line 1 "ENTRY_10f16ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16ca0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f16cc0; body size 15 bytes.
#line 1 "ENTRY_10f16cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16cc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f16d00; body size 28 bytes.
#line 1 "ENTRY_10f16d00"

__declspec(naked) void FUN_10f16d00(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, dword ptr [ecx]
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov eax, dword ptr [edi]
  __asm mov edx, dword ptr [edi + 4]
  __asm mov dword ptr [edi], esi
  __asm mov dword ptr [edi + 4], ecx
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 10f16d30; body size 5 bytes.
#line 1 "ENTRY_10f16d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16d40; body size 5 bytes.
#line 1 "ENTRY_10f16d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16d60; body size 5 bytes.
#line 1 "ENTRY_10f16d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16d70; body size 5 bytes.
#line 1 "ENTRY_10f16d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16d80; body size 5 bytes.
#line 1 "ENTRY_10f16d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16dc0; body size 5 bytes.
#line 1 "ENTRY_10f16dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16e30; body size 5 bytes.
#line 1 "ENTRY_10f16e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16e40; body size 5 bytes.
#line 1 "ENTRY_10f16e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16e50; body size 5 bytes.
#line 1 "ENTRY_10f16e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f16e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f16e60; body size 33 bytes.
#line 1 "ENTRY_10f16e60"

__declspec(naked) void FUN_10f16e60(void)

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




// Reference entry 10f16ea0; body size 18 bytes.
#line 1 "ENTRY_10f16ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f16ea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f16ec0; body size 18 bytes.
#line 1 "ENTRY_10f16ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f16ec0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f16ee0; body size 18 bytes.
#line 1 "ENTRY_10f16ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f16ee0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f16f00; body size 37 bytes.
#line 1 "ENTRY_10f16f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f16f00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f16f70; body size 11 bytes.
#line 1 "ENTRY_10f16f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f16f70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f16f80; body size 11 bytes.
#line 1 "ENTRY_10f16f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f16f80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f17010; body size 11 bytes.
#line 1 "ENTRY_10f17010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f17010(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f17020; body size 11 bytes.
#line 1 "ENTRY_10f17020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f17020(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f17030; body size 16 bytes.
#line 1 "ENTRY_10f17030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f17030(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f17050; body size 21 bytes.
#line 1 "ENTRY_10f17050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f17050(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f17070; body size 23 bytes.
#line 1 "ENTRY_10f17070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f17070(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f17090; body size 3 bytes.
#line 1 "ENTRY_10f17090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f17090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f170a0; body size 3 bytes.
#line 1 "ENTRY_10f170a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f170a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f170b0; body size 3 bytes.
#line 1 "ENTRY_10f170b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f170b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f17110; body size 10 bytes.
#line 1 "ENTRY_10f17110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f17110(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f17120; body size 52 bytes.
#line 1 "ENTRY_10f17120"

__declspec(naked) void FUN_10f17120(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x30
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




// Reference entry 10f17200; body size 23 bytes.
#line 1 "ENTRY_10f17200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f17200(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f174b0; body size 34 bytes.
#line 1 "ENTRY_10f174b0"

__declspec(naked) void FUN_10f174b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [eax + 4]
  __asm mov edx, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [ecx + 4], esi
  __asm mov dword ptr [ecx], edx
  __asm pop esi
  __asm ret 4
}




// Reference entry 10f175d0; body size 36 bytes.
#line 1 "ENTRY_10f175d0"

__declspec(naked) void FUN_10f175d0(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm mov eax, dword ptr [ecx]
  __asm cmp eax, edx
  __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x80 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp dword ptr [eax + 4], 0
  __asm _emit 0x75 __asm _emit 0x08
  __asm add eax, 8
  __asm cmp eax, edx
  __asm _emit 0x75 __asm _emit 0xf3
  __asm ret
  __asm jmp dword ptr [LAB_122fc8a0]
}




// Reference entry 10f17a10; body size 100 bytes.
#line 1 "ENTRY_10f17a10"

__declspec(naked) void FUN_10f17a10(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm cmp esi, edi
  __asm _emit 0x74 __asm _emit 0x51
  __asm call LAB_1009a363
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [esi], eax
  __asm mov dword ptr [edi], ecx
  __asm mov eax, dword ptr [esi]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x04
  __asm mov dword ptr [eax], esi
  __asm mov ecx, dword ptr [edi]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x02
  __asm mov dword ptr [ecx], edi
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [edi + 8]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, dword ptr [edi + 0xc]
  __asm mov dword ptr [esi + 0xc], eax
  __asm mov eax, dword ptr [edi + 0x10]
  __asm mov dword ptr [esi + 0x10], eax
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10f17cd0; body size 53 bytes.
#line 1 "ENTRY_10f17cd0"

__declspec(naked) void FUN_10f17cd0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm cmp edi, esi
  __asm _emit 0x74 __asm _emit 0x10
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm mov dword ptr [esi], eax
  __asm call LAB_1002a973
  __asm mov al, byte ptr [edi + 4]
  __asm lea ecx, [esi + 8]
  __asm mov byte ptr [esi + 4], al
  __asm lea eax, [edi + 8]
  __asm push eax
  __asm call LAB_1007fdbf
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10f17d20; body size 14 bytes.
#line 1 "ENTRY_10f17d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f17d20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f17d40; body size 14 bytes.
#line 1 "ENTRY_10f17d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f17d40(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f17d60; body size 14 bytes.
#line 1 "ENTRY_10f17d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f17d60(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f17d80; body size 14 bytes.
#line 1 "ENTRY_10f17d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f17d80(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f17da0; body size 12 bytes.
#line 1 "ENTRY_10f17da0"

__declspec(naked) void FUN_10f17da0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm sete al
  __asm ret 4
}




// Reference entry 10f17ee0; body size 16 bytes.
#line 1 "ENTRY_10f17ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f17ee0(int *param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & param_1[1]) * 4));
}


// Reference entry 10f17f00; body size 16 bytes.
#line 1 "ENTRY_10f17f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f17f00(int *param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(*param_1 + 4) + (*(int *)(*param_1 + 8) - 1U & param_1[1]) * 4));
}


// Reference entry 10f17f20; body size 6 bytes.
#line 1 "ENTRY_10f17f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f17f20(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f17f30; body size 6 bytes.
#line 1 "ENTRY_10f17f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f17f30(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f17f50; body size 20 bytes.
#line 1 "ENTRY_10f17f50"

__declspec(naked) void FUN_10f17f50(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_10077886
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10f18310; body size 31 bytes.
#line 1 "ENTRY_10f18310"

__declspec(naked) void FUN_10f18310(void)

{
  __asm push esi
  __asm push 0x30
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




// Reference entry 10f18360; body size 49 bytes.
#line 1 "ENTRY_10f18360"

__declspec(naked) void FUN_10f18360(void)

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




// Reference entry 10f18440; body size 14 bytes.
#line 1 "ENTRY_10f18440"

__declspec(naked) void FUN_10f18440(void)

{
  __asm cmp dword ptr [ecx + 4], 0x5555555
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f18460; body size 39 bytes.
#line 1 "ENTRY_10f18460"

__declspec(naked) void FUN_10f18460(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm cmp eax, ecx
  __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm cmp dword ptr [eax + 4], 0
  __asm _emit 0x75 __asm _emit 0x0a
  __asm add eax, 8
  __asm cmp eax, ecx
  __asm _emit 0x75 __asm _emit 0xf3
  __asm ret 8
  __asm call dword ptr [LAB_122fc8a0]
  __asm _emit 0xcc
}




// Reference entry 10f18490; body size 109 bytes.
#line 1 "ENTRY_10f18490"

__declspec(naked) void FUN_10f18490(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [edi]
  __asm cmp esi, dword ptr [ebx]
  __asm _emit 0x75 __asm _emit 0x28
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0x22
  __asm push dword ptr [ebx + 4]
  __asm push edi
  __asm call LAB_10095e03
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
  __asm _emit 0x74 __asm _emit 0x28
  __asm nop
  __asm lea ecx, [esp + 0x10]
  __asm call LAB_10077886
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_10031cdc
  __asm push eax
  __asm push edi
  __asm call LAB_1008b179
  __asm mov esi, dword ptr [esp + 0x18]
  __asm add esp, 8
  __asm mov eax, dword ptr [esp + 0x14]
  __asm cmp esi, eax
  __asm _emit 0x75 __asm _emit 0xd9
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}




// Reference entry 10f18520; body size 50 bytes.
#line 1 "ENTRY_10f18520"

__declspec(naked) void FUN_10f18520(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esp + 8]
  __asm call LAB_10077886
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_10031cdc
  __asm push eax
  __asm push edi
  __asm call LAB_1008b179
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f188c0; body size 3 bytes.
#line 1 "ENTRY_10f188c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f188c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f188d0; body size 3 bytes.
#line 1 "ENTRY_10f188d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f188d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f188f0; body size 3 bytes.
#line 1 "ENTRY_10f188f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f188f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18900; body size 3 bytes.
#line 1 "ENTRY_10f18900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18910; body size 3 bytes.
#line 1 "ENTRY_10f18910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18920; body size 3 bytes.
#line 1 "ENTRY_10f18920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18930; body size 3 bytes.
#line 1 "ENTRY_10f18930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18940; body size 3 bytes.
#line 1 "ENTRY_10f18940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18950; body size 3 bytes.
#line 1 "ENTRY_10f18950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18960; body size 3 bytes.
#line 1 "ENTRY_10f18960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18970; body size 3 bytes.
#line 1 "ENTRY_10f18970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18980; body size 3 bytes.
#line 1 "ENTRY_10f18980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18990; body size 3 bytes.
#line 1 "ENTRY_10f18990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f189a0; body size 3 bytes.
#line 1 "ENTRY_10f189a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f189a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f189b0; body size 3 bytes.
#line 1 "ENTRY_10f189b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f189b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f189c0; body size 3 bytes.
#line 1 "ENTRY_10f189c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f189c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f189d0; body size 3 bytes.
#line 1 "ENTRY_10f189d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f189d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f189e0; body size 11 bytes.
#line 1 "ENTRY_10f189e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10f189e0(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2);
}


// Reference entry 10f189f0; body size 11 bytes.
#line 1 "ENTRY_10f189f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10f189f0(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2);
}


// Reference entry 10f18a00; body size 3 bytes.
#line 1 "ENTRY_10f18a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f18a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f18f10; body size 4 bytes.
#line 1 "ENTRY_10f18f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f18f10(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10f18f20; body size 4 bytes.
#line 1 "ENTRY_10f18f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f18f20(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10f18f30; body size 30 bytes.
#line 1 "ENTRY_10f18f30"

__declspec(naked) void FUN_10f18f30(void)

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




// Reference entry 10f19010; body size 4 bytes.
#line 1 "ENTRY_10f19010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f19010(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 10f19020; body size 4 bytes.
#line 1 "ENTRY_10f19020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f19020(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 10f19030; body size 4 bytes.
#line 1 "ENTRY_10f19030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f19030(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 10f19040; body size 3 bytes.
#line 1 "ENTRY_10f19040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f19040(void)

{
  return;
}


// Reference entry 10f19050; body size 3 bytes.
#line 1 "ENTRY_10f19050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f19050(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10f19060; body size 3 bytes.
#line 1 "ENTRY_10f19060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f19060(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10f19070; body size 11 bytes.
#line 1 "ENTRY_10f19070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f19070(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f19080; body size 6 bytes.
#line 1 "ENTRY_10f19080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f19080(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10f19090; body size 76 bytes.
#line 1 "ENTRY_10f19090"

__declspec(naked) void FUN_10f19090(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x38
  __asm cmp ecx, esi
  __asm _emit 0x75 __asm _emit 0x2a
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [edi + 0x24], eax
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x24
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




// Reference entry 10f192d0; body size 33 bytes.
#line 1 "ENTRY_10f192d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f192d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(puVar1);
  if ((undefined4 *)*param_1 != (undefined4 *)((0x0))) {
    *(undefined4 *)*param_1 = (undefined4)(param_1);
    puVar1 = (undefined4 *)((undefined4 *)*param_2);
  }
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    *puVar1 = (undefined4)(param_2);
  }
  return;
}


// Reference entry 10f19300; body size 85 bytes.
#line 1 "ENTRY_10f19300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f19300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(puVar1);
  if ((undefined4 *)*param_1 != (undefined4 *)((0x0))) {
    *(undefined4 *)*param_1 = (undefined4)(param_1);
    puVar1 = (undefined4 *)((undefined4 *)*param_2);
  }
  if ((undefined4 *)(puVar1) != (undefined4 *)(0x0)) {
    *puVar1 = (undefined4)(param_2);
  }
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  param_1[3] = (undefined4)(param_2[3]);
  param_1[4] = (undefined4)(param_2[4]);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  return;
}


// Reference entry 10f19550; body size 57 bytes.
#line 1 "ENTRY_10f19550"

__declspec(naked) void FUN_10f19550(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp eax, edi
  __asm _emit 0x74 __asm _emit 0x28
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm sub esi, eax
  __asm mov ecx, dword ptr [eax]
  __asm mov edx, dword ptr [eax + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + eax], ecx
  __asm mov dword ptr [esi + eax + 4], edx
  __asm add eax, 8
  __asm cmp eax, edi
  __asm _emit 0x75 __asm _emit 0xe0
  __asm pop esi
  __asm pop edi
  __asm ret 0x10
}




// Reference entry 10f195a0; body size 57 bytes.
#line 1 "ENTRY_10f195a0"

__declspec(naked) void FUN_10f195a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp eax, edi
  __asm _emit 0x74 __asm _emit 0x28
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm sub esi, eax
  __asm mov ecx, dword ptr [eax]
  __asm mov edx, dword ptr [eax + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + eax], ecx
  __asm mov dword ptr [esi + eax + 4], edx
  __asm add eax, 8
  __asm cmp eax, edi
  __asm _emit 0x75 __asm _emit 0xe0
  __asm pop esi
  __asm pop edi
  __asm ret 0xc
}




// Reference entry 10f195f0; body size 13 bytes.
#line 1 "ENTRY_10f195f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f195f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f19600; body size 15 bytes.
#line 1 "ENTRY_10f19600"

__declspec(naked) void FUN_10f19600(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}




// Reference entry 10f19620; body size 3 bytes.
#line 1 "ENTRY_10f19620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f19620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f19630; body size 10 bytes.
#line 1 "ENTRY_10f19630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  __stdcall FUN_10f19630(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f19640; body size 4 bytes.
#line 1 "ENTRY_10f19640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f19640(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f19670; body size 87 bytes.
#line 1 "ENTRY_10f19670"

__declspec(naked) void FUN_10f19670(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm _emit 0x77 __asm _emit 0x47
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




// Reference entry 10f196e0; body size 90 bytes.
#line 1 "ENTRY_10f196e0"

__declspec(naked) void FUN_10f196e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x5555555
  __asm _emit 0x77 __asm _emit 0x4a
  __asm lea eax, [eax + eax*2]
  __asm shl eax, 4
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




// Reference entry 10f19760; body size 90 bytes.
#line 1 "ENTRY_10f19760"

__declspec(naked) void FUN_10f19760(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x6666666
  __asm _emit 0x77 __asm _emit 0x4a
  __asm lea eax, [eax + eax*4]
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




// Reference entry 10f197e0; body size 87 bytes.
#line 1 "ENTRY_10f197e0"

__declspec(naked) void FUN_10f197e0(void)

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




// Reference entry 10f19c70; body size 9 bytes.
#line 1 "ENTRY_10f19c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f19c70(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10f19cb0; body size 41 bytes.
#line 1 "ENTRY_10f19cb0"

__declspec(naked) void FUN_10f19cb0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, dword ptr [ecx + 4]
  __asm push esi
  __asm mov esi, eax
  __asm cmp eax, edx
  __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm cmp dword ptr [eax + 4], 0
  __asm _emit 0x75 __asm _emit 0x0c
  __asm add eax, 8
  __asm cmp eax, edx
  __asm _emit 0x75 __asm _emit 0xf3
  __asm mov dword ptr [ecx + 4], esi
  __asm pop esi
  __asm ret
  __asm call dword ptr [LAB_122fc8a0]
  __asm _emit 0xcc
}




// Reference entry 10f19f70; body size 57 bytes.
#line 1 "ENTRY_10f19f70"

__declspec(naked) void FUN_10f19f70(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 4
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




// Reference entry 10f19fc0; body size 61 bytes.
#line 1 "ENTRY_10f19fc0"

__declspec(naked) void FUN_10f19fc0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
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




// Reference entry 10f1a010; body size 60 bytes.
#line 1 "ENTRY_10f1a010"

__declspec(naked) void FUN_10f1a010(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 4
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




// Reference entry 10f1a060; body size 60 bytes.
#line 1 "ENTRY_10f1a060"

__declspec(naked) void FUN_10f1a060(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*4]
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




// Reference entry 10f1a0b0; body size 61 bytes.
#line 1 "ENTRY_10f1a0b0"

__declspec(naked) void FUN_10f1a0b0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
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




// Reference entry 10f1a100; body size 8 bytes.
#line 1 "ENTRY_10f1a100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1a100(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10f1a110; body size 8 bytes.
#line 1 "ENTRY_10f1a110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1a110(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10f1a120; body size 11 bytes.
#line 1 "ENTRY_10f1a120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f1a120(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f1a5c0; body size 14 bytes.
#line 1 "ENTRY_10f1a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1a5c0(int param_1)

{
  return (undefined4)(*(undefined4 *) (*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & *(uint *)(param_1 + 0xc)) * 4));
}


// Reference entry 10f1a5e0; body size 14 bytes.
#line 1 "ENTRY_10f1a5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1a5e0(int param_1)

{
  return (undefined4)(*(undefined4 *) (*(int *)(param_1 + 4) + (*(int *)(param_1 + 8) - 1U & *(uint *)(param_1 + 0xc)) * 4));
}


// Reference entry 10f1a610; body size 63 bytes.
#line 1 "ENTRY_10f1a610"

__declspec(naked) void FUN_10f1a610(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [ecx + 0x14]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp], eax
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x75 __asm _emit 0x2c
  __asm nop
  __asm add eax, 0x14
  __asm cmp dword ptr [eax + 0x18], 0
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov ecx, dword ptr [eax]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x1e
  __asm cmp byte ptr [ecx], 0
  __asm _emit 0x74 __asm _emit 0x19
  __asm cmp byte ptr [eax + 4], 0
  __asm _emit 0x75 __asm _emit 0x13
  __asm lea ecx, [esp]
  __asm call LAB_10077886
  __asm mov eax, dword ptr [esp]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm _emit 0x74 __asm _emit 0xd5
  __asm xor eax, eax
  __asm pop ecx
  __asm ret
}




// Reference entry 10f1a670; body size 5 bytes.
#line 1 "ENTRY_10f1a670"

__declspec(naked) void FUN_10f1a670(void)

{
  __asm jmp LAB_1148a2f7
}




// Reference entry 10f1a6e0; body size 8 bytes.
#line 1 "ENTRY_10f1a6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1a6e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) != 0);
}


// Reference entry 10f1a6f0; body size 6 bytes.
#line 1 "ENTRY_10f1a6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a6f0(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10f1a700; body size 6 bytes.
#line 1 "ENTRY_10f1a700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a700(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10f1a710; body size 6 bytes.
#line 1 "ENTRY_10f1a710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a710(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10f1a720; body size 6 bytes.
#line 1 "ENTRY_10f1a720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a720(void)

{
  return (undefined4)(0x5555555);
}


// Reference entry 10f1a730; body size 6 bytes.
#line 1 "ENTRY_10f1a730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a730(void)

{
  return (undefined4)(0x6666666);
}


// Reference entry 10f1a740; body size 6 bytes.
#line 1 "ENTRY_10f1a740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1a740(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10f1ac00; body size 18 bytes.
#line 1 "ENTRY_10f1ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1ac00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1ac20; body size 18 bytes.
#line 1 "ENTRY_10f1ac20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1ac20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1ac40; body size 54 bytes.
#line 1 "ENTRY_10f1ac40"

__declspec(naked) void FUN_10f1ac40(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm movq qword ptr [ecx + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0xc
}




// Reference entry 10f1ac90; body size 40 bytes.
#line 1 "ENTRY_10f1ac90"

__declspec(naked) void FUN_10f1ac90(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm movq qword ptr [ecx + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0xc
}




// Reference entry 10f1acd0; body size 22 bytes.
#line 1 "ENTRY_10f1acd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f1acd0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1acf0; body size 22 bytes.
#line 1 "ENTRY_10f1acf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f1acf0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1ad10; body size 22 bytes.
#line 1 "ENTRY_10f1ad10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f1ad10(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1ad30; body size 18 bytes.
#line 1 "ENTRY_10f1ad30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1ad30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1ad50; body size 18 bytes.
#line 1 "ENTRY_10f1ad50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1ad50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1afe0; body size 31 bytes.
#line 1 "ENTRY_10f1afe0"

__declspec(naked) void FUN_10f1afe0(void)

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




// Reference entry 10f1b010; body size 22 bytes.
#line 1 "ENTRY_10f1b010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f1b010(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1b030; body size 22 bytes.
#line 1 "ENTRY_10f1b030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f1b030(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1b050; body size 22 bytes.
#line 1 "ENTRY_10f1b050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f1b050(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1b070; body size 56 bytes.
#line 1 "ENTRY_10f1b070"

__declspec(naked) void FUN_10f1b070(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm movq qword ptr [ecx + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0x10
}




// Reference entry 10f1b0c0; body size 42 bytes.
#line 1 "ENTRY_10f1b0c0"

__declspec(naked) void FUN_10f1b0c0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm movq qword ptr [ecx + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0x10
}




// Reference entry 10f1b100; body size 33 bytes.
#line 1 "ENTRY_10f1b100"

__declspec(naked) void FUN_10f1b100(void)

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




// Reference entry 10f1b130; body size 25 bytes.
#line 1 "ENTRY_10f1b130"

__declspec(naked) void FUN_10f1b130(void)

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




// Reference entry 10f1b150; body size 25 bytes.
#line 1 "ENTRY_10f1b150"

__declspec(naked) void FUN_10f1b150(void)

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




// Reference entry 10f1b170; body size 13 bytes.
#line 1 "ENTRY_10f1b170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b170(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b180; body size 13 bytes.
#line 1 "ENTRY_10f1b180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b190; body size 13 bytes.
#line 1 "ENTRY_10f1b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b190(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b1a0; body size 13 bytes.
#line 1 "ENTRY_10f1b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b1a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b1b0; body size 13 bytes.
#line 1 "ENTRY_10f1b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b1b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f1b1c0; body size 3 bytes.
#line 1 "ENTRY_10f1b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b1c0(void)

{
  return;
}


// Reference entry 10f1b1d0; body size 3 bytes.
#line 1 "ENTRY_10f1b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b1d0(void)

{
  return;
}


// Reference entry 10f1b550; body size 15 bytes.
#line 1 "ENTRY_10f1b550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b550(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10f1b570; body size 15 bytes.
#line 1 "ENTRY_10f1b570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1b570(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10f1b6e0; body size 5 bytes.
#line 1 "ENTRY_10f1b6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1b6e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1b6f0; body size 5 bytes.
#line 1 "ENTRY_10f1b6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1b6f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1b700; body size 5 bytes.
#line 1 "ENTRY_10f1b700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1b700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1b710; body size 31 bytes.
#line 1 "ENTRY_10f1b710"

__declspec(naked) void FUN_10f1b710(void)

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




// Reference entry 10f1b740; body size 31 bytes.
#line 1 "ENTRY_10f1b740"

__declspec(naked) void FUN_10f1b740(void)

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




// Reference entry 10f1b770; body size 37 bytes.
#line 1 "ENTRY_10f1b770"

__declspec(naked) void FUN_10f1b770(void)

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




// Reference entry 10f1bb40; body size 5 bytes.
#line 1 "ENTRY_10f1bb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bb50; body size 5 bytes.
#line 1 "ENTRY_10f1bb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bb60; body size 5 bytes.
#line 1 "ENTRY_10f1bb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bb70; body size 5 bytes.
#line 1 "ENTRY_10f1bb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bb80; body size 5 bytes.
#line 1 "ENTRY_10f1bb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bb90; body size 5 bytes.
#line 1 "ENTRY_10f1bb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bb90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bba0; body size 5 bytes.
#line 1 "ENTRY_10f1bba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bbb0; body size 5 bytes.
#line 1 "ENTRY_10f1bbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bbb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bbc0; body size 5 bytes.
#line 1 "ENTRY_10f1bbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bbc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bbd0; body size 5 bytes.
#line 1 "ENTRY_10f1bbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bbd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bbe0; body size 5 bytes.
#line 1 "ENTRY_10f1bbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bbe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bbf0; body size 50 bytes.
#line 1 "ENTRY_10f1bbf0"

__declspec(naked) void FUN_10f1bbf0(void)

{
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}




// Reference entry 10f1bc30; body size 30 bytes.
#line 1 "ENTRY_10f1bc30"

__declspec(naked) void FUN_10f1bc30(void)

{
  __asm mov eax, dword ptr [esp + 0x10]
  __asm xorps xmm0, xmm0
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm movq qword ptr [ecx + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}




// Reference entry 10f1bc60; body size 27 bytes.
#line 1 "ENTRY_10f1bc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f1bc60(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10f1bdc0; body size 15 bytes.
#line 1 "ENTRY_10f1bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bdc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f1bde0; body size 15 bytes.
#line 1 "ENTRY_10f1bde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bde0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f1be00; body size 15 bytes.
#line 1 "ENTRY_10f1be00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be00(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f1be20; body size 15 bytes.
#line 1 "ENTRY_10f1be20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f1be40; body size 15 bytes.
#line 1 "ENTRY_10f1be40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f1be60; body size 5 bytes.
#line 1 "ENTRY_10f1be60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1be70; body size 5 bytes.
#line 1 "ENTRY_10f1be70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1be80; body size 5 bytes.
#line 1 "ENTRY_10f1be80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1be90; body size 5 bytes.
#line 1 "ENTRY_10f1be90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1be90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bea0; body size 5 bytes.
#line 1 "ENTRY_10f1bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1beb0; body size 5 bytes.
#line 1 "ENTRY_10f1beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1beb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bec0; body size 5 bytes.
#line 1 "ENTRY_10f1bec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bed0; body size 5 bytes.
#line 1 "ENTRY_10f1bed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f1bed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1bee0; body size 18 bytes.
#line 1 "ENTRY_10f1bee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f1bee0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1bf00; body size 18 bytes.
#line 1 "ENTRY_10f1bf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f1bf00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1bf20; body size 18 bytes.
#line 1 "ENTRY_10f1bf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f1bf20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1c140; body size 16 bytes.
#line 1 "ENTRY_10f1c140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1c140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1c160; body size 16 bytes.
#line 1 "ENTRY_10f1c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f1c160(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f1c180; body size 3 bytes.
#line 1 "ENTRY_10f1c180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1c180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1c190; body size 3 bytes.
#line 1 "ENTRY_10f1c190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1c190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1c1a0; body size 52 bytes.
#line 1 "ENTRY_10f1c1a0"

__declspec(naked) void FUN_10f1c1a0(void)

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




// Reference entry 10f1c1f0; body size 52 bytes.
#line 1 "ENTRY_10f1c1f0"

__declspec(naked) void FUN_10f1c1f0(void)

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




// Reference entry 10f1c2d0; body size 28 bytes.
#line 1 "ENTRY_10f1c2d0"

__declspec(naked) void FUN_10f1c2d0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10f1c300; body size 21 bytes.
#line 1 "ENTRY_10f1c300"

__declspec(naked) void FUN_10f1c300(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10f1c730; body size 19 bytes.
#line 1 "ENTRY_10f1c730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f1c730(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x20);
  }
  return;
}


// Reference entry 10f1c750; body size 19 bytes.
#line 1 "ENTRY_10f1c750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f1c750(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f1d140; body size 31 bytes.
#line 1 "ENTRY_10f1d140"

__declspec(naked) void FUN_10f1d140(void)

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




// Reference entry 10f1d170; body size 31 bytes.
#line 1 "ENTRY_10f1d170"

__declspec(naked) void FUN_10f1d170(void)

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




// Reference entry 10f1d200; body size 14 bytes.
#line 1 "ENTRY_10f1d200"

__declspec(naked) void FUN_10f1d200(void)

{
  __asm cmp dword ptr [ecx + 4], 0x7ffffff
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f1d220; body size 14 bytes.
#line 1 "ENTRY_10f1d220"

__declspec(naked) void FUN_10f1d220(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f1d240; body size 14 bytes.
#line 1 "ENTRY_10f1d240"

__declspec(naked) void FUN_10f1d240(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f1d260; body size 3 bytes.
#line 1 "ENTRY_10f1d260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d270; body size 3 bytes.
#line 1 "ENTRY_10f1d270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d280; body size 3 bytes.
#line 1 "ENTRY_10f1d280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d290; body size 3 bytes.
#line 1 "ENTRY_10f1d290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d2a0; body size 3 bytes.
#line 1 "ENTRY_10f1d2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d2b0; body size 3 bytes.
#line 1 "ENTRY_10f1d2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d2c0; body size 3 bytes.
#line 1 "ENTRY_10f1d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d2d0; body size 3 bytes.
#line 1 "ENTRY_10f1d2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d2e0; body size 3 bytes.
#line 1 "ENTRY_10f1d2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d2f0; body size 3 bytes.
#line 1 "ENTRY_10f1d2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d2f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d300; body size 3 bytes.
#line 1 "ENTRY_10f1d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d310; body size 3 bytes.
#line 1 "ENTRY_10f1d310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d320; body size 3 bytes.
#line 1 "ENTRY_10f1d320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d330; body size 3 bytes.
#line 1 "ENTRY_10f1d330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d340; body size 3 bytes.
#line 1 "ENTRY_10f1d340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d350; body size 3 bytes.
#line 1 "ENTRY_10f1d350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d360; body size 3 bytes.
#line 1 "ENTRY_10f1d360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d370; body size 3 bytes.
#line 1 "ENTRY_10f1d370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d380; body size 3 bytes.
#line 1 "ENTRY_10f1d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d390; body size 3 bytes.
#line 1 "ENTRY_10f1d390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1d3a0; body size 3 bytes.
#line 1 "ENTRY_10f1d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1d3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f1db60; body size 79 bytes.
#line 1 "ENTRY_10f1db60"

__declspec(naked) void FUN_10f1db60(void)

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




// Reference entry 10f1dbd0; body size 79 bytes.
#line 1 "ENTRY_10f1dbd0"

__declspec(naked) void FUN_10f1dbd0(void)

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




// Reference entry 10f1dc40; body size 79 bytes.
#line 1 "ENTRY_10f1dc40"

__declspec(naked) void FUN_10f1dc40(void)

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




// Reference entry 10f1dcb0; body size 11 bytes.
#line 1 "ENTRY_10f1dcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1dcb0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f1dcc0; body size 11 bytes.
#line 1 "ENTRY_10f1dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1dcc0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f1dcd0; body size 11 bytes.
#line 1 "ENTRY_10f1dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f1dcd0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f1dce0; body size 83 bytes.
#line 1 "ENTRY_10f1dce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f1dce0(int *param_2)
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


// Reference entry 10f1dd50; body size 83 bytes.
#line 1 "ENTRY_10f1dd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f1dd50(int *param_2)
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


// Reference entry 10f1ddc0; body size 83 bytes.
#line 1 "ENTRY_10f1ddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f1ddc0(int *param_2)
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


// Reference entry 10f1de30; body size 87 bytes.
#line 1 "ENTRY_10f1de30"

__declspec(naked) void FUN_10f1de30(void)

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




// Reference entry 10f1dea0; body size 97 bytes.
#line 1 "ENTRY_10f1dea0"

__declspec(naked) void FUN_10f1dea0(void)

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




// Reference entry 10f1fb70; body size 54 bytes.
#line 1 "ENTRY_10f1fb70"

__declspec(naked) void FUN_10f1fb70(void)

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




// Reference entry 10f1fbc0; body size 63 bytes.
#line 1 "ENTRY_10f1fbc0"

__declspec(naked) void FUN_10f1fbc0(void)

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




// Reference entry 10f1fc10; body size 57 bytes.
#line 1 "ENTRY_10f1fc10"

__declspec(naked) void FUN_10f1fc10(void)

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




// Reference entry 10f1fc60; body size 66 bytes.
#line 1 "ENTRY_10f1fc60"

__declspec(naked) void FUN_10f1fc60(void)

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




// Reference entry 10f1fcc0; body size 60 bytes.
#line 1 "ENTRY_10f1fcc0"

__declspec(naked) void FUN_10f1fcc0(void)

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




// Reference entry 10f1fd10; body size 8 bytes.
#line 1 "ENTRY_10f1fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1fd10(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10f1fd20; body size 8 bytes.
#line 1 "ENTRY_10f1fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f1fd20(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10f20a40; body size 4 bytes.
#line 1 "ENTRY_10f20a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f20a40(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 10f20af0; body size 7 bytes.
#line 1 "ENTRY_10f20af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f20af0(int *param_1)

{
                    
                    
  (**(code **)(*param_1 + 0x2c))();
  return;
}


// Reference entry 10f214e0; body size 6 bytes.
#line 1 "ENTRY_10f214e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f214e0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10f214f0; body size 6 bytes.
#line 1 "ENTRY_10f214f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f214f0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f21500; body size 6 bytes.
#line 1 "ENTRY_10f21500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f21500(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10f21510; body size 6 bytes.
#line 1 "ENTRY_10f21510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f21510(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10f21520; body size 6 bytes.
#line 1 "ENTRY_10f21520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f21520(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f21530; body size 6 bytes.
#line 1 "ENTRY_10f21530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f21530(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10f21740; body size 5 bytes.
#line 1 "ENTRY_10f21740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f21740(int param_1)

{
  *(undefined1*)(param_1 + 4) = (undefined1)(1);
  return;
}


// Reference entry 10f217d0; body size 4 bytes.
#line 1 "ENTRY_10f217d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f217d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f217e0; body size 4 bytes.
#line 1 "ENTRY_10f217e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f217e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f217f0; body size 106 bytes.
#line 1 "ENTRY_10f217f0"

__declspec(naked) void FUN_10f217f0(void)

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
  __asm mov dword ptr [esi], LAB_1194e3e8
  __asm mov edx, dword ptr [eax]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esi + 0x14], eax
  __asm mov al, byte ptr [esp + 0x20]
  __asm mov byte ptr [esi + 0x52], al
  __asm mov eax, dword ptr [esp + 0x24]
  __asm mov dword ptr [esi + 0x54], eax
  __asm lea eax, [esi + 0x39]
  __asm push eax
  __asm mov dword ptr [esi + 0x10], edx
  __asm call LAB_1005907a
  __asm push 0x21
  __asm push dword ptr [esp + 0x24]
  __asm lea eax, [esi + 0x18]
  __asm push eax
  __asm call LAB_1005907a
  __asm add esp, 0x18
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0x14
}




// Reference entry 10f219e0; body size 7 bytes.
#line 1 "ENTRY_10f219e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f219e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 10f21ef0; body size 43 bytes.
#line 1 "ENTRY_10f21ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f21ef0(int param_1)

{
  if (*(int *)(param_1 + 0x54) != 0) {
    *(undefined4*)(*(int *)(param_1 + 0x54) + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x54) = (undefined4)(0);
  }
  if (*(int *)(param_1 + 0x58) != 0) {
    *(undefined4*)(*(int *)(param_1 + 0x58) + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x58) = (undefined4)(0);
  }
  return;
}


// Reference entry 10f22970; body size 32 bytes.
#line 1 "ENTRY_10f22970"

__declspec(naked) void FUN_10f22970(void)

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




// Reference entry 10f229a0; body size 18 bytes.
#line 1 "ENTRY_10f229a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f229a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f229c0; body size 39 bytes.
#line 1 "ENTRY_10f229c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f229c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f229f0; body size 25 bytes.
#line 1 "ENTRY_10f229f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f229f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22a10; body size 22 bytes.
#line 1 "ENTRY_10f22a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f22a10(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22a30; body size 18 bytes.
#line 1 "ENTRY_10f22a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22a30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22b10; body size 22 bytes.
#line 1 "ENTRY_10f22b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f22b10(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22b30; body size 18 bytes.
#line 1 "ENTRY_10f22b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22b30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22b50; body size 18 bytes.
#line 1 "ENTRY_10f22b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22b50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22b70; body size 5 bytes.
#line 1 "ENTRY_10f22b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f22b70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f22b80; body size 5 bytes.
#line 1 "ENTRY_10f22b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f22b80(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f22b90; body size 11 bytes.
#line 1 "ENTRY_10f22b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f22b90(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22ba0; body size 18 bytes.
#line 1 "ENTRY_10f22ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22ba0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22ce0; body size 18 bytes.
#line 1 "ENTRY_10f22ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22ce0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22e20; body size 25 bytes.
#line 1 "ENTRY_10f22e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f22e20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22e40; body size 34 bytes.
#line 1 "ENTRY_10f22e40"

__declspec(naked) void FUN_10f22e40(void)

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




// Reference entry 10f22e70; body size 11 bytes.
#line 1 "ENTRY_10f22e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f22e70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22e80; body size 11 bytes.
#line 1 "ENTRY_10f22e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f22e80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f22e90; body size 21 bytes.
#line 1 "ENTRY_10f22e90"

__declspec(naked) void FUN_10f22e90(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10f22eb0; body size 3 bytes.
#line 1 "ENTRY_10f22eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f22eb0(void)

{
  return;
}


// Reference entry 10f22ec0; body size 3 bytes.
#line 1 "ENTRY_10f22ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f22ec0(void)

{
  return;
}


// Reference entry 10f22ed0; body size 25 bytes.
#line 1 "ENTRY_10f22ed0"

__declspec(naked) void FUN_10f22ed0(void)

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




// Reference entry 10f231b0; body size 13 bytes.
#line 1 "ENTRY_10f231b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f231b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f231c0; body size 13 bytes.
#line 1 "ENTRY_10f231c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f231c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f231d0; body size 113 bytes.
#line 1 "ENTRY_10f231d0"

__declspec(naked) void FUN_10f231d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_1000d1d4
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




// Reference entry 10f23260; body size 113 bytes.
#line 1 "ENTRY_10f23260"

__declspec(naked) void FUN_10f23260(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_1007210b
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




// Reference entry 10f232f0; body size 33 bytes.
#line 1 "ENTRY_10f232f0"

__declspec(naked) void FUN_10f232f0(void)

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




// Reference entry 10f23320; body size 33 bytes.
#line 1 "ENTRY_10f23320"

__declspec(naked) void FUN_10f23320(void)

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




// Reference entry 10f23740; body size 3 bytes.
#line 1 "ENTRY_10f23740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23740(void)

{
  return;
}


// Reference entry 10f23750; body size 3 bytes.
#line 1 "ENTRY_10f23750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23750(void)

{
  return;
}


// Reference entry 10f23760; body size 3 bytes.
#line 1 "ENTRY_10f23760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23760(void)

{
  return;
}


// Reference entry 10f23770; body size 3 bytes.
#line 1 "ENTRY_10f23770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23770(void)

{
  return;
}


// Reference entry 10f23880; body size 18 bytes.
#line 1 "ENTRY_10f23880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f23880(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10f23c70; body size 73 bytes.
#line 1 "ENTRY_10f23c70"

__declspec(naked) void FUN_10f23c70(void)

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




// Reference entry 10f23cd0; body size 15 bytes.
#line 1 "ENTRY_10f23cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23cd0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10f23d70; body size 37 bytes.
#line 1 "ENTRY_10f23d70"

__declspec(naked) void FUN_10f23d70(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, dword ptr [eax + 8]
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0c
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm mov dword ptr [eax + 4], edx
  __asm ret
  __asm mov eax, dword ptr [esp + 4]
  __asm xor ecx, ecx
  __asm mov dword ptr [eax], ecx
  __asm mov dword ptr [eax + 4], edx
  __asm ret
}




// Reference entry 10f23da0; body size 7 bytes.
#line 1 "ENTRY_10f23da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23da0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f23db0; body size 7 bytes.
#line 1 "ENTRY_10f23db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f23dc0; body size 37 bytes.
#line 1 "ENTRY_10f23dc0"

__declspec(naked) void FUN_10f23dc0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, dword ptr [eax + 8]
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0c
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm mov dword ptr [eax + 4], edx
  __asm ret
  __asm mov eax, dword ptr [esp + 4]
  __asm xor ecx, ecx
  __asm mov dword ptr [eax], ecx
  __asm mov dword ptr [eax + 4], edx
  __asm ret
}




// Reference entry 10f23df0; body size 7 bytes.
#line 1 "ENTRY_10f23df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23df0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f23e00; body size 16 bytes.
#line 1 "ENTRY_10f23e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f23e00(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 10f23e20; body size 5 bytes.
#line 1 "ENTRY_10f23e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f23e30; body size 31 bytes.
#line 1 "ENTRY_10f23e30"

__declspec(naked) void FUN_10f23e30(void)

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




// Reference entry 10f23e60; body size 13 bytes.
#line 1 "ENTRY_10f23e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23e60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f23e70; body size 15 bytes.
#line 1 "ENTRY_10f23e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f23e70(int param_1,int param_2)

{
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return;
}


// Reference entry 10f23fe0; body size 7 bytes.
#line 1 "ENTRY_10f23fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f23fe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f23ff0; body size 38 bytes.
#line 1 "ENTRY_10f23ff0"

__declspec(naked) void FUN_10f23ff0(void)

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




// Reference entry 10f24020; body size 5 bytes.
#line 1 "ENTRY_10f24020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24030; body size 5 bytes.
#line 1 "ENTRY_10f24030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24040; body size 36 bytes.
#line 1 "ENTRY_10f24040"

__declspec(naked) void FUN_10f24040(void)

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




// Reference entry 10f24070; body size 36 bytes.
#line 1 "ENTRY_10f24070"

__declspec(naked) void FUN_10f24070(void)

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




// Reference entry 10f240a0; body size 35 bytes.
#line 1 "ENTRY_10f240a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f240a0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((char *)(param_2 * 4 + (int)param_1));
}


// Reference entry 10f240d0; body size 5 bytes.
#line 1 "ENTRY_10f240d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f240d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f240e0; body size 27 bytes.
#line 1 "ENTRY_10f240e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f240e0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (int)(param_2);
}


// Reference entry 10f24110; body size 5 bytes.
#line 1 "ENTRY_10f24110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24120; body size 5 bytes.
#line 1 "ENTRY_10f24120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24130; body size 5 bytes.
#line 1 "ENTRY_10f24130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24140; body size 5 bytes.
#line 1 "ENTRY_10f24140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24150; body size 5 bytes.
#line 1 "ENTRY_10f24150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24160; body size 26 bytes.
#line 1 "ENTRY_10f24160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10f24160(undefined4 *param_1,undefined4 *param_2)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(param_2[3]);
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24180; body size 15 bytes.
#line 1 "ENTRY_10f24180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f24180(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  return;
}


// Reference entry 10f241a0; body size 37 bytes.
#line 1 "ENTRY_10f241a0"

__declspec(naked) void FUN_10f241a0(void)

{
  __asm mov edx, dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [ecx], eax
  __asm add ecx, 4
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esp + 0xc], ecx
  __asm mov dword ptr [ecx], eax
  __asm lea eax, [edx + 8]
  __asm push eax
  __asm add ecx, 4
  __asm call LAB_10036c23
  __asm ret
}




// Reference entry 10f241d0; body size 29 bytes.
#line 1 "ENTRY_10f241d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f241d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10f24200; body size 34 bytes.
#line 1 "ENTRY_10f24200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f24200(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10f242a0; body size 13 bytes.
#line 1 "ENTRY_10f242a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f242a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10f243a0; body size 36 bytes.
#line 1 "ENTRY_10f243a0"

__declspec(naked) void FUN_10f243a0(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10047ec4
  __asm ret 4
}




// Reference entry 10f243d0; body size 29 bytes.
#line 1 "ENTRY_10f243d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10f243d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  param_1[2] = (undefined4)(param_2[4] + param_2[3]);
  uVar1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24400; body size 13 bytes.
#line 1 "ENTRY_10f24400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f24400(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f24410; body size 15 bytes.
#line 1 "ENTRY_10f24410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24410(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f24430; body size 15 bytes.
#line 1 "ENTRY_10f24430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24430(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f24500; body size 5 bytes.
#line 1 "ENTRY_10f24500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24510; body size 5 bytes.
#line 1 "ENTRY_10f24510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24520; body size 5 bytes.
#line 1 "ENTRY_10f24520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24530; body size 5 bytes.
#line 1 "ENTRY_10f24530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24540; body size 5 bytes.
#line 1 "ENTRY_10f24540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24550; body size 5 bytes.
#line 1 "ENTRY_10f24550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24560; body size 5 bytes.
#line 1 "ENTRY_10f24560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24570; body size 5 bytes.
#line 1 "ENTRY_10f24570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24580; body size 5 bytes.
#line 1 "ENTRY_10f24580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24590; body size 5 bytes.
#line 1 "ENTRY_10f24590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f245a0; body size 5 bytes.
#line 1 "ENTRY_10f245a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f245b0; body size 5 bytes.
#line 1 "ENTRY_10f245b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f245c0; body size 5 bytes.
#line 1 "ENTRY_10f245c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f245d0; body size 5 bytes.
#line 1 "ENTRY_10f245d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f245e0; body size 5 bytes.
#line 1 "ENTRY_10f245e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f245f0; body size 5 bytes.
#line 1 "ENTRY_10f245f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f245f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24600; body size 5 bytes.
#line 1 "ENTRY_10f24600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24610; body size 11 bytes.
#line 1 "ENTRY_10f24610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f24610(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10f24620; body size 5 bytes.
#line 1 "ENTRY_10f24620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24620(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24630; body size 5 bytes.
#line 1 "ENTRY_10f24630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24640; body size 5 bytes.
#line 1 "ENTRY_10f24640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24650; body size 5 bytes.
#line 1 "ENTRY_10f24650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f24650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24660; body size 33 bytes.
#line 1 "ENTRY_10f24660"

__declspec(naked) void FUN_10f24660(void)

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




// Reference entry 10f24890; body size 18 bytes.
#line 1 "ENTRY_10f24890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f24890(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f248b0; body size 59 bytes.
#line 1 "ENTRY_10f248b0"

__declspec(naked) void FUN_10f248b0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edx]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x19
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm ret 4
  __asm xor eax, eax
  __asm mov dword ptr [ecx], eax
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm ret 4
}




// Reference entry 10f24900; body size 48 bytes.
#line 1 "ENTRY_10f24900"

__declspec(naked) void FUN_10f24900(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm ret 8
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm ret 8
}




// Reference entry 10f24940; body size 59 bytes.
#line 1 "ENTRY_10f24940"

__declspec(naked) void FUN_10f24940(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [edx]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x19
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm ret 4
  __asm xor eax, eax
  __asm mov dword ptr [ecx], eax
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm ret 4
}




// Reference entry 10f24990; body size 48 bytes.
#line 1 "ENTRY_10f24990"

__declspec(naked) void FUN_10f24990(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm ret 8
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm ret 8
}




// Reference entry 10f249d0; body size 18 bytes.
#line 1 "ENTRY_10f249d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f249d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f249f0; body size 18 bytes.
#line 1 "ENTRY_10f249f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f249f0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24a10; body size 37 bytes.
#line 1 "ENTRY_10f24a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f24a10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24a80; body size 11 bytes.
#line 1 "ENTRY_10f24a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f24a80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24a90; body size 51 bytes.
#line 1 "ENTRY_10f24a90"

__declspec(naked) void FUN_10f24a90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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




// Reference entry 10f24ad0; body size 51 bytes.
#line 1 "ENTRY_10f24ad0"

__declspec(naked) void FUN_10f24ad0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x1c
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




// Reference entry 10f24b10; body size 11 bytes.
#line 1 "ENTRY_10f24b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f24b10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24ba0; body size 11 bytes.
#line 1 "ENTRY_10f24ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f24ba0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24bb0; body size 16 bytes.
#line 1 "ENTRY_10f24bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f24bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24bd0; body size 23 bytes.
#line 1 "ENTRY_10f24bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f24bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24bf0; body size 3 bytes.
#line 1 "ENTRY_10f24bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f24bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24c00; body size 3 bytes.
#line 1 "ENTRY_10f24c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f24c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24c10; body size 3 bytes.
#line 1 "ENTRY_10f24c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f24c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f24d90; body size 52 bytes.
#line 1 "ENTRY_10f24d90"

__declspec(naked) void FUN_10f24d90(void)

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




// Reference entry 10f24f00; body size 47 bytes.
#line 1 "ENTRY_10f24f00"

__declspec(naked) void FUN_10f24f00(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [edx]
  __asm mov dword ptr [esp + 0xc], ecx
  __asm mov dword ptr [esi], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [ecx], eax
  __asm lea eax, [edx + 8]
  __asm push eax
  __asm add ecx, 4
  __asm call LAB_10036c23
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f24f40; body size 44 bytes.
#line 1 "ENTRY_10f24f40"

__declspec(naked) void FUN_10f24f40(void)

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
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f24f80; body size 35 bytes.
#line 1 "ENTRY_10f24f80"

__declspec(naked) void FUN_10f24f80(void)

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




// Reference entry 10f24fb0; body size 13 bytes.
#line 1 "ENTRY_10f24fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f24fb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f24fc0; body size 100 bytes.
#line 1 "ENTRY_10f24fc0"

__declspec(naked) void FUN_10f24fc0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm mov ebx, ecx
  __asm push ebp
  __asm _emit 0xc7 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [eax]
  __asm mov ebp, dword ptr [eax + 4]
  __asm mov dword ptr [esp + 0xc], ecx
  __asm cmp ecx, ebp
  __asm _emit 0x74 __asm _emit 0x34
  __asm push esi
  __asm sub ebp, ecx
  __asm mov ecx, ebx
  __asm mov esi, ebp
  __asm push edi
  __asm sar esi, 2
  __asm push esi
  __asm call LAB_10005ccc
  __asm mov edi, eax
  __asm push ebp
  __asm push dword ptr [esp + 0x18]
  __asm mov dword ptr [ebx], edi
  __asm lea ecx, [edi + esi*4]
  __asm mov dword ptr [ebx + 4], edi
  __asm push edi
  __asm mov dword ptr [ebx + 8], ecx
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [edi + esi*4]
  __asm mov dword ptr [ebx + 4], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm mov eax, ebx
  __asm pop ebx
  __asm ret 4
}




// Reference entry 10f25040; body size 23 bytes.
#line 1 "ENTRY_10f25040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f25040(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f255c0; body size 127 bytes.
#line 1 "ENTRY_10f255c0"

__declspec(naked) void FUN_10f255c0(void)

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
  __asm push offset LAB_1194e7b4
  __asm push offset LAB_11893ddc
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_1194e724
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_1194e76c
  __asm mov dword ptr [edi + 0x46c], LAB_1194e7a8
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}




// Reference entry 10f25980; body size 47 bytes.
#line 1 "ENTRY_10f25980"

__declspec(naked) void FUN_10f25980(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x13
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm ret 4
  __asm xor eax, eax
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm ret 4
}




// Reference entry 10f259c0; body size 16 bytes.
#line 1 "ENTRY_10f259c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f259c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f259e0; body size 11 bytes.
#line 1 "ENTRY_10f259e0"

/* WARNING: Removing unreachable block_10f259e0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f259e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RBondingOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f25b60; body size 3 bytes.
#line 1 "ENTRY_10f25b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f25b60(void)

{
  return;
}


// Reference entry 10f25b70; body size 3 bytes.
#line 1 "ENTRY_10f25b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f25b70(void)

{
  return;
}


// Reference entry 10f25b80; body size 16 bytes.
#line 1 "ENTRY_10f25b80"

__declspec(naked) void FUN_10f25b80(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm jne LAB_10032ea7
  __asm ret
  __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc
}




// Reference entry 10f25cb0; body size 19 bytes.
#line 1 "ENTRY_10f25cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f25cb0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f26180; body size 28 bytes.
#line 1 "ENTRY_10f26180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f26180(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpDPAddBondedZonesAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10f26230; body size 18 bytes.
#line 1 "ENTRY_10f26230"

__declspec(naked) void FUN_10f26230(void)

{
  __asm mov dword ptr [ecx], LAB_1194e674
  __asm mov dword ptr [ecx + 8], LAB_1194e6bc
  __asm jmp LAB_1005452f
}




// Reference entry 10f26250; body size 18 bytes.
#line 1 "ENTRY_10f26250"

__declspec(naked) void FUN_10f26250(void)

{
  __asm mov dword ptr [ecx], LAB_1194e6cc
  __asm mov dword ptr [ecx + 8], LAB_1194e714
  __asm jmp LAB_1005452f
}




// Reference entry 10f26270; body size 3 bytes.
#line 1 "ENTRY_10f26270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f26270(void)

{
  return;
}


// Reference entry 10f26280; body size 49 bytes.
#line 1 "ENTRY_10f26280"

__declspec(naked) void FUN_10f26280(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm cmp dword ptr [ecx], eax
  __asm _emit 0x74 __asm _emit 0x22
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x09
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm ret 4
  __asm xor eax, eax
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm ret 4
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm ret 4
}




// Reference entry 10f262c0; body size 16 bytes.
#line 1 "ENTRY_10f262c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f262c0(int param_2)
{
  int param_1 = (int )this;
  return (bool)(*(int *)((param_1 + 8)) == *(int *)((param_2 + 8)));
}


// Reference entry 10f262e0; body size 16 bytes.
#line 1 "ENTRY_10f262e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f262e0(int param_2)
{
  int param_1 = (int )this;
  return (bool)(*(int *)((param_1 + 4)) == *(int *)((param_2 + 4)));
}


// Reference entry 10f26300; body size 14 bytes.
#line 1 "ENTRY_10f26300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f26300(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f26320; body size 16 bytes.
#line 1 "ENTRY_10f26320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f26320(int param_2)
{
  int param_1 = (int )this;
  return (bool)(*(int *)((param_1 + 8)) != *(int *)((param_2 + 8)));
}


// Reference entry 10f26340; body size 16 bytes.
#line 1 "ENTRY_10f26340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f26340(int param_2)
{
  int param_1 = (int )this;
  return (bool)(*(int *)((param_1 + 4)) != *(int *)((param_2 + 4)));
}


// Reference entry 10f26360; body size 14 bytes.
#line 1 "ENTRY_10f26360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f26360(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f26380; body size 17 bytes.
#line 1 "ENTRY_10f26380"

__declspec(naked) void FUN_10f26380(void)

{
  __asm push dword ptr [esp + 4]
  __asm call LAB_10090f7f
  __asm test al, al
  __asm sete al
  __asm ret 4
}




// Reference entry 10f264c0; body size 12 bytes.
#line 1 "ENTRY_10f264c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10f264c0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10f264d0; body size 4 bytes.
#line 1 "ENTRY_10f264d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f264d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f264e0; body size 6 bytes.
#line 1 "ENTRY_10f264e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f264e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f264f0; body size 30 bytes.
#line 1 "ENTRY_10f264f0"

__declspec(naked) void FUN_10f264f0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 4]
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ecx]
  __asm and esi, 1
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm mov edx, dword ptr [ecx + 8]
  __asm dec edx
  __asm and edx, eax
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov eax, dword ptr [eax + edx*4]
  __asm lea eax, [eax + esi*8]
  __asm pop esi
  __asm ret
}




// Reference entry 10f26520; body size 30 bytes.
#line 1 "ENTRY_10f26520"

__declspec(naked) void FUN_10f26520(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 4]
  __asm mov eax, esi
  __asm mov ecx, dword ptr [ecx]
  __asm and esi, 1
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm mov edx, dword ptr [ecx + 8]
  __asm dec edx
  __asm and edx, eax
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov eax, dword ptr [eax + edx*4]
  __asm lea eax, [eax + esi*8]
  __asm pop esi
  __asm ret
}




// Reference entry 10f26550; body size 6 bytes.
#line 1 "ENTRY_10f26550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26550(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f26560; body size 6 bytes.
#line 1 "ENTRY_10f26560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26560(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f26570; body size 6 bytes.
#line 1 "ENTRY_10f26570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26570(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f26580; body size 6 bytes.
#line 1 "ENTRY_10f26580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26580(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 1);
  return (int)(param_1);
}


// Reference entry 10f26590; body size 6 bytes.
#line 1 "ENTRY_10f26590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f26590(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 1);
  return (int)(param_1);
}


// Reference entry 10f26780; body size 18 bytes.
#line 1 "ENTRY_10f26780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10f26780(int *param_1,int *param_2)

{
  return (bool)(*param_1 < (int)(*(param_2)));
}


// Reference entry 10f26c00; body size 24 bytes.
#line 1 "ENTRY_10f26c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f26c00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_2) != (undefined4 *)(0x0)) {
    *param_1 = (undefined4)(*param_2);
    return;
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10f26c20; body size 31 bytes.
#line 1 "ENTRY_10f26c20"

__declspec(naked) void FUN_10f26c20(void)

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




// Reference entry 10f26c70; body size 30 bytes.
#line 1 "ENTRY_10f26c70"

__declspec(naked) void FUN_10f26c70(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_10005ccc
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*4]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}




// Reference entry 10f26ca0; body size 49 bytes.
#line 1 "ENTRY_10f26ca0"

__declspec(naked) void FUN_10f26ca0(void)

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
  __asm _emit 0x76 __asm _emit 0x09
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}




// Reference entry 10f26d50; body size 14 bytes.
#line 1 "ENTRY_10f26d50"

__declspec(naked) void FUN_10f26d50(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f26d70; body size 3 bytes.
#line 1 "ENTRY_10f26d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f26d70(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10f26d80; body size 3 bytes.
#line 1 "ENTRY_10f26d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f26d80(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10f26d90; body size 3 bytes.
#line 1 "ENTRY_10f26d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26da0; body size 3 bytes.
#line 1 "ENTRY_10f26da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26db0; body size 3 bytes.
#line 1 "ENTRY_10f26db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26dc0; body size 3 bytes.
#line 1 "ENTRY_10f26dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26dd0; body size 3 bytes.
#line 1 "ENTRY_10f26dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26de0; body size 3 bytes.
#line 1 "ENTRY_10f26de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26df0; body size 3 bytes.
#line 1 "ENTRY_10f26df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26e00; body size 3 bytes.
#line 1 "ENTRY_10f26e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26e10; body size 3 bytes.
#line 1 "ENTRY_10f26e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26e20; body size 3 bytes.
#line 1 "ENTRY_10f26e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26e30; body size 3 bytes.
#line 1 "ENTRY_10f26e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26e50; body size 3 bytes.
#line 1 "ENTRY_10f26e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26e60; body size 3 bytes.
#line 1 "ENTRY_10f26e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26e70; body size 3 bytes.
#line 1 "ENTRY_10f26e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26e80; body size 3 bytes.
#line 1 "ENTRY_10f26e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26e90; body size 3 bytes.
#line 1 "ENTRY_10f26e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26e90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26ea0; body size 15 bytes.
#line 1 "ENTRY_10f26ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10f26ea0(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 10f26ec0; body size 15 bytes.
#line 1 "ENTRY_10f26ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10f26ec0(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 10f26ee0; body size 3 bytes.
#line 1 "ENTRY_10f26ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f26ef0; body size 12 bytes.
#line 1 "ENTRY_10f26ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f26ef0(int *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)((0x0))) {
    return (undefined4)(*(undefined4 *)*param_1);
  }
  return (undefined4)(0);
}


// Reference entry 10f27390; body size 79 bytes.
#line 1 "ENTRY_10f27390"

__declspec(naked) void FUN_10f27390(void)

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




// Reference entry 10f27400; body size 4 bytes.
#line 1 "ENTRY_10f27400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f27400(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10f27410; body size 4 bytes.
#line 1 "ENTRY_10f27410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f27410(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10f27420; body size 30 bytes.
#line 1 "ENTRY_10f27420"

__declspec(naked) void FUN_10f27420(void)

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




// Reference entry 10f27450; body size 30 bytes.
#line 1 "ENTRY_10f27450"

__declspec(naked) void FUN_10f27450(void)

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




// Reference entry 10f27480; body size 31 bytes.
#line 1 "ENTRY_10f27480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10f27480(int *param_1)

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


// Reference entry 10f274b0; body size 4 bytes.
#line 1 "ENTRY_10f274b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f274b0(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 10f274c0; body size 4 bytes.
#line 1 "ENTRY_10f274c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f274c0(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 10f274d0; body size 4 bytes.
#line 1 "ENTRY_10f274d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f274d0(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 10f274e0; body size 3 bytes.
#line 1 "ENTRY_10f274e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f274e0(void)

{
  return;
}


// Reference entry 10f274f0; body size 3 bytes.
#line 1 "ENTRY_10f274f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f274f0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10f27500; body size 3 bytes.
#line 1 "ENTRY_10f27500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f27500(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10f27510; body size 3 bytes.
#line 1 "ENTRY_10f27510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f27510(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10f27520; body size 11 bytes.
#line 1 "ENTRY_10f27520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f27520(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f27530; body size 8 bytes.
#line 1 "ENTRY_10f27530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f27530(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10f27540; body size 8 bytes.
#line 1 "ENTRY_10f27540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f27540(int param_1)

{
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10f27550; body size 83 bytes.
#line 1 "ENTRY_10f27550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f27550(int *param_2)
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


// Reference entry 10f275c0; body size 13 bytes.
#line 1 "ENTRY_10f275c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f275c0(int param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 8) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return;
}


// Reference entry 10f275d0; body size 24 bytes.
#line 1 "ENTRY_10f275d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f275d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_2) != (undefined4 *)(0x0)) {
    *param_1 = (undefined4)(*param_2);
    return;
  }
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10f277c0; body size 38 bytes.
#line 1 "ENTRY_10f277c0"

__declspec(naked) void FUN_10f277c0(void)

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




// Reference entry 10f277f0; body size 27 bytes.
#line 1 "ENTRY_10f277f0"

__declspec(naked) void FUN_10f277f0(void)

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




// Reference entry 10f27820; body size 27 bytes.
#line 1 "ENTRY_10f27820"

__declspec(naked) void FUN_10f27820(void)

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




// Reference entry 10f27850; body size 15 bytes.
#line 1 "ENTRY_10f27850"

__declspec(naked) void FUN_10f27850(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm mov ecx, dword ptr [ecx + 0xc]
  __asm mov dword ptr [eax + 4], ecx
  __asm ret 4
}




// Reference entry 10f27870; body size 37 bytes.
#line 1 "ENTRY_10f27870"

__declspec(naked) void FUN_10f27870(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov ecx, dword ptr [ecx]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0e
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [ecx]
  __asm mov dword ptr [eax], ecx
  __asm mov dword ptr [eax + 4], edx
  __asm ret 4
  __asm mov eax, dword ptr [esp + 4]
  __asm xor ecx, ecx
  __asm mov dword ptr [eax], ecx
  __asm mov dword ptr [eax + 4], edx
  __asm ret 4
}




// Reference entry 10f27a00; body size 87 bytes.
#line 1 "ENTRY_10f27a00"

__declspec(naked) void FUN_10f27a00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm _emit 0x77 __asm _emit 0x47
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




// Reference entry 10f27a70; body size 97 bytes.
#line 1 "ENTRY_10f27a70"

__declspec(naked) void FUN_10f27a70(void)

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




// Reference entry 10f27af0; body size 87 bytes.
#line 1 "ENTRY_10f27af0"

__declspec(naked) void FUN_10f27af0(void)

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




// Reference entry 10f27bd0; body size 13 bytes.
#line 1 "ENTRY_10f27bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f27bd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f27be0; body size 13 bytes.
#line 1 "ENTRY_10f27be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f27be0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f27bf0; body size 24 bytes.
#line 1 "ENTRY_10f27bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f27bf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined4)(param_1[3]);
  uVar2 = (undefined4)(*param_1);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(uVar1);
  *param_2 = (undefined4)(uVar2);
  return;
}


// Reference entry 10f27e70; body size 9 bytes.
#line 1 "ENTRY_10f27e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f27e70(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10f29b70; body size 63 bytes.
#line 1 "ENTRY_10f29b70"

__declspec(naked) void FUN_10f29b70(void)

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




// Reference entry 10f29bc0; body size 61 bytes.
#line 1 "ENTRY_10f29bc0"

__declspec(naked) void FUN_10f29bc0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
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




// Reference entry 10f29c10; body size 66 bytes.
#line 1 "ENTRY_10f29c10"

__declspec(naked) void FUN_10f29c10(void)

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




// Reference entry 10f29c70; body size 61 bytes.
#line 1 "ENTRY_10f29c70"

__declspec(naked) void FUN_10f29c70(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
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




// Reference entry 10f29cc0; body size 61 bytes.
#line 1 "ENTRY_10f29cc0"

__declspec(naked) void FUN_10f29cc0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
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




// Reference entry 10f29d10; body size 8 bytes.
#line 1 "ENTRY_10f29d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f29d10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10f29d20; body size 11 bytes.
#line 1 "ENTRY_10f29d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f29d20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f29d30; body size 27 bytes.
#line 1 "ENTRY_10f29d30"

__declspec(naked) void FUN_10f29d30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [ecx + 0x10]
  __asm add edx, dword ptr [ecx + 0xc]
  __asm mov ecx, dword ptr [ecx]
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [eax + 8], edx
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}




// Reference entry 10f29d60; body size 28 bytes.
#line 1 "ENTRY_10f29d60"

__declspec(naked) void FUN_10f29d60(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm push esi
  __asm mov esi, dword ptr [ecx + 0xc]
  __asm dec eax
  __asm mov edx, esi
  __asm and esi, 1
  __asm _emit 0xd1 __asm _emit 0xea
  __asm and edx, eax
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov eax, dword ptr [eax + edx*4]
  __asm lea eax, [eax + esi*8]
  __asm pop esi
  __asm ret
}




// Reference entry 10f2a930; body size 20 bytes.
#line 1 "ENTRY_10f2a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10f2a930(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 8));
  return (SCStr *)(param_2);
}


// Reference entry 10f2b810; body size 7 bytes.
#line 1 "ENTRY_10f2b810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f2b810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f2b820; body size 7 bytes.
#line 1 "ENTRY_10f2b820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f2b820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f2b830; body size 6 bytes.
#line 1 "ENTRY_10f2b830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b830(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f2b840; body size 6 bytes.
#line 1 "ENTRY_10f2b840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b840(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10f2b850; body size 6 bytes.
#line 1 "ENTRY_10f2b850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b850(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10f2b860; body size 6 bytes.
#line 1 "ENTRY_10f2b860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b860(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f2b870; body size 6 bytes.
#line 1 "ENTRY_10f2b870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b870(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10f2b880; body size 6 bytes.
#line 1 "ENTRY_10f2b880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2b880(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10f2bc70; body size 5 bytes.
#line 1 "ENTRY_10f2bc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2bc70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f2bf10; body size 36 bytes.
#line 1 "ENTRY_10f2bf10"

__declspec(naked) void FUN_10f2bf10(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10047ec4
  __asm ret 4
}




// Reference entry 10f2ce10; body size 5 bytes.
#line 1 "ENTRY_10f2ce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2ce10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f2ce20; body size 5 bytes.
#line 1 "ENTRY_10f2ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2ce20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f2ce30; body size 5 bytes.
#line 1 "ENTRY_10f2ce30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f2ce30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f2ce90; body size 4 bytes.
#line 1 "ENTRY_10f2ce90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f2ce90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f2cea0; body size 4 bytes.
#line 1 "ENTRY_10f2cea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f2cea0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10f2ceb0; body size 9 bytes.
#line 1 "ENTRY_10f2ceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f2ceb0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10f30bd0; body size 151 bytes.
#line 1 "ENTRY_10f30bd0"

__declspec(naked) void FUN_10f30bd0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm mov esi, ecx
  __asm push offset LAB_1188d1d0
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1005f6c8
  __asm mov dword ptr [esi + 0x620c], LAB_1188db30
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_1194f42c
  __asm mov dword ptr [esi + 0x620c], LAB_1194f448
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x10 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x14 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x18 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86
  __asm _emit 0x1c __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x20 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x24 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x28 __asm _emit 0x62
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x2c __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x30 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x34 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10f317c0; body size 11 bytes.
#line 1 "ENTRY_10f317c0"

/* WARNING: Removing unreachable block_10f317c0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f317c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RGetEthernetStatusAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f317d0; body size 11 bytes.
#line 1 "ENTRY_10f317d0"

/* WARNING: Removing unreachable block_10f317d0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f317d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RGetNetworkConnectivityTestResultAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f317e0; body size 11 bytes.
#line 1 "ENTRY_10f317e0"

/* WARNING: Removing unreachable block_10f317e0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f317e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RStartNetworkConnectivityTestAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f317f0; body size 11 bytes.
#line 1 "ENTRY_10f317f0"

/* WARNING: Removing unreachable block_10f317f0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f317f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RTempDisableNetworkAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f327a0; body size 18 bytes.
#line 1 "ENTRY_10f327a0"

__declspec(naked) void FUN_10f327a0(void)

{
  __asm mov dword ptr [ecx], LAB_1194f3d0
  __asm mov dword ptr [ecx + 8], LAB_1194f41c
  __asm jmp LAB_1005d94a
}




// Reference entry 10f327c0; body size 18 bytes.
#line 1 "ENTRY_10f327c0"

__declspec(naked) void FUN_10f327c0(void)

{
  __asm mov dword ptr [ecx], LAB_1194f310
  __asm mov dword ptr [ecx + 8], LAB_1194f35c
  __asm jmp LAB_1005a141
}




// Reference entry 10f327e0; body size 18 bytes.
#line 1 "ENTRY_10f327e0"

__declspec(naked) void FUN_10f327e0(void)

{
  __asm mov dword ptr [ecx], LAB_1194f250
  __asm mov dword ptr [ecx + 8], LAB_1194f29c
  __asm jmp LAB_100476e0
}




// Reference entry 10f32800; body size 18 bytes.
#line 1 "ENTRY_10f32800"

__declspec(naked) void FUN_10f32800(void)

{
  __asm mov dword ptr [ecx], LAB_1194f190
  __asm mov dword ptr [ecx + 8], LAB_1194f1dc
  __asm jmp LAB_10090d31
}




// Reference entry 10f32820; body size 4 bytes.
#line 1 "ENTRY_10f32820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f32820(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f32830; body size 4 bytes.
#line 1 "ENTRY_10f32830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f32830(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f32840; body size 4 bytes.
#line 1 "ENTRY_10f32840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f32840(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f32850; body size 4 bytes.
#line 1 "ENTRY_10f32850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f32850(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f33ea0; body size 7 bytes.
#line 1 "ENTRY_10f33ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f33ea0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6178));
}


// Reference entry 10f33f00; body size 7 bytes.
#line 1 "ENTRY_10f33f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f00(int param_1)

{
  return (int)(param_1 + 0x6144);
}


// Reference entry 10f33f10; body size 7 bytes.
#line 1 "ENTRY_10f33f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f10(int param_1)

{
  return (int)(param_1 + 0x6120);
}


// Reference entry 10f33f20; body size 7 bytes.
#line 1 "ENTRY_10f33f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f20(int param_1)

{
  return (int)(param_1 + 0x6144);
}


// Reference entry 10f33f30; body size 7 bytes.
#line 1 "ENTRY_10f33f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f30(int param_1)

{
  return (int)(param_1 + 0x6120);
}


// Reference entry 10f33f40; body size 7 bytes.
#line 1 "ENTRY_10f33f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f33f40(int param_1)

{
  return (int)(param_1 + 0x6220);
}


// Reference entry 10f33f50; body size 28 bytes.
#line 1 "ENTRY_10f33f50"

__declspec(naked) void FUN_10f33f50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6160]
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




// Reference entry 10f33f80; body size 28 bytes.
#line 1 "ENTRY_10f33f80"

__declspec(naked) void FUN_10f33f80(void)

{
  __asm mov ecx, dword ptr [ecx + 0x613c]
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




// Reference entry 10f33fb0; body size 28 bytes.
#line 1 "ENTRY_10f33fb0"

__declspec(naked) void FUN_10f33fb0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6160]
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




// Reference entry 10f33fe0; body size 28 bytes.
#line 1 "ENTRY_10f33fe0"

__declspec(naked) void FUN_10f33fe0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x613c]
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




// Reference entry 10f34010; body size 28 bytes.
#line 1 "ENTRY_10f34010"

__declspec(naked) void FUN_10f34010(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6274]
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




// Reference entry 10f34040; body size 28 bytes.
#line 1 "ENTRY_10f34040"

__declspec(naked) void FUN_10f34040(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6250]
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




// Reference entry 10f34130; body size 17 bytes.
#line 1 "ENTRY_10f34130"

__declspec(naked) void FUN_10f34130(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6138]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f34150; body size 17 bytes.
#line 1 "ENTRY_10f34150"

__declspec(naked) void FUN_10f34150(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6138]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f34170; body size 17 bytes.
#line 1 "ENTRY_10f34170"

__declspec(naked) void FUN_10f34170(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6238]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f34190; body size 17 bytes.
#line 1 "ENTRY_10f34190"

__declspec(naked) void FUN_10f34190(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6224]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f341b0; body size 20 bytes.
#line 1 "ENTRY_10f341b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10f341b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x20));
  return (SCStr *)(param_2);
}


// Reference entry 10f35920; body size 7 bytes.
#line 1 "ENTRY_10f35920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f35920(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6174));
}


// Reference entry 10f35930; body size 7 bytes.
#line 1 "ENTRY_10f35930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f35930(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6174));
}


// Reference entry 10f35940; body size 7 bytes.
#line 1 "ENTRY_10f35940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f35940(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6288));
}


// Reference entry 10f35950; body size 7 bytes.
#line 1 "ENTRY_10f35950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f35950(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6268));
}


// Reference entry 10f35990; body size 10 bytes.
#line 1 "ENTRY_10f35990"

__declspec(naked) void FUN_10f35990(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm mov al, byte ptr [eax + 0x6268]
  __asm ret
}




// Reference entry 10f365a0; body size 7 bytes.
#line 1 "ENTRY_10f365a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f365a0(int param_1)

{
  return (int)(param_1 + 0x622c);
}


// Reference entry 10f365b0; body size 4 bytes.
#line 1 "ENTRY_10f365b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f365b0(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 10f36640; body size 40 bytes.
#line 1 "ENTRY_10f36640"

__declspec(naked) void FUN_10f36640(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm lea eax, [ecx + 0x6134]
  __asm push edx
  __asm push offset LAB_1189eb60
  __asm push eax
  __asm call LAB_1003a1de
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10f36680; body size 40 bytes.
#line 1 "ENTRY_10f36680"

__declspec(naked) void FUN_10f36680(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm lea eax, [ecx + 0x6134]
  __asm push edx
  __asm push offset LAB_1189eb60
  __asm push eax
  __asm call LAB_1003a1de
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10f366c0; body size 40 bytes.
#line 1 "ENTRY_10f366c0"

__declspec(naked) void FUN_10f366c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm lea eax, [ecx + 0x6234]
  __asm push edx
  __asm push offset LAB_1189eb60
  __asm push eax
  __asm call LAB_1003a1de
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10f36700; body size 40 bytes.
#line 1 "ENTRY_10f36700"

__declspec(naked) void FUN_10f36700(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, offset LAB_1186d2ee
  __asm mov eax, dword ptr [eax]
  __asm test eax, eax
  __asm cmovne edx, eax
  __asm lea eax, [ecx + 0x6220]
  __asm push edx
  __asm push offset LAB_1189eb60
  __asm push eax
  __asm call LAB_1003a1de
  __asm add esp, 0xc
  __asm ret 4
}




// Reference entry 10f37310; body size 18 bytes.
#line 1 "ENTRY_10f37310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f37310(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f37330; body size 40 bytes.
#line 1 "ENTRY_10f37330"

__declspec(naked) void FUN_10f37330(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm movq qword ptr [ecx + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0xc
}




// Reference entry 10f37370; body size 22 bytes.
#line 1 "ENTRY_10f37370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f37370(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f37390; body size 22 bytes.
#line 1 "ENTRY_10f37390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f37390(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f373b0; body size 18 bytes.
#line 1 "ENTRY_10f373b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f373b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f37560; body size 31 bytes.
#line 1 "ENTRY_10f37560"

__declspec(naked) void FUN_10f37560(void)

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




// Reference entry 10f37590; body size 22 bytes.
#line 1 "ENTRY_10f37590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f37590(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f375b0; body size 22 bytes.
#line 1 "ENTRY_10f375b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f375b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f375d0; body size 42 bytes.
#line 1 "ENTRY_10f375d0"

__declspec(naked) void FUN_10f375d0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm xorps xmm0, xmm0
  __asm mov dword ptr [esp], ecx
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm mov eax, ecx
  __asm movq qword ptr [ecx + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 0x10
}




// Reference entry 10f37610; body size 33 bytes.
#line 1 "ENTRY_10f37610"

__declspec(naked) void FUN_10f37610(void)

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




// Reference entry 10f37640; body size 25 bytes.
#line 1 "ENTRY_10f37640"

__declspec(naked) void FUN_10f37640(void)

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




// Reference entry 10f37660; body size 13 bytes.
#line 1 "ENTRY_10f37660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37660(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f37670; body size 13 bytes.
#line 1 "ENTRY_10f37670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37670(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f37680; body size 13 bytes.
#line 1 "ENTRY_10f37680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37680(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f37690; body size 3 bytes.
#line 1 "ENTRY_10f37690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37690(void)

{
  return;
}


// Reference entry 10f37880; body size 15 bytes.
#line 1 "ENTRY_10f37880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37880(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10f37940; body size 5 bytes.
#line 1 "ENTRY_10f37940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37950; body size 5 bytes.
#line 1 "ENTRY_10f37950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37960; body size 31 bytes.
#line 1 "ENTRY_10f37960"

__declspec(naked) void FUN_10f37960(void)

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




// Reference entry 10f37990; body size 37 bytes.
#line 1 "ENTRY_10f37990"

__declspec(naked) void FUN_10f37990(void)

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




// Reference entry 10f37c20; body size 5 bytes.
#line 1 "ENTRY_10f37c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37c30; body size 5 bytes.
#line 1 "ENTRY_10f37c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37c40; body size 5 bytes.
#line 1 "ENTRY_10f37c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37c50; body size 5 bytes.
#line 1 "ENTRY_10f37c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37c60; body size 5 bytes.
#line 1 "ENTRY_10f37c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37c70; body size 5 bytes.
#line 1 "ENTRY_10f37c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37c80; body size 30 bytes.
#line 1 "ENTRY_10f37c80"

__declspec(naked) void FUN_10f37c80(void)

{
  __asm mov eax, dword ptr [esp + 0x10]
  __asm xorps xmm0, xmm0
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [ecx], eax
  __asm movq qword ptr [ecx + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm ret
}




// Reference entry 10f37cb0; body size 27 bytes.
#line 1 "ENTRY_10f37cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f37cb0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10f37d70; body size 15 bytes.
#line 1 "ENTRY_10f37d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37d70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f37d90; body size 15 bytes.
#line 1 "ENTRY_10f37d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37d90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f37db0; body size 15 bytes.
#line 1 "ENTRY_10f37db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37db0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f37dd0; body size 5 bytes.
#line 1 "ENTRY_10f37dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37de0; body size 5 bytes.
#line 1 "ENTRY_10f37de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37df0; body size 5 bytes.
#line 1 "ENTRY_10f37df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37e00; body size 5 bytes.
#line 1 "ENTRY_10f37e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37e10; body size 5 bytes.
#line 1 "ENTRY_10f37e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f37e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37e20; body size 18 bytes.
#line 1 "ENTRY_10f37e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f37e20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f37e40; body size 18 bytes.
#line 1 "ENTRY_10f37e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f37e40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f37fa0; body size 16 bytes.
#line 1 "ENTRY_10f37fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f37fa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f37fc0; body size 3 bytes.
#line 1 "ENTRY_10f37fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f37fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f37fd0; body size 52 bytes.
#line 1 "ENTRY_10f37fd0"

__declspec(naked) void FUN_10f37fd0(void)

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




// Reference entry 10f38020; body size 21 bytes.
#line 1 "ENTRY_10f38020"

__declspec(naked) void FUN_10f38020(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10f38040; body size 18 bytes.
#line 1 "ENTRY_10f38040"

__declspec(naked) void FUN_10f38040(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm call LAB_10077403
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret
}




// Reference entry 10f38320; body size 19 bytes.
#line 1 "ENTRY_10f38320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f38320(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f389b0; body size 31 bytes.
#line 1 "ENTRY_10f389b0"

__declspec(naked) void FUN_10f389b0(void)

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




// Reference entry 10f38a20; body size 14 bytes.
#line 1 "ENTRY_10f38a20"

__declspec(naked) void FUN_10f38a20(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f38a40; body size 14 bytes.
#line 1 "ENTRY_10f38a40"

__declspec(naked) void FUN_10f38a40(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f38a60; body size 3 bytes.
#line 1 "ENTRY_10f38a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38a70; body size 3 bytes.
#line 1 "ENTRY_10f38a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38a80; body size 3 bytes.
#line 1 "ENTRY_10f38a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38a90; body size 3 bytes.
#line 1 "ENTRY_10f38a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38aa0; body size 3 bytes.
#line 1 "ENTRY_10f38aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38ab0; body size 3 bytes.
#line 1 "ENTRY_10f38ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38ac0; body size 3 bytes.
#line 1 "ENTRY_10f38ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38ad0; body size 3 bytes.
#line 1 "ENTRY_10f38ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38ae0; body size 3 bytes.
#line 1 "ENTRY_10f38ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38af0; body size 3 bytes.
#line 1 "ENTRY_10f38af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38b00; body size 3 bytes.
#line 1 "ENTRY_10f38b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38b10; body size 3 bytes.
#line 1 "ENTRY_10f38b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f38b20; body size 3 bytes.
#line 1 "ENTRY_10f38b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f38b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f39050; body size 79 bytes.
#line 1 "ENTRY_10f39050"

__declspec(naked) void FUN_10f39050(void)

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




// Reference entry 10f390c0; body size 79 bytes.
#line 1 "ENTRY_10f390c0"

__declspec(naked) void FUN_10f390c0(void)

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




// Reference entry 10f39130; body size 11 bytes.
#line 1 "ENTRY_10f39130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f39130(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f39140; body size 11 bytes.
#line 1 "ENTRY_10f39140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f39140(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f39150; body size 83 bytes.
#line 1 "ENTRY_10f39150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f39150(int *param_2)
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


// Reference entry 10f391c0; body size 83 bytes.
#line 1 "ENTRY_10f391c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f391c0(int *param_2)
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


// Reference entry 10f39230; body size 97 bytes.
#line 1 "ENTRY_10f39230"

__declspec(naked) void FUN_10f39230(void)

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




// Reference entry 10f39c00; body size 63 bytes.
#line 1 "ENTRY_10f39c00"

__declspec(naked) void FUN_10f39c00(void)

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




// Reference entry 10f39c50; body size 66 bytes.
#line 1 "ENTRY_10f39c50"

__declspec(naked) void FUN_10f39c50(void)

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




// Reference entry 10f39cb0; body size 60 bytes.
#line 1 "ENTRY_10f39cb0"

__declspec(naked) void FUN_10f39cb0(void)

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




// Reference entry 10f39d00; body size 8 bytes.
#line 1 "ENTRY_10f39d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f39d00(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10f3a0c0; body size 20 bytes.
#line 1 "ENTRY_10f3a0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10f3a0c0(SCStr *param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 10f3bd30; body size 22 bytes.
#line 1 "ENTRY_10f3bd30"

__declspec(naked) void FUN_10f3bd30(void)

{
  __asm mov eax, dword ptr [ecx + 0x2c]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x0a
  __asm cmp byte ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov al, 1
  __asm ret 4
  __asm xor al, al
  __asm ret 4
}




// Reference entry 10f3be00; body size 4 bytes.
#line 1 "ENTRY_10f3be00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f3be00(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 10f3c750; body size 6 bytes.
#line 1 "ENTRY_10f3c750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f3c750(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f3c760; body size 6 bytes.
#line 1 "ENTRY_10f3c760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f3c760(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10f3c770; body size 6 bytes.
#line 1 "ENTRY_10f3c770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f3c770(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f3c780; body size 6 bytes.
#line 1 "ENTRY_10f3c780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f3c780(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10f3c990; body size 5 bytes.
#line 1 "ENTRY_10f3c990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f3c990(int param_1)

{
  *(undefined1*)(param_1 + 4) = (undefined1)(1);
  return;
}


// Reference entry 10f3ca20; body size 4 bytes.
#line 1 "ENTRY_10f3ca20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f3ca20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f3ca30; body size 27 bytes.
#line 1 "ENTRY_10f3ca30"

__declspec(naked) void FUN_10f3ca30(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_119502fc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f3ca60; body size 9 bytes.
#line 1 "ENTRY_10f3ca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f3ca60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpJoinHousehold);
  return (undefined4 *)(param_1);
}


// Reference entry 10f3ce10; body size 9 bytes.
#line 1 "ENTRY_10f3ce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f3ce10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjJHHListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10f3ce40; body size 7 bytes.
#line 1 "ENTRY_10f3ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f3ce40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f3f0e0; body size 28 bytes.
#line 1 "ENTRY_10f3f0e0"

__declspec(naked) void FUN_10f3f0e0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11950a7c
  __asm pop ecx
  __asm ret
}




// Reference entry 10f3f200; body size 11 bytes.
#line 1 "ENTRY_10f3f200"

/* WARNING: Removing unreachable block_10f3f200 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f3f200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpAsyncIOOperation_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f40170; body size 3 bytes.
#line 1 "ENTRY_10f40170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f40170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f40570; body size 3 bytes.
#line 1 "ENTRY_10f40570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10f40570(void)

{
  return (undefined1)(1);
}


// Reference entry 10f40580; body size 6 bytes.
#line 1 "ENTRY_10f40580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f40580(void)

{
  return (undefined4)(300000);
}


// Reference entry 10f40a80; body size 26 bytes.
#line 1 "ENTRY_10f40a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f40a80(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f40aa0; body size 26 bytes.
#line 1 "ENTRY_10f40aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f40aa0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f40ac0; body size 26 bytes.
#line 1 "ENTRY_10f40ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f40ac0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f40ae0; body size 43 bytes.
#line 1 "ENTRY_10f40ae0"

__declspec(naked) void FUN_10f40ae0(void)

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




// Reference entry 10f40b20; body size 26 bytes.
#line 1 "ENTRY_10f40b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f40b20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f40c20; body size 78 bytes.
#line 1 "ENTRY_10f40c20"

__declspec(naked) void FUN_10f40c20(void)

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




// Reference entry 10f40c90; body size 78 bytes.
#line 1 "ENTRY_10f40c90"

__declspec(naked) void FUN_10f40c90(void)

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




// Reference entry 10f40d00; body size 78 bytes.
#line 1 "ENTRY_10f40d00"

__declspec(naked) void FUN_10f40d00(void)

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




// Reference entry 10f40d70; body size 78 bytes.
#line 1 "ENTRY_10f40d70"

__declspec(naked) void FUN_10f40d70(void)

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




// Reference entry 10f40de0; body size 6 bytes.
#line 1 "ENTRY_10f40de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f40de0(void)

{
  return (char *)("SCINowPlayingRatings");
}


// Reference entry 10f40df0; body size 6 bytes.
#line 1 "ENTRY_10f40df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f40df0(void)

{
  return (char *)("SCINowPlayingSleepTimer");
}


// Reference entry 10f40e00; body size 14 bytes.
#line 1 "ENTRY_10f40e00"

__declspec(naked) void FUN_10f40e00(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10f40e20; body size 27 bytes.
#line 1 "ENTRY_10f40e20"

__declspec(naked) void FUN_10f40e20(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11950c38
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f40e50; body size 42 bytes.
#line 1 "ENTRY_10f40e50"

__declspec(naked) void FUN_10f40e50(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11950c38
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11950c68
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f40e90; body size 42 bytes.
#line 1 "ENTRY_10f40e90"

__declspec(naked) void FUN_10f40e90(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11950c38
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11950ca4
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f40ed0; body size 16 bytes.
#line 1 "ENTRY_10f40ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f40ef0; body size 16 bytes.
#line 1 "ENTRY_10f40ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40ef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f40f10; body size 16 bytes.
#line 1 "ENTRY_10f40f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40f10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f40f30; body size 16 bytes.
#line 1 "ENTRY_10f40f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40f30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f40fd0; body size 9 bytes.
#line 1 "ENTRY_10f40fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f40fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINowPlaying);
  return (undefined4 *)(param_1);
}


// Reference entry 10f41270; body size 19 bytes.
#line 1 "ENTRY_10f41270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f41270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f41290; body size 26 bytes.
#line 1 "ENTRY_10f41290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f41290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f41610; body size 7 bytes.
#line 1 "ENTRY_10f41610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f41610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f419c0; body size 3 bytes.
#line 1 "ENTRY_10f419c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f419c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f419d0; body size 3 bytes.
#line 1 "ENTRY_10f419d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f419d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f419e0; body size 3 bytes.
#line 1 "ENTRY_10f419e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f419e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f419f0; body size 3 bytes.
#line 1 "ENTRY_10f419f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f419f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f41a00; body size 7 bytes.
#line 1 "ENTRY_10f41a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f41a00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f41a10; body size 3 bytes.
#line 1 "ENTRY_10f41a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f41a10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f41b70; body size 11 bytes.
#line 1 "ENTRY_10f41b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f41b70(void)

{
  thunk_FUN_1113eb00((int)("CurrentTrack"));
  return;
}


// Reference entry 10f41b80; body size 11 bytes.
#line 1 "ENTRY_10f41b80"

__declspec(naked) void FUN_10f41b80(void)

{
  __asm push dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [ecx]
  __asm call LAB_10007158
  __asm ret
}




// Reference entry 10f42040; body size 16 bytes.
#line 1 "ENTRY_10f42040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42040(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f42060; body size 9 bytes.
#line 1 "ENTRY_10f42060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42060(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f42070; body size 9 bytes.
#line 1 "ENTRY_10f42070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42070(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f42080; body size 9 bytes.
#line 1 "ENTRY_10f42080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42080(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f42090; body size 9 bytes.
#line 1 "ENTRY_10f42090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42090(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f428a0; body size 8 bytes.
#line 1 "ENTRY_10f428a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f428a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10f428b0; body size 6 bytes.
#line 1 "ENTRY_10f428b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f428b0(void)

{
  return (char *)("SCINowPlayingRatings");
}


// Reference entry 10f428c0; body size 6 bytes.
#line 1 "ENTRY_10f428c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f428c0(void)

{
  return (char *)("SCINowPlayingSleepTimer");
}


// Reference entry 10f42d10; body size 7 bytes.
#line 1 "ENTRY_10f42d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d10(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10f42d20; body size 7 bytes.
#line 1 "ENTRY_10f42d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d20(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10f42d30; body size 7 bytes.
#line 1 "ENTRY_10f42d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d30(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10f42d40; body size 7 bytes.
#line 1 "ENTRY_10f42d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d40(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10f42d50; body size 7 bytes.
#line 1 "ENTRY_10f42d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f42d60; body size 7 bytes.
#line 1 "ENTRY_10f42d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d60(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f42d70; body size 7 bytes.
#line 1 "ENTRY_10f42d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d70(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f42d80; body size 7 bytes.
#line 1 "ENTRY_10f42d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d80(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f42d90; body size 7 bytes.
#line 1 "ENTRY_10f42d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f42d90(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f42e00; body size 3 bytes.
#line 1 "ENTRY_10f42e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f42e10; body size 3 bytes.
#line 1 "ENTRY_10f42e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f42e20; body size 3 bytes.
#line 1 "ENTRY_10f42e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f42e30; body size 3 bytes.
#line 1 "ENTRY_10f42e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f42e40; body size 3 bytes.
#line 1 "ENTRY_10f42e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f42e40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f435d0; body size 28 bytes.
#line 1 "ENTRY_10f435d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f435d0(undefined4 *param_1)

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


// Reference entry 10f43600; body size 28 bytes.
#line 1 "ENTRY_10f43600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f43600(undefined4 *param_1)

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


// Reference entry 10f43630; body size 28 bytes.
#line 1 "ENTRY_10f43630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f43630(undefined4 *param_1)

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


// Reference entry 10f43660; body size 28 bytes.
#line 1 "ENTRY_10f43660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f43660(undefined4 *param_1)

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


// Reference entry 10f43930; body size 26 bytes.
#line 1 "ENTRY_10f43930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f43930(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f43a30; body size 78 bytes.
#line 1 "ENTRY_10f43a30"

__declspec(naked) void FUN_10f43a30(void)

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




// Reference entry 10f43b90; body size 78 bytes.
#line 1 "ENTRY_10f43b90"

__declspec(naked) void FUN_10f43b90(void)

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




// Reference entry 10f43c30; body size 40 bytes.
#line 1 "ENTRY_10f43c30"

__declspec(naked) void FUN_10f43c30(void)

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




// Reference entry 10f43c70; body size 40 bytes.
#line 1 "ENTRY_10f43c70"

__declspec(naked) void FUN_10f43c70(void)

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




// Reference entry 10f43cb0; body size 27 bytes.
#line 1 "ENTRY_10f43cb0"

__declspec(naked) void FUN_10f43cb0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11950d80
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f43ce0; body size 42 bytes.
#line 1 "ENTRY_10f43ce0"

__declspec(naked) void FUN_10f43ce0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11950d80
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11950dc4
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f43d20; body size 42 bytes.
#line 1 "ENTRY_10f43d20"

__declspec(naked) void FUN_10f43d20(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11950d80
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11950e10
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f43d60; body size 16 bytes.
#line 1 "ENTRY_10f43d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f43d60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f43dc0; body size 16 bytes.
#line 1 "ENTRY_10f43dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f43dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f43e80; body size 9 bytes.
#line 1 "ENTRY_10f43e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f43e80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPlayQueue);
  return (undefined4 *)(param_1);
}


// Reference entry 10f44640; body size 19 bytes.
#line 1 "ENTRY_10f44640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f44640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f44660; body size 26 bytes.
#line 1 "ENTRY_10f44660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f44660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f44990; body size 7 bytes.
#line 1 "ENTRY_10f44990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f44990(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f44e60; body size 3 bytes.
#line 1 "ENTRY_10f44e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f44e60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f44e70; body size 7 bytes.
#line 1 "ENTRY_10f44e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f44e70(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f44e80; body size 3 bytes.
#line 1 "ENTRY_10f44e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f44e80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f44e90; body size 3 bytes.
#line 1 "ENTRY_10f44e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f44e90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f44ea0; body size 3 bytes.
#line 1 "ENTRY_10f44ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f44ea0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f45850; body size 16 bytes.
#line 1 "ENTRY_10f45850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45850(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f45870; body size 16 bytes.
#line 1 "ENTRY_10f45870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45870(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f45890; body size 9 bytes.
#line 1 "ENTRY_10f45890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45890(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f458a0; body size 9 bytes.
#line 1 "ENTRY_10f458a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f458a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f45de0; body size 7 bytes.
#line 1 "ENTRY_10f45de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f45de0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x10c));
}


// Reference entry 10f45f70; body size 4 bytes.
#line 1 "ENTRY_10f45f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f45f70(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 10f45fe0; body size 7 bytes.
#line 1 "ENTRY_10f45fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45fe0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x148));
}


// Reference entry 10f45ff0; body size 4 bytes.
#line 1 "ENTRY_10f45ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f45ff0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10f460d0; body size 8 bytes.
#line 1 "ENTRY_10f460d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f460d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10f46be0; body size 4 bytes.
#line 1 "ENTRY_10f46be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f46be0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x30));
}


// Reference entry 10f46bf0; body size 7 bytes.
#line 1 "ENTRY_10f46bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f46bf0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10f46c10; body size 7 bytes.
#line 1 "ENTRY_10f46c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f46c10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f46c20; body size 8 bytes.
#line 1 "ENTRY_10f46c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f46c20(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x38) != 0);
}


// Reference entry 10f46c50; body size 8 bytes.
#line 1 "ENTRY_10f46c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f46c50(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x38) == 0);
}


// Reference entry 10f46c60; body size 9 bytes.
#line 1 "ENTRY_10f46c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10f46c60(int param_1)

{
  return (bool)(param_1 == 0);
}


// Reference entry 10f47890; body size 3 bytes.
#line 1 "ENTRY_10f47890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f47890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f478a0; body size 3 bytes.
#line 1 "ENTRY_10f478a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f478a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f47e70; body size 28 bytes.
#line 1 "ENTRY_10f47e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f47e70(undefined4 *param_1)

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


// Reference entry 10f47ea0; body size 28 bytes.
#line 1 "ENTRY_10f47ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f47ea0(undefined4 *param_1)

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


// Reference entry 10f47ed0; body size 28 bytes.
#line 1 "ENTRY_10f47ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f47ed0(undefined4 *param_1)

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


// Reference entry 10f47f00; body size 28 bytes.
#line 1 "ENTRY_10f47f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f47f00(undefined4 *param_1)

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


// Reference entry 10f47f30; body size 28 bytes.
#line 1 "ENTRY_10f47f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f47f30(undefined4 *param_1)

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


// Reference entry 10f47f60; body size 20 bytes.
#line 1 "ENTRY_10f47f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f47f60(int *param_1)

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


// Reference entry 10f48130; body size 27 bytes.
#line 1 "ENTRY_10f48130"

__declspec(naked) void FUN_10f48130(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11951578
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f483d0; body size 9 bytes.
#line 1 "ENTRY_10f483d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f483d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArea);
  return (undefined4 *)(param_1);
}


// Reference entry 10f484b0; body size 7 bytes.
#line 1 "ENTRY_10f484b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f484b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f49340; body size 25 bytes.
#line 1 "ENTRY_10f49340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f49340(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f49360; body size 26 bytes.
#line 1 "ENTRY_10f49360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f49360(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f49420; body size 39 bytes.
#line 1 "ENTRY_10f49420"

__declspec(naked) void FUN_10f49420(void)

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




// Reference entry 10f49450; body size 39 bytes.
#line 1 "ENTRY_10f49450"

__declspec(naked) void FUN_10f49450(void)

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




// Reference entry 10f49480; body size 39 bytes.
#line 1 "ENTRY_10f49480"

__declspec(naked) void FUN_10f49480(void)

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




// Reference entry 10f49770; body size 7 bytes.
#line 1 "ENTRY_10f49770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f49780; body size 5 bytes.
#line 1 "ENTRY_10f49780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f498d0; body size 28 bytes.
#line 1 "ENTRY_10f498d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f498d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10f49900; body size 28 bytes.
#line 1 "ENTRY_10f49900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f49900(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10f49930; body size 28 bytes.
#line 1 "ENTRY_10f49930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f49930(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10f49a20; body size 5 bytes.
#line 1 "ENTRY_10f49a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f49a30; body size 5 bytes.
#line 1 "ENTRY_10f49a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f49a40; body size 5 bytes.
#line 1 "ENTRY_10f49a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f49a50; body size 6 bytes.
#line 1 "ENTRY_10f49a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f49a50(void)

{
  return (char *)("SCIDeviceVolume");
}


// Reference entry 10f49a60; body size 5 bytes.
#line 1 "ENTRY_10f49a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f49a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f49a70; body size 27 bytes.
#line 1 "ENTRY_10f49a70"

__declspec(naked) void FUN_10f49a70(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_119516a4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f49aa0; body size 27 bytes.
#line 1 "ENTRY_10f49aa0"

__declspec(naked) void FUN_10f49aa0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11951824
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f49ad0; body size 42 bytes.
#line 1 "ENTRY_10f49ad0"

__declspec(naked) void FUN_10f49ad0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11951824
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11951880
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f49b10; body size 42 bytes.
#line 1 "ENTRY_10f49b10"

__declspec(naked) void FUN_10f49b10(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11951824
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119518e4
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f49b50; body size 32 bytes.
#line 1 "ENTRY_10f49b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f49b50(undefined4 *param_2)
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


// Reference entry 10f49be0; body size 21 bytes.
#line 1 "ENTRY_10f49be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f49be0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f49c00; body size 23 bytes.
#line 1 "ENTRY_10f49c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f49c00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f49c20; body size 3 bytes.
#line 1 "ENTRY_10f49c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f49c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f49c30; body size 23 bytes.
#line 1 "ENTRY_10f49c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f49c30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4a560; body size 9 bytes.
#line 1 "ENTRY_10f4a560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4a560(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIDeviceVolume);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4a570; body size 9 bytes.
#line 1 "ENTRY_10f4a570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4a570(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIGroupVolume);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4a650; body size 40 bytes.
#line 1 "ENTRY_10f4a650"

__declspec(naked) void FUN_10f4a650(void)

{
  __asm push ecx
  __asm push esi
  __asm push offset LAB_11951800
  __asm mov esi, ecx
  __asm push 0
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003a904
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x14], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_119517d4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f4a6b0; body size 19 bytes.
#line 1 "ENTRY_10f4a6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4a6b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4a6d0; body size 26 bytes.
#line 1 "ENTRY_10f4a6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4a6d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4aa20; body size 7 bytes.
#line 1 "ENTRY_10f4aa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4aa20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4aa30; body size 7 bytes.
#line 1 "ENTRY_10f4aa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4aa30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4aad0; body size 11 bytes.
#line 1 "ENTRY_10f4aad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4aad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfListenerGroupVolume);

  thunk_FUN_111a4f00(param_1);

}


// Reference entry 10f4ab50; body size 12 bytes.
#line 1 "ENTRY_10f4ab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10f4ab50(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10f4ab60; body size 3 bytes.
#line 1 "ENTRY_10f4ab60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ab60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f4ab70; body size 7 bytes.
#line 1 "ENTRY_10f4ab70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f4ab70(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f4ab80; body size 3 bytes.
#line 1 "ENTRY_10f4ab80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ab80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f4ab90; body size 3 bytes.
#line 1 "ENTRY_10f4ab90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ab90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f4b0b0; body size 49 bytes.
#line 1 "ENTRY_10f4b0b0"

__declspec(naked) void FUN_10f4b0b0(void)

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




// Reference entry 10f4b1a0; body size 3 bytes.
#line 1 "ENTRY_10f4b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4b1a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4b1b0; body size 3 bytes.
#line 1 "ENTRY_10f4b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4b1b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4b1c0; body size 3 bytes.
#line 1 "ENTRY_10f4b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4b1c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4b1d0; body size 3 bytes.
#line 1 "ENTRY_10f4b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4b1d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4b1e0; body size 3 bytes.
#line 1 "ENTRY_10f4b1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f4b1e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10f4b1f0; body size 6 bytes.
#line 1 "ENTRY_10f4b1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4b1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10f4b470; body size 8 bytes.
#line 1 "ENTRY_10f4b470"

__declspec(naked) void FUN_10f4b470(void)

{
  __asm add ecx, 0x40
  __asm jmp LAB_10070892
}






// Reference entry 10f4b520; body size 87 bytes.
#line 1 "ENTRY_10f4b520"

__declspec(naked) void FUN_10f4b520(void)

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




// Reference entry 10f4b9b0; body size 9 bytes.
#line 1 "ENTRY_10f4b9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4b9b0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10f4be40; body size 4 bytes.
#line 1 "ENTRY_10f4be40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4be40(int param_1)

{
  return (int)(param_1 + 0x17);
}


// Reference entry 10f4be80; body size 4 bytes.
#line 1 "ENTRY_10f4be80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4be80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x3c));
}


// Reference entry 10f4be90; body size 4 bytes.
#line 1 "ENTRY_10f4be90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f4be90(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x16));
}


// Reference entry 10f4bea0; body size 4 bytes.
#line 1 "ENTRY_10f4bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f4bea0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x15));
}


// Reference entry 10f4c1c0; body size 8 bytes.
#line 1 "ENTRY_10f4c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f4c1c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10f4c220; body size 6 bytes.
#line 1 "ENTRY_10f4c220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f4c220(void)

{
  return (char *)("SCIDeviceVolume");
}


// Reference entry 10f4c810; body size 6 bytes.
#line 1 "ENTRY_10f4c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4c810(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10f4c820; body size 6 bytes.
#line 1 "ENTRY_10f4c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4c820(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10f4c960; body size 3 bytes.
#line 1 "ENTRY_10f4c960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4c960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f4cfb0; body size 28 bytes.
#line 1 "ENTRY_10f4cfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4cfb0(undefined4 *param_1)

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


// Reference entry 10f4d0b0; body size 8 bytes.
#line 1 "ENTRY_10f4d0b0"

__declspec(naked) void FUN_10f4d0b0(void)

{
  __asm add ecx, 0x40
  __asm jmp LAB_10065348
}






// Reference entry 10f4d280; body size 9 bytes.
#line 1 "ENTRY_10f4d280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4d280(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10f4d4c0; body size 61 bytes.
#line 1 "ENTRY_10f4d4c0"

__declspec(naked) void FUN_10f4d4c0(void)

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




// Reference entry 10f4d510; body size 22 bytes.
#line 1 "ENTRY_10f4d510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4d510(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4d5f0; body size 18 bytes.
#line 1 "ENTRY_10f4d5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4d5f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4d610; body size 25 bytes.
#line 1 "ENTRY_10f4d610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4d610(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4d630; body size 25 bytes.
#line 1 "ENTRY_10f4d630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4d630(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4d650; body size 22 bytes.
#line 1 "ENTRY_10f4d650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4d650(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4d670; body size 5 bytes.
#line 1 "ENTRY_10f4d670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4d670(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4d680; body size 5 bytes.
#line 1 "ENTRY_10f4d680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4d680(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4d690; body size 63 bytes.
#line 1 "ENTRY_10f4d690"

__declspec(naked) void FUN_10f4d690(void)

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




// Reference entry 10f4d6e0; body size 91 bytes.
#line 1 "ENTRY_10f4d6e0"

__declspec(naked) void FUN_10f4d6e0(void)

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




// Reference entry 10f4d760; body size 26 bytes.
#line 1 "ENTRY_10f4d760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f4d760(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f4d780; body size 26 bytes.
#line 1 "ENTRY_10f4d780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f4d780(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f4d7a0; body size 78 bytes.
#line 1 "ENTRY_10f4d7a0"

__declspec(naked) void FUN_10f4d7a0(void)

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




// Reference entry 10f4d810; body size 3 bytes.
#line 1 "ENTRY_10f4d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d810(void)

{
  return;
}


// Reference entry 10f4d820; body size 13 bytes.
#line 1 "ENTRY_10f4d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f4d830; body size 13 bytes.
#line 1 "ENTRY_10f4d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f4d840; body size 13 bytes.
#line 1 "ENTRY_10f4d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f4d850; body size 3 bytes.
#line 1 "ENTRY_10f4d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d850(void)

{
  return;
}


// Reference entry 10f4d860; body size 3 bytes.
#line 1 "ENTRY_10f4d860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d860(void)

{
  return;
}


// Reference entry 10f4d870; body size 18 bytes.
#line 1 "ENTRY_10f4d870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f4d870(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10f4d960; body size 51 bytes.
#line 1 "ENTRY_10f4d960"

__declspec(naked) void FUN_10f4d960(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [esi + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [esi]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x1d
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm lea ecx, [esi + 8]
  __asm call LAB_1000f993
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov esi, edi
  __asm test edi, edi
  __asm _emit 0x75 __asm _emit 0xe5
  __asm pop edi
  __asm pop esi
  __asm ret
}




// Reference entry 10f4d9a0; body size 15 bytes.
#line 1 "ENTRY_10f4d9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4d9a0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10f4d9c0; body size 26 bytes.
#line 1 "ENTRY_10f4d9c0"

__declspec(naked) void FUN_10f4d9c0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea ecx, [esi + 8]
  __asm call LAB_1000f993
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop esi
  __asm ret
}




// Reference entry 10f4d9e0; body size 7 bytes.
#line 1 "ENTRY_10f4d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4d9e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f4d9f0; body size 5 bytes.
#line 1 "ENTRY_10f4d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4d9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4dc90; body size 5 bytes.
#line 1 "ENTRY_10f4dc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dc90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4dca0; body size 5 bytes.
#line 1 "ENTRY_10f4dca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4dcb0; body size 5 bytes.
#line 1 "ENTRY_10f4dcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dcb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4dcc0; body size 5 bytes.
#line 1 "ENTRY_10f4dcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dcc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4dcd0; body size 5 bytes.
#line 1 "ENTRY_10f4dcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dcd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4dce0; body size 55 bytes.
#line 1 "ENTRY_10f4dce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4dce0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

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


// Reference entry 10f4dd30; body size 9 bytes.
#line 1 "ENTRY_10f4dd30"

__declspec(naked) void FUN_10f4dd30(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm jmp LAB_1000f993
}




// Reference entry 10f4dd40; body size 15 bytes.
#line 1 "ENTRY_10f4dd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dd40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f4dde0; body size 5 bytes.
#line 1 "ENTRY_10f4dde0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4dde0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4ddf0; body size 5 bytes.
#line 1 "ENTRY_10f4ddf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4ddf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4de00; body size 5 bytes.
#line 1 "ENTRY_10f4de00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4de00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4de10; body size 5 bytes.
#line 1 "ENTRY_10f4de10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4de10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4de20; body size 5 bytes.
#line 1 "ENTRY_10f4de20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f4de20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4de30; body size 30 bytes.
#line 1 "ENTRY_10f4de30"

__declspec(naked) void FUN_10f4de30(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm _emit 0x75 __asm _emit 0xf5
  __asm pop esi
  __asm ret
}




// Reference entry 10f4df30; body size 32 bytes.
#line 1 "ENTRY_10f4df30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4df30(undefined4 *param_2)
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


// Reference entry 10f4df60; body size 16 bytes.
#line 1 "ENTRY_10f4df60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4df60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4dfa0; body size 18 bytes.
#line 1 "ENTRY_10f4dfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4dfa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4e090; body size 11 bytes.
#line 1 "ENTRY_10f4e090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4e090(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4e0a0; body size 11 bytes.
#line 1 "ENTRY_10f4e0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4e0a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4e0b0; body size 16 bytes.
#line 1 "ENTRY_10f4e0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4e0b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4e0d0; body size 13 bytes.
#line 1 "ENTRY_10f4e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4e0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4e0e0; body size 14 bytes.
#line 1 "ENTRY_10f4e0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4e0e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4e100; body size 23 bytes.
#line 1 "ENTRY_10f4e100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4e100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4e120; body size 3 bytes.
#line 1 "ENTRY_10f4e120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4e120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4e4c0; body size 42 bytes.
#line 1 "ENTRY_10f4e4c0"

__declspec(naked) void FUN_10f4e4c0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11951b48
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f4e500; body size 11 bytes.
#line 1 "ENTRY_10f4e500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f4e500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4e510; body size 5 bytes.
#line 1 "ENTRY_10f4e510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4e510(void)

{
  FUN_10f4e610();
  return;
}


// Reference entry 10f4e720; body size 3 bytes.
#line 1 "ENTRY_10f4e720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4e720(void)

{
  return;
}


// Reference entry 10f4e860; body size 5 bytes.
#line 1 "ENTRY_10f4e860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4e860(void)

{
  FUN_10f4e610();
  return;
}


// Reference entry 10f4ea60; body size 19 bytes.
#line 1 "ENTRY_10f4ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4ea60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f4eb80; body size 65 bytes.
#line 1 "ENTRY_10f4eb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f4eb80(int *param_2)
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


// Reference entry 10f4ec50; body size 14 bytes.
#line 1 "ENTRY_10f4ec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f4ec50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f4ec70; body size 14 bytes.
#line 1 "ENTRY_10f4ec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f4ec70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f4ecc0; body size 7 bytes.
#line 1 "ENTRY_10f4ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f4ecc0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f4ecd0; body size 3 bytes.
#line 1 "ENTRY_10f4ecd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ecd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f4ece0; body size 7 bytes.
#line 1 "ENTRY_10f4ece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f4ece0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f4ecf0; body size 3 bytes.
#line 1 "ENTRY_10f4ecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ecf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f4ed00; body size 3 bytes.
#line 1 "ENTRY_10f4ed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4ed00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f4ed10; body size 6 bytes.
#line 1 "ENTRY_10f4ed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4ed10(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10f4ed20; body size 6 bytes.
#line 1 "ENTRY_10f4ed20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f4ed20(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10f4ed30; body size 9 bytes.
#line 1 "ENTRY_10f4ed30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4ed30(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4ed40; body size 9 bytes.
#line 1 "ENTRY_10f4ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f4ed40(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f4ed50; body size 10 bytes.
#line 1 "ENTRY_10f4ed50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10f4ed50(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10f4ee10; body size 22 bytes.
#line 1 "ENTRY_10f4ee10"

__declspec(naked) void FUN_10f4ee10(void)

{
  __asm push esi
  __asm push 0x14
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [esi], eax
  __asm pop esi
  __asm ret
}




// Reference entry 10f4ef70; body size 20 bytes.
#line 1 "ENTRY_10f4ef70"

__declspec(naked) void FUN_10f4ef70(void)

{
  __asm cmp dword ptr [ecx + 8], 0xccccccc
  __asm _emit 0x74 __asm _emit 0x01
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}




// Reference entry 10f4ef90; body size 66 bytes.
#line 1 "ENTRY_10f4ef90"

__declspec(naked) void FUN_10f4ef90(void)

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




// Reference entry 10f4f360; body size 3 bytes.
#line 1 "ENTRY_10f4f360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4f370; body size 3 bytes.
#line 1 "ENTRY_10f4f370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4f380; body size 3 bytes.
#line 1 "ENTRY_10f4f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4f390; body size 3 bytes.
#line 1 "ENTRY_10f4f390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4f3a0; body size 3 bytes.
#line 1 "ENTRY_10f4f3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4f3b0; body size 3 bytes.
#line 1 "ENTRY_10f4f3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f3b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4f3c0; body size 92 bytes.
#line 1 "ENTRY_10f4f3c0"

__declspec(naked) void FUN_10f4f3c0(void)

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




// Reference entry 10f4f440; body size 3 bytes.
#line 1 "ENTRY_10f4f440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4f450; body size 3 bytes.
#line 1 "ENTRY_10f4f450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f4f4d0; body size 3 bytes.
#line 1 "ENTRY_10f4f4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f4f4d0(void)

{
  return;
}


// Reference entry 10f4f590; body size 11 bytes.
#line 1 "ENTRY_10f4f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f590(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f4f5a0; body size 6 bytes.
#line 1 "ENTRY_10f4f5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f4f5a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10f4f680; body size 14 bytes.
#line 1 "ENTRY_10f4f680"

__declspec(naked) void FUN_10f4f680(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}




// Reference entry 10f4f6a0; body size 13 bytes.
#line 1 "ENTRY_10f4f6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f4f6a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f4f6b0; body size 12 bytes.
#line 1 "ENTRY_10f4f6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f4f6b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10f4f6c0; body size 11 bytes.
#line 1 "ENTRY_10f4f6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f4f6c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f4f6d0; body size 43 bytes.
#line 1 "ENTRY_10f4f6d0"

__declspec(naked) void FUN_10f4f6d0(void)

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




// Reference entry 10f4f730; body size 90 bytes.
#line 1 "ENTRY_10f4f730"

__declspec(naked) void FUN_10f4f730(void)

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




// Reference entry 10f4f7b0; body size 87 bytes.
#line 1 "ENTRY_10f4f7b0"

__declspec(naked) void FUN_10f4f7b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm _emit 0x77 __asm _emit 0x47
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




// Reference entry 10f4f820; body size 35 bytes.
#line 1 "ENTRY_10f4f820"

__declspec(naked) void FUN_10f4f820(void)

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




// Reference entry 10f4f850; body size 4 bytes.
#line 1 "ENTRY_10f4f850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4f850(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10f4f860; body size 108 bytes.
#line 1 "ENTRY_10f4f860"

__declspec(naked) void FUN_10f4f860(void)

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
  __asm call LAB_1000f993
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
  __asm call LAB_1001becd
  __asm add esp, 0xc
  __asm pop edi
  __asm pop ebx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f4f950; body size 57 bytes.
#line 1 "ENTRY_10f4f950"

__declspec(naked) void FUN_10f4f950(void)

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




// Reference entry 10f4f9a0; body size 60 bytes.
#line 1 "ENTRY_10f4f9a0"

__declspec(naked) void FUN_10f4f9a0(void)

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




// Reference entry 10f4f9f0; body size 61 bytes.
#line 1 "ENTRY_10f4f9f0"

__declspec(naked) void FUN_10f4f9f0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
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




// Reference entry 10f4fa40; body size 9 bytes.
#line 1 "ENTRY_10f4fa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f4fa40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f513c0; body size 3 bytes.
#line 1 "ENTRY_10f513c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10f513c0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10f513d0; body size 6 bytes.
#line 1 "ENTRY_10f513d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f513d0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10f513e0; body size 6 bytes.
#line 1 "ENTRY_10f513e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f513e0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10f513f0; body size 6 bytes.
#line 1 "ENTRY_10f513f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f513f0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10f51400; body size 6 bytes.
#line 1 "ENTRY_10f51400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f51400(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10f514f0; body size 3 bytes.
#line 1 "ENTRY_10f514f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f514f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f51500; body size 3 bytes.
#line 1 "ENTRY_10f51500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f51500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f51640; body size 28 bytes.
#line 1 "ENTRY_10f51640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f51640(undefined4 *param_1)

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


// Reference entry 10f51de0; body size 9 bytes.
#line 1 "ENTRY_10f51de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f51de0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10f51df0; body size 130 bytes.
#line 1 "ENTRY_10f51df0"

__declspec(naked) void FUN_10f51df0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 4]
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x22
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0x10]
  __asm call dword ptr [eax + 0x14]
  __asm mov eax, dword ptr [esi + 4]
  __asm pop edi
  __asm pop esi
  __asm ret 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_11883b7c
  __asm push 1
  __asm push offset LAB_11881488
  __asm call LAB_100238df
  __asm mov eax, dword ptr [esi + 4]
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10f51ea0; body size 5 bytes.
#line 1 "ENTRY_10f51ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f51ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f51eb0; body size 70 bytes.
#line 1 "ENTRY_10f51eb0"

__declspec(naked) void FUN_10f51eb0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11951b70
  __asm mov dword ptr [ecx + 0xc], LAB_11951b80
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10f51f50; body size 10 bytes.
#line 1 "ENTRY_10f51f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f51f50(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f51f60; body size 12 bytes.
#line 1 "ENTRY_10f51f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f51f60(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f525a0; body size 8 bytes.
#line 1 "ENTRY_10f525a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f525a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f527e0; body size 8 bytes.
#line 1 "ENTRY_10f527e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f527e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10f527f0; body size 4 bytes.
#line 1 "ENTRY_10f527f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f527f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10f52800; body size 7 bytes.
#line 1 "ENTRY_10f52800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f52800(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10f52810; body size 26 bytes.
#line 1 "ENTRY_10f52810"

__declspec(naked) void FUN_10f52810(void)

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




// Reference entry 10f52830; body size 10 bytes.
#line 1 "ENTRY_10f52830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f52830(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10f53110; body size 4 bytes.
#line 1 "ENTRY_10f53110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f53110(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f53120; body size 38 bytes.
#line 1 "ENTRY_10f53120"

__declspec(naked) void FUN_10f53120(void)

{
  __asm mov eax, dword ptr [ecx + 0x1c]
  __asm push esi
  __asm cmp eax, 5
  __asm _emit 0x77 __asm _emit 0x35
  __asm jmp dword ptr [eax*4 + LAB_10f53174]
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0
  __asm push 4
  __asm push esi
  __asm call LAB_10026e0e
  __asm add esp, 0xc
  __asm mov eax, esi
  __asm pop esi
  __asm _emit 0xc2 __asm _emit 0x04
}




// Reference entry 10f531e0; body size 38 bytes.
#line 1 "ENTRY_10f531e0"

__declspec(naked) void FUN_10f531e0(void)

{
  __asm mov eax, dword ptr [ecx + 0x1c]
  __asm push esi
  __asm cmp eax, 5
  __asm _emit 0x77 __asm _emit 0x35
  __asm jmp dword ptr [eax*4 + LAB_10f53234]
  __asm mov esi, dword ptr [esp + 8]
  __asm push 0
  __asm push 5
  __asm push esi
  __asm call LAB_10026e0e
  __asm add esp, 0xc
  __asm mov eax, esi
  __asm pop esi
  __asm _emit 0xc2 __asm _emit 0x04
}




// Reference entry 10f535d0; body size 28 bytes.
#line 1 "ENTRY_10f535d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f535d0(undefined4 *param_1)

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


// Reference entry 10f552a0; body size 26 bytes.
#line 1 "ENTRY_10f552a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f552a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f552c0; body size 26 bytes.
#line 1 "ENTRY_10f552c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f552c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f552e0; body size 26 bytes.
#line 1 "ENTRY_10f552e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f552e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f55300; body size 26 bytes.
#line 1 "ENTRY_10f55300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f55300(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f55320; body size 26 bytes.
#line 1 "ENTRY_10f55320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f55320(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f55340; body size 26 bytes.
#line 1 "ENTRY_10f55340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f55340(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f55360; body size 26 bytes.
#line 1 "ENTRY_10f55360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f55360(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f55380; body size 26 bytes.
#line 1 "ENTRY_10f55380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f55380(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f553a0; body size 26 bytes.
#line 1 "ENTRY_10f553a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f553a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f553c0; body size 26 bytes.
#line 1 "ENTRY_10f553c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f553c0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f553e0; body size 26 bytes.
#line 1 "ENTRY_10f553e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f553e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f55530; body size 78 bytes.
#line 1 "ENTRY_10f55530"

__declspec(naked) void FUN_10f55530(void)

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




// Reference entry 10f555a0; body size 78 bytes.
#line 1 "ENTRY_10f555a0"

__declspec(naked) void FUN_10f555a0(void)

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




// Reference entry 10f556f0; body size 78 bytes.
#line 1 "ENTRY_10f556f0"

__declspec(naked) void FUN_10f556f0(void)

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




// Reference entry 10f55760; body size 78 bytes.
#line 1 "ENTRY_10f55760"

__declspec(naked) void FUN_10f55760(void)

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




// Reference entry 10f557d0; body size 78 bytes.
#line 1 "ENTRY_10f557d0"

__declspec(naked) void FUN_10f557d0(void)

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




// Reference entry 10f55840; body size 78 bytes.
#line 1 "ENTRY_10f55840"

__declspec(naked) void FUN_10f55840(void)

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




// Reference entry 10f558b0; body size 83 bytes.
#line 1 "ENTRY_10f558b0"

__declspec(naked) void FUN_10f558b0(void)

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




// Reference entry 10f55920; body size 6 bytes.
#line 1 "ENTRY_10f55920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f55920(void)

{
  return (char *)("SCIOpHTControlGetIRRepeaterState");
}


// Reference entry 10f55930; body size 6 bytes.
#line 1 "ENTRY_10f55930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f55930(void)

{
  return (char *)("SCIOpHTControlSetIRRepeaterState");
}


// Reference entry 10f55940; body size 6 bytes.
#line 1 "ENTRY_10f55940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f55940(void)

{
  return (char *)("SCIOpHTControlSetLEDFeedbackState");
}


// Reference entry 10f55950; body size 6 bytes.
#line 1 "ENTRY_10f55950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f55950(void)

{
  return (char *)("SCIOpRenderingControlGetRoomCalibrationStatus");
}


// Reference entry 10f55ba0; body size 27 bytes.
#line 1 "ENTRY_10f55ba0"

__declspec(naked) void FUN_10f55ba0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11952040
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f55bd0; body size 27 bytes.
#line 1 "ENTRY_10f55bd0"

__declspec(naked) void FUN_10f55bd0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11951ed8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f55c00; body size 27 bytes.
#line 1 "ENTRY_10f55c00"

__declspec(naked) void FUN_10f55c00(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_119521b0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f55c30; body size 27 bytes.
#line 1 "ENTRY_10f55c30"

__declspec(naked) void FUN_10f55c30(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1195232c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f562e0; body size 134 bytes.
#line 1 "ENTRY_10f562e0"

__declspec(naked) void FUN_10f562e0(void)

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
  __asm push offset LAB_11951e38
  __asm push offset LAB_118ba554
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11951da8
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_11951df0
  __asm mov dword ptr [edi + 0x46c], LAB_11951e2c
  __asm mov byte ptr [edi + 0xd7d0], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}




// Reference entry 10f56390; body size 136 bytes.
#line 1 "ENTRY_10f56390"

__declspec(naked) void FUN_10f56390(void)

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
  __asm push offset LAB_11951d64
  __asm push offset LAB_118ba664
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11951cd4
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_11951d1c
  __asm mov dword ptr [edi + 0x46c], LAB_11951d58
  __asm mov word ptr [edi + 0xd7d0], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}




// Reference entry 10f56440; body size 9 bytes.
#line 1 "ENTRY_10f56440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f56440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlGetIRRepeaterState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f56450; body size 9 bytes.
#line 1 "ENTRY_10f56450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f56450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlSetIRRepeaterState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f56460; body size 9 bytes.
#line 1 "ENTRY_10f56460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f56460(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpHTControlSetLEDFeedbackState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f56470; body size 9 bytes.
#line 1 "ENTRY_10f56470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f56470(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpRenderingControlGetRoomCalibrationStatus);
  return (undefined4 *)(param_1);
}


// Reference entry 10f57000; body size 11 bytes.
#line 1 "ENTRY_10f57000"

/* WARNING: Removing unreachable block_10f57000 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpHTCGetIRRepeaterStateAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f57010; body size 11 bytes.
#line 1 "ENTRY_10f57010"

/* WARNING: Removing unreachable block_10f57010 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57010(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpHTCSetIRRepeaterStateAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f57020; body size 11 bytes.
#line 1 "ENTRY_10f57020"

/* WARNING: Removing unreachable block_10f57020 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpHTCSetLEDFeedbackStateAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f57030; body size 11 bytes.
#line 1 "ENTRY_10f57030"

/* WARNING: Removing unreachable block_10f57030 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57030(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpRCGetRoomCalibrationStatusAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f577c0; body size 28 bytes.
#line 1 "ENTRY_10f577c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f577c0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpHTCGetIRRepeaterStateAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10f577f0; body size 28 bytes.
#line 1 "ENTRY_10f577f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f577f0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpRCGetRoomCalibrationStatusAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10f57820; body size 7 bytes.
#line 1 "ENTRY_10f57820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57820(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f57830; body size 7 bytes.
#line 1 "ENTRY_10f57830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f57840; body size 7 bytes.
#line 1 "ENTRY_10f57840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f57850; body size 7 bytes.
#line 1 "ENTRY_10f57850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f57850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f57860; body size 18 bytes.
#line 1 "ENTRY_10f57860"

__declspec(naked) void FUN_10f57860(void)

{
  __asm mov dword ptr [ecx], LAB_119520ec
  __asm mov dword ptr [ecx + 8], LAB_11952138
  __asm jmp LAB_1007d00b
}




// Reference entry 10f57880; body size 18 bytes.
#line 1 "ENTRY_10f57880"

__declspec(naked) void FUN_10f57880(void)

{
  __asm mov dword ptr [ecx], LAB_11951f7c
  __asm mov dword ptr [ecx + 8], LAB_11951fc4
  __asm jmp LAB_1003a9e0
}




// Reference entry 10f578a0; body size 18 bytes.
#line 1 "ENTRY_10f578a0"

__declspec(naked) void FUN_10f578a0(void)

{
  __asm mov dword ptr [ecx], LAB_11952254
  __asm mov dword ptr [ecx + 8], LAB_1195229c
  __asm jmp LAB_1005b7ee
}




// Reference entry 10f578c0; body size 18 bytes.
#line 1 "ENTRY_10f578c0"

__declspec(naked) void FUN_10f578c0(void)

{
  __asm mov dword ptr [ecx], LAB_119523e4
  __asm mov dword ptr [ecx + 8], LAB_11952438
  __asm jmp LAB_10079c49
}




// Reference entry 10f58020; body size 4 bytes.
#line 1 "ENTRY_10f58020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58020(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f58030; body size 3 bytes.
#line 1 "ENTRY_10f58030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58030(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58040; body size 7 bytes.
#line 1 "ENTRY_10f58040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58040(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f58050; body size 3 bytes.
#line 1 "ENTRY_10f58050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58060; body size 7 bytes.
#line 1 "ENTRY_10f58060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58060(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f58070; body size 3 bytes.
#line 1 "ENTRY_10f58070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58070(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58080; body size 7 bytes.
#line 1 "ENTRY_10f58080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58080(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f58090; body size 3 bytes.
#line 1 "ENTRY_10f58090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58090(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f580a0; body size 7 bytes.
#line 1 "ENTRY_10f580a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f580a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f580b0; body size 3 bytes.
#line 1 "ENTRY_10f580b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f580b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f580c0; body size 7 bytes.
#line 1 "ENTRY_10f580c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f580c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f580d0; body size 3 bytes.
#line 1 "ENTRY_10f580d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f580d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f580e0; body size 7 bytes.
#line 1 "ENTRY_10f580e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f580e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f580f0; body size 3 bytes.
#line 1 "ENTRY_10f580f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f580f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58100; body size 7 bytes.
#line 1 "ENTRY_10f58100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58100(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f58110; body size 3 bytes.
#line 1 "ENTRY_10f58110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58120; body size 7 bytes.
#line 1 "ENTRY_10f58120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58120(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f58130; body size 3 bytes.
#line 1 "ENTRY_10f58130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58130(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58140; body size 7 bytes.
#line 1 "ENTRY_10f58140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58140(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f58150; body size 3 bytes.
#line 1 "ENTRY_10f58150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58150(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58160; body size 7 bytes.
#line 1 "ENTRY_10f58160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58160(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f58170; body size 3 bytes.
#line 1 "ENTRY_10f58170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58180; body size 7 bytes.
#line 1 "ENTRY_10f58180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58180(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f58190; body size 7 bytes.
#line 1 "ENTRY_10f58190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f58190(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f581a0; body size 4 bytes.
#line 1 "ENTRY_10f581a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f581b0; body size 4 bytes.
#line 1 "ENTRY_10f581b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f581c0; body size 3 bytes.
#line 1 "ENTRY_10f581c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f581d0; body size 3 bytes.
#line 1 "ENTRY_10f581d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f581e0; body size 3 bytes.
#line 1 "ENTRY_10f581e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f581f0; body size 3 bytes.
#line 1 "ENTRY_10f581f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f581f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58200; body size 3 bytes.
#line 1 "ENTRY_10f58200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58210; body size 3 bytes.
#line 1 "ENTRY_10f58210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58210(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58220; body size 3 bytes.
#line 1 "ENTRY_10f58220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58220(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58230; body size 3 bytes.
#line 1 "ENTRY_10f58230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58240; body size 3 bytes.
#line 1 "ENTRY_10f58240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58250; body size 3 bytes.
#line 1 "ENTRY_10f58250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f58260; body size 3 bytes.
#line 1 "ENTRY_10f58260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f58260(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f5e690; body size 8 bytes.
#line 1 "ENTRY_10f5e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f5e690(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10f5e800; body size 7 bytes.
#line 1 "ENTRY_10f5e800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f5e800(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10f61560; body size 7 bytes.
#line 1 "ENTRY_10f61560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f61560(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd7d1));
}


// Reference entry 10f61580; body size 7 bytes.
#line 1 "ENTRY_10f61580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f61580(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd7d0));
}


// Reference entry 10f61880; body size 6 bytes.
#line 1 "ENTRY_10f61880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f61880(void)

{
  return (char *)("SCIOpHTControlGetIRRepeaterState");
}


// Reference entry 10f61890; body size 6 bytes.
#line 1 "ENTRY_10f61890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f61890(void)

{
  return (char *)("SCIOpHTControlSetIRRepeaterState");
}


// Reference entry 10f618a0; body size 6 bytes.
#line 1 "ENTRY_10f618a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f618a0(void)

{
  return (char *)("SCIOpHTControlSetLEDFeedbackState");
}


// Reference entry 10f618b0; body size 6 bytes.
#line 1 "ENTRY_10f618b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f618b0(void)

{
  return (char *)("SCIOpRenderingControlGetRoomCalibrationStatus");
}


// Reference entry 10f62040; body size 3 bytes.
#line 1 "ENTRY_10f62040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62040(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f62050; body size 3 bytes.
#line 1 "ENTRY_10f62050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f62060; body size 3 bytes.
#line 1 "ENTRY_10f62060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62060(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f62070; body size 3 bytes.
#line 1 "ENTRY_10f62070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62070(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f62080; body size 3 bytes.
#line 1 "ENTRY_10f62080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62080(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f62090; body size 3 bytes.
#line 1 "ENTRY_10f62090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f62090(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f620a0; body size 3 bytes.
#line 1 "ENTRY_10f620a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f620b0; body size 3 bytes.
#line 1 "ENTRY_10f620b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f620c0; body size 3 bytes.
#line 1 "ENTRY_10f620c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f620d0; body size 3 bytes.
#line 1 "ENTRY_10f620d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f620e0; body size 3 bytes.
#line 1 "ENTRY_10f620e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f620e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f62da0; body size 28 bytes.
#line 1 "ENTRY_10f62da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f62da0(undefined4 *param_1)

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


// Reference entry 10f62dd0; body size 28 bytes.
#line 1 "ENTRY_10f62dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f62dd0(undefined4 *param_1)

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


// Reference entry 10f62e00; body size 28 bytes.
#line 1 "ENTRY_10f62e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f62e00(undefined4 *param_1)

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


// Reference entry 10f62e30; body size 28 bytes.
#line 1 "ENTRY_10f62e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f62e30(undefined4 *param_1)

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


// Reference entry 10f64be0; body size 26 bytes.
#line 1 "ENTRY_10f64be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f64be0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10f64c00; body size 78 bytes.
#line 1 "ENTRY_10f64c00"

__declspec(naked) void FUN_10f64c00(void)

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




// Reference entry 10f64c70; body size 130 bytes.
#line 1 "ENTRY_10f64c70"

__declspec(naked) void FUN_10f64c70(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 4]
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x22
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0x10]
  __asm call dword ptr [eax + 0x14]
  __asm mov eax, dword ptr [esi + 4]
  __asm pop edi
  __asm pop esi
  __asm ret 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_11883b7c
  __asm push 1
  __asm push offset LAB_11881488
  __asm call LAB_100238df
  __asm mov eax, dword ptr [esi + 4]
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10f64d20; body size 5 bytes.
#line 1 "ENTRY_10f64d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f64d20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f64d30; body size 6 bytes.
#line 1 "ENTRY_10f64d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f64d30(void)

{
  return (char *)("SCIOpContentDirectoryGetAlbumArtistDisplayOption");
}


// Reference entry 10f64dd0; body size 27 bytes.
#line 1 "ENTRY_10f64dd0"

__declspec(naked) void FUN_10f64dd0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1195273c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}




// Reference entry 10f64f60; body size 70 bytes.
#line 1 "ENTRY_10f64f60"

__declspec(naked) void FUN_10f64f60(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1195286c
  __asm mov dword ptr [ecx + 0xc], LAB_1195287c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10f650e0; body size 10 bytes.
#line 1 "ENTRY_10f650e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f650e0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f650f0; body size 12 bytes.
#line 1 "ENTRY_10f650f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f650f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f65180; body size 42 bytes.
#line 1 "ENTRY_10f65180"

__declspec(naked) void FUN_10f65180(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11952844
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f651c0; body size 147 bytes.
#line 1 "ENTRY_10f651c0"

__declspec(naked) void FUN_10f651c0(void)

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
  __asm mov eax, dword ptr [esi + 4]
  __asm push dword ptr [esp + 0x24]
  __asm mov eax, dword ptr [eax + 4]
  __asm add esi, eax
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x50]
  __asm push eax
  __asm mov eax, dword ptr [esi + 4]
  __asm lea ecx, [esi + 4]
  __asm push offset LAB_11952694
  __asm call dword ptr [eax + 0x68]
  __asm push eax
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11952604
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_1195264c
  __asm mov dword ptr [edi + 0x46c], LAB_11952688
  __asm mov byte ptr [edi + 0xd7d0], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}




// Reference entry 10f65280; body size 9 bytes.
#line 1 "ENTRY_10f65280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f65280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpContentDirectoryGetAlbumArtistDisplayOption);
  return (undefined4 *)(param_1);
}


// Reference entry 10f65b10; body size 11 bytes.
#line 1 "ENTRY_10f65b10"

/* WARNING: Removing unreachable block_10f65b10 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f65b10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpCDGetAlbumArtistDisplayOptionAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f65f30; body size 19 bytes.
#line 1 "ENTRY_10f65f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f65f30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f65f50; body size 28 bytes.
#line 1 "ENTRY_10f65f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f65f50(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAlbumArtistDisplayOptionAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10f65f80; body size 7 bytes.
#line 1 "ENTRY_10f65f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f65f80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f65f90; body size 18 bytes.
#line 1 "ENTRY_10f65f90"

__declspec(naked) void FUN_10f65f90(void)

{
  __asm mov dword ptr [ecx], LAB_119527e8
  __asm mov dword ptr [ecx + 8], LAB_11952834
  __asm jmp LAB_10033da7
}




// Reference entry 10f661f0; body size 3 bytes.
#line 1 "ENTRY_10f661f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f661f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f66200; body size 7 bytes.
#line 1 "ENTRY_10f66200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f66200(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f66210; body size 8 bytes.
#line 1 "ENTRY_10f66210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f66210(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f66220; body size 4 bytes.
#line 1 "ENTRY_10f66220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f66220(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f66230; body size 4 bytes.
#line 1 "ENTRY_10f66230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f66230(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f666b0; body size 8 bytes.
#line 1 "ENTRY_10f666b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f666b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10f666c0; body size 4 bytes.
#line 1 "ENTRY_10f666c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f666c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10f666d0; body size 7 bytes.
#line 1 "ENTRY_10f666d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f666d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10f666e0; body size 26 bytes.
#line 1 "ENTRY_10f666e0"

__declspec(naked) void FUN_10f666e0(void)

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




// Reference entry 10f66700; body size 10 bytes.
#line 1 "ENTRY_10f66700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f66700(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10f66d70; body size 16 bytes.
#line 1 "ENTRY_10f66d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f66d70(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f66f40; body size 7 bytes.
#line 1 "ENTRY_10f66f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f66f40(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10f675b0; body size 4 bytes.
#line 1 "ENTRY_10f675b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f675b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f676d0; body size 6 bytes.
#line 1 "ENTRY_10f676d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f676d0(void)

{
  return (char *)("SCIOpContentDirectoryGetAlbumArtistDisplayOption");
}


// Reference entry 10f678e0; body size 3 bytes.
#line 1 "ENTRY_10f678e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f678e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f68420; body size 28 bytes.
#line 1 "ENTRY_10f68420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f68420(undefined4 *param_1)

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


// Reference entry 10f68450; body size 28 bytes.
#line 1 "ENTRY_10f68450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f68450(undefined4 *param_1)

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


// Reference entry 10f68480; body size 28 bytes.
#line 1 "ENTRY_10f68480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f68480(undefined4 *param_1)

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


// Reference entry 10f69100; body size 130 bytes.
#line 1 "ENTRY_10f69100"

__declspec(naked) void FUN_10f69100(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 4]
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x22
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0x10]
  __asm call dword ptr [eax + 0x14]
  __asm mov eax, dword ptr [esi + 4]
  __asm pop edi
  __asm pop esi
  __asm ret 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_11883b7c
  __asm push 1
  __asm push offset LAB_11881488
  __asm call LAB_100238df
  __asm mov eax, dword ptr [esi + 4]
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10f691b0; body size 130 bytes.
#line 1 "ENTRY_10f691b0"

__declspec(naked) void FUN_10f691b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 4]
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x22
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0x10]
  __asm call dword ptr [eax + 0x14]
  __asm mov eax, dword ptr [esi + 4]
  __asm pop edi
  __asm pop esi
  __asm ret 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_11883b7c
  __asm push 1
  __asm push offset LAB_11881488
  __asm call LAB_100238df
  __asm mov eax, dword ptr [esi + 4]
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10f692e0; body size 25 bytes.
#line 1 "ENTRY_10f692e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f692e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f69c80; body size 16 bytes.
#line 1 "ENTRY_10f69c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f69c80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f69ca0; body size 16 bytes.
#line 1 "ENTRY_10f69ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f69ca0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f6a920; body size 28 bytes.
#line 1 "ENTRY_10f6a920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f6a920(undefined4 *param_1)

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


// Reference entry 10f6b160; body size 18 bytes.
#line 1 "ENTRY_10f6b160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6b160(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6b180; body size 32 bytes.
#line 1 "ENTRY_10f6b180"

__declspec(naked) void FUN_10f6b180(void)

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




// Reference entry 10f6b1b0; body size 22 bytes.
#line 1 "ENTRY_10f6b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f6b1b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6b1d0; body size 18 bytes.
#line 1 "ENTRY_10f6b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6b1d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6b2b0; body size 22 bytes.
#line 1 "ENTRY_10f6b2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f6b2b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6b2d0; body size 34 bytes.
#line 1 "ENTRY_10f6b2d0"

__declspec(naked) void FUN_10f6b2d0(void)

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




// Reference entry 10f6b300; body size 25 bytes.
#line 1 "ENTRY_10f6b300"

__declspec(naked) void FUN_10f6b300(void)

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




// Reference entry 10f6b320; body size 13 bytes.
#line 1 "ENTRY_10f6b320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b320(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f6b330; body size 13 bytes.
#line 1 "ENTRY_10f6b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b330(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f6b340; body size 3 bytes.
#line 1 "ENTRY_10f6b340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b340(void)

{
  return;
}


// Reference entry 10f6b4f0; body size 15 bytes.
#line 1 "ENTRY_10f6b4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b4f0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10f6b590; body size 5 bytes.
#line 1 "ENTRY_10f6b590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b5a0; body size 31 bytes.
#line 1 "ENTRY_10f6b5a0"

__declspec(naked) void FUN_10f6b5a0(void)

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




// Reference entry 10f6b6f0; body size 5 bytes.
#line 1 "ENTRY_10f6b6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b6f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b700; body size 5 bytes.
#line 1 "ENTRY_10f6b700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b710; body size 5 bytes.
#line 1 "ENTRY_10f6b710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b720; body size 5 bytes.
#line 1 "ENTRY_10f6b720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b730; body size 5 bytes.
#line 1 "ENTRY_10f6b730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b740; body size 5 bytes.
#line 1 "ENTRY_10f6b740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b750; body size 29 bytes.
#line 1 "ENTRY_10f6b750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f6b750(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10f6b8a0; body size 15 bytes.
#line 1 "ENTRY_10f6b8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b8a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f6b8c0; body size 15 bytes.
#line 1 "ENTRY_10f6b8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b8c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f6b8e0; body size 5 bytes.
#line 1 "ENTRY_10f6b8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b8f0; body size 5 bytes.
#line 1 "ENTRY_10f6b8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b900; body size 5 bytes.
#line 1 "ENTRY_10f6b900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6b900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6b910; body size 32 bytes.
#line 1 "ENTRY_10f6b910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f6b910(undefined4 *param_2)
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


// Reference entry 10f6b940; body size 16 bytes.
#line 1 "ENTRY_10f6b940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6b940(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6b960; body size 18 bytes.
#line 1 "ENTRY_10f6b960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f6b960(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6b9c0; body size 11 bytes.
#line 1 "ENTRY_10f6b9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f6b9c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6b9d0; body size 11 bytes.
#line 1 "ENTRY_10f6b9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f6b9d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6ba60; body size 11 bytes.
#line 1 "ENTRY_10f6ba60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f6ba60(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6ba70; body size 11 bytes.
#line 1 "ENTRY_10f6ba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f6ba70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6ba80; body size 16 bytes.
#line 1 "ENTRY_10f6ba80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6ba80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6baa0; body size 3 bytes.
#line 1 "ENTRY_10f6baa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6baa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6bab0; body size 52 bytes.
#line 1 "ENTRY_10f6bab0"

__declspec(naked) void FUN_10f6bab0(void)

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




// Reference entry 10f6bd70; body size 19 bytes.
#line 1 "ENTRY_10f6bd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f6bd70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f6c040; body size 65 bytes.
#line 1 "ENTRY_10f6c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f6c040(int *param_2)
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


// Reference entry 10f6c0a0; body size 14 bytes.
#line 1 "ENTRY_10f6c0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f6c0a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f6c0c0; body size 14 bytes.
#line 1 "ENTRY_10f6c0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f6c0c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f6c1d0; body size 3 bytes.
#line 1 "ENTRY_10f6c1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c1d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f6c1e0; body size 6 bytes.
#line 1 "ENTRY_10f6c1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6c1e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f6c1f0; body size 6 bytes.
#line 1 "ENTRY_10f6c1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6c1f0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f6c200; body size 20 bytes.
#line 1 "ENTRY_10f6c200"

__declspec(naked) void FUN_10f6c200(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_10037088
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10f6c370; body size 31 bytes.
#line 1 "ENTRY_10f6c370"

__declspec(naked) void FUN_10f6c370(void)

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




// Reference entry 10f6c3c0; body size 14 bytes.
#line 1 "ENTRY_10f6c3c0"

__declspec(naked) void FUN_10f6c3c0(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}




// Reference entry 10f6c7f0; body size 3 bytes.
#line 1 "ENTRY_10f6c7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6c800; body size 3 bytes.
#line 1 "ENTRY_10f6c800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6c810; body size 3 bytes.
#line 1 "ENTRY_10f6c810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6c820; body size 3 bytes.
#line 1 "ENTRY_10f6c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6c830; body size 3 bytes.
#line 1 "ENTRY_10f6c830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6c840; body size 3 bytes.
#line 1 "ENTRY_10f6c840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6c850; body size 3 bytes.
#line 1 "ENTRY_10f6c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6c860; body size 3 bytes.
#line 1 "ENTRY_10f6c860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6c860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6cb70; body size 30 bytes.
#line 1 "ENTRY_10f6cb70"

__declspec(naked) void FUN_10f6cb70(void)

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




// Reference entry 10f6cbd0; body size 3 bytes.
#line 1 "ENTRY_10f6cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f6cbd0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10f6cbe0; body size 11 bytes.
#line 1 "ENTRY_10f6cbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6cbe0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f6cc60; body size 11 bytes.
#line 1 "ENTRY_10f6cc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f6cc60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f6d050; body size 97 bytes.
#line 1 "ENTRY_10f6d050"

__declspec(naked) void FUN_10f6d050(void)

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




// Reference entry 10f6d0d0; body size 13 bytes.
#line 1 "ENTRY_10f6d0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f6d0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f6d250; body size 63 bytes.
#line 1 "ENTRY_10f6d250"

__declspec(naked) void FUN_10f6d250(void)

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




// Reference entry 10f6d2a0; body size 66 bytes.
#line 1 "ENTRY_10f6d2a0"

__declspec(naked) void FUN_10f6d2a0(void)

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




// Reference entry 10f6d300; body size 11 bytes.
#line 1 "ENTRY_10f6d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f6d300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f6d810; body size 7 bytes.
#line 1 "ENTRY_10f6d810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f6d810(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f6d820; body size 7 bytes.
#line 1 "ENTRY_10f6d820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f6d820(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f6d830; body size 6 bytes.
#line 1 "ENTRY_10f6d830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6d830(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f6d840; body size 6 bytes.
#line 1 "ENTRY_10f6d840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6d840(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10f6d850; body size 5 bytes.
#line 1 "ENTRY_10f6d850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6d850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6e500; body size 4 bytes.
#line 1 "ENTRY_10f6e500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6e500(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f6e560; body size 25 bytes.
#line 1 "ENTRY_10f6e560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f6e560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f6e740; body size 106 bytes.
#line 1 "ENTRY_10f6e740"

__declspec(naked) void FUN_10f6e740(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], LAB_11952d98
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x3c
  __asm cmp ecx, edi
  __asm _emit 0x75 __asm _emit 0x2e
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x28
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




// Reference entry 10f6ee20; body size 52 bytes.
#line 1 "ENTRY_10f6ee20"

__declspec(naked) void FUN_10f6ee20(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm movzx eax, word ptr [eax]
  __asm mov dword ptr [esp + 0xc], eax
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 0xc]
  __asm push edx
  __asm lea edx, [esp + 0xc]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret
}




// Reference entry 10f6ee70; body size 23 bytes.
#line 1 "ENTRY_10f6ee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f6ee70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(*(SCStr **)(param_1 + 4)))->m_op_ctor(param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10f6ee90; body size 7 bytes.
#line 1 "ENTRY_10f6ee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6ee90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f6f2d0; body size 122 bytes.
#line 1 "ENTRY_10f6f2d0"

__declspec(naked) void FUN_10f6f2d0(void)

{
  __asm push ebp
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov ebp, ecx
  __asm cmp dword ptr [edi + 0x24], 0
  __asm _emit 0x74 __asm _emit 0x67
  __asm push ebx
  __asm push esi
  __asm push 0x30
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esi], LAB_11952d98
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x3d
  __asm cmp ecx, edi
  __asm _emit 0x75 __asm _emit 0x2f
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x29
  __asm mov edx, dword ptr [ecx]
  __asm cmp ecx, edi
  __asm setne al
  __asm movzx eax, al
  __asm push eax
  __asm call dword ptr [edx + 0x10]
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp + 0x24], esi
  __asm pop esi
  __asm pop ebx
  __asm pop edi
  __asm pop ebp
  __asm ret 4
  __asm mov dword ptr [ebx + 0x24], ecx
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ebp + 0x24], esi
  __asm pop esi
  __asm pop ebx
  __asm pop edi
  __asm pop ebp
  __asm ret 4
}




// Reference entry 10f6f380; body size 12 bytes.
#line 1 "ENTRY_10f6f380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10f6f380(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f6f4c0; body size 5 bytes.
#line 1 "ENTRY_10f6f4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f4c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6f4d0; body size 130 bytes.
#line 1 "ENTRY_10f6f4d0"

__declspec(naked) void FUN_10f6f4d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 4]
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x22
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x18
  __asm mov eax, dword ptr [ecx]
  __asm push dword ptr [esp + 0x10]
  __asm call dword ptr [eax + 0x14]
  __asm mov eax, dword ptr [esi + 4]
  __asm pop edi
  __asm pop esi
  __asm ret 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_11883b7c
  __asm push 1
  __asm push offset LAB_11881488
  __asm call LAB_100238df
  __asm mov eax, dword ptr [esi + 4]
  __asm add esp, 0xc
  __asm pop edi
  __asm pop esi
  __asm ret 8
}




// Reference entry 10f6f7c0; body size 12 bytes.
#line 1 "ENTRY_10f6f7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f6f7c0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 2);
}


// Reference entry 10f6f7d0; body size 5 bytes.
#line 1 "ENTRY_10f6f7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f7d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6f7f0; body size 5 bytes.
#line 1 "ENTRY_10f6f7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6f800; body size 5 bytes.
#line 1 "ENTRY_10f6f800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6f820; body size 5 bytes.
#line 1 "ENTRY_10f6f820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6f830; body size 5 bytes.
#line 1 "ENTRY_10f6f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6f990; body size 52 bytes.
#line 1 "ENTRY_10f6f990"

__declspec(naked) void FUN_10f6f990(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm movzx eax, word ptr [eax]
  __asm mov dword ptr [esp + 0xc], eax
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je LAB_1148a05a
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 0xc]
  __asm push edx
  __asm lea edx, [esp + 0xc]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret
}




// Reference entry 10f6f9f0; body size 5 bytes.
#line 1 "ENTRY_10f6f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6f9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6fa00; body size 5 bytes.
#line 1 "ENTRY_10f6fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f6fa00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6fc90; body size 70 bytes.
#line 1 "ENTRY_10f6fc90"

__declspec(naked) void FUN_10f6fc90(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_11952bd0
  __asm mov dword ptr [ecx + 0xc], LAB_11952be0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}




// Reference entry 10f6fd30; body size 32 bytes.
#line 1 "ENTRY_10f6fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f6fd30(undefined4 *param_2)
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


// Reference entry 10f6fda0; body size 3 bytes.
#line 1 "ENTRY_10f6fda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6fda0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6fdb0; body size 3 bytes.
#line 1 "ENTRY_10f6fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f6fdb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f6fdc0; body size 10 bytes.
#line 1 "ENTRY_10f6fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6fdc0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f6fdd0; body size 10 bytes.
#line 1 "ENTRY_10f6fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6fdd0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f6fed0; body size 12 bytes.
#line 1 "ENTRY_10f6fed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f6fed0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f708a0; body size 11 bytes.
#line 1 "ENTRY_10f708a0"

/* WARNING: Removing unreachable block_10f708a0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f708a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RMuseGetUserSettingsAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f70ca0; body size 34 bytes.
#line 1 "ENTRY_10f70ca0"

__declspec(naked) void FUN_10f70ca0(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x15
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




// Reference entry 10f70f50; body size 18 bytes.
#line 1 "ENTRY_10f70f50"

__declspec(naked) void FUN_10f70f50(void)

{
  __asm mov dword ptr [ecx], LAB_11952b74
  __asm mov dword ptr [ecx + 8], LAB_11952bc0
  __asm jmp LAB_10046f56
}




// Reference entry 10f710f0; body size 18 bytes.
#line 1 "ENTRY_10f710f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f710f0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10f71140; body size 3 bytes.
#line 1 "ENTRY_10f71140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71140(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f71150; body size 8 bytes.
#line 1 "ENTRY_10f71150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f71150(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f71160; body size 8 bytes.
#line 1 "ENTRY_10f71160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f71160(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f71170; body size 4 bytes.
#line 1 "ENTRY_10f71170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71170(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f71180; body size 3 bytes.
#line 1 "ENTRY_10f71180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f71190; body size 30 bytes.
#line 1 "ENTRY_10f71190"

__declspec(naked) void FUN_10f71190(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x12
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}




// Reference entry 10f71550; body size 134 bytes.
#line 1 "ENTRY_10f71550"

__declspec(naked) void FUN_10f71550(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm cmp esi, 0x3fffffff
  __asm _emit 0x77 __asm _emit 0x6c
  __asm shl esi, 2
  __asm cmp esi, 0x1000
  __asm _emit 0x72 __asm _emit 0x34
  __asm lea eax, [esi + 0x23]
  __asm cmp eax, esi
  __asm _emit 0x76 __asm _emit 0x5f
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
  __asm call LAB_10076463
  __asm call LAB_10070f3b
}




// Reference entry 10f719d0; body size 8 bytes.
#line 1 "ENTRY_10f719d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f719d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10f719e0; body size 8 bytes.
#line 1 "ENTRY_10f719e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f719e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10f71a10; body size 4 bytes.
#line 1 "ENTRY_10f71a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71a10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10f71a20; body size 4 bytes.
#line 1 "ENTRY_10f71a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f71a20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10f71a30; body size 7 bytes.
#line 1 "ENTRY_10f71a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f71a30(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10f71a40; body size 7 bytes.
#line 1 "ENTRY_10f71a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f71a40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10f71a70; body size 26 bytes.
#line 1 "ENTRY_10f71a70"

__declspec(naked) void FUN_10f71a70(void)

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




// Reference entry 10f71a90; body size 26 bytes.
#line 1 "ENTRY_10f71a90"

__declspec(naked) void FUN_10f71a90(void)

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




// Reference entry 10f71ab0; body size 76 bytes.
#line 1 "ENTRY_10f71ab0"

__declspec(naked) void FUN_10f71ab0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x38
  __asm cmp ecx, esi
  __asm _emit 0x75 __asm _emit 0x2a
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [edi + 0x24], eax
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x24
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




// Reference entry 10f71b10; body size 76 bytes.
#line 1 "ENTRY_10f71b10"

__declspec(naked) void FUN_10f71b10(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x38
  __asm cmp ecx, esi
  __asm _emit 0x75 __asm _emit 0x2a
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [edi + 0x24], eax
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x24
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




// Reference entry 10f71b70; body size 10 bytes.
#line 1 "ENTRY_10f71b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f71b70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10f71b80; body size 10 bytes.
#line 1 "ENTRY_10f71b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f71b80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10f72480; body size 16 bytes.
#line 1 "ENTRY_10f72480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f72480(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f72560; body size 21 bytes.
#line 1 "ENTRY_10f72560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f72560(int param_1)

{
  if (*(int *)(param_1 + 0x6160) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6160) + 0x448c));
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 10f72580; body size 24 bytes.
#line 1 "ENTRY_10f72580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f72580(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x18) + 0x6160));
  if (iVar1 != 0) {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x448c));
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 10f725b0; body size 4 bytes.
#line 1 "ENTRY_10f725b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f725b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f725c0; body size 4 bytes.
#line 1 "ENTRY_10f725c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f725c0(int param_1)

{
  return (int)(param_1 + 0x30);
}


// Reference entry 10f725d0; body size 4 bytes.
#line 1 "ENTRY_10f725d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f725d0(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 10f725e0; body size 28 bytes.
#line 1 "ENTRY_10f725e0"

__declspec(naked) void FUN_10f725e0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6154]
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




// Reference entry 10f72610; body size 28 bytes.
#line 1 "ENTRY_10f72610"

__declspec(naked) void FUN_10f72610(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6138]
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




// Reference entry 10f72680; body size 17 bytes.
#line 1 "ENTRY_10f72680"

__declspec(naked) void FUN_10f72680(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6134]
  __asm mov eax, offset LAB_1186d2ee
  __asm test ecx, ecx
  __asm cmovne eax, ecx
  __asm ret
}




// Reference entry 10f73410; body size 7 bytes.
#line 1 "ENTRY_10f73410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f73410(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10f73630; body size 3 bytes.
#line 1 "ENTRY_10f73630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f73630(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f736d0; body size 28 bytes.
#line 1 "ENTRY_10f736d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f736d0(undefined4 *param_1)

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


// Reference entry 10f73700; body size 28 bytes.
#line 1 "ENTRY_10f73700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f73700(undefined4 *param_1)

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


// Reference entry 10f73790; body size 5 bytes.
#line 1 "ENTRY_10f73790"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f73790(void)

{ __asm jmp FUN_10093329 }


// Reference entry 10f741a0; body size 9 bytes.
#line 1 "ENTRY_10f741a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f741a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory);
  return (undefined4 *)(param_1);
}


// Reference entry 10f741b0; body size 83 bytes.
#line 1 "ENTRY_10f741b0"

__declspec(naked) void FUN_10f741b0(void)

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
  __asm mov eax, dword ptr [esi]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x14 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [eax + 0x38]
  __asm mov dword ptr [esi + 0xc], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f74650; body size 116 bytes.
#line 1 "ENTRY_10f74650"

__declspec(naked) void FUN_10f74650(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [esp + 4], esi
  __asm mov dword ptr [esi], LAB_11952e2c
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 0x20], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0xc]
  __asm mov dword ptr [esi + 0x24], eax
  __asm mov ecx, eax
  __asm mov edx, dword ptr [eax]
  __asm call dword ptr [edx + 4]
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi], LAB_11952e44
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}




// Reference entry 10f749a0; body size 14 bytes.
#line 1 "ENTRY_10f749a0"

__declspec(naked) void FUN_10f749a0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11952e18
  __asm pop ecx
  __asm ret
}




// Reference entry 10f74f00; body size 7 bytes.
#line 1 "ENTRY_10f74f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f74f00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RServiceAuthHeaderBuilderFactory);
  return;
}


// Reference entry 10f75900; body size 4 bytes.
#line 1 "ENTRY_10f75900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f75900(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x38));
}


// Reference entry 10f75910; body size 21 bytes.
#line 1 "ENTRY_10f75910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10f75910(int param_2,int param_3)
{
  int param_1 = (int )this;
  return (int)((*(int *)(param_1 + 0x10) * param_3 + param_2) * 0x10 + *(int *)(param_1 + 0x28));
}


// Reference entry 10f76300; body size 24 bytes.
#line 1 "ENTRY_10f76300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10f76300(int param_2,int param_3)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0x1c) * param_3 + param_2) * 0xc);
}


// Reference entry 10f76bb0; body size 4 bytes.
#line 1 "ENTRY_10f76bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76bb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10f76bc0; body size 4 bytes.
#line 1 "ENTRY_10f76bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76bc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x18));
}


// Reference entry 10f76be0; body size 4 bytes.
#line 1 "ENTRY_10f76be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f76be0(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 10f76bf0; body size 4 bytes.
#line 1 "ENTRY_10f76bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f76bf0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10f76d20; body size 6 bytes.
#line 1 "ENTRY_10f76d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f76d20(void)

{
  return (undefined4)(0xb);
}


// Reference entry 10f76f90; body size 13 bytes.
#line 1 "ENTRY_10f76f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76f90(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_7_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


// Reference entry 10f76fa0; body size 13 bytes.
#line 1 "ENTRY_10f76fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76fa0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_3_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


// Reference entry 10f76fb0; body size 13 bytes.
#line 1 "ENTRY_10f76fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f76fb0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_6_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


// Reference entry 10f77120; body size 13 bytes.
#line 1 "ENTRY_10f77120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f77120(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_2_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


// Reference entry 10f77130; body size 13 bytes.
#line 1 "ENTRY_10f77130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f77130(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_1_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


// Reference entry 10f77280; body size 13 bytes.
#line 1 "ENTRY_10f77280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f77280(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_4_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


// Reference entry 10f77290; body size 13 bytes.
#line 1 "ENTRY_10f77290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f77290(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  ((SCVtbl_5_0*)(*(int **)(param_1 + 0x18)))->v();
  return (undefined4)(0);
}


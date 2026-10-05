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
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int beginsWith(A...); template<class... A> int format(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); static int op_ctor(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AddAccountX { char _pad; AddAccountX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Fire { char _pad; Fire(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetZoneGroupState { char _pad; GetZoneGroupState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCHousehold { char _pad; SCHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseStackManager { char _pad; SCIBrowseStackManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIEnumerator { char _pad; SCIEnumerator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAddServiceAccount { char _pad; SCIOpAddServiceAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpZoneGroupTopologyGetZoneGroupState { char _pad; SCIOpZoneGroupTopologyGetZoneGroupState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIServiceDescriptorInternals { char _pad; SCIServiceDescriptorInternals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIStackedItemImpl { char _pad; SCIStackedItemImpl(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCITimeZone { char _pad; SCITimeZone(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCITokenManager { char _pad; SCITokenManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIZoneGroup { char _pad; SCIZoneGroup(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SetString { char _pad; SetString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SystemProperties { char _pad; SystemProperties(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ZoneGroupTopology { char _pad; ZoneGroupTopology(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
extern "C" void LAB_10006690(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000d9e0(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_1000eecb(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10014d58(void);
extern "C" void LAB_10015be0(void);
extern "C" void LAB_10018084(void);
extern "C" void LAB_1001933a(void);
extern "C" void LAB_1001b153(void);
extern "C" void LAB_10020f81(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024014(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002b2dd(void);
extern "C" void LAB_1002b855(void);
extern "C" void LAB_1002cd9a(void);
extern "C" void LAB_1002ce53(void);
extern "C" void LAB_1002e735(void);
extern "C" void LAB_1002faea(void);
extern "C" void LAB_100309cc(void);
extern "C" void LAB_10031926(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100373bc(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_10039a68(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003a59e(void);
extern "C" void LAB_1003c367(void);
extern "C" void LAB_1004175e(void);
extern "C" void LAB_10045110(void);
extern "C" void LAB_10046281(void);
extern "C" void LAB_10046f9c(void);
extern "C" void LAB_1004aa57(void);
extern "C" void LAB_1004acdc(void);
extern "C" void LAB_1004e756(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10051569(void);
extern "C" void LAB_10051c6c(void);
extern "C" void LAB_10052482(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_10056870(void);
extern "C" void LAB_100587b5(void);
extern "C" void LAB_10058b6b(void);
extern "C" void LAB_100632a0(void);
extern "C" void LAB_10063b60(void);
extern "C" void LAB_100649fc(void);
extern "C" void LAB_10068fca(void);
extern "C" void LAB_1006d534(void);
extern "C" void LAB_1006dccd(void);
extern "C" void LAB_10070743(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_100724cb(void);
extern "C" void LAB_1007e870(void);
extern "C" void LAB_1007eb95(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_10083573(void);
extern "C" void LAB_100868d6(void);
extern "C" void LAB_10087ca4(void);
extern "C" void LAB_1008805f(void);
extern "C" void LAB_1008cf0b(void);
extern "C" void LAB_1008d203(void);
extern "C" void LAB_1008ee14(void);
extern "C" void LAB_1009903f(void);
extern "C" void LAB_1009a33b(void);
extern "C" void LAB_1009a426(void);
extern "C" void LAB_1039b3f6(void);
extern "C" void LAB_103a4eeb(void);
extern "C" void LAB_103a5c4b(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_115486b5(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_11878578(void);
extern "C" void LAB_1187aec8(void);
extern "C" void LAB_1187dd78(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881488(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_118821c0(void);
extern "C" void LAB_11883660(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_11883b7c(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11885ba8(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_11889d1c(void);
extern "C" void LAB_11889d24(void);
extern "C" void LAB_1188bc78(void);
extern "C" void LAB_11891298(void);
extern "C" void LAB_118960a4(void);
extern "C" void LAB_118968d8(void);
extern "C" void LAB_11896904(void);
extern "C" void LAB_11896944(void);
extern "C" void LAB_1189698c(void);
extern "C" void LAB_118969c8(void);
extern "C" void LAB_118969d4(void);
extern "C" void LAB_11896a04(void);
extern "C" void LAB_11896a4c(void);
extern "C" void LAB_11896a88(void);
extern "C" void LAB_11896a94(void);
extern "C" void LAB_11896aa0(void);
extern "C" void LAB_11896b1c(void);
extern "C" void LAB_11896b68(void);
extern "C" void LAB_11896c00(void);
extern "C" void LAB_11896fbc(void);
extern "C" void LAB_11897008(void);
extern "C" void LAB_11897238(void);
extern "C" void LAB_11897424(void);
extern "C" void LAB_11897430(void);
extern "C" void LAB_11897458(void);
extern "C" void LAB_11897464(void);
extern "C" void LAB_11897474(void);
extern "C" void LAB_11897488(void);
extern "C" void LAB_118979c8(void);
extern "C" void LAB_11897a0c(void);
extern "C" void LAB_11897a58(void);
extern "C" void LAB_11897b28(void);
extern "C" void LAB_11897bd4(void);
extern "C" void LAB_11897c20(void);
extern "C" void LAB_11897c30(void);
extern "C" void LAB_11897d1c(void);
extern "C" void LAB_11897e34(void);
extern "C" void LAB_11897e7c(void);
extern "C" void LAB_11897e88(void);
extern "C" void LAB_11897ed0(void);
extern "C" void LAB_11897f0c(void);
extern "C" void LAB_11897f18(void);
extern "C" void LAB_11897f30(void);
extern "C" void LAB_11897f40(void);
extern "C" void LAB_11897f50(void);
extern "C" void LAB_11897f60(void);
extern "C" void LAB_11897f68(void);
extern "C" void LAB_11897f78(void);
extern "C" void LAB_11897f84(void);
extern "C" void LAB_118980ec(void);
extern "C" void LAB_11898108(void);
extern "C" void LAB_11898124(void);
extern "C" void LAB_11898140(void);
extern "C" void LAB_1189815c(void);
extern "C" void LAB_11898178(void);
extern "C" void LAB_11898194(void);
extern "C" void LAB_118981b0(void);
extern "C" void LAB_118981cc(void);
extern "C" void LAB_118981e8(void);
extern "C" void LAB_11898204(void);
extern "C" void LAB_11898220(void);
extern "C" void LAB_1189823c(void);
extern "C" void LAB_11898258(void);
extern "C" void LAB_11898274(void);
extern "C" void LAB_11898290(void);
extern "C" void LAB_118987cc(void);
extern "C" void LAB_11898edc(void);
extern "C" void LAB_1189984c(void);
extern "C" void LAB_118998dc(void);
extern "C" void LAB_11899900(void);
extern "C" void LAB_11899940(void);
extern "C" void LAB_11899964(void);
extern "C" void LAB_11899974(void);
extern "C" void LAB_11899988(void);
extern "C" void LAB_11899998(void);
extern "C" void LAB_118999ac(void);
extern "C" void LAB_118999d0(void);
extern "C" void LAB_11899a10(void);
extern "C" void LAB_11899a34(void);
extern "C" void LAB_11899a44(void);
extern "C" void LAB_11899a58(void);
extern "C" void LAB_11899a68(void);
extern "C" void LAB_11899a7c(void);
extern "C" void LAB_11899aa0(void);
extern "C" void LAB_11899ae0(void);
extern "C" void LAB_11899b04(void);
extern "C" void LAB_11899b14(void);
extern "C" void LAB_11899b28(void);
extern "C" void LAB_11899b38(void);
extern "C" void LAB_11899b4c(void);
extern "C" void LAB_11899b70(void);
extern "C" void LAB_11899bb0(void);
extern "C" void LAB_11899bd4(void);
extern "C" void LAB_11899be4(void);
extern "C" void LAB_11899bf8(void);
extern "C" void LAB_11899c08(void);
extern "C" void LAB_11899c1c(void);
extern "C" void LAB_11899c40(void);
extern "C" void LAB_11899c80(void);
extern "C" void LAB_11899ca4(void);
extern "C" void LAB_11899cb4(void);
extern "C" void LAB_11899cc8(void);
extern "C" void LAB_11899cd8(void);
extern "C" void LAB_11899cec(void);
extern "C" void LAB_11899d10(void);
extern "C" void LAB_11899d50(void);
extern "C" void LAB_11899d74(void);
extern "C" void LAB_11899d84(void);
extern "C" void LAB_11899d98(void);
extern "C" void LAB_11899da8(void);
extern "C" void LAB_11899dbc(void);
extern "C" void LAB_11899de4(void);
extern "C" void LAB_11899df8(void);
extern "C" void LAB_11899e28(void);
extern "C" void LAB_11899e3c(void);
extern "C" void LAB_11899e50(void);
extern "C" void LAB_11899ed0(void);
extern "C" void LAB_1189a0ac(void);
extern "C" void LAB_1189a0f4(void);
extern "C" void LAB_1189a130(void);
extern "C" void LAB_1189a13c(void);
extern "C" void LAB_1189a3a0(void);
extern "C" void LAB_1189a4a0(void);
extern "C" void LAB_1189a560(void);
extern "C" void LAB_1189a618(void);
extern "C" void LAB_1189a670(void);
extern "C" void LAB_1189a814(void);
extern "C" void LAB_1189aa18(void);
extern "C" void LAB_1189aa40(void);
extern "C" void LAB_1189b278(void);
extern "C" void LAB_1189b47c(void);
extern "C" void LAB_1189b488(void);
extern "C" void LAB_1189b4ac(void);
extern "C" void LAB_1189b4e8(void);
extern "C" void LAB_1189b540(void);
extern "C" void LAB_1189b550(void);
extern "C" void LAB_1189b578(void);
extern "C" void LAB_1189b5ec(void);
extern "C" void LAB_1189b600(void);
extern "C" void LAB_1189b628(void);
extern "C" void LAB_1189b638(void);
extern "C" void LAB_1189b844(void);
extern "C" void LAB_1189b850(void);
extern "C" void LAB_1189b874(void);
extern "C" void LAB_1189b8b0(void);
extern "C" void LAB_1189b908(void);
extern "C" void LAB_1189b918(void);
extern "C" void LAB_1189b940(void);
extern "C" void LAB_1189b9b4(void);
extern "C" void LAB_1189b9c8(void);
extern "C" void LAB_1189b9e4(void);
extern "C" void LAB_1189b9f4(void);
extern "C" void LAB_1189ba08(void);
extern "C" void LAB_1189bc14(void);
extern "C" void LAB_1189bc20(void);
extern "C" void LAB_1189bc44(void);
extern "C" void LAB_1189bc80(void);
extern "C" void LAB_1189bcd8(void);
extern "C" void LAB_1189bce8(void);
extern "C" void LAB_1189bd10(void);
extern "C" void LAB_1189bd84(void);
extern "C" void LAB_1189bd98(void);
extern "C" void LAB_1189bdb4(void);
extern "C" void LAB_1189bdc4(void);
extern "C" void LAB_1189c86c(void);
extern "C" void LAB_1189cc1c(void);
extern "C" void LAB_1189cc48(void);
extern "C" void LAB_1189ce44(void);
extern "C" void LAB_1189ce6c(void);
extern "C" void LAB_1189ce7c(void);
extern "C" void LAB_1189ce90(void);
extern "C" void LAB_1189cea0(void);
extern "C" void LAB_1189cfd4(void);
extern "C" void LAB_1189d01c(void);
extern "C" void LAB_1189d0a0(void);
extern "C" void LAB_1189d0d8(void);
extern "C" void LAB_1189d0fc(void);
extern "C" void LAB_1189d13c(void);
extern "C" void LAB_1189d160(void);
extern "C" void LAB_1189d170(void);
extern "C" void LAB_1189d184(void);
extern "C" void LAB_1189d194(void);
extern "C" void LAB_1189d3fc(void);
extern "C" void LAB_1189da20(void);
extern "C" unsigned char LAB_1211957c;
extern "C" unsigned char LAB_12119580;
extern "C" unsigned char LAB_12126b84;
extern "C" unsigned char LAB_121a0e68;
extern "C" unsigned char LAB_121a1248;
extern "C" unsigned char LAB_122e8a34;
extern "C" unsigned char LAB_122fc888;
extern "C" unsigned char LAB_122fca5c;

extern "C" void LAB_10006690(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000d9e0(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_1000eecb(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10014d58(void);
extern "C" void LAB_10015be0(void);
extern "C" void LAB_10018084(void);
extern "C" void LAB_1001933a(void);
extern "C" void LAB_1001b153(void);
extern "C" void LAB_10020f81(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024014(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002b2dd(void);
extern "C" void LAB_1002b855(void);
extern "C" void LAB_1002cd9a(void);
extern "C" void LAB_1002ce53(void);
extern "C" void LAB_1002e735(void);
extern "C" void LAB_1002faea(void);
extern "C" void LAB_100309cc(void);
extern "C" void LAB_10031926(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100373bc(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_10039a68(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003a59e(void);
extern "C" void LAB_1003c367(void);
extern "C" void LAB_1004175e(void);
extern "C" void LAB_10045110(void);
extern "C" void LAB_10046281(void);
extern "C" void LAB_10046f9c(void);
extern "C" void LAB_1004aa57(void);
extern "C" void LAB_1004acdc(void);
extern "C" void LAB_1004e756(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10051569(void);
extern "C" void LAB_10051c6c(void);
extern "C" void LAB_10052482(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_10056870(void);
extern "C" void LAB_100587b5(void);
extern "C" void LAB_10058b6b(void);
extern "C" void LAB_100632a0(void);
extern "C" void LAB_10063b60(void);
extern "C" void LAB_100649fc(void);
extern "C" void LAB_10068fca(void);
extern "C" void LAB_1006d534(void);
extern "C" void LAB_1006dccd(void);
extern "C" void LAB_10070743(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_100724cb(void);
extern "C" void LAB_1007e870(void);
extern "C" void LAB_1007eb95(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_10083573(void);
extern "C" void LAB_100868d6(void);
extern "C" void LAB_10087ca4(void);
extern "C" void LAB_1008805f(void);
extern "C" void LAB_1008cf0b(void);
extern "C" void LAB_1008d203(void);
extern "C" void LAB_1008ee14(void);
extern "C" void LAB_1009903f(void);
extern "C" void LAB_1009a33b(void);
extern "C" void LAB_1009a426(void);
extern "C" void LAB_1039b3f6(void);
extern "C" void LAB_103a4eeb(void);
extern "C" void LAB_103a5c4b(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_115486b5(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_11878578(void);
extern "C" void LAB_1187aec8(void);
extern "C" void LAB_1187dd78(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881488(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_118821c0(void);
extern "C" void LAB_11883660(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_11883b7c(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11885ba8(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_11889d1c(void);
extern "C" void LAB_11889d24(void);
extern "C" void LAB_1188bc78(void);
extern "C" void LAB_11891298(void);
extern "C" void LAB_118960a4(void);
extern "C" void LAB_118968d8(void);
extern "C" void LAB_11896904(void);
extern "C" void LAB_11896944(void);
extern "C" void LAB_1189698c(void);
extern "C" void LAB_118969c8(void);
extern "C" void LAB_118969d4(void);
extern "C" void LAB_11896a04(void);
extern "C" void LAB_11896a4c(void);
extern "C" void LAB_11896a88(void);
extern "C" void LAB_11896a94(void);
extern "C" void LAB_11896aa0(void);
extern "C" void LAB_11896b1c(void);
extern "C" void LAB_11896b68(void);
extern "C" void LAB_11896c00(void);
extern "C" void LAB_11896fbc(void);
extern "C" void LAB_11897008(void);
extern "C" void LAB_11897238(void);
extern "C" void LAB_11897424(void);
extern "C" void LAB_11897430(void);
extern "C" void LAB_11897458(void);
extern "C" void LAB_11897464(void);
extern "C" void LAB_11897474(void);
extern "C" void LAB_11897488(void);
extern "C" void LAB_118979c8(void);
extern "C" void LAB_11897a0c(void);
extern "C" void LAB_11897a58(void);
extern "C" void LAB_11897b28(void);
extern "C" void LAB_11897bd4(void);
extern "C" void LAB_11897c20(void);
extern "C" void LAB_11897c30(void);
extern "C" void LAB_11897d1c(void);
extern "C" void LAB_11897e34(void);
extern "C" void LAB_11897e7c(void);
extern "C" void LAB_11897e88(void);
extern "C" void LAB_11897ed0(void);
extern "C" void LAB_11897f0c(void);
extern "C" void LAB_11897f18(void);
extern "C" void LAB_11897f30(void);
extern "C" void LAB_11897f40(void);
extern "C" void LAB_11897f50(void);
extern "C" void LAB_11897f60(void);
extern "C" void LAB_11897f68(void);
extern "C" void LAB_11897f78(void);
extern "C" void LAB_11897f84(void);
extern "C" void LAB_118980ec(void);
extern "C" void LAB_11898108(void);
extern "C" void LAB_11898124(void);
extern "C" void LAB_11898140(void);
extern "C" void LAB_1189815c(void);
extern "C" void LAB_11898178(void);
extern "C" void LAB_11898194(void);
extern "C" void LAB_118981b0(void);
extern "C" void LAB_118981cc(void);
extern "C" void LAB_118981e8(void);
extern "C" void LAB_11898204(void);
extern "C" void LAB_11898220(void);
extern "C" void LAB_1189823c(void);
extern "C" void LAB_11898258(void);
extern "C" void LAB_11898274(void);
extern "C" void LAB_11898290(void);
extern "C" void LAB_118987cc(void);
extern "C" void LAB_11898edc(void);
extern "C" void LAB_1189984c(void);
extern "C" void LAB_118998dc(void);
extern "C" void LAB_11899900(void);
extern "C" void LAB_11899940(void);
extern "C" void LAB_11899964(void);
extern "C" void LAB_11899974(void);
extern "C" void LAB_11899988(void);
extern "C" void LAB_11899998(void);
extern "C" void LAB_118999ac(void);
extern "C" void LAB_118999d0(void);
extern "C" void LAB_11899a10(void);
extern "C" void LAB_11899a34(void);
extern "C" void LAB_11899a44(void);
extern "C" void LAB_11899a58(void);
extern "C" void LAB_11899a68(void);
extern "C" void LAB_11899a7c(void);
extern "C" void LAB_11899aa0(void);
extern "C" void LAB_11899ae0(void);
extern "C" void LAB_11899b04(void);
extern "C" void LAB_11899b14(void);
extern "C" void LAB_11899b28(void);
extern "C" void LAB_11899b38(void);
extern "C" void LAB_11899b4c(void);
extern "C" void LAB_11899b70(void);
extern "C" void LAB_11899bb0(void);
extern "C" void LAB_11899bd4(void);
extern "C" void LAB_11899be4(void);
extern "C" void LAB_11899bf8(void);
extern "C" void LAB_11899c08(void);
extern "C" void LAB_11899c1c(void);
extern "C" void LAB_11899c40(void);
extern "C" void LAB_11899c80(void);
extern "C" void LAB_11899ca4(void);
extern "C" void LAB_11899cb4(void);
extern "C" void LAB_11899cc8(void);
extern "C" void LAB_11899cd8(void);
extern "C" void LAB_11899cec(void);
extern "C" void LAB_11899d10(void);
extern "C" void LAB_11899d50(void);
extern "C" void LAB_11899d74(void);
extern "C" void LAB_11899d84(void);
extern "C" void LAB_11899d98(void);
extern "C" void LAB_11899da8(void);
extern "C" void LAB_11899dbc(void);
extern "C" void LAB_11899de4(void);
extern "C" void LAB_11899df8(void);
extern "C" void LAB_11899e28(void);
extern "C" void LAB_11899e3c(void);
extern "C" void LAB_11899e50(void);
extern "C" void LAB_11899ed0(void);
extern "C" void LAB_1189a0ac(void);
extern "C" void LAB_1189a0f4(void);
extern "C" void LAB_1189a130(void);
extern "C" void LAB_1189a13c(void);
extern "C" void LAB_1189a3a0(void);
extern "C" void LAB_1189a4a0(void);
extern "C" void LAB_1189a560(void);
extern "C" void LAB_1189a618(void);
extern "C" void LAB_1189a670(void);
extern "C" void LAB_1189a814(void);
extern "C" void LAB_1189aa18(void);
extern "C" void LAB_1189aa40(void);
extern "C" void LAB_1189b278(void);
extern "C" void LAB_1189b47c(void);
extern "C" void LAB_1189b488(void);
extern "C" void LAB_1189b4ac(void);
extern "C" void LAB_1189b4e8(void);
extern "C" void LAB_1189b540(void);
extern "C" void LAB_1189b550(void);
extern "C" void LAB_1189b578(void);
extern "C" void LAB_1189b5ec(void);
extern "C" void LAB_1189b600(void);
extern "C" void LAB_1189b628(void);
extern "C" void LAB_1189b638(void);
extern "C" void LAB_1189b844(void);
extern "C" void LAB_1189b850(void);
extern "C" void LAB_1189b874(void);
extern "C" void LAB_1189b8b0(void);
extern "C" void LAB_1189b908(void);
extern "C" void LAB_1189b918(void);
extern "C" void LAB_1189b940(void);
extern "C" void LAB_1189b9b4(void);
extern "C" void LAB_1189b9c8(void);
extern "C" void LAB_1189b9e4(void);
extern "C" void LAB_1189b9f4(void);
extern "C" void LAB_1189ba08(void);
extern "C" void LAB_1189bc14(void);
extern "C" void LAB_1189bc20(void);
extern "C" void LAB_1189bc44(void);
extern "C" void LAB_1189bc80(void);
extern "C" void LAB_1189bcd8(void);
extern "C" void LAB_1189bce8(void);
extern "C" void LAB_1189bd10(void);
extern "C" void LAB_1189bd84(void);
extern "C" void LAB_1189bd98(void);
extern "C" void LAB_1189bdb4(void);
extern "C" void LAB_1189bdc4(void);
extern "C" void LAB_1189c86c(void);
extern "C" void LAB_1189cc1c(void);
extern "C" void LAB_1189cc48(void);
extern "C" void LAB_1189ce44(void);
extern "C" void LAB_1189ce6c(void);
extern "C" void LAB_1189ce7c(void);
extern "C" void LAB_1189ce90(void);
extern "C" void LAB_1189cea0(void);
extern "C" void LAB_1189cfd4(void);
extern "C" void LAB_1189d01c(void);
extern "C" void LAB_1189d0a0(void);
extern "C" void LAB_1189d0d8(void);
extern "C" void LAB_1189d0fc(void);
extern "C" void LAB_1189d13c(void);
extern "C" void LAB_1189d160(void);
extern "C" void LAB_1189d170(void);
extern "C" void LAB_1189d184(void);
extern "C" void LAB_1189d194(void);
extern "C" void LAB_1189d3fc(void);
extern "C" void LAB_1189da20(void);
extern "C" unsigned char LAB_1211957c;
extern "C" unsigned char LAB_12119580;
extern "C" unsigned char LAB_12126b84;
extern "C" unsigned char LAB_121a0e68;
extern "C" unsigned char LAB_121a1248;
extern "C" unsigned char LAB_122e8a34;
extern "C" unsigned char LAB_122fc888;
extern "C" unsigned char LAB_122fca5c;

extern "C" void LAB_10006690(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000d9e0(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_1000eecb(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10014d58(void);
extern "C" void LAB_10015be0(void);
extern "C" void LAB_10018084(void);
extern "C" void LAB_1001933a(void);
extern "C" void LAB_1001b153(void);
extern "C" void LAB_10020f81(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024014(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002b2dd(void);
extern "C" void LAB_1002b855(void);
extern "C" void LAB_1002cd9a(void);
extern "C" void LAB_1002ce53(void);
extern "C" void LAB_1002e735(void);
extern "C" void LAB_1002faea(void);
extern "C" void LAB_100309cc(void);
extern "C" void LAB_10031926(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100373bc(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_10039a68(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003a59e(void);
extern "C" void LAB_1003c367(void);
extern "C" void LAB_1004175e(void);
extern "C" void LAB_10045110(void);
extern "C" void LAB_10046281(void);
extern "C" void LAB_10046f9c(void);
extern "C" void LAB_1004aa57(void);
extern "C" void LAB_1004acdc(void);
extern "C" void LAB_1004e756(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10051569(void);
extern "C" void LAB_10051c6c(void);
extern "C" void LAB_10052482(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_10056870(void);
extern "C" void LAB_100587b5(void);
extern "C" void LAB_10058b6b(void);
extern "C" void LAB_100632a0(void);
extern "C" void LAB_10063b60(void);
extern "C" void LAB_100649fc(void);
extern "C" void LAB_10068fca(void);
extern "C" void LAB_1006d534(void);
extern "C" void LAB_1006dccd(void);
extern "C" void LAB_10070743(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_100724cb(void);
extern "C" void LAB_1007e870(void);
extern "C" void LAB_1007eb95(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_10083573(void);
extern "C" void LAB_100868d6(void);
extern "C" void LAB_10087ca4(void);
extern "C" void LAB_1008805f(void);
extern "C" void LAB_1008cf0b(void);
extern "C" void LAB_1008d203(void);
extern "C" void LAB_1008ee14(void);
extern "C" void LAB_1009903f(void);
extern "C" void LAB_1009a33b(void);
extern "C" void LAB_1009a426(void);
extern "C" void LAB_1039b3f6(void);
extern "C" void LAB_103a4eeb(void);
extern "C" void LAB_103a5c4b(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_115486b5(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_11878578(void);
extern "C" void LAB_1187aec8(void);
extern "C" void LAB_1187dd78(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881488(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_118821c0(void);
extern "C" void LAB_11883660(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_11883b7c(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11885ba8(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_11889d1c(void);
extern "C" void LAB_11889d24(void);
extern "C" void LAB_1188bc78(void);
extern "C" void LAB_11891298(void);
extern "C" void LAB_118960a4(void);
extern "C" void LAB_118968d8(void);
extern "C" void LAB_11896904(void);
extern "C" void LAB_11896944(void);
extern "C" void LAB_1189698c(void);
extern "C" void LAB_118969c8(void);
extern "C" void LAB_118969d4(void);
extern "C" void LAB_11896a04(void);
extern "C" void LAB_11896a4c(void);
extern "C" void LAB_11896a88(void);
extern "C" void LAB_11896a94(void);
extern "C" void LAB_11896aa0(void);
extern "C" void LAB_11896b1c(void);
extern "C" void LAB_11896b68(void);
extern "C" void LAB_11896c00(void);
extern "C" void LAB_11896fbc(void);
extern "C" void LAB_11897008(void);
extern "C" void LAB_11897238(void);
extern "C" void LAB_11897424(void);
extern "C" void LAB_11897430(void);
extern "C" void LAB_11897458(void);
extern "C" void LAB_11897464(void);
extern "C" void LAB_11897474(void);
extern "C" void LAB_11897488(void);
extern "C" void LAB_118979c8(void);
extern "C" void LAB_11897a0c(void);
extern "C" void LAB_11897a58(void);
extern "C" void LAB_11897b28(void);
extern "C" void LAB_11897bd4(void);
extern "C" void LAB_11897c20(void);
extern "C" void LAB_11897c30(void);
extern "C" void LAB_11897d1c(void);
extern "C" void LAB_11897e34(void);
extern "C" void LAB_11897e7c(void);
extern "C" void LAB_11897e88(void);
extern "C" void LAB_11897ed0(void);
extern "C" void LAB_11897f0c(void);
extern "C" void LAB_11897f18(void);
extern "C" void LAB_11897f30(void);
extern "C" void LAB_11897f40(void);
extern "C" void LAB_11897f50(void);
extern "C" void LAB_11897f60(void);
extern "C" void LAB_11897f68(void);
extern "C" void LAB_11897f78(void);
extern "C" void LAB_11897f84(void);
extern "C" void LAB_118980ec(void);
extern "C" void LAB_11898108(void);
extern "C" void LAB_11898124(void);
extern "C" void LAB_11898140(void);
extern "C" void LAB_1189815c(void);
extern "C" void LAB_11898178(void);
extern "C" void LAB_11898194(void);
extern "C" void LAB_118981b0(void);
extern "C" void LAB_118981cc(void);
extern "C" void LAB_118981e8(void);
extern "C" void LAB_11898204(void);
extern "C" void LAB_11898220(void);
extern "C" void LAB_1189823c(void);
extern "C" void LAB_11898258(void);
extern "C" void LAB_11898274(void);
extern "C" void LAB_11898290(void);
extern "C" void LAB_118987cc(void);
extern "C" void LAB_11898edc(void);
extern "C" void LAB_1189984c(void);
extern "C" void LAB_118998dc(void);
extern "C" void LAB_11899900(void);
extern "C" void LAB_11899940(void);
extern "C" void LAB_11899964(void);
extern "C" void LAB_11899974(void);
extern "C" void LAB_11899988(void);
extern "C" void LAB_11899998(void);
extern "C" void LAB_118999ac(void);
extern "C" void LAB_118999d0(void);
extern "C" void LAB_11899a10(void);
extern "C" void LAB_11899a34(void);
extern "C" void LAB_11899a44(void);
extern "C" void LAB_11899a58(void);
extern "C" void LAB_11899a68(void);
extern "C" void LAB_11899a7c(void);
extern "C" void LAB_11899aa0(void);
extern "C" void LAB_11899ae0(void);
extern "C" void LAB_11899b04(void);
extern "C" void LAB_11899b14(void);
extern "C" void LAB_11899b28(void);
extern "C" void LAB_11899b38(void);
extern "C" void LAB_11899b4c(void);
extern "C" void LAB_11899b70(void);
extern "C" void LAB_11899bb0(void);
extern "C" void LAB_11899bd4(void);
extern "C" void LAB_11899be4(void);
extern "C" void LAB_11899bf8(void);
extern "C" void LAB_11899c08(void);
extern "C" void LAB_11899c1c(void);
extern "C" void LAB_11899c40(void);
extern "C" void LAB_11899c80(void);
extern "C" void LAB_11899ca4(void);
extern "C" void LAB_11899cb4(void);
extern "C" void LAB_11899cc8(void);
extern "C" void LAB_11899cd8(void);
extern "C" void LAB_11899cec(void);
extern "C" void LAB_11899d10(void);
extern "C" void LAB_11899d50(void);
extern "C" void LAB_11899d74(void);
extern "C" void LAB_11899d84(void);
extern "C" void LAB_11899d98(void);
extern "C" void LAB_11899da8(void);
extern "C" void LAB_11899dbc(void);
extern "C" void LAB_11899de4(void);
extern "C" void LAB_11899df8(void);
extern "C" void LAB_11899e28(void);
extern "C" void LAB_11899e3c(void);
extern "C" void LAB_11899e50(void);
extern "C" void LAB_11899ed0(void);
extern "C" void LAB_1189a0ac(void);
extern "C" void LAB_1189a0f4(void);
extern "C" void LAB_1189a130(void);
extern "C" void LAB_1189a13c(void);
extern "C" void LAB_1189a3a0(void);
extern "C" void LAB_1189a4a0(void);
extern "C" void LAB_1189a560(void);
extern "C" void LAB_1189a618(void);
extern "C" void LAB_1189a670(void);
extern "C" void LAB_1189a814(void);
extern "C" void LAB_1189aa18(void);
extern "C" void LAB_1189aa40(void);
extern "C" void LAB_1189b278(void);
extern "C" void LAB_1189b47c(void);
extern "C" void LAB_1189b488(void);
extern "C" void LAB_1189b4ac(void);
extern "C" void LAB_1189b4e8(void);
extern "C" void LAB_1189b540(void);
extern "C" void LAB_1189b550(void);
extern "C" void LAB_1189b578(void);
extern "C" void LAB_1189b5ec(void);
extern "C" void LAB_1189b600(void);
extern "C" void LAB_1189b628(void);
extern "C" void LAB_1189b638(void);
extern "C" void LAB_1189b844(void);
extern "C" void LAB_1189b850(void);
extern "C" void LAB_1189b874(void);
extern "C" void LAB_1189b8b0(void);
extern "C" void LAB_1189b908(void);
extern "C" void LAB_1189b918(void);
extern "C" void LAB_1189b940(void);
extern "C" void LAB_1189b9b4(void);
extern "C" void LAB_1189b9c8(void);
extern "C" void LAB_1189b9e4(void);
extern "C" void LAB_1189b9f4(void);
extern "C" void LAB_1189ba08(void);
extern "C" void LAB_1189bc14(void);
extern "C" void LAB_1189bc20(void);
extern "C" void LAB_1189bc44(void);
extern "C" void LAB_1189bc80(void);
extern "C" void LAB_1189bcd8(void);
extern "C" void LAB_1189bce8(void);
extern "C" void LAB_1189bd10(void);
extern "C" void LAB_1189bd84(void);
extern "C" void LAB_1189bd98(void);
extern "C" void LAB_1189bdb4(void);
extern "C" void LAB_1189bdc4(void);
extern "C" void LAB_1189c86c(void);
extern "C" void LAB_1189cc1c(void);
extern "C" void LAB_1189cc48(void);
extern "C" void LAB_1189ce44(void);
extern "C" void LAB_1189ce6c(void);
extern "C" void LAB_1189ce7c(void);
extern "C" void LAB_1189ce90(void);
extern "C" void LAB_1189cea0(void);
extern "C" void LAB_1189cfd4(void);
extern "C" void LAB_1189d01c(void);
extern "C" void LAB_1189d0a0(void);
extern "C" void LAB_1189d0d8(void);
extern "C" void LAB_1189d0fc(void);
extern "C" void LAB_1189d13c(void);
extern "C" void LAB_1189d160(void);
extern "C" void LAB_1189d170(void);
extern "C" void LAB_1189d184(void);
extern "C" void LAB_1189d194(void);
extern "C" void LAB_1189d3fc(void);
extern "C" void LAB_1189da20(void);
extern "C" unsigned char LAB_1211957c;
extern "C" unsigned char LAB_12119580;
extern "C" unsigned char LAB_12126b84;
extern "C" unsigned char LAB_121a0e68;
extern "C" unsigned char LAB_121a1248;
extern "C" unsigned char LAB_122e8a34;
extern "C" unsigned char LAB_122fc888;
extern "C" unsigned char LAB_122fca5c;

extern "C" void LAB_10006690(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000d9e0(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_1000eecb(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10014d58(void);
extern "C" void LAB_10015be0(void);
extern "C" void LAB_10018084(void);
extern "C" void LAB_1001933a(void);
extern "C" void LAB_1001b153(void);
extern "C" void LAB_10020f81(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024014(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_1002b2dd(void);
extern "C" void LAB_1002b855(void);
extern "C" void LAB_1002cd9a(void);
extern "C" void LAB_1002ce53(void);
extern "C" void LAB_1002e735(void);
extern "C" void LAB_1002faea(void);
extern "C" void LAB_100309cc(void);
extern "C" void LAB_10031926(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_100373bc(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_10039a68(void);
extern "C" void LAB_1003a1de(void);
extern "C" void LAB_1003a59e(void);
extern "C" void LAB_1003c367(void);
extern "C" void LAB_1004175e(void);
extern "C" void LAB_10045110(void);
extern "C" void LAB_10046281(void);
extern "C" void LAB_10046f9c(void);
extern "C" void LAB_1004aa57(void);
extern "C" void LAB_1004acdc(void);
extern "C" void LAB_1004e756(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10051569(void);
extern "C" void LAB_10051c6c(void);
extern "C" void LAB_10052482(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_10056870(void);
extern "C" void LAB_100587b5(void);
extern "C" void LAB_10058b6b(void);
extern "C" void LAB_100632a0(void);
extern "C" void LAB_10063b60(void);
extern "C" void LAB_100649fc(void);
extern "C" void LAB_10068fca(void);
extern "C" void LAB_1006d534(void);
extern "C" void LAB_1006dccd(void);
extern "C" void LAB_10070743(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_100724cb(void);
extern "C" void LAB_1007e870(void);
extern "C" void LAB_1007eb95(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_10083573(void);
extern "C" void LAB_100868d6(void);
extern "C" void LAB_10087ca4(void);
extern "C" void LAB_1008805f(void);
extern "C" void LAB_1008cf0b(void);
extern "C" void LAB_1008d203(void);
extern "C" void LAB_1008ee14(void);
extern "C" void LAB_1009903f(void);
extern "C" void LAB_1009a33b(void);
extern "C" void LAB_1009a426(void);
extern "C" void LAB_1039b3f6(void);
extern "C" void LAB_103a4eeb(void);
extern "C" void LAB_103a5c4b(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_11878578(void);
extern "C" void LAB_1187aec8(void);
extern "C" void LAB_1187dd78(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881488(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_118821c0(void);
extern "C" void LAB_11883660(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_11883b7c(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11885ba8(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_11889d1c(void);
extern "C" void LAB_11889d24(void);
extern "C" void LAB_1188bc78(void);
extern "C" void LAB_11891298(void);
extern "C" void LAB_118960a4(void);
extern "C" void LAB_118968d8(void);
extern "C" void LAB_11896904(void);
extern "C" void LAB_11896944(void);
extern "C" void LAB_1189698c(void);
extern "C" void LAB_118969c8(void);
extern "C" void LAB_118969d4(void);
extern "C" void LAB_11896a04(void);
extern "C" void LAB_11896a4c(void);
extern "C" void LAB_11896a88(void);
extern "C" void LAB_11896a94(void);
extern "C" void LAB_11896aa0(void);
extern "C" void LAB_11896b1c(void);
extern "C" void LAB_11896b68(void);
extern "C" void LAB_11896c00(void);
extern "C" void LAB_11896fbc(void);
extern "C" void LAB_11897008(void);
extern "C" void LAB_11897238(void);
extern "C" void LAB_11897424(void);
extern "C" void LAB_11897430(void);
extern "C" void LAB_11897458(void);
extern "C" void LAB_11897464(void);
extern "C" void LAB_11897474(void);
extern "C" void LAB_11897488(void);
extern "C" void LAB_118979c8(void);
extern "C" void LAB_11897a0c(void);
extern "C" void LAB_11897a58(void);
extern "C" void LAB_11897b28(void);
extern "C" void LAB_11897bd4(void);
extern "C" void LAB_11897c20(void);
extern "C" void LAB_11897c30(void);
extern "C" void LAB_11897d1c(void);
extern "C" void LAB_11897e34(void);
extern "C" void LAB_11897e7c(void);
extern "C" void LAB_11897e88(void);
extern "C" void LAB_11897ed0(void);
extern "C" void LAB_11897f0c(void);
extern "C" void LAB_11897f18(void);
extern "C" void LAB_11897f30(void);
extern "C" void LAB_11897f40(void);
extern "C" void LAB_11897f50(void);
extern "C" void LAB_11897f60(void);
extern "C" void LAB_11897f68(void);
extern "C" void LAB_11897f78(void);
extern "C" void LAB_11897f84(void);
extern "C" void LAB_118980ec(void);
extern "C" void LAB_11898108(void);
extern "C" void LAB_11898124(void);
extern "C" void LAB_11898140(void);
extern "C" void LAB_1189815c(void);
extern "C" void LAB_11898178(void);
extern "C" void LAB_11898194(void);
extern "C" void LAB_118981b0(void);
extern "C" void LAB_118981cc(void);
extern "C" void LAB_118981e8(void);
extern "C" void LAB_11898204(void);
extern "C" void LAB_11898220(void);
extern "C" void LAB_1189823c(void);
extern "C" void LAB_11898258(void);
extern "C" void LAB_11898274(void);
extern "C" void LAB_11898290(void);
extern "C" void LAB_118987cc(void);
extern "C" void LAB_11898edc(void);
extern "C" void LAB_1189984c(void);
extern "C" void LAB_118998dc(void);
extern "C" void LAB_11899900(void);
extern "C" void LAB_11899940(void);
extern "C" void LAB_11899964(void);
extern "C" void LAB_11899974(void);
extern "C" void LAB_11899988(void);
extern "C" void LAB_11899998(void);
extern "C" void LAB_118999ac(void);
extern "C" void LAB_118999d0(void);
extern "C" void LAB_11899a10(void);
extern "C" void LAB_11899a34(void);
extern "C" void LAB_11899a44(void);
extern "C" void LAB_11899a58(void);
extern "C" void LAB_11899a68(void);
extern "C" void LAB_11899a7c(void);
extern "C" void LAB_11899aa0(void);
extern "C" void LAB_11899ae0(void);
extern "C" void LAB_11899b04(void);
extern "C" void LAB_11899b14(void);
extern "C" void LAB_11899b28(void);
extern "C" void LAB_11899b38(void);
extern "C" void LAB_11899b4c(void);
extern "C" void LAB_11899b70(void);
extern "C" void LAB_11899bb0(void);
extern "C" void LAB_11899bd4(void);
extern "C" void LAB_11899be4(void);
extern "C" void LAB_11899bf8(void);
extern "C" void LAB_11899c08(void);
extern "C" void LAB_11899c1c(void);
extern "C" void LAB_11899c40(void);
extern "C" void LAB_11899c80(void);
extern "C" void LAB_11899ca4(void);
extern "C" void LAB_11899cb4(void);
extern "C" void LAB_11899cc8(void);
extern "C" void LAB_11899cd8(void);
extern "C" void LAB_11899cec(void);
extern "C" void LAB_11899d10(void);
extern "C" void LAB_11899d50(void);
extern "C" void LAB_11899d74(void);
extern "C" void LAB_11899d84(void);
extern "C" void LAB_11899d98(void);
extern "C" void LAB_11899da8(void);
extern "C" void LAB_11899dbc(void);
extern "C" void LAB_11899de4(void);
extern "C" void LAB_11899df8(void);
extern "C" void LAB_11899e28(void);
extern "C" void LAB_11899e3c(void);
extern "C" void LAB_11899e50(void);
extern "C" void LAB_11899ed0(void);
extern "C" void LAB_1189a0ac(void);
extern "C" void LAB_1189a0f4(void);
extern "C" void LAB_1189a130(void);
extern "C" void LAB_1189a13c(void);
extern "C" void LAB_1189a3a0(void);
extern "C" void LAB_1189a4a0(void);
extern "C" void LAB_1189a560(void);
extern "C" void LAB_1189a618(void);
extern "C" void LAB_1189a670(void);
extern "C" void LAB_1189a814(void);
extern "C" void LAB_1189aa18(void);
extern "C" void LAB_1189aa40(void);
extern "C" void LAB_1189b278(void);
extern "C" void LAB_1189b47c(void);
extern "C" void LAB_1189b488(void);
extern "C" void LAB_1189b4ac(void);
extern "C" void LAB_1189b4e8(void);
extern "C" void LAB_1189b540(void);
extern "C" void LAB_1189b550(void);
extern "C" void LAB_1189b578(void);
extern "C" void LAB_1189b5ec(void);
extern "C" void LAB_1189b600(void);
extern "C" void LAB_1189b628(void);
extern "C" void LAB_1189b638(void);
extern "C" void LAB_1189b844(void);
extern "C" void LAB_1189b850(void);
extern "C" void LAB_1189b874(void);
extern "C" void LAB_1189b8b0(void);
extern "C" void LAB_1189b908(void);
extern "C" void LAB_1189b918(void);
extern "C" void LAB_1189b940(void);
extern "C" void LAB_1189b9b4(void);
extern "C" void LAB_1189b9c8(void);
extern "C" void LAB_1189b9e4(void);
extern "C" void LAB_1189b9f4(void);
extern "C" void LAB_1189ba08(void);
extern "C" void LAB_1189bc14(void);
extern "C" void LAB_1189bc20(void);
extern "C" void LAB_1189bc44(void);
extern "C" void LAB_1189bc80(void);
extern "C" void LAB_1189bcd8(void);
extern "C" void LAB_1189bce8(void);
extern "C" void LAB_1189bd10(void);
extern "C" void LAB_1189bd84(void);
extern "C" void LAB_1189bd98(void);
extern "C" void LAB_1189bdb4(void);
extern "C" void LAB_1189bdc4(void);
extern "C" void LAB_1189c86c(void);
extern "C" void LAB_1189cc1c(void);
extern "C" void LAB_1189cc48(void);
extern "C" void LAB_1189ce44(void);
extern "C" void LAB_1189ce6c(void);
extern "C" void LAB_1189ce7c(void);
extern "C" void LAB_1189ce90(void);
extern "C" void LAB_1189cea0(void);
extern "C" void LAB_1189cfd4(void);
extern "C" void LAB_1189d01c(void);
extern "C" void LAB_1189d0a0(void);
extern "C" void LAB_1189d0d8(void);
extern "C" void LAB_1189d0fc(void);
extern "C" void LAB_1189d13c(void);
extern "C" void LAB_1189d160(void);
extern "C" void LAB_1189d170(void);
extern "C" void LAB_1189d184(void);
extern "C" void LAB_1189d194(void);
extern "C" void LAB_1189d3fc(void);
extern "C" void LAB_1189da20(void);
extern "C" unsigned char LAB_1211957c;
extern "C" unsigned char LAB_12119580;
extern "C" unsigned char LAB_12126b84;
extern "C" unsigned char LAB_121a0e68;
extern "C" unsigned char LAB_121a1248;
extern "C" unsigned char LAB_122e8a34;
extern "C" unsigned char LAB_122fc888;
extern "C" unsigned char LAB_122fca5c;


extern "C" void FUN_1002cd9a(void);
extern "C" void FUN_1008cf0b(void);

struct Recovered_Bulk { char _pad; void __thiscall m_FUN_10356ef0(int *param_2); template<class... A> int m_FUN_10356ef0(A...); void __thiscall m_FUN_10357aa0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10357aa0(A...); void __thiscall m_FUN_10357ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10357ac0(A...); void __thiscall m_FUN_10358d20(undefined4 *param_2); template<class... A> int m_FUN_10358d20(A...); void __thiscall m_FUN_10359550(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10359550(A...); void __thiscall m_FUN_10359590(int *param_2,int param_3,undefined4 param_4,undefined4 param_5); template<class... A> int m_FUN_10359590(A...); undefined4 * __thiscall m_FUN_1035a7f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1035a7f0(A...); undefined4 * __thiscall m_FUN_1035a870(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1035a870(A...); undefined4 * __thiscall m_FUN_1035a8f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1035a8f0(A...); undefined4 * __thiscall m_FUN_1035a970(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1035a970(A...); undefined4 * __thiscall m_FUN_1035a9f0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1035a9f0(A...); undefined4 * __thiscall m_FUN_1035aa70(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1035aa70(A...); undefined4 * __thiscall m_FUN_1035b130(undefined4 *param_2); template<class... A> int m_FUN_1035b130(A...); undefined4 * __thiscall m_FUN_1035b1a0(undefined4 *param_2); template<class... A> int m_FUN_1035b1a0(A...); undefined4 * __thiscall m_FUN_1035b530(undefined4 *param_2); template<class... A> int m_FUN_1035b530(A...); undefined4 * __thiscall m_FUN_1035b6e0(undefined4 *param_2); template<class... A> int m_FUN_1035b6e0(A...); undefined4 * __thiscall m_FUN_1035b790(undefined4 *param_2); template<class... A> int m_FUN_1035b790(A...); undefined4 * __thiscall m_FUN_1035b880(undefined4 *param_2); template<class... A> int m_FUN_1035b880(A...); undefined4 * __thiscall m_FUN_1035b980(undefined4 *param_2); template<class... A> int m_FUN_1035b980(A...); undefined4 * __thiscall m_FUN_1035bb50(undefined4 param_2); template<class... A> int m_FUN_1035bb50(A...); undefined4 * __thiscall m_FUN_1035bb70(undefined4 param_2); template<class... A> int m_FUN_1035bb70(A...); undefined4 * __thiscall m_FUN_1035bb90(undefined4 param_2); template<class... A> int m_FUN_1035bb90(A...); undefined4 * __thiscall m_FUN_1035bd80(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035bd80(A...); undefined4 * __thiscall m_FUN_1035bd90(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035bd90(A...); undefined4 * __thiscall m_FUN_1035bda0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035bda0(A...); undefined4 * __thiscall m_FUN_1035bdb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035bdb0(A...); undefined4 * __thiscall m_FUN_1035bea0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035bea0(A...); undefined4 * __thiscall m_FUN_1035beb0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035beb0(A...); undefined4 * __thiscall m_FUN_1035bed0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035bed0(A...); undefined4 * __thiscall m_FUN_1035bee0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035bee0(A...); undefined4 * __thiscall m_FUN_1035c000(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035c000(A...); undefined4 * __thiscall m_FUN_1035c020(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035c020(A...); undefined4 * __thiscall m_FUN_1035c030(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035c030(A...); undefined4 * __thiscall m_FUN_1035c040(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035c040(A...); undefined4 * __thiscall m_FUN_1035c050(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035c050(A...); undefined4 * __thiscall m_FUN_1035c0d0(undefined4 *param_2); template<class... A> int m_FUN_1035c0d0(A...); undefined4 * __thiscall m_FUN_1035c0e0(undefined4 param_2); template<class... A> int m_FUN_1035c0e0(A...); undefined4 * __thiscall m_FUN_1035c100(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1035c100(A...); undefined4 * __thiscall m_FUN_1035c120(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1035c120(A...); undefined4 * __thiscall m_FUN_1035c140(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1035c140(A...); undefined4 * __thiscall m_FUN_1035c160(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035c160(A...); undefined4 * __thiscall m_FUN_1035c170(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035c170(A...); undefined4 * __thiscall m_FUN_1035c190(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035c190(A...); undefined4 * __thiscall m_FUN_1035c1a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1035c1a0(A...); undefined4 * __thiscall m_FUN_1035c1e0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1035c1e0(A...); undefined4 * __thiscall m_FUN_1035c220(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1035c220(A...); undefined4 * __thiscall m_FUN_1035c990(undefined4 *param_2); template<class... A> int m_FUN_1035c990(A...); undefined4 * __thiscall m_FUN_1035cbe0(undefined4 *param_2); template<class... A> int m_FUN_1035cbe0(A...); undefined4 * __thiscall m_FUN_1035cc40(undefined4 param_2); template<class... A> int m_FUN_1035cc40(A...); undefined4 * __thiscall m_FUN_1035cc80(undefined4 param_2); template<class... A> int m_FUN_1035cc80(A...); undefined4 * __thiscall m_FUN_1035cd80(undefined4 param_2,undefined4 param_3,undefined1 param_4); template<class... A> int m_FUN_1035cd80(A...); undefined4 * __thiscall m_FUN_1035ce50(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5); template<class... A> int m_FUN_1035ce50(A...); undefined4 * __thiscall m_FUN_1035cee0(undefined4 param_2,undefined4 param_3,undefined1 param_4,
            undefined1 param_5); template<class... A> int m_FUN_1035cee0(A...); undefined4 * __thiscall m_FUN_1035d140(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1035d140(A...); undefined4 * __thiscall m_FUN_1035d180(undefined4 param_2,undefined4 param_3,undefined1 param_4); template<class... A> int m_FUN_1035d180(A...); undefined4 * __thiscall m_FUN_1035d1c0(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_1035d1c0(A...); undefined4 * __thiscall m_FUN_1035d260(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_1035d260(A...); undefined4 * __thiscall m_FUN_1035d310(undefined4 param_2); template<class... A> int m_FUN_1035d310(A...); undefined4 * __thiscall m_FUN_1035d340(undefined4 param_2); template<class... A> int m_FUN_1035d340(A...); undefined4 * __thiscall m_FUN_1035d370(undefined4 param_2); template<class... A> int m_FUN_1035d370(A...); undefined4 * __thiscall m_FUN_1035d3a0(undefined4 param_2,undefined1 param_3); template<class... A> int m_FUN_1035d3a0(A...); undefined4 * __thiscall m_FUN_1035d3e0(undefined4 param_2); template<class... A> int m_FUN_1035d3e0(A...); undefined4 * __thiscall m_FUN_1035d410(undefined4 param_2); template<class... A> int m_FUN_1035d410(A...); undefined4 * __thiscall m_FUN_1035d440(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1035d440(A...); undefined4 * __thiscall m_FUN_1035d470(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1035d470(A...); undefined4 * __thiscall m_FUN_1035d4b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1035d4b0(A...); undefined4 * __thiscall m_FUN_1035d4f0(undefined4 param_2); template<class... A> int m_FUN_1035d4f0(A...); undefined4 * __thiscall m_FUN_1035d520(undefined4 param_2); template<class... A> int m_FUN_1035d520(A...); undefined4 * __thiscall m_FUN_1035d550(undefined4 param_2); template<class... A> int m_FUN_1035d550(A...); undefined4 * __thiscall m_FUN_1035d8e0(undefined4 param_2); template<class... A> int m_FUN_1035d8e0(A...); undefined4 * __thiscall m_FUN_1035da80(undefined4 param_2); template<class... A> int m_FUN_1035da80(A...); undefined4 * __thiscall m_FUN_1035f4a0(undefined4 param_2); template<class... A> int m_FUN_1035f4a0(A...); undefined4 * __thiscall m_FUN_1035f610(undefined4 param_2); template<class... A> int m_FUN_1035f610(A...); undefined4 * __thiscall m_FUN_1035f780(undefined4 param_2); template<class... A> int m_FUN_1035f780(A...); undefined4 * __thiscall m_FUN_1035fa40(undefined4 param_2); template<class... A> int m_FUN_1035fa40(A...); undefined4 * __thiscall m_FUN_1035fd60(undefined4 param_2); template<class... A> int m_FUN_1035fd60(A...); undefined4 * __thiscall m_FUN_1035fe40(undefined4 param_2); template<class... A> int m_FUN_1035fe40(A...); undefined4 * __thiscall m_FUN_1035fe90(undefined4 *param_2); template<class... A> int m_FUN_1035fe90(A...); undefined4 * __thiscall m_FUN_1035ff50(undefined4 param_2); template<class... A> int m_FUN_1035ff50(A...); undefined4 * __thiscall m_FUN_1035ff60(undefined4 param_2,int param_3); template<class... A> int m_FUN_1035ff60(A...); int * __thiscall m_FUN_10365ec0(int *param_2); template<class... A> int m_FUN_10365ec0(A...); int * __thiscall m_FUN_10366230(int *param_2); template<class... A> int m_FUN_10366230(A...); int * __thiscall m_FUN_10366300(int *param_2); template<class... A> int m_FUN_10366300(A...); int * __thiscall m_FUN_10366360(int *param_2); template<class... A> int m_FUN_10366360(A...); int * __thiscall m_FUN_103664a0(int *param_2); template<class... A> int m_FUN_103664a0(A...); undefined4 * __thiscall m_FUN_103665c0(undefined4 *param_2); template<class... A> int m_FUN_103665c0(A...); undefined4 * __thiscall m_FUN_10366660(undefined4 *param_2); template<class... A> int m_FUN_10366660(A...); int * __thiscall m_FUN_103666b0(int *param_2); template<class... A> int m_FUN_103666b0(A...); bool __thiscall m_FUN_10366750(int *param_2); template<class... A> int m_FUN_10366750(A...); bool __thiscall m_FUN_10366770(int *param_2); template<class... A> int m_FUN_10366770(A...); bool __thiscall m_FUN_10366790(int *param_2); template<class... A> int m_FUN_10366790(A...); bool __thiscall m_FUN_103667b0(int *param_2); template<class... A> int m_FUN_103667b0(A...); bool __thiscall m_FUN_103667d0(int *param_2); template<class... A> int m_FUN_103667d0(A...); bool __thiscall m_FUN_103667f0(int *param_2); template<class... A> int m_FUN_103667f0(A...); bool __thiscall m_FUN_10366810(int *param_2); template<class... A> int m_FUN_10366810(A...); bool __thiscall m_FUN_10366830(int *param_2); template<class... A> int m_FUN_10366830(A...); bool __thiscall m_FUN_10366850(int *param_2); template<class... A> int m_FUN_10366850(A...); bool __thiscall m_FUN_10366870(int *param_2); template<class... A> int m_FUN_10366870(A...); bool __thiscall m_FUN_10366890(int *param_2); template<class... A> int m_FUN_10366890(A...); bool __thiscall m_FUN_103668b0(int *param_2); template<class... A> int m_FUN_103668b0(A...); bool __thiscall m_FUN_103668d0(int *param_2); template<class... A> int m_FUN_103668d0(A...); bool __thiscall m_FUN_103668f0(int *param_2); template<class... A> int m_FUN_103668f0(A...); bool __thiscall m_FUN_10366910(int *param_2); template<class... A> int m_FUN_10366910(A...); bool __thiscall m_FUN_10366930(int *param_2); template<class... A> int m_FUN_10366930(A...); int __thiscall m_FUN_10366d30(int param_2); template<class... A> int m_FUN_10366d30(A...); int __thiscall m_FUN_10366d40(int param_2); template<class... A> int m_FUN_10366d40(A...); undefined4 * __thiscall m_FUN_10367600(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10367600(A...); undefined4 * __thiscall m_FUN_10367690(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10367690(A...); void __thiscall m_FUN_10367740(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10367740(A...); void __thiscall m_FUN_10367760(int *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10367760(A...); void __thiscall m_FUN_10367980(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10367980(A...); void __thiscall m_FUN_103679d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103679d0(A...); void __thiscall m_FUN_1036a8f0(int param_2); template<class... A> int m_FUN_1036a8f0(A...); uint __thiscall m_FUN_1036a920(uint param_2); template<class... A> int m_FUN_1036a920(A...); uint __thiscall m_FUN_1036a970(uint param_2); template<class... A> int m_FUN_1036a970(A...); uint __thiscall m_FUN_1036a9b0(uint param_2); template<class... A> int m_FUN_1036a9b0(A...); void __thiscall m_FUN_1036b960(int *param_2,int param_3); template<class... A> int m_FUN_1036b960(A...); int * __thiscall m_FUN_1036cde0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_1036cde0(A...); void __thiscall m_FUN_1036d4f0(int *param_2,int param_3); template<class... A> int m_FUN_1036d4f0(A...); void __thiscall m_FUN_1036d510(int *param_2,int param_3); template<class... A> int m_FUN_1036d510(A...); void __thiscall m_FUN_1036da30(int param_2); template<class... A> int m_FUN_1036da30(A...); void __thiscall m_FUN_1036da50(int param_2); template<class... A> int m_FUN_1036da50(A...); void __thiscall m_FUN_1036da70(int param_2); template<class... A> int m_FUN_1036da70(A...); void __thiscall m_FUN_1036da90(int param_2); template<class... A> int m_FUN_1036da90(A...); void __thiscall m_FUN_1036dab0(int param_2); template<class... A> int m_FUN_1036dab0(A...); void __thiscall m_FUN_1036dad0(int param_2); template<class... A> int m_FUN_1036dad0(A...); void __thiscall m_FUN_1036daf0(int param_2); template<class... A> int m_FUN_1036daf0(A...); void __thiscall m_FUN_1036db10(int param_2); template<class... A> int m_FUN_1036db10(A...); void __thiscall m_FUN_1036db30(int param_2); template<class... A> int m_FUN_1036db30(A...); void __thiscall m_FUN_1036db50(int param_2); template<class... A> int m_FUN_1036db50(A...); void __thiscall m_FUN_1036db70(int *param_2); template<class... A> int m_FUN_1036db70(A...); void __thiscall m_FUN_1036dbd0(int *param_2); template<class... A> int m_FUN_1036dbd0(A...); void __thiscall m_FUN_1036dd10(undefined4 param_2); template<class... A> int m_FUN_1036dd10(A...); void __thiscall m_FUN_1036dd20(undefined4 param_2); template<class... A> int m_FUN_1036dd20(A...); void __thiscall m_FUN_1036dd30(undefined4 param_2); template<class... A> int m_FUN_1036dd30(A...); void __thiscall m_FUN_1036dd40(undefined4 param_2); template<class... A> int m_FUN_1036dd40(A...); void __thiscall m_FUN_1036dd50(undefined4 param_2); template<class... A> int m_FUN_1036dd50(A...); void __thiscall m_FUN_1036dd60(undefined4 param_2); template<class... A> int m_FUN_1036dd60(A...); void __thiscall m_FUN_1036dd70(undefined4 param_2); template<class... A> int m_FUN_1036dd70(A...); void __thiscall m_FUN_1036dd80(undefined4 param_2); template<class... A> int m_FUN_1036dd80(A...); void __thiscall m_FUN_1036df00(undefined4 *param_2); template<class... A> int m_FUN_1036df00(A...); void __thiscall m_FUN_1036df40(undefined4 *param_2); template<class... A> int m_FUN_1036df40(A...); void __thiscall m_FUN_1036e910(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1036e910(A...); void __thiscall m_FUN_1036e930(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1036e930(A...); void __thiscall m_FUN_1036ea40(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1036ea40(A...); void __thiscall m_FUN_1036ea60(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_1036ea60(A...); void __thiscall m_FUN_1036ea80(undefined4 *param_2); template<class... A> int m_FUN_1036ea80(A...); void __thiscall m_FUN_1036eaa0(undefined4 *param_2); template<class... A> int m_FUN_1036eaa0(A...); void __thiscall m_FUN_1036eab0(undefined4 *param_2); template<class... A> int m_FUN_1036eab0(A...); void __thiscall m_FUN_1036eac0(undefined4 *param_2); template<class... A> int m_FUN_1036eac0(A...); void __thiscall m_FUN_1036eae0(undefined4 *param_2); template<class... A> int m_FUN_1036eae0(A...); void __thiscall m_FUN_1036eaf0(undefined4 *param_2); template<class... A> int m_FUN_1036eaf0(A...); void __thiscall m_FUN_1036efa0(undefined4 *param_2); template<class... A> int m_FUN_1036efa0(A...); void __thiscall m_FUN_103717b0(undefined4 *param_2); template<class... A> int m_FUN_103717b0(A...); void __thiscall m_FUN_103717c0(undefined4 *param_2); template<class... A> int m_FUN_103717c0(A...); void __thiscall m_FUN_103717d0(undefined4 *param_2); template<class... A> int m_FUN_103717d0(A...); void __thiscall m_FUN_103717e0(undefined4 *param_2); template<class... A> int m_FUN_103717e0(A...); uint __thiscall m_FUN_103717f0(byte *param_2); template<class... A> int m_FUN_103717f0(A...); void __thiscall m_FUN_10376e40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10376e40(A...); void __thiscall m_FUN_10377b70(undefined4 *param_2); template<class... A> int m_FUN_10377b70(A...); void __thiscall m_FUN_10377b80(undefined4 *param_2); template<class... A> int m_FUN_10377b80(A...); void __thiscall m_FUN_10377b90(undefined4 *param_2); template<class... A> int m_FUN_10377b90(A...); void __thiscall m_FUN_10377ba0(undefined4 *param_2); template<class... A> int m_FUN_10377ba0(A...); void __thiscall m_FUN_10377bb0(undefined4 *param_2); template<class... A> int m_FUN_10377bb0(A...); void __thiscall m_FUN_10377bc0(undefined4 *param_2); template<class... A> int m_FUN_10377bc0(A...); SCStr * __thiscall m_FUN_103796f0(SCStr *param_2); template<class... A> int m_FUN_103796f0(A...); int * __thiscall m_FUN_10379710(int *param_2); template<class... A> int m_FUN_10379710(A...); SCStr * __thiscall m_FUN_1037aab0(SCStr *param_2); template<class... A> int m_FUN_1037aab0(A...); SCStr * __thiscall m_FUN_1037e9d0(SCStr *param_2); template<class... A> int m_FUN_1037e9d0(A...); void __thiscall m_FUN_10393a70(undefined4 *param_2); template<class... A> int m_FUN_10393a70(A...); int __thiscall m_FUN_10395d40(undefined4 param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4, unsigned int recovered_unused_stack_5); template<class... A> int m_FUN_10395d40(A...); void __thiscall m_FUN_103967a0(undefined4 param_2); template<class... A> int m_FUN_103967a0(A...); void __thiscall m_FUN_103967b0(undefined4 param_2); template<class... A> int m_FUN_103967b0(A...); void __thiscall m_FUN_103967c0(undefined4 param_2); template<class... A> int m_FUN_103967c0(A...); void __thiscall m_FUN_103967d0(undefined4 param_2); template<class... A> int m_FUN_103967d0(A...); void __thiscall m_FUN_103967e0(undefined4 param_2); template<class... A> int m_FUN_103967e0(A...); void __thiscall m_FUN_10396810(undefined1 param_2); template<class... A> int m_FUN_10396810(A...); void __thiscall m_FUN_10397310(undefined2 param_2); template<class... A> int m_FUN_10397310(A...); void __thiscall m_FUN_10397320(undefined4 param_2); template<class... A> int m_FUN_10397320(A...); void __thiscall m_FUN_10399ea0(int *param_2); template<class... A> int m_FUN_10399ea0(A...); void __thiscall m_FUN_1039a5a0(int *param_2); template<class... A> int m_FUN_1039a5a0(A...); void __thiscall m_FUN_1039a5c0(int param_2); template<class... A> int m_FUN_1039a5c0(A...); void __thiscall m_FUN_1039a990(int *param_2); template<class... A> int m_FUN_1039a990(A...); int * __thiscall m_FUN_1039ec00(int *param_2); template<class... A> int m_FUN_1039ec00(A...); int * __thiscall m_FUN_1039ec20(int *param_2); template<class... A> int m_FUN_1039ec20(A...); int * __thiscall m_FUN_1039ec40(int *param_2); template<class... A> int m_FUN_1039ec40(A...); undefined4 * __thiscall m_FUN_1039f240(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_1039f240(A...); int __thiscall m_FUN_103a0820(undefined4 param_2); template<class... A> int m_FUN_103a0820(A...); int __thiscall m_FUN_103a0830(undefined4 param_2); template<class... A> int m_FUN_103a0830(A...); undefined4 * __thiscall m_FUN_103a4240(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_103a4240(A...); undefined4 * __thiscall m_FUN_103a4260(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103a4260(A...); SCStr * __thiscall m_FUN_103a4370(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a4370(A...); undefined4 * __thiscall m_FUN_103a43a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103a43a0(A...); SCStr * __thiscall m_FUN_103a43e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103a43e0(A...); int * __thiscall m_FUN_103a4420(int *param_2); template<class... A> int m_FUN_103a4420(A...); int * __thiscall m_FUN_103a4580(int *param_2); template<class... A> int m_FUN_103a4580(A...); int * __thiscall m_FUN_103a46a0(int *param_2); template<class... A> int m_FUN_103a46a0(A...); int * __thiscall m_FUN_103a4720(int *param_2); template<class... A> int m_FUN_103a4720(A...); int * __thiscall m_FUN_103a4740(int *param_2); template<class... A> int m_FUN_103a4740(A...); void __thiscall m_FUN_103a4ac0(undefined4 *param_2); template<class... A> int m_FUN_103a4ac0(A...); undefined4 * __thiscall m_FUN_103a6080(undefined4 param_2); template<class... A> int m_FUN_103a6080(A...); undefined4 * __thiscall m_FUN_103a60a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103a60a0(A...); undefined4 * __thiscall m_FUN_103a60c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103a60c0(A...); undefined4 * __thiscall m_FUN_103a60e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103a60e0(A...); undefined4 * __thiscall m_FUN_103a6100(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103a6100(A...); undefined4 * __thiscall m_FUN_103a61c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a61c0(A...); undefined4 * __thiscall m_FUN_103a61d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a61d0(A...); undefined4 * __thiscall m_FUN_103a6260(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a6260(A...); undefined4 * __thiscall m_FUN_103a6270(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a6270(A...); undefined4 * __thiscall m_FUN_103a62a0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103a62a0(A...); undefined4 * __thiscall m_FUN_103a62c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a62c0(A...); undefined4 * __thiscall m_FUN_103a62e0(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a62e0(A...); undefined4 * __thiscall m_FUN_103a6300(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a6300(A...); undefined4 * __thiscall m_FUN_103a6320(undefined4 *param_2); template<class... A> int m_FUN_103a6320(A...); undefined4 * __thiscall m_FUN_103a6370(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a6370(A...); undefined4 * __thiscall m_FUN_103a6380(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a6380(A...); undefined4 * __thiscall m_FUN_103a7010(undefined4 param_2); template<class... A> int m_FUN_103a7010(A...); undefined4 * __thiscall m_FUN_103a7050(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7); template<class... A> int m_FUN_103a7050(A...); undefined4 * __thiscall m_FUN_103a7300(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6); template<class... A> int m_FUN_103a7300(A...); undefined4 * __thiscall m_FUN_103a7670(undefined4 param_2); template<class... A> int m_FUN_103a7670(A...); int * __thiscall m_FUN_103a8ac0(int *param_2); template<class... A> int m_FUN_103a8ac0(A...); undefined4 * __thiscall m_FUN_103a8b20(undefined4 *param_2); template<class... A> int m_FUN_103a8b20(A...); undefined4 * __thiscall m_FUN_103a8b70(char param_2); template<class... A> int m_FUN_103a8b70(A...); bool __thiscall m_FUN_103a8ba0(int *param_2); template<class... A> int m_FUN_103a8ba0(A...); bool __thiscall m_FUN_103a8bc0(int *param_2); template<class... A> int m_FUN_103a8bc0(A...); bool __thiscall m_FUN_103a8be0(uint *param_2); template<class... A> int m_FUN_103a8be0(A...); bool __thiscall m_FUN_103a8c10(int *param_2); template<class... A> int m_FUN_103a8c10(A...); bool __thiscall m_FUN_103a8c30(int *param_2); template<class... A> int m_FUN_103a8c30(A...); bool __thiscall m_FUN_103a8c50(uint *param_2); template<class... A> int m_FUN_103a8c50(A...); void __thiscall m_FUN_103a8d90(int *param_2,uint param_3); template<class... A> int m_FUN_103a8d90(A...); void __thiscall m_FUN_103a8f50(undefined4 *param_2); template<class... A> int m_FUN_103a8f50(A...); undefined4 * __thiscall m_FUN_103a8f70(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103a8f70(A...); int __thiscall m_FUN_103a9100(int *param_2); template<class... A> int m_FUN_103a9100(A...); void __thiscall m_FUN_103a9220(int *param_2,int param_3); template<class... A> int m_FUN_103a9220(A...); int * __thiscall m_FUN_103a92d0(int param_2); template<class... A> int m_FUN_103a92d0(A...); int * __thiscall m_FUN_103a92f0(int param_2); template<class... A> int m_FUN_103a92f0(A...); int * __thiscall m_FUN_103a9310(uint param_2); template<class... A> int m_FUN_103a9310(A...); undefined4 __thiscall m_FUN_103a9330(int param_2); template<class... A> int m_FUN_103a9330(A...); void __thiscall m_FUN_103aa020(int param_2); template<class... A> int m_FUN_103aa020(A...); uint __thiscall m_FUN_103aa770(uint param_2); template<class... A> int m_FUN_103aa770(A...); uint __thiscall m_FUN_103aa790(uint param_2); template<class... A> int m_FUN_103aa790(A...); uint __thiscall m_FUN_103aa7b0(uint param_2); template<class... A> int m_FUN_103aa7b0(A...); uint __thiscall m_FUN_103aa7d0(uint param_2); template<class... A> int m_FUN_103aa7d0(A...); int * __thiscall m_FUN_103ab3f0(int *param_2,int param_3,int param_4); template<class... A> int m_FUN_103ab3f0(A...); void __thiscall m_FUN_103ab9c0(undefined4 *param_2); template<class... A> int m_FUN_103ab9c0(A...); void __thiscall m_FUN_103ab9d0(int *param_2); template<class... A> int m_FUN_103ab9d0(A...); void __thiscall m_FUN_103ab9f0(int *param_2); template<class... A> int m_FUN_103ab9f0(A...); void __thiscall m_FUN_103ac0f0(undefined4 *param_2); template<class... A> int m_FUN_103ac0f0(A...); void __thiscall m_FUN_103ac100(undefined4 *param_2); template<class... A> int m_FUN_103ac100(A...); void __thiscall m_FUN_103b6af0(undefined4 *param_2); template<class... A> int m_FUN_103b6af0(A...); void __thiscall m_FUN_103b6b00(undefined4 *param_2); template<class... A> int m_FUN_103b6b00(A...); void __thiscall m_FUN_103b6de0(undefined4 *param_2,void *param_3,void *param_4); template<class... A> int m_FUN_103b6de0(A...); void __thiscall m_FUN_103bcf10(undefined4 param_2); template<class... A> int m_FUN_103bcf10(A...); void __thiscall m_FUN_103bdfb0(int *param_2); template<class... A> int m_FUN_103bdfb0(A...); void __thiscall m_FUN_103be2f0(int *param_2); template<class... A> int m_FUN_103be2f0(A...); undefined4 * __thiscall m_FUN_103be310(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_103be310(A...); int __thiscall m_FUN_103be880(int param_2); template<class... A> int m_FUN_103be880(A...); int __thiscall m_FUN_103bec20(int param_2); template<class... A> int m_FUN_103bec20(A...); void __thiscall m_FUN_103bf3d0(undefined4 param_2,int param_3); template<class... A> int m_FUN_103bf3d0(A...); undefined4 * __thiscall m_FUN_103bf430(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_103bf430(A...); undefined4 * __thiscall m_FUN_103bf450(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103bf450(A...); SCStr * __thiscall m_FUN_103bf5c0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103bf5c0(A...); undefined4 * __thiscall m_FUN_103bf610(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103bf610(A...); SCStr * __thiscall m_FUN_103bf670(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103bf670(A...); int * __thiscall m_FUN_103bf6d0(int *param_2); template<class... A> int m_FUN_103bf6d0(A...); int __thiscall m_FUN_103bfd40(int *param_2); template<class... A> int m_FUN_103bfd40(A...); int __thiscall m_FUN_103bfdc0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_103bfdc0(A...); int __thiscall m_FUN_103bfe70(int *param_2,undefined4 param_3); template<class... A> int m_FUN_103bfe70(A...); undefined4 * __thiscall m_FUN_103c03a0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_103c03a0(A...); undefined4 * __thiscall m_FUN_103c0820(undefined4 *param_2); template<class... A> int m_FUN_103c0820(A...); undefined4 * __thiscall m_FUN_103c0910(undefined4 param_2); template<class... A> int m_FUN_103c0910(A...); undefined4 * __thiscall m_FUN_103c0a30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103c0a30(A...); undefined4 * __thiscall m_FUN_103c0e30(undefined1 param_2); template<class... A> int m_FUN_103c0e30(A...); undefined4 * __thiscall m_FUN_103c1270(undefined4 param_2); template<class... A> int m_FUN_103c1270(A...); int * __thiscall m_FUN_103c3400(int *param_2); template<class... A> int m_FUN_103c3400(A...); bool __thiscall m_FUN_103c34c0(int *param_2); template<class... A> int m_FUN_103c34c0(A...); bool __thiscall m_FUN_103c34e0(int *param_2); template<class... A> int m_FUN_103c34e0(A...); undefined4 * __thiscall m_FUN_103c3700(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103c3700(A...); void __thiscall m_FUN_103c4c60(int param_2); template<class... A> int m_FUN_103c4c60(A...); void __thiscall m_FUN_103c4c80(int param_2); template<class... A> int m_FUN_103c4c80(A...); void __thiscall m_FUN_103c4d10(undefined4 param_2); template<class... A> int m_FUN_103c4d10(A...); void __thiscall m_FUN_103c4d20(undefined4 param_2); template<class... A> int m_FUN_103c4d20(A...); void __thiscall m_FUN_103c4d30(undefined4 param_2); template<class... A> int m_FUN_103c4d30(A...); void __thiscall m_FUN_103c4de0(undefined4 *param_2); template<class... A> int m_FUN_103c4de0(A...); void __thiscall m_FUN_103c4df0(undefined4 *param_2); template<class... A> int m_FUN_103c4df0(A...); SCStr * __thiscall m_FUN_103c81b0(SCStr *param_2); template<class... A> int m_FUN_103c81b0(A...); SCStr * __thiscall m_FUN_103c8290(SCStr *param_2); template<class... A> int m_FUN_103c8290(A...); SCStr * __thiscall m_FUN_103c8320(SCStr *param_2); template<class... A> int m_FUN_103c8320(A...); SCStr * __thiscall m_FUN_103c8340(SCStr *param_2); template<class... A> int m_FUN_103c8340(A...); SCStr * __thiscall m_FUN_103c8750(SCStr *param_2); template<class... A> int m_FUN_103c8750(A...); SCStr * __thiscall m_FUN_103c8770(SCStr *param_2); template<class... A> int m_FUN_103c8770(A...); SCStr * __thiscall m_FUN_103c8790(SCStr *param_2); template<class... A> int m_FUN_103c8790(A...); bool __thiscall m_FUN_103cc5b0(int *param_2); template<class... A> int m_FUN_103cc5b0(A...); bool __thiscall m_FUN_103cc600(int *param_2); template<class... A> int m_FUN_103cc600(A...); int __thiscall m_FUN_103cc8d0(uint param_2); template<class... A> int m_FUN_103cc8d0(A...); SCStr * __thiscall m_FUN_103cca10(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103cca10(A...); undefined4 * __thiscall m_FUN_103cca80(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_103cca80(A...); undefined4 * __thiscall m_FUN_103ccaa0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103ccaa0(A...); undefined4 * __thiscall m_FUN_103ccac0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103ccac0(A...); SCStr * __thiscall m_FUN_103ccdb0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103ccdb0(A...); SCStr * __thiscall m_FUN_103ccde0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103ccde0(A...); undefined4 * __thiscall m_FUN_103cce40(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103cce40(A...); undefined4 * __thiscall m_FUN_103cce60(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_103cce60(A...); SCStr * __thiscall m_FUN_103cd200(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103cd200(A...); SCStr * __thiscall m_FUN_103cd230(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103cd230(A...); SCStr * __thiscall m_FUN_103cd260(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_103cd260(A...); int * __thiscall m_FUN_103cd2c0(int *param_2); template<class... A> int m_FUN_103cd2c0(A...); void __thiscall m_FUN_103cd8e0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_103cd8e0(A...); void __thiscall m_FUN_103cd970(int *param_2,undefined4 param_3); template<class... A> int m_FUN_103cd970(A...); int * __thiscall m_FUN_103ce4d0(int *param_2,SCStr *param_3); template<class... A> int m_FUN_103ce4d0(A...); undefined4 * __thiscall m_FUN_103ceeb0(undefined4 param_2); template<class... A> int m_FUN_103ceeb0(A...); undefined4 * __thiscall m_FUN_103ceed0(undefined4 param_2); template<class... A> int m_FUN_103ceed0(A...); undefined4 * __thiscall m_FUN_103ceff0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103ceff0(A...); undefined4 * __thiscall m_FUN_103cf000(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103cf000(A...); undefined4 * __thiscall m_FUN_103cf040(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103cf040(A...); undefined4 * __thiscall m_FUN_103cf080(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103cf080(A...); undefined4 * __thiscall m_FUN_103cf0c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103cf0c0(A...); undefined4 * __thiscall m_FUN_103cf1d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103cf1d0(A...); undefined4 * __thiscall m_FUN_103cf1e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103cf1e0(A...); undefined4 * __thiscall m_FUN_103cf220(undefined4 *param_2); template<class... A> int m_FUN_103cf220(A...); undefined4 * __thiscall m_FUN_103cf490(undefined4 *param_2); template<class... A> int m_FUN_103cf490(A...); SCStr * __thiscall m_FUN_103cf610(SCStr *param_2); template<class... A> int m_FUN_103cf610(A...); undefined4 * __thiscall m_FUN_103d04f0(undefined4 param_2); template<class... A> int m_FUN_103d04f0(A...); int * __thiscall m_FUN_103d0a20(int *param_2); template<class... A> int m_FUN_103d0a20(A...); int * __thiscall m_FUN_103d0a70(int *param_2); template<class... A> int m_FUN_103d0a70(A...); undefined4 * __thiscall m_FUN_103d0ac0(undefined4 *param_2); template<class... A> int m_FUN_103d0ac0(A...); bool __thiscall m_FUN_103d0bb0(int *param_2); template<class... A> int m_FUN_103d0bb0(A...); bool __thiscall m_FUN_103d0bd0(int *param_2); template<class... A> int m_FUN_103d0bd0(A...); bool __thiscall m_FUN_103d0bf0(int *param_2); template<class... A> int m_FUN_103d0bf0(A...); bool __thiscall m_FUN_103d0c10(int *param_2); template<class... A> int m_FUN_103d0c10(A...); };

extern int FUN_100517a8(...);
extern int FUN_10360310(...);
extern int FUN_1039f830(...);
extern int FUN_1039f840(...);
extern int FUN_103c1dc0(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int func_0x10015be0(...);
extern int func_0x1006dccd(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_10120220(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101f53d0(...);
template<class... A> int __stdcall thunk_FUN_10200150(A...);
extern int thunk_FUN_10203970(...);
extern int thunk_FUN_102207b0(...);
template<class... A> int __stdcall thunk_FUN_102460b0(A...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_102e8bc0(...);
extern int thunk_FUN_10314f90(...);
extern int thunk_FUN_1031b010(...);
template<class... A> int __stdcall thunk_FUN_10353440(A...);
extern int thunk_FUN_10353e20(...);
template<class... A> int __stdcall thunk_FUN_10354880(A...);
template<class... A> int __stdcall thunk_FUN_10354c60(A...);
extern int thunk_FUN_103566d0(...);
extern int thunk_FUN_103570f0(...);
extern int thunk_FUN_10357c10(...);
extern int thunk_FUN_10357cb0(...);
extern int thunk_FUN_10359040(...);
extern int thunk_FUN_10363080(...);
extern int thunk_FUN_1036bde0(...);
template<class... A> int __stdcall thunk_FUN_1036ec30(A...);
extern int thunk_FUN_1038a5a0(...);
extern int thunk_FUN_103a7c30(...);
extern int thunk_FUN_103a7d90(...);
template<class... A> int __stdcall thunk_FUN_103a9240(A...);
extern int thunk_FUN_103aac30(...);
extern int thunk_FUN_103bc4b0(...);
extern int thunk_FUN_103beae0(...);
template<class... A> int __stdcall thunk_FUN_103cd850(A...);
template<class... A> int __stdcall thunk_FUN_103cdb40(A...);
template<class... A> int __stdcall thunk_FUN_103cdcc0(A...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a05f0(...);
template<class... A> int __stdcall thunk_FUN_105a5110(A...);
template<class... A> int __stdcall thunk_FUN_105a51f0(A...);
template<class... A> int __stdcall thunk_FUN_105a52b0(A...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_106e1380(...);
extern int thunk_FUN_10708df0(...);
extern int thunk_FUN_10786100(...);
extern int thunk_FUN_107e6130(...);
extern int thunk_FUN_10818140(...);
extern int thunk_FUN_1083fac0(...);
extern int thunk_FUN_1087eff0(...);
extern int thunk_FUN_10cf1210(...);
extern int thunk_FUN_10d08960(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_11079440(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110a2880(...);
extern int thunk_FUN_110a9ef0(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_110d3ac0(...);
template<class... A> int __stdcall thunk_FUN_11131cc0(A...);
template<class... A> int __stdcall thunk_FUN_111a06b0(A...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
extern int thunk_FUN_111c4880(...);
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
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_1124ffa0(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_11255220(...);
extern int thunk_FUN_11255560(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_112616c0(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11d330dc;
extern int DAT_121195a8;
extern int DAT_12126b84;
extern int DAT_121a12cc;
extern int DAT_122e8a34;
extern int g_lSCObjCount;
extern int ghidra_vftable_RCompatibleZPPairCandidateEnumerator;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RCustRegQueryCountryAIOOp;
extern int ghidra_vftable_RCustRegRegisterSoftwareAIOOp;
extern int ghidra_vftable_RCustomZPEnumerator;
extern int ghidra_vftable_RHTPrimaryZPCandidateEnumerator;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RSubwooferPrimaryZPCandidateEnumerator;
extern int ghidra_vftable_RSubwooferZPCandidateEnumerator;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpSPAddAccountXAIOOp;
extern int ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp;
extern int ghidra_vftable_RUpnpSPSetStringAIOOp;
extern int ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp;
extern int ghidra_vftable_RZPAirPlayEnumerator;
extern int ghidra_vftable_RZPEnumerator;
extern int ghidra_vftable_RZPGroupableEnumerator;
extern int ghidra_vftable_RZPHasVoiceAccountsEnumerator;
extern int ghidra_vftable_RZPIkeaLampEnumerator;
extern int ghidra_vftable_RZPLineInEnumerator;
extern int ghidra_vftable_RZPPrimaryPlayerEnumerator;
extern int ghidra_vftable_RZPSecureRegStateEnumerator;
extern int ghidra_vftable_RZPSettingsMenuEnumerator;
extern int ghidra_vftable_RZPUnconfiguredEnumerator;
extern int ghidra_vftable_RZPVoiceCapableEnumerator;
extern int ghidra_vftable_RZPVoiceEnabledStateEnumerator;
extern int ghidra_vftable_SCAddCustomRadioActionFactory;
extern int ghidra_vftable_SCAsyncBrowseDataSource;
extern int ghidra_vftable_SCBrowseStackManagerEventSinkInternal;
extern int ghidra_vftable_SCContentPageDataSource;
extern int ghidra_vftable_SCContentRootPageDataSource;
extern int ghidra_vftable_SCContentSessionCallback;
extern int ghidra_vftable_SCControllerEventSinkInternal;
extern int ghidra_vftable_SCDefaultBrowseListPresentationMap;
extern int ghidra_vftable_SCEventSinkDelegateInternal;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCFeatureManagerEventSinkInternal;
extern int ghidra_vftable_SCHouseholdAdapterEventSinkInternal;
extern int ghidra_vftable_SCHousehold_DateTimeEventSink;
extern int ghidra_vftable_SCHousehold_SubscriptionHelper;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIBrowseStackManager;
extern int ghidra_vftable_SCIEnumerator;
extern int ghidra_vftable_SCIHousehold;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAddServiceAccount;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpZoneGroupTopologyGetZoneGroupState;
extern int ghidra_vftable_SCIServiceDescriptor;
extern int ghidra_vftable_SCIServiceDescriptorInternals;
extern int ghidra_vftable_SCITokenManager;
extern int ghidra_vftable_SCIndexedShareDataSource;
extern int ghidra_vftable_SCLastFMBrowseDataSource;
extern int ghidra_vftable_SCLegacyWelcomeLoginWizardActionDescriptor;
extern int ghidra_vftable_SCLifecycleManagerEventSinkInternal;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCMultipleDeferredEvtHelper;
extern int ghidra_vftable_SCNewWizController;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCNowPlayingEventSinkInternal;
extern int ghidra_vftable_SCOpAddAccountX;
extern int ghidra_vftable_SCOpFetchToken;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCOpZoneGroupTopologyGetZoneGroupState;
extern int ghidra_vftable_SCShareManagerEventSink;
extern int ghidra_vftable_SCSonosBrowseListPresentationMap;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCSwfObjQListener;
extern int ghidra_vftable_SCSwfObjUMListener;
extern int ghidra_vftable_SCTestPoint_TestPointCallback;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUpdatePopoverActionDescriptor;
extern int ghidra_vftable_SCWrapperHelper;
extern int ghidra_vftable_SCZonePlayerCollection;
extern int ghidra_vftable_SwfObjZonePlayerCollection;
extern int ghidra_vftable_UWAHouseholdInterface;
extern int ghidra_vftable_WizardCompletionCallback;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_10;
extern int uStack_25c;
extern int uStack_4;
extern int uStack_8;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11503650[];
extern undefined1 LAB_1153e9f0[];
extern undefined1 LAB_1153f6b0[];
extern undefined1 LAB_1153fb30[];
extern "C" void LAB_115486b5(void);
extern undefined1 LAB_11549320[];
extern undefined1 LAB_1154a6c0[];
extern undefined1 LAB_1154a6f0[];
extern undefined1 LAB_1154c4a0[];
extern undefined1 LAB_1154d440[];
extern undefined1 LAB_115a83b0[];
extern undefined1 LAB_11700b00[];
extern undefined1 LAB_117b5f20[];
extern int *PTR_s_IsLocalRadioPrepulated_1211957c;
extern int *PTR_s_IsRadioFavoritesPrepulated_12119580;
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103566b0(void);
template<class... A> int FUN_103566b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103566c0(void);
template<class... A> int FUN_103566c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10356890(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_10356890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10356a20(int param_1);
template<class... A> int FUN_10356a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103573e0(int param_1);
template<class... A> int FUN_103573e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357ae0(undefined4 param_1);
template<class... A> int FUN_10357ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357af0(undefined4 param_1);
template<class... A> int FUN_10357af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357b00(undefined4 param_1);
template<class... A> int FUN_10357b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357b10(undefined4 param_1);
template<class... A> int FUN_10357b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357f80(undefined4 param_1);
template<class... A> int FUN_10357f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357f90(undefined4 param_1);
template<class... A> int FUN_10357f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357fa0(undefined4 param_1);
template<class... A> int FUN_10357fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357fb0(undefined4 param_1);
template<class... A> int FUN_10357fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10357fc0(undefined4 param_1);
template<class... A> int FUN_10357fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580a0(undefined4 param_1);
template<class... A> int FUN_103580a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580b0(undefined4 param_1);
template<class... A> int FUN_103580b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580c0(undefined4 param_1);
template<class... A> int FUN_103580c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580d0(undefined4 param_1);
template<class... A> int FUN_103580d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580e0(undefined4 param_1);
template<class... A> int FUN_103580e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103580f0(undefined4 param_1);
template<class... A> int FUN_103580f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358100(undefined4 param_1);
template<class... A> int FUN_10358100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358110(undefined4 param_1);
template<class... A> int FUN_10358110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358120(undefined4 param_1);
template<class... A> int FUN_10358120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358130(undefined4 param_1);
template<class... A> int FUN_10358130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358140(undefined4 param_1);
template<class... A> int FUN_10358140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358150(undefined4 param_1);
template<class... A> int FUN_10358150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358160(undefined4 param_1);
template<class... A> int FUN_10358160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358170(undefined4 param_1);
template<class... A> int FUN_10358170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358180(undefined4 param_1);
template<class... A> int FUN_10358180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358190(undefined4 param_1);
template<class... A> int FUN_10358190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581a0(undefined4 param_1);
template<class... A> int FUN_103581a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581b0(undefined4 param_1);
template<class... A> int FUN_103581b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581c0(undefined4 param_1);
template<class... A> int FUN_103581c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581d0(undefined4 param_1);
template<class... A> int FUN_103581d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103581e0(undefined4 param_1);
template<class... A> int FUN_103581e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10358390(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10358390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103583d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_103583d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103583e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_103583e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10358410(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10358410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10358440(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10358440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10358480(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10358480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103586c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_103586c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103586f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_103586f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10358720(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10358720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10358750(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10358750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10358780(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10358780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10358820(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10358820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10358a00(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10358a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10358af0(int param_1,int param_2);
template<class... A> int FUN_10358af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10358b00(int param_1,int param_2);
template<class... A> int FUN_10358b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10358b10(int *param_1,int *param_2);
template<class... A> int FUN_10358b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10358b80(int *param_1,int *param_2);
template<class... A> int FUN_10358b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358f40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10358f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358f60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10358f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358f80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10358f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358fa0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10358fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358fc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10358fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10358fe0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10358fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359000(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10359000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359020(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10359020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359140(undefined4 param_1);
template<class... A> int FUN_10359140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359150(undefined4 param_1);
template<class... A> int FUN_10359150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359160(undefined4 param_1);
template<class... A> int FUN_10359160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359170(undefined4 param_1);
template<class... A> int FUN_10359170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359180(undefined4 param_1);
template<class... A> int FUN_10359180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359190(undefined4 param_1);
template<class... A> int FUN_10359190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591a0(undefined4 param_1);
template<class... A> int FUN_103591a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591b0(undefined4 param_1);
template<class... A> int FUN_103591b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591c0(undefined4 param_1);
template<class... A> int FUN_103591c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591d0(undefined4 param_1);
template<class... A> int FUN_103591d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591e0(undefined4 param_1);
template<class... A> int FUN_103591e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103591f0(undefined4 param_1);
template<class... A> int FUN_103591f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103592d0(undefined4 param_1);
template<class... A> int FUN_103592d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103592e0(undefined4 param_1);
template<class... A> int FUN_103592e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103592f0(undefined4 param_1);
template<class... A> int FUN_103592f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359300(undefined4 param_1);
template<class... A> int FUN_10359300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359310(undefined4 param_1);
template<class... A> int FUN_10359310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359320(undefined4 param_1);
template<class... A> int FUN_10359320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359330(undefined4 param_1);
template<class... A> int FUN_10359330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359340(undefined4 param_1);
template<class... A> int FUN_10359340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359350(undefined4 param_1);
template<class... A> int FUN_10359350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359360(undefined4 param_1);
template<class... A> int FUN_10359360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359370(undefined4 param_1);
template<class... A> int FUN_10359370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359380(undefined4 param_1);
template<class... A> int FUN_10359380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359390(undefined4 param_1);
template<class... A> int FUN_10359390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103593a0(undefined4 param_1);
template<class... A> int FUN_103593a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103593b0(undefined4 param_1);
template<class... A> int FUN_103593b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103593c0(undefined4 param_1);
template<class... A> int FUN_103593c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103593d0(undefined4 param_1);
template<class... A> int FUN_103593d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594b0(undefined4 param_1);
template<class... A> int FUN_103594b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594c0(undefined4 param_1);
template<class... A> int FUN_103594c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594d0(undefined4 param_1);
template<class... A> int FUN_103594d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594e0(undefined4 param_1);
template<class... A> int FUN_103594e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103594f0(undefined4 param_1);
template<class... A> int FUN_103594f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359500(undefined4 param_1);
template<class... A> int FUN_10359500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10359510(void);
template<class... A> int FUN_10359510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10359520(void);
template<class... A> int FUN_10359520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10359530(void);
template<class... A> int FUN_10359530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10359540(void);
template<class... A> int FUN_10359540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103597d0(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_103597d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359920(undefined4 param_1);
template<class... A> int FUN_10359920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a00(undefined4 param_1);
template<class... A> int FUN_10359a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a10(undefined4 param_1);
template<class... A> int FUN_10359a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a20(undefined4 param_1);
template<class... A> int FUN_10359a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a30(undefined4 param_1);
template<class... A> int FUN_10359a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a40(undefined4 param_1);
template<class... A> int FUN_10359a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10359a50(undefined4 param_1);
template<class... A> int FUN_10359a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10359a60(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10359a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10359ba0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10359ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10359e50(undefined4 *param_1);
template<class... A> int FUN_10359e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10359e80(undefined4 *param_1);
template<class... A> int FUN_10359e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10359eb0(undefined4 *param_1);
template<class... A> int FUN_10359eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035a790(undefined4 *param_1);
template<class... A> int FUN_1035a790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035a7c0(undefined4 *param_1);
template<class... A> int FUN_1035a7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035ac50(undefined4 *param_1);
template<class... A> int FUN_1035ac50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035af70(undefined4 *param_1);
template<class... A> int FUN_1035af70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035afd0(undefined4 *param_1);
template<class... A> int FUN_1035afd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b030(undefined4 *param_1);
template<class... A> int FUN_1035b030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b050(undefined4 *param_1);
template<class... A> int FUN_1035b050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b070(undefined4 *param_1);
template<class... A> int FUN_1035b070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b090(undefined4 *param_1);
template<class... A> int FUN_1035b090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b0b0(undefined4 *param_1);
template<class... A> int FUN_1035b0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b0d0(undefined4 *param_1);
template<class... A> int FUN_1035b0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b0f0(undefined4 *param_1);
template<class... A> int FUN_1035b0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b110(undefined4 *param_1);
template<class... A> int FUN_1035b110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b1d0(undefined4 *param_1);
template<class... A> int FUN_1035b1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b3b0(undefined4 *param_1);
template<class... A> int FUN_1035b3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b410(undefined4 *param_1);
template<class... A> int FUN_1035b410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b430(undefined4 *param_1);
template<class... A> int FUN_1035b430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b450(undefined4 *param_1);
template<class... A> int FUN_1035b450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b4b0(undefined4 *param_1);
template<class... A> int FUN_1035b4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b4d0(undefined4 *param_1);
template<class... A> int FUN_1035b4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b560(undefined4 *param_1);
template<class... A> int FUN_1035b560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b5c0(undefined4 *param_1);
template<class... A> int FUN_1035b5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b5e0(undefined4 *param_1);
template<class... A> int FUN_1035b5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b640(undefined4 *param_1);
template<class... A> int FUN_1035b640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b660(undefined4 *param_1);
template<class... A> int FUN_1035b660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b6c0(undefined4 *param_1);
template<class... A> int FUN_1035b6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b800(undefined4 *param_1);
template<class... A> int FUN_1035b800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b820(undefined4 *param_1);
template<class... A> int FUN_1035b820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035b830(undefined4 *param_1);
template<class... A> int FUN_1035b830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035ba60(undefined4 *param_1);
template<class... A> int FUN_1035ba60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035ba90(undefined4 *param_1);
template<class... A> int FUN_1035ba90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bac0(undefined4 *param_1);
template<class... A> int FUN_1035bac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035baf0(undefined4 *param_1);
template<class... A> int FUN_1035baf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bb20(undefined4 *param_1);
template<class... A> int FUN_1035bb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbb0(undefined4 param_1);
template<class... A> int FUN_1035bbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbc0(undefined4 param_1);
template<class... A> int FUN_1035bbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbd0(undefined4 param_1);
template<class... A> int FUN_1035bbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbe0(undefined4 param_1);
template<class... A> int FUN_1035bbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bbf0(undefined4 param_1);
template<class... A> int FUN_1035bbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bc00(undefined4 param_1);
template<class... A> int FUN_1035bc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bc10(undefined4 param_1);
template<class... A> int FUN_1035bc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035bc20(undefined4 param_1);
template<class... A> int FUN_1035bc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc30(int param_1);
template<class... A> int FUN_1035bc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc40(int param_1);
template<class... A> int FUN_1035bc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc50(int param_1);
template<class... A> int FUN_1035bc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc60(int param_1);
template<class... A> int FUN_1035bc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc70(int param_1);
template<class... A> int FUN_1035bc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc80(int param_1);
template<class... A> int FUN_1035bc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bc90(int param_1);
template<class... A> int FUN_1035bc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035bca0(int param_1);
template<class... A> int FUN_1035bca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bdc0(undefined4 *param_1);
template<class... A> int FUN_1035bdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bec0(undefined4 *param_1);
template<class... A> int FUN_1035bec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035bef0(undefined4 *param_1);
template<class... A> int FUN_1035bef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c010(undefined4 *param_1);
template<class... A> int FUN_1035c010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c060(undefined4 *param_1);
template<class... A> int FUN_1035c060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c080(undefined4 *param_1);
template<class... A> int FUN_1035c080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c0a0(undefined4 *param_1);
template<class... A> int FUN_1035c0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c0c0(undefined4 *param_1);
template<class... A> int FUN_1035c0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c180(undefined4 *param_1);
template<class... A> int FUN_1035c180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c1b0(undefined4 *param_1);
template<class... A> int FUN_1035c1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c1c0(undefined4 *param_1);
template<class... A> int FUN_1035c1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c200(undefined4 *param_1);
template<class... A> int FUN_1035c200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c240(undefined4 *param_1);
template<class... A> int FUN_1035c240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c260(undefined4 *param_1);
template<class... A> int FUN_1035c260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c280(undefined4 param_1);
template<class... A> int FUN_1035c280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c290(undefined4 param_1);
template<class... A> int FUN_1035c290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2a0(undefined4 param_1);
template<class... A> int FUN_1035c2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2b0(undefined4 param_1);
template<class... A> int FUN_1035c2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2c0(undefined4 param_1);
template<class... A> int FUN_1035c2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2d0(undefined4 param_1);
template<class... A> int FUN_1035c2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1035c2e0(undefined4 param_1);
template<class... A> int FUN_1035c2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1035c7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_1035c7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c8a0(undefined4 *param_1);
template<class... A> int FUN_1035c8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c8f0(undefined4 *param_1);
template<class... A> int FUN_1035c8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035c940(undefined4 *param_1);
template<class... A> int FUN_1035c940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035caa0(undefined4 *param_1);
template<class... A> int FUN_1035caa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035cbc0(undefined4 *param_1);
template<class... A> int FUN_1035cbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035cc20(undefined4 *param_1);
template<class... A> int FUN_1035cc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035d580(undefined4 *param_1);
template<class... A> int FUN_1035d580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035d920(undefined4 *param_1);
template<class... A> int FUN_1035d920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035f4e0(undefined4 *param_1);
template<class... A> int FUN_1035f4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035f4f0(undefined4 *param_1);
template<class... A> int FUN_1035f4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035f7c0(undefined4 *param_1);
template<class... A> int FUN_1035f7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fd10(undefined4 *param_1);
template<class... A> int FUN_1035fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fd40(undefined4 *param_1);
template<class... A> int FUN_1035fd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fd50(undefined4 *param_1);
template<class... A> int FUN_1035fd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fe30(undefined4 *param_1);
template<class... A> int FUN_1035fe30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fe80(undefined4 *param_1);
template<class... A> int FUN_1035fe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fea0(undefined4 *param_1);
template<class... A> int FUN_1035fea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035feb0(undefined4 *param_1);
template<class... A> int FUN_1035feb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035fee0(undefined4 *param_1);
template<class... A> int FUN_1035fee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1035ff40(undefined4 *param_1);
template<class... A> int FUN_1035ff40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103600e0(undefined4 *param_1);
template<class... A> int FUN_103600e0(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10360310(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103608b0(undefined4 *param_1);
template<class... A> int FUN_103608b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10360900(undefined4 *param_1);
template<class... A> int FUN_10360900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10360950(undefined4 *param_1);
template<class... A> int FUN_10360950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103609a0(undefined4 *param_1);
template<class... A> int FUN_103609a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103609f0(undefined4 *param_1);
template<class... A> int FUN_103609f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10360a40(undefined4 *param_1);
template<class... A> int FUN_10360a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103629e0(int param_1);
template<class... A> int FUN_103629e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10362d60(void);
template<class... A> int FUN_10362d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363580(undefined4 *param_1);
template<class... A> int FUN_10363580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103635a0(undefined4 *param_1);
template<class... A> int FUN_103635a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103635c0(undefined4 *param_1);
template<class... A> int FUN_103635c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103635d0(undefined4 *param_1);
template<class... A> int FUN_103635d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363600(undefined4 *param_1);
template<class... A> int FUN_10363600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363630(undefined4 *param_1);
template<class... A> int FUN_10363630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363900(undefined4 *param_1);
template<class... A> int FUN_10363900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363910(undefined4 *param_1);
template<class... A> int FUN_10363910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363920(undefined4 *param_1);
template<class... A> int FUN_10363920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363950(undefined4 *param_1);
template<class... A> int FUN_10363950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363980(undefined4 *param_1);
template<class... A> int FUN_10363980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103639c0(undefined4 *param_1);
template<class... A> int FUN_103639c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103639d0(undefined4 *param_1);
template<class... A> int FUN_103639d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363cb0(undefined4 *param_1);
template<class... A> int FUN_10363cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363cd0(undefined4 *param_1);
template<class... A> int FUN_10363cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10363d70(undefined4 *param_1);
template<class... A> int FUN_10363d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364b30(undefined4 *param_1);
template<class... A> int FUN_10364b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364b50(undefined4 *param_1);
template<class... A> int FUN_10364b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364b60(undefined4 *param_1);
template<class... A> int FUN_10364b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364c90(undefined4 *param_1);
template<class... A> int FUN_10364c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364d30(undefined4 *param_1);
template<class... A> int FUN_10364d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364ea0(undefined4 *param_1);
template<class... A> int FUN_10364ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364ec0(undefined4 *param_1);
template<class... A> int FUN_10364ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10364fe0(undefined4 *param_1);
template<class... A> int FUN_10364fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365020(undefined4 *param_1);
template<class... A> int FUN_10365020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365380(undefined4 *param_1);
template<class... A> int FUN_10365380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365830(int *param_1);
template<class... A> int FUN_10365830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365960(int *param_1);
template<class... A> int FUN_10365960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10365980(int param_1);
template<class... A> int FUN_10365980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10366950(undefined4 param_1);
template<class... A> int __stdcall FUN_10366950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366d50(int *param_1);
template<class... A> int FUN_10366d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366d60(undefined4 *param_1);
template<class... A> int FUN_10366d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366d70(undefined4 *param_1);
template<class... A> int FUN_10366d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366d80(undefined4 *param_1);
template<class... A> int FUN_10366d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366d90(undefined4 *param_1);
template<class... A> int FUN_10366d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366da0(undefined4 *param_1);
template<class... A> int FUN_10366da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366db0(undefined4 *param_1);
template<class... A> int FUN_10366db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366dc0(undefined4 *param_1);
template<class... A> int FUN_10366dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366dd0(undefined4 *param_1);
template<class... A> int FUN_10366dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366de0(undefined4 *param_1);
template<class... A> int FUN_10366de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366df0(undefined4 *param_1);
template<class... A> int FUN_10366df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e00(int *param_1);
template<class... A> int FUN_10366e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366e10(undefined4 *param_1);
template<class... A> int FUN_10366e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e20(int *param_1);
template<class... A> int FUN_10366e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366e30(undefined4 *param_1);
template<class... A> int FUN_10366e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e40(int *param_1);
template<class... A> int FUN_10366e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e50(int *param_1);
template<class... A> int FUN_10366e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366e60(undefined4 *param_1);
template<class... A> int FUN_10366e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e70(int *param_1);
template<class... A> int FUN_10366e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366e80(undefined4 *param_1);
template<class... A> int FUN_10366e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366e90(int *param_1);
template<class... A> int FUN_10366e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366ea0(int *param_1);
template<class... A> int FUN_10366ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366eb0(undefined4 *param_1);
template<class... A> int FUN_10366eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366ec0(undefined4 *param_1);
template<class... A> int FUN_10366ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366ed0(int *param_1);
template<class... A> int FUN_10366ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366ee0(undefined4 *param_1);
template<class... A> int FUN_10366ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366ef0(undefined4 *param_1);
template<class... A> int FUN_10366ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f00(undefined4 *param_1);
template<class... A> int FUN_10366f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f10(undefined4 *param_1);
template<class... A> int FUN_10366f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f20(undefined4 *param_1);
template<class... A> int FUN_10366f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f30(undefined4 *param_1);
template<class... A> int FUN_10366f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f40(undefined4 *param_1);
template<class... A> int FUN_10366f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f50(undefined4 *param_1);
template<class... A> int FUN_10366f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f60(undefined4 *param_1);
template<class... A> int FUN_10366f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366f70(int *param_1);
template<class... A> int FUN_10366f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f80(undefined4 *param_1);
template<class... A> int FUN_10366f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366f90(undefined4 *param_1);
template<class... A> int FUN_10366f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366fa0(undefined4 *param_1);
template<class... A> int FUN_10366fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366fb0(undefined4 *param_1);
template<class... A> int FUN_10366fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10366fc0(int *param_1);
template<class... A> int FUN_10366fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366fd0(undefined4 *param_1);
template<class... A> int FUN_10366fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366fe0(undefined4 *param_1);
template<class... A> int FUN_10366fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10366ff0(undefined4 *param_1);
template<class... A> int FUN_10366ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367000(undefined4 *param_1);
template<class... A> int FUN_10367000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367010(int *param_1);
template<class... A> int FUN_10367010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367020(undefined4 *param_1);
template<class... A> int FUN_10367020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367030(undefined4 *param_1);
template<class... A> int FUN_10367030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367040(int *param_1);
template<class... A> int FUN_10367040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367050(undefined4 *param_1);
template<class... A> int FUN_10367050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367060(int *param_1);
template<class... A> int FUN_10367060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367070(undefined4 *param_1);
template<class... A> int FUN_10367070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367080(int *param_1);
template<class... A> int FUN_10367080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367090(int *param_1);
template<class... A> int FUN_10367090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103670a0(undefined4 *param_1);
template<class... A> int FUN_103670a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103670b0(int *param_1);
template<class... A> int FUN_103670b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103670c0(undefined4 *param_1);
template<class... A> int FUN_103670c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103670d0(undefined4 *param_1);
template<class... A> int FUN_103670d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103670e0(int *param_1);
template<class... A> int FUN_103670e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103670f0(int *param_1);
template<class... A> int FUN_103670f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367100(int *param_1);
template<class... A> int FUN_10367100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367110(int param_1);
template<class... A> int FUN_10367110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367120(int param_1);
template<class... A> int FUN_10367120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10367130(int param_1);
template<class... A> int FUN_10367130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367140(int param_1);
template<class... A> int FUN_10367140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367150(int param_1);
template<class... A> int FUN_10367150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367160(int param_1);
template<class... A> int FUN_10367160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367170(undefined4 *param_1);
template<class... A> int FUN_10367170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367180(int param_1);
template<class... A> int FUN_10367180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367190(undefined4 *param_1);
template<class... A> int FUN_10367190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671a0(undefined4 *param_1);
template<class... A> int FUN_103671a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671b0(undefined4 *param_1);
template<class... A> int FUN_103671b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671c0(undefined4 *param_1);
template<class... A> int FUN_103671c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671d0(undefined4 *param_1);
template<class... A> int FUN_103671d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671e0(undefined4 *param_1);
template<class... A> int FUN_103671e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103671f0(undefined4 *param_1);
template<class... A> int FUN_103671f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367200(undefined4 *param_1);
template<class... A> int FUN_10367200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367210(undefined4 *param_1);
template<class... A> int FUN_10367210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367220(undefined4 *param_1);
template<class... A> int FUN_10367220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367230(undefined4 *param_1);
template<class... A> int FUN_10367230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367240(undefined4 *param_1);
template<class... A> int FUN_10367240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367250(undefined4 *param_1);
template<class... A> int FUN_10367250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367260(undefined4 *param_1);
template<class... A> int FUN_10367260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367270(undefined4 *param_1);
template<class... A> int FUN_10367270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367280(undefined4 *param_1);
template<class... A> int FUN_10367280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367290(undefined4 *param_1);
template<class... A> int FUN_10367290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672a0(undefined4 *param_1);
template<class... A> int FUN_103672a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672b0(undefined4 *param_1);
template<class... A> int FUN_103672b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672c0(undefined4 *param_1);
template<class... A> int FUN_103672c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672d0(undefined4 *param_1);
template<class... A> int FUN_103672d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672e0(undefined4 *param_1);
template<class... A> int FUN_103672e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103672f0(undefined4 *param_1);
template<class... A> int FUN_103672f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367300(undefined4 *param_1);
template<class... A> int FUN_10367300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367310(undefined4 *param_1);
template<class... A> int FUN_10367310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367320(undefined4 *param_1);
template<class... A> int FUN_10367320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367330(undefined4 *param_1);
template<class... A> int FUN_10367330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367340(undefined4 *param_1);
template<class... A> int FUN_10367340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367350(undefined4 *param_1);
template<class... A> int FUN_10367350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367360(undefined4 *param_1);
template<class... A> int FUN_10367360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367370(undefined4 *param_1);
template<class... A> int FUN_10367370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367380(undefined4 *param_1);
template<class... A> int FUN_10367380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367390(undefined4 *param_1);
template<class... A> int FUN_10367390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103673a0(undefined4 *param_1);
template<class... A> int FUN_103673a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103673b0(int *param_1);
template<class... A> int FUN_103673b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103673c0(int *param_1);
template<class... A> int FUN_103673c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103673d0(undefined4 *param_1);
template<class... A> int FUN_103673d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103673e0(undefined4 *param_1);
template<class... A> int FUN_103673e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103673f0(int *param_1);
template<class... A> int FUN_103673f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367400(int *param_1);
template<class... A> int FUN_10367400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367410(int *param_1);
template<class... A> int FUN_10367410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367420(int *param_1);
template<class... A> int FUN_10367420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367430(int *param_1);
template<class... A> int FUN_10367430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10367440(int *param_1);
template<class... A> int FUN_10367440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367450(undefined4 *param_1);
template<class... A> int FUN_10367450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10367460(undefined4 *param_1);
template<class... A> int FUN_10367460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10367470(undefined4 *param_1);
template<class... A> int FUN_10367470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10367480(undefined4 *param_1);
template<class... A> int FUN_10367480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10367720(int *param_1);
template<class... A> int FUN_10367720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10367730(int *param_1);
template<class... A> int FUN_10367730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10367780(int *param_1);
template<class... A> int FUN_10367780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10367890(byte *param_1);
template<class... A> int __stdcall FUN_10367890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __fastcall FUN_103678e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103678e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __fastcall FUN_10367900(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10367900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10367920(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10367920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10367940(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10367940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10367960(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10367960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103679b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103679b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10367aa0(int *param_1,int *param_2);
template<class... A> int FUN_10367aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036a610(int param_1);
template<class... A> int FUN_1036a610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036a620(undefined4 *param_1);
template<class... A> int FUN_1036a620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036a650(undefined4 *param_1);
template<class... A> int FUN_1036a650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036a680(undefined4 *param_1);
template<class... A> int FUN_1036a680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036a6b0(undefined4 *param_1);
template<class... A> int FUN_1036a6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036abd0(int param_1);
template<class... A> int FUN_1036abd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036abf0(int param_1);
template<class... A> int FUN_1036abf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036ac10(int param_1);
template<class... A> int FUN_1036ac10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036ac30(float *param_1);
template<class... A> int FUN_1036ac30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036ac90(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1036ac90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036aca0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1036aca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036b640(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1036b640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1036b890(byte *param_1);
template<class... A> int FUN_1036b890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b8e0(int param_1);
template<class... A> int FUN_1036b8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b8f0(int param_1);
template<class... A> int FUN_1036b8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b900(int param_1);
template<class... A> int FUN_1036b900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b910(int param_1);
template<class... A> int FUN_1036b910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b920(int param_1);
template<class... A> int FUN_1036b920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b930(int param_1);
template<class... A> int FUN_1036b930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b940(int param_1);
template<class... A> int FUN_1036b940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036b950(int param_1);
template<class... A> int FUN_1036b950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1036b9b0(undefined4 param_1);
template<class... A> int __stdcall FUN_1036b9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ca90(undefined4 param_1);
template<class... A> int FUN_1036ca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036caa0(undefined4 param_1);
template<class... A> int FUN_1036caa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cab0(undefined4 param_1);
template<class... A> int FUN_1036cab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cac0(undefined4 param_1);
template<class... A> int FUN_1036cac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cad0(undefined4 param_1);
template<class... A> int FUN_1036cad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cae0(undefined4 param_1);
template<class... A> int FUN_1036cae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036caf0(undefined4 param_1);
template<class... A> int FUN_1036caf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb00(undefined4 param_1);
template<class... A> int FUN_1036cb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb10(undefined4 param_1);
template<class... A> int FUN_1036cb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb20(undefined4 param_1);
template<class... A> int FUN_1036cb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb30(undefined4 param_1);
template<class... A> int FUN_1036cb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb40(undefined4 param_1);
template<class... A> int FUN_1036cb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb50(undefined4 param_1);
template<class... A> int FUN_1036cb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb60(undefined4 param_1);
template<class... A> int FUN_1036cb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb70(undefined4 param_1);
template<class... A> int FUN_1036cb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb80(undefined4 param_1);
template<class... A> int FUN_1036cb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cb90(undefined4 param_1);
template<class... A> int FUN_1036cb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cba0(undefined4 param_1);
template<class... A> int FUN_1036cba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbb0(undefined4 param_1);
template<class... A> int FUN_1036cbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbc0(undefined4 param_1);
template<class... A> int FUN_1036cbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbd0(undefined4 param_1);
template<class... A> int FUN_1036cbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbe0(undefined4 param_1);
template<class... A> int FUN_1036cbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cbf0(undefined4 param_1);
template<class... A> int FUN_1036cbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc00(undefined4 param_1);
template<class... A> int FUN_1036cc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc10(undefined4 param_1);
template<class... A> int FUN_1036cc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc20(undefined4 param_1);
template<class... A> int FUN_1036cc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc30(undefined4 param_1);
template<class... A> int FUN_1036cc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc40(undefined4 param_1);
template<class... A> int FUN_1036cc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc50(undefined4 param_1);
template<class... A> int FUN_1036cc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc60(undefined4 param_1);
template<class... A> int FUN_1036cc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc70(undefined4 param_1);
template<class... A> int FUN_1036cc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc80(undefined4 param_1);
template<class... A> int FUN_1036cc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cc90(undefined4 param_1);
template<class... A> int FUN_1036cc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cca0(undefined4 param_1);
template<class... A> int FUN_1036cca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ccb0(undefined4 param_1);
template<class... A> int FUN_1036ccb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ccc0(undefined4 param_1);
template<class... A> int FUN_1036ccc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ccd0(undefined4 param_1);
template<class... A> int FUN_1036ccd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cce0(undefined4 param_1);
template<class... A> int FUN_1036cce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ccf0(undefined4 param_1);
template<class... A> int FUN_1036ccf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd00(undefined4 param_1);
template<class... A> int FUN_1036cd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd20(undefined4 param_1);
template<class... A> int FUN_1036cd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd30(undefined4 param_1);
template<class... A> int FUN_1036cd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd40(undefined4 param_1);
template<class... A> int FUN_1036cd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd50(undefined4 param_1);
template<class... A> int FUN_1036cd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd60(int param_1);
template<class... A> int FUN_1036cd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd70(int param_1);
template<class... A> int FUN_1036cd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd80(int param_1);
template<class... A> int FUN_1036cd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cd90(int param_1);
template<class... A> int FUN_1036cd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cda0(int param_1);
template<class... A> int FUN_1036cda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cdb0(int param_1);
template<class... A> int FUN_1036cdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cdc0(int param_1);
template<class... A> int FUN_1036cdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036cdd0(int param_1);
template<class... A> int FUN_1036cdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d380(int param_1);
template<class... A> int FUN_1036d380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d390(int param_1);
template<class... A> int FUN_1036d390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3a0(int param_1);
template<class... A> int FUN_1036d3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3b0(int param_1);
template<class... A> int FUN_1036d3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3c0(int param_1);
template<class... A> int FUN_1036d3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3d0(int param_1);
template<class... A> int FUN_1036d3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3e0(int param_1);
template<class... A> int FUN_1036d3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1036d3f0(int param_1);
template<class... A> int FUN_1036d3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036d4e0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_1036d4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1036d530(int param_1);
template<class... A> int FUN_1036d530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_1036d590(int param_1);
template<class... A> int FUN_1036d590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d5c0(undefined4 param_1);
template<class... A> int FUN_1036d5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d5d0(undefined4 param_1);
template<class... A> int FUN_1036d5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036d8a0(void);
template<class... A> int FUN_1036d8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036d8b0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1036d8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036d8c0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1036d8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036d8d0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_1036d8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036d8e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1036d8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036d8f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1036d8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1036d900(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1036d900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d9c0(int param_1);
template<class... A> int FUN_1036d9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d9d0(int param_1);
template<class... A> int FUN_1036d9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036d9e0(int param_1);
template<class... A> int FUN_1036d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036d9f0(undefined4 *param_1);
template<class... A> int FUN_1036d9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036da00(undefined4 *param_1);
template<class... A> int FUN_1036da00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036da10(undefined4 *param_1);
template<class... A> int FUN_1036da10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1036da20(undefined4 *param_1);
template<class... A> int FUN_1036da20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036ead0(undefined4 *param_1);
template<class... A> int FUN_1036ead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036eb00(int param_1);
template<class... A> int FUN_1036eb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1036ef60(int param_1,int param_2,int param_3);
template<class... A> int FUN_1036ef60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036efb0(undefined4 *param_1);
template<class... A> int FUN_1036efb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1036efc0(undefined4 *param_1);
template<class... A> int FUN_1036efc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370ca0(uint param_1);
template<class... A> int FUN_10370ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370d20(uint param_1);
template<class... A> int FUN_10370d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370da0(uint param_1);
template<class... A> int FUN_10370da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370e20(uint param_1);
template<class... A> int FUN_10370e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370ea0(uint param_1);
template<class... A> int FUN_10370ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10370f90(uint param_1);
template<class... A> int FUN_10370f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10371000(uint param_1);
template<class... A> int FUN_10371000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103717a0(int param_1);
template<class... A> int FUN_103717a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10371850(int param_1);
template<class... A> int FUN_10371850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103723d0(int *param_1);
template<class... A> int FUN_103723d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103723f0(int *param_1);
template<class... A> int FUN_103723f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10372400(int *param_1);
template<class... A> int FUN_10372400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10372590(void);
template<class... A> int FUN_10372590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103725b0(void);
template<class... A> int FUN_103725b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103766a0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_103766a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103766f0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_103766f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10376740(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10376740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10376790(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10376790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103767e0(int param_1,int param_2);
template<class... A> int FUN_103767e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10376830(int param_1,int param_2);
template<class... A> int FUN_10376830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10376880(int param_1,int param_2);
template<class... A> int FUN_10376880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10376a30(int param_1,int param_2);
template<class... A> int FUN_10376a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10376a80(int param_1,int param_2);
template<class... A> int FUN_10376a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376ad0(undefined4 *param_1);
template<class... A> int FUN_10376ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376af0(undefined4 *param_1);
template<class... A> int FUN_10376af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b00(undefined4 *param_1);
template<class... A> int FUN_10376b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b10(undefined4 *param_1);
template<class... A> int FUN_10376b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b20(undefined4 *param_1);
template<class... A> int FUN_10376b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b30(undefined4 *param_1);
template<class... A> int FUN_10376b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10376b40(undefined4 *param_1);
template<class... A> int FUN_10376b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103780b0(int param_1);
template<class... A> int FUN_103780b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10378150(void);
template<class... A> int FUN_10378150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103786c0(int param_1);
template<class... A> int FUN_103786c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1037a2a0(int param_1);
template<class... A> int FUN_1037a2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4b0(int param_1);
template<class... A> int FUN_1037c4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4c0(int param_1);
template<class... A> int FUN_1037c4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4d0(int param_1);
template<class... A> int FUN_1037c4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4e0(int param_1);
template<class... A> int FUN_1037c4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037c4f0(int param_1);
template<class... A> int FUN_1037c4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1037cb50(int param_1);
template<class... A> int FUN_1037cb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1037cb90(int param_1);
template<class... A> int FUN_1037cb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1037ee80(int param_1);
template<class... A> int FUN_1037ee80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10380df0(int param_1);
template<class... A> int FUN_10380df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10381010(void);
template<class... A> int FUN_10381010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10382830(int param_1);
template<class... A> int FUN_10382830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10382840(int param_1);
template<class... A> int FUN_10382840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 __fastcall FUN_10382850(int param_1);
template<class... A> int FUN_10382850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10383180(int param_1);
template<class... A> int FUN_10383180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10383190(int param_1);
template<class... A> int FUN_10383190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831a0(int param_1);
template<class... A> int FUN_103831a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831b0(int param_1);
template<class... A> int FUN_103831b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831c0(int param_1);
template<class... A> int FUN_103831c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831d0(int param_1);
template<class... A> int FUN_103831d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103831e0(int param_1);
template<class... A> int FUN_103831e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103831f0(int param_1);
template<class... A> int FUN_103831f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10383530(int param_1);
template<class... A> int FUN_10383530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10388c80(void);
template<class... A> int FUN_10388c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10388c90(void);
template<class... A> int FUN_10388c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10388ca0(void);
template<class... A> int FUN_10388ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10388cb0(void);
template<class... A> int FUN_10388cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1038a580(undefined4 param_1);
template<class... A> int __stdcall FUN_1038a580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1038be30(int param_1);
template<class... A> int FUN_1038be30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1038be60(int param_1);
template<class... A> int FUN_1038be60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1038d590(int param_1);
template<class... A> int FUN_1038d590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1038d5a0(int param_1);
template<class... A> int FUN_1038d5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d5f0(int *param_1);
template<class... A> int FUN_1038d5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d600(int *param_1);
template<class... A> int FUN_1038d600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d610(int *param_1);
template<class... A> int FUN_1038d610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d620(int *param_1);
template<class... A> int FUN_1038d620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d630(int *param_1);
template<class... A> int FUN_1038d630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d640(int *param_1);
template<class... A> int FUN_1038d640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d6d0(int param_1);
template<class... A> int FUN_1038d6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d980(int *param_1);
template<class... A> int FUN_1038d980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d990(int *param_1);
template<class... A> int FUN_1038d990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9a0(int *param_1);
template<class... A> int FUN_1038d9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9b0(int *param_1);
template<class... A> int FUN_1038d9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9c0(int *param_1);
template<class... A> int FUN_1038d9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9d0(int *param_1);
template<class... A> int FUN_1038d9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9e0(int *param_1);
template<class... A> int FUN_1038d9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038d9f0(int *param_1);
template<class... A> int FUN_1038d9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038da00(int *param_1);
template<class... A> int FUN_1038da00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038da10(int *param_1);
template<class... A> int FUN_1038da10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038da20(int *param_1);
template<class... A> int FUN_1038da20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038da30(int *param_1);
template<class... A> int FUN_1038da30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1038da50(int param_1);
template<class... A> int FUN_1038da50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_1038de70(void);
template<class... A> int FUN_1038de70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1038e1b0(int param_1);
template<class... A> int FUN_1038e1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_103908f0(float *param_1);
template<class... A> int FUN_103908f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390900(void);
template<class... A> int FUN_10390900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390910(void);
template<class... A> int FUN_10390910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390920(void);
template<class... A> int FUN_10390920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390930(void);
template<class... A> int FUN_10390930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390940(void);
template<class... A> int FUN_10390940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390950(void);
template<class... A> int FUN_10390950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390960(void);
template<class... A> int FUN_10390960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390970(void);
template<class... A> int FUN_10390970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390980(void);
template<class... A> int FUN_10390980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10390990(void);
template<class... A> int FUN_10390990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103909a0(void);
template<class... A> int FUN_103909a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103909b0(void);
template<class... A> int FUN_103909b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103909c0(void);
template<class... A> int FUN_103909c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103909d0(void);
template<class... A> int FUN_103909d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393720(undefined4 *param_1);
template<class... A> int FUN_10393720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103937c0(undefined4 param_1);
template<class... A> int FUN_103937c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103937d0(undefined4 param_1);
template<class... A> int FUN_103937d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103937e0(undefined4 *param_1);
template<class... A> int FUN_103937e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103937f0(undefined4 *param_1);
template<class... A> int FUN_103937f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393800(undefined4 *param_1);
template<class... A> int FUN_10393800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393810(undefined4 *param_1);
template<class... A> int FUN_10393810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393820(undefined4 *param_1);
template<class... A> int FUN_10393820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393830(undefined4 *param_1);
template<class... A> int FUN_10393830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393840(undefined4 *param_1);
template<class... A> int FUN_10393840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393850(undefined4 *param_1);
template<class... A> int FUN_10393850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393860(undefined4 *param_1);
template<class... A> int FUN_10393860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393870(undefined4 *param_1);
template<class... A> int FUN_10393870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393880(undefined4 *param_1);
template<class... A> int FUN_10393880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393890(undefined4 *param_1);
template<class... A> int FUN_10393890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938a0(undefined4 *param_1);
template<class... A> int FUN_103938a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938b0(undefined4 *param_1);
template<class... A> int FUN_103938b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938c0(undefined4 *param_1);
template<class... A> int FUN_103938c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938d0(undefined4 *param_1);
template<class... A> int FUN_103938d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938e0(undefined4 *param_1);
template<class... A> int FUN_103938e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103938f0(undefined4 *param_1);
template<class... A> int FUN_103938f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393900(undefined4 *param_1);
template<class... A> int FUN_10393900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393910(undefined4 *param_1);
template<class... A> int FUN_10393910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393920(undefined4 *param_1);
template<class... A> int FUN_10393920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393930(undefined4 *param_1);
template<class... A> int FUN_10393930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393940(undefined4 *param_1);
template<class... A> int FUN_10393940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393950(undefined4 *param_1);
template<class... A> int FUN_10393950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393960(undefined4 *param_1);
template<class... A> int FUN_10393960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393970(undefined4 *param_1);
template<class... A> int FUN_10393970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393980(undefined4 *param_1);
template<class... A> int FUN_10393980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393990(undefined4 *param_1);
template<class... A> int FUN_10393990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939a0(undefined4 *param_1);
template<class... A> int FUN_103939a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939b0(undefined4 *param_1);
template<class... A> int FUN_103939b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939c0(undefined4 *param_1);
template<class... A> int FUN_103939c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939d0(undefined4 *param_1);
template<class... A> int FUN_103939d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939e0(undefined4 *param_1);
template<class... A> int FUN_103939e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103939f0(undefined4 *param_1);
template<class... A> int FUN_103939f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a00(undefined4 *param_1);
template<class... A> int FUN_10393a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a10(undefined4 *param_1);
template<class... A> int FUN_10393a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a20(undefined4 *param_1);
template<class... A> int FUN_10393a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a30(undefined4 *param_1);
template<class... A> int FUN_10393a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a40(undefined4 *param_1);
template<class... A> int FUN_10393a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a50(undefined4 *param_1);
template<class... A> int FUN_10393a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10393a60(undefined4 *param_1);
template<class... A> int FUN_10393a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394530(undefined4 *param_1);
template<class... A> int FUN_10394530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394560(undefined4 *param_1);
template<class... A> int FUN_10394560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394590(undefined4 *param_1);
template<class... A> int FUN_10394590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103945c0(undefined4 *param_1);
template<class... A> int FUN_103945c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103945f0(undefined4 *param_1);
template<class... A> int FUN_103945f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394620(undefined4 *param_1);
template<class... A> int FUN_10394620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394650(undefined4 *param_1);
template<class... A> int FUN_10394650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394680(undefined4 *param_1);
template<class... A> int FUN_10394680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103946b0(undefined4 *param_1);
template<class... A> int FUN_103946b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103946e0(undefined4 *param_1);
template<class... A> int FUN_103946e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394710(undefined4 *param_1);
template<class... A> int FUN_10394710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394740(undefined4 *param_1);
template<class... A> int FUN_10394740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394770(undefined4 *param_1);
template<class... A> int FUN_10394770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103947a0(undefined4 *param_1);
template<class... A> int FUN_103947a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103947d0(undefined4 *param_1);
template<class... A> int FUN_103947d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394800(undefined4 *param_1);
template<class... A> int FUN_10394800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394830(undefined4 *param_1);
template<class... A> int FUN_10394830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394860(undefined4 *param_1);
template<class... A> int FUN_10394860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394890(undefined4 *param_1);
template<class... A> int FUN_10394890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103948c0(undefined4 *param_1);
template<class... A> int FUN_103948c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103948f0(undefined4 *param_1);
template<class... A> int FUN_103948f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394920(undefined4 *param_1);
template<class... A> int FUN_10394920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394950(undefined4 *param_1);
template<class... A> int FUN_10394950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394980(undefined4 *param_1);
template<class... A> int FUN_10394980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103949b0(undefined4 *param_1);
template<class... A> int FUN_103949b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103949e0(undefined4 *param_1);
template<class... A> int FUN_103949e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a10(undefined4 *param_1);
template<class... A> int FUN_10394a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a40(undefined4 *param_1);
template<class... A> int FUN_10394a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394a70(undefined4 *param_1);
template<class... A> int FUN_10394a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394aa0(undefined4 *param_1);
template<class... A> int FUN_10394aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394ad0(undefined4 *param_1);
template<class... A> int FUN_10394ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b00(undefined4 *param_1);
template<class... A> int FUN_10394b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b30(undefined4 *param_1);
template<class... A> int FUN_10394b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b60(undefined4 *param_1);
template<class... A> int FUN_10394b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394b90(undefined4 *param_1);
template<class... A> int FUN_10394b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394bc0(undefined4 *param_1);
template<class... A> int FUN_10394bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394bf0(undefined4 *param_1);
template<class... A> int FUN_10394bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c20(undefined4 *param_1);
template<class... A> int FUN_10394c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c50(undefined4 *param_1);
template<class... A> int FUN_10394c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394c80(undefined4 *param_1);
template<class... A> int FUN_10394c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394cb0(undefined4 *param_1);
template<class... A> int FUN_10394cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394ce0(undefined4 *param_1);
template<class... A> int FUN_10394ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d10(undefined4 *param_1);
template<class... A> int FUN_10394d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d40(int *param_1);
template<class... A> int FUN_10394d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d60(int *param_1);
template<class... A> int FUN_10394d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394d80(int *param_1);
template<class... A> int FUN_10394d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10394da0(int *param_1);
template<class... A> int FUN_10394da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103952d0(int param_1);
template<class... A> int FUN_103952d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10395b70(undefined4 param_1);
template<class... A> int FUN_10395b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10395c90(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10395c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10395cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10395cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10397330(int param_1);
template<class... A> int FUN_10397330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10398730(void);
template<class... A> int FUN_10398730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398740(int param_1);
template<class... A> int FUN_10398740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10398750(int *param_1);
template<class... A> int FUN_10398750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398760(int param_1);
template<class... A> int FUN_10398760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398770(int param_1);
template<class... A> int FUN_10398770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10398780(int param_1);
template<class... A> int FUN_10398780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10398790(int *param_1);
template<class... A> int FUN_10398790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103987a0(int *param_1);
template<class... A> int FUN_103987a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10399400(int param_1);
template<class... A> int FUN_10399400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_1039a0f0(int param_1);
template<class... A> int FUN_1039a0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039a4c0(int param_1);
template<class... A> int FUN_1039a4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039b2f0(int param_1);
template<class... A> int FUN_1039b2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1039ea00(int param_1);
template<class... A> int FUN_1039ea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1039ea10(int param_1);
template<class... A> int FUN_1039ea10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1039ea60(int param_1);
template<class... A> int FUN_1039ea60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1039ebc0(int param_1);
template<class... A> int FUN_1039ebc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1039ecb0(void);
template<class... A> int FUN_1039ecb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1039ecc0(void);
template<class... A> int FUN_1039ecc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039edf0(undefined4 *param_1);
template<class... A> int FUN_1039edf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039ee20(undefined4 *param_1);
template<class... A> int FUN_1039ee20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039ee50(undefined4 *param_1);
template<class... A> int FUN_1039ee50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f180(undefined4 *param_1);
template<class... A> int FUN_1039f180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f1a0(undefined4 *param_1);
template<class... A> int FUN_1039f1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f1c0(undefined4 *param_1);
template<class... A> int FUN_1039f1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3a0(undefined4 *param_1);
template<class... A> int FUN_1039f3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3b0(undefined4 *param_1);
template<class... A> int FUN_1039f3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1039f3c0(undefined4 *param_1);
template<class... A> int FUN_1039f3c0(A...);
/* WARNING: Removing unreachable block_1039f830 (ram,0x101ba14a) */ void __fastcall FUN_1039f830(undefined4 *param_1);
/* WARNING: Removing unreachable block_1039f840 (ram,0x101ba14a) */ void __fastcall FUN_1039f840(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd00(undefined4 *param_1);
template<class... A> int FUN_1039fd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd30(undefined4 *param_1);
template<class... A> int FUN_1039fd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd60(undefined4 *param_1);
template<class... A> int FUN_1039fd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd70(undefined4 *param_1);
template<class... A> int FUN_1039fd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd80(undefined4 *param_1);
template<class... A> int FUN_1039fd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1039fd90(undefined4 *param_1);
template<class... A> int FUN_1039fd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1039ffc0(int *param_1);
template<class... A> int FUN_1039ffc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039ffd0(undefined4 *param_1);
template<class... A> int FUN_1039ffd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039ffe0(undefined4 *param_1);
template<class... A> int FUN_1039ffe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1039fff0(int param_1);
template<class... A> int FUN_1039fff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a0000(int param_1);
template<class... A> int FUN_103a0000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a0010(undefined4 *param_1);
template<class... A> int FUN_103a0010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103a0980(int param_1);
template<class... A> int FUN_103a0980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a13c0(undefined4 *param_1);
template<class... A> int FUN_103a13c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a1530(int param_1);
template<class... A> int FUN_103a1530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a15a0(int param_1);
template<class... A> int FUN_103a15a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a15b0(int param_1);
template<class... A> int FUN_103a15b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a18d0(int *param_1);
template<class... A> int FUN_103a18d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a2cc0(void);
template<class... A> int FUN_103a2cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a2d10(void);
template<class... A> int FUN_103a2d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a2d20(void);
template<class... A> int FUN_103a2d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2ea0(int *param_1);
template<class... A> int FUN_103a2ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2eb0(int *param_1);
template<class... A> int FUN_103a2eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2ef0(int *param_1);
template<class... A> int FUN_103a2ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a2f30(int *param_1);
template<class... A> int FUN_103a2f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2f80(int param_1);
template<class... A> int FUN_103a2f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a2fd0(int *param_1);
template<class... A> int FUN_103a2fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103a2fe0(char param_1);
template<class... A> int FUN_103a2fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a30c0(int *param_1);
template<class... A> int FUN_103a30c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a3110(int param_1);
template<class... A> int FUN_103a3110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_103a3120(char param_1);
template<class... A> int FUN_103a3120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a3510(undefined4 *param_1);
template<class... A> int FUN_103a3510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a3520(undefined4 *param_1);
template<class... A> int FUN_103a3520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3c40(undefined4 *param_1);
template<class... A> int FUN_103a3c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3c70(undefined4 *param_1);
template<class... A> int FUN_103a3c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a3ca0(undefined4 *param_1);
template<class... A> int FUN_103a3ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4160(int param_1);
template<class... A> int FUN_103a4160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a4170(int param_1);
template<class... A> int FUN_103a4170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_103a4190(int *param_1);
template<class... A> int FUN_103a4190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a41c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103a41c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a41e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103a41e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a4210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103a4210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a4280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_103a4280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a43c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103a43c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a43d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103a43d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4680(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103a4680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a4690(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103a4690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47b0(void);
template<class... A> int FUN_103a47b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47c0(void);
template<class... A> int FUN_103a47c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47d0(void);
template<class... A> int FUN_103a47d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a47e0(void);
template<class... A> int FUN_103a47e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a47f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103a47f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4820(void);
template<class... A> int FUN_103a4820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4840(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103a4840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4850(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103a4850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4860(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103a4860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4880(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,
                 uint *param_6,uint param_7);
template<class... A> int FUN_103a4880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a4920(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_103a4920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a4950(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_103a4950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4980(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,
                 uint *param_6,uint param_7);
template<class... A> int FUN_103a4980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a30(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_103a4a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_103a4a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a70(void);
template<class... A> int FUN_103a4a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a80(void);
template<class... A> int FUN_103a4a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4a90(void);
template<class... A> int FUN_103a4a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4aa0(void);
template<class... A> int FUN_103a4aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4ab0(void);
template<class... A> int FUN_103a4ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4e30(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5);
template<class... A> int FUN_103a4e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a4f20(void *param_1,int param_2);
template<class... A> int FUN_103a4f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5000(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_103a5000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50c0(undefined4 param_1);
template<class... A> int FUN_103a50c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50d0(undefined4 param_1);
template<class... A> int FUN_103a50d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50e0(undefined4 *param_1);
template<class... A> int FUN_103a50e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a50f0(undefined4 *param_1);
template<class... A> int FUN_103a50f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5100(undefined4 *param_1);
template<class... A> int FUN_103a5100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5110(undefined4 *param_1);
template<class... A> int FUN_103a5110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5120(undefined4 param_1);
template<class... A> int FUN_103a5120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5130(int *param_1,int *param_2);
template<class... A> int FUN_103a5130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5150(int *param_1,int *param_2);
template<class... A> int FUN_103a5150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5170(int *param_1,int *param_2);
template<class... A> int FUN_103a5170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5190(int *param_1);
template<class... A> int FUN_103a5190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a51b0(undefined4 param_1);
template<class... A> int FUN_103a51b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103a51c0(int param_1,SCStr *param_2);
template<class... A> int FUN_103a51c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a51f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_103a51f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5220(int *param_1,int param_2,uint param_3);
template<class... A> int FUN_103a5220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_103a5250(undefined4 *param_1,undefined4 param_2,int param_3);
template<class... A> int FUN_103a5250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_103a5270(undefined4 *param_1,undefined4 param_2,int param_3);
template<class... A> int FUN_103a5270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5470(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103a5470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_103a5480(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103a5480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5490(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103a5490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a55f0(undefined4 param_1);
template<class... A> int FUN_103a55f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5600(undefined4 param_1);
template<class... A> int FUN_103a5600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5610(undefined4 param_1);
template<class... A> int FUN_103a5610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_103a5620(int *param_1,int param_2,int *param_3);
template<class... A> int FUN_103a5620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103a5690(void *param_1,int param_2);
template<class... A> int FUN_103a5690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103a56c0(void *param_1,int param_2);
template<class... A> int FUN_103a56c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a56f0(undefined4 param_1);
template<class... A> int FUN_103a56f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5700(undefined4 param_1);
template<class... A> int FUN_103a5700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5710(void *param_1,int param_2);
template<class... A> int FUN_103a5710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5740(void *param_1,int param_2);
template<class... A> int FUN_103a5740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5770(undefined4 param_1);
template<class... A> int FUN_103a5770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5780(undefined4 param_1);
template<class... A> int FUN_103a5780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5790(undefined4 param_1);
template<class... A> int FUN_103a5790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57a0(undefined4 param_1);
template<class... A> int FUN_103a57a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57b0(undefined4 param_1);
template<class... A> int FUN_103a57b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57c0(undefined4 param_1);
template<class... A> int FUN_103a57c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57d0(undefined4 param_1);
template<class... A> int FUN_103a57d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a57e0(undefined4 param_1);
template<class... A> int FUN_103a57e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5820(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_103a5820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5850(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_103a5850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *
FUN_103a5880(undefined4 *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,uint *param_6
            ,uint param_7);
template<class... A> int FUN_103a5880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *
FUN_103a5910(undefined4 *param_1,uint *param_2,int param_3,uint *param_4,int param_5,uint *param_6,
            uint param_7);
template<class... A> int FUN_103a5910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5ab0(int *param_1,int *param_2);
template<class... A> int FUN_103a5ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103a5b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103a5b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5b60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103a5b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a5b80(uint *param_1,int param_2,uint *param_3,int param_4,char *param_5);
template<class... A> int FUN_103a5b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5c90(undefined4 param_1);
template<class... A> int FUN_103a5c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5ca0(undefined4 param_1);
template<class... A> int FUN_103a5ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cb0(undefined4 param_1);
template<class... A> int FUN_103a5cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cc0(undefined4 param_1);
template<class... A> int FUN_103a5cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cd0(undefined4 param_1);
template<class... A> int FUN_103a5cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5ce0(undefined4 param_1);
template<class... A> int FUN_103a5ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5cf0(undefined4 param_1);
template<class... A> int FUN_103a5cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103a5d00(undefined4 param_1);
template<class... A> int FUN_103a5d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a5d10(void);
template<class... A> int FUN_103a5d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103a5d20(void);
template<class... A> int FUN_103a5d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5d30(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_103a5d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103a5d60(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_103a5d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5d90(undefined4 *param_1);
template<class... A> int FUN_103a5d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5dc0(undefined4 *param_1);
template<class... A> int FUN_103a5dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5e20(undefined4 *param_1);
template<class... A> int FUN_103a5e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a5ec0(undefined4 *param_1);
template<class... A> int FUN_103a5ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6120(undefined4 *param_1);
template<class... A> int FUN_103a6120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6150(undefined4 *param_1);
template<class... A> int FUN_103a6150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6280(undefined4 *param_1);
template<class... A> int FUN_103a6280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6340(undefined4 *param_1);
template<class... A> int FUN_103a6340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a6390(undefined4 param_1);
template<class... A> int FUN_103a6390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a63a0(undefined4 param_1);
template<class... A> int FUN_103a63a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a6450(undefined4 *param_1);
template<class... A> int FUN_103a6450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a65c0(undefined4 *param_1);
template<class... A> int FUN_103a65c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7110(undefined4 *param_1);
template<class... A> int FUN_103a7110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7140(undefined4 *param_1);
template<class... A> int FUN_103a7140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103a7660(undefined4 *param_1);
template<class... A> int FUN_103a7660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103a7bb0(void);
template<class... A> int FUN_103a7bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a7fb0(undefined4 *param_1);
template<class... A> int FUN_103a7fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a7fc0(undefined4 *param_1);
template<class... A> int FUN_103a7fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8680(undefined4 *param_1);
template<class... A> int FUN_103a8680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a86a0(undefined4 *param_1);
template<class... A> int FUN_103a86a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8750(undefined4 *param_1);
template<class... A> int FUN_103a8750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a8760(undefined4 *param_1);
template<class... A> int FUN_103a8760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103a87f0(undefined4 *param_1);
template<class... A> int FUN_103a87f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8dc0(undefined4 *param_1);
template<class... A> int FUN_103a8dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8dd0(int *param_1);
template<class... A> int FUN_103a8dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8de0(undefined4 *param_1);
template<class... A> int FUN_103a8de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8df0(int *param_1);
template<class... A> int FUN_103a8df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e00(undefined4 *param_1);
template<class... A> int FUN_103a8e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8e10(int *param_1);
template<class... A> int FUN_103a8e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103a8e20(int *param_1);
template<class... A> int FUN_103a8e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e30(undefined4 *param_1);
template<class... A> int FUN_103a8e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e50(undefined4 *param_1);
template<class... A> int FUN_103a8e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e60(undefined4 *param_1);
template<class... A> int FUN_103a8e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e70(undefined4 *param_1);
template<class... A> int FUN_103a8e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103a8e80(undefined4 *param_1);
template<class... A> int FUN_103a8e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8e90(int *param_1);
template<class... A> int FUN_103a8e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8ec0(int *param_1);
template<class... A> int FUN_103a8ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8ef0(int *param_1);
template<class... A> int FUN_103a8ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a8f20(int *param_1);
template<class... A> int FUN_103a8f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a9000(int *param_1);
template<class... A> int FUN_103a9000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a9030(int *param_1);
template<class... A> int FUN_103a9030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9060(int param_1);
template<class... A> int FUN_103a9060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9070(int param_1);
template<class... A> int FUN_103a9070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9080(int param_1);
template<class... A> int FUN_103a9080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103a9090(int param_1);
template<class... A> int FUN_103a9090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a90a0(int *param_1);
template<class... A> int FUN_103a90a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_103a90d0(int *param_1);
template<class... A> int FUN_103a90d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa040(undefined4 *param_1);
template<class... A> int FUN_103aa040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa090(int param_1);
template<class... A> int FUN_103aa090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103aa0b0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_103aa0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aa0c0(int *param_1);
template<class... A> int FUN_103aa0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa640(undefined4 param_1);
template<class... A> int FUN_103aa640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa650(undefined4 param_1);
template<class... A> int FUN_103aa650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa660(undefined4 param_1);
template<class... A> int FUN_103aa660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa670(undefined4 param_1);
template<class... A> int FUN_103aa670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa680(undefined4 param_1);
template<class... A> int FUN_103aa680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa690(undefined4 param_1);
template<class... A> int FUN_103aa690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6a0(undefined4 param_1);
template<class... A> int FUN_103aa6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6b0(undefined4 param_1);
template<class... A> int FUN_103aa6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6c0(undefined4 param_1);
template<class... A> int FUN_103aa6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6d0(undefined4 param_1);
template<class... A> int FUN_103aa6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6e0(undefined4 param_1);
template<class... A> int FUN_103aa6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa6f0(undefined4 param_1);
template<class... A> int FUN_103aa6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa700(undefined4 param_1);
template<class... A> int FUN_103aa700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa710(undefined4 param_1);
template<class... A> int FUN_103aa710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa720(undefined4 param_1);
template<class... A> int FUN_103aa720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa730(undefined4 param_1);
template<class... A> int FUN_103aa730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa740(undefined4 param_1);
template<class... A> int FUN_103aa740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa750(undefined4 param_1);
template<class... A> int FUN_103aa750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa760(undefined4 param_1);
template<class... A> int FUN_103aa760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa7f0(undefined4 param_1);
template<class... A> int FUN_103aa7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103aa800(undefined4 *param_1);
template<class... A> int FUN_103aa800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103aac10(int *param_1);
template<class... A> int FUN_103aac10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab440(int param_1);
template<class... A> int FUN_103ab440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab450(int param_1);
template<class... A> int FUN_103ab450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab460(int param_1);
template<class... A> int FUN_103ab460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab470(int param_1);
template<class... A> int FUN_103ab470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab480(int param_1);
template<class... A> int FUN_103ab480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103ab490(int param_1);
template<class... A> int FUN_103ab490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab4f0(int param_1);
template<class... A> int FUN_103ab4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab500(int param_1);
template<class... A> int FUN_103ab500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab510(int param_1);
template<class... A> int FUN_103ab510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab520(int param_1);
template<class... A> int FUN_103ab520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab530(int param_1);
template<class... A> int FUN_103ab530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ab540(int param_1);
template<class... A> int FUN_103ab540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_103ab550(int param_1);
template<class... A> int FUN_103ab550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab560(void);
template<class... A> int FUN_103ab560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab570(void);
template<class... A> int FUN_103ab570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ab580(void);
template<class... A> int FUN_103ab580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103ab590(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_103ab590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ab5a0(int param_1);
template<class... A> int FUN_103ab5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103ab5b0(undefined4 *param_1);
template<class... A> int FUN_103ab5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103aba10(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_103aba10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abd90(uint param_1);
template<class... A> int FUN_103abd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abe00(uint param_1);
template<class... A> int FUN_103abe00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abe70(uint param_1);
template<class... A> int FUN_103abe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abef0(uint param_1);
template<class... A> int FUN_103abef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103abf60(uint param_1);
template<class... A> int FUN_103abf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103ac050(int param_1);
template<class... A> int FUN_103ac050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6820(undefined4 *param_1);
template<class... A> int FUN_103b6820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_103b6830(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_103b6830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103b6880(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_103b6880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b68d0(int param_1,int param_2);
template<class... A> int FUN_103b68d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b6920(int param_1,int param_2);
template<class... A> int FUN_103b6920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b6970(int param_1,int param_2);
template<class... A> int FUN_103b6970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103b69d0(int param_1,int param_2);
template<class... A> int FUN_103b69d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6a20(undefined4 *param_1);
template<class... A> int FUN_103b6a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b6a30(undefined4 *param_1);
template<class... A> int FUN_103b6a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ab0(int param_1);
template<class... A> int FUN_103b6ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ac0(int param_1);
template<class... A> int FUN_103b6ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ad0(int param_1);
template<class... A> int FUN_103b6ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b6ae0(int param_1);
template<class... A> int FUN_103b6ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103b78b0(int param_1);
template<class... A> int FUN_103b78b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103b8650(int param_1);
template<class... A> int FUN_103b8650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103b8670(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_103b8670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103b8b60(void);
template<class... A> int FUN_103b8b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103b8b70(void);
template<class... A> int FUN_103b8b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b8d80(int param_1);
template<class... A> int FUN_103b8d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b9190(uint *param_1);
template<class... A> int FUN_103b9190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_103b91b0(SCStr *param_1);
template<class... A> int FUN_103b91b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103b93d0(uint *param_1);
template<class... A> int FUN_103b93d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9420(void);
template<class... A> int FUN_103b9420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9430(void);
template<class... A> int FUN_103b9430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9440(void);
template<class... A> int FUN_103b9440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9450(void);
template<class... A> int FUN_103b9450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9460(void);
template<class... A> int FUN_103b9460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103b9470(void);
template<class... A> int FUN_103b9470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bbe50(int param_1);
template<class... A> int FUN_103bbe50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bbf00(int param_1);
template<class... A> int FUN_103bbf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc700(undefined4 *param_1);
template<class... A> int FUN_103bc700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc710(undefined4 *param_1);
template<class... A> int FUN_103bc710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc720(undefined4 *param_1);
template<class... A> int FUN_103bc720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bc730(undefined4 *param_1);
template<class... A> int FUN_103bc730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd3a0(undefined4 *param_1);
template<class... A> int FUN_103bd3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd3d0(undefined4 *param_1);
template<class... A> int FUN_103bd3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd400(undefined4 *param_1);
template<class... A> int FUN_103bd400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd430(undefined4 *param_1);
template<class... A> int FUN_103bd430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd460(undefined4 *param_1);
template<class... A> int FUN_103bd460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd490(undefined4 *param_1);
template<class... A> int FUN_103bd490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103bd4c0(int *param_1);
template<class... A> int FUN_103bd4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd40(int param_1);
template<class... A> int FUN_103bdd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd50(int param_1);
template<class... A> int FUN_103bdd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd60(int param_1);
template<class... A> int FUN_103bdd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd70(int param_1);
template<class... A> int FUN_103bdd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd80(int param_1);
template<class... A> int FUN_103bdd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdd90(int param_1);
template<class... A> int FUN_103bdd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103bdda0(int param_1);
template<class... A> int FUN_103bdda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103be340(undefined4 param_1);
template<class... A> int FUN_103be340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103be4f0(void);
template<class... A> int FUN_103be4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103be500(undefined4 *param_1);
template<class... A> int FUN_103be500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103be740(undefined4 *param_1);
template<class... A> int FUN_103be740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103be870(undefined4 *param_1);
template<class... A> int FUN_103be870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103be890(int *param_1);
template<class... A> int FUN_103be890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103be8a0(undefined4 *param_1);
template<class... A> int FUN_103be8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103be9d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_103be9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103bf210(void);
template<class... A> int FUN_103bf210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103bf380(int param_1);
template<class... A> int FUN_103bf380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103bf390(int *param_1);
template<class... A> int FUN_103bf390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103bf410(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103bf410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103bf470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_103bf470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf740(void);
template<class... A> int FUN_103bf740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf750(void);
template<class... A> int FUN_103bf750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf790(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103bf790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf7a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103bf7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bf7b0(void);
template<class... A> int FUN_103bf7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bfa40(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_103bfa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103bfae0(uint param_1);
template<class... A> int FUN_103bfae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb10(undefined4 param_1);
template<class... A> int FUN_103bfb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfb20(undefined4 param_1);
template<class... A> int FUN_103bfb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103bfb30(int param_1,SCStr *param_2);
template<class... A> int FUN_103bfb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd00(undefined4 param_1);
template<class... A> int FUN_103bfd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd20(undefined4 param_1);
template<class... A> int FUN_103bfd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103bfd30(undefined4 param_1);
template<class... A> int FUN_103bfd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103bff20(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_103bff20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103bfff0(int *param_1,int *param_2);
template<class... A> int FUN_103bfff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0110(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103c0110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0130(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103c0130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0150(undefined4 param_1);
template<class... A> int FUN_103c0150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0160(undefined4 param_1);
template<class... A> int FUN_103c0160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0180(undefined4 param_1);
template<class... A> int FUN_103c0180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c0190(undefined4 param_1);
template<class... A> int FUN_103c0190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c01b0(undefined4 param_1);
template<class... A> int FUN_103c01b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103c01c0(undefined4 param_1);
template<class... A> int FUN_103c01c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103c01d0(void);
template<class... A> int FUN_103c01d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0220(undefined4 *param_1);
template<class... A> int FUN_103c0220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0370(undefined4 *param_1);
template<class... A> int FUN_103c0370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c06e0(undefined4 *param_1);
template<class... A> int FUN_103c06e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0740(undefined4 *param_1);
template<class... A> int FUN_103c0740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c07a0(undefined4 *param_1);
template<class... A> int FUN_103c07a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c07c0(undefined4 *param_1);
template<class... A> int FUN_103c07c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0850(undefined4 *param_1);
template<class... A> int FUN_103c0850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c08f0(undefined4 *param_1);
template<class... A> int FUN_103c08f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c0930(undefined4 param_1);
template<class... A> int FUN_103c0930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0940(int param_1);
template<class... A> int FUN_103c0940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0950(int param_1);
template<class... A> int FUN_103c0950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0960(int param_1);
template<class... A> int FUN_103c0960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0a40(undefined4 *param_1);
template<class... A> int FUN_103c0a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c0a60(undefined4 param_1);
template<class... A> int FUN_103c0a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0a70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103c0a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c0b00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103c0b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c0b90(undefined4 *param_1);
template<class... A> int FUN_103c0b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103c12b0(undefined4 *param_1);
template<class... A> int FUN_103c12b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c1d90(int param_1);
template<class... A> int FUN_103c1d90(A...);
/* WARNING: Removing unreachable block_103c1dc0 (ram,0x101ba14a) */ void __fastcall FUN_103c1dc0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c1df0(undefined4 *param_1);
template<class... A> int FUN_103c1df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2d90(undefined4 *param_1);
template<class... A> int FUN_103c2d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2db0(undefined4 *param_1);
template<class... A> int FUN_103c2db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c2df0(undefined4 *param_1);
template<class... A> int FUN_103c2df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3650(int param_1);
template<class... A> int FUN_103c3650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3660(undefined4 *param_1);
template<class... A> int FUN_103c3660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c3670(int param_1);
template<class... A> int FUN_103c3670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c3680(int param_1);
template<class... A> int FUN_103c3680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c3690(int param_1);
template<class... A> int FUN_103c3690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36a0(int param_1);
template<class... A> int FUN_103c36a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36b0(int param_1);
template<class... A> int FUN_103c36b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36c0(int param_1);
template<class... A> int FUN_103c36c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36d0(undefined4 *param_1);
template<class... A> int FUN_103c36d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c36e0(undefined4 *param_1);
template<class... A> int FUN_103c36e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c41f0(undefined4 *param_1);
template<class... A> int FUN_103c41f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c4240(int param_1);
template<class... A> int FUN_103c4240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42c0(int param_1);
template<class... A> int FUN_103c42c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42d0(int param_1);
template<class... A> int FUN_103c42d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c42e0(int param_1);
template<class... A> int FUN_103c42e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4820(undefined4 param_1);
template<class... A> int FUN_103c4820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4830(undefined4 param_1);
template<class... A> int FUN_103c4830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4840(undefined4 param_1);
template<class... A> int FUN_103c4840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4850(undefined4 param_1);
template<class... A> int FUN_103c4850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4860(undefined4 param_1);
template<class... A> int FUN_103c4860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4870(undefined4 param_1);
template<class... A> int FUN_103c4870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4880(undefined4 param_1);
template<class... A> int FUN_103c4880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4890(int param_1);
template<class... A> int FUN_103c4890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c48a0(int param_1);
template<class... A> int FUN_103c48a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c48b0(int param_1);
template<class... A> int FUN_103c48b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b50(int param_1);
template<class... A> int FUN_103c4b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b60(int param_1);
template<class... A> int FUN_103c4b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c4b70(int param_1);
template<class... A> int FUN_103c4b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103c4bf0(int param_1);
template<class... A> int FUN_103c4bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103c4c40(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_103c4c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c4c50(int param_1);
template<class... A> int FUN_103c4c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_103c6550(uint param_1);
template<class... A> int FUN_103c6550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c7250(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103c7250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103c72a0(SCStr *param_1);
template<class... A> int FUN_103c72a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103c72f0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_103c72f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103c7340(int param_1,int param_2);
template<class... A> int FUN_103c7340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_103c73a0(int param_1);
template<class... A> int FUN_103c73a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c73b0(int param_1);
template<class... A> int FUN_103c73b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8170(int param_1);
template<class... A> int FUN_103c8170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8180(int param_1);
template<class... A> int FUN_103c8180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81d0(int param_1);
template<class... A> int FUN_103c81d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81e0(int param_1);
template<class... A> int FUN_103c81e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c81f0(int param_1);
template<class... A> int FUN_103c81f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8200(int param_1);
template<class... A> int FUN_103c8200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8210(int param_1);
template<class... A> int FUN_103c8210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8220(int param_1);
template<class... A> int FUN_103c8220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8230(int param_1);
template<class... A> int FUN_103c8230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8260(int param_1);
template<class... A> int FUN_103c8260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8270(int param_1);
template<class... A> int FUN_103c8270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8280(int param_1);
template<class... A> int FUN_103c8280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8300(int param_1);
template<class... A> int FUN_103c8300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8310(int param_1);
template<class... A> int FUN_103c8310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8720(int param_1);
template<class... A> int FUN_103c8720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8730(int param_1);
template<class... A> int FUN_103c8730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103c8740(int param_1);
template<class... A> int FUN_103c8740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103c8b40(int param_1);
template<class... A> int FUN_103c8b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_103c9390(void);
template<class... A> int FUN_103c9390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_103c93a0(int *param_1);
template<class... A> int FUN_103c93a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ca170(void);
template<class... A> int FUN_103ca170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ca180(void);
template<class... A> int FUN_103ca180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103ca9c0(undefined4 *param_1);
template<class... A> int FUN_103ca9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb270(undefined4 *param_1);
template<class... A> int FUN_103cb270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb2a0(undefined4 *param_1);
template<class... A> int FUN_103cb2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb2d0(undefined4 *param_1);
template<class... A> int FUN_103cb2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb300(undefined4 *param_1);
template<class... A> int FUN_103cb300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cb330(undefined4 *param_1);
template<class... A> int FUN_103cb330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_103cbed0(undefined4 param_1);
template<class... A> int __stdcall FUN_103cbed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cbee0(SCStr *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103cbee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103cc1e0(int param_1);
template<class... A> int FUN_103cc1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cca40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103cca40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cca60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_103cca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_103ccae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cce80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_103cce80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_103ccea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_103ccec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccee0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_103ccee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103ccfa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_103ccfa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd330(void);
template<class... A> int FUN_103cd330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd340(void);
template<class... A> int FUN_103cd340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd820(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103cd820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd830(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103cd830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cd840(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103cd840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce540(undefined4 param_1);
template<class... A> int FUN_103ce540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce550(undefined4 param_1);
template<class... A> int FUN_103ce550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ce560(undefined4 param_1);
template<class... A> int FUN_103ce560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103ce570(int param_1,SCStr *param_2);
template<class... A> int FUN_103ce570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_103ce5a0(int param_1,SCStr *param_2);
template<class... A> int FUN_103ce5a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5d0(void);
template<class... A> int FUN_103ce5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5e0(void);
template<class... A> int FUN_103ce5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ce5f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103ce5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea60(undefined4 param_1);
template<class... A> int FUN_103cea60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea70(undefined4 param_1);
template<class... A> int FUN_103cea70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea80(undefined4 param_1);
template<class... A> int FUN_103cea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cea90(undefined4 param_1);
template<class... A> int FUN_103cea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceaa0(undefined4 param_1);
template<class... A> int FUN_103ceaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceab0(undefined4 param_1);
template<class... A> int FUN_103ceab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceac0(undefined4 param_1);
template<class... A> int FUN_103ceac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cead0(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_103cead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ceb00(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_103ceb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103ceb30(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_103ceb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cec00(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_103cec00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_103cece0(int *param_1,int *param_2);
template<class... A> int FUN_103cece0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced50(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103ced50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103ced70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ced90(undefined4 param_1);
template<class... A> int FUN_103ced90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103ceda0(undefined4 param_1);
template<class... A> int FUN_103ceda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedb0(undefined4 param_1);
template<class... A> int FUN_103cedb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedc0(undefined4 param_1);
template<class... A> int FUN_103cedc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedd0(undefined4 param_1);
template<class... A> int FUN_103cedd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cede0(undefined4 param_1);
template<class... A> int FUN_103cede0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cedf0(undefined4 param_1);
template<class... A> int FUN_103cedf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee00(undefined4 param_1);
template<class... A> int FUN_103cee00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee10(undefined4 param_1);
template<class... A> int FUN_103cee10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee20(undefined4 param_1);
template<class... A> int FUN_103cee20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee30(undefined4 param_1);
template<class... A> int FUN_103cee30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee40(undefined4 param_1);
template<class... A> int FUN_103cee40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee50(undefined4 param_1);
template<class... A> int FUN_103cee50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee60(undefined4 param_1);
template<class... A> int FUN_103cee60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee70(undefined4 param_1);
template<class... A> int FUN_103cee70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_103cee80(undefined4 param_1);
template<class... A> int FUN_103cee80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_103cee90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_103cee90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf1f0(undefined4 *param_1);
template<class... A> int FUN_103cf1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_103cf210(undefined4 param_1);
template<class... A> int FUN_103cf210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf320(undefined4 *param_1);
template<class... A> int FUN_103cf320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103cf770(undefined4 *param_1);
template<class... A> int FUN_103cf770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_103d04b0(undefined4 *param_1);
template<class... A> int FUN_103d04b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_103d0a10(undefined4 *param_1);
template<class... A> int FUN_103d0a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d0ff0(int *param_1);
template<class... A> int FUN_103d0ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_103d1000(int *param_1);
template<class... A> int FUN_103d1000(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);
extern void __fastcall FUN_11132140(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);
extern void __fastcall thunk_FUN_11132140(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RFetchTokenAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpSPAddAccountXAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpSPAddOAuthAccountXAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RUpnpZGTGetZoneGroupStateAIOOp_;

// Reference entry 103566b0; body size 3 bytes.
extern int __stdcall thunk_FUN_10200150(int a1,int a2,int a3,int a4,int a5);
extern int __stdcall thunk_FUN_102207b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_102460b0(int a1,int a2);
extern int __stdcall thunk_FUN_1038a5a0(int a1,int a2);
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_103cd850(int a1,int a2);
extern int __stdcall thunk_FUN_103cdb40(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_103cdcc0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_105a5110(int a1,int a2);
extern int __stdcall thunk_FUN_105a51f0(int a1,int a2);
extern int __stdcall thunk_FUN_105a52b0(int a1,int a2);
extern int __stdcall thunk_FUN_105a7950(int a1);
extern int __stdcall thunk_FUN_10d08960(int a1,int a2,int a3,int a4,int a5,int a6);
extern int __stdcall thunk_FUN_11131cc0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
extern int __stdcall thunk_FUN_111c4880(int a1,int a2);
extern int __stdcall thunk_FUN_1124ff50(int a1);
extern int __stdcall thunk_FUN_1124ffa0(int a1,int a2);
extern int __stdcall thunk_FUN_112503c0(int a1,int a2);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_1_3 { virtual void _p0(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_6_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(void); };
struct SCVtbl_6_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1); };
struct SCVtbl_6_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1,int a2); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_25_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual int v(void); };
struct SCVtbl_31_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual int v(void); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_3_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1); };
struct SCVtbl_3_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_7_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1); };
struct SCVtbl_8_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(int a1); };
struct SCVtbl_11_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1); };
struct SCVtbl_15_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(void); };
struct SCVtbl_24_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual int v(int a1); };
struct SCVtbl_25_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual int v(int a1); };
int FUN_100911af();
int FUN_10037466();
int FUN_1001b716();
int FUN_1002ebcc();
int FUN_1005c743(void);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
int FUN_1005c743(...);
template<class... A> int FUN_1005c743(A...);
#line 1 "ENTRY_103566b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103566b0(void)

{
  return;
}


// Reference entry 103566c0; body size 3 bytes.
#line 1 "ENTRY_103566c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103566c0(void)

{
  return;
}


// Reference entry 10356890; body size 92 bytes.
#line 1 "ENTRY_10356890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10356890(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

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
  thunk_FUN_103566d0(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10356a20; body size 8 bytes.
#line 1 "ENTRY_10356a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10356a20(int param_1)

{
  return (int)(param_1 + -8);
}


// Reference entry 10356ef0; body size 122 bytes.
#line 1 "ENTRY_10356ef0"

__declspec(naked) void FUN_10356ef0(void)

{
  __asm _emit 0x55 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xe9 __asm _emit 0x83 __asm _emit 0x7f __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x67 __asm _emit 0x53 __asm _emit 0x56
  __asm _emit 0x6a __asm _emit 0x30
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x5e __asm _emit 0x08
  __asm mov dword ptr [esi], offset LAB_11899ed0
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x3d __asm _emit 0x3b __asm _emit 0xcf
  __asm _emit 0x75 __asm _emit 0x2f __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x53 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x4f __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9
  __asm _emit 0x74 __asm _emit 0x29 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xcf __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x10
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x75 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0x5f __asm _emit 0x5d __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x75 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0x5b
  __asm _emit 0x5f __asm _emit 0x5d __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103573e0; body size 12 bytes.
#line 1 "ENTRY_103573e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103573e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10357aa0; body size 24 bytes.
#line 1 "ENTRY_10357aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10357aa0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10314f90(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10357ac0; body size 24 bytes.
#line 1 "ENTRY_10357ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10357ac0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357cb0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 10357ae0; body size 5 bytes.
#line 1 "ENTRY_10357ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10357af0; body size 5 bytes.
#line 1 "ENTRY_10357af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357af0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10357b00; body size 5 bytes.
#line 1 "ENTRY_10357b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357b00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10357b10; body size 5 bytes.
#line 1 "ENTRY_10357b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357b10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10357f80; body size 5 bytes.
#line 1 "ENTRY_10357f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10357f90; body size 5 bytes.
#line 1 "ENTRY_10357f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10357fa0; body size 5 bytes.
#line 1 "ENTRY_10357fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10357fb0; body size 5 bytes.
#line 1 "ENTRY_10357fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10357fc0; body size 5 bytes.
#line 1 "ENTRY_10357fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10357fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103580a0; body size 5 bytes.
#line 1 "ENTRY_103580a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103580b0; body size 5 bytes.
#line 1 "ENTRY_103580b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103580c0; body size 5 bytes.
#line 1 "ENTRY_103580c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103580d0; body size 5 bytes.
#line 1 "ENTRY_103580d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103580e0; body size 5 bytes.
#line 1 "ENTRY_103580e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103580f0; body size 5 bytes.
#line 1 "ENTRY_103580f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103580f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358100; body size 5 bytes.
#line 1 "ENTRY_10358100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358110; body size 5 bytes.
#line 1 "ENTRY_10358110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358120; body size 5 bytes.
#line 1 "ENTRY_10358120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358130; body size 5 bytes.
#line 1 "ENTRY_10358130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358140; body size 5 bytes.
#line 1 "ENTRY_10358140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358150; body size 5 bytes.
#line 1 "ENTRY_10358150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358160; body size 5 bytes.
#line 1 "ENTRY_10358160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358170; body size 5 bytes.
#line 1 "ENTRY_10358170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358180; body size 5 bytes.
#line 1 "ENTRY_10358180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358190; body size 5 bytes.
#line 1 "ENTRY_10358190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103581a0; body size 5 bytes.
#line 1 "ENTRY_103581a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103581b0; body size 5 bytes.
#line 1 "ENTRY_103581b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103581c0; body size 5 bytes.
#line 1 "ENTRY_103581c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103581d0; body size 5 bytes.
#line 1 "ENTRY_103581d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103581e0; body size 5 bytes.
#line 1 "ENTRY_103581e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103581e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10358390; body size 40 bytes.
#line 1 "ENTRY_10358390"

__declspec(naked) void FUN_10358390(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x50 __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_100399be
  __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103583d0; body size 13 bytes.
#line 1 "ENTRY_103583d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103583d0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 103583e0; body size 29 bytes.
#line 1 "ENTRY_103583e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103583e0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10358410; body size 27 bytes.
#line 1 "ENTRY_10358410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10358410(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10358440; body size 48 bytes.
#line 1 "ENTRY_10358440"

__declspec(naked) void FUN_10358440(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0x0f __asm _emit 0x57 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 10358480; body size 34 bytes.
#line 1 "ENTRY_10358480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10358480(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 103586c0; body size 28 bytes.
#line 1 "ENTRY_103586c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103586c0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 103586f0; body size 28 bytes.
#line 1 "ENTRY_103586f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103586f0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10358720; body size 28 bytes.
#line 1 "ENTRY_10358720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10358720(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10358750; body size 28 bytes.
#line 1 "ENTRY_10358750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10358750(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10358780; body size 28 bytes.
#line 1 "ENTRY_10358780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10358780(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10358820; body size 9 bytes.
#line 1 "ENTRY_10358820"

__declspec(naked) void FUN_10358820(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08
  __asm jmp LAB_1009903f
}






// Reference entry 10358a00; body size 9 bytes.
#line 1 "ENTRY_10358a00"

__declspec(naked) void FUN_10358a00(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08
  __asm jmp LAB_1009a426
}






// Reference entry 10358af0; body size 12 bytes.
#line 1 "ENTRY_10358af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10358af0(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 10358b00; body size 12 bytes.
#line 1 "ENTRY_10358b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10358b00(int param_1,int param_2)

{
  return (int)(param_2 - param_1 >> 3);
}


// Reference entry 10358b10; body size 86 bytes.
#line 1 "ENTRY_10358b10"

__declspec(naked) void FUN_10358b10(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x33 __asm _emit 0xff __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x74 __asm _emit 0x43 __asm _emit 0x56
  __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x47 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x1d __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x52 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xeb __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x30 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75
  __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0xf2 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf4 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x75
  __asm _emit 0xbf __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc3
}






// Reference entry 10358b80; body size 86 bytes.
#line 1 "ENTRY_10358b80"

__declspec(naked) void FUN_10358b80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x33 __asm _emit 0xff __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x74 __asm _emit 0x43 __asm _emit 0x56
  __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x47 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x1d __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x52 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xeb __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x30 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75
  __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0xf2 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf4 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x75
  __asm _emit 0xbf __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc3
}






// Reference entry 10358d20; body size 36 bytes.
#line 1 "ENTRY_10358d20"

__declspec(naked) void FUN_10358d20(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x74 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x02
  __asm _emit 0x83 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52
  __asm call LAB_1004aa57
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10358f40; body size 15 bytes.
#line 1 "ENTRY_10358f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358f40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10358f60; body size 15 bytes.
#line 1 "ENTRY_10358f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358f60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10358f80; body size 15 bytes.
#line 1 "ENTRY_10358f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10358fa0; body size 15 bytes.
#line 1 "ENTRY_10358fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358fa0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10358fc0; body size 15 bytes.
#line 1 "ENTRY_10358fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358fc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10358fe0; body size 15 bytes.
#line 1 "ENTRY_10358fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10358fe0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10359000; body size 15 bytes.
#line 1 "ENTRY_10359000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359000(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10359020; body size 15 bytes.
#line 1 "ENTRY_10359020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359020(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10359140; body size 5 bytes.
#line 1 "ENTRY_10359140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359150; body size 5 bytes.
#line 1 "ENTRY_10359150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359160; body size 5 bytes.
#line 1 "ENTRY_10359160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359170; body size 5 bytes.
#line 1 "ENTRY_10359170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359180; body size 5 bytes.
#line 1 "ENTRY_10359180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359190; body size 5 bytes.
#line 1 "ENTRY_10359190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103591a0; body size 5 bytes.
#line 1 "ENTRY_103591a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103591b0; body size 5 bytes.
#line 1 "ENTRY_103591b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103591c0; body size 5 bytes.
#line 1 "ENTRY_103591c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103591d0; body size 5 bytes.
#line 1 "ENTRY_103591d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103591e0; body size 5 bytes.
#line 1 "ENTRY_103591e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103591f0; body size 5 bytes.
#line 1 "ENTRY_103591f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103591f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103592d0; body size 5 bytes.
#line 1 "ENTRY_103592d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103592d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103592e0; body size 5 bytes.
#line 1 "ENTRY_103592e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103592e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103592f0; body size 5 bytes.
#line 1 "ENTRY_103592f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103592f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359300; body size 5 bytes.
#line 1 "ENTRY_10359300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359310; body size 5 bytes.
#line 1 "ENTRY_10359310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359320; body size 5 bytes.
#line 1 "ENTRY_10359320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359330; body size 5 bytes.
#line 1 "ENTRY_10359330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359340; body size 5 bytes.
#line 1 "ENTRY_10359340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359350; body size 5 bytes.
#line 1 "ENTRY_10359350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359360; body size 5 bytes.
#line 1 "ENTRY_10359360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359370; body size 5 bytes.
#line 1 "ENTRY_10359370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359380; body size 5 bytes.
#line 1 "ENTRY_10359380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359390; body size 5 bytes.
#line 1 "ENTRY_10359390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103593a0; body size 5 bytes.
#line 1 "ENTRY_103593a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103593a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103593b0; body size 5 bytes.
#line 1 "ENTRY_103593b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103593b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103593c0; body size 5 bytes.
#line 1 "ENTRY_103593c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103593c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103593d0; body size 5 bytes.
#line 1 "ENTRY_103593d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103593d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103594b0; body size 5 bytes.
#line 1 "ENTRY_103594b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103594c0; body size 5 bytes.
#line 1 "ENTRY_103594c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103594d0; body size 5 bytes.
#line 1 "ENTRY_103594d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103594e0; body size 5 bytes.
#line 1 "ENTRY_103594e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103594f0; body size 5 bytes.
#line 1 "ENTRY_103594f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103594f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359500; body size 5 bytes.
#line 1 "ENTRY_10359500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359510; body size 6 bytes.
#line 1 "ENTRY_10359510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10359510(void)

{
  return (char *)("SCIHousehold");
}


// Reference entry 10359520; body size 6 bytes.
#line 1 "ENTRY_10359520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10359520(void)

{
  return (char *)("SCIOpZoneGroupTopologyGetZoneGroupState");
}


// Reference entry 10359530; body size 6 bytes.
#line 1 "ENTRY_10359530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10359530(void)

{
  return (char *)("SCITimeZone");
}


// Reference entry 10359540; body size 6 bytes.
#line 1 "ENTRY_10359540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10359540(void)

{
  return (char *)("SCIZoneGroup");
}


// Reference entry 10359550; body size 49 bytes.
#line 1 "ENTRY_10359550"

__declspec(naked) void FUN_10359550(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0xff __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x2b __asm _emit 0x37 __asm _emit 0x50 __asm _emit 0xc1 __asm _emit 0xfe __asm _emit 0x03
  __asm call LAB_1002e735
  __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 10359590; body size 49 bytes.
#line 1 "ENTRY_10359590"

__declspec(naked) void FUN_10359590(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0xff __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x2b __asm _emit 0x37 __asm _emit 0x50 __asm _emit 0xc1 __asm _emit 0xfe __asm _emit 0x03
  __asm call LAB_10046281
  __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 103597d0; body size 40 bytes.
#line 1 "ENTRY_103597d0"

__declspec(naked) void FUN_103597d0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x48
  __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9
  __asm je LAB_1148a05a
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0xc3
}






// Reference entry 10359920; body size 5 bytes.
#line 1 "ENTRY_10359920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359a00; body size 5 bytes.
#line 1 "ENTRY_10359a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359a10; body size 5 bytes.
#line 1 "ENTRY_10359a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359a20; body size 5 bytes.
#line 1 "ENTRY_10359a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359a30; body size 5 bytes.
#line 1 "ENTRY_10359a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359a40; body size 5 bytes.
#line 1 "ENTRY_10359a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359a50; body size 5 bytes.
#line 1 "ENTRY_10359a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10359a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10359a60; body size 31 bytes.
#line 1 "ENTRY_10359a60"

__declspec(naked) void FUN_10359a60(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x2b __asm _emit 0xd0 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x52 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_1003c367
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x10 __asm _emit 0xc3
}






// Reference entry 10359ba0; body size 30 bytes.
#line 1 "ENTRY_10359ba0"

__declspec(naked) void FUN_10359ba0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xc2 __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x0e __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xc2 __asm _emit 0x75 __asm _emit 0xf5 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 10359e50; body size 28 bytes.
#line 1 "ENTRY_10359e50"

__declspec(naked) void FUN_10359e50(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_11897458
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 10359e80; body size 28 bytes.
#line 1 "ENTRY_10359e80"

__declspec(naked) void FUN_10359e80(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_11898edc
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 10359eb0; body size 28 bytes.
#line 1 "ENTRY_10359eb0"

__declspec(naked) void FUN_10359eb0(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_11897424
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035a790; body size 27 bytes.
#line 1 "ENTRY_1035a790"

__declspec(naked) void FUN_1035a790(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11897238
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035a7c0; body size 27 bytes.
#line 1 "ENTRY_1035a7c0"

__declspec(naked) void FUN_1035a7c0(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11897b28
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035a7f0; body size 95 bytes.
#line 1 "ENTRY_1035a7f0"

__declspec(naked) void FUN_1035a7f0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_1002b2dd
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_11899cec
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_11899d10
  __asm mov dword ptr [esi + 0x18], offset LAB_11899d50
  __asm mov dword ptr [esi + 0x1c], offset LAB_11899d74
  __asm mov dword ptr [esi + 0x38], offset LAB_11899d84
  __asm mov dword ptr [esi + 0x44], offset LAB_11899d98
  __asm mov dword ptr [esi + 0x50], offset LAB_11899da8
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1035a870; body size 95 bytes.
#line 1 "ENTRY_1035a870"

__declspec(naked) void FUN_1035a870(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_100309cc
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_11899a7c
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_11899aa0
  __asm mov dword ptr [esi + 0x18], offset LAB_11899ae0
  __asm mov dword ptr [esi + 0x1c], offset LAB_11899b04
  __asm mov dword ptr [esi + 0x38], offset LAB_11899b14
  __asm mov dword ptr [esi + 0x44], offset LAB_11899b28
  __asm mov dword ptr [esi + 0x50], offset LAB_11899b38
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1035a8f0; body size 95 bytes.
#line 1 "ENTRY_1035a8f0"

__declspec(naked) void FUN_1035a8f0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_10056870
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_118998dc
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_11899900
  __asm mov dword ptr [esi + 0x18], offset LAB_11899940
  __asm mov dword ptr [esi + 0x1c], offset LAB_11899964
  __asm mov dword ptr [esi + 0x38], offset LAB_11899974
  __asm mov dword ptr [esi + 0x44], offset LAB_11899988
  __asm mov dword ptr [esi + 0x50], offset LAB_11899998
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1035a970; body size 95 bytes.
#line 1 "ENTRY_1035a970"

__declspec(naked) void FUN_1035a970(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_100587b5
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_118999ac
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_118999d0
  __asm mov dword ptr [esi + 0x18], offset LAB_11899a10
  __asm mov dword ptr [esi + 0x1c], offset LAB_11899a34
  __asm mov dword ptr [esi + 0x38], offset LAB_11899a44
  __asm mov dword ptr [esi + 0x44], offset LAB_11899a58
  __asm mov dword ptr [esi + 0x50], offset LAB_11899a68
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1035a9f0; body size 95 bytes.
#line 1 "ENTRY_1035a9f0"

__declspec(naked) void FUN_1035a9f0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_10046f9c
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_11899b4c
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_11899b70
  __asm mov dword ptr [esi + 0x18], offset LAB_11899bb0
  __asm mov dword ptr [esi + 0x1c], offset LAB_11899bd4
  __asm mov dword ptr [esi + 0x38], offset LAB_11899be4
  __asm mov dword ptr [esi + 0x44], offset LAB_11899bf8
  __asm mov dword ptr [esi + 0x50], offset LAB_11899c08
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1035aa70; body size 95 bytes.
#line 1 "ENTRY_1035aa70"

__declspec(naked) void FUN_1035aa70(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_1008ee14
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_11899c1c
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_11899c40
  __asm mov dword ptr [esi + 0x18], offset LAB_11899c80
  __asm mov dword ptr [esi + 0x1c], offset LAB_11899ca4
  __asm mov dword ptr [esi + 0x38], offset LAB_11899cb4
  __asm mov dword ptr [esi + 0x44], offset LAB_11899cc8
  __asm mov dword ptr [esi + 0x50], offset LAB_11899cd8
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1035ac50; body size 70 bytes.
#line 1 "ENTRY_1035ac50"

__declspec(naked) void FUN_1035ac50(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], offset LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_11897464
  __asm mov dword ptr [ecx + 0xc], offset LAB_11897474
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035af70; body size 16 bytes.
#line 1 "ENTRY_1035af70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035af70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035afd0; body size 16 bytes.
#line 1 "ENTRY_1035afd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035afd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b030; body size 16 bytes.
#line 1 "ENTRY_1035b030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b030(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b050; body size 16 bytes.
#line 1 "ENTRY_1035b050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b070; body size 16 bytes.
#line 1 "ENTRY_1035b070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b070(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b090; body size 16 bytes.
#line 1 "ENTRY_1035b090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b090(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b0b0; body size 16 bytes.
#line 1 "ENTRY_1035b0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b0b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b0d0; body size 16 bytes.
#line 1 "ENTRY_1035b0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b0f0; body size 16 bytes.
#line 1 "ENTRY_1035b0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b0f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b110; body size 16 bytes.
#line 1 "ENTRY_1035b110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b110(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b130; body size 32 bytes.
#line 1 "ENTRY_1035b130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035b130(undefined4 *param_2)
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


// Reference entry 1035b1a0; body size 32 bytes.
#line 1 "ENTRY_1035b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035b1a0(undefined4 *param_2)
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


// Reference entry 1035b1d0; body size 16 bytes.
#line 1 "ENTRY_1035b1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b1d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b3b0; body size 16 bytes.
#line 1 "ENTRY_1035b3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b410; body size 16 bytes.
#line 1 "ENTRY_1035b410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b410(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b430; body size 16 bytes.
#line 1 "ENTRY_1035b430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b430(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b450; body size 16 bytes.
#line 1 "ENTRY_1035b450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b450(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b4b0; body size 16 bytes.
#line 1 "ENTRY_1035b4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b4b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b4d0; body size 16 bytes.
#line 1 "ENTRY_1035b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b4d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b530; body size 32 bytes.
#line 1 "ENTRY_1035b530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035b530(undefined4 *param_2)
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


// Reference entry 1035b560; body size 16 bytes.
#line 1 "ENTRY_1035b560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b560(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b5c0; body size 16 bytes.
#line 1 "ENTRY_1035b5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b5c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b5e0; body size 16 bytes.
#line 1 "ENTRY_1035b5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b5e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b640; body size 16 bytes.
#line 1 "ENTRY_1035b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b640(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b660; body size 16 bytes.
#line 1 "ENTRY_1035b660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b6c0; body size 16 bytes.
#line 1 "ENTRY_1035b6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b6e0; body size 32 bytes.
#line 1 "ENTRY_1035b6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035b6e0(undefined4 *param_2)
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


// Reference entry 1035b790; body size 32 bytes.
#line 1 "ENTRY_1035b790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035b790(undefined4 *param_2)
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


// Reference entry 1035b800; body size 16 bytes.
#line 1 "ENTRY_1035b800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b800(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b820; body size 9 bytes.
#line 1 "ENTRY_1035b820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b820(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b830; body size 9 bytes.
#line 1 "ENTRY_1035b830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035b830(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b880; body size 25 bytes.
#line 1 "ENTRY_1035b880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035b880(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1035b980; body size 25 bytes.
#line 1 "ENTRY_1035b980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035b980(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1035ba60; body size 28 bytes.
#line 1 "ENTRY_1035ba60"

__declspec(naked) void FUN_1035ba60(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11899df8
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035ba90; body size 28 bytes.
#line 1 "ENTRY_1035ba90"

__declspec(naked) void FUN_1035ba90(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11899e50
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035bac0; body size 28 bytes.
#line 1 "ENTRY_1035bac0"

__declspec(naked) void FUN_1035bac0(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11899e28
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035baf0; body size 28 bytes.
#line 1 "ENTRY_1035baf0"

__declspec(naked) void FUN_1035baf0(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11899de4
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035bb20; body size 28 bytes.
#line 1 "ENTRY_1035bb20"

__declspec(naked) void FUN_1035bb20(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11899e3c
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035bb50; body size 18 bytes.
#line 1 "ENTRY_1035bb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bb50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bb70; body size 18 bytes.
#line 1 "ENTRY_1035bb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bb70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bb90; body size 18 bytes.
#line 1 "ENTRY_1035bb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bb90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bbb0; body size 3 bytes.
#line 1 "ENTRY_1035bbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035bbc0; body size 3 bytes.
#line 1 "ENTRY_1035bbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035bbd0; body size 3 bytes.
#line 1 "ENTRY_1035bbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035bbe0; body size 3 bytes.
#line 1 "ENTRY_1035bbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035bbf0; body size 3 bytes.
#line 1 "ENTRY_1035bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bbf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035bc00; body size 3 bytes.
#line 1 "ENTRY_1035bc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bc00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035bc10; body size 3 bytes.
#line 1 "ENTRY_1035bc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bc10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035bc20; body size 3 bytes.
#line 1 "ENTRY_1035bc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035bc20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035bc30; body size 10 bytes.
#line 1 "ENTRY_1035bc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc30(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1035bc40; body size 10 bytes.
#line 1 "ENTRY_1035bc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc40(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1035bc50; body size 10 bytes.
#line 1 "ENTRY_1035bc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc50(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1035bc60; body size 10 bytes.
#line 1 "ENTRY_1035bc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc60(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1035bc70; body size 10 bytes.
#line 1 "ENTRY_1035bc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc70(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1035bc80; body size 10 bytes.
#line 1 "ENTRY_1035bc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc80(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1035bc90; body size 10 bytes.
#line 1 "ENTRY_1035bc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bc90(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1035bca0; body size 10 bytes.
#line 1 "ENTRY_1035bca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035bca0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1035bd80; body size 11 bytes.
#line 1 "ENTRY_1035bd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bd80(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bd90; body size 11 bytes.
#line 1 "ENTRY_1035bd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bd90(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bda0; body size 11 bytes.
#line 1 "ENTRY_1035bda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bda0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bdb0; body size 11 bytes.
#line 1 "ENTRY_1035bdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bdb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bdc0; body size 16 bytes.
#line 1 "ENTRY_1035bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035bdc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bea0; body size 11 bytes.
#line 1 "ENTRY_1035bea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bea0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035beb0; body size 11 bytes.
#line 1 "ENTRY_1035beb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035beb0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bec0; body size 9 bytes.
#line 1 "ENTRY_1035bec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035bec0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bed0; body size 11 bytes.
#line 1 "ENTRY_1035bed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bed0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bee0; body size 11 bytes.
#line 1 "ENTRY_1035bee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035bee0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035bef0; body size 9 bytes.
#line 1 "ENTRY_1035bef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035bef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c000; body size 11 bytes.
#line 1 "ENTRY_1035c000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c000(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c010; body size 9 bytes.
#line 1 "ENTRY_1035c010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c020; body size 11 bytes.
#line 1 "ENTRY_1035c020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c020(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c030; body size 11 bytes.
#line 1 "ENTRY_1035c030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c030(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c040; body size 11 bytes.
#line 1 "ENTRY_1035c040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c040(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c050; body size 11 bytes.
#line 1 "ENTRY_1035c050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c050(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c060; body size 16 bytes.
#line 1 "ENTRY_1035c060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c060(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c080; body size 16 bytes.
#line 1 "ENTRY_1035c080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c080(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c0a0; body size 16 bytes.
#line 1 "ENTRY_1035c0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c0a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c0c0; body size 9 bytes.
#line 1 "ENTRY_1035c0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c0c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c0d0; body size 13 bytes.
#line 1 "ENTRY_1035c0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c0d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c0e0; body size 14 bytes.
#line 1 "ENTRY_1035c0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c0e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c100; body size 21 bytes.
#line 1 "ENTRY_1035c100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c100(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c120; body size 21 bytes.
#line 1 "ENTRY_1035c120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c120(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c140; body size 21 bytes.
#line 1 "ENTRY_1035c140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c140(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c160; body size 11 bytes.
#line 1 "ENTRY_1035c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c160(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c170; body size 11 bytes.
#line 1 "ENTRY_1035c170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c170(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c180; body size 9 bytes.
#line 1 "ENTRY_1035c180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c190; body size 11 bytes.
#line 1 "ENTRY_1035c190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c190(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c1a0; body size 11 bytes.
#line 1 "ENTRY_1035c1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c1a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c1b0; body size 9 bytes.
#line 1 "ENTRY_1035c1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c1c0; body size 23 bytes.
#line 1 "ENTRY_1035c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c1c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c1e0; body size 25 bytes.
#line 1 "ENTRY_1035c1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c1e0(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c200; body size 23 bytes.
#line 1 "ENTRY_1035c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c200(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c220; body size 25 bytes.
#line 1 "ENTRY_1035c220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035c220(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  param_1[2] = (undefined4)(param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c240; body size 23 bytes.
#line 1 "ENTRY_1035c240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c260; body size 23 bytes.
#line 1 "ENTRY_1035c260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035c260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035c280; body size 3 bytes.
#line 1 "ENTRY_1035c280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035c290; body size 3 bytes.
#line 1 "ENTRY_1035c290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035c2a0; body size 3 bytes.
#line 1 "ENTRY_1035c2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035c2b0; body size 3 bytes.
#line 1 "ENTRY_1035c2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035c2c0; body size 3 bytes.
#line 1 "ENTRY_1035c2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035c2d0; body size 3 bytes.
#line 1 "ENTRY_1035c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035c2e0; body size 3 bytes.
#line 1 "ENTRY_1035c2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1035c2e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1035c7e0; body size 12 bytes.
#line 1 "ENTRY_1035c7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1035c7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1035c8a0; body size 52 bytes.
#line 1 "ENTRY_1035c8a0"

__declspec(naked) void FUN_1035c8a0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x24 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035c8f0; body size 52 bytes.
#line 1 "ENTRY_1035c8f0"

__declspec(naked) void FUN_1035c8f0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035c940; body size 52 bytes.
#line 1 "ENTRY_1035c940"

__declspec(naked) void FUN_1035c940(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035c990; body size 44 bytes.
#line 1 "ENTRY_1035c990"

__declspec(naked) void FUN_1035c990(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x89 __asm _emit 0x06
  __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x05
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035caa0; body size 23 bytes.
#line 1 "ENTRY_1035caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035caa0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035cbc0; body size 23 bytes.
#line 1 "ENTRY_1035cbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035cbc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035cbe0; body size 49 bytes.
#line 1 "ENTRY_1035cbe0"

__declspec(naked) void FUN_1035cbe0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7e __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x79 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x51 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 1035cc20; body size 23 bytes.
#line 1 "ENTRY_1035cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035cc20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1035cc40; body size 42 bytes.
#line 1 "ENTRY_1035cc40"

__declspec(naked) void FUN_1035cc40(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11897430
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035cc80; body size 42 bytes.
#line 1 "ENTRY_1035cc80"

__declspec(naked) void FUN_1035cc80(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11899dbc
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035cd80; body size 48 bytes.
#line 1 "ENTRY_1035cd80"

__declspec(naked) void FUN_1035cd80(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x88 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi], offset LAB_1189823c
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1035ce50; body size 108 bytes.
#line 1 "ENTRY_1035ce50"

__declspec(naked) void FUN_1035ce50(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8d __asm _emit 0x86 __asm _emit 0xd0 __asm _emit 0xd7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_11897f18
  __asm push offset LAB_11897f30
  __asm _emit 0x6a __asm _emit 0x07
  __asm push offset LAB_11897f40
  __asm _emit 0x68 __asm _emit 0x01 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x50
  __asm call LAB_100868d6
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0x50
  __asm call LAB_10013336
  __asm mov dword ptr [esi], offset LAB_11897e88
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 0x60], offset LAB_11897ed0
  __asm mov dword ptr [esi + 0x46c], offset LAB_11897f0c
  __asm _emit 0xc6 __asm _emit 0x86 __asm _emit 0xd1 __asm _emit 0xdb __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 1035cee0; body size 55 bytes.
#line 1 "ENTRY_1035cee0"

__declspec(naked) void FUN_1035cee0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x88 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x8a __asm _emit 0x44
  __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x88 __asm _emit 0x46 __asm _emit 0x25 __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi], offset LAB_11898274
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 1035d140; body size 41 bytes.
#line 1 "ENTRY_1035d140"

__declspec(naked) void FUN_1035d140(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi], offset LAB_11898194
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1035d180; body size 48 bytes.
#line 1 "ENTRY_1035d180"

__declspec(naked) void FUN_1035d180(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x88 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi], offset LAB_11898258
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1035d1c0; body size 127 bytes.
#line 1 "ENTRY_1035d1c0"

__declspec(naked) void FUN_1035d1c0(void)

{
  __asm _emit 0x51 __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xce __asm _emit 0x80 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x4c __asm _emit 0xeb __asm _emit 0x03 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x48 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xd8
  __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x40
  __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x50 __asm _emit 0x50
  __asm push offset LAB_11896a94
  __asm push offset LAB_11896aa0
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0xcf
  __asm call LAB_10013336
  __asm mov dword ptr [edi], offset LAB_11896a04
  __asm _emit 0x8b __asm _emit 0xc7
  __asm mov dword ptr [edi + 0x60], offset LAB_11896a4c
  __asm mov dword ptr [edi + 0x46c], offset LAB_11896a88
  __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x18 __asm _emit 0x00
}






// Reference entry 1035d260; body size 134 bytes.
#line 1 "ENTRY_1035d260"

__declspec(naked) void FUN_1035d260(void)

{
  __asm _emit 0x51 __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xce __asm _emit 0x80 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x4c __asm _emit 0xeb __asm _emit 0x03 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x48 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xd8
  __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x40
  __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x50 __asm _emit 0x50
  __asm push offset LAB_118969d4
  __asm push offset LAB_11896904
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0xcf
  __asm call LAB_10013336
  __asm mov dword ptr [edi], offset LAB_11896944
  __asm _emit 0x8b __asm _emit 0xc7
  __asm mov dword ptr [edi + 0x60], offset LAB_1189698c
  __asm mov dword ptr [edi + 0x46c], offset LAB_118969c8
  __asm _emit 0xc6 __asm _emit 0x87 __asm _emit 0xd0 __asm _emit 0xd7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x18 __asm _emit 0x00
}






// Reference entry 1035d310; body size 34 bytes.
#line 1 "ENTRY_1035d310"

__declspec(naked) void FUN_1035d310(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm mov dword ptr [esi], offset LAB_11898140
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035d340; body size 34 bytes.
#line 1 "ENTRY_1035d340"

__declspec(naked) void FUN_1035d340(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm mov dword ptr [esi], offset LAB_118980ec
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035d370; body size 34 bytes.
#line 1 "ENTRY_1035d370"

__declspec(naked) void FUN_1035d370(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm mov dword ptr [esi], offset LAB_11898178
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035d3a0; body size 41 bytes.
#line 1 "ENTRY_1035d3a0"

__declspec(naked) void FUN_1035d3a0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x88 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi], offset LAB_11898204
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1035d3e0; body size 34 bytes.
#line 1 "ENTRY_1035d3e0"

__declspec(naked) void FUN_1035d3e0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm mov dword ptr [esi], offset LAB_11898290
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035d410; body size 34 bytes.
#line 1 "ENTRY_1035d410"

__declspec(naked) void FUN_1035d410(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm mov dword ptr [esi], offset LAB_11898124
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035d440; body size 36 bytes.
#line 1 "ENTRY_1035d440"

__declspec(naked) void FUN_1035d440(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x89 __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm mov dword ptr [esi], offset LAB_11898220
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1035d470; body size 41 bytes.
#line 1 "ENTRY_1035d470"

__declspec(naked) void FUN_1035d470(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi], offset LAB_118981b0
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1035d4b0; body size 41 bytes.
#line 1 "ENTRY_1035d4b0"

__declspec(naked) void FUN_1035d4b0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi], offset LAB_11898108
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1035d4f0; body size 34 bytes.
#line 1 "ENTRY_1035d4f0"

__declspec(naked) void FUN_1035d4f0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm mov dword ptr [esi], offset LAB_1189815c
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035d520; body size 34 bytes.
#line 1 "ENTRY_1035d520"

__declspec(naked) void FUN_1035d520(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm mov dword ptr [esi], offset LAB_118981cc
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035d550; body size 34 bytes.
#line 1 "ENTRY_1035d550"

__declspec(naked) void FUN_1035d550(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0x02 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10
  __asm call LAB_10051c6c
  __asm mov dword ptr [esi], offset LAB_118981e8
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035d580; body size 93 bytes.
#line 1 "ENTRY_1035d580"

__declspec(naked) void FUN_1035d580(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11886d8c
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_11897c30
  __asm _emit 0xc6 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035d8e0; body size 42 bytes.
#line 1 "ENTRY_1035d8e0"

__declspec(naked) void FUN_1035d8e0(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11896fbc
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035d920; body size 33 bytes.
#line 1 "ENTRY_1035d920"

__declspec(naked) void FUN_1035d920(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11891298
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11897a0c
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035da80; body size 42 bytes.
#line 1 "ENTRY_1035da80"

__declspec(naked) void FUN_1035da80(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11896b1c
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035f4a0; body size 42 bytes.
#line 1 "ENTRY_1035f4a0"

__declspec(naked) void FUN_1035f4a0(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11896c00
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035f4e0; body size 9 bytes.
#line 1 "ENTRY_1035f4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035f4e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIHousehold);
  return (undefined4 *)(param_1);
}


// Reference entry 1035f4f0; body size 9 bytes.
#line 1 "ENTRY_1035f4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035f4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpZoneGroupTopologyGetZoneGroupState);
  return (undefined4 *)(param_1);
}


// Reference entry 1035f610; body size 42 bytes.
#line 1 "ENTRY_1035f610"

__declspec(naked) void FUN_1035f610(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11883dcc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11897d1c
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035f780; body size 42 bytes.
#line 1 "ENTRY_1035f780"

__declspec(naked) void FUN_1035f780(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11897008
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035f7c0; body size 66 bytes.
#line 1 "ENTRY_1035f7c0"

__declspec(naked) void FUN_1035f7c0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_10045110
  __asm mov dword ptr [esi], offset LAB_118968d8
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esi + 0x10], offset LAB_11885ba8
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035fa40; body size 42 bytes.
#line 1 "ENTRY_1035fa40"

__declspec(naked) void FUN_1035fa40(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11896b68
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035fd10; body size 33 bytes.
#line 1 "ENTRY_1035fd10"

__declspec(naked) void FUN_1035fd10(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11891298
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11897a58
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035fd40; body size 9 bytes.
#line 1 "ENTRY_1035fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fd40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjQListener);
  return (undefined4 *)(param_1);
}


// Reference entry 1035fd50; body size 9 bytes.
#line 1 "ENTRY_1035fd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fd50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjUMListener);
  return (undefined4 *)(param_1);
}


// Reference entry 1035fd60; body size 42 bytes.
#line 1 "ENTRY_1035fd60"

__declspec(naked) void FUN_1035fd60(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11883dcc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11897e34
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035fe30; body size 9 bytes.
#line 1 "ENTRY_1035fe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fe30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCZonePlayerCollection);
  return (undefined4 *)(param_1);
}


// Reference entry 1035fe40; body size 42 bytes.
#line 1 "ENTRY_1035fe40"

__declspec(naked) void FUN_1035fe40(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_11897488
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1035fe80; body size 9 bytes.
#line 1 "ENTRY_1035fe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fe80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjZonePlayerCollection);
  return (undefined4 *)(param_1);
}


// Reference entry 1035fe90; body size 13 bytes.
#line 1 "ENTRY_1035fe90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035fe90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035fea0; body size 9 bytes.
#line 1 "ENTRY_1035fea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035fea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_UWAHouseholdInterface);
  return (undefined4 *)(param_1);
}


// Reference entry 1035feb0; body size 35 bytes.
#line 1 "ENTRY_1035feb0"

__declspec(naked) void FUN_1035feb0(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035fee0; body size 70 bytes.
#line 1 "ENTRY_1035fee0"

__declspec(naked) void FUN_1035fee0(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1035ff40; body size 9 bytes.
#line 1 "ENTRY_1035ff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1035ff40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_WizardCompletionCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 1035ff50; body size 11 bytes.
#line 1 "ENTRY_1035ff50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035ff50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1035ff60; body size 24 bytes.
#line 1 "ENTRY_1035ff60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1035ff60(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103600e0; body size 42 bytes.
#line 1 "ENTRY_103600e0"

__declspec(naked) void FUN_103600e0(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 10360310; body size 11 bytes.
#line 1 "ENTRY_10360310"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10360310(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpZGTGetZoneGroupStateAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103608b0; body size 53 bytes.
#line 1 "ENTRY_103608b0"

__declspec(naked) void FUN_103608b0(void)

{
  __asm mov dword ptr [ecx], offset LAB_11899cec
  __asm mov dword ptr [ecx + 8], offset LAB_11899d10
  __asm mov dword ptr [ecx + 0x18], offset LAB_11899d50
  __asm mov dword ptr [ecx + 0x1c], offset LAB_11899d74
  __asm mov dword ptr [ecx + 0x38], offset LAB_11899d84
  __asm mov dword ptr [ecx + 0x44], offset LAB_11899d98
  __asm mov dword ptr [ecx + 0x50], offset LAB_11899da8
  __asm jmp LAB_100709e6
}






// Reference entry 10360900; body size 53 bytes.
#line 1 "ENTRY_10360900"

__declspec(naked) void FUN_10360900(void)

{
  __asm mov dword ptr [ecx], offset LAB_11899a7c
  __asm mov dword ptr [ecx + 8], offset LAB_11899aa0
  __asm mov dword ptr [ecx + 0x18], offset LAB_11899ae0
  __asm mov dword ptr [ecx + 0x1c], offset LAB_11899b04
  __asm mov dword ptr [ecx + 0x38], offset LAB_11899b14
  __asm mov dword ptr [ecx + 0x44], offset LAB_11899b28
  __asm mov dword ptr [ecx + 0x50], offset LAB_11899b38
  __asm jmp LAB_100709e6
}






// Reference entry 10360950; body size 53 bytes.
#line 1 "ENTRY_10360950"

__declspec(naked) void FUN_10360950(void)

{
  __asm mov dword ptr [ecx], offset LAB_118998dc
  __asm mov dword ptr [ecx + 8], offset LAB_11899900
  __asm mov dword ptr [ecx + 0x18], offset LAB_11899940
  __asm mov dword ptr [ecx + 0x1c], offset LAB_11899964
  __asm mov dword ptr [ecx + 0x38], offset LAB_11899974
  __asm mov dword ptr [ecx + 0x44], offset LAB_11899988
  __asm mov dword ptr [ecx + 0x50], offset LAB_11899998
  __asm jmp LAB_100709e6
}






// Reference entry 103609a0; body size 53 bytes.
#line 1 "ENTRY_103609a0"

__declspec(naked) void FUN_103609a0(void)

{
  __asm mov dword ptr [ecx], offset LAB_118999ac
  __asm mov dword ptr [ecx + 8], offset LAB_118999d0
  __asm mov dword ptr [ecx + 0x18], offset LAB_11899a10
  __asm mov dword ptr [ecx + 0x1c], offset LAB_11899a34
  __asm mov dword ptr [ecx + 0x38], offset LAB_11899a44
  __asm mov dword ptr [ecx + 0x44], offset LAB_11899a58
  __asm mov dword ptr [ecx + 0x50], offset LAB_11899a68
  __asm jmp LAB_100709e6
}






// Reference entry 103609f0; body size 53 bytes.
#line 1 "ENTRY_103609f0"

__declspec(naked) void FUN_103609f0(void)

{
  __asm mov dword ptr [ecx], offset LAB_11899b4c
  __asm mov dword ptr [ecx + 8], offset LAB_11899b70
  __asm mov dword ptr [ecx + 0x18], offset LAB_11899bb0
  __asm mov dword ptr [ecx + 0x1c], offset LAB_11899bd4
  __asm mov dword ptr [ecx + 0x38], offset LAB_11899be4
  __asm mov dword ptr [ecx + 0x44], offset LAB_11899bf8
  __asm mov dword ptr [ecx + 0x50], offset LAB_11899c08
  __asm jmp LAB_100709e6
}






// Reference entry 10360a40; body size 53 bytes.
#line 1 "ENTRY_10360a40"

__declspec(naked) void FUN_10360a40(void)

{
  __asm mov dword ptr [ecx], offset LAB_11899c1c
  __asm mov dword ptr [ecx + 8], offset LAB_11899c40
  __asm mov dword ptr [ecx + 0x18], offset LAB_11899c80
  __asm mov dword ptr [ecx + 0x1c], offset LAB_11899ca4
  __asm mov dword ptr [ecx + 0x38], offset LAB_11899cb4
  __asm mov dword ptr [ecx + 0x44], offset LAB_11899cc8
  __asm mov dword ptr [ecx + 0x50], offset LAB_11899cd8
  __asm jmp LAB_100709e6
}






// Reference entry 103629e0; body size 34 bytes.
#line 1 "ENTRY_103629e0"

__declspec(naked) void FUN_103629e0(void)

{
  __asm _emit 0x56 __asm _emit 0x8d __asm _emit 0x71 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x15 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xce __asm _emit 0x0f
  __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x10 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 10362d60; body size 3 bytes.
#line 1 "ENTRY_10362d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10362d60(void)

{
  return;
}


// Reference entry 10363580; body size 19 bytes.
#line 1 "ENTRY_10363580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103635a0; body size 19 bytes.
#line 1 "ENTRY_103635a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103635a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103635c0; body size 11 bytes.
#line 1 "ENTRY_103635c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103635c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RCompatibleZPPairCandidateEnumerator);

  thunk_FUN_11132140(param_1);

}


// Reference entry 103635d0; body size 28 bytes.
#line 1 "ENTRY_103635d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103635d0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RCustRegQueryCountryAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RCustRegQueryCountryAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RCustRegQueryCountryAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10363600; body size 28 bytes.
#line 1 "ENTRY_10363600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363600(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RCustRegRegisterSoftwareAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10363630; body size 11 bytes.
#line 1 "ENTRY_10363630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTPrimaryZPCandidateEnumerator);

  thunk_FUN_11132140(param_1);

}


// Reference entry 10363900; body size 11 bytes.
#line 1 "ENTRY_10363900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubwooferPrimaryZPCandidateEnumerator);

  thunk_FUN_11132140(param_1);

}


// Reference entry 10363910; body size 11 bytes.
#line 1 "ENTRY_10363910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363910(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSubwooferZPCandidateEnumerator);

  thunk_FUN_11132140(param_1);

}


// Reference entry 10363920; body size 28 bytes.
#line 1 "ENTRY_10363920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363920(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetStringAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetStringAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpSPSetStringAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10363950; body size 28 bytes.
#line 1 "ENTRY_10363950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363950(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpZGTGetZoneGroupStateAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10363980; body size 11 bytes.
#line 1 "ENTRY_10363980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363980(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPAirPlayEnumerator);

  thunk_FUN_11132140(param_1);

}


// Reference entry 103639c0; body size 11 bytes.
#line 1 "ENTRY_103639c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103639c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPIkeaLampEnumerator);

  thunk_FUN_11132140(param_1);

}


// Reference entry 103639d0; body size 11 bytes.
#line 1 "ENTRY_103639d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103639d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPLineInEnumerator);

  thunk_FUN_11132140(param_1);

}


// Reference entry 10363cb0; body size 19 bytes.
#line 1 "ENTRY_10363cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363cb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10363cd0; body size 19 bytes.
#line 1 "ENTRY_10363cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10363d70; body size 19 bytes.
#line 1 "ENTRY_10363d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10363d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364b30; body size 19 bytes.
#line 1 "ENTRY_10364b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364b50; body size 7 bytes.
#line 1 "ENTRY_10364b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364b50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364b60; body size 7 bytes.
#line 1 "ENTRY_10364b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364b60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364c90; body size 19 bytes.
#line 1 "ENTRY_10364c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364c90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364d30; body size 19 bytes.
#line 1 "ENTRY_10364d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364d30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364ea0; body size 19 bytes.
#line 1 "ENTRY_10364ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10364ec0; body size 18 bytes.
#line 1 "ENTRY_10364ec0"

__declspec(naked) void FUN_10364ec0(void)

{
  __asm mov dword ptr [ecx], offset LAB_11897bd4
  __asm mov dword ptr [ecx + 8], offset LAB_11897c20
  __asm jmp LAB_1000d9e0
}






// Reference entry 10364fe0; body size 19 bytes.
#line 1 "ENTRY_10364fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10364fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10365020; body size 19 bytes.
#line 1 "ENTRY_10365020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10365020(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10365380; body size 19 bytes.
#line 1 "ENTRY_10365380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10365380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10365830; body size 11 bytes.
#line 1 "ENTRY_10365830"

__declspec(naked) void FUN_10365830(void)

{
  __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x85 __asm _emit 0xc9
  __asm jne LAB_10070743
  __asm _emit 0xc3
}






// Reference entry 10365960; body size 18 bytes.
#line 1 "ENTRY_10365960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10365960(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10365980; body size 18 bytes.
#line 1 "ENTRY_10365980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10365980(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10365ec0; body size 65 bytes.
#line 1 "ENTRY_10365ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10365ec0(int *param_2)
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


// Reference entry 10366230; body size 65 bytes.
#line 1 "ENTRY_10366230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10366230(int *param_2)
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


// Reference entry 10366300; body size 65 bytes.
#line 1 "ENTRY_10366300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10366300(int *param_2)
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


// Reference entry 10366360; body size 65 bytes.
#line 1 "ENTRY_10366360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10366360(int *param_2)
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


// Reference entry 103664a0; body size 65 bytes.
#line 1 "ENTRY_103664a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103664a0(int *param_2)
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


// Reference entry 103665c0; body size 60 bytes.
#line 1 "ENTRY_103665c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103665c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_101f53d0();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 10366660; body size 60 bytes.
#line 1 "ENTRY_10366660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10366660(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_101f53d0();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103666b0; body size 120 bytes.
#line 1 "ENTRY_103666b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103666b0(int *param_2)
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
  iVar2 = (int)(param_2[2]);
  if ((int)((iVar2)) != param_1[2]) {
    piVar1 = (int *)((int *)param_1[3]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[2] = (int)(0);
      param_1[3] = (int)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar2 = (int)(param_2[2]);
    }
    param_1[2] = (int)(iVar2);
    piVar1 = (int *)((int *)param_2[3]);
    param_1[3] = (int)((int)piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar1))->v();
    }
  }
  return (int *)(param_1);
}


// Reference entry 10366750; body size 14 bytes.
#line 1 "ENTRY_10366750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366750(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10366770; body size 14 bytes.
#line 1 "ENTRY_10366770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366770(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10366790; body size 14 bytes.
#line 1 "ENTRY_10366790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366790(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103667b0; body size 14 bytes.
#line 1 "ENTRY_103667b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103667b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103667d0; body size 14 bytes.
#line 1 "ENTRY_103667d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103667d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103667f0; body size 14 bytes.
#line 1 "ENTRY_103667f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103667f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10366810; body size 14 bytes.
#line 1 "ENTRY_10366810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366810(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10366830; body size 14 bytes.
#line 1 "ENTRY_10366830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366830(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10366850; body size 14 bytes.
#line 1 "ENTRY_10366850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366850(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10366870; body size 14 bytes.
#line 1 "ENTRY_10366870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366870(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10366890; body size 14 bytes.
#line 1 "ENTRY_10366890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366890(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103668b0; body size 14 bytes.
#line 1 "ENTRY_103668b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103668b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103668d0; body size 14 bytes.
#line 1 "ENTRY_103668d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103668d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103668f0; body size 14 bytes.
#line 1 "ENTRY_103668f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103668f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10366910; body size 14 bytes.
#line 1 "ENTRY_10366910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366910(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10366930; body size 14 bytes.
#line 1 "ENTRY_10366930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10366930(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10366950; body size 17 bytes.
#line 1 "ENTRY_10366950"

__declspec(naked) void FUN_10366950(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_1006d534
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10366d30; body size 12 bytes.
#line 1 "ENTRY_10366d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10366d30(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10366d40; body size 12 bytes.
#line 1 "ENTRY_10366d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10366d40(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10366d50; body size 7 bytes.
#line 1 "ENTRY_10366d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366d50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366d60; body size 3 bytes.
#line 1 "ENTRY_10366d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366d60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366d70; body size 3 bytes.
#line 1 "ENTRY_10366d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366d70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366d80; body size 3 bytes.
#line 1 "ENTRY_10366d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366d80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366d90; body size 3 bytes.
#line 1 "ENTRY_10366d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366d90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366da0; body size 3 bytes.
#line 1 "ENTRY_10366da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366da0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366db0; body size 3 bytes.
#line 1 "ENTRY_10366db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366dc0; body size 3 bytes.
#line 1 "ENTRY_10366dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366dc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366dd0; body size 3 bytes.
#line 1 "ENTRY_10366dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366dd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366de0; body size 3 bytes.
#line 1 "ENTRY_10366de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366de0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366df0; body size 3 bytes.
#line 1 "ENTRY_10366df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366df0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366e00; body size 7 bytes.
#line 1 "ENTRY_10366e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366e10; body size 3 bytes.
#line 1 "ENTRY_10366e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366e10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366e20; body size 7 bytes.
#line 1 "ENTRY_10366e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366e30; body size 3 bytes.
#line 1 "ENTRY_10366e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366e30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366e40; body size 7 bytes.
#line 1 "ENTRY_10366e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e40(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366e50; body size 7 bytes.
#line 1 "ENTRY_10366e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366e60; body size 3 bytes.
#line 1 "ENTRY_10366e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366e60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366e70; body size 7 bytes.
#line 1 "ENTRY_10366e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e70(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366e80; body size 3 bytes.
#line 1 "ENTRY_10366e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366e80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366e90; body size 7 bytes.
#line 1 "ENTRY_10366e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366e90(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366ea0; body size 7 bytes.
#line 1 "ENTRY_10366ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366ea0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366eb0; body size 3 bytes.
#line 1 "ENTRY_10366eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366eb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366ec0; body size 3 bytes.
#line 1 "ENTRY_10366ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366ec0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366ed0; body size 7 bytes.
#line 1 "ENTRY_10366ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366ed0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366ee0; body size 3 bytes.
#line 1 "ENTRY_10366ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366ee0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366ef0; body size 3 bytes.
#line 1 "ENTRY_10366ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366ef0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366f00; body size 3 bytes.
#line 1 "ENTRY_10366f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366f10; body size 3 bytes.
#line 1 "ENTRY_10366f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366f20; body size 3 bytes.
#line 1 "ENTRY_10366f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366f30; body size 3 bytes.
#line 1 "ENTRY_10366f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366f40; body size 3 bytes.
#line 1 "ENTRY_10366f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366f50; body size 3 bytes.
#line 1 "ENTRY_10366f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366f60; body size 3 bytes.
#line 1 "ENTRY_10366f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366f70; body size 7 bytes.
#line 1 "ENTRY_10366f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366f70(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366f80; body size 3 bytes.
#line 1 "ENTRY_10366f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366f90; body size 3 bytes.
#line 1 "ENTRY_10366f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366f90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366fa0; body size 3 bytes.
#line 1 "ENTRY_10366fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366fa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366fb0; body size 3 bytes.
#line 1 "ENTRY_10366fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366fb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366fc0; body size 7 bytes.
#line 1 "ENTRY_10366fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10366fc0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10366fd0; body size 3 bytes.
#line 1 "ENTRY_10366fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366fd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366fe0; body size 3 bytes.
#line 1 "ENTRY_10366fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366fe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10366ff0; body size 3 bytes.
#line 1 "ENTRY_10366ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10366ff0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367000; body size 3 bytes.
#line 1 "ENTRY_10367000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367010; body size 7 bytes.
#line 1 "ENTRY_10367010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367010(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10367020; body size 3 bytes.
#line 1 "ENTRY_10367020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367020(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367030; body size 3 bytes.
#line 1 "ENTRY_10367030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367030(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367040; body size 7 bytes.
#line 1 "ENTRY_10367040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367040(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10367050; body size 3 bytes.
#line 1 "ENTRY_10367050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367050(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367060; body size 7 bytes.
#line 1 "ENTRY_10367060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367060(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10367070; body size 3 bytes.
#line 1 "ENTRY_10367070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367070(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367080; body size 7 bytes.
#line 1 "ENTRY_10367080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367080(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10367090; body size 7 bytes.
#line 1 "ENTRY_10367090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367090(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103670a0; body size 3 bytes.
#line 1 "ENTRY_103670a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103670a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103670b0; body size 7 bytes.
#line 1 "ENTRY_103670b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103670b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103670c0; body size 3 bytes.
#line 1 "ENTRY_103670c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103670c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103670d0; body size 3 bytes.
#line 1 "ENTRY_103670d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103670d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103670e0; body size 7 bytes.
#line 1 "ENTRY_103670e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103670e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103670f0; body size 7 bytes.
#line 1 "ENTRY_103670f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103670f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10367100; body size 7 bytes.
#line 1 "ENTRY_10367100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367100(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10367110; body size 8 bytes.
#line 1 "ENTRY_10367110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367110(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10367120; body size 8 bytes.
#line 1 "ENTRY_10367120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367120(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10367130; body size 8 bytes.
#line 1 "ENTRY_10367130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10367130(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10367140; body size 4 bytes.
#line 1 "ENTRY_10367140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367140(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10367150; body size 4 bytes.
#line 1 "ENTRY_10367150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367150(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10367160; body size 4 bytes.
#line 1 "ENTRY_10367160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367160(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10367170; body size 3 bytes.
#line 1 "ENTRY_10367170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367180; body size 4 bytes.
#line 1 "ENTRY_10367180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367180(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10367190; body size 3 bytes.
#line 1 "ENTRY_10367190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367190(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103671a0; body size 3 bytes.
#line 1 "ENTRY_103671a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103671b0; body size 3 bytes.
#line 1 "ENTRY_103671b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103671c0; body size 3 bytes.
#line 1 "ENTRY_103671c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103671d0; body size 3 bytes.
#line 1 "ENTRY_103671d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103671e0; body size 3 bytes.
#line 1 "ENTRY_103671e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103671f0; body size 3 bytes.
#line 1 "ENTRY_103671f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103671f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367200; body size 3 bytes.
#line 1 "ENTRY_10367200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367210; body size 3 bytes.
#line 1 "ENTRY_10367210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367210(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367220; body size 3 bytes.
#line 1 "ENTRY_10367220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367220(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367230; body size 3 bytes.
#line 1 "ENTRY_10367230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367240; body size 3 bytes.
#line 1 "ENTRY_10367240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367250; body size 3 bytes.
#line 1 "ENTRY_10367250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367260; body size 3 bytes.
#line 1 "ENTRY_10367260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367260(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367270; body size 3 bytes.
#line 1 "ENTRY_10367270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367270(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367280; body size 3 bytes.
#line 1 "ENTRY_10367280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367280(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367290; body size 3 bytes.
#line 1 "ENTRY_10367290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367290(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103672a0; body size 3 bytes.
#line 1 "ENTRY_103672a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103672b0; body size 3 bytes.
#line 1 "ENTRY_103672b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103672c0; body size 3 bytes.
#line 1 "ENTRY_103672c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103672d0; body size 3 bytes.
#line 1 "ENTRY_103672d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103672e0; body size 3 bytes.
#line 1 "ENTRY_103672e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103672f0; body size 3 bytes.
#line 1 "ENTRY_103672f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103672f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367300; body size 3 bytes.
#line 1 "ENTRY_10367300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367310; body size 3 bytes.
#line 1 "ENTRY_10367310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367320; body size 3 bytes.
#line 1 "ENTRY_10367320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367320(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367330; body size 3 bytes.
#line 1 "ENTRY_10367330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367330(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367340; body size 3 bytes.
#line 1 "ENTRY_10367340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367350; body size 3 bytes.
#line 1 "ENTRY_10367350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367350(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367360; body size 3 bytes.
#line 1 "ENTRY_10367360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367360(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367370; body size 3 bytes.
#line 1 "ENTRY_10367370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367380; body size 3 bytes.
#line 1 "ENTRY_10367380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367390; body size 3 bytes.
#line 1 "ENTRY_10367390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103673a0; body size 3 bytes.
#line 1 "ENTRY_103673a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103673a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103673b0; body size 6 bytes.
#line 1 "ENTRY_103673b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103673b0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103673c0; body size 6 bytes.
#line 1 "ENTRY_103673c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103673c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103673d0; body size 3 bytes.
#line 1 "ENTRY_103673d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103673d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103673e0; body size 3 bytes.
#line 1 "ENTRY_103673e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103673e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103673f0; body size 6 bytes.
#line 1 "ENTRY_103673f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103673f0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10367400; body size 6 bytes.
#line 1 "ENTRY_10367400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367400(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10367410; body size 6 bytes.
#line 1 "ENTRY_10367410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367410(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10367420; body size 6 bytes.
#line 1 "ENTRY_10367420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367420(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10367430; body size 6 bytes.
#line 1 "ENTRY_10367430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367430(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10367440; body size 6 bytes.
#line 1 "ENTRY_10367440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10367440(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10367450; body size 3 bytes.
#line 1 "ENTRY_10367450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367450(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367460; body size 3 bytes.
#line 1 "ENTRY_10367460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10367460(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10367470; body size 9 bytes.
#line 1 "ENTRY_10367470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10367470(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10367480; body size 9 bytes.
#line 1 "ENTRY_10367480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10367480(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10367600; body size 20 bytes.
#line 1 "ENTRY_10367600"

__declspec(naked) void FUN_10367600(void)

{
  __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x16
  __asm call LAB_10052482
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10367690; body size 20 bytes.
#line 1 "ENTRY_10367690"

__declspec(naked) void FUN_10367690(void)

{
  __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x16
  __asm call LAB_10058b6b
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10367720; body size 6 bytes.
#line 1 "ENTRY_10367720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10367720(int *param_1)

{
  *param_1 = (int)(*param_1 + 0x18);
  return (int *)(param_1);
}


// Reference entry 10367730; body size 6 bytes.
#line 1 "ENTRY_10367730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10367730(int *param_1)

{
  *param_1 = (int)(*param_1 + 8);
  return (int *)(param_1);
}


// Reference entry 10367740; body size 16 bytes.
#line 1 "ENTRY_10367740"

__declspec(naked) void FUN_10367740(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x89 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc2 __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x11 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10367760; body size 16 bytes.
#line 1 "ENTRY_10367760"

__declspec(naked) void FUN_10367760(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x89 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x11 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10367780; body size 10 bytes.
#line 1 "ENTRY_10367780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10367780(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10367890; body size 57 bytes.
#line 1 "ENTRY_10367890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10367890(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 103678e0; body size 25 bytes.
#line 1 "ENTRY_103678e0"

__declspec(naked) void FUN_103678e0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50
  __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 10367900; body size 25 bytes.
#line 1 "ENTRY_10367900"

__declspec(naked) void FUN_10367900(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50
  __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 10367920; body size 25 bytes.
#line 1 "ENTRY_10367920"

__declspec(naked) void FUN_10367920(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50
  __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 10367940; body size 25 bytes.
#line 1 "ENTRY_10367940"

__declspec(naked) void FUN_10367940(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50
  __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 10367960; body size 25 bytes.
#line 1 "ENTRY_10367960"

__declspec(naked) void FUN_10367960(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50
  __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 10367980; body size 29 bytes.
#line 1 "ENTRY_10367980"

__declspec(naked) void FUN_10367980(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 103679b0; body size 25 bytes.
#line 1 "ENTRY_103679b0"

__declspec(naked) void FUN_103679b0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50
  __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 103679d0; body size 29 bytes.
#line 1 "ENTRY_103679d0"

__declspec(naked) void FUN_103679d0(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call LAB_1148a05a
}






// Reference entry 10367aa0; body size 18 bytes.
#line 1 "ENTRY_10367aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10367aa0(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1036a610; body size 4 bytes.
#line 1 "ENTRY_1036a610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036a610(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1036a620; body size 31 bytes.
#line 1 "ENTRY_1036a620"

__declspec(naked) void FUN_1036a620(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 1036a650; body size 31 bytes.
#line 1 "ENTRY_1036a650"

__declspec(naked) void FUN_1036a650(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 1036a680; body size 31 bytes.
#line 1 "ENTRY_1036a680"

__declspec(naked) void FUN_1036a680(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 1036a6b0; body size 22 bytes.
#line 1 "ENTRY_1036a6b0"

__declspec(naked) void FUN_1036a6b0(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 1036a8f0; body size 30 bytes.
#line 1 "ENTRY_1036a8f0"

__declspec(naked) void FUN_1036a8f0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf9
  __asm call LAB_10063b60
  __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xf0 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036a920; body size 63 bytes.
#line 1 "ENTRY_1036a920"

__declspec(naked) void FUN_1036a920(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0xb8 __asm _emit 0xab __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0x2a __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0x0a __asm _emit 0xf7
  __asm _emit 0xea __asm _emit 0x56 __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0xf2 __asm _emit 0xc1 __asm _emit 0xee __asm _emit 0x1f __asm _emit 0x03 __asm _emit 0xf2 __asm _emit 0x8b __asm _emit 0xd6 __asm _emit 0xd1 __asm _emit 0xea
  __asm _emit 0x2b __asm _emit 0xca __asm _emit 0x3b __asm _emit 0xf1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0xaa __asm _emit 0x0a __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x8d
  __asm _emit 0x04 __asm _emit 0x32 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036a970; body size 49 bytes.
#line 1 "ENTRY_1036a970"

__declspec(naked) void FUN_1036a970(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf2
  __asm _emit 0xd1 __asm _emit 0xee __asm _emit 0x2b __asm _emit 0xce __asm _emit 0x3b __asm _emit 0xd1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x16 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 1036a9b0; body size 49 bytes.
#line 1 "ENTRY_1036a9b0"

__declspec(naked) void FUN_1036a9b0(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0xb9 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0xc1 __asm _emit 0xfa __asm _emit 0x03 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf2
  __asm _emit 0xd1 __asm _emit 0xee __asm _emit 0x2b __asm _emit 0xce __asm _emit 0x3b __asm _emit 0xd1 __asm _emit 0x76 __asm _emit 0x09 __asm _emit 0xb8 __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x1f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x16 __asm _emit 0x3b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0x0f __asm _emit 0x42 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 1036abd0; body size 14 bytes.
#line 1 "ENTRY_1036abd0"

__declspec(naked) void FUN_1036abd0(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x71 __asm _emit 0x1c __asm _emit 0x07
  __asm je LAB_1000d4ae
  __asm _emit 0xc3
}






// Reference entry 1036abf0; body size 14 bytes.
#line 1 "ENTRY_1036abf0"

__declspec(naked) void FUN_1036abf0(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x04 __asm _emit 0x49 __asm _emit 0x92 __asm _emit 0x24 __asm _emit 0x09
  __asm je LAB_1000d4ae
  __asm _emit 0xc3
}






// Reference entry 1036ac10; body size 20 bytes.
#line 1 "ENTRY_1036ac10"

__declspec(naked) void FUN_1036ac10(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x08 __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0xcc __asm _emit 0x0c __asm _emit 0x74 __asm _emit 0x01 __asm _emit 0xc3
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}






// Reference entry 1036ac30; body size 66 bytes.
#line 1 "ENTRY_1036ac30"

__declspec(naked) void FUN_1036ac30(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x40 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x6e __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0 __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x5a __asm _emit 0xc8 __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x6e __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0 __asm _emit 0xc1
  __asm _emit 0xe8 __asm _emit 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x5a __asm _emit 0xc0 __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x5e __asm _emit 0xc8 __asm _emit 0x0f __asm _emit 0x2f __asm _emit 0x09 __asm _emit 0x0f __asm _emit 0x97 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 1036ac90; body size 3 bytes.
#line 1 "ENTRY_1036ac90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036ac90(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1036aca0; body size 3 bytes.
#line 1 "ENTRY_1036aca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036aca0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1036b640; body size 3 bytes.
#line 1 "ENTRY_1036b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036b640(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1036b890; body size 55 bytes.
#line 1 "ENTRY_1036b890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_1036b890(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1036b8e0; body size 8 bytes.
#line 1 "ENTRY_1036b8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b8e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b8f0; body size 8 bytes.
#line 1 "ENTRY_1036b8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b8f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b900; body size 8 bytes.
#line 1 "ENTRY_1036b900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b900(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b910; body size 8 bytes.
#line 1 "ENTRY_1036b910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b910(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b920; body size 8 bytes.
#line 1 "ENTRY_1036b920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b920(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b930; body size 8 bytes.
#line 1 "ENTRY_1036b930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b930(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b940; body size 8 bytes.
#line 1 "ENTRY_1036b940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b940(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b950; body size 8 bytes.
#line 1 "ENTRY_1036b950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036b950(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1036b960; body size 54 bytes.
#line 1 "ENTRY_1036b960"

__declspec(naked) void FUN_1036b960(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x14 __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x39 __asm _emit 0x42
  __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x18 __asm _emit 0x39 __asm _emit 0x02 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0x89 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0xc2
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x39 __asm _emit 0x02 __asm _emit 0x75 __asm _emit 0x04 __asm _emit 0x8b
  __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1036b9b0; body size 61 bytes.
#line 1 "ENTRY_1036b9b0"

__declspec(naked) void FUN_1036b9b0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x4c __asm _emit 0x24
  __asm _emit 0x08
  __asm call LAB_1000eecb
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xcf
  __asm call LAB_1001933a
  __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x10
  __asm call LAB_1009903f
  __asm _emit 0x6a __asm _emit 0x24 __asm _emit 0x56
  __asm call LAB_100131d8
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036ca90; body size 3 bytes.
#line 1 "ENTRY_1036ca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ca90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036caa0; body size 3 bytes.
#line 1 "ENTRY_1036caa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036caa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cab0; body size 3 bytes.
#line 1 "ENTRY_1036cab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cac0; body size 3 bytes.
#line 1 "ENTRY_1036cac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cad0; body size 3 bytes.
#line 1 "ENTRY_1036cad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cae0; body size 3 bytes.
#line 1 "ENTRY_1036cae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036caf0; body size 3 bytes.
#line 1 "ENTRY_1036caf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036caf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb00; body size 3 bytes.
#line 1 "ENTRY_1036cb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb10; body size 3 bytes.
#line 1 "ENTRY_1036cb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb20; body size 3 bytes.
#line 1 "ENTRY_1036cb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb30; body size 3 bytes.
#line 1 "ENTRY_1036cb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb40; body size 3 bytes.
#line 1 "ENTRY_1036cb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb50; body size 3 bytes.
#line 1 "ENTRY_1036cb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb60; body size 3 bytes.
#line 1 "ENTRY_1036cb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb70; body size 3 bytes.
#line 1 "ENTRY_1036cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb80; body size 3 bytes.
#line 1 "ENTRY_1036cb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cb90; body size 3 bytes.
#line 1 "ENTRY_1036cb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cb90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cba0; body size 3 bytes.
#line 1 "ENTRY_1036cba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cbb0; body size 3 bytes.
#line 1 "ENTRY_1036cbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cbc0; body size 3 bytes.
#line 1 "ENTRY_1036cbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cbd0; body size 3 bytes.
#line 1 "ENTRY_1036cbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cbe0; body size 3 bytes.
#line 1 "ENTRY_1036cbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cbf0; body size 3 bytes.
#line 1 "ENTRY_1036cbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cbf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc00; body size 3 bytes.
#line 1 "ENTRY_1036cc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc10; body size 3 bytes.
#line 1 "ENTRY_1036cc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc20; body size 3 bytes.
#line 1 "ENTRY_1036cc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc30; body size 3 bytes.
#line 1 "ENTRY_1036cc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc40; body size 3 bytes.
#line 1 "ENTRY_1036cc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc50; body size 3 bytes.
#line 1 "ENTRY_1036cc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc60; body size 3 bytes.
#line 1 "ENTRY_1036cc60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc70; body size 3 bytes.
#line 1 "ENTRY_1036cc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc80; body size 3 bytes.
#line 1 "ENTRY_1036cc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cc90; body size 3 bytes.
#line 1 "ENTRY_1036cc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cc90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cca0; body size 3 bytes.
#line 1 "ENTRY_1036cca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036ccb0; body size 3 bytes.
#line 1 "ENTRY_1036ccb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ccb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036ccc0; body size 3 bytes.
#line 1 "ENTRY_1036ccc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ccc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036ccd0; body size 3 bytes.
#line 1 "ENTRY_1036ccd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ccd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cce0; body size 3 bytes.
#line 1 "ENTRY_1036cce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036ccf0; body size 3 bytes.
#line 1 "ENTRY_1036ccf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ccf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cd00; body size 3 bytes.
#line 1 "ENTRY_1036cd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cd20; body size 3 bytes.
#line 1 "ENTRY_1036cd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cd30; body size 3 bytes.
#line 1 "ENTRY_1036cd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cd40; body size 3 bytes.
#line 1 "ENTRY_1036cd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cd50; body size 3 bytes.
#line 1 "ENTRY_1036cd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036cd60; body size 4 bytes.
#line 1 "ENTRY_1036cd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cd70; body size 4 bytes.
#line 1 "ENTRY_1036cd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cd80; body size 4 bytes.
#line 1 "ENTRY_1036cd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cd90; body size 4 bytes.
#line 1 "ENTRY_1036cd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cd90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cda0; body size 4 bytes.
#line 1 "ENTRY_1036cda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cda0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cdb0; body size 4 bytes.
#line 1 "ENTRY_1036cdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cdb0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cdc0; body size 4 bytes.
#line 1 "ENTRY_1036cdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cdc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cdd0; body size 4 bytes.
#line 1 "ENTRY_1036cdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036cdd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1036cde0; body size 92 bytes.
#line 1 "ENTRY_1036cde0"

__declspec(naked) void FUN_1036cde0(void)

{
  __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x5f __asm _emit 0x04
  __asm _emit 0xff __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x89 __asm _emit 0x5e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x33 __asm _emit 0x89 __asm _emit 0x77 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x18
  __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x0c __asm _emit 0x23 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x75
  __asm _emit 0x0d __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x3b __asm _emit 0xcf
  __asm _emit 0x75 __asm _emit 0x0a __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x39 __asm _emit 0x58 __asm _emit 0x04 __asm _emit 0x75
  __asm _emit 0x03 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 1036d380; body size 7 bytes.
#line 1 "ENTRY_1036d380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d380(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1036d390; body size 7 bytes.
#line 1 "ENTRY_1036d390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d390(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1036d3a0; body size 7 bytes.
#line 1 "ENTRY_1036d3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1036d3b0; body size 7 bytes.
#line 1 "ENTRY_1036d3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1036d3c0; body size 7 bytes.
#line 1 "ENTRY_1036d3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1036d3d0; body size 7 bytes.
#line 1 "ENTRY_1036d3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1036d3e0; body size 7 bytes.
#line 1 "ENTRY_1036d3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1036d3f0; body size 7 bytes.
#line 1 "ENTRY_1036d3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1036d3f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1036d4e0; body size 13 bytes.
#line 1 "ENTRY_1036d4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036d4e0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 1036d4f0; body size 18 bytes.
#line 1 "ENTRY_1036d4f0"

__declspec(naked) void FUN_1036d4f0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc1 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2
  __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1036d510; body size 18 bytes.
#line 1 "ENTRY_1036d510"

__declspec(naked) void FUN_1036d510(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc1 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2
  __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 1036d530; body size 30 bytes.
#line 1 "ENTRY_1036d530"

__declspec(naked) void FUN_1036d530(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf5 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 1036d590; body size 30 bytes.
#line 1 "ENTRY_1036d590"

__declspec(naked) void FUN_1036d590(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf5 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 1036d5c0; body size 3 bytes.
#line 1 "ENTRY_1036d5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d5c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036d5d0; body size 3 bytes.
#line 1 "ENTRY_1036d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d5d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1036d8a0; body size 3 bytes.
#line 1 "ENTRY_1036d8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1036d8a0(void)

{
  return;
}


// Reference entry 1036d8b0; body size 3 bytes.
#line 1 "ENTRY_1036d8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036d8b0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1036d8c0; body size 3 bytes.
#line 1 "ENTRY_1036d8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036d8c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1036d8d0; body size 3 bytes.
#line 1 "ENTRY_1036d8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036d8d0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 1036d8e0; body size 3 bytes.
#line 1 "ENTRY_1036d8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036d8e0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1036d8f0; body size 3 bytes.
#line 1 "ENTRY_1036d8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036d8f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1036d900; body size 3 bytes.
#line 1 "ENTRY_1036d900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1036d900(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1036d9c0; body size 11 bytes.
#line 1 "ENTRY_1036d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d9c0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1036d9d0; body size 11 bytes.
#line 1 "ENTRY_1036d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d9d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1036d9e0; body size 11 bytes.
#line 1 "ENTRY_1036d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036d9e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1036d9f0; body size 6 bytes.
#line 1 "ENTRY_1036d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036d9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1036da00; body size 6 bytes.
#line 1 "ENTRY_1036da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036da00(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1036da10; body size 6 bytes.
#line 1 "ENTRY_1036da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036da10(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1036da20; body size 6 bytes.
#line 1 "ENTRY_1036da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1036da20(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1036da30; body size 26 bytes.
#line 1 "ENTRY_1036da30"

__declspec(naked) void FUN_1036da30(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036da50; body size 26 bytes.
#line 1 "ENTRY_1036da50"

__declspec(naked) void FUN_1036da50(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036da70; body size 26 bytes.
#line 1 "ENTRY_1036da70"

__declspec(naked) void FUN_1036da70(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036da90; body size 26 bytes.
#line 1 "ENTRY_1036da90"

__declspec(naked) void FUN_1036da90(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036dab0; body size 26 bytes.
#line 1 "ENTRY_1036dab0"

__declspec(naked) void FUN_1036dab0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036dad0; body size 26 bytes.
#line 1 "ENTRY_1036dad0"

__declspec(naked) void FUN_1036dad0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036daf0; body size 26 bytes.
#line 1 "ENTRY_1036daf0"

__declspec(naked) void FUN_1036daf0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036db10; body size 26 bytes.
#line 1 "ENTRY_1036db10"

__declspec(naked) void FUN_1036db10(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036db30; body size 26 bytes.
#line 1 "ENTRY_1036db30"

__declspec(naked) void FUN_1036db30(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036db50; body size 26 bytes.
#line 1 "ENTRY_1036db50"

__declspec(naked) void FUN_1036db50(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036db70; body size 76 bytes.
#line 1 "ENTRY_1036db70"

__declspec(naked) void FUN_1036db70(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x38 __asm _emit 0x3b
  __asm _emit 0xce __asm _emit 0x75 __asm _emit 0x2a __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xce __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52
  __asm _emit 0x10 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x4f __asm _emit 0x24
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036dbd0; body size 76 bytes.
#line 1 "ENTRY_1036dbd0"

__declspec(naked) void FUN_1036dbd0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x38 __asm _emit 0x3b
  __asm _emit 0xce __asm _emit 0x75 __asm _emit 0x2a __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x24 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x3b __asm _emit 0xce __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0xc0 __asm _emit 0x50 __asm _emit 0xff __asm _emit 0x52
  __asm _emit 0x10 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x4f __asm _emit 0x24
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036dd10; body size 10 bytes.
#line 1 "ENTRY_1036dd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036dd10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1036dd20; body size 10 bytes.
#line 1 "ENTRY_1036dd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036dd20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1036dd30; body size 10 bytes.
#line 1 "ENTRY_1036dd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036dd30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1036dd40; body size 10 bytes.
#line 1 "ENTRY_1036dd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036dd40(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1036dd50; body size 10 bytes.
#line 1 "ENTRY_1036dd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036dd50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1036dd60; body size 10 bytes.
#line 1 "ENTRY_1036dd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036dd60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1036dd70; body size 10 bytes.
#line 1 "ENTRY_1036dd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036dd70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1036dd80; body size 10 bytes.
#line 1 "ENTRY_1036dd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036dd80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1036df00; body size 43 bytes.
#line 1 "ENTRY_1036df00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036df00(undefined4 *param_2)
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


// Reference entry 1036df40; body size 43 bytes.
#line 1 "ENTRY_1036df40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036df40(undefined4 *param_2)
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


// Reference entry 1036e910; body size 24 bytes.
#line 1 "ENTRY_1036e910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036e910(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357c10(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1036e930; body size 24 bytes.
#line 1 "ENTRY_1036e930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036e930(undefined4 param_2,undefined4 param_3,undefined4 param_4, unsigned int recovered_unused_stack_0)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357cb0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1036ea40; body size 24 bytes.
#line 1 "ENTRY_1036ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036ea40(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357c10(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1036ea60; body size 24 bytes.
#line 1 "ENTRY_1036ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036ea60(undefined4 param_2,undefined4 param_3,undefined4 param_4)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10357cb0(param_2,param_3,param_4,param_1);
  return;
}


// Reference entry 1036ea80; body size 14 bytes.
#line 1 "ENTRY_1036ea80"

__declspec(naked) void FUN_1036ea80(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1036eaa0; body size 13 bytes.
#line 1 "ENTRY_1036eaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036eaa0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1036eab0; body size 13 bytes.
#line 1 "ENTRY_1036eab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036eab0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1036eac0; body size 13 bytes.
#line 1 "ENTRY_1036eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036eac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 1036ead0; body size 3 bytes.
#line 1 "ENTRY_1036ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036ead0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1036eae0; body size 12 bytes.
#line 1 "ENTRY_1036eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036eae0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1036eaf0; body size 11 bytes.
#line 1 "ENTRY_1036eaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036eaf0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1036eb00; body size 4 bytes.
#line 1 "ENTRY_1036eb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036eb00(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1036ef60; body size 43 bytes.
#line 1 "ENTRY_1036ef60"

__declspec(naked) void FUN_1036ef60(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b
  __asm _emit 0x7b __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x19 __asm _emit 0x89 __asm _emit 0x72
  __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x78 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x89 __asm _emit 0x4b __asm _emit 0x04 __asm _emit 0x5b __asm _emit 0xc3
}






// Reference entry 1036efa0; body size 11 bytes.
#line 1 "ENTRY_1036efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1036efa0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1036efb0; body size 3 bytes.
#line 1 "ENTRY_1036efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036efb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1036efc0; body size 3 bytes.
#line 1 "ENTRY_1036efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1036efc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10370ca0; body size 90 bytes.
#line 1 "ENTRY_10370ca0"

__declspec(naked) void FUN_10370ca0(void)

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






// Reference entry 10370d20; body size 90 bytes.
#line 1 "ENTRY_10370d20"

__declspec(naked) void FUN_10370d20(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x3d __asm _emit 0xc7 __asm _emit 0x71 __asm _emit 0x1c __asm _emit 0x07 __asm _emit 0x77 __asm _emit 0x4a __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xc0 __asm _emit 0xc1 __asm _emit 0xe0
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






// Reference entry 10370da0; body size 97 bytes.
#line 1 "ENTRY_10370da0"

__declspec(naked) void FUN_10370da0(void)

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






// Reference entry 10370e20; body size 97 bytes.
#line 1 "ENTRY_10370e20"

__declspec(naked) void FUN_10370e20(void)

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






// Reference entry 10370ea0; body size 90 bytes.
#line 1 "ENTRY_10370ea0"

__declspec(naked) void FUN_10370ea0(void)

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






// Reference entry 10370f90; body size 87 bytes.
#line 1 "ENTRY_10370f90"

__declspec(naked) void FUN_10370f90(void)

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






// Reference entry 10371000; body size 87 bytes.
#line 1 "ENTRY_10371000"

__declspec(naked) void FUN_10371000(void)

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






// Reference entry 103717a0; body size 7 bytes.
#line 1 "ENTRY_103717a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103717a0(int param_1)

{
  return (int)(param_1 + 0x401);
}


// Reference entry 103717b0; body size 13 bytes.
#line 1 "ENTRY_103717b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103717b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103717c0; body size 13 bytes.
#line 1 "ENTRY_103717c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103717c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103717d0; body size 11 bytes.
#line 1 "ENTRY_103717d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103717d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103717e0; body size 11 bytes.
#line 1 "ENTRY_103717e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103717e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103717f0; body size 68 bytes.
#line 1 "ENTRY_103717f0"

__declspec(naked) void FUN_103717f0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x06 __asm _emit 0x35 __asm _emit 0xc5 __asm _emit 0x9d __asm _emit 0x1c __asm _emit 0x81
  __asm _emit 0x69 __asm _emit 0xd0 __asm _emit 0x93 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x46 __asm _emit 0x01 __asm _emit 0x33 __asm _emit 0xd0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x46 __asm _emit 0x02
  __asm _emit 0x69 __asm _emit 0xd2 __asm _emit 0x93 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x33 __asm _emit 0xd0 __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x46 __asm _emit 0x03 __asm _emit 0x69 __asm _emit 0xca __asm _emit 0x93 __asm _emit 0x01
  __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x33 __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x18 __asm _emit 0x69 __asm _emit 0xc9 __asm _emit 0x93 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x23
  __asm _emit 0xc1 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10371850; body size 4 bytes.
#line 1 "ENTRY_10371850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10371850(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 103723d0; body size 23 bytes.
#line 1 "ENTRY_103723d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103723d0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x18);
}


// Reference entry 103723f0; body size 9 bytes.
#line 1 "ENTRY_103723f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103723f0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10372400; body size 9 bytes.
#line 1 "ENTRY_10372400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10372400(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10372590; body size 23 bytes.
#line 1 "ENTRY_10372590"

__declspec(naked) void FUN_10372590(void)

{
  __asm call LAB_1004ec47
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0d
  __asm push dword ptr [LAB_1211957c]
  __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1008d203
  __asm _emit 0xc3
}






// Reference entry 103725b0; body size 23 bytes.
#line 1 "ENTRY_103725b0"

__declspec(naked) void FUN_103725b0(void)

{
  __asm call LAB_1004ec47
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0d
  __asm push dword ptr [LAB_12119580]
  __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1008d203
  __asm _emit 0xc3
}






// Reference entry 103766a0; body size 57 bytes.
#line 1 "ENTRY_103766a0"

__declspec(naked) void FUN_103766a0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x80 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 103766f0; body size 57 bytes.
#line 1 "ENTRY_103766f0"

__declspec(naked) void FUN_103766f0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc0 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 10376740; body size 63 bytes.
#line 1 "ENTRY_10376740"

__declspec(naked) void FUN_10376740(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83
  __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 10376790; body size 63 bytes.
#line 1 "ENTRY_10376790"

__declspec(naked) void FUN_10376790(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83
  __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 103767e0; body size 60 bytes.
#line 1 "ENTRY_103767e0"

__declspec(naked) void FUN_103767e0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x80 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 10376830; body size 60 bytes.
#line 1 "ENTRY_10376830"

__declspec(naked) void FUN_10376830(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc0 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9
  __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 10376880; body size 66 bytes.
#line 1 "ENTRY_10376880"

__declspec(naked) void FUN_10376880(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83
  __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 10376a30; body size 61 bytes.
#line 1 "ENTRY_10376a30"

__declspec(naked) void FUN_10376a30(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81
  __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83
  __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 10376a80; body size 61 bytes.
#line 1 "ENTRY_10376a80"

__declspec(naked) void FUN_10376a80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81
  __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83
  __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 10376ad0; body size 16 bytes.
#line 1 "ENTRY_10376ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376ad0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10376af0; body size 9 bytes.
#line 1 "ENTRY_10376af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376af0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10376b00; body size 9 bytes.
#line 1 "ENTRY_10376b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b00(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10376b10; body size 9 bytes.
#line 1 "ENTRY_10376b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10376b20; body size 9 bytes.
#line 1 "ENTRY_10376b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10376b30; body size 9 bytes.
#line 1 "ENTRY_10376b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10376b40; body size 9 bytes.
#line 1 "ENTRY_10376b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10376b40(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10376e40; body size 32 bytes.
#line 1 "ENTRY_10376e40"

__declspec(naked) void FUN_10376e40(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x3c __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8d __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff
  __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x52 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 10377b70; body size 12 bytes.
#line 1 "ENTRY_10377b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10377b70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10377b80; body size 11 bytes.
#line 1 "ENTRY_10377b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10377b80(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10377b90; body size 11 bytes.
#line 1 "ENTRY_10377b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10377b90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10377ba0; body size 11 bytes.
#line 1 "ENTRY_10377ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10377ba0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10377bb0; body size 12 bytes.
#line 1 "ENTRY_10377bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10377bb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10377bc0; body size 12 bytes.
#line 1 "ENTRY_10377bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10377bc0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103780b0; body size 7 bytes.
#line 1 "ENTRY_103780b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103780b0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x124));
}


// Reference entry 10378150; body size 51 bytes.
#line 1 "ENTRY_10378150"

__declspec(naked) void FUN_10378150(void)

{
  __asm _emit 0x51 __asm _emit 0x56
  __asm push offset LAB_118987cc
  __asm _emit 0x6a __asm _emit 0x02
  __asm push offset LAB_118979c8
  __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_100238df
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x56 __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0xcc
  __asm push offset LAB_1187aec8
  __asm call LAB_1005273e
  __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x18
  __asm call LAB_10013543
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103786c0; body size 4 bytes.
#line 1 "ENTRY_103786c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103786c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x34));
}


// Reference entry 103796f0; body size 20 bytes.
#line 1 "ENTRY_103796f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103796f0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xc));
  return (SCStr *)(param_2);
}


// Reference entry 10379710; body size 43 bytes.
#line 1 "ENTRY_10379710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10379710(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0x6a8));
  *param_2 = (int)(iVar1);
  if ((iVar1 != 0) && (*(int *)(iVar1 + -0x10) < 0xffff)) {
    thunk_FUN_1123fce0((int *)(iVar1 + -0x10));
  }
  return (int *)(param_2);
}


// Reference entry 1037a2a0; body size 7 bytes.
#line 1 "ENTRY_1037a2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1037a2a0(int param_1)

{
  return (int)(param_1 + 0xdbd2);
}


// Reference entry 1037aab0; body size 20 bytes.
#line 1 "ENTRY_1037aab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1037aab0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 1037c4b0; body size 4 bytes.
#line 1 "ENTRY_1037c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037c4c0; body size 4 bytes.
#line 1 "ENTRY_1037c4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037c4d0; body size 4 bytes.
#line 1 "ENTRY_1037c4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037c4e0; body size 4 bytes.
#line 1 "ENTRY_1037c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037c4f0; body size 4 bytes.
#line 1 "ENTRY_1037c4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037c4f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 1037cb50; body size 4 bytes.
#line 1 "ENTRY_1037cb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1037cb50(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x74));
}


// Reference entry 1037cb90; body size 4 bytes.
#line 1 "ENTRY_1037cb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1037cb90(int param_1)

{
  return (int)(param_1 + 0x2c);
}


// Reference entry 1037e9d0; body size 20 bytes.
#line 1 "ENTRY_1037e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_1037e9d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x48));
  return (SCStr *)(param_2);
}


// Reference entry 1037ee80; body size 4 bytes.
#line 1 "ENTRY_1037ee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1037ee80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10380df0; body size 4 bytes.
#line 1 "ENTRY_10380df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10380df0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 10381010; body size 3 bytes.
#line 1 "ENTRY_10381010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10381010(void)

{
  return (undefined4)(0);
}


// Reference entry 10382830; body size 7 bytes.
#line 1 "ENTRY_10382830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10382830(int param_1)

{
  return (int)(param_1 + 0x2d44c);
}


// Reference entry 10382840; body size 7 bytes.
#line 1 "ENTRY_10382840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10382840(int param_1)

{
  return (int)(param_1 + 0x6d0);
}


// Reference entry 10382850; body size 5 bytes.
#line 1 "ENTRY_10382850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined2 __fastcall FUN_10382850(int param_1)

{
  return (undefined2)(*(undefined2 *)(param_1 + 0x5c));
}


// Reference entry 10383180; body size 5 bytes.
#line 1 "ENTRY_10383180"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10383180(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 10383190; body size 5 bytes.
#line 1 "ENTRY_10383190"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10383190(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 103831a0; body size 5 bytes.
#line 1 "ENTRY_103831a0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831a0(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 103831b0; body size 5 bytes.
#line 1 "ENTRY_103831b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831b0(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 103831c0; body size 5 bytes.
#line 1 "ENTRY_103831c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831c0(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 103831d0; body size 5 bytes.
#line 1 "ENTRY_103831d0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831d0(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 103831e0; body size 4 bytes.
#line 1 "ENTRY_103831e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103831e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 103831f0; body size 16 bytes.
#line 1 "ENTRY_103831f0"

__declspec(naked) void FUN_103831f0(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x8d __asm _emit 0x88 __asm _emit 0x30 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xf7 __asm _emit 0xd8 __asm _emit 0x1b __asm _emit 0xc0 __asm _emit 0x23 __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 10383530; body size 7 bytes.
#line 1 "ENTRY_10383530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10383530(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10388c80; body size 6 bytes.
#line 1 "ENTRY_10388c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10388c80(void)

{
  return (char *)("SCIHousehold");
}


// Reference entry 10388c90; body size 6 bytes.
#line 1 "ENTRY_10388c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10388c90(void)

{
  return (char *)("SCIOpZoneGroupTopologyGetZoneGroupState");
}


// Reference entry 10388ca0; body size 6 bytes.
#line 1 "ENTRY_10388ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10388ca0(void)

{
  return (char *)("SCITimeZone");
}


// Reference entry 10388cb0; body size 6 bytes.
#line 1 "ENTRY_10388cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10388cb0(void)

{
  return (char *)("SCIZoneGroup");
}


// Reference entry 1038a580; body size 14 bytes.
#line 1 "ENTRY_1038a580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1038a580(undefined4 param_1)

{
  thunk_FUN_1038a5a0((int)(param_1),(int)(0));
  return;
}


// Reference entry 1038be30; body size 36 bytes.
#line 1 "ENTRY_1038be30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1038be30(int param_1)

{
  if ((*(int *)(param_1 + 200) != 0) && (*(char *)(param_1 + 0x806) != '\0')) {
    ((SCVtbl_6_1*)(*(int **)(*(int *)(param_1 + 200) + 4)))->v((int)(*(undefined4 *)(param_1 + 0xa0)));
  }
  return;
}


// Reference entry 1038be60; body size 36 bytes.
#line 1 "ENTRY_1038be60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1038be60(int param_1)

{
  if ((*(int *)(param_1 + 0xcc) != 0) && (*(char *)(param_1 + 0x807) != '\0')) {
    ((SCVtbl_6_1*)(*(int **)(*(int *)(param_1 + 0xcc) + 4)))->v((int)(*(undefined4 *)(param_1 + 0xa0)));
  }
  return;
}


// Reference entry 1038d590; body size 7 bytes.
#line 1 "ENTRY_1038d590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1038d590(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6c9));
}


// Reference entry 1038d5a0; body size 7 bytes.
#line 1 "ENTRY_1038d5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1038d5a0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6cb));
}


// Reference entry 1038d5f0; body size 7 bytes.
#line 1 "ENTRY_1038d5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d5f0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 1038d600; body size 7 bytes.
#line 1 "ENTRY_1038d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d600(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 1038d610; body size 7 bytes.
#line 1 "ENTRY_1038d610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d610(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 1038d620; body size 7 bytes.
#line 1 "ENTRY_1038d620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d620(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 1038d630; body size 7 bytes.
#line 1 "ENTRY_1038d630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d630(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 1038d640; body size 7 bytes.
#line 1 "ENTRY_1038d640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d640(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 1038d6d0; body size 11 bytes.
#line 1 "ENTRY_1038d6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d6d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x838) == 1);
}


// Reference entry 1038d980; body size 7 bytes.
#line 1 "ENTRY_1038d980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d980(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038d990; body size 7 bytes.
#line 1 "ENTRY_1038d990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d990(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038d9a0; body size 7 bytes.
#line 1 "ENTRY_1038d9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038d9b0; body size 7 bytes.
#line 1 "ENTRY_1038d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038d9c0; body size 7 bytes.
#line 1 "ENTRY_1038d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038d9d0; body size 7 bytes.
#line 1 "ENTRY_1038d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9d0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038d9e0; body size 7 bytes.
#line 1 "ENTRY_1038d9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038d9f0; body size 7 bytes.
#line 1 "ENTRY_1038d9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038d9f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038da00; body size 7 bytes.
#line 1 "ENTRY_1038da00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038da00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038da10; body size 7 bytes.
#line 1 "ENTRY_1038da10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038da10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038da20; body size 7 bytes.
#line 1 "ENTRY_1038da20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038da20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038da30; body size 7 bytes.
#line 1 "ENTRY_1038da30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1038da30(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1038da50; body size 31 bytes.
#line 1 "ENTRY_1038da50"

__declspec(naked) void FUN_1038da50(void)

{
  __asm _emit 0x8b __asm _emit 0x89 __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x64 __asm _emit 0x8b
  __asm _emit 0xc8 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x3c __asm _emit 0xff __asm _emit 0xe0 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 1038de70; body size 6 bytes.
#line 1 "ENTRY_1038de70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_1038de70(void)

{
  return (undefined1)(DAT_121a12cc);
}


// Reference entry 1038e1b0; body size 7 bytes.
#line 1 "ENTRY_1038e1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1038e1b0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6ce));
}


// Reference entry 103908f0; body size 3 bytes.
#line 1 "ENTRY_103908f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_103908f0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10390900; body size 6 bytes.
#line 1 "ENTRY_10390900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390900(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10390910; body size 6 bytes.
#line 1 "ENTRY_10390910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390910(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10390920; body size 6 bytes.
#line 1 "ENTRY_10390920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390920(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10390930; body size 6 bytes.
#line 1 "ENTRY_10390930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390930(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10390940; body size 6 bytes.
#line 1 "ENTRY_10390940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390940(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10390950; body size 6 bytes.
#line 1 "ENTRY_10390950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390950(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10390960; body size 6 bytes.
#line 1 "ENTRY_10390960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390960(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10390970; body size 6 bytes.
#line 1 "ENTRY_10390970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390970(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10390980; body size 6 bytes.
#line 1 "ENTRY_10390980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390980(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10390990; body size 6 bytes.
#line 1 "ENTRY_10390990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10390990(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 103909a0; body size 6 bytes.
#line 1 "ENTRY_103909a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103909a0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 103909b0; body size 6 bytes.
#line 1 "ENTRY_103909b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103909b0(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 103909c0; body size 6 bytes.
#line 1 "ENTRY_103909c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103909c0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 103909d0; body size 6 bytes.
#line 1 "ENTRY_103909d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103909d0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10393720; body size 3 bytes.
#line 1 "ENTRY_10393720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103937c0; body size 5 bytes.
#line 1 "ENTRY_103937c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103937c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103937d0; body size 5 bytes.
#line 1 "ENTRY_103937d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103937d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103937e0; body size 3 bytes.
#line 1 "ENTRY_103937e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103937e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103937f0; body size 3 bytes.
#line 1 "ENTRY_103937f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103937f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393800; body size 3 bytes.
#line 1 "ENTRY_10393800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393810; body size 3 bytes.
#line 1 "ENTRY_10393810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393810(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393820; body size 3 bytes.
#line 1 "ENTRY_10393820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393830; body size 3 bytes.
#line 1 "ENTRY_10393830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393830(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393840; body size 3 bytes.
#line 1 "ENTRY_10393840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393840(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393850; body size 3 bytes.
#line 1 "ENTRY_10393850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393860; body size 3 bytes.
#line 1 "ENTRY_10393860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393860(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393870; body size 3 bytes.
#line 1 "ENTRY_10393870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393880; body size 3 bytes.
#line 1 "ENTRY_10393880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393880(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393890; body size 3 bytes.
#line 1 "ENTRY_10393890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393890(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938a0; body size 3 bytes.
#line 1 "ENTRY_103938a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938b0; body size 3 bytes.
#line 1 "ENTRY_103938b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938c0; body size 3 bytes.
#line 1 "ENTRY_103938c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938d0; body size 3 bytes.
#line 1 "ENTRY_103938d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938e0; body size 3 bytes.
#line 1 "ENTRY_103938e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103938f0; body size 3 bytes.
#line 1 "ENTRY_103938f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103938f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393900; body size 3 bytes.
#line 1 "ENTRY_10393900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393910; body size 3 bytes.
#line 1 "ENTRY_10393910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393920; body size 3 bytes.
#line 1 "ENTRY_10393920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393930; body size 3 bytes.
#line 1 "ENTRY_10393930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393940; body size 3 bytes.
#line 1 "ENTRY_10393940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393950; body size 3 bytes.
#line 1 "ENTRY_10393950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393960; body size 3 bytes.
#line 1 "ENTRY_10393960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393970; body size 3 bytes.
#line 1 "ENTRY_10393970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393980; body size 3 bytes.
#line 1 "ENTRY_10393980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393990; body size 3 bytes.
#line 1 "ENTRY_10393990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939a0; body size 3 bytes.
#line 1 "ENTRY_103939a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939b0; body size 3 bytes.
#line 1 "ENTRY_103939b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939c0; body size 3 bytes.
#line 1 "ENTRY_103939c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939d0; body size 3 bytes.
#line 1 "ENTRY_103939d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939e0; body size 3 bytes.
#line 1 "ENTRY_103939e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103939f0; body size 3 bytes.
#line 1 "ENTRY_103939f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103939f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a00; body size 3 bytes.
#line 1 "ENTRY_10393a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a10; body size 3 bytes.
#line 1 "ENTRY_10393a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a20; body size 3 bytes.
#line 1 "ENTRY_10393a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a30; body size 3 bytes.
#line 1 "ENTRY_10393a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a40; body size 3 bytes.
#line 1 "ENTRY_10393a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a50; body size 3 bytes.
#line 1 "ENTRY_10393a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a60; body size 3 bytes.
#line 1 "ENTRY_10393a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10393a60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10393a70; body size 36 bytes.
#line 1 "ENTRY_10393a70"

__declspec(naked) void FUN_10393a70(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0x51 __asm _emit 0x08 __asm _emit 0x74 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x02
  __asm _emit 0x83 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x52
  __asm call LAB_1004aa57
  __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 10394530; body size 28 bytes.
#line 1 "ENTRY_10394530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394530(undefined4 *param_1)

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


// Reference entry 10394560; body size 28 bytes.
#line 1 "ENTRY_10394560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394560(undefined4 *param_1)

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


// Reference entry 10394590; body size 28 bytes.
#line 1 "ENTRY_10394590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394590(undefined4 *param_1)

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


// Reference entry 103945c0; body size 28 bytes.
#line 1 "ENTRY_103945c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103945c0(undefined4 *param_1)

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


// Reference entry 103945f0; body size 28 bytes.
#line 1 "ENTRY_103945f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103945f0(undefined4 *param_1)

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


// Reference entry 10394620; body size 28 bytes.
#line 1 "ENTRY_10394620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394620(undefined4 *param_1)

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


// Reference entry 10394650; body size 28 bytes.
#line 1 "ENTRY_10394650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394650(undefined4 *param_1)

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


// Reference entry 10394680; body size 28 bytes.
#line 1 "ENTRY_10394680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394680(undefined4 *param_1)

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


// Reference entry 103946b0; body size 28 bytes.
#line 1 "ENTRY_103946b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103946b0(undefined4 *param_1)

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


// Reference entry 103946e0; body size 28 bytes.
#line 1 "ENTRY_103946e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103946e0(undefined4 *param_1)

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


// Reference entry 10394710; body size 28 bytes.
#line 1 "ENTRY_10394710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394710(undefined4 *param_1)

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


// Reference entry 10394740; body size 28 bytes.
#line 1 "ENTRY_10394740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394740(undefined4 *param_1)

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


// Reference entry 10394770; body size 28 bytes.
#line 1 "ENTRY_10394770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394770(undefined4 *param_1)

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


// Reference entry 103947a0; body size 28 bytes.
#line 1 "ENTRY_103947a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103947a0(undefined4 *param_1)

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


// Reference entry 103947d0; body size 28 bytes.
#line 1 "ENTRY_103947d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103947d0(undefined4 *param_1)

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


// Reference entry 10394800; body size 28 bytes.
#line 1 "ENTRY_10394800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394800(undefined4 *param_1)

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


// Reference entry 10394830; body size 28 bytes.
#line 1 "ENTRY_10394830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394830(undefined4 *param_1)

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


// Reference entry 10394860; body size 28 bytes.
#line 1 "ENTRY_10394860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394860(undefined4 *param_1)

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


// Reference entry 10394890; body size 28 bytes.
#line 1 "ENTRY_10394890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394890(undefined4 *param_1)

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


// Reference entry 103948c0; body size 28 bytes.
#line 1 "ENTRY_103948c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103948c0(undefined4 *param_1)

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


// Reference entry 103948f0; body size 28 bytes.
#line 1 "ENTRY_103948f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103948f0(undefined4 *param_1)

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


// Reference entry 10394920; body size 28 bytes.
#line 1 "ENTRY_10394920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394920(undefined4 *param_1)

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


// Reference entry 10394950; body size 28 bytes.
#line 1 "ENTRY_10394950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394950(undefined4 *param_1)

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


// Reference entry 10394980; body size 28 bytes.
#line 1 "ENTRY_10394980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394980(undefined4 *param_1)

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


// Reference entry 103949b0; body size 28 bytes.
#line 1 "ENTRY_103949b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103949b0(undefined4 *param_1)

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


// Reference entry 103949e0; body size 28 bytes.
#line 1 "ENTRY_103949e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103949e0(undefined4 *param_1)

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


// Reference entry 10394a10; body size 28 bytes.
#line 1 "ENTRY_10394a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394a10(undefined4 *param_1)

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


// Reference entry 10394a40; body size 28 bytes.
#line 1 "ENTRY_10394a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394a40(undefined4 *param_1)

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


// Reference entry 10394a70; body size 28 bytes.
#line 1 "ENTRY_10394a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394a70(undefined4 *param_1)

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


// Reference entry 10394aa0; body size 28 bytes.
#line 1 "ENTRY_10394aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394aa0(undefined4 *param_1)

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


// Reference entry 10394ad0; body size 28 bytes.
#line 1 "ENTRY_10394ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394ad0(undefined4 *param_1)

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


// Reference entry 10394b00; body size 28 bytes.
#line 1 "ENTRY_10394b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b00(undefined4 *param_1)

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


// Reference entry 10394b30; body size 28 bytes.
#line 1 "ENTRY_10394b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b30(undefined4 *param_1)

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


// Reference entry 10394b60; body size 28 bytes.
#line 1 "ENTRY_10394b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b60(undefined4 *param_1)

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


// Reference entry 10394b90; body size 28 bytes.
#line 1 "ENTRY_10394b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394b90(undefined4 *param_1)

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


// Reference entry 10394bc0; body size 28 bytes.
#line 1 "ENTRY_10394bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394bc0(undefined4 *param_1)

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


// Reference entry 10394bf0; body size 28 bytes.
#line 1 "ENTRY_10394bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394bf0(undefined4 *param_1)

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


// Reference entry 10394c20; body size 28 bytes.
#line 1 "ENTRY_10394c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394c20(undefined4 *param_1)

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


// Reference entry 10394c50; body size 28 bytes.
#line 1 "ENTRY_10394c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394c50(undefined4 *param_1)

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


// Reference entry 10394c80; body size 28 bytes.
#line 1 "ENTRY_10394c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394c80(undefined4 *param_1)

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


// Reference entry 10394cb0; body size 28 bytes.
#line 1 "ENTRY_10394cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394cb0(undefined4 *param_1)

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


// Reference entry 10394ce0; body size 28 bytes.
#line 1 "ENTRY_10394ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394ce0(undefined4 *param_1)

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


// Reference entry 10394d10; body size 28 bytes.
#line 1 "ENTRY_10394d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d10(undefined4 *param_1)

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


// Reference entry 10394d40; body size 20 bytes.
#line 1 "ENTRY_10394d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d40(int *param_1)

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


// Reference entry 10394d60; body size 20 bytes.
#line 1 "ENTRY_10394d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d60(int *param_1)

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


// Reference entry 10394d80; body size 20 bytes.
#line 1 "ENTRY_10394d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394d80(int *param_1)

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


// Reference entry 10394da0; body size 20 bytes.
#line 1 "ENTRY_10394da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10394da0(int *param_1)

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


// Reference entry 103952d0; body size 11 bytes.
#line 1 "ENTRY_103952d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103952d0(int param_1)

{
                    
                    
  ((SCVtbl_31_0*)(*(int **)(param_1 + 200)))->v();
  return;
}


// Reference entry 10395b70; body size 5 bytes.
#line 1 "ENTRY_10395b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10395b70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10395c90; body size 24 bytes.
#line 1 "ENTRY_10395c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10395c90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0((int)(param_1),(int)(param_2),(int)(param_3));
  return (undefined4)(param_1);
}


// Reference entry 10395cb0; body size 24 bytes.
#line 1 "ENTRY_10395cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10395cb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0((int)(param_1),(int)(param_2),(int)(param_3));
  return (undefined4)(param_1);
}


// Reference entry 10395d40; body size 240 bytes.
#line 1 "ENTRY_10395d40"

__declspec(naked) void FUN_10395d40(void)

{
  __asm _emit 0x53 __asm _emit 0x55 __asm _emit 0x8b __asm _emit 0xe9 __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_1187dd78
  __asm _emit 0x8d __asm _emit 0x9d __asm _emit 0x88 __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xcb
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_118960a4
  __asm _emit 0x8b __asm _emit 0xcb
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_1188bc78
  __asm _emit 0x8b __asm _emit 0xcb
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_11897f50
  __asm _emit 0x8b __asm _emit 0xcb
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_11897f60
  __asm _emit 0x8b __asm _emit 0xcb
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_11897f68
  __asm _emit 0x8b __asm _emit 0xcb
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x6a __asm _emit 0x00
  __asm push offset LAB_11897f78
  __asm _emit 0x8b __asm _emit 0xcb
  __asm call LAB_1007fff4
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8d
  __asm _emit 0x4d __asm _emit 0x60 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c
  __asm call LAB_1008805f
  __asm _emit 0x6a __asm _emit 0x11 __asm _emit 0x8d __asm _emit 0x85 __asm _emit 0xd1 __asm _emit 0xdb __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x50
  __asm push offset LAB_11897f84
  __asm _emit 0x8d __asm _emit 0x8d __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1002faea
  __asm _emit 0x8b __asm _emit 0xc8
  __asm call LAB_1007eb95
  __asm _emit 0x8b __asm _emit 0xc5 __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x1c __asm _emit 0x00
}






// Reference entry 103967a0; body size 10 bytes.
#line 1 "ENTRY_103967a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103967a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 103967b0; body size 10 bytes.
#line 1 "ENTRY_103967b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103967b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 103967c0; body size 10 bytes.
#line 1 "ENTRY_103967c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103967c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 103967d0; body size 10 bytes.
#line 1 "ENTRY_103967d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103967d0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 103967e0; body size 10 bytes.
#line 1 "ENTRY_103967e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103967e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 10396810; body size 13 bytes.
#line 1 "ENTRY_10396810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10396810(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x6cc) = (undefined1)(param_2);
  return;
}


// Reference entry 10397310; body size 12 bytes.
#line 1 "ENTRY_10397310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10397310(undefined2 param_2)
{
  int param_1 = (int )this;
  *(undefined2*)(param_1 + 0x5c) = (undefined2)(param_2);
  return;
}


// Reference entry 10397320; body size 10 bytes.
#line 1 "ENTRY_10397320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10397320(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0xc) = (undefined4)(param_2);
  return;
}


// Reference entry 10397330; body size 11 bytes.
#line 1 "ENTRY_10397330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10397330(int param_1)

{
  return (bool)((((uint)((uint3)(*(uint *)(param_1 + 0xd08) >> 9)) << 8 | (uint)((char)(*(uint *)(param_1 + 0xd08) >> 1)))) & 1);
}


// Reference entry 10398730; body size 11 bytes.
#line 1 "ENTRY_10398730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10398730(void)

{
  return (bool)(DAT_122e8a34 != 0);
}


// Reference entry 10398740; body size 4 bytes.
#line 1 "ENTRY_10398740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398740(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10398750; body size 9 bytes.
#line 1 "ENTRY_10398750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10398750(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10398760; body size 4 bytes.
#line 1 "ENTRY_10398760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398760(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10398770; body size 4 bytes.
#line 1 "ENTRY_10398770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398770(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10398780; body size 4 bytes.
#line 1 "ENTRY_10398780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10398780(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10398790; body size 9 bytes.
#line 1 "ENTRY_10398790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10398790(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 103987a0; body size 9 bytes.
#line 1 "ENTRY_103987a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103987a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10399400; body size 8 bytes.
#line 1 "ENTRY_10399400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10399400(int param_1)

{
                    
                    
  ((SCVtbl_5_0*)(*(int **)(param_1 + 4)))->v();
  return;
}


// Reference entry 10399ea0; body size 21 bytes.
#line 1 "ENTRY_10399ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10399ea0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_7_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 1039a0f0; body size 17 bytes.
#line 1 "ENTRY_1039a0f0"

__declspec(naked) void FUN_1039a0f0(void)

{
  __asm _emit 0x8b __asm _emit 0x89 __asm _emit 0x04 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, offset LAB_1186d2ee
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 1039a4c0; body size 8 bytes.
#line 1 "ENTRY_1039a4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039a4c0(int param_1)

{
                    
                    
  ((SCVtbl_6_0*)(*(int **)(param_1 + 4)))->v();
  return;
}


// Reference entry 1039a5a0; body size 21 bytes.
#line 1 "ENTRY_1039a5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1039a5a0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_11_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 1039a5c0; body size 24 bytes.
#line 1 "ENTRY_1039a5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1039a5c0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    ((SCVtbl_6_1*)(*(int **)(param_2 + 4)))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 1039a990; body size 21 bytes.
#line 1 "ENTRY_1039a990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1039a990(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_8_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 1039b2f0; body size 304 bytes.
#line 1 "ENTRY_1039b2f0"

__declspec(naked) void FUN_1039b2f0(void)

{
  __asm _emit 0x55 __asm _emit 0x8d __asm _emit 0xac __asm _emit 0x24 __asm _emit 0xac __asm _emit 0xfd __asm _emit 0xff __asm _emit 0xff __asm _emit 0x81 __asm _emit 0xec __asm _emit 0x54 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x6a __asm _emit 0xff
  __asm push offset LAB_115486b5
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x50 __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x0c
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm _emit 0x33 __asm _emit 0xc5 __asm _emit 0x89 __asm _emit 0x85 __asm _emit 0x50 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x45 __asm _emit 0xf4 __asm _emit 0x64 __asm _emit 0xa3
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x8e __asm _emit 0xc8 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50
  __asm _emit 0x64 __asm _emit 0x8d __asm _emit 0x4d __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xf8
  __asm call LAB_1009a33b
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x47 __asm _emit 0x28 __asm _emit 0x8d __asm _emit 0x55
  __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x4f __asm _emit 0x28 __asm _emit 0x52 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x68 __asm _emit 0x07 __asm _emit 0x2f __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x83
  __asm _emit 0xbd __asm _emit 0xe8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x03 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc1 __asm _emit 0x3a __asm _emit 0x8e __asm _emit 0x30 __asm _emit 0x11 __asm _emit 0x00 __asm _emit 0x00
  __asm je LAB_1039b3f6
  __asm _emit 0x84 __asm _emit 0xc9 __asm _emit 0x88 __asm _emit 0x8e __asm _emit 0x30 __asm _emit 0x11 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edx, offset LAB_11889d1c
  __asm mov eax, offset LAB_11889d24
  __asm _emit 0x0f __asm _emit 0x44 __asm _emit 0xc2 __asm _emit 0x50
  __asm push offset LAB_1189984c
  __asm _emit 0x6a __asm _emit 0x03
  __asm push offset LAB_118979c8
  __asm call LAB_100238df
  __asm mov ecx, dword ptr [LAB_122e8a34]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x10 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x86 __asm _emit 0x30 __asm _emit 0x11 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x50
  __asm call LAB_1006dccd
  __asm _emit 0x8d __asm _emit 0x4d __asm _emit 0xe8
  __asm call LAB_10087ca4
  __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x86 __asm _emit 0x30 __asm _emit 0x11 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8d __asm _emit 0x4d __asm _emit 0xe8 __asm _emit 0x50 __asm _emit 0xc6 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x01
  __asm call LAB_10015be0
  __asm mov dword ptr [ebp - 0x18], offset LAB_11897e7c
  __asm _emit 0x8b __asm _emit 0x4d __asm _emit 0xf0 __asm _emit 0xc6 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x02 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xec __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x4d
  __asm _emit 0x00
  __asm call LAB_10083573
  __asm _emit 0x8b __asm _emit 0x4d __asm _emit 0xf4 __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x8d __asm _emit 0x50
  __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xcd
  __asm call LAB_100382f3
  __asm _emit 0x8d __asm _emit 0xa5 __asm _emit 0x54 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5d __asm _emit 0xc3
}






// Reference entry 1039ea00; body size 7 bytes.
#line 1 "ENTRY_1039ea00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1039ea00(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x548));
}


// Reference entry 1039ea10; body size 11 bytes.
#line 1 "ENTRY_1039ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1039ea10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x570) != 0);
}


// Reference entry 1039ea60; body size 7 bytes.
#line 1 "ENTRY_1039ea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1039ea60(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xdbd1));
}


// Reference entry 1039ebc0; body size 7 bytes.
#line 1 "ENTRY_1039ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1039ebc0(int param_1)

{
  return (int)(param_1 + 0x1430);
}


// Reference entry 1039ec00; body size 26 bytes.
#line 1 "ENTRY_1039ec00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1039ec00(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1039ec20; body size 26 bytes.
#line 1 "ENTRY_1039ec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1039ec20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1039ec40; body size 78 bytes.
#line 1 "ENTRY_1039ec40"

__declspec(naked) void FUN_1039ec40(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b
  __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 1039ecb0; body size 6 bytes.
#line 1 "ENTRY_1039ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1039ecb0(void)

{
  return (char *)("SCIOpAddServiceAccount");
}


// Reference entry 1039ecc0; body size 6 bytes.
#line 1 "ENTRY_1039ecc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1039ecc0(void)

{
  return (char *)("SCIServiceDescriptorInternals");
}


// Reference entry 1039edf0; body size 27 bytes.
#line 1 "ENTRY_1039edf0"

__declspec(naked) void FUN_1039edf0(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_1189a560
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1039ee20; body size 27 bytes.
#line 1 "ENTRY_1039ee20"

__declspec(naked) void FUN_1039ee20(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_1189a3a0
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1039ee50; body size 27 bytes.
#line 1 "ENTRY_1039ee50"

__declspec(naked) void FUN_1039ee50(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_1189a4a0
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 1039f180; body size 16 bytes.
#line 1 "ENTRY_1039f180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f1a0; body size 16 bytes.
#line 1 "ENTRY_1039f1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f1a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f1c0; body size 16 bytes.
#line 1 "ENTRY_1039f1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f1c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f240; body size 134 bytes.
#line 1 "ENTRY_1039f240"

__declspec(naked) void FUN_1039f240(void)

{
  __asm _emit 0x51 __asm _emit 0x53 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xce __asm _emit 0x80 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x4c __asm _emit 0xeb __asm _emit 0x03 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x48 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0xd8
  __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x40
  __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x50 __asm _emit 0x50
  __asm push offset LAB_1189a13c
  __asm push offset LAB_11896aa0
  __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0xcf
  __asm call LAB_10013336
  __asm mov dword ptr [edi], offset LAB_1189a0ac
  __asm _emit 0x8b __asm _emit 0xc7
  __asm mov dword ptr [edi + 0x60], offset LAB_1189a0f4
  __asm mov dword ptr [edi + 0x46c], offset LAB_1189a130
  __asm _emit 0xc6 __asm _emit 0x87 __asm _emit 0xd0 __asm _emit 0xd7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x18 __asm _emit 0x00
}






// Reference entry 1039f3a0; body size 9 bytes.
#line 1 "ENTRY_1039f3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f3a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAddServiceAccount);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f3b0; body size 9 bytes.
#line 1 "ENTRY_1039f3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f3b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f3c0; body size 9 bytes.
#line 1 "ENTRY_1039f3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1039f3c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIServiceDescriptorInternals);
  return (undefined4 *)(param_1);
}


// Reference entry 1039f830; body size 11 bytes.
#line 1 "ENTRY_1039f830"

/* WARNING: Removing unreachable block_1039f830 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039f830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpSPAddAccountXAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 1039f840; body size 11 bytes.
#line 1 "ENTRY_1039f840"

/* WARNING: Removing unreachable block_1039f840 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039f840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RUpnpSPAddOAuthAccountXAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 1039fd00; body size 28 bytes.
#line 1 "ENTRY_1039fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd00(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 1039fd30; body size 28 bytes.
#line 1 "ENTRY_1039fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd30(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 1039fd60; body size 7 bytes.
#line 1 "ENTRY_1039fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fd70; body size 7 bytes.
#line 1 "ENTRY_1039fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fd80; body size 7 bytes.
#line 1 "ENTRY_1039fd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1039fd80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fd90; body size 18 bytes.
#line 1 "ENTRY_1039fd90"

__declspec(naked) void FUN_1039fd90(void)

{
  __asm mov dword ptr [ecx], offset LAB_1189a618
  __asm mov dword ptr [ecx + 8], offset LAB_1189a670
  __asm jmp LAB_1004175e
}






// Reference entry 1039ffc0; body size 7 bytes.
#line 1 "ENTRY_1039ffc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1039ffc0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1039ffd0; body size 3 bytes.
#line 1 "ENTRY_1039ffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1039ffd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1039ffe0; body size 3 bytes.
#line 1 "ENTRY_1039ffe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1039ffe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1039fff0; body size 4 bytes.
#line 1 "ENTRY_1039fff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1039fff0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103a0000; body size 4 bytes.
#line 1 "ENTRY_103a0000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a0000(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103a0010; body size 3 bytes.
#line 1 "ENTRY_103a0010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a0010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a0820; body size 11 bytes.
#line 1 "ENTRY_103a0820"

__declspec(naked) void FUN_103a0820(void)

{
  __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x88 __asm _emit 0xa9 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1002cd9a
}








// Reference entry 103a0830; body size 11 bytes.
#line 1 "ENTRY_103a0830"

__declspec(naked) void FUN_103a0830(void)

{
  __asm _emit 0x81 __asm _emit 0xc1 __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0x00 __asm _emit 0x00
  __asm jmp LAB_1008cf0b
}








// Reference entry 103a0980; body size 8 bytes.
#line 1 "ENTRY_103a0980"

__declspec(naked) void FUN_103a0980(void)

{
  __asm _emit 0x0f __asm _emit 0xb6 __asm _emit 0x81 __asm _emit 0x2d __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc3
}






// Reference entry 103a13c0; body size 9 bytes.
#line 1 "ENTRY_103a13c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a13c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103a1530; body size 7 bytes.
#line 1 "ENTRY_103a1530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a1530(int param_1)

{
  return (int)(param_1 + 0xdbd0);
}


// Reference entry 103a15a0; body size 7 bytes.
#line 1 "ENTRY_103a15a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a15a0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 103a15b0; body size 7 bytes.
#line 1 "ENTRY_103a15b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a15b0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 103a18d0; body size 18 bytes.
#line 1 "ENTRY_103a18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a18d0(int *param_1)

{
  if (*param_1 == (int)((0))) {
    return (undefined4)(*(undefined4 *)(param_1[1] + 0x134));
  }
  return (undefined4)(0);
}


// Reference entry 103a2cc0; body size 57 bytes.
#line 1 "ENTRY_103a2cc0"

__declspec(naked) undefined4 FUN_103a2cc0(void)

{
  __asm _emit 0x56
  __asm call LAB_1000e23c
  __asm _emit 0x8d __asm _emit 0x48 __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf0 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x22 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_100632a0
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x17 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1007e870
  __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_1007e870
  __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x40 __asm _emit 0x2c __asm _emit 0xc3 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a2d10; body size 6 bytes.
#line 1 "ENTRY_103a2d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a2d10(void)

{
  return (char *)("SCIOpAddServiceAccount");
}


// Reference entry 103a2d20; body size 6 bytes.
#line 1 "ENTRY_103a2d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a2d20(void)

{
  return (char *)("SCIServiceDescriptorInternals");
}


// Reference entry 103a2ea0; body size 7 bytes.
#line 1 "ENTRY_103a2ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2ea0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 103a2eb0; body size 7 bytes.
#line 1 "ENTRY_103a2eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2eb0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103a2ef0; body size 16 bytes.
#line 1 "ENTRY_103a2ef0"

__declspec(naked) void FUN_103a2ef0(void)

{
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0x39 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x04
  __asm jmp LAB_1002ce53
  __asm _emit 0xc3
}






// Reference entry 103a2f30; body size 21 bytes.
#line 1 "ENTRY_103a2f30"

__declspec(naked) void FUN_103a2f30(void)

{
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0x39 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0xb8 __asm _emit 0x2d __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x02 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 103a2f80; body size 11 bytes.
#line 1 "ENTRY_103a2f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2f80(int param_1)

{
  return (bool)(*(char *)(param_1 + 0x12d) == '\x02');
}


// Reference entry 103a2fd0; body size 7 bytes.
#line 1 "ENTRY_103a2fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a2fd0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 103a2fe0; body size 9 bytes.
#line 1 "ENTRY_103a2fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103a2fe0(char param_1)

{
  return (bool)(param_1 == '\a');
}


// Reference entry 103a30c0; body size 21 bytes.
#line 1 "ENTRY_103a30c0"

__declspec(naked) void FUN_103a30c0(void)

{
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0x39 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0xb8 __asm _emit 0x2d __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x01 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 103a3110; body size 11 bytes.
#line 1 "ENTRY_103a3110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a3110(int param_1)

{
  return (bool)(*(char *)(param_1 + 0x12d) == '\x01');
}


// Reference entry 103a3120; body size 9 bytes.
#line 1 "ENTRY_103a3120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_103a3120(char param_1)

{
  return (bool)(param_1 == '\b');
}


// Reference entry 103a3510; body size 3 bytes.
#line 1 "ENTRY_103a3510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a3510(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a3520; body size 3 bytes.
#line 1 "ENTRY_103a3520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a3520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a3c40; body size 28 bytes.
#line 1 "ENTRY_103a3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a3c40(undefined4 *param_1)

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


// Reference entry 103a3c70; body size 28 bytes.
#line 1 "ENTRY_103a3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a3c70(undefined4 *param_1)

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


// Reference entry 103a3ca0; body size 28 bytes.
#line 1 "ENTRY_103a3ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a3ca0(undefined4 *param_1)

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


// Reference entry 103a4160; body size 7 bytes.
#line 1 "ENTRY_103a4160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a4160(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x134));
}


// Reference entry 103a4170; body size 14 bytes.
#line 1 "ENTRY_103a4170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a4170(int param_1)

{
  return (bool)((((uint)((uint3)(*(uint *)(param_1 + 0x130) >> 0x16)) << 8 | (uint)(~(byte)(*(uint *)(param_1 + 0x130) >> 0xe)))) & 1);
}


// Reference entry 103a4190; body size 24 bytes.
#line 1 "ENTRY_103a4190"

__declspec(naked) void FUN_103a4190(void)

{
  __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0x39 __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x80 __asm _emit 0x30 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x0e __asm _emit 0xf6 __asm _emit 0xd0 __asm _emit 0x24 __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 103a41c0; body size 18 bytes.
#line 1 "ENTRY_103a41c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a41c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a41e0; body size 39 bytes.
#line 1 "ENTRY_103a41e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a41e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4210; body size 39 bytes.
#line 1 "ENTRY_103a4210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a4210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4240; body size 22 bytes.
#line 1 "ENTRY_103a4240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a4240(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4260; body size 22 bytes.
#line 1 "ENTRY_103a4260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a4260(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4280; body size 18 bytes.
#line 1 "ENTRY_103a4280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a4280(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a4370; body size 38 bytes.
#line 1 "ENTRY_103a4370"

__declspec(naked) void FUN_103a4370(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 103a43a0; body size 22 bytes.
#line 1 "ENTRY_103a43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a43a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a43c0; body size 5 bytes.
#line 1 "ENTRY_103a43c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a43c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a43d0; body size 5 bytes.
#line 1 "ENTRY_103a43d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a43d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a43e0; body size 40 bytes.
#line 1 "ENTRY_103a43e0"

__declspec(naked) void FUN_103a43e0(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 103a4420; body size 91 bytes.
#line 1 "ENTRY_103a4420"

__declspec(naked) void FUN_103a4420(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf
  __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103a4580; body size 91 bytes.
#line 1 "ENTRY_103a4580"

__declspec(naked) void FUN_103a4580(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf
  __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103a4680; body size 5 bytes.
#line 1 "ENTRY_103a4680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a4680(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a4690; body size 5 bytes.
#line 1 "ENTRY_103a4690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a4690(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a46a0; body size 91 bytes.
#line 1 "ENTRY_103a46a0"

__declspec(naked) void FUN_103a46a0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf
  __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103a4720; body size 26 bytes.
#line 1 "ENTRY_103a4720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103a4720(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 103a4740; body size 78 bytes.
#line 1 "ENTRY_103a4740"

__declspec(naked) void FUN_103a4740(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b
  __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103a47b0; body size 3 bytes.
#line 1 "ENTRY_103a47b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47b0(void)

{
  return;
}


// Reference entry 103a47c0; body size 3 bytes.
#line 1 "ENTRY_103a47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47c0(void)

{
  return;
}


// Reference entry 103a47d0; body size 3 bytes.
#line 1 "ENTRY_103a47d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47d0(void)

{
  return;
}


// Reference entry 103a47e0; body size 3 bytes.
#line 1 "ENTRY_103a47e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a47e0(void)

{
  return;
}


// Reference entry 103a47f0; body size 28 bytes.
#line 1 "ENTRY_103a47f0"

__declspec(naked) void FUN_103a47f0(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x5e __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103a4820; body size 25 bytes.
#line 1 "ENTRY_103a4820"

__declspec(naked) void FUN_103a4820(void)

{
  __asm _emit 0x6a __asm _emit 0x1c
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 103a4840; body size 13 bytes.
#line 1 "ENTRY_103a4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a4850; body size 13 bytes.
#line 1 "ENTRY_103a4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4850(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a4860; body size 20 bytes.
#line 1 "ENTRY_103a4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4860(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 103a4880; body size 123 bytes.
#line 1 "ENTRY_103a4880"

__declspec(naked) void FUN_103a4880(void)

{
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x39 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x75 __asm _emit 0x06
  __asm _emit 0x39 __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x74 __asm _emit 0x51 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x03 __asm _emit 0x49 __asm _emit 0xeb __asm _emit 0x0c __asm _emit 0x83 __asm _emit 0xef __asm _emit 0x04
  __asm _emit 0xb9 __asm _emit 0x1f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x20 __asm _emit 0x89 __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x85 __asm _emit 0xd2 __asm _emit 0x74 __asm _emit 0x03 __asm _emit 0x4a __asm _emit 0xeb __asm _emit 0x0c __asm _emit 0x83 __asm _emit 0xee __asm _emit 0x04 __asm _emit 0xba
  __asm _emit 0x1f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0xb8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x24
  __asm _emit 0x24 __asm _emit 0xd3 __asm _emit 0xe0 __asm _emit 0x85 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0x0f __asm _emit 0xab __asm _emit 0xd0 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0xeb __asm _emit 0xa2
  __asm _emit 0x0f __asm _emit 0xb3 __asm _emit 0xd0 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0xeb __asm _emit 0x9b __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x8b
  __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a4920; body size 33 bytes.
#line 1 "ENTRY_103a4920"

__declspec(naked) void FUN_103a4920(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x2b __asm _emit 0xf8
  __asm _emit 0x57 __asm _emit 0x50 __asm _emit 0x56
  __asm call LAB_1148cdf3
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x37 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a4950; body size 33 bytes.
#line 1 "ENTRY_103a4950"

__declspec(naked) void FUN_103a4950(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x2b __asm _emit 0xf8
  __asm _emit 0x57 __asm _emit 0x50 __asm _emit 0x56
  __asm call LAB_1148cdf3
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x37 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a4980; body size 129 bytes.
#line 1 "ENTRY_103a4980"

__declspec(naked) void FUN_103a4980(void)

{
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c
  __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x75 __asm _emit 0x06 __asm _emit 0x3b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x74 __asm _emit 0x57 __asm _emit 0xb8 __asm _emit 0x01
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xd3 __asm _emit 0xe0 __asm _emit 0x85 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x0f __asm _emit 0xab __asm _emit 0xd0 __asm _emit 0xeb __asm _emit 0x03
  __asm _emit 0x0f __asm _emit 0xb3 __asm _emit 0xd0 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x83 __asm _emit 0xfa __asm _emit 0x1f
  __asm _emit 0x73 __asm _emit 0x03 __asm _emit 0x42 __asm _emit 0xeb __asm _emit 0x09 __asm _emit 0x33 __asm _emit 0xd2 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0x4c
  __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x83 __asm _emit 0xf9 __asm _emit 0x1f __asm _emit 0x73 __asm _emit 0x07 __asm _emit 0x41
  __asm _emit 0x89 __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0xeb __asm _emit 0xac __asm _emit 0x33 __asm _emit 0xc9 __asm _emit 0x83 __asm _emit 0xc7 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x89
  __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0xeb __asm _emit 0x9d __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x30 __asm _emit 0x89 __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x5e
  __asm _emit 0xc3
}






// Reference entry 103a4a30; body size 15 bytes.
#line 1 "ENTRY_103a4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,8);
  return;
}


// Reference entry 103a4a50; body size 15 bytes.
#line 1 "ENTRY_103a4a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,8);
  return;
}


// Reference entry 103a4a70; body size 3 bytes.
#line 1 "ENTRY_103a4a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a70(void)

{
  return;
}


// Reference entry 103a4a80; body size 3 bytes.
#line 1 "ENTRY_103a4a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a80(void)

{
  return;
}


// Reference entry 103a4a90; body size 3 bytes.
#line 1 "ENTRY_103a4a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4a90(void)

{
  return;
}


// Reference entry 103a4aa0; body size 3 bytes.
#line 1 "ENTRY_103a4aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4aa0(void)

{
  return;
}


// Reference entry 103a4ab0; body size 3 bytes.
#line 1 "ENTRY_103a4ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4ab0(void)

{
  return;
}


// Reference entry 103a4ac0; body size 18 bytes.
#line 1 "ENTRY_103a4ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103a4ac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 103a4e30; body size 191 bytes.
#line 1 "ENTRY_103a4e30"

__declspec(naked) void FUN_103a4e30(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b
  __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x3b __asm _emit 0xc8
  __asm je LAB_103a4eeb
  __asm _emit 0x53 __asm _emit 0x83 __asm _emit 0xcb __asm _emit 0xff __asm _emit 0xd3 __asm _emit 0xe3 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x55 __asm _emit 0x8b __asm _emit 0xeb __asm _emit 0xf7 __asm _emit 0xd5 __asm _emit 0x8a
  __asm _emit 0x11 __asm _emit 0x88 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x13 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x75 __asm _emit 0x29 __asm _emit 0xb9 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xba __asm _emit 0xff
  __asm _emit 0xff __asm _emit 0xff __asm _emit 0xff __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xd3 __asm _emit 0xea __asm _emit 0x38 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x13 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc2
  __asm _emit 0xf7 __asm _emit 0xd2 __asm _emit 0x0b __asm _emit 0xd5 __asm _emit 0x23 __asm _emit 0xc3 __asm _emit 0x23 __asm _emit 0x16 __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0x0b __asm _emit 0xc2 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e
  __asm _emit 0x59 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x33 __asm _emit 0xc9 __asm _emit 0x84 __asm _emit 0xd2 __asm _emit 0xba __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xcb
  __asm _emit 0x23 __asm _emit 0xc5 __asm _emit 0x0b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x89 __asm _emit 0x0e __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x2b
  __asm _emit 0xc6 __asm _emit 0x50 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x38 __asm _emit 0x01 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc2 __asm _emit 0x50 __asm _emit 0x56
  __asm call LAB_1148ce0b
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x1f __asm _emit 0xb9 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x83 __asm _emit 0xca __asm _emit 0xff __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xd3 __asm _emit 0xea __asm _emit 0x8b __asm _emit 0xca __asm _emit 0xf7 __asm _emit 0xd1 __asm _emit 0x23 __asm _emit 0x0f __asm _emit 0x38
  __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x13 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc2 __asm _emit 0x0b __asm _emit 0xc8 __asm _emit 0x89 __asm _emit 0x0f __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103a4f20; body size 23 bytes.
#line 1 "ENTRY_103a4f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a4f20(void *param_1,int param_2)

{
  memset(param_1,0,param_2 << 2);
  return;
}


// Reference entry 103a5000; body size 15 bytes.
#line 1 "ENTRY_103a5000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5000(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 103a50c0; body size 5 bytes.
#line 1 "ENTRY_103a50c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a50d0; body size 5 bytes.
#line 1 "ENTRY_103a50d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a50e0; body size 7 bytes.
#line 1 "ENTRY_103a50e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a50f0; body size 7 bytes.
#line 1 "ENTRY_103a50f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a50f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a5100; body size 7 bytes.
#line 1 "ENTRY_103a5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5100(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a5110; body size 7 bytes.
#line 1 "ENTRY_103a5110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a5120; body size 5 bytes.
#line 1 "ENTRY_103a5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5130; body size 16 bytes.
#line 1 "ENTRY_103a5130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5130(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 103a5150; body size 16 bytes.
#line 1 "ENTRY_103a5150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5150(int *param_1,int *param_2)

{
  return (int)(*param_2 - *param_1 >> 2);
}


// Reference entry 103a5170; body size 25 bytes.
#line 1 "ENTRY_103a5170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5170(int *param_1,int *param_2)

{
  return (int)(((*param_2 - *param_1 >> 2) * 0x20 - param_1[1]) + param_2[1]);
}


// Reference entry 103a5190; body size 24 bytes.
#line 1 "ENTRY_103a5190"

__declspec(naked) void FUN_103a5190(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b
  __asm _emit 0x00 __asm _emit 0x3b __asm _emit 0x01 __asm _emit 0x0f __asm _emit 0x94 __asm _emit 0xc0 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103a51b0; body size 5 bytes.
#line 1 "ENTRY_103a51b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a51b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a51c0; body size 37 bytes.
#line 1 "ENTRY_103a51c0"

__declspec(naked) void FUN_103a51c0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_10070fbd
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103a51f0; body size 33 bytes.
#line 1 "ENTRY_103a51f0"

__declspec(naked) void FUN_103a51f0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x2b __asm _emit 0xf8
  __asm _emit 0x57 __asm _emit 0x50 __asm _emit 0x56
  __asm call LAB_1148cdf3
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x37 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a5220; body size 39 bytes.
#line 1 "ENTRY_103a5220"

__declspec(naked) void FUN_103a5220(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xf9 __asm _emit 0x1f __asm _emit 0x73 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x04 __asm _emit 0x41 __asm _emit 0x89 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x33 __asm _emit 0xc9 __asm _emit 0x83 __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0xc3
}






// Reference entry 103a5250; body size 19 bytes.
#line 1 "ENTRY_103a5250"

__declspec(naked) void FUN_103a5250(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x4a __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x89
  __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0xc3
}






// Reference entry 103a5270; body size 19 bytes.
#line 1 "ENTRY_103a5270"

__declspec(naked) void FUN_103a5270(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x4a __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x89
  __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0xc3
}






// Reference entry 103a5470; body size 13 bytes.
#line 1 "ENTRY_103a5470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5470(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103a5480; body size 13 bytes.
#line 1 "ENTRY_103a5480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_103a5480(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a5490; body size 19 bytes.
#line 1 "ENTRY_103a5490"

__declspec(naked) void FUN_103a5490(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x89
  __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0xc3
}






// Reference entry 103a55f0; body size 5 bytes.
#line 1 "ENTRY_103a55f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a55f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5600; body size 5 bytes.
#line 1 "ENTRY_103a5600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5610; body size 5 bytes.
#line 1 "ENTRY_103a5610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5620; body size 86 bytes.
#line 1 "ENTRY_103a5620"

__declspec(naked) void FUN_103a5620(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8d __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0x3b __asm _emit 0x01 __asm _emit 0x75 __asm _emit 0x23 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm _emit 0x57 __asm _emit 0x8d __asm _emit 0x3c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x57 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x56
  __asm call LAB_1148ce0b
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x37 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x44
  __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xd2 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x0e __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xea __asm _emit 0x01
  __asm _emit 0x75 __asm _emit 0xf4 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103a5690; body size 35 bytes.
#line 1 "ENTRY_103a5690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103a5690(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((char *)(param_2 * 4 + (int)param_1));
}


// Reference entry 103a56c0; body size 35 bytes.
#line 1 "ENTRY_103a56c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_103a56c0(void *param_1,int param_2)

{
  memset(param_1,0,param_2 * 4);
  return (void *)((char *)(param_2 * 4 + (int)param_1));
}


// Reference entry 103a56f0; body size 5 bytes.
#line 1 "ENTRY_103a56f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a56f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5700; body size 5 bytes.
#line 1 "ENTRY_103a5700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5710; body size 27 bytes.
#line 1 "ENTRY_103a5710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5710(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (int)(param_2);
}


// Reference entry 103a5740; body size 27 bytes.
#line 1 "ENTRY_103a5740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_103a5740(void *param_1,int param_2)

{
  memset(param_1,0,param_2 - (int)param_1);
  return (int)(param_2);
}


// Reference entry 103a5770; body size 5 bytes.
#line 1 "ENTRY_103a5770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5780; body size 5 bytes.
#line 1 "ENTRY_103a5780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5790; body size 5 bytes.
#line 1 "ENTRY_103a5790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57a0; body size 5 bytes.
#line 1 "ENTRY_103a57a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57b0; body size 5 bytes.
#line 1 "ENTRY_103a57b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57c0; body size 5 bytes.
#line 1 "ENTRY_103a57c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57d0; body size 5 bytes.
#line 1 "ENTRY_103a57d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a57e0; body size 5 bytes.
#line 1 "ENTRY_103a57e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a57e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5820; body size 34 bytes.
#line 1 "ENTRY_103a5820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5820(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 103a5850; body size 28 bytes.
#line 1 "ENTRY_103a5850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a5850(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 103a5880; body size 115 bytes.
#line 1 "ENTRY_103a5880"

__declspec(naked) void FUN_103a5880(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x55 __asm _emit 0x8b
  __asm _emit 0x6c __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x2c __asm _emit 0x89 __asm _emit 0x4c __asm _emit 0x24
  __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0xdd __asm _emit 0x75 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xf1 __asm _emit 0x74 __asm _emit 0x39 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xba __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xd3 __asm _emit 0xe2 __asm _emit 0x8b __asm _emit 0x0f __asm _emit 0x85 __asm _emit 0x13 __asm _emit 0x74 __asm _emit 0x05 __asm _emit 0x0f __asm _emit 0xab __asm _emit 0xc1 __asm _emit 0xeb __asm _emit 0x03 __asm _emit 0x0f __asm _emit 0xb3 __asm _emit 0xc1
  __asm _emit 0x89 __asm _emit 0x0f __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x73 __asm _emit 0x03 __asm _emit 0x40 __asm _emit 0xeb __asm _emit 0x05 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x83 __asm _emit 0xc7 __asm _emit 0x04 __asm _emit 0x8b
  __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xfe __asm _emit 0x1f __asm _emit 0x73 __asm _emit 0x03 __asm _emit 0x46 __asm _emit 0xeb __asm _emit 0xc6 __asm _emit 0x33 __asm _emit 0xf6 __asm _emit 0x83 __asm _emit 0xc3 __asm _emit 0x04
  __asm _emit 0xeb __asm _emit 0xbf __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x39 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc1
  __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103a5910; body size 125 bytes.
#line 1 "ENTRY_103a5910"

__declspec(naked) void FUN_103a5910(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x55 __asm _emit 0x8b
  __asm _emit 0x6c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x24 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x2c __asm _emit 0x89 __asm _emit 0x4c __asm _emit 0x24
  __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0xeb __asm _emit 0x75 __asm _emit 0x04 __asm _emit 0x3b __asm _emit 0xce __asm _emit 0x74 __asm _emit 0x43 __asm _emit 0x85 __asm _emit 0xf6 __asm _emit 0x74 __asm _emit 0x03 __asm _emit 0x4e __asm _emit 0xeb __asm _emit 0x08
  __asm _emit 0xbe __asm _emit 0x1f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xeb __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x03 __asm _emit 0x48 __asm _emit 0xeb __asm _emit 0x08 __asm _emit 0xb8
  __asm _emit 0x1f __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xef __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xba __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xd3 __asm _emit 0xe2
  __asm _emit 0x8b __asm _emit 0x0f __asm _emit 0x85 __asm _emit 0x13 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x0f __asm _emit 0xab __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0xeb
  __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0xb3 __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0xeb __asm _emit 0xb5 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x18
  __asm _emit 0x89 __asm _emit 0x39 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x5b __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103a5ab0; body size 86 bytes.
#line 1 "ENTRY_103a5ab0"

__declspec(naked) void FUN_103a5ab0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x33 __asm _emit 0xff __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x74 __asm _emit 0x43 __asm _emit 0x56
  __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x47 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x1d __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x52 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xeb __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x30 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75
  __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0xf2 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf4 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x75
  __asm _emit 0xbf __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc3
}






// Reference entry 103a5b20; body size 15 bytes.
#line 1 "ENTRY_103a5b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5b20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103a5b40; body size 15 bytes.
#line 1 "ENTRY_103a5b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5b40(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103a5b60; body size 15 bytes.
#line 1 "ENTRY_103a5b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5b60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103a5b80; body size 211 bytes.
#line 1 "ENTRY_103a5b80"

__declspec(naked) void FUN_103a5b80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x53 __asm _emit 0x55 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xe8 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x28 __asm _emit 0x8b __asm _emit 0xd8 __asm _emit 0x3b __asm _emit 0xf7 __asm _emit 0x75 __asm _emit 0x08 __asm _emit 0x3b
  __asm _emit 0xc8
  __asm je LAB_103a5c4b
  __asm _emit 0x83 __asm _emit 0xca __asm _emit 0xff __asm _emit 0xd3 __asm _emit 0xe2 __asm _emit 0x89 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xf7 __asm _emit 0xd0 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0x8a __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x2c __asm _emit 0x88 __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x13 __asm _emit 0x3b
  __asm _emit 0xf7 __asm _emit 0x75 __asm _emit 0x2d __asm _emit 0x83 __asm _emit 0xca __asm _emit 0xff __asm _emit 0xb9 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xd3
  __asm _emit 0xea __asm _emit 0x38 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x13 __asm _emit 0x5f __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc2 __asm _emit 0xf7 __asm _emit 0xd2 __asm _emit 0x0b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x23
  __asm _emit 0x16 __asm _emit 0x23 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x0b __asm _emit 0xc2 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0xc3
  __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x84 __asm _emit 0xc9 __asm _emit 0x8b __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc2 __asm _emit 0x23 __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x0b __asm _emit 0xc1 __asm _emit 0xba
  __asm _emit 0xff __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x30 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x83 __asm _emit 0xc6 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x2b
  __asm _emit 0xc6 __asm _emit 0x50 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x38 __asm _emit 0x01 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc2 __asm _emit 0x50 __asm _emit 0x56
  __asm call LAB_1148ce0b
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0xed __asm _emit 0x74 __asm _emit 0x1d __asm _emit 0x83 __asm _emit 0xca __asm _emit 0xff __asm _emit 0xb9 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b
  __asm _emit 0xcb __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xd3 __asm _emit 0xea __asm _emit 0x38 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x13 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xc2 __asm _emit 0xf7 __asm _emit 0xd2 __asm _emit 0x23 __asm _emit 0x17
  __asm _emit 0x0b __asm _emit 0xc2 __asm _emit 0x89 __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0xc3
}






// Reference entry 103a5c90; body size 5 bytes.
#line 1 "ENTRY_103a5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5ca0; body size 5 bytes.
#line 1 "ENTRY_103a5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5ca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5cb0; body size 5 bytes.
#line 1 "ENTRY_103a5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5cc0; body size 5 bytes.
#line 1 "ENTRY_103a5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5cd0; body size 5 bytes.
#line 1 "ENTRY_103a5cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5ce0; body size 5 bytes.
#line 1 "ENTRY_103a5ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5ce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5cf0; body size 5 bytes.
#line 1 "ENTRY_103a5cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5cf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5d00; body size 5 bytes.
#line 1 "ENTRY_103a5d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103a5d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a5d10; body size 6 bytes.
#line 1 "ENTRY_103a5d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a5d10(void)

{
  return (char *)("SCIBrowseStackManager");
}


// Reference entry 103a5d20; body size 6 bytes.
#line 1 "ENTRY_103a5d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103a5d20(void)

{
  return (char *)("SCIStackedItemImpl");
}


// Reference entry 103a5d30; body size 33 bytes.
#line 1 "ENTRY_103a5d30"

__declspec(naked) void FUN_103a5d30(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x2b __asm _emit 0xf8
  __asm _emit 0x57 __asm _emit 0x50 __asm _emit 0x56
  __asm call LAB_1148cdf3
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x37 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a5d60; body size 33 bytes.
#line 1 "ENTRY_103a5d60"

__declspec(naked) void FUN_103a5d60(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x2b __asm _emit 0xf8
  __asm _emit 0x57 __asm _emit 0x50 __asm _emit 0x56
  __asm call LAB_1148cdf3
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x37 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a5d90; body size 27 bytes.
#line 1 "ENTRY_103a5d90"

__declspec(naked) void FUN_103a5d90(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_1189a814
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103a5dc0; body size 16 bytes.
#line 1 "ENTRY_103a5dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a5e20; body size 16 bytes.
#line 1 "ENTRY_103a5e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5e20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a5ec0; body size 16 bytes.
#line 1 "ENTRY_103a5ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a5ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6080; body size 18 bytes.
#line 1 "ENTRY_103a6080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a6080(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a60a0; body size 18 bytes.
#line 1 "ENTRY_103a60a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a60a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a60c0; body size 18 bytes.
#line 1 "ENTRY_103a60c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a60c0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a60e0; body size 18 bytes.
#line 1 "ENTRY_103a60e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a60e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6100; body size 18 bytes.
#line 1 "ENTRY_103a6100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a6100(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6120; body size 37 bytes.
#line 1 "ENTRY_103a6120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6150; body size 37 bytes.
#line 1 "ENTRY_103a6150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6150(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a61c0; body size 11 bytes.
#line 1 "ENTRY_103a61c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a61c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a61d0; body size 11 bytes.
#line 1 "ENTRY_103a61d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a61d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6260; body size 11 bytes.
#line 1 "ENTRY_103a6260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a6260(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6270; body size 11 bytes.
#line 1 "ENTRY_103a6270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a6270(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6280; body size 16 bytes.
#line 1 "ENTRY_103a6280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6280(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a62a0; body size 21 bytes.
#line 1 "ENTRY_103a62a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a62a0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a62c0; body size 18 bytes.
#line 1 "ENTRY_103a62c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a62c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a62e0; body size 18 bytes.
#line 1 "ENTRY_103a62e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a62e0(undefined4 param_2,undefined4 param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6300; body size 18 bytes.
#line 1 "ENTRY_103a6300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a6300(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6320; body size 19 bytes.
#line 1 "ENTRY_103a6320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a6320(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(param_2[1]);
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6340; body size 30 bytes.
#line 1 "ENTRY_103a6340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a6340(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6370; body size 11 bytes.
#line 1 "ENTRY_103a6370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a6370(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6380; body size 11 bytes.
#line 1 "ENTRY_103a6380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a6380(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6390; body size 3 bytes.
#line 1 "ENTRY_103a6390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a6390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a63a0; body size 3 bytes.
#line 1 "ENTRY_103a63a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a63a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103a6450; body size 52 bytes.
#line 1 "ENTRY_103a6450"

__declspec(naked) void FUN_103a6450(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103a65c0; body size 30 bytes.
#line 1 "ENTRY_103a65c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a65c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7010; body size 42 bytes.
#line 1 "ENTRY_103a7010"

__declspec(naked) void FUN_103a7010(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_1189aa40
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103a7050; body size 151 bytes.
#line 1 "ENTRY_103a7050"

__declspec(naked) void FUN_103a7050(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x20
  __asm call LAB_10020f81
  __asm mov dword ptr [esi], offset LAB_1189b278
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_1189b47c
  __asm mov dword ptr [esi + 0x28], offset LAB_1189b488
  __asm mov dword ptr [esi + 0x80], offset LAB_1189b4ac
  __asm mov dword ptr [esi + 0x84], offset LAB_1189b4e8
  __asm mov dword ptr [esi + 0x88], offset LAB_1189b540
  __asm mov dword ptr [esi + 0x8c], offset LAB_1189b550
  __asm mov dword ptr [esi + 0x90], offset LAB_1189b578
  __asm mov dword ptr [esi + 0x94], offset LAB_1189b5ec
  __asm mov dword ptr [esi + 0x250], offset LAB_1189b600
  __asm mov dword ptr [esi + 0x258], offset LAB_1189b628
  __asm _emit 0xc6 __asm _emit 0x86 __asm _emit 0x75 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x18 __asm _emit 0x00
}






// Reference entry 103a7110; body size 33 bytes.
#line 1 "ENTRY_103a7110"

__declspec(naked) void FUN_103a7110(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_11881068
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_1189aa18
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103a7140; body size 9 bytes.
#line 1 "ENTRY_103a7140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a7140(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseStackManager);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7300; body size 150 bytes.
#line 1 "ENTRY_103a7300"

__declspec(naked) void FUN_103a7300(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x1c
  __asm call LAB_10051569
  __asm mov dword ptr [esi], offset LAB_1189b638
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_1189b844
  __asm mov dword ptr [esi + 0x28], offset LAB_1189b850
  __asm mov dword ptr [esi + 0x80], offset LAB_1189b874
  __asm mov dword ptr [esi + 0x84], offset LAB_1189b8b0
  __asm mov dword ptr [esi + 0x88], offset LAB_1189b908
  __asm mov dword ptr [esi + 0x8c], offset LAB_1189b918
  __asm mov dword ptr [esi + 0x90], offset LAB_1189b940
  __asm mov dword ptr [esi + 0x94], offset LAB_1189b9b4
  __asm mov dword ptr [esi + 0x250], offset LAB_1189b9c8
  __asm mov dword ptr [esi + 0x254], offset LAB_1189b9e4
  __asm mov dword ptr [esi + 0x258], offset LAB_1189b9f4
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x14 __asm _emit 0x00
}






// Reference entry 103a7660; body size 9 bytes.
#line 1 "ENTRY_103a7660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103a7660(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7670; body size 18 bytes.
#line 1 "ENTRY_103a7670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103a7670(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7bb0; body size 3 bytes.
#line 1 "ENTRY_103a7bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103a7bb0(void)

{
  return;
}


// Reference entry 103a7fb0; body size 5 bytes.
#line 1 "ENTRY_103a7fb0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a7fb0(undefined4 *param_1)

{ __asm jmp FUN_10037466 }


// Reference entry 103a7fc0; body size 5 bytes.
#line 1 "ENTRY_103a7fc0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a7fc0(undefined4 *param_1)

{ __asm jmp FUN_1001b716 }


// Reference entry 103a8680; body size 19 bytes.
#line 1 "ENTRY_103a8680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a8680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103a86a0; body size 105 bytes.
#line 1 "ENTRY_103a86a0"

__declspec(naked) void FUN_103a86a0(void)

{
  __asm mov dword ptr [ecx], offset LAB_1189b278
  __asm mov dword ptr [ecx + 8], offset LAB_1189b47c
  __asm mov dword ptr [ecx + 0x28], offset LAB_1189b488
  __asm mov dword ptr [ecx + 0x80], offset LAB_1189b4ac
  __asm mov dword ptr [ecx + 0x84], offset LAB_1189b4e8
  __asm mov dword ptr [ecx + 0x88], offset LAB_1189b540
  __asm mov dword ptr [ecx + 0x8c], offset LAB_1189b550
  __asm mov dword ptr [ecx + 0x90], offset LAB_1189b578
  __asm mov dword ptr [ecx + 0x94], offset LAB_1189b5ec
  __asm mov dword ptr [ecx + 0x250], offset LAB_1189b600
  __asm mov dword ptr [ecx + 0x258], offset LAB_1189b628
  __asm jmp LAB_1001b153
}






// Reference entry 103a8750; body size 7 bytes.
#line 1 "ENTRY_103a8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103a8750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103a8760; body size 115 bytes.
#line 1 "ENTRY_103a8760"

__declspec(naked) void FUN_103a8760(void)

{
  __asm mov dword ptr [ecx], offset LAB_1189ba08
  __asm mov dword ptr [ecx + 8], offset LAB_1189bc14
  __asm mov dword ptr [ecx + 0x28], offset LAB_1189bc20
  __asm mov dword ptr [ecx + 0x80], offset LAB_1189bc44
  __asm mov dword ptr [ecx + 0x84], offset LAB_1189bc80
  __asm mov dword ptr [ecx + 0x88], offset LAB_1189bcd8
  __asm mov dword ptr [ecx + 0x8c], offset LAB_1189bce8
  __asm mov dword ptr [ecx + 0x90], offset LAB_1189bd10
  __asm mov dword ptr [ecx + 0x94], offset LAB_1189bd84
  __asm mov dword ptr [ecx + 0x250], offset LAB_1189bd98
  __asm mov dword ptr [ecx + 0x254], offset LAB_1189bdb4
  __asm mov dword ptr [ecx + 0x258], offset LAB_1189bdc4
  __asm jmp LAB_10006690
}






// Reference entry 103a87f0; body size 115 bytes.
#line 1 "ENTRY_103a87f0"

__declspec(naked) void FUN_103a87f0(void)

{
  __asm mov dword ptr [ecx], offset LAB_1189b638
  __asm mov dword ptr [ecx + 8], offset LAB_1189b844
  __asm mov dword ptr [ecx + 0x28], offset LAB_1189b850
  __asm mov dword ptr [ecx + 0x80], offset LAB_1189b874
  __asm mov dword ptr [ecx + 0x84], offset LAB_1189b8b0
  __asm mov dword ptr [ecx + 0x88], offset LAB_1189b908
  __asm mov dword ptr [ecx + 0x8c], offset LAB_1189b918
  __asm mov dword ptr [ecx + 0x90], offset LAB_1189b940
  __asm mov dword ptr [ecx + 0x94], offset LAB_1189b9b4
  __asm mov dword ptr [ecx + 0x250], offset LAB_1189b9c8
  __asm mov dword ptr [ecx + 0x254], offset LAB_1189b9e4
  __asm mov dword ptr [ecx + 0x258], offset LAB_1189b9f4
  __asm jmp LAB_10006690
}






// Reference entry 103a8ac0; body size 65 bytes.
#line 1 "ENTRY_103a8ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103a8ac0(int *param_2)
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


// Reference entry 103a8b20; body size 59 bytes.
#line 1 "ENTRY_103a8b20"

__declspec(naked) void FUN_103a8b20(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xba __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x53 __asm _emit 0x55 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b
  __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0xd3 __asm _emit 0xe2 __asm _emit 0x8b __asm _emit 0x1f __asm _emit 0x85 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x8b __asm _emit 0x6f __asm _emit 0x04 __asm _emit 0x8b
  __asm _emit 0x33 __asm _emit 0x74 __asm _emit 0x0c __asm _emit 0x0f __asm _emit 0xab __asm _emit 0xee __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x33 __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x0f
  __asm _emit 0xb3 __asm _emit 0xee __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x33 __asm _emit 0x5e __asm _emit 0x5d __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103a8b70; body size 37 bytes.
#line 1 "ENTRY_103a8b70"

__declspec(naked) void FUN_103a8b70(void)

{
  __asm _emit 0x80 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x71 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x02 __asm _emit 0x74 __asm _emit 0x0b __asm _emit 0x0f
  __asm _emit 0xab __asm _emit 0xf0 __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x0f __asm _emit 0xb3 __asm _emit 0xf0 __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0x8b
  __asm _emit 0xc1 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103a8ba0; body size 14 bytes.
#line 1 "ENTRY_103a8ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103a8ba0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103a8bc0; body size 14 bytes.
#line 1 "ENTRY_103a8bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103a8bc0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103a8be0; body size 28 bytes.
#line 1 "ENTRY_103a8be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103a8be0(uint *param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if (((uint)(uVar1) == *param_2) && (uVar1 = (uint)(param_1[1]),(uint)((uVar1)) == param_2[1])) {
    return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
  }
  return (bool)0;
}


// Reference entry 103a8c10; body size 14 bytes.
#line 1 "ENTRY_103a8c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103a8c10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103a8c30; body size 14 bytes.
#line 1 "ENTRY_103a8c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103a8c30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103a8c50; body size 28 bytes.
#line 1 "ENTRY_103a8c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103a8c50(uint *param_2)
{
  uint *param_1 = (uint *)this;
  uint uVar1;
  
  uVar1 = (uint)(*param_1);
  if (((uint)(uVar1) == *param_2) && (uVar1 = (uint)(param_1[1]),(uint)((uVar1)) == param_2[1])) {
    return (bool)0;
  }
  return (uint)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)(1)));
}


// Reference entry 103a8d90; body size 31 bytes.
#line 1 "ENTRY_103a8d90"

__declspec(naked) void FUN_103a8d90(void)

{
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xd6 __asm _emit 0xc1 __asm _emit 0xea __asm _emit 0x05 __asm _emit 0x83 __asm _emit 0xe6 __asm _emit 0x1f __asm _emit 0x8d
  __asm _emit 0x0c __asm _emit 0x90 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103a8dc0; body size 3 bytes.
#line 1 "ENTRY_103a8dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8dc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8dd0; body size 7 bytes.
#line 1 "ENTRY_103a8dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8dd0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103a8de0; body size 3 bytes.
#line 1 "ENTRY_103a8de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8de0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8df0; body size 7 bytes.
#line 1 "ENTRY_103a8df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8df0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103a8e00; body size 3 bytes.
#line 1 "ENTRY_103a8e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e10; body size 7 bytes.
#line 1 "ENTRY_103a8e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8e10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103a8e20; body size 7 bytes.
#line 1 "ENTRY_103a8e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103a8e20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103a8e30; body size 20 bytes.
#line 1 "ENTRY_103a8e30"

__declspec(naked) void FUN_103a8e30(void)

{
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xba __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0xd3 __asm _emit 0xe2 __asm _emit 0x85 __asm _emit 0x10
  __asm _emit 0x0f __asm _emit 0x95 __asm _emit 0xc0 __asm _emit 0xc3
}






// Reference entry 103a8e50; body size 3 bytes.
#line 1 "ENTRY_103a8e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e60; body size 3 bytes.
#line 1 "ENTRY_103a8e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e70; body size 3 bytes.
#line 1 "ENTRY_103a8e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e80; body size 3 bytes.
#line 1 "ENTRY_103a8e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103a8e80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103a8e90; body size 30 bytes.
#line 1 "ENTRY_103a8e90"

__declspec(naked) void FUN_103a8e90(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x71 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x83 __asm _emit 0xe6 __asm _emit 0x01 __asm _emit 0xd1 __asm _emit 0xe8 __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08
  __asm _emit 0x4a __asm _emit 0x23 __asm _emit 0xd0 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x04 __asm _emit 0x90 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xf0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a8ec0; body size 31 bytes.
#line 1 "ENTRY_103a8ec0"

__declspec(naked) void FUN_103a8ec0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x71 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x83 __asm _emit 0xe6 __asm _emit 0x03 __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x51
  __asm _emit 0x08 __asm _emit 0x4a __asm _emit 0x23 __asm _emit 0xd0 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x04 __asm _emit 0x90 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xb0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a8ef0; body size 30 bytes.
#line 1 "ENTRY_103a8ef0"

__declspec(naked) void FUN_103a8ef0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x71 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x83 __asm _emit 0xe6 __asm _emit 0x01 __asm _emit 0xd1 __asm _emit 0xe8 __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x08
  __asm _emit 0x4a __asm _emit 0x23 __asm _emit 0xd0 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x04 __asm _emit 0x90 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xf0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a8f20; body size 31 bytes.
#line 1 "ENTRY_103a8f20"

__declspec(naked) void FUN_103a8f20(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x71 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x83 __asm _emit 0xe6 __asm _emit 0x03 __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x51
  __asm _emit 0x08 __asm _emit 0x4a __asm _emit 0x23 __asm _emit 0xd0 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x04 __asm _emit 0x90 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xb0 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103a8f50; body size 17 bytes.
#line 1 "ENTRY_103a8f50"

__declspec(naked) void FUN_103a8f50(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x48 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x04
  __asm _emit 0x00
}






// Reference entry 103a8f70; body size 20 bytes.
#line 1 "ENTRY_103a8f70"

__declspec(naked) void FUN_103a8f70(void)

{
  __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x16
  __asm call LAB_1003a59e
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103a9000; body size 28 bytes.
#line 1 "ENTRY_103a9000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a9000(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = (int)(param_1[1] + 1);
    return (int *)(param_1);
  }
  *param_1 = (int)(*param_1 + 4);
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 103a9030; body size 28 bytes.
#line 1 "ENTRY_103a9030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a9030(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = (int)(param_1[1] + 1);
    return (int *)(param_1);
  }
  *param_1 = (int)(*param_1 + 4);
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 103a9060; body size 6 bytes.
#line 1 "ENTRY_103a9060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9060(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 103a9070; body size 6 bytes.
#line 1 "ENTRY_103a9070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9070(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 103a9080; body size 6 bytes.
#line 1 "ENTRY_103a9080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9080(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 103a9090; body size 6 bytes.
#line 1 "ENTRY_103a9090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103a9090(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  return (int)(param_1);
}


// Reference entry 103a90a0; body size 27 bytes.
#line 1 "ENTRY_103a90a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a90a0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = (int)(param_1[1] + -1);
    return (int *)(param_1);
  }
  *param_1 = (int)(*param_1 + -4);
  param_1[1] = (int)(0x1f);
  return (int *)(param_1);
}


// Reference entry 103a90d0; body size 27 bytes.
#line 1 "ENTRY_103a90d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_103a90d0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = (int)(param_1[1] + -1);
    return (int *)(param_1);
  }
  *param_1 = (int)(*param_1 + -4);
  param_1[1] = (int)(0x1f);
  return (int *)(param_1);
}


// Reference entry 103a9100; body size 23 bytes.
#line 1 "ENTRY_103a9100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103a9100(int *param_2)
{
  int *param_1 = (int *)this;
  return (int)(((*param_1 - *param_2 >> 2) * 0x20 - param_2[1]) + param_1[1]);
}


// Reference entry 103a9220; body size 18 bytes.
#line 1 "ENTRY_103a9220"

__declspec(naked) void FUN_103a9220(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x81 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc2
  __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103a92d0; body size 14 bytes.
#line 1 "ENTRY_103a92d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103a92d0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (int *)(param_1);
}


// Reference entry 103a92f0; body size 14 bytes.
#line 1 "ENTRY_103a92f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103a92f0(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 4);
  return (int *)(param_1);
}


// Reference entry 103a9310; body size 15 bytes.
#line 1 "ENTRY_103a9310"

__declspec(naked) void FUN_103a9310(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xf7 __asm _emit 0xd8 __asm _emit 0x89 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04
  __asm jmp LAB_100373bc
}






// Reference entry 103a9330; body size 21 bytes.
#line 1 "ENTRY_103a9330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_103a9330(int param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103a9240<>(-param_2);
  return (undefined4)(param_1);
}


// Reference entry 103aa020; body size 26 bytes.
#line 1 "ENTRY_103aa020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103aa020(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + ((uint)(param_1[1] + param_2) >> 5) * 4);
  param_1[1] = (int)(param_1[1] + param_2 & 0x1f);
  return;
}


// Reference entry 103aa040; body size 31 bytes.
#line 1 "ENTRY_103aa040"

__declspec(naked) void FUN_103aa040(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x1c __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103aa090; body size 14 bytes.
#line 1 "ENTRY_103aa090"

__declspec(naked) void FUN_103aa090(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x04 __asm _emit 0x49 __asm _emit 0x92 __asm _emit 0x24 __asm _emit 0x09
  __asm je LAB_1000d4ae
  __asm _emit 0xc3
}






// Reference entry 103aa0b0; body size 3 bytes.
#line 1 "ENTRY_103aa0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103aa0b0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103aa0c0; body size 23 bytes.
#line 1 "ENTRY_103aa0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103aa0c0(int *param_1)

{
  if (param_1[1] != 0) {
    param_1[1] = (int)(param_1[1] + -1);
    return;
  }
  *param_1 = (int)(*param_1 + -4);
  param_1[1] = (int)(0x1f);
  return;
}


// Reference entry 103aa640; body size 3 bytes.
#line 1 "ENTRY_103aa640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa650; body size 3 bytes.
#line 1 "ENTRY_103aa650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa660; body size 3 bytes.
#line 1 "ENTRY_103aa660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa670; body size 3 bytes.
#line 1 "ENTRY_103aa670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa680; body size 3 bytes.
#line 1 "ENTRY_103aa680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa690; body size 3 bytes.
#line 1 "ENTRY_103aa690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6a0; body size 3 bytes.
#line 1 "ENTRY_103aa6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6b0; body size 3 bytes.
#line 1 "ENTRY_103aa6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6c0; body size 3 bytes.
#line 1 "ENTRY_103aa6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6d0; body size 3 bytes.
#line 1 "ENTRY_103aa6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6e0; body size 3 bytes.
#line 1 "ENTRY_103aa6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa6f0; body size 3 bytes.
#line 1 "ENTRY_103aa6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa6f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa700; body size 3 bytes.
#line 1 "ENTRY_103aa700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa710; body size 3 bytes.
#line 1 "ENTRY_103aa710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa720; body size 3 bytes.
#line 1 "ENTRY_103aa720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa730; body size 3 bytes.
#line 1 "ENTRY_103aa730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa740; body size 3 bytes.
#line 1 "ENTRY_103aa740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa750; body size 3 bytes.
#line 1 "ENTRY_103aa750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa760; body size 3 bytes.
#line 1 "ENTRY_103aa760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa770; body size 15 bytes.
#line 1 "ENTRY_103aa770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_103aa770(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 103aa790; body size 16 bytes.
#line 1 "ENTRY_103aa790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_103aa790(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 2);
}


// Reference entry 103aa7b0; body size 15 bytes.
#line 1 "ENTRY_103aa7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_103aa7b0(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 1);
}


// Reference entry 103aa7d0; body size 16 bytes.
#line 1 "ENTRY_103aa7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_103aa7d0(uint param_2)
{
  int param_1 = (int )this;
  return (uint)(*(int *)(param_1 + 8) - 1U & param_2 >> 2);
}


// Reference entry 103aa7f0; body size 3 bytes.
#line 1 "ENTRY_103aa7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa7f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103aa800; body size 3 bytes.
#line 1 "ENTRY_103aa800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103aa800(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103aac10; body size 24 bytes.
#line 1 "ENTRY_103aac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103aac10(int *param_1)

{
  if ((uint)param_1[1] < 0x1f) {
    param_1[1] = (int)(param_1[1] + 1);
    return;
  }
  *param_1 = (int)(*param_1 + 4);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 103ab3f0; body size 52 bytes.
#line 1 "ENTRY_103ab3f0"

__declspec(naked) void FUN_103ab3f0(void)

{
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x83 __asm _emit 0x79 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x76 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x2b __asm _emit 0x11 __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xc1 __asm _emit 0xfa
  __asm _emit 0x02 __asm _emit 0xc1 __asm _emit 0xe2 __asm _emit 0x05 __asm _emit 0x03 __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x52
  __asm call LAB_100373bc
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 103ab440; body size 4 bytes.
#line 1 "ENTRY_103ab440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab440(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 103ab450; body size 4 bytes.
#line 1 "ENTRY_103ab450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab450(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 103ab460; body size 4 bytes.
#line 1 "ENTRY_103ab460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab460(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 103ab470; body size 4 bytes.
#line 1 "ENTRY_103ab470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab470(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 103ab480; body size 11 bytes.
#line 1 "ENTRY_103ab480"

__declspec(naked) void FUN_103ab480(void)

{
  __asm _emit 0x8b __asm _emit 0x49 __asm _emit 0x04 __asm _emit 0xb8 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xd3 __asm _emit 0xe0 __asm _emit 0xc3
}






// Reference entry 103ab490; body size 30 bytes.
#line 1 "ENTRY_103ab490"

__declspec(naked) void FUN_103ab490(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf5 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 103ab4f0; body size 4 bytes.
#line 1 "ENTRY_103ab4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab4f0(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 103ab500; body size 4 bytes.
#line 1 "ENTRY_103ab500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab500(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 103ab510; body size 4 bytes.
#line 1 "ENTRY_103ab510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab510(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 103ab520; body size 4 bytes.
#line 1 "ENTRY_103ab520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab520(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 103ab530; body size 4 bytes.
#line 1 "ENTRY_103ab530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab530(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 103ab540; body size 4 bytes.
#line 1 "ENTRY_103ab540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ab540(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 103ab550; body size 11 bytes.
#line 1 "ENTRY_103ab550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_103ab550(int param_1)

{
  return (uint)(param_1 + 0x1fU >> 5);
}


// Reference entry 103ab560; body size 3 bytes.
#line 1 "ENTRY_103ab560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab560(void)

{
  return;
}


// Reference entry 103ab570; body size 3 bytes.
#line 1 "ENTRY_103ab570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab570(void)

{
  return;
}


// Reference entry 103ab580; body size 3 bytes.
#line 1 "ENTRY_103ab580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ab580(void)

{
  return;
}


// Reference entry 103ab590; body size 3 bytes.
#line 1 "ENTRY_103ab590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103ab590(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103ab5a0; body size 11 bytes.
#line 1 "ENTRY_103ab5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ab5a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103ab5b0; body size 6 bytes.
#line 1 "ENTRY_103ab5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103ab5b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 103ab9c0; body size 13 bytes.
#line 1 "ENTRY_103ab9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103ab9c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103ab9d0; body size 18 bytes.
#line 1 "ENTRY_103ab9d0"

__declspec(naked) void FUN_103ab9d0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x10 __asm _emit 0x03 __asm _emit 0x51 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103ab9f0; body size 18 bytes.
#line 1 "ENTRY_103ab9f0"

__declspec(naked) void FUN_103ab9f0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x10 __asm _emit 0x03 __asm _emit 0x51 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103aba10; body size 3 bytes.
#line 1 "ENTRY_103aba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103aba10(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103abd90; body size 87 bytes.
#line 1 "ENTRY_103abd90"

__declspec(naked) void FUN_103abd90(void)

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






// Reference entry 103abe00; body size 87 bytes.
#line 1 "ENTRY_103abe00"

__declspec(naked) void FUN_103abe00(void)

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






// Reference entry 103abe70; body size 97 bytes.
#line 1 "ENTRY_103abe70"

__declspec(naked) void FUN_103abe70(void)

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






// Reference entry 103abef0; body size 87 bytes.
#line 1 "ENTRY_103abef0"

__declspec(naked) void FUN_103abef0(void)

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






// Reference entry 103abf60; body size 87 bytes.
#line 1 "ENTRY_103abf60"

__declspec(naked) void FUN_103abf60(void)

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






// Reference entry 103ac050; body size 7 bytes.
#line 1 "ENTRY_103ac050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103ac050(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -4);
}


// Reference entry 103ac0f0; body size 11 bytes.
#line 1 "ENTRY_103ac0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103ac0f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103ac100; body size 18 bytes.
#line 1 "ENTRY_103ac100"

__declspec(naked) void FUN_103ac100(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x09 __asm _emit 0x89 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103b6820; body size 3 bytes.
#line 1 "ENTRY_103b6820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b6820(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103b6830; body size 63 bytes.
#line 1 "ENTRY_103b6830"

__declspec(naked) void FUN_103b6830(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83
  __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 103b6880; body size 58 bytes.
#line 1 "ENTRY_103b6880"

__declspec(naked) void FUN_103b6880(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x81
  __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83
  __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 103b68d0; body size 61 bytes.
#line 1 "ENTRY_103b68d0"

__declspec(naked) void FUN_103b68d0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81
  __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83
  __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 103b6920; body size 61 bytes.
#line 1 "ENTRY_103b6920"

__declspec(naked) void FUN_103b6920(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81
  __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83
  __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 103b6970; body size 66 bytes.
#line 1 "ENTRY_103b6970"

__declspec(naked) void FUN_103b6970(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x02 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83
  __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 103b69d0; body size 61 bytes.
#line 1 "ENTRY_103b69d0"

__declspec(naked) void FUN_103b69d0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81
  __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83
  __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 103b6a20; body size 9 bytes.
#line 1 "ENTRY_103b6a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b6a20(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103b6a30; body size 9 bytes.
#line 1 "ENTRY_103b6a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b6a30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103b6ab0; body size 8 bytes.
#line 1 "ENTRY_103b6ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ab0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b6ac0; body size 8 bytes.
#line 1 "ENTRY_103b6ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ac0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b6ad0; body size 8 bytes.
#line 1 "ENTRY_103b6ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ad0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b6ae0; body size 8 bytes.
#line 1 "ENTRY_103b6ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b6ae0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0xc) == 0);
}


// Reference entry 103b6af0; body size 11 bytes.
#line 1 "ENTRY_103b6af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103b6af0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103b6b00; body size 12 bytes.
#line 1 "ENTRY_103b6b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103b6b00(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103b6de0; body size 51 bytes.
#line 1 "ENTRY_103b6de0"

__declspec(naked) void FUN_103b6de0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x53 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xd9 __asm _emit 0x3b __asm _emit 0xf8 __asm _emit 0x74 __asm _emit 0x18
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x73 __asm _emit 0x04 __asm _emit 0x2b __asm _emit 0xf0 __asm _emit 0x56 __asm _emit 0x50 __asm _emit 0x57
  __asm call LAB_1148cdf3
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x37 __asm _emit 0x89 __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x38
  __asm _emit 0x5f __asm _emit 0x5b __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 103b78b0; body size 7 bytes.
#line 1 "ENTRY_103b78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103b78b0(int param_1)

{
  return (int)(param_1 + 0x8d);
}


// Reference entry 103b8650; body size 4 bytes.
#line 1 "ENTRY_103b8650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103b8650(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x70));
}


// Reference entry 103b8670; body size 30 bytes.
#line 1 "ENTRY_103b8670"

__declspec(naked) void FUN_103b8670(void)

{
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0xff __asm _emit 0x74
  __asm _emit 0x24 __asm _emit 0x14
  __asm call LAB_100724cb
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 103b8b60; body size 6 bytes.
#line 1 "ENTRY_103b8b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103b8b60(void)

{
  return (char *)("SCIBrowseStackManager");
}


// Reference entry 103b8b70; body size 6 bytes.
#line 1 "ENTRY_103b8b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103b8b70(void)

{
  return (char *)("SCIStackedItemImpl");
}


// Reference entry 103b8d80; body size 8 bytes.
#line 1 "ENTRY_103b8d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b8d80(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 103b9190; body size 10 bytes.
#line 1 "ENTRY_103b9190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b9190(uint *param_1)

{
  return (bool)((((uint)((uint3)(*param_1 >> 0x11)) << 8 | (uint)(~(byte)(*param_1 >> 9)))) & 1);
}


// Reference entry 103b91b0; body size 40 bytes.
#line 1 "ENTRY_103b91b0"

__declspec(naked) void FUN_103b91b0(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04
  __asm push offset LAB_11883660
  __asm call LAB_1002b855
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x13 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04
  __asm push offset LAB_11878578
  __asm call LAB_1002b855
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x01 __asm _emit 0xc3 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 103b93d0; body size 8 bytes.
#line 1 "ENTRY_103b93d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103b93d0(uint *param_1)

{
  return (bool)((*param_1 >> 10) & 1);
}


// Reference entry 103b9420; body size 6 bytes.
#line 1 "ENTRY_103b9420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9420(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 103b9430; body size 6 bytes.
#line 1 "ENTRY_103b9430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9430(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 103b9440; body size 6 bytes.
#line 1 "ENTRY_103b9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9440(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 103b9450; body size 6 bytes.
#line 1 "ENTRY_103b9450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9450(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 103b9460; body size 6 bytes.
#line 1 "ENTRY_103b9460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9460(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 103b9470; body size 6 bytes.
#line 1 "ENTRY_103b9470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103b9470(void)

{
  return (undefined4)(0x7fffffff);
}


// Reference entry 103bbe50; body size 5 bytes.
#line 1 "ENTRY_103bbe50"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bbe50(int param_1)

{ __asm jmp FUN_1002ebcc }


// Reference entry 103bbf00; body size 5 bytes.
#line 1 "ENTRY_103bbf00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bbf00(int param_1)

{ __asm jmp FUN_1002ebcc }


// Reference entry 103bc700; body size 3 bytes.
#line 1 "ENTRY_103bc700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc700(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103bc710; body size 3 bytes.
#line 1 "ENTRY_103bc710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc710(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103bc720; body size 3 bytes.
#line 1 "ENTRY_103bc720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103bc730; body size 3 bytes.
#line 1 "ENTRY_103bc730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bc730(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103bcf10; body size 73 bytes.
#line 1 "ENTRY_103bcf10"

__declspec(naked) void FUN_103bcf10(void)

{
  __asm _emit 0x8b __asm _emit 0x51 __asm _emit 0x0c __asm _emit 0x83 __asm _emit 0xec __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x31 __asm _emit 0x85 __asm _emit 0xd2 __asm _emit 0x79 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xf7
  __asm _emit 0xd8 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xf7 __asm _emit 0xd0 __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x05 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xf0 __asm _emit 0xeb __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xc1 __asm _emit 0xe8 __asm _emit 0x05 __asm _emit 0x8d __asm _emit 0x34 __asm _emit 0x86 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24
  __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xe2 __asm _emit 0x1f __asm _emit 0x8d __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x6a __asm _emit 0x01 __asm _emit 0x52 __asm _emit 0x56 __asm _emit 0x50
  __asm call LAB_100724cb
  __asm _emit 0x5e __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103bd3a0; body size 28 bytes.
#line 1 "ENTRY_103bd3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd3a0(undefined4 *param_1)

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


// Reference entry 103bd3d0; body size 28 bytes.
#line 1 "ENTRY_103bd3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd3d0(undefined4 *param_1)

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


// Reference entry 103bd400; body size 28 bytes.
#line 1 "ENTRY_103bd400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd400(undefined4 *param_1)

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


// Reference entry 103bd430; body size 28 bytes.
#line 1 "ENTRY_103bd430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd430(undefined4 *param_1)

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


// Reference entry 103bd460; body size 28 bytes.
#line 1 "ENTRY_103bd460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd460(undefined4 *param_1)

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


// Reference entry 103bd490; body size 28 bytes.
#line 1 "ENTRY_103bd490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd490(undefined4 *param_1)

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


// Reference entry 103bd4c0; body size 20 bytes.
#line 1 "ENTRY_103bd4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103bd4c0(int *param_1)

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


// Reference entry 103bdd40; body size 4 bytes.
#line 1 "ENTRY_103bdd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd40(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd50; body size 4 bytes.
#line 1 "ENTRY_103bdd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd60; body size 4 bytes.
#line 1 "ENTRY_103bdd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd70; body size 4 bytes.
#line 1 "ENTRY_103bdd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd80; body size 4 bytes.
#line 1 "ENTRY_103bdd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdd90; body size 4 bytes.
#line 1 "ENTRY_103bdd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdd90(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 103bdda0; body size 4 bytes.
#line 1 "ENTRY_103bdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103bdda0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc));
}


// Reference entry 103bdfb0; body size 21 bytes.
#line 1 "ENTRY_103bdfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103bdfb0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_24_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 103be2f0; body size 21 bytes.
#line 1 "ENTRY_103be2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103be2f0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_25_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 103be310; body size 39 bytes.
#line 1 "ENTRY_103be310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103be310(undefined4 param_2,undefined4 *param_3)
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


// Reference entry 103be340; body size 5 bytes.
#line 1 "ENTRY_103be340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103be340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103be4f0; body size 6 bytes.
#line 1 "ENTRY_103be4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103be4f0(void)

{
  return (char *)("SCIEnumerator");
}


// Reference entry 103be500; body size 27 bytes.
#line 1 "ENTRY_103be500"

__declspec(naked) void FUN_103be500(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_1189c86c
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103be740; body size 9 bytes.
#line 1 "ENTRY_103be740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103be740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEnumerator);
  return (undefined4 *)(param_1);
}


// Reference entry 103be870; body size 7 bytes.
#line 1 "ENTRY_103be870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103be870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103be880; body size 12 bytes.
#line 1 "ENTRY_103be880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103be880(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 103be890; body size 7 bytes.
#line 1 "ENTRY_103be890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103be890(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 103be8a0; body size 3 bytes.
#line 1 "ENTRY_103be8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103be8a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103be9d0; body size 13 bytes.
#line 1 "ENTRY_103be9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103be9d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 103bec20; body size 13 bytes.
#line 1 "ENTRY_103bec20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_103bec20(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 103bf210; body size 6 bytes.
#line 1 "ENTRY_103bf210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103bf210(void)

{
  return (char *)("SCIEnumerator");
}


// Reference entry 103bf380; body size 10 bytes.
#line 1 "ENTRY_103bf380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103bf380(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 103bf390; body size 9 bytes.
#line 1 "ENTRY_103bf390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103bf390(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 103bf3d0; body size 41 bytes.
#line 1 "ENTRY_103bf3d0"

__declspec(naked) void FUN_103bf3d0(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x40
  __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x14 __asm _emit 0xd0 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0xc1 __asm _emit 0xf8 __asm _emit 0x03 __asm _emit 0x50 __asm _emit 0x51 __asm _emit 0x52
  __asm call LAB_1004acdc
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x10 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103bf410; body size 18 bytes.
#line 1 "ENTRY_103bf410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103bf410(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf430; body size 22 bytes.
#line 1 "ENTRY_103bf430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103bf430(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf450; body size 22 bytes.
#line 1 "ENTRY_103bf450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103bf450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf470; body size 18 bytes.
#line 1 "ENTRY_103bf470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103bf470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf5c0; body size 63 bytes.
#line 1 "ENTRY_103bf5c0"

__declspec(naked) void FUN_103bf5c0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10036c23
  __asm _emit 0x0f __asm _emit 0x57 __asm _emit 0xc0 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x18
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 103bf610; body size 22 bytes.
#line 1 "ENTRY_103bf610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103bf610(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103bf670; body size 65 bytes.
#line 1 "ENTRY_103bf670"

__declspec(naked) void FUN_103bf670(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0x0f __asm _emit 0x57 __asm _emit 0xc0 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x46 __asm _emit 0x18 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x18
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 103bf6d0; body size 78 bytes.
#line 1 "ENTRY_103bf6d0"

__declspec(naked) void FUN_103bf6d0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b
  __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103bf740; body size 3 bytes.
#line 1 "ENTRY_103bf740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf740(void)

{
  return;
}


// Reference entry 103bf750; body size 25 bytes.
#line 1 "ENTRY_103bf750"

__declspec(naked) void FUN_103bf750(void)

{
  __asm _emit 0x6a __asm _emit 0x38
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 103bf790; body size 13 bytes.
#line 1 "ENTRY_103bf790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf790(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103bf7a0; body size 13 bytes.
#line 1 "ENTRY_103bf7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf7a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103bf7b0; body size 3 bytes.
#line 1 "ENTRY_103bf7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bf7b0(void)

{
  return;
}


// Reference entry 103bfa40; body size 15 bytes.
#line 1 "ENTRY_103bfa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bfa40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x38);
  return;
}


// Reference entry 103bfae0; body size 29 bytes.
#line 1 "ENTRY_103bfae0"

__declspec(naked) void FUN_103bfae0(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x24 __asm _emit 0x49 __asm _emit 0x92 __asm _emit 0x04
  __asm ja LAB_10070f3b
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc1 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x03 __asm _emit 0xc3
}






// Reference entry 103bfb10; body size 5 bytes.
#line 1 "ENTRY_103bfb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfb10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfb20; body size 5 bytes.
#line 1 "ENTRY_103bfb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfb30; body size 37 bytes.
#line 1 "ENTRY_103bfb30"

__declspec(naked) void FUN_103bfb30(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_10070fbd
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103bfd00; body size 5 bytes.
#line 1 "ENTRY_103bfd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfd20; body size 5 bytes.
#line 1 "ENTRY_103bfd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfd20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfd30; body size 5 bytes.
#line 1 "ENTRY_103bfd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103bfd30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103bfd40; body size 93 bytes.
#line 1 "ENTRY_103bfd40"

__declspec(naked) void FUN_103bfd40(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x7e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b
  __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x5f
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103bfdc0; body size 130 bytes.
#line 1 "ENTRY_103bfdc0"

__declspec(naked) void FUN_103bfdc0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x7e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x22 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b
  __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_11883b7c
  __asm _emit 0x6a __asm _emit 0x01
  __asm push offset LAB_11881488
  __asm call LAB_100238df
  __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103bfe70; body size 130 bytes.
#line 1 "ENTRY_103bfe70"

__declspec(naked) void FUN_103bfe70(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x08 __asm _emit 0x85
  __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x13 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x7e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x22 __asm _emit 0x8b __asm _emit 0x07 __asm _emit 0x8b
  __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x18 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_11883b7c
  __asm _emit 0x6a __asm _emit 0x01
  __asm push offset LAB_11881488
  __asm call LAB_100238df
  __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103bff20; body size 76 bytes.
#line 1 "ENTRY_103bff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103bff20(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x18) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x1c) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x20) = (undefined4)(0);
  *(undefined4*)(param_2 + 0x24) = (undefined4)(0);
  return;
}


// Reference entry 103bfff0; body size 86 bytes.
#line 1 "ENTRY_103bfff0"

__declspec(naked) void FUN_103bfff0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x33 __asm _emit 0xff __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x74 __asm _emit 0x43 __asm _emit 0x56
  __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x47 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x1d __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x52 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xeb __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x30 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75
  __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0xf2 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf4 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x75
  __asm _emit 0xbf __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc3
}






// Reference entry 103c0110; body size 15 bytes.
#line 1 "ENTRY_103c0110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0110(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103c0130; body size 15 bytes.
#line 1 "ENTRY_103c0130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0130(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103c0150; body size 5 bytes.
#line 1 "ENTRY_103c0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0160; body size 5 bytes.
#line 1 "ENTRY_103c0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0180; body size 5 bytes.
#line 1 "ENTRY_103c0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0190; body size 5 bytes.
#line 1 "ENTRY_103c0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c0190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c01b0; body size 5 bytes.
#line 1 "ENTRY_103c01b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c01b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c01c0; body size 5 bytes.
#line 1 "ENTRY_103c01c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103c01c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c01d0; body size 6 bytes.
#line 1 "ENTRY_103c01d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103c01d0(void)

{
  return (char *)("SCITokenManager");
}


// Reference entry 103c0220; body size 28 bytes.
#line 1 "ENTRY_103c0220"

__declspec(naked) void FUN_103c0220(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_118821c0
  __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103c0370; body size 27 bytes.
#line 1 "ENTRY_103c0370"

__declspec(naked) void FUN_103c0370(void)

{
  __asm _emit 0x51
  __asm mov dword ptr [ecx], offset LAB_1189ce44
  __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103c03a0; body size 95 bytes.
#line 1 "ENTRY_103c03a0"

__declspec(naked) void FUN_103c03a0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04
  __asm call LAB_1004e756
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x8b __asm _emit 0x10 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x14
  __asm _emit 0xff __asm _emit 0x52 __asm _emit 0x0c __asm _emit 0x50 __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_1189d0d8
  __asm _emit 0x8b __asm _emit 0xc6
  __asm mov dword ptr [esi + 8], offset LAB_1189d0fc
  __asm mov dword ptr [esi + 0x18], offset LAB_1189d13c
  __asm mov dword ptr [esi + 0x1c], offset LAB_1189d160
  __asm mov dword ptr [esi + 0x38], offset LAB_1189d170
  __asm mov dword ptr [esi + 0x44], offset LAB_1189d184
  __asm mov dword ptr [esi + 0x50], offset LAB_1189d194
  __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 103c06e0; body size 70 bytes.
#line 1 "ENTRY_103c06e0"

__declspec(naked) void FUN_103c06e0(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], offset LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_1189ce90
  __asm mov dword ptr [ecx + 0xc], offset LAB_1189cea0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103c0740; body size 70 bytes.
#line 1 "ENTRY_103c0740"

__declspec(naked) void FUN_103c0740(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], offset LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_1189ce6c
  __asm mov dword ptr [ecx + 0xc], offset LAB_1189ce7c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103c07a0; body size 16 bytes.
#line 1 "ENTRY_103c07a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c07a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c07c0; body size 16 bytes.
#line 1 "ENTRY_103c07c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c07c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0820; body size 32 bytes.
#line 1 "ENTRY_103c0820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103c0820(undefined4 *param_2)
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


// Reference entry 103c0850; body size 16 bytes.
#line 1 "ENTRY_103c0850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0850(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c08f0; body size 16 bytes.
#line 1 "ENTRY_103c08f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c08f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0910; body size 18 bytes.
#line 1 "ENTRY_103c0910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103c0910(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0930; body size 3 bytes.
#line 1 "ENTRY_103c0930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c0930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0940; body size 10 bytes.
#line 1 "ENTRY_103c0940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0940(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0950; body size 10 bytes.
#line 1 "ENTRY_103c0950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0950(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0960; body size 10 bytes.
#line 1 "ENTRY_103c0960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0960(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0a30; body size 11 bytes.
#line 1 "ENTRY_103c0a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103c0a30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0a40; body size 16 bytes.
#line 1 "ENTRY_103c0a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c0a40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103c0a60; body size 3 bytes.
#line 1 "ENTRY_103c0a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c0a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c0a70; body size 12 bytes.
#line 1 "ENTRY_103c0a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0a70(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0b00; body size 12 bytes.
#line 1 "ENTRY_103c0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c0b00(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 103c0b90; body size 52 bytes.
#line 1 "ENTRY_103c0b90"

__declspec(naked) void FUN_103c0b90(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x38 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103c0e30; body size 57 bytes.
#line 1 "ENTRY_103c0e30"

__declspec(naked) void FUN_103c0e30(void)

{
  __asm _emit 0x51 __asm _emit 0x8a __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_1189cc1c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x88 __asm _emit 0x41 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x01 __asm _emit 0x00
  __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103c1270; body size 42 bytes.
#line 1 "ENTRY_103c1270"

__declspec(naked) void FUN_103c1270(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_1189cc48
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103c12b0; body size 9 bytes.
#line 1 "ENTRY_103c12b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103c12b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITokenManager);
  return (undefined4 *)(param_1);
}


// Reference entry 103c1d90; body size 36 bytes.
#line 1 "ENTRY_103c1d90"

__declspec(naked) void FUN_103c1d90(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103c1dc0; body size 11 bytes.
#line 1 "ENTRY_103c1dc0"

/* WARNING: Removing unreachable block_103c1dc0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c1dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RFetchTokenAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 103c1df0; body size 53 bytes.
#line 1 "ENTRY_103c1df0"

__declspec(naked) void FUN_103c1df0(void)

{
  __asm mov dword ptr [ecx], offset LAB_1189d0d8
  __asm mov dword ptr [ecx + 8], offset LAB_1189d0fc
  __asm mov dword ptr [ecx + 0x18], offset LAB_1189d13c
  __asm mov dword ptr [ecx + 0x1c], offset LAB_1189d160
  __asm mov dword ptr [ecx + 0x38], offset LAB_1189d170
  __asm mov dword ptr [ecx + 0x44], offset LAB_1189d184
  __asm mov dword ptr [ecx + 0x50], offset LAB_1189d194
  __asm jmp LAB_100709e6
}






// Reference entry 103c2d90; body size 19 bytes.
#line 1 "ENTRY_103c2d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c2d90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103c2db0; body size 7 bytes.
#line 1 "ENTRY_103c2db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103c2db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103c2df0; body size 18 bytes.
#line 1 "ENTRY_103c2df0"

__declspec(naked) void FUN_103c2df0(void)

{
  __asm mov dword ptr [ecx], offset LAB_1189cfd4
  __asm mov dword ptr [ecx + 8], offset LAB_1189d01c
  __asm jmp LAB_100649fc
}






// Reference entry 103c3400; body size 65 bytes.
#line 1 "ENTRY_103c3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_103c3400(int *param_2)
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


// Reference entry 103c34c0; body size 14 bytes.
#line 1 "ENTRY_103c34c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103c34c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103c34e0; body size 14 bytes.
#line 1 "ENTRY_103c34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103c34e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103c3650; body size 4 bytes.
#line 1 "ENTRY_103c3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c3650(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c3660; body size 3 bytes.
#line 1 "ENTRY_103c3660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c3660(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103c3670; body size 8 bytes.
#line 1 "ENTRY_103c3670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c3670(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103c3680; body size 8 bytes.
#line 1 "ENTRY_103c3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c3680(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 103c3690; body size 4 bytes.
#line 1 "ENTRY_103c3690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c3690(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36a0; body size 4 bytes.
#line 1 "ENTRY_103c36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36b0; body size 4 bytes.
#line 1 "ENTRY_103c36b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36c0; body size 4 bytes.
#line 1 "ENTRY_103c36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c36d0; body size 3 bytes.
#line 1 "ENTRY_103c36d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103c36e0; body size 3 bytes.
#line 1 "ENTRY_103c36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c36e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103c3700; body size 20 bytes.
#line 1 "ENTRY_103c3700"

__declspec(naked) void FUN_103c3700(void)

{
  __asm _emit 0x8b __asm _emit 0x11 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x16
  __asm call LAB_10024014
  __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103c41f0; body size 31 bytes.
#line 1 "ENTRY_103c41f0"

__declspec(naked) void FUN_103c41f0(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x38 __asm _emit 0x8b __asm _emit 0xf1
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103c4240; body size 14 bytes.
#line 1 "ENTRY_103c4240"

__declspec(naked) void FUN_103c4240(void)

{
  __asm _emit 0x81 __asm _emit 0x79 __asm _emit 0x04 __asm _emit 0x24 __asm _emit 0x49 __asm _emit 0x92 __asm _emit 0x04
  __asm je LAB_1000d4ae
  __asm _emit 0xc3
}






// Reference entry 103c42c0; body size 8 bytes.
#line 1 "ENTRY_103c42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c42c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103c42d0; body size 8 bytes.
#line 1 "ENTRY_103c42d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c42d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103c42e0; body size 8 bytes.
#line 1 "ENTRY_103c42e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c42e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 103c4820; body size 3 bytes.
#line 1 "ENTRY_103c4820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4830; body size 3 bytes.
#line 1 "ENTRY_103c4830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4840; body size 3 bytes.
#line 1 "ENTRY_103c4840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4850; body size 3 bytes.
#line 1 "ENTRY_103c4850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4860; body size 3 bytes.
#line 1 "ENTRY_103c4860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4870; body size 3 bytes.
#line 1 "ENTRY_103c4870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4880; body size 3 bytes.
#line 1 "ENTRY_103c4880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103c4890; body size 4 bytes.
#line 1 "ENTRY_103c4890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4890(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103c48a0; body size 4 bytes.
#line 1 "ENTRY_103c48a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c48a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103c48b0; body size 4 bytes.
#line 1 "ENTRY_103c48b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c48b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 103c4b50; body size 7 bytes.
#line 1 "ENTRY_103c4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c4b50(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103c4b60; body size 7 bytes.
#line 1 "ENTRY_103c4b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c4b60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103c4b70; body size 7 bytes.
#line 1 "ENTRY_103c4b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c4b70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 103c4bf0; body size 30 bytes.
#line 1 "ENTRY_103c4bf0"

__declspec(naked) void FUN_103c4bf0(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0e __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf5 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc3
}






// Reference entry 103c4c40; body size 3 bytes.
#line 1 "ENTRY_103c4c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103c4c40(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 103c4c50; body size 11 bytes.
#line 1 "ENTRY_103c4c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c4c50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 103c4c60; body size 26 bytes.
#line 1 "ENTRY_103c4c60"

__declspec(naked) void FUN_103c4c60(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103c4c80; body size 26 bytes.
#line 1 "ENTRY_103c4c80"

__declspec(naked) void FUN_103c4c80(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x8b __asm _emit 0x48 __asm _emit 0x24 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x08 __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x24 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103c4d10; body size 10 bytes.
#line 1 "ENTRY_103c4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103c4d10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103c4d20; body size 10 bytes.
#line 1 "ENTRY_103c4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103c4d20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103c4d30; body size 10 bytes.
#line 1 "ENTRY_103c4d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103c4d30(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 103c4de0; body size 13 bytes.
#line 1 "ENTRY_103c4de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103c4de0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 103c4df0; body size 11 bytes.
#line 1 "ENTRY_103c4df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_103c4df0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 103c6550; body size 97 bytes.
#line 1 "ENTRY_103c6550"

__declspec(naked) void FUN_103c6550(void)

{
  __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x24 __asm _emit 0x49 __asm _emit 0x92 __asm _emit 0x04 __asm _emit 0x77 __asm _emit 0x50 __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc1 __asm _emit 0xc1 __asm _emit 0xe0 __asm _emit 0x03 __asm _emit 0x3d __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x28 __asm _emit 0x8d
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






// Reference entry 103c7250; body size 59 bytes.
#line 1 "ENTRY_103c7250"

__declspec(naked) void FUN_103c7250(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04
  __asm mov edx, offset LAB_1186d2ee
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x52 __asm _emit 0x8d __asm _emit 0xb7 __asm _emit 0x18 __asm _emit 0x62
  __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_1189d0a0
  __asm _emit 0x56
  __asm call LAB_1003a1de
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10039a68
  __asm _emit 0x89 __asm _emit 0x87 __asm _emit 0x10 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103c72a0; body size 56 bytes.
#line 1 "ENTRY_103c72a0"

__declspec(naked) void FUN_103c72a0(void)

{
  __asm mov eax, dword ptr [LAB_121a1248]
  __asm mov edx, offset LAB_1186d2ee
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x52 __asm _emit 0x8d __asm _emit 0xb7 __asm _emit 0x18 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_1189d3fc
  __asm _emit 0x56
  __asm call LAB_1003a1de
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10039a68
  __asm _emit 0x89 __asm _emit 0x87 __asm _emit 0x10 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc3
}






// Reference entry 103c72f0; body size 63 bytes.
#line 1 "ENTRY_103c72f0"

__declspec(naked) void FUN_103c72f0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x08 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x03 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83
  __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc3
  __asm jmp dword ptr [LAB_122fc888]
}






// Reference entry 103c7340; body size 66 bytes.
#line 1 "ENTRY_103c7340"

__declspec(naked) void FUN_103c7340(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x2b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24
  __asm _emit 0x04 __asm _emit 0xc1 __asm _emit 0xe1 __asm _emit 0x03 __asm _emit 0x81 __asm _emit 0xf9 __asm _emit 0x00 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x72 __asm _emit 0x12 __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0xfc __asm _emit 0x83
  __asm _emit 0xc1 __asm _emit 0x23 __asm _emit 0x2b __asm _emit 0xc2 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0xfc __asm _emit 0x83 __asm _emit 0xf8 __asm _emit 0x1f __asm _emit 0x77 __asm _emit 0x0f __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x51 __asm _emit 0x50
  __asm call LAB_100131d8
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}






// Reference entry 103c73a0; body size 7 bytes.
#line 1 "ENTRY_103c73a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_103c73a0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x88));
}


// Reference entry 103c73b0; body size 10 bytes.
#line 1 "ENTRY_103c73b0"

__declspec(naked) void FUN_103c73b0(void)

{
  __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x8a __asm _emit 0x80 __asm _emit 0x88 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc3
}






// Reference entry 103c8170; body size 7 bytes.
#line 1 "ENTRY_103c8170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8170(int param_1)

{
  return (int)(param_1 + 0x6224);
}


// Reference entry 103c8180; body size 7 bytes.
#line 1 "ENTRY_103c8180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8180(int param_1)

{
  return (int)(param_1 + 0x6238);
}


// Reference entry 103c81b0; body size 23 bytes.
#line 1 "ENTRY_103c81b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103c81b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6684));
  return (SCStr *)(param_2);
}


// Reference entry 103c81d0; body size 7 bytes.
#line 1 "ENTRY_103c81d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c81d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x100));
}


// Reference entry 103c81e0; body size 7 bytes.
#line 1 "ENTRY_103c81e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c81e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6638));
}


// Reference entry 103c81f0; body size 7 bytes.
#line 1 "ENTRY_103c81f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c81f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6230));
}


// Reference entry 103c8200; body size 7 bytes.
#line 1 "ENTRY_103c8200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8200(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6278));
}


// Reference entry 103c8210; body size 7 bytes.
#line 1 "ENTRY_103c8210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8210(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x6680));
}


// Reference entry 103c8220; body size 10 bytes.
#line 1 "ENTRY_103c8220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8220(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
}


// Reference entry 103c8230; body size 10 bytes.
#line 1 "ENTRY_103c8230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8230(int param_1)

{
  return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x448c));
}


// Reference entry 103c8260; body size 4 bytes.
#line 1 "ENTRY_103c8260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8260(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c8270; body size 4 bytes.
#line 1 "ENTRY_103c8270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8270(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 103c8280; body size 7 bytes.
#line 1 "ENTRY_103c8280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8280(int param_1)

{
  return (int)(param_1 + 0x6630);
}


// Reference entry 103c8290; body size 23 bytes.
#line 1 "ENTRY_103c8290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103c8290(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6678));
  return (SCStr *)(param_2);
}


// Reference entry 103c8300; body size 7 bytes.
#line 1 "ENTRY_103c8300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8300(int param_1)

{
  return (int)(param_1 + 0x6634);
}


// Reference entry 103c8310; body size 7 bytes.
#line 1 "ENTRY_103c8310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8310(int param_1)

{
  return (int)(param_1 + 0x622c);
}


// Reference entry 103c8320; body size 23 bytes.
#line 1 "ENTRY_103c8320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103c8320(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6274));
  return (SCStr *)(param_2);
}


// Reference entry 103c8340; body size 23 bytes.
#line 1 "ENTRY_103c8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103c8340(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x667c));
  return (SCStr *)(param_2);
}


// Reference entry 103c8720; body size 4 bytes.
#line 1 "ENTRY_103c8720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8720(int param_1)

{
  return (int)(param_1 + 100);
}


// Reference entry 103c8730; body size 7 bytes.
#line 1 "ENTRY_103c8730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8730(int param_1)

{
  return (int)(param_1 + 0x662c);
}


// Reference entry 103c8740; body size 7 bytes.
#line 1 "ENTRY_103c8740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103c8740(int param_1)

{
  return (int)(param_1 + 0x6224);
}


// Reference entry 103c8750; body size 23 bytes.
#line 1 "ENTRY_103c8750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103c8750(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x626c));
  return (SCStr *)(param_2);
}


// Reference entry 103c8770; body size 23 bytes.
#line 1 "ENTRY_103c8770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103c8770(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 100));
  return (SCStr *)(param_2);
}


// Reference entry 103c8790; body size 23 bytes.
#line 1 "ENTRY_103c8790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_103c8790(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x6674));
  return (SCStr *)(param_2);
}


// Reference entry 103c8b40; body size 5 bytes.
#line 1 "ENTRY_103c8b40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103c8b40(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 103c9390; body size 6 bytes.
#line 1 "ENTRY_103c9390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_103c9390(void)

{
  return (char *)("SCITokenManager");
}


// Reference entry 103c93a0; body size 7 bytes.
#line 1 "ENTRY_103c93a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_103c93a0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 103ca170; body size 6 bytes.
#line 1 "ENTRY_103ca170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ca170(void)

{
  return (undefined4)(0x4924924);
}


// Reference entry 103ca180; body size 6 bytes.
#line 1 "ENTRY_103ca180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ca180(void)

{
  return (undefined4)(0x4924924);
}


// Reference entry 103ca9c0; body size 3 bytes.
#line 1 "ENTRY_103ca9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103ca9c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 103cb270; body size 28 bytes.
#line 1 "ENTRY_103cb270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb270(undefined4 *param_1)

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


// Reference entry 103cb2a0; body size 28 bytes.
#line 1 "ENTRY_103cb2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb2a0(undefined4 *param_1)

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


// Reference entry 103cb2d0; body size 28 bytes.
#line 1 "ENTRY_103cb2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb2d0(undefined4 *param_1)

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


// Reference entry 103cb300; body size 28 bytes.
#line 1 "ENTRY_103cb300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb300(undefined4 *param_1)

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


// Reference entry 103cb330; body size 28 bytes.
#line 1 "ENTRY_103cb330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cb330(undefined4 *param_1)

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


// Reference entry 103cbed0; body size 12 bytes.
#line 1 "ENTRY_103cbed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_103cbed0(undefined4 param_1)

{
  DAT_121195a8 = (int)(param_1);
  return;
}


// Reference entry 103cbee0; body size 59 bytes.
#line 1 "ENTRY_103cbee0"

__declspec(naked) void FUN_103cbee0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04
  __asm mov edx, offset LAB_1186d2ee
  __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x00 __asm _emit 0x85 __asm _emit 0xc0 __asm _emit 0x0f __asm _emit 0x45 __asm _emit 0xd0 __asm _emit 0x52 __asm _emit 0x8d __asm _emit 0xb7 __asm _emit 0x18 __asm _emit 0x62
  __asm _emit 0x00 __asm _emit 0x00
  __asm push offset LAB_1189d0a0
  __asm _emit 0x56
  __asm call LAB_1003a1de
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xce
  __asm call LAB_10039a68
  __asm _emit 0x89 __asm _emit 0x87 __asm _emit 0x10 __asm _emit 0x62 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103cc1e0; body size 9 bytes.
#line 1 "ENTRY_103cc1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103cc1e0(int param_1)

{
                    
                    
  ((SCVtbl_2_0*)((int *)(param_1 + 0x28)))->v();
  return;
}


// Reference entry 103cc5b0; body size 28 bytes.
#line 1 "ENTRY_103cc5b0"

__declspec(naked) void FUN_103cc5b0(void)

{
  __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x8b
  __asm _emit 0x40 __asm _emit 0x14 __asm _emit 0xff __asm _emit 0xd0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103cc600; body size 28 bytes.
#line 1 "ENTRY_103cc600"

__declspec(naked) void FUN_103cc600(void)

{
  __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x0d __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x72 __asm _emit 0x04 __asm _emit 0x8b
  __asm _emit 0x40 __asm _emit 0x18 __asm _emit 0xff __asm _emit 0xd0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103cc8d0; body size 51 bytes.
#line 1 "ENTRY_103cc8d0"

__declspec(naked) void FUN_103cc8d0(void)

{
  __asm _emit 0x56 __asm _emit 0x6a __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xf1
  __asm call dword ptr [LAB_122fca5c]
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x03 __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xd2 __asm _emit 0x00 __asm _emit 0x83 __asm _emit 0xc0 __asm _emit 0x78 __asm _emit 0x83 __asm _emit 0xd2 __asm _emit 0x00
  __asm _emit 0x39 __asm _emit 0x56 __asm _emit 0x54 __asm _emit 0x7c __asm _emit 0x0d __asm _emit 0x7f __asm _emit 0x05 __asm _emit 0x39 __asm _emit 0x46 __asm _emit 0x50 __asm _emit 0x76 __asm _emit 0x06 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0x5e __asm _emit 0xc2
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103cca10; body size 31 bytes.
#line 1 "ENTRY_103cca10"

__declspec(naked) void FUN_103cca10(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 103cca40; body size 18 bytes.
#line 1 "ENTRY_103cca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cca40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103cca60; body size 25 bytes.
#line 1 "ENTRY_103cca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cca60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103cca80; body size 22 bytes.
#line 1 "ENTRY_103cca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103cca80(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccaa0; body size 22 bytes.
#line 1 "ENTRY_103ccaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103ccaa0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccac0; body size 22 bytes.
#line 1 "ENTRY_103ccac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103ccac0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccae0; body size 18 bytes.
#line 1 "ENTRY_103ccae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccdb0; body size 31 bytes.
#line 1 "ENTRY_103ccdb0"

__declspec(naked) void FUN_103ccdb0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 103ccde0; body size 73 bytes.
#line 1 "ENTRY_103ccde0"

__declspec(naked) void FUN_103ccde0(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08
  __asm call LAB_10036c23
  __asm _emit 0x0f __asm _emit 0x57 __asm _emit 0xc0 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x0c __asm _emit 0x00
}






// Reference entry 103cce40; body size 22 bytes.
#line 1 "ENTRY_103cce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103cce40(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103cce60; body size 22 bytes.
#line 1 "ENTRY_103cce60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103cce60(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 103cce80; body size 18 bytes.
#line 1 "ENTRY_103cce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cce80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccea0; body size 18 bytes.
#line 1 "ENTRY_103ccea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccec0; body size 18 bytes.
#line 1 "ENTRY_103ccec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccee0; body size 18 bytes.
#line 1 "ENTRY_103ccee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccee0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ccfa0; body size 18 bytes.
#line 1 "ENTRY_103ccfa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103ccfa0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103cd200; body size 33 bytes.
#line 1 "ENTRY_103cd200"

__declspec(naked) void FUN_103cd200(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 103cd230; body size 33 bytes.
#line 1 "ENTRY_103cd230"

__declspec(naked) void FUN_103cd230(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 103cd260; body size 75 bytes.
#line 1 "ENTRY_103cd260"

__declspec(naked) void FUN_103cd260(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0x0f __asm _emit 0x57 __asm _emit 0xc0 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x0f __asm _emit 0x11 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x10 __asm _emit 0x00
}






// Reference entry 103cd2c0; body size 78 bytes.
#line 1 "ENTRY_103cd2c0"

__declspec(naked) void FUN_103cd2c0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x38 __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x85 __asm _emit 0xc9 __asm _emit 0x74 __asm _emit 0x12 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x3e __asm _emit 0x85 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x11 __asm _emit 0x8b
  __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x50 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x5f __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103cd330; body size 3 bytes.
#line 1 "ENTRY_103cd330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd330(void)

{
  return;
}


// Reference entry 103cd340; body size 25 bytes.
#line 1 "ENTRY_103cd340"

__declspec(naked) void FUN_103cd340(void)

{
  __asm _emit 0x6a __asm _emit 0x18
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0xc3
}






// Reference entry 103cd820; body size 13 bytes.
#line 1 "ENTRY_103cd820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd820(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103cd830; body size 13 bytes.
#line 1 "ENTRY_103cd830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd830(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103cd840; body size 13 bytes.
#line 1 "ENTRY_103cd840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cd840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 103cd8e0; body size 113 bytes.
#line 1 "ENTRY_103cd8e0"

__declspec(naked) void FUN_103cd8e0(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0xff __asm _emit 0x37
  __asm _emit 0xff __asm _emit 0x70 __asm _emit 0x04
  __asm call LAB_10068fca
  __asm _emit 0x8b __asm _emit 0x0f __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x04
  __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x37 __asm _emit 0x8b __asm _emit 0x0a __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf4 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x17 __asm _emit 0x8b __asm _emit 0x4a
  __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80
  __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf5 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x8b
  __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103cd970; body size 113 bytes.
#line 1 "ENTRY_103cd970"

__declspec(naked) void FUN_103cd970(void)

{
  __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x8b __asm _emit 0x06 __asm _emit 0xff __asm _emit 0x37
  __asm _emit 0xff __asm _emit 0x70 __asm _emit 0x04
  __asm call LAB_10031926
  __asm _emit 0x8b __asm _emit 0x0f __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x56 __asm _emit 0x04
  __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x37 __asm _emit 0x8b __asm _emit 0x0a __asm _emit 0x80 __asm _emit 0x79 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x01
  __asm _emit 0x8b __asm _emit 0xd1 __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf4 __asm _emit 0x89 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x17 __asm _emit 0x8b __asm _emit 0x4a
  __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc8 __asm _emit 0x8b __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x80
  __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf5 __asm _emit 0x5f __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x08 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x8b
  __asm _emit 0x07 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103ce4d0; body size 83 bytes.
#line 1 "ENTRY_103ce4d0"

__declspec(naked) void FUN_103ce4d0(void)

{
  __asm _emit 0x8b __asm _emit 0x01 __asm _emit 0x56 __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x70 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x37 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x2f __asm _emit 0x53 __asm _emit 0x8b __asm _emit 0x5c
  __asm _emit 0x24 __asm _emit 0x14 __asm _emit 0x53 __asm _emit 0x8d __asm _emit 0x4e __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x37
  __asm call LAB_10070fbd
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x74 __asm _emit 0x07 __asm _emit 0x8b __asm _emit 0x76 __asm _emit 0x08 __asm _emit 0x33 __asm _emit 0xc0 __asm _emit 0xeb __asm _emit 0x0a __asm _emit 0x89 __asm _emit 0x77 __asm _emit 0x08 __asm _emit 0xb8 __asm _emit 0x01
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0x36 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xd7 __asm _emit 0x5b __asm _emit 0x8b
  __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103ce540; body size 5 bytes.
#line 1 "ENTRY_103ce540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ce550; body size 5 bytes.
#line 1 "ENTRY_103ce550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ce560; body size 5 bytes.
#line 1 "ENTRY_103ce560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ce560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ce570; body size 37 bytes.
#line 1 "ENTRY_103ce570"

__declspec(naked) void FUN_103ce570(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_10070fbd
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103ce5a0; body size 37 bytes.
#line 1 "ENTRY_103ce5a0"

__declspec(naked) void FUN_103ce5a0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x78 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x83 __asm _emit 0xc0
  __asm _emit 0x10 __asm _emit 0x50
  __asm call LAB_10070fbd
  __asm _emit 0x84 __asm _emit 0xc0 __asm _emit 0x75 __asm _emit 0x05 __asm _emit 0xb0 __asm _emit 0x01 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x32 __asm _emit 0xc0 __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103ce5d0; body size 3 bytes.
#line 1 "ENTRY_103ce5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ce5d0(void)

{
  return;
}


// Reference entry 103ce5e0; body size 3 bytes.
#line 1 "ENTRY_103ce5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ce5e0(void)

{
  return;
}


// Reference entry 103ce5f0; body size 19 bytes.
#line 1 "ENTRY_103ce5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ce5f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 103cea60; body size 5 bytes.
#line 1 "ENTRY_103cea60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cea70; body size 5 bytes.
#line 1 "ENTRY_103cea70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cea80; body size 5 bytes.
#line 1 "ENTRY_103cea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cea90; body size 5 bytes.
#line 1 "ENTRY_103cea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cea90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ceaa0; body size 5 bytes.
#line 1 "ENTRY_103ceaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceaa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ceab0; body size 5 bytes.
#line 1 "ENTRY_103ceab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ceac0; body size 5 bytes.
#line 1 "ENTRY_103ceac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cead0; body size 27 bytes.
#line 1 "ENTRY_103cead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cead0(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  *(undefined4*)(param_2 + 4) = (undefined4)(*(undefined4 *)(param_3 + 4));
  return;
}


// Reference entry 103ceb00; body size 27 bytes.
#line 1 "ENTRY_103ceb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ceb00(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 103ceb30; body size 27 bytes.
#line 1 "ENTRY_103ceb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103ceb30(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 103cec00; body size 83 bytes.
#line 1 "ENTRY_103cec00"

__declspec(naked) void FUN_103cec00(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0xce __asm _emit 0xff __asm _emit 0x30
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x5e
  __asm _emit 0xc3
}






// Reference entry 103cece0; body size 86 bytes.
#line 1 "ENTRY_103cece0"

__declspec(naked) void FUN_103cece0(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0x4c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x57 __asm _emit 0x33 __asm _emit 0xff __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x74 __asm _emit 0x43 __asm _emit 0x56
  __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x08 __asm _emit 0x47 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0x1d __asm _emit 0x8b __asm _emit 0x50 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x75 __asm _emit 0x10 __asm _emit 0x3b __asm _emit 0x42 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x0b __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x52 __asm _emit 0x04 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d
  __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf0 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0xeb __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc2 __asm _emit 0x8b __asm _emit 0x30 __asm _emit 0x80 __asm _emit 0x7e __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x75
  __asm _emit 0x0c __asm _emit 0x8b __asm _emit 0x16 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x8b __asm _emit 0xf2 __asm _emit 0x80 __asm _emit 0x7a __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x74 __asm _emit 0xf4 __asm _emit 0x3b __asm _emit 0xc1 __asm _emit 0x75
  __asm _emit 0xbf __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc3
}






// Reference entry 103ced50; body size 15 bytes.
#line 1 "ENTRY_103ced50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ced50(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103ced70; body size 15 bytes.
#line 1 "ENTRY_103ced70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ced70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 103ced90; body size 5 bytes.
#line 1 "ENTRY_103ced90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ced90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103ceda0; body size 5 bytes.
#line 1 "ENTRY_103ceda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103ceda0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cedb0; body size 5 bytes.
#line 1 "ENTRY_103cedb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cedc0; body size 5 bytes.
#line 1 "ENTRY_103cedc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cedd0; body size 5 bytes.
#line 1 "ENTRY_103cedd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cede0; body size 5 bytes.
#line 1 "ENTRY_103cede0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cede0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cedf0; body size 5 bytes.
#line 1 "ENTRY_103cedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cedf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee00; body size 5 bytes.
#line 1 "ENTRY_103cee00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee10; body size 5 bytes.
#line 1 "ENTRY_103cee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee20; body size 5 bytes.
#line 1 "ENTRY_103cee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee30; body size 5 bytes.
#line 1 "ENTRY_103cee30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee40; body size 5 bytes.
#line 1 "ENTRY_103cee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee50; body size 5 bytes.
#line 1 "ENTRY_103cee50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee60; body size 5 bytes.
#line 1 "ENTRY_103cee60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee70; body size 5 bytes.
#line 1 "ENTRY_103cee70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee80; body size 5 bytes.
#line 1 "ENTRY_103cee80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_103cee80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cee90; body size 19 bytes.
#line 1 "ENTRY_103cee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_103cee90(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 103ceeb0; body size 18 bytes.
#line 1 "ENTRY_103ceeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103ceeb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ceed0; body size 18 bytes.
#line 1 "ENTRY_103ceed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103ceed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103ceff0; body size 11 bytes.
#line 1 "ENTRY_103ceff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103ceff0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf000; body size 51 bytes.
#line 1 "ENTRY_103cf000"

__declspec(naked) void FUN_103cf000(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89
  __asm _emit 0x46 __asm _emit 0x04
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103cf040; body size 51 bytes.
#line 1 "ENTRY_103cf040"

__declspec(naked) void FUN_103cf040(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x28 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89
  __asm _emit 0x46 __asm _emit 0x04
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103cf080; body size 51 bytes.
#line 1 "ENTRY_103cf080"

__declspec(naked) void FUN_103cf080(void)

{
  __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x04 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89
  __asm _emit 0x46 __asm _emit 0x04
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x01 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0xc2 __asm _emit 0x08 __asm _emit 0x00
}






// Reference entry 103cf0c0; body size 11 bytes.
#line 1 "ENTRY_103cf0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103cf0c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf1d0; body size 11 bytes.
#line 1 "ENTRY_103cf1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103cf1d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf1e0; body size 11 bytes.
#line 1 "ENTRY_103cf1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103cf1e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf1f0; body size 16 bytes.
#line 1 "ENTRY_103cf1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cf1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103cf210; body size 3 bytes.
#line 1 "ENTRY_103cf210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_103cf210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 103cf220; body size 76 bytes.
#line 1 "ENTRY_103cf220"

__declspec(naked) void FUN_103cf220(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01 __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x0a __asm _emit 0x89 __asm _emit 0x0e __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103cf320; body size 52 bytes.
#line 1 "ENTRY_103cf320"

__declspec(naked) void FUN_103cf320(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01
  __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103cf490; body size 76 bytes.
#line 1 "ENTRY_103cf490"

__declspec(naked) void FUN_103cf490(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0xf1 __asm _emit 0x6a __asm _emit 0x18 __asm _emit 0x89 __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10024f14
  __asm _emit 0x8b __asm _emit 0x54 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x83 __asm _emit 0xc4 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x66
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x0c __asm _emit 0x01 __asm _emit 0x01 __asm _emit 0x89 __asm _emit 0x06 __asm _emit 0x8b __asm _emit 0x0a __asm _emit 0x89 __asm _emit 0x0e __asm _emit 0x89 __asm _emit 0x02 __asm _emit 0x8b __asm _emit 0x4e __asm _emit 0x04
  __asm _emit 0x8b __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc6 __asm _emit 0x89 __asm _emit 0x4a __asm _emit 0x04 __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103cf610; body size 33 bytes.
#line 1 "ENTRY_103cf610"

__declspec(naked) void FUN_103cf610(void)

{
  __asm _emit 0x51 __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x56 __asm _emit 0x89 __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x0c
  __asm call LAB_10036c23
  __asm _emit 0x8b __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x89 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0x5e __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103cf770; body size 23 bytes.
#line 1 "ENTRY_103cf770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_103cf770(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103d04b0; body size 42 bytes.
#line 1 "ENTRY_103d04b0"

__declspec(naked) void FUN_103d04b0(void)

{
  __asm _emit 0x51 __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x89 __asm _emit 0x0c
  __asm _emit 0x24 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x59 __asm _emit 0xc3
}






// Reference entry 103d04f0; body size 23 bytes.
#line 1 "ENTRY_103d04f0"

__declspec(naked) void FUN_103d04f0(void)

{
  __asm _emit 0x51 __asm _emit 0x8b __asm _emit 0x44 __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x89 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xc1 __asm _emit 0x89 __asm _emit 0x0c __asm _emit 0x24
  __asm mov dword ptr [ecx], offset LAB_1189da20
  __asm _emit 0x59 __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103d0a10; body size 7 bytes.
#line 1 "ENTRY_103d0a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_103d0a10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  return;
}


// Reference entry 103d0a20; body size 58 bytes.
#line 1 "ENTRY_103d0a20"

__declspec(naked) void FUN_103d0a20(void)

{
  __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x3b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x74 __asm _emit 0x2b __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x57
  __asm call LAB_10014d58
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x89
  __asm _emit 0x76 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10018084
  __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103d0a70; body size 58 bytes.
#line 1 "ENTRY_103d0a70"

__declspec(naked) void FUN_103d0a70(void)

{
  __asm _emit 0x57 __asm _emit 0x8b __asm _emit 0xf9 __asm _emit 0x3b __asm _emit 0x7c __asm _emit 0x24 __asm _emit 0x08 __asm _emit 0x74 __asm _emit 0x2b __asm _emit 0x56 __asm _emit 0x8b __asm _emit 0x37 __asm _emit 0xff __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x57
  __asm call LAB_10014d58
  __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x0c __asm _emit 0x89 __asm _emit 0x76 __asm _emit 0x04 __asm _emit 0x8b __asm _emit 0xcf __asm _emit 0xff __asm _emit 0x74 __asm _emit 0x24 __asm _emit 0x10 __asm _emit 0x89 __asm _emit 0x36 __asm _emit 0x89
  __asm _emit 0x76 __asm _emit 0x08 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10018084
  __asm _emit 0x5e __asm _emit 0x8b __asm _emit 0xc7 __asm _emit 0x5f __asm _emit 0xc2 __asm _emit 0x04 __asm _emit 0x00
}






// Reference entry 103d0ac0; body size 60 bytes.
#line 1 "ENTRY_103d0ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_103d0ac0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_10247e10();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103d0bb0; body size 14 bytes.
#line 1 "ENTRY_103d0bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103d0bb0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103d0bd0; body size 14 bytes.
#line 1 "ENTRY_103d0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103d0bd0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 103d0bf0; body size 14 bytes.
#line 1 "ENTRY_103d0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103d0bf0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103d0c10; body size 14 bytes.
#line 1 "ENTRY_103d0c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_103d0c10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 103d0ff0; body size 6 bytes.
#line 1 "ENTRY_103d0ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d0ff0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 103d1000; body size 6 bytes.
#line 1 "ENTRY_103d1000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_103d1000(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


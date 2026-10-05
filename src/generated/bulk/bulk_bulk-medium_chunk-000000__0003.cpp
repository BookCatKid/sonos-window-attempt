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
namespace std { template<class... A> int _Xbad_function_call(A...); }
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DialogUpdateSettings { char _pad; DialogUpdateSettings(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DisplayWizard { char _pad; DisplayWizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Fire { char _pad; Fire(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct MusicMenu { char _pad; MusicMenu(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Received { char _pad; Received(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCHousehold { char _pad; SCHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionCategoryDefault { char _pad; SCIActionCategoryDefault(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIDateTimeManager { char _pad; SCIDateTimeManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINowPlaying { char _pad; SCINowPlaying(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISystemStatusManager { char _pad; SCISystemStatusManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCOpAddAccountX { char _pad; SCOpAddAccountX(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCServiceDescriptor { char _pad; SCServiceDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCServiceDescriptorInternals { char _pad; SCServiceDescriptorInternals(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ZoneGroupState { char _pad; ZoneGroupState(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; void __thiscall m_FUN_1036b220(char param_2); template<class... A> int m_FUN_1036b220(A...); void __thiscall m_FUN_1036b240(char param_2); template<class... A> int m_FUN_1036b240(A...); void __thiscall m_FUN_1036b260(char param_2); template<class... A> int m_FUN_1036b260(A...); void __thiscall m_FUN_1036b280(char param_2); template<class... A> int m_FUN_1036b280(A...); void __thiscall m_FUN_1036b3c0(char param_2); template<class... A> int m_FUN_1036b3c0(A...); void __thiscall m_FUN_1036b3e0(char param_2); template<class... A> int m_FUN_1036b3e0(A...); void __thiscall m_FUN_1036b400(char param_2); template<class... A> int m_FUN_1036b400(A...); void __thiscall m_FUN_1036b600(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1036b600(A...); void __thiscall m_FUN_1036b620(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1036b620(A...); void __thiscall m_FUN_1036b7c0(undefined4 *param_2); template<class... A> int m_FUN_1036b7c0(A...); void __thiscall m_FUN_1036b850(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_1036b850(A...); undefined4 *  __thiscall m_FUN_1036d6e0(undefined4 *param_2); template<class... A> int m_FUN_1036d6e0(A...); undefined4 *  __thiscall m_FUN_1036d720(undefined4 *param_2); template<class... A> int m_FUN_1036d720(A...); undefined4 *  __thiscall m_FUN_1036d780(undefined4 *param_2); template<class... A> int m_FUN_1036d780(A...); undefined4 *  __thiscall m_FUN_1036d7c0(undefined4 *param_2); template<class... A> int m_FUN_1036d7c0(A...); void __thiscall m_FUN_1036d800(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1036d800(A...); void __thiscall m_FUN_1036d850(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1036d850(A...); void __thiscall m_FUN_103703b0(int *param_2); template<class... A> int m_FUN_103703b0(A...); void __thiscall m_FUN_10370400(int *param_2); template<class... A> int m_FUN_10370400(A...); void __thiscall m_FUN_10370450(int *param_2); template<class... A> int m_FUN_10370450(A...); void __thiscall m_FUN_103704a0(int *param_2); template<class... A> int m_FUN_103704a0(A...); void __thiscall m_FUN_103704f0(int *param_2); template<class... A> int m_FUN_103704f0(A...); void __thiscall m_FUN_10370540(int *param_2); template<class... A> int m_FUN_10370540(A...); void __thiscall m_FUN_10370590(int *param_2); template<class... A> int m_FUN_10370590(A...); void __thiscall m_FUN_103705e0(int param_2); template<class... A> int m_FUN_103705e0(A...); void __thiscall m_FUN_10370610(int param_2); template<class... A> int m_FUN_10370610(A...); void __thiscall m_FUN_10370640(int param_2); template<class... A> int m_FUN_10370640(A...); void __thiscall m_FUN_10370670(int param_2); template<class... A> int m_FUN_10370670(A...); void __thiscall m_FUN_103706a0(int param_2); template<class... A> int m_FUN_103706a0(A...); undefined4 __thiscall m_FUN_10374620(undefined4 param_2); template<class... A> int m_FUN_10374620(A...); void __thiscall m_FUN_10376e70(undefined4 param_2,SCStr *param_3); template<class... A> int m_FUN_10376e70(A...); void __thiscall m_FUN_10376ea0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10376ea0(A...); SCStr * __thiscall m_FUN_1037c5d0(SCStr *param_2); template<class... A> int m_FUN_1037c5d0(A...); undefined4 *  __thiscall m_FUN_1037cbb0(undefined4 *param_2); template<class... A> int m_FUN_1037cbb0(A...); SCStr * __thiscall m_FUN_1037d000(SCStr *param_2); template<class... A> int m_FUN_1037d000(A...); SCStr * __thiscall m_FUN_1037d020(SCStr *param_2); template<class... A> int m_FUN_1037d020(A...); undefined4 __thiscall m_FUN_1037ddb0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1037ddb0(A...); undefined4 * __thiscall m_FUN_1037efa0(undefined4 *param_2); template<class... A> int m_FUN_1037efa0(A...); int * __thiscall m_FUN_1037eff0(int *param_2); template<class... A> int m_FUN_1037eff0(A...); int * __thiscall m_FUN_10380b80(int *param_2); template<class... A> int m_FUN_10380b80(A...); undefined4 __thiscall m_FUN_10381020(undefined4 *param_2); template<class... A> int m_FUN_10381020(A...); SCStr * __thiscall m_FUN_10382120(SCStr *param_2); template<class... A> int m_FUN_10382120(A...); undefined4 __thiscall m_FUN_10382860(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10382860(A...); void __thiscall m_FUN_1038f760(undefined4 param_2); template<class... A> int m_FUN_1038f760(A...); undefined4 __thiscall m_FUN_1038fab0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1038fab0(A...); undefined4 __thiscall m_FUN_1038fad0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1038fad0(A...); void __thiscall m_FUN_10390c70(int param_2); template<class... A> int m_FUN_10390c70(A...); void __thiscall m_FUN_10393b80(undefined4 *param_2); template<class... A> int m_FUN_10393b80(A...); void __thiscall m_FUN_10393bd0(undefined4 *param_2); template<class... A> int m_FUN_10393bd0(A...); void __thiscall m_FUN_10398f40(undefined4 param_2); template<class... A> int m_FUN_10398f40(A...); void __thiscall m_FUN_103994e0(int param_2); template<class... A> int m_FUN_103994e0(A...); void __thiscall m_FUN_10399f60(undefined4 param_2); template<class... A> int m_FUN_10399f60(A...); undefined4 * __thiscall m_FUN_1039f140(int *param_2); template<class... A> int m_FUN_1039f140(A...); undefined4 * __thiscall m_FUN_1039f1e0(int *param_2); template<class... A> int m_FUN_1039f1e0(A...); undefined4 * __thiscall m_FUN_1039f200(int *param_2); template<class... A> int m_FUN_1039f200(A...); undefined4 * __thiscall m_FUN_1039f220(int *param_2); template<class... A> int m_FUN_1039f220(A...); undefined4 * __thiscall m_FUN_103a0070(byte param_2); template<class... A> int m_FUN_103a0070(A...); undefined4 * __thiscall m_FUN_103a00a0(byte param_2); template<class... A> int m_FUN_103a00a0(A...); undefined4 * __thiscall m_FUN_103a00d0(byte param_2); template<class... A> int m_FUN_103a00d0(A...); undefined4 * __thiscall m_FUN_103a0110(byte param_2); template<class... A> int m_FUN_103a0110(A...); undefined4 * __thiscall m_FUN_103a0150(byte param_2); template<class... A> int m_FUN_103a0150(A...); undefined4 __thiscall m_FUN_103a0190(byte param_2); template<class... A> int m_FUN_103a0190(A...); undefined4 __thiscall m_FUN_103a01c0(byte param_2); template<class... A> int m_FUN_103a01c0(A...); undefined4 * __thiscall m_FUN_103a01f0(byte param_2); template<class... A> int m_FUN_103a01f0(A...); undefined4 * __thiscall m_FUN_103a0240(byte param_2); template<class... A> int m_FUN_103a0240(A...); undefined4 * __thiscall m_FUN_103a0290(byte param_2); template<class... A> int m_FUN_103a0290(A...); undefined4 * __thiscall m_FUN_103a02c0(byte param_2); template<class... A> int m_FUN_103a02c0(A...); undefined4 * __thiscall m_FUN_103a02f0(byte param_2); template<class... A> int m_FUN_103a02f0(A...); undefined4 * __thiscall m_FUN_103a0320(byte param_2); template<class... A> int m_FUN_103a0320(A...); undefined4 * __thiscall m_FUN_103a0510(byte param_2); template<class... A> int m_FUN_103a0510(A...); void __thiscall m_FUN_103a0840(int *param_2); template<class... A> int m_FUN_103a0840(A...); SCStr * __thiscall m_FUN_103a1560(SCStr *param_2); template<class... A> int m_FUN_103a1560(A...); SCStr * __thiscall m_FUN_103a15c0(SCStr *param_2); template<class... A> int m_FUN_103a15c0(A...); SCStr * __thiscall m_FUN_103a15e0(SCStr *param_2); template<class... A> int m_FUN_103a15e0(A...); undefined4 __thiscall m_FUN_103a17e0(undefined4 param_2); template<class... A> int m_FUN_103a17e0(A...); SCStr * __thiscall m_FUN_103a1fb0(SCStr *param_2); template<class... A> int m_FUN_103a1fb0(A...); void __thiscall m_FUN_103a3270(int param_2); template<class... A> int m_FUN_103a3270(A...); void __thiscall m_FUN_103a4d20(undefined4 param_2); template<class... A> int m_FUN_103a4d20(A...); int __thiscall m_FUN_103a4f40(SCStr *param_2); template<class... A> int m_FUN_103a4f40(A...); void __thiscall m_FUN_103a57f0(int param_2); template<class... A> int m_FUN_103a57f0(A...); undefined4 * __thiscall m_FUN_103a5de0(int *param_2); template<class... A> int m_FUN_103a5de0(A...); undefined4 * __thiscall m_FUN_103a5e40(int *param_2); template<class... A> int m_FUN_103a5e40(A...); undefined4 * __thiscall m_FUN_103a5e80(int *param_2); template<class... A> int m_FUN_103a5e80(A...); undefined4 * __thiscall m_FUN_103a5ee0(int *param_2); template<class... A> int m_FUN_103a5ee0(A...); undefined4 * __thiscall m_FUN_103a5f00(int *param_2); template<class... A> int m_FUN_103a5f00(A...); undefined4 * __thiscall m_FUN_103a5f20(int *param_2); template<class... A> int m_FUN_103a5f20(A...); undefined4 __thiscall m_FUN_103a92b0(undefined4 param_2); template<class... A> int m_FUN_103a92b0(A...); undefined4 * __thiscall m_FUN_103a9700(byte param_2); template<class... A> int m_FUN_103a9700(A...); undefined4 __thiscall m_FUN_103a9a30(byte param_2); template<class... A> int m_FUN_103a9a30(A...); undefined4 __thiscall m_FUN_103a9a60(byte param_2); template<class... A> int m_FUN_103a9a60(A...); undefined4 * __thiscall m_FUN_103a9b30(byte param_2); template<class... A> int m_FUN_103a9b30(A...); undefined4 * __thiscall m_FUN_103a9c20(byte param_2); template<class... A> int m_FUN_103a9c20(A...); undefined4 * __thiscall m_FUN_103a9c60(byte param_2); template<class... A> int m_FUN_103a9c60(A...); void __thiscall m_FUN_103abc70(int *param_2); template<class... A> int m_FUN_103abc70(A...); void __thiscall m_FUN_103abcc0(int *param_2); template<class... A> int m_FUN_103abcc0(A...); void __thiscall m_FUN_103abd10(int *param_2); template<class... A> int m_FUN_103abd10(A...); void __thiscall m_FUN_103abd60(int param_2); template<class... A> int m_FUN_103abd60(A...); SCStr * __thiscall m_FUN_103b8600(SCStr *param_2); template<class... A> int m_FUN_103b8600(A...); void __thiscall m_FUN_103bc490(undefined4 param_2); template<class... A> int m_FUN_103bc490(A...); undefined4 * __thiscall m_FUN_103be8b0(byte param_2); template<class... A> int m_FUN_103be8b0(A...); undefined4 * __thiscall m_FUN_103be9a0(byte param_2); template<class... A> int m_FUN_103be9a0(A...); void __thiscall m_FUN_103bf3a0(undefined4 param_2); template<class... A> int m_FUN_103bf3a0(A...); void __thiscall m_FUN_103bf890(undefined4 param_2); template<class... A> int m_FUN_103bf890(A...); int __thiscall m_FUN_103bf980(SCStr *param_2); template<class... A> int m_FUN_103bf980(A...); undefined4 * __thiscall m_FUN_103c07e0(int *param_2); template<class... A> int m_FUN_103c07e0(A...); undefined4 * __thiscall m_FUN_103c0870(int *param_2); template<class... A> int m_FUN_103c0870(A...); undefined4 * __thiscall m_FUN_103c08b0(int *param_2); template<class... A> int m_FUN_103c08b0(A...); undefined4 * __thiscall m_FUN_103c3c10(byte param_2); template<class... A> int m_FUN_103c3c10(A...); undefined4 * __thiscall m_FUN_103c3c40(byte param_2); template<class... A> int m_FUN_103c3c40(A...); undefined4 __thiscall m_FUN_103c3cf0(byte param_2); template<class... A> int m_FUN_103c3cf0(A...); undefined4 __thiscall m_FUN_103c3d20(byte param_2); template<class... A> int m_FUN_103c3d20(A...); undefined4 __thiscall m_FUN_103c3d50(byte param_2); template<class... A> int m_FUN_103c3d50(A...); undefined4 __thiscall m_FUN_103c3d80(byte param_2); template<class... A> int m_FUN_103c3d80(A...); undefined4 __thiscall m_FUN_103c3e40(byte param_2); template<class... A> int m_FUN_103c3e40(A...); undefined4 __thiscall m_FUN_103c3f10(byte param_2); template<class... A> int m_FUN_103c3f10(A...); undefined4 __thiscall m_FUN_103c3f40(byte param_2); template<class... A> int m_FUN_103c3f40(A...); undefined4 * __thiscall m_FUN_103c4010(byte param_2); template<class... A> int m_FUN_103c4010(A...); undefined4 * __thiscall m_FUN_103c4050(byte param_2); template<class... A> int m_FUN_103c4050(A...); undefined4 * __thiscall m_FUN_103c4080(byte param_2); template<class... A> int m_FUN_103c4080(A...); undefined4 * __thiscall m_FUN_103c40d0(byte param_2); template<class... A> int m_FUN_103c40d0(A...); undefined4 __thiscall m_FUN_103c41c0(byte param_2); template<class... A> int m_FUN_103c41c0(A...); undefined4 *  __thiscall m_FUN_103c4260(undefined4 *param_2); template<class... A> int m_FUN_103c4260(A...); void __thiscall m_FUN_103c4280(char param_2); template<class... A> int m_FUN_103c4280(A...); void __thiscall m_FUN_103c4c20(undefined4 *param_2); template<class... A> int m_FUN_103c4c20(A...); int __thiscall m_FUN_103c8120(uint param_2); template<class... A> int m_FUN_103c8120(A...); undefined4 __thiscall m_FUN_103c91e0(int param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103c91e0(A...); void __thiscall m_FUN_103cc590(int param_2); template<class... A> int m_FUN_103cc590(A...); void __thiscall m_FUN_103cc5e0(int param_2); template<class... A> int m_FUN_103cc5e0(A...); int __thiscall m_FUN_103ce410(SCStr *param_2); template<class... A> int m_FUN_103ce410(A...); undefined4 __thiscall m_FUN_103d1400(byte param_2); template<class... A> int m_FUN_103d1400(A...); undefined4 * __thiscall m_FUN_103d15e0(byte param_2); template<class... A> int m_FUN_103d15e0(A...); void __thiscall m_FUN_103d16c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103d16c0(A...); void __thiscall m_FUN_103d2370(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_103d2370(A...); undefined4 __thiscall m_FUN_103d27d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_103d27d0(A...); int __thiscall m_FUN_103d5170(SCStr *param_2); template<class... A> int m_FUN_103d5170(A...); undefined4 * __thiscall m_FUN_103d5900(byte param_2); template<class... A> int m_FUN_103d5900(A...); undefined4 * __thiscall m_FUN_103d5940(byte param_2); template<class... A> int m_FUN_103d5940(A...); undefined4 * __thiscall m_FUN_103d9170(int *param_2); template<class... A> int m_FUN_103d9170(A...); undefined4 * __thiscall m_FUN_103e3a40(byte param_2); template<class... A> int m_FUN_103e3a40(A...); undefined4 * __thiscall m_FUN_103e3a70(byte param_2); template<class... A> int m_FUN_103e3a70(A...); undefined4 * __thiscall m_FUN_103e3aa0(byte param_2); template<class... A> int m_FUN_103e3aa0(A...); undefined4 * __thiscall m_FUN_103e3ad0(byte param_2); template<class... A> int m_FUN_103e3ad0(A...); undefined4 * __thiscall m_FUN_103e3b00(byte param_2); template<class... A> int m_FUN_103e3b00(A...); undefined4 * __thiscall m_FUN_103e3b30(byte param_2); template<class... A> int m_FUN_103e3b30(A...); undefined4 * __thiscall m_FUN_103e3b60(byte param_2); template<class... A> int m_FUN_103e3b60(A...); undefined4 * __thiscall m_FUN_103e3b90(byte param_2); template<class... A> int m_FUN_103e3b90(A...); undefined4 * __thiscall m_FUN_103e3bc0(byte param_2); template<class... A> int m_FUN_103e3bc0(A...); undefined4 * __thiscall m_FUN_103e3bf0(byte param_2); template<class... A> int m_FUN_103e3bf0(A...); undefined4 * __thiscall m_FUN_103e3c20(byte param_2); template<class... A> int m_FUN_103e3c20(A...); undefined4 * __thiscall m_FUN_103e3c50(byte param_2); template<class... A> int m_FUN_103e3c50(A...); undefined4 * __thiscall m_FUN_103e3c80(byte param_2); template<class... A> int m_FUN_103e3c80(A...); undefined4 * __thiscall m_FUN_103e3cb0(byte param_2); template<class... A> int m_FUN_103e3cb0(A...); undefined4 * __thiscall m_FUN_103e3ce0(byte param_2); template<class... A> int m_FUN_103e3ce0(A...); undefined4 * __thiscall m_FUN_103e3d10(byte param_2); template<class... A> int m_FUN_103e3d10(A...); undefined4 * __thiscall m_FUN_103e3d40(byte param_2); template<class... A> int m_FUN_103e3d40(A...); undefined4 * __thiscall m_FUN_103e3d70(byte param_2); template<class... A> int m_FUN_103e3d70(A...); undefined4 * __thiscall m_FUN_103e3da0(byte param_2); template<class... A> int m_FUN_103e3da0(A...); undefined4 __thiscall m_FUN_103e3de0(byte param_2); template<class... A> int m_FUN_103e3de0(A...); undefined4 __thiscall m_FUN_103e3e10(byte param_2); template<class... A> int m_FUN_103e3e10(A...); undefined4 __thiscall m_FUN_103e3e40(byte param_2); template<class... A> int m_FUN_103e3e40(A...); undefined4 __thiscall m_FUN_103e3e70(byte param_2); template<class... A> int m_FUN_103e3e70(A...); undefined4 __thiscall m_FUN_103e3ea0(byte param_2); template<class... A> int m_FUN_103e3ea0(A...); undefined4 __thiscall m_FUN_103e3ed0(byte param_2); template<class... A> int m_FUN_103e3ed0(A...); undefined4 __thiscall m_FUN_103e3f00(byte param_2); template<class... A> int m_FUN_103e3f00(A...); undefined4 __thiscall m_FUN_103e3f30(byte param_2); template<class... A> int m_FUN_103e3f30(A...); undefined4 __thiscall m_FUN_103e3f60(byte param_2); template<class... A> int m_FUN_103e3f60(A...); undefined4 __thiscall m_FUN_103e3f90(byte param_2); template<class... A> int m_FUN_103e3f90(A...); undefined4 __thiscall m_FUN_103e3fc0(byte param_2); template<class... A> int m_FUN_103e3fc0(A...); undefined4 __thiscall m_FUN_103e3ff0(byte param_2); template<class... A> int m_FUN_103e3ff0(A...); undefined4 __thiscall m_FUN_103e4020(byte param_2); template<class... A> int m_FUN_103e4020(A...); undefined4 __thiscall m_FUN_103e4050(byte param_2); template<class... A> int m_FUN_103e4050(A...); undefined4 __thiscall m_FUN_103e4080(byte param_2); template<class... A> int m_FUN_103e4080(A...); undefined4 __thiscall m_FUN_103e40b0(byte param_2); template<class... A> int m_FUN_103e40b0(A...); undefined4 __thiscall m_FUN_103e40e0(byte param_2); template<class... A> int m_FUN_103e40e0(A...); undefined4 __thiscall m_FUN_103e4230(byte param_2); template<class... A> int m_FUN_103e4230(A...); undefined4 __thiscall m_FUN_103e4260(byte param_2); template<class... A> int m_FUN_103e4260(A...); undefined4 __thiscall m_FUN_103e4540(byte param_2); template<class... A> int m_FUN_103e4540(A...); undefined4 __thiscall m_FUN_103e4620(byte param_2); template<class... A> int m_FUN_103e4620(A...); undefined4 __thiscall m_FUN_103e4650(byte param_2); template<class... A> int m_FUN_103e4650(A...); undefined4 __thiscall m_FUN_103e48b0(byte param_2); template<class... A> int m_FUN_103e48b0(A...); undefined4 __thiscall m_FUN_103e49c0(byte param_2); template<class... A> int m_FUN_103e49c0(A...); undefined4 __thiscall m_FUN_103e4c00(byte param_2); template<class... A> int m_FUN_103e4c00(A...); undefined4 __thiscall m_FUN_103e4dc0(byte param_2); template<class... A> int m_FUN_103e4dc0(A...); undefined4 __thiscall m_FUN_103e4ef0(byte param_2); template<class... A> int m_FUN_103e4ef0(A...); undefined4 __thiscall m_FUN_103e5000(byte param_2); template<class... A> int m_FUN_103e5000(A...); undefined4 __thiscall m_FUN_103e5030(byte param_2); template<class... A> int m_FUN_103e5030(A...); undefined4 __thiscall m_FUN_103e5250(byte param_2); template<class... A> int m_FUN_103e5250(A...); undefined4 __thiscall m_FUN_103e5330(byte param_2); template<class... A> int m_FUN_103e5330(A...); undefined4 __thiscall m_FUN_103e53d0(byte param_2); template<class... A> int m_FUN_103e53d0(A...); undefined4 __thiscall m_FUN_103e5400(byte param_2); template<class... A> int m_FUN_103e5400(A...); undefined4 __thiscall m_FUN_103e54f0(byte param_2); template<class... A> int m_FUN_103e54f0(A...); undefined4 __thiscall m_FUN_103e5610(byte param_2); template<class... A> int m_FUN_103e5610(A...); undefined4 __thiscall m_FUN_103e5700(byte param_2); template<class... A> int m_FUN_103e5700(A...); undefined4 * __thiscall m_FUN_103e5730(byte param_2); template<class... A> int m_FUN_103e5730(A...); undefined4 * __thiscall m_FUN_103e5760(byte param_2); template<class... A> int m_FUN_103e5760(A...); undefined4 * __thiscall m_FUN_103e57a0(byte param_2); template<class... A> int m_FUN_103e57a0(A...); undefined4 * __thiscall m_FUN_103e57e0(byte param_2); template<class... A> int m_FUN_103e57e0(A...); undefined4 * __thiscall m_FUN_103e5820(byte param_2); template<class... A> int m_FUN_103e5820(A...); undefined4 * __thiscall m_FUN_103e5860(byte param_2); template<class... A> int m_FUN_103e5860(A...); undefined4 * __thiscall m_FUN_103e58a0(byte param_2); template<class... A> int m_FUN_103e58a0(A...); undefined4 * __thiscall m_FUN_103e5980(byte param_2); template<class... A> int m_FUN_103e5980(A...); undefined4 * __thiscall m_FUN_103e59c0(byte param_2); template<class... A> int m_FUN_103e59c0(A...); undefined4 * __thiscall m_FUN_103e5a00(byte param_2); template<class... A> int m_FUN_103e5a00(A...); undefined4 __thiscall m_FUN_103e5a40(byte param_2); template<class... A> int m_FUN_103e5a40(A...); undefined4 * __thiscall m_FUN_103e5a70(byte param_2); template<class... A> int m_FUN_103e5a70(A...); undefined4 * __thiscall m_FUN_103e5ab0(byte param_2); template<class... A> int m_FUN_103e5ab0(A...); undefined4 * __thiscall m_FUN_103e5af0(byte param_2); template<class... A> int m_FUN_103e5af0(A...); undefined4 * __thiscall m_FUN_103e5b30(byte param_2); template<class... A> int m_FUN_103e5b30(A...); undefined4 * __thiscall m_FUN_103e5b70(byte param_2); template<class... A> int m_FUN_103e5b70(A...); undefined4 * __thiscall m_FUN_103e5bb0(byte param_2); template<class... A> int m_FUN_103e5bb0(A...); SCStr * __thiscall m_FUN_103eaa70(SCStr *param_2); template<class... A> int m_FUN_103eaa70(A...); SCStr * __thiscall m_FUN_103eada0(SCStr *param_2); template<class... A> int m_FUN_103eada0(A...); SCStr * __thiscall m_FUN_103eadc0(SCStr *param_2); template<class... A> int m_FUN_103eadc0(A...); SCStr * __thiscall m_FUN_103eade0(SCStr *param_2); template<class... A> int m_FUN_103eade0(A...); SCStr * __thiscall m_FUN_103eae00(SCStr *param_2); template<class... A> int m_FUN_103eae00(A...); SCStr * __thiscall m_FUN_103eae40(SCStr *param_2); template<class... A> int m_FUN_103eae40(A...); SCStr * __thiscall m_FUN_103eaeb0(SCStr *param_2); template<class... A> int m_FUN_103eaeb0(A...); SCStr * __thiscall m_FUN_103eaf10(SCStr *param_2); template<class... A> int m_FUN_103eaf10(A...); SCStr * __thiscall m_FUN_103eb020(SCStr *param_2); template<class... A> int m_FUN_103eb020(A...); };

extern int FUN_102bad40(...);
template<class... A> int __stdcall FUN_103c3720(A...);
extern int FUN_110c4b00(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int _time64(...);
extern int operator_new(...);
extern int thunk_FUN_101a2c70(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101dce50(...);
extern int thunk_FUN_101f53d0(...);
extern int thunk_FUN_102207b0(...);
template<class... A> int __stdcall thunk_FUN_102460b0(A...);
template<class... A> int __stdcall thunk_FUN_10246170(A...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10247e10(...);
extern int thunk_FUN_1029ecd0(...);
extern int thunk_FUN_102a30a0(...);
extern int thunk_FUN_102d65b0(...);
extern int thunk_FUN_102e8bc0(...);
extern int thunk_FUN_10352a90(...);
extern int thunk_FUN_10352b30(...);
template<class... A> int __stdcall thunk_FUN_103532a0(A...);
template<class... A> int __stdcall thunk_FUN_103535f0(A...);
template<class... A> int __stdcall thunk_FUN_103539c0(A...);
extern int thunk_FUN_10353b00(...);
extern int thunk_FUN_10353d60(...);
extern int thunk_FUN_10353e20(...);
extern int thunk_FUN_103659a0(...);
extern int thunk_FUN_1036e480(...);
extern int thunk_FUN_10372ca0(...);
extern int thunk_FUN_1037b520(...);
template<class... A> int __stdcall thunk_FUN_10384dc0(A...);
extern int thunk_FUN_103860f0(...);
extern int thunk_FUN_103869d0(...);
extern int thunk_FUN_10388ec0(...);
extern int thunk_FUN_103892b0(...);
extern int thunk_FUN_1038a5a0(...);
extern int thunk_FUN_1038c170(...);
extern int thunk_FUN_1038c830(...);
extern int thunk_FUN_1038c9c0(...);
extern int thunk_FUN_1039ab20(...);
extern int thunk_FUN_1039b470(...);
extern int thunk_FUN_1039f8b0(...);
extern int thunk_FUN_1039fa00(...);
extern int thunk_FUN_103a4d50(...);
extern int thunk_FUN_103a4f90(...);
extern int thunk_FUN_103a81d0(...);
extern int thunk_FUN_103a8350(...);
template<class... A> int __stdcall thunk_FUN_103a9240(A...);
template<class... A> int __stdcall thunk_FUN_103b8760(A...);
extern int thunk_FUN_103ba670(...);
extern int thunk_FUN_103bf8c0(...);
extern int thunk_FUN_103bf9d0(...);
extern int thunk_FUN_103c1e40(...);
extern int thunk_FUN_103c1f90(...);
extern int thunk_FUN_103c20e0(...);
extern int thunk_FUN_103c21d0(...);
extern int thunk_FUN_103c27c0(...);
extern int thunk_FUN_103c2ab0(...);
extern int thunk_FUN_103c2be0(...);
extern int thunk_FUN_103c2eb0(...);
template<class... A> int __stdcall thunk_FUN_103cd850(A...);
extern int thunk_FUN_103ce460(...);
extern int thunk_FUN_103d0730(...);
extern int thunk_FUN_103d4710(...);
template<class... A> int __stdcall thunk_FUN_103d63d0(A...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_103df700(...);
extern int thunk_FUN_103df850(...);
extern int thunk_FUN_103df9a0(...);
extern int thunk_FUN_103dfaf0(...);
extern int thunk_FUN_103dfc40(...);
extern int thunk_FUN_103dfd90(...);
extern int thunk_FUN_103dfee0(...);
extern int thunk_FUN_103e0030(...);
extern int thunk_FUN_103e0180(...);
extern int thunk_FUN_103e02d0(...);
extern int thunk_FUN_103e0420(...);
extern int thunk_FUN_103e0570(...);
extern int thunk_FUN_103e06c0(...);
extern int thunk_FUN_103e0810(...);
extern int thunk_FUN_103e0960(...);
extern int thunk_FUN_103e0ab0(...);
extern int thunk_FUN_103e0c00(...);
extern int thunk_FUN_103e0ee0(...);
extern int thunk_FUN_103e12e0(...);
extern int thunk_FUN_103e1440(...);
extern int thunk_FUN_103e15a0(...);
extern int thunk_FUN_103e1890(...);
extern int thunk_FUN_103e1a50(...);
extern int thunk_FUN_103e1d30(...);
extern int thunk_FUN_103e20a0(...);
extern int thunk_FUN_103e22b0(...);
extern int thunk_FUN_103e2440(...);
extern int thunk_FUN_103e25c0(...);
extern int thunk_FUN_103e28a0(...);
extern int thunk_FUN_103e2a30(...);
extern int thunk_FUN_103e2b80(...);
extern int thunk_FUN_103e2cc0(...);
extern int thunk_FUN_103e2eb0(...);
extern int thunk_FUN_103e30c0(...);
extern int thunk_FUN_103e3250(...);
extern int thunk_FUN_103e6840(...);
extern int thunk_FUN_1054ced0(...);
template<class... A> int __stdcall thunk_FUN_1059d5a0(A...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_10be4f80(...);
template<class... A> int __stdcall thunk_FUN_10be9ed0(A...);
extern int thunk_FUN_10c83fc0(...);
extern int thunk_FUN_10ce0060(...);
template<class... A> int __stdcall thunk_FUN_10cf3780(A...);
extern int thunk_FUN_10cf4ae0(...);
extern int thunk_FUN_11092a60(...);
extern int thunk_FUN_11093230(...);
extern int thunk_FUN_110c2c60(...);
extern int thunk_FUN_110c4a40(...);
extern int thunk_FUN_110c4a70(...);
extern int thunk_FUN_110c4b80(...);
extern int thunk_FUN_110d8cb0(...);
extern int thunk_FUN_111134e0(...);
extern int thunk_FUN_11128910(...);
template<class... A> int __stdcall thunk_FUN_111c0af0(A...);
extern int thunk_FUN_111c1340(...);
extern int thunk_FUN_111fd590(...);
extern int thunk_FUN_111fdd60(...);
extern int thunk_FUN_111fe010(...);
extern int thunk_FUN_11202440(...);
extern int thunk_FUN_1124a3e0(...);
extern int thunk_FUN_1124ff50(...);
extern int thunk_FUN_112503c0(...);
extern int thunk_FUN_11255560(...);
extern int thunk_FUN_1125bed0(...);
extern int thunk_FUN_1127d260(...);
extern int thunk_FUN_11283440(...);
extern int thunk_FUN_112a7c70(...);
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_1145c930(...);
extern int thunk_FUN_1145ed60(...);
extern int thunk_FUN_1148a50e(...);
extern int DAT_1186d2ee;
extern int DAT_12126b84;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RSecRegUserEmailAIOOp;
extern int ghidra_vftable_RUpnpSPAddAccountXAIOOp;
extern int ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp;
extern int ghidra_vftable_SCEventSource;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCOpAddAccountX;
extern int ghidra_vftable_SCOpFetchClientToken;
extern int ghidra_vftable_SCOpFetchToken;
extern int ghidra_vftable_SCOpGetBetaSettings;
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
extern int ghidra_vftable_SCServiceDescriptorInternals;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_10;
extern int uStack_14;
extern int uStack_8;
extern int uStack_c;
extern int unaff_ESI;
extern undefined1 LAB_103c9202[];
extern undefined1 LAB_11549410[];
extern undefined1 LAB_1154a630[];
extern undefined1 LAB_1154a660[];
extern void *ExceptionList;
extern int FUN_112a9d50(...);
extern int FUN_112a9d70(...);
extern int FUN_112aa350(...);
void __stdcall FUN_1036b5d0(int param_1,int param_2);
template<class... A> int FUN_1036b5d0(A...);
void __stdcall FUN_1036b650(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1036b650(A...);
void __stdcall FUN_1036b680(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1036b680(A...);
void __stdcall FUN_1036b740(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1036b740(A...);
void __fastcall FUN_1036b770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1036b770(A...);
void __fastcall FUN_1036b7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1036b7e0(A...);
void __fastcall FUN_1036b800(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1036b800(A...);
void __stdcall FUN_1036b820(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_1036b820(A...);
int FUN_1036d560(int param_1);
template<class... A> int FUN_1036d560(A...);
int * FUN_1036d5e0(int *param_1);
template<class... A> int FUN_1036d5e0(A...);
int * FUN_1036d610(int *param_1);
template<class... A> int FUN_1036d610(A...);
int * FUN_1036d640(int *param_1);
template<class... A> int FUN_1036d640(A...);
void __fastcall FUN_1036e060(int *param_1);
template<class... A> int FUN_1036e060(A...);
void __fastcall FUN_1036e090(int *param_1);
template<class... A> int FUN_1036e090(A...);
void __fastcall FUN_1036e0c0(int *param_1);
template<class... A> int FUN_1036e0c0(A...);
void __fastcall FUN_1036e0f0(int *param_1);
template<class... A> int FUN_1036e0f0(A...);
void __fastcall FUN_1036e120(int *param_1);
template<class... A> int FUN_1036e120(A...);
void __fastcall FUN_1036e150(int *param_1);
template<class... A> int FUN_1036e150(A...);
void __fastcall FUN_1036e180(int *param_1);
template<class... A> int FUN_1036e180(A...);
void __fastcall FUN_1036e1b0(int *param_1);
template<class... A> int FUN_1036e1b0(A...);
void __fastcall FUN_1036e250(undefined4 *param_1);
template<class... A> int FUN_1036e250(A...);
void __fastcall FUN_103724a0(int *param_1);
template<class... A> int FUN_103724a0(A...);
void __fastcall FUN_103724d0(int *param_1);
template<class... A> int FUN_103724d0(A...);
void __fastcall FUN_10372500(int *param_1);
template<class... A> int FUN_10372500(A...);
undefined4 FUN_103725d0(SCStr *param_1);
template<class... A> int FUN_103725d0(A...);
undefined4 FUN_10372620(SCStr *param_1);
template<class... A> int FUN_10372620(A...);
undefined4 __stdcall FUN_103735a0(undefined4 param_1);
template<class... A> int FUN_103735a0(A...);
undefined4 __stdcall FUN_103739b0(undefined4 param_1);
template<class... A> int FUN_103739b0(A...);
void __stdcall FUN_10376940(int param_1,int param_2);
template<class... A> int FUN_10376940(A...);
void __stdcall FUN_10376990(int param_1,int param_2);
template<class... A> int FUN_10376990(A...);
void __stdcall FUN_103769e0(int param_1,int param_2);
template<class... A> int FUN_103769e0(A...);
void __fastcall FUN_10376b50(int param_1);
template<class... A> int FUN_10376b50(A...);
void __fastcall FUN_10376ba0(int param_1);
template<class... A> int FUN_10376ba0(A...);
void __fastcall FUN_10376bf0(int param_1);
template<class... A> int FUN_10376bf0(A...);
void __fastcall FUN_10376c40(int param_1);
template<class... A> int FUN_10376c40(A...);
void __fastcall FUN_10376c90(int param_1);
template<class... A> int FUN_10376c90(A...);
void __fastcall FUN_10376d40(int param_1);
template<class... A> int FUN_10376d40(A...);
void __fastcall FUN_10377700(undefined4 *param_1);
template<class... A> int FUN_10377700(A...);
void __fastcall FUN_10377740(undefined4 *param_1);
template<class... A> int FUN_10377740(A...);
void __fastcall FUN_10377780(undefined4 *param_1);
template<class... A> int FUN_10377780(A...);
void __fastcall FUN_103777c0(undefined4 *param_1);
template<class... A> int FUN_103777c0(A...);
void __fastcall FUN_10377800(undefined4 *param_1);
template<class... A> int FUN_10377800(A...);
void __fastcall FUN_10377840(undefined4 *param_1);
template<class... A> int FUN_10377840(A...);
void __fastcall FUN_10377880(undefined4 *param_1);
template<class... A> int FUN_10377880(A...);
void __fastcall FUN_103778c0(undefined4 *param_1);
template<class... A> int FUN_103778c0(A...);
void __fastcall FUN_10377900(undefined4 *param_1);
template<class... A> int FUN_10377900(A...);
void __fastcall FUN_10377940(undefined4 *param_1);
template<class... A> int FUN_10377940(A...);
void __fastcall FUN_10377980(undefined4 *param_1);
template<class... A> int FUN_10377980(A...);
void __fastcall FUN_103779c0(undefined4 *param_1);
template<class... A> int FUN_103779c0(A...);
void __fastcall FUN_10377a00(undefined4 *param_1);
template<class... A> int FUN_10377a00(A...);
void __fastcall FUN_10377a40(undefined4 *param_1);
template<class... A> int FUN_10377a40(A...);
void __fastcall FUN_10377a80(int *param_1);
template<class... A> int FUN_10377a80(A...);
void __fastcall FUN_10377ab0(int *param_1);
template<class... A> int FUN_10377ab0(A...);
void __fastcall FUN_10377ae0(int *param_1);
template<class... A> int FUN_10377ae0(A...);
void __fastcall FUN_10377b10(int *param_1);
template<class... A> int FUN_10377b10(A...);
void __fastcall FUN_10377b40(int *param_1);
template<class... A> int FUN_10377b40(A...);
uint __fastcall FUN_103780c0(int param_1);
template<class... A> int FUN_103780c0(A...);
void FUN_10378190(void);
template<class... A> int FUN_10378190(A...);
void FUN_10378380(void);
template<class... A> int FUN_10378380(A...);
void FUN_103783c0(void);
template<class... A> int FUN_103783c0(A...);
void __fastcall FUN_10378660(int param_1);
template<class... A> int FUN_10378660(A...);
undefined4 __fastcall FUN_10378690(int *param_1);
template<class... A> int FUN_10378690(A...);
SCStr * __stdcall FUN_10378730(SCStr *param_1);
template<class... A> int FUN_10378730(A...);
SCStr * __stdcall FUN_10378770(SCStr *param_1);
template<class... A> int FUN_10378770(A...);
undefined4 __fastcall FUN_10379f10(int *param_1);
template<class... A> int FUN_10379f10(A...);
SCStr * __stdcall FUN_10379fd0(SCStr *param_1);
template<class... A> int FUN_10379fd0(A...);
SCStr * __stdcall FUN_1037a010(SCStr *param_1);
template<class... A> int FUN_1037a010(A...);
undefined4 __stdcall FUN_1037c360(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1037c360(A...);
int * __fastcall FUN_1037cb60(int *param_1);
template<class... A> int FUN_1037cb60(A...);
undefined4 __stdcall FUN_1037e9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_1037e9a0(A...);
SCStr * __stdcall FUN_1037ef60(SCStr *param_1);
template<class... A> int FUN_1037ef60(A...);
undefined4 __stdcall FUN_103810f0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_103810f0(A...);
undefined4 __stdcall FUN_103816c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_103816c0(A...);
undefined4 __stdcall FUN_10381a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10381a10(A...);
undefined4 __stdcall FUN_10381cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10381cf0(A...);
int __fastcall FUN_103827f0(int param_1);
template<class... A> int FUN_103827f0(A...);
undefined4 __fastcall FUN_10383b80(int param_1);
template<class... A> int FUN_10383b80(A...);
void __fastcall FUN_10384640(int param_1);
template<class... A> int FUN_10384640(A...);
void __fastcall FUN_1038a930(int param_1);
template<class... A> int FUN_1038a930(A...);
void __fastcall FUN_1038a960(int param_1);
template<class... A> int FUN_1038a960(A...);
undefined4 __fastcall FUN_1038d370(int param_1);
template<class... A> int FUN_1038d370(A...);
undefined1 __fastcall FUN_1038d570(int param_1);
template<class... A> int FUN_1038d570(A...);
uint __fastcall FUN_1038d5c0(int param_1);
template<class... A> int FUN_1038d5c0(A...);
undefined1 FUN_1038da80(void);
template<class... A> int FUN_1038da80(A...);
undefined4 __fastcall FUN_1038de80(int param_1);
template<class... A> int FUN_1038de80(A...);
uint __fastcall FUN_1038f0b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1038f0b0(A...);
uint __fastcall FUN_1038f0d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1038f0d0(A...);
uint __fastcall FUN_1038f0f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1038f0f0(A...);
uint __fastcall FUN_1038f110(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1038f110(A...);
uint __fastcall FUN_1038f130(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1038f130(A...);
void __stdcall FUN_1038f170(SCStr *param_1);
template<class... A> int FUN_1038f170(A...);
void __stdcall FUN_1038f1a0(SCStr *param_1);
template<class... A> int FUN_1038f1a0(A...);
void __stdcall FUN_10391dd0(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10391dd0(A...);
void __stdcall FUN_10391f70(unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10391f70(A...);
void __fastcall FUN_10392ae0(int param_1);
template<class... A> int FUN_10392ae0(A...);
void __fastcall FUN_103936d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_103936d0(A...);
void __fastcall FUN_10395b50(int param_1);
template<class... A> int FUN_10395b50(A...);
int __fastcall FUN_103965a0(int param_1);
template<class... A> int FUN_103965a0(A...);
void __fastcall FUN_103967f0(int param_1);
template<class... A> int FUN_103967f0(A...);
void __fastcall FUN_103970a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103970a0(A...);
void __fastcall FUN_1039a9b0(int param_1);
template<class... A> int FUN_1039a9b0(A...);
void FUN_1039a9f0(void);
template<class... A> int FUN_1039a9f0(A...);
void __fastcall FUN_1039b7c0(int param_1);
template<class... A> int FUN_1039b7c0(A...);
undefined4 __fastcall FUN_1039ea20(int param_1);
template<class... A> int FUN_1039ea20(A...);
void __fastcall FUN_1039f850(undefined4 *param_1);
template<class... A> int FUN_1039f850(A...);
void __fastcall FUN_1039f870(undefined4 *param_1);
template<class... A> int FUN_1039f870(A...);
void __fastcall FUN_1039f890(undefined4 *param_1);
template<class... A> int FUN_1039f890(A...);
void __fastcall FUN_1039fca0(int *param_1);
template<class... A> int FUN_1039fca0(A...);
void __fastcall FUN_1039ff20(undefined4 *param_1);
template<class... A> int FUN_1039ff20(A...);
SCStr * __stdcall FUN_103a1490(SCStr *param_1);
template<class... A> int FUN_103a1490(A...);
SCStr * __stdcall FUN_103a14b0(SCStr *param_1);
template<class... A> int FUN_103a14b0(A...);
SCStr * __stdcall FUN_103a14d0(SCStr *param_1);
template<class... A> int FUN_103a14d0(A...);
void __fastcall FUN_103a14f0(undefined4 *param_1);
template<class... A> int FUN_103a14f0(A...);
SCStr * __stdcall FUN_103a1540(SCStr *param_1);
template<class... A> int FUN_103a1540(A...);
uint __fastcall FUN_103a1580(int *param_1);
template<class... A> int FUN_103a1580(A...);
SCStr * __stdcall FUN_103a1850(SCStr *param_1);
template<class... A> int FUN_103a1850(A...);
SCStr * __stdcall FUN_103a1870(SCStr *param_1);
template<class... A> int FUN_103a1870(A...);
undefined1 __fastcall FUN_103a2ec0(int param_1);
template<class... A> int FUN_103a2ec0(A...);
undefined1 __fastcall FUN_103a2f10(int param_1);
template<class... A> int FUN_103a2f10(A...);
uint __fastcall FUN_103a2f50(int param_1);
template<class... A> int FUN_103a2f50(A...);
undefined1 __fastcall FUN_103a2fb0(int param_1);
template<class... A> int FUN_103a2fb0(A...);
uint __fastcall FUN_103a30e0(int param_1);
template<class... A> int FUN_103a30e0(A...);
undefined4 * __fastcall FUN_103a6180(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103a6180(A...);
undefined4 * __fastcall FUN_103a63b0(undefined4 *param_1);
template<class... A> int FUN_103a63b0(A...);
undefined4 * __fastcall FUN_103a6400(undefined4 *param_1);
template<class... A> int FUN_103a6400(A...);
void __fastcall FUN_103a7690(undefined4 *param_1);
template<class... A> int FUN_103a7690(A...);
void __fastcall FUN_103a79b0(int *param_1);
template<class... A> int FUN_103a79b0(A...);
void __fastcall FUN_103a7a10(int *param_1);
template<class... A> int FUN_103a7a10(A...);
void __fastcall FUN_103a7a90(int param_1);
template<class... A> int FUN_103a7a90(A...);
void __fastcall FUN_103a7ab0(int *param_1);
template<class... A> int FUN_103a7ab0(A...);
void __fastcall FUN_103a7b90(int param_1);
template<class... A> int FUN_103a7b90(A...);
void __fastcall FUN_103a7ef0(int *param_1);
template<class... A> int FUN_103a7ef0(A...);
void __fastcall FUN_103a8730(undefined4 *param_1);
template<class... A> int FUN_103a8730(A...);
void __fastcall FUN_103aa070(int param_1);
template<class... A> int FUN_103aa070(A...);
int * FUN_103ab4c0(int *param_1);
template<class... A> int FUN_103ab4c0(A...);
int __fastcall FUN_103abfd0(int param_1);
template<class... A> int FUN_103abfd0(A...);
int __fastcall FUN_103ac010(int param_1);
template<class... A> int FUN_103ac010(A...);
void __fastcall FUN_103ac150(int *param_1);
template<class... A> int FUN_103ac150(A...);
void __fastcall FUN_103ac180(int *param_1);
template<class... A> int FUN_103ac180(A...);
void __fastcall FUN_103ac1b0(int param_1);
template<class... A> int FUN_103ac1b0(A...);
SCStr * __stdcall FUN_103b7840(SCStr *param_1);
template<class... A> int FUN_103b7840(A...);
SCStr * __stdcall FUN_103b78c0(SCStr *param_1);
template<class... A> int FUN_103b78c0(A...);
undefined1 __fastcall FUN_103b8d90(int param_1);
template<class... A> int FUN_103b8d90(A...);
undefined1 __fastcall FUN_103b8dd0(int param_1);
template<class... A> int FUN_103b8dd0(A...);
uint __fastcall FUN_103b9400(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103b9400(A...);
void __fastcall FUN_103ba040(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103ba040(A...);
void __fastcall FUN_103ba080(int param_1);
template<class... A> int FUN_103ba080(A...);
void FUN_103bbe00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6);
template<class... A> int FUN_103bbe00(A...);
int __fastcall FUN_103bc350(int *param_1);
template<class... A> int FUN_103bc350(A...);
void __fastcall FUN_103bc380(int *param_1);
template<class... A> int FUN_103bc380(A...);
undefined4 __stdcall FUN_103bd6f0(short param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_103bd6f0(A...);
int __fastcall FUN_103be170(int param_1);
template<class... A> int FUN_103be170(A...);
int __fastcall FUN_103be1b0(int param_1);
template<class... A> int FUN_103be1b0(A...);
int __fastcall FUN_103be1f0(int param_1);
template<class... A> int FUN_103be1f0(A...);
int __fastcall FUN_103be230(int param_1);
template<class... A> int FUN_103be230(A...);
void __fastcall FUN_103be750(undefined4 *param_1);
template<class... A> int FUN_103be750(A...);
void __fastcall FUN_103bebe0(int param_1);
template<class... A> int FUN_103bebe0(A...);
uint __fastcall FUN_103bf220(int param_1);
template<class... A> int FUN_103bf220(A...);
undefined4 * __fastcall FUN_103c0970(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103c0970(A...);
void __fastcall FUN_103c1dd0(undefined4 *param_1);
template<class... A> int FUN_103c1dd0(A...);
void __fastcall FUN_103c24f0(int param_1);
template<class... A> int FUN_103c24f0(A...);
void __fastcall FUN_103c2510(int *param_1);
template<class... A> int FUN_103c2510(A...);
void __fastcall FUN_103c2540(int *param_1);
template<class... A> int FUN_103c2540(A...);
void __fastcall FUN_103c2570(int *param_1);
template<class... A> int FUN_103c2570(A...);
void __fastcall FUN_103c25a0(int *param_1);
template<class... A> int FUN_103c25a0(A...);
void __fastcall FUN_103c2670(int param_1);
template<class... A> int FUN_103c2670(A...);
void __fastcall FUN_103c2690(int *param_1);
template<class... A> int FUN_103c2690(A...);
void __fastcall FUN_103c26c0(int *param_1);
template<class... A> int FUN_103c26c0(A...);
void __fastcall FUN_103c26f0(int *param_1);
template<class... A> int FUN_103c26f0(A...);
void __fastcall FUN_103c2720(int *param_1);
template<class... A> int FUN_103c2720(A...);
void __fastcall FUN_103c2dc0(undefined4 *param_1);
template<class... A> int FUN_103c2dc0(A...);
int * __fastcall FUN_103c3460(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103c3460(A...);
int * __fastcall FUN_103c3490(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103c3490(A...);
void __fastcall FUN_103c4220(int param_1);
template<class... A> int FUN_103c4220(A...);
undefined4 *  __stdcall FUN_103c42a0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_103c42a0(A...);
void __fastcall FUN_103c4d50(int *param_1);
template<class... A> int FUN_103c4d50(A...);
void __fastcall FUN_103c4d80(int *param_1);
template<class... A> int FUN_103c4d80(A...);
void __fastcall FUN_103c4db0(int *param_1);
template<class... A> int FUN_103c4db0(A...);
void __fastcall FUN_103c6c50(int *param_1);
template<class... A> int FUN_103c6c50(A...);
void __fastcall FUN_103c7610(undefined4 *param_1);
template<class... A> int FUN_103c7610(A...);
void __fastcall FUN_103c7650(undefined4 *param_1);
template<class... A> int FUN_103c7650(A...);
void __fastcall FUN_103c78e0(int param_1);
template<class... A> int FUN_103c78e0(A...);
void __fastcall FUN_103c7930(int param_1);
template<class... A> int FUN_103c7930(A...);
SCStr * __stdcall FUN_103c82b0(SCStr *param_1);
template<class... A> int FUN_103c82b0(A...);
SCStr * __stdcall FUN_103c82d0(SCStr *param_1);
template<class... A> int FUN_103c82d0(A...);
uint __fastcall FUN_103c96b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103c96b0(A...);
undefined4 __stdcall FUN_103cbeb0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_103cbeb0(A...);
undefined4 * __fastcall FUN_103cef50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_103cef50(A...);
void __fastcall FUN_103d0510(int param_1);
template<class... A> int FUN_103d0510(A...);
void __fastcall FUN_103d0530(int param_1);
template<class... A> int FUN_103d0530(A...);
void __fastcall FUN_103d0550(undefined4 *param_1);
template<class... A> int FUN_103d0550(A...);
void __fastcall FUN_103d0580(undefined4 *param_1);
template<class... A> int FUN_103d0580(A...);
void __fastcall FUN_103d05b0(undefined4 *param_1);
template<class... A> int FUN_103d05b0(A...);
void __fastcall FUN_103d06f0(int param_1);
template<class... A> int FUN_103d06f0(A...);
void __fastcall FUN_103d0710(int param_1);
template<class... A> int FUN_103d0710(A...);
void __fastcall FUN_103d1640(int param_1);
template<class... A> int FUN_103d1640(A...);
void __fastcall FUN_103d1660(int param_1);
template<class... A> int FUN_103d1660(A...);
int FUN_103d22b0(int param_1);
template<class... A> int FUN_103d22b0(A...);
int * FUN_103d2310(int *param_1);
template<class... A> int FUN_103d2310(A...);
void __fastcall FUN_103d3190(int *param_1);
template<class... A> int FUN_103d3190(A...);
undefined4 * __stdcall FUN_103d41d0(undefined4 *param_1);
template<class... A> int FUN_103d41d0(A...);
void __stdcall FUN_103d44d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_103d44d0(A...);
void __fastcall FUN_103d5450(int param_1);
template<class... A> int FUN_103d5450(A...);
void __fastcall FUN_103d5840(undefined4 *param_1);
template<class... A> int FUN_103d5840(A...);
void __fastcall FUN_103d5b00(int param_1);
template<class... A> int FUN_103d5b00(A...);
undefined4 * __fastcall FUN_103d5ff0(undefined4 *param_1);
template<class... A> int FUN_103d5ff0(A...);
void __fastcall FUN_103d6380(int param_1);
template<class... A> int FUN_103d6380(A...);
int __fastcall FUN_103d63b0(int param_1);
template<class... A> int FUN_103d63b0(A...);
longlong FUN_103d6d90(void);
template<class... A> int FUN_103d6d90(A...);
undefined4 __fastcall FUN_103d91b0(undefined4 param_1);
template<class... A> int FUN_103d91b0(A...);
void __fastcall FUN_103df6e0(undefined4 *param_1);
template<class... A> int FUN_103df6e0(A...);
void __fastcall FUN_103e2b30(undefined4 *param_1);
template<class... A> int FUN_103e2b30(A...);
void __fastcall FUN_103e8070(int *param_1);
template<class... A> int FUN_103e8070(A...);
undefined1 * __fastcall FUN_103ea730(int param_1);
template<class... A> int FUN_103ea730(A...);
undefined1 * __fastcall FUN_103ea750(int param_1);
template<class... A> int FUN_103ea750(A...);
undefined1 * __fastcall FUN_103ea770(int param_1);
template<class... A> int FUN_103ea770(A...);
undefined1 * __fastcall FUN_103ea790(int param_1);
template<class... A> int FUN_103ea790(A...);
undefined1 * __fastcall FUN_103ea7b0(int param_1);
template<class... A> int FUN_103ea7b0(A...);
void __fastcall FUN_103ea830(int param_1);
template<class... A> int FUN_103ea830(A...);
undefined1 * __fastcall FUN_103ea870(int param_1);
template<class... A> int FUN_103ea870(A...);
undefined1 * __fastcall FUN_103ea890(int param_1);
template<class... A> int FUN_103ea890(A...);
undefined1 * __fastcall FUN_103ea8b0(int param_1);
template<class... A> int FUN_103ea8b0(A...);
undefined1 * __fastcall FUN_103ea8d0(int param_1);
template<class... A> int FUN_103ea8d0(A...);
undefined1 * __fastcall FUN_103ea8f0(int param_1);
template<class... A> int FUN_103ea8f0(A...);
undefined1 * __fastcall FUN_103eaa30(int param_1);
template<class... A> int FUN_103eaa30(A...);
undefined1 * __fastcall FUN_103eaa50(int param_1);
template<class... A> int FUN_103eaa50(A...);
extern int ghidra_vftable__Func_impl_no_alloc__lambda_198ef1bf99411092060a7b4526c1ff25__void_SCUserAccount_const__SCStr_const__;

// Reference entry 1036b220; body size 21 bytes.
#line 1 "ENTRY_1036b220"

void __thiscall Recovered_Bulk::m_FUN_1036b220(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1036b240; body size 21 bytes.
#line 1 "ENTRY_1036b240"

void __thiscall Recovered_Bulk::m_FUN_1036b240(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1036b260; body size 21 bytes.
#line 1 "ENTRY_1036b260"

void __thiscall Recovered_Bulk::m_FUN_1036b260(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1036b280; body size 21 bytes.
#line 1 "ENTRY_1036b280"

void __thiscall Recovered_Bulk::m_FUN_1036b280(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1036b3c0; body size 21 bytes.
#line 1 "ENTRY_1036b3c0"

void __thiscall Recovered_Bulk::m_FUN_1036b3c0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1036b3e0; body size 21 bytes.
#line 1 "ENTRY_1036b3e0"

void __thiscall Recovered_Bulk::m_FUN_1036b3e0(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 1036b400; body size 58 bytes.
#line 1 "ENTRY_1036b400"

void __thiscall Recovered_Bulk::m_FUN_1036b400(char param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x2c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1 + 8));
    *(undefined4*)(param_1 + 0x2c) = (undefined4)(0);
  }
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,0x30);
  }
  return;
}


// Reference entry 1036b5d0; body size 35 bytes.
#line 1 "ENTRY_1036b5d0"

void __stdcall FUN_1036b5d0(int param_1,int param_2)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    thunk_FUN_103659a0();
  }
  return;
}


// Reference entry 1036b600; body size 20 bytes.
#line 1 "ENTRY_1036b600"

void __thiscall Recovered_Bulk::m_FUN_1036b600(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10352a90(param_2,param_3,param_1);
  return;
}


// Reference entry 1036b620; body size 20 bytes.
#line 1 "ENTRY_1036b620"

void __thiscall Recovered_Bulk::m_FUN_1036b620(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_10352b30(param_2,param_3,param_1);
  return;
}


// Reference entry 1036b650; body size 31 bytes.
#line 1 "ENTRY_1036b650"

void __stdcall FUN_1036b650(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1038c9c0();
  }
  return;
}


// Reference entry 1036b680; body size 22 bytes.
#line 1 "ENTRY_1036b680"

void __stdcall FUN_1036b680(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10cf4ae0(0);
  return;
}


// Reference entry 1036b740; body size 31 bytes.
#line 1 "ENTRY_1036b740"

void __stdcall FUN_1036b740(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = (char)(thunk_FUN_102d65b0(param_2), 0);
  if (cVar1 != '\0') {
    thunk_FUN_1038c170();
  }
  return;
}


// Reference entry 1036b770; body size 23 bytes.
#line 1 "ENTRY_1036b770"

void __fastcall FUN_1036b770(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780<>(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1036b7c0; body size 23 bytes.
#line 1 "ENTRY_1036b7c0"

void __thiscall Recovered_Bulk::m_FUN_1036b7c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  thunk_FUN_103860f0(*param_2,*(undefined4 *)(*(int *)(param_1 + 4) + 0x10ec));
  return;
}


// Reference entry 1036b7e0; body size 23 bytes.
#line 1 "ENTRY_1036b7e0"

void __fastcall FUN_1036b7e0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780<>(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1036b800; body size 23 bytes.
#line 1 "ENTRY_1036b800"

void __fastcall FUN_1036b800(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  thunk_FUN_10cf3780<>(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1036b820; body size 23 bytes.
#line 1 "ENTRY_1036b820"

void __stdcall FUN_1036b820(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1038c830();
  thunk_FUN_10372ca0();
  return;
}


// Reference entry 1036b850; body size 39 bytes.
#line 1 "ENTRY_1036b850"

void __thiscall Recovered_Bulk::m_FUN_1036b850(undefined4 *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  param_2 = (undefined4 *)((undefined4 *)*param_2);
  if (*(int **)(param_1 + 0x2c) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 8))(&param_2,param_3);
    return;
  }
                    
  std::_Xbad_function_call();
}


// Reference entry 1036d560; body size 30 bytes.
#line 1 "ENTRY_1036d560"

int FUN_1036d560(int param_1)

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


// Reference entry 1036d5e0; body size 31 bytes.
#line 1 "ENTRY_1036d5e0"

int * FUN_1036d5e0(int *param_1)

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


// Reference entry 1036d610; body size 31 bytes.
#line 1 "ENTRY_1036d610"

int * FUN_1036d610(int *param_1)

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


// Reference entry 1036d640; body size 31 bytes.
#line 1 "ENTRY_1036d640"

int * FUN_1036d640(int *param_1)

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


// Reference entry 1036d6e0; body size 19 bytes.
#line 1 "ENTRY_1036d6e0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1036d6e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1036d720; body size 19 bytes.
#line 1 "ENTRY_1036d720"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1036d720(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1036d780; body size 19 bytes.
#line 1 "ENTRY_1036d780"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1036d780(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1036d7c0; body size 19 bytes.
#line 1 "ENTRY_1036d7c0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1036d7c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 1036d800; body size 52 bytes.
#line 1 "ENTRY_1036d800"

void __thiscall Recovered_Bulk::m_FUN_1036d800(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_101f53d0();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 1036d850; body size 52 bytes.
#line 1 "ENTRY_1036d850"

void __thiscall Recovered_Bulk::m_FUN_1036d850(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1036e480();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 1036e060; body size 33 bytes.
#line 1 "ENTRY_1036e060"

void __fastcall FUN_1036e060(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1036e090; body size 33 bytes.
#line 1 "ENTRY_1036e090"

void __fastcall FUN_1036e090(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1036e0c0; body size 33 bytes.
#line 1 "ENTRY_1036e0c0"

void __fastcall FUN_1036e0c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1036e0f0; body size 33 bytes.
#line 1 "ENTRY_1036e0f0"

void __fastcall FUN_1036e0f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1036e120; body size 33 bytes.
#line 1 "ENTRY_1036e120"

void __fastcall FUN_1036e120(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1036e150; body size 33 bytes.
#line 1 "ENTRY_1036e150"

void __fastcall FUN_1036e150(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1036e180; body size 33 bytes.
#line 1 "ENTRY_1036e180"

void __fastcall FUN_1036e180(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1036e1b0; body size 33 bytes.
#line 1 "ENTRY_1036e1b0"

void __fastcall FUN_1036e1b0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 1036e250; body size 25 bytes.
#line 1 "ENTRY_1036e250"

void __fastcall FUN_1036e250(undefined4 *param_1)

{
  thunk_FUN_10353e20(param_1,*param_1);
  thunk_FUN_1148a50e(*param_1,0x14);
  return;
}


// Reference entry 103703b0; body size 61 bytes.
#line 1 "ENTRY_103703b0"

void __thiscall Recovered_Bulk::m_FUN_103703b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10370400; body size 61 bytes.
#line 1 "ENTRY_10370400"

void __thiscall Recovered_Bulk::m_FUN_10370400(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10370450; body size 61 bytes.
#line 1 "ENTRY_10370450"

void __thiscall Recovered_Bulk::m_FUN_10370450(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 103704a0; body size 61 bytes.
#line 1 "ENTRY_103704a0"

void __thiscall Recovered_Bulk::m_FUN_103704a0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 103704f0; body size 61 bytes.
#line 1 "ENTRY_103704f0"

void __thiscall Recovered_Bulk::m_FUN_103704f0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10370540; body size 61 bytes.
#line 1 "ENTRY_10370540"

void __thiscall Recovered_Bulk::m_FUN_10370540(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 10370590; body size 61 bytes.
#line 1 "ENTRY_10370590"

void __thiscall Recovered_Bulk::m_FUN_10370590(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 103705e0; body size 30 bytes.
#line 1 "ENTRY_103705e0"

void __thiscall Recovered_Bulk::m_FUN_103705e0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10370610; body size 30 bytes.
#line 1 "ENTRY_10370610"

void __thiscall Recovered_Bulk::m_FUN_10370610(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10370640; body size 30 bytes.
#line 1 "ENTRY_10370640"

void __thiscall Recovered_Bulk::m_FUN_10370640(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 10370670; body size 30 bytes.
#line 1 "ENTRY_10370670"

void __thiscall Recovered_Bulk::m_FUN_10370670(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 103706a0; body size 30 bytes.
#line 1 "ENTRY_103706a0"

void __thiscall Recovered_Bulk::m_FUN_103706a0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 103724a0; body size 33 bytes.
#line 1 "ENTRY_103724a0"

void __fastcall FUN_103724a0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_103539c0<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 103724d0; body size 33 bytes.
#line 1 "ENTRY_103724d0"

void __fastcall FUN_103724d0(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_10353b00(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 10372500; body size 32 bytes.
#line 1 "ENTRY_10372500"

void __fastcall FUN_10372500(int *param_1)

{
  thunk_FUN_10353e20(param_1,*param_1);
  *(int *)*param_1 = (int)(*param_1);
  *(int*)(*param_1 + 4) = (int)(*param_1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 103725d0; body size 61 bytes.
#line 1 "ENTRY_103725d0"

undefined4 FUN_103725d0(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_1029ecd0((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10372620; body size 61 bytes.
#line 1 "ENTRY_10372620"

undefined4 FUN_10372620(SCStr *param_1)

{
  bool bVar1;
  int iVar2;
  undefined1 local_c [12];
  
  iVar2 = (int)(thunk_FUN_10353d60((uint)&local_c,param_1), 0);
  if (*(char *)(*(int *)(iVar2 + 8) + 0xd) == '\0') {
    bVar1 = (bool)(((SCStr *)(param_1))->op_lt((SCStr *)(*(int *)(iVar2 + 8) + 0x10)), 0);
    if (!bVar1) {
      return (undefined4)(1);
    }
  }
  return (undefined4)(0);
}


// Reference entry 103735a0; body size 18 bytes.
#line 1 "ENTRY_103735a0"

undefined4 __stdcall FUN_103735a0(undefined4 param_1)

{
  thunk_FUN_10384dc0<>(param_1,1);
  return (undefined4)(param_1);
}


// Reference entry 103739b0; body size 18 bytes.
#line 1 "ENTRY_103739b0"

undefined4 __stdcall FUN_103739b0(undefined4 param_1)

{
  thunk_FUN_10384dc0<>(param_1,0);
  return (undefined4)(param_1);
}


// Reference entry 10374620; body size 21 bytes.
#line 1 "ENTRY_10374620"

undefined4 __thiscall Recovered_Bulk::m_FUN_10374620(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x1d4))(param_2);
  return (undefined4)(0);
}


// Reference entry 10376940; body size 59 bytes.
#line 1 "ENTRY_10376940"

void __stdcall FUN_10376940(int param_1,int param_2)

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


// Reference entry 10376990; body size 60 bytes.
#line 1 "ENTRY_10376990"

void __stdcall FUN_10376990(int param_1,int param_2)

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


// Reference entry 103769e0; body size 60 bytes.
#line 1 "ENTRY_103769e0"

void __stdcall FUN_103769e0(int param_1,int param_2)

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


// Reference entry 10376b50; body size 57 bytes.
#line 1 "ENTRY_10376b50"

void __fastcall FUN_10376b50(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 4) + 100))();
    piVar1 = (int *)(*(int **)(param_1 + 8), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  return;
}


// Reference entry 10376ba0; body size 60 bytes.
#line 1 "ENTRY_10376ba0"

void __fastcall FUN_10376ba0(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 4) + 0xbc))();
    piVar1 = (int *)(*(int **)(param_1 + 8), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  return;
}


// Reference entry 10376bf0; body size 57 bytes.
#line 1 "ENTRY_10376bf0"

void __fastcall FUN_10376bf0(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 4) + 0x14))();
    piVar1 = (int *)(*(int **)(param_1 + 8), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  return;
}


// Reference entry 10376c40; body size 57 bytes.
#line 1 "ENTRY_10376c40"

void __fastcall FUN_10376c40(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 4) + 0x30))();
    piVar1 = (int *)(*(int **)(param_1 + 8), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  return;
}


// Reference entry 10376c90; body size 57 bytes.
#line 1 "ENTRY_10376c90"

void __fastcall FUN_10376c90(int param_1)

{
  int *piVar1;
  
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
    (**(code **)(**(int **)(param_1 + 4) + 0x70))();
    piVar1 = (int *)(*(int **)(param_1 + 8), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + 4) = (undefined4)(0);
      *(undefined4*)(param_1 + 8) = (undefined4)(0);
      (**(code **)(*piVar1 + 8))();
    }
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
  }
  return;
}


// Reference entry 10376d40; body size 46 bytes.
#line 1 "ENTRY_10376d40"

void __fastcall FUN_10376d40(int param_1)

{
  char cVar1;
  
  if (*(short *)(param_1 + 0x5c) == 0) {
    cVar1 = (char)(thunk_FUN_11202440(param_1 + 0xdbd1), 0);
    if (cVar1 == '\0') {
      *(undefined2*)(param_1 + 0x5c) = (undefined2)(1000);
    }
  }
  thunk_FUN_111c1340();
  return;
}


// Reference entry 10376e70; body size 37 bytes.
#line 1 "ENTRY_10376e70"

void __thiscall Recovered_Bulk::m_FUN_10376e70(undefined4 param_2,SCStr *param_3)
{
  int param_1 = (int )this;
  bool bVar1;
  
  bVar1 = (bool)(((SCStr *)(param_3))->op_eq("SCIDateTimeManager:onTimeStatusChanged"), 0);
  if ((bVar1) && (*(int *)(param_1 + 8) != 0)) {
    thunk_FUN_1039ab20();
  }
  return;
}


// Reference entry 10376ea0; body size 35 bytes.
#line 1 "ENTRY_10376ea0"

void __thiscall Recovered_Bulk::m_FUN_10376ea0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(*(int *)(param_1 + 8) + 0x3c), 0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))(&param_2,param_3);
  }
  return;
}


// Reference entry 10377700; body size 43 bytes.
#line 1 "ENTRY_10377700"

void __fastcall FUN_10377700(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377740; body size 43 bytes.
#line 1 "ENTRY_10377740"

void __fastcall FUN_10377740(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377780; body size 43 bytes.
#line 1 "ENTRY_10377780"

void __fastcall FUN_10377780(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 103777c0; body size 43 bytes.
#line 1 "ENTRY_103777c0"

void __fastcall FUN_103777c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377800; body size 43 bytes.
#line 1 "ENTRY_10377800"

void __fastcall FUN_10377800(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377840; body size 43 bytes.
#line 1 "ENTRY_10377840"

void __fastcall FUN_10377840(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377880; body size 43 bytes.
#line 1 "ENTRY_10377880"

void __fastcall FUN_10377880(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 103778c0; body size 43 bytes.
#line 1 "ENTRY_103778c0"

void __fastcall FUN_103778c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377900; body size 43 bytes.
#line 1 "ENTRY_10377900"

void __fastcall FUN_10377900(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377940; body size 43 bytes.
#line 1 "ENTRY_10377940"

void __fastcall FUN_10377940(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377980; body size 43 bytes.
#line 1 "ENTRY_10377980"

void __fastcall FUN_10377980(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 103779c0; body size 43 bytes.
#line 1 "ENTRY_103779c0"

void __fastcall FUN_103779c0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377a00; body size 43 bytes.
#line 1 "ENTRY_10377a00"

void __fastcall FUN_10377a00(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377a40; body size 43 bytes.
#line 1 "ENTRY_10377a40"

void __fastcall FUN_10377a40(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 10377a80; body size 28 bytes.
#line 1 "ENTRY_10377a80"

void __fastcall FUN_10377a80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10377ab0; body size 28 bytes.
#line 1 "ENTRY_10377ab0"

void __fastcall FUN_10377ab0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10377ae0; body size 28 bytes.
#line 1 "ENTRY_10377ae0"

void __fastcall FUN_10377ae0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10377b10; body size 28 bytes.
#line 1 "ENTRY_10377b10"

void __fastcall FUN_10377b10(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 10377b40; body size 28 bytes.
#line 1 "ENTRY_10377b40"

void __fastcall FUN_10377b40(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  *param_1 = (int)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (int)(0);
  }
  return;
}


// Reference entry 103780c0; body size 21 bytes.
#line 1 "ENTRY_103780c0"

uint __fastcall FUN_103780c0(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 200) + 100))(), 0);
  uVar2 = (uint)((**(code **)(*piVar1 + 0x24))(), 0);
  return (uint)(uVar2 & 0xffffff01);
}


// Reference entry 10378190; body size 51 bytes.
#line 1 "ENTRY_10378190"

void FUN_10378190(void)

{
  char *pcStack_14;
  undefined4 uStack_10;
  char *pcStack_c;
  
  pcStack_c = (char *)("Fire onAreasChanged event.");
  uStack_10 = (undefined4)(2);
  pcStack_14 = (char *)("SCHousehold");
  thunk_FUN_112af4e0();
  pcStack_c = (char *)((char *)0x0);
  ((SCStr *)((SCStr *)&pcStack_14))->int_allocRep("SCIHousehold:onAreasChanged");
  thunk_FUN_103d65f0<>();
  return;
}


// Reference entry 10378380; body size 51 bytes.
#line 1 "ENTRY_10378380"

void FUN_10378380(void)

{
  char *pcStack_14;
  undefined4 uStack_10;
  char *pcStack_c;
  
  pcStack_c = (char *)("Fire onSearchablesListChanged event.");
  uStack_10 = (undefined4)(2);
  pcStack_14 = (char *)("SCHousehold");
  thunk_FUN_112af4e0();
  pcStack_c = (char *)((char *)0x0);
  ((SCStr *)((SCStr *)&pcStack_14))->int_allocRep("SCIHousehold:onSearchablesListChanged");
  thunk_FUN_103d63d0<>();
  return;
}


// Reference entry 103783c0; body size 31 bytes.
#line 1 "ENTRY_103783c0"

void FUN_103783c0(void)

{
  thunk_FUN_112af4e0("SCHousehold",2,"Fire zone groups changed event.");
  thunk_FUN_103892b0();
  return;
}


// Reference entry 10378660; body size 37 bytes.
#line 1 "ENTRY_10378660"

void __fastcall FUN_10378660(int param_1)

{
  undefined2 local_8 [2];
  undefined4 local_4;
  
  local_8[0] = (undefined2)(*(undefined2 *)(param_1 + 0x834));
  local_4 = (undefined4)(1);
  thunk_FUN_1038a5a0((uint)&local_8,0);
  return;
}


// Reference entry 10378690; body size 32 bytes.
#line 1 "ENTRY_10378690"

undefined4 __fastcall FUN_10378690(int *param_1)

{
  char cVar1;
  
  if (param_1[0x15] != 0) {
    cVar1 = (char)((**(code **)(*param_1 + 0x18))(), 0);
    if (cVar1 != '\0') {
      return (undefined4)(*(undefined4 *)(param_1[0x15] + 0x34));
    }
  }
  return (undefined4)(0);
}


// Reference entry 10378730; body size 21 bytes.
#line 1 "ENTRY_10378730"

SCStr * __stdcall FUN_10378730(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DisplayWizard");
  return (SCStr *)(param_1);
}


// Reference entry 10378770; body size 21 bytes.
#line 1 "ENTRY_10378770"

SCStr * __stdcall FUN_10378770(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("DialogUpdateSettings");
  return (SCStr *)(param_1);
}


// Reference entry 10379f10; body size 33 bytes.
#line 1 "ENTRY_10379f10"

undefined4 __fastcall FUN_10379f10(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  if (param_1[0x15] != 0) {
    cVar1 = (char)((**(code **)(*param_1 + 0x18))(), 0);
    if (cVar1 != '\0') {
      uVar2 = (undefined4)(thunk_FUN_10ce0060(), 0);
      return (undefined4)(uVar2);
    }
  }
  return (undefined4)(0);
}


// Reference entry 10379fd0; body size 21 bytes.
#line 1 "ENTRY_10379fd0"

SCStr * __stdcall FUN_10379fd0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 1037a010; body size 21 bytes.
#line 1 "ENTRY_1037a010"

SCStr * __stdcall FUN_1037a010(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCIActionCategoryDefault");
  return (SCStr *)(param_1);
}


// Reference entry 1037c360; body size 28 bytes.
#line 1 "ENTRY_1037c360"

undefined4 __stdcall FUN_1037c360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_103869d0(param_1,3,0,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 1037c5d0; body size 23 bytes.
#line 1 "ENTRY_1037c5d0"

SCStr * __thiscall Recovered_Bulk::m_FUN_1037c5d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xd0));
  return (SCStr *)(param_2);
}


// Reference entry 1037cb60; body size 33 bytes.
#line 1 "ENTRY_1037cb60"

int * __fastcall FUN_1037cb60(int *param_1)

{
  char cVar1;
  
  if (param_1[0x15] != 0) {
    cVar1 = (char)((**(code **)(*param_1 + 0x18))(), 0);
    if (cVar1 != '\0') {
      return (int *)((int *)(param_1[0x15] + 0x2c));
    }
  }
  return (int *)(param_1 + 0x16);
}


// Reference entry 1037cbb0; body size 24 bytes.
#line 1 "ENTRY_1037cbb0"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_1037cbb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 0x838));
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x834));
  param_2[1] = (undefined4)(uVar1);
  return (undefined4 *)(param_2);
}


// Reference entry 1037d000; body size 23 bytes.
#line 1 "ENTRY_1037d000"

SCStr * __thiscall Recovered_Bulk::m_FUN_1037d000(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x158));
  return (SCStr *)(param_2);
}


// Reference entry 1037d020; body size 23 bytes.
#line 1 "ENTRY_1037d020"

SCStr * __thiscall Recovered_Bulk::m_FUN_1037d020(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xd4));
  return (SCStr *)(param_2);
}


// Reference entry 1037ddb0; body size 26 bytes.
#line 1 "ENTRY_1037ddb0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1037ddb0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 200) + 0x48))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1037e9a0; body size 30 bytes.
#line 1 "ENTRY_1037e9a0"

undefined4 __stdcall FUN_1037e9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_103869d0(param_1,4,param_2,param_3,param_4);
  return (undefined4)(param_1);
}


// Reference entry 1037ef60; body size 21 bytes.
#line 1 "ENTRY_1037ef60"

SCStr * __stdcall FUN_1037ef60(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 1037efa0; body size 55 bytes.
#line 1 "ENTRY_1037efa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1037efa0(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(), 0);
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_111134e0(), 0);
    thunk_FUN_1037b520(param_2,uVar2);
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 1037eff0; body size 28 bytes.
#line 1 "ENTRY_1037eff0"

int * __thiscall Recovered_Bulk::m_FUN_1037eff0(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe8), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10380b80; body size 28 bytes.
#line 1 "ENTRY_10380b80"

int * __thiscall Recovered_Bulk::m_FUN_10380b80(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0xe0), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 4))();
  }
  return (int *)(param_2);
}


// Reference entry 10381020; body size 46 bytes.
#line 1 "ENTRY_10381020"

undefined4 __thiscall Recovered_Bulk::m_FUN_10381020(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar2 = (undefined1 *)((undefined1 *)*param_2);
  }
  iVar1 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 4))(puVar2,1), 0);
  if (iVar1 != 0) {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x534));
  }
  return (undefined4)(0);
}


// Reference entry 103810f0; body size 28 bytes.
#line 1 "ENTRY_103810f0"

undefined4 __stdcall FUN_103810f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_103869d0(param_1,2,0,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 103816c0; body size 28 bytes.
#line 1 "ENTRY_103816c0"

undefined4 __stdcall FUN_103816c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_103869d0(param_1,5,0,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10381a10; body size 30 bytes.
#line 1 "ENTRY_10381a10"

undefined4 __stdcall FUN_10381a10(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  thunk_FUN_103869d0(param_1,6,param_2,param_3,param_4);
  return (undefined4)(param_1);
}


// Reference entry 10381cf0; body size 28 bytes.
#line 1 "ENTRY_10381cf0"

undefined4 __stdcall FUN_10381cf0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_103869d0(param_1,0,0,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10382120; body size 23 bytes.
#line 1 "ENTRY_10382120"

SCStr * __thiscall Recovered_Bulk::m_FUN_10382120(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x10f4));
  return (SCStr *)(param_2);
}


// Reference entry 103827f0; body size 42 bytes.
#line 1 "ENTRY_103827f0"

int __fastcall FUN_103827f0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(), 0);
  if (iVar1 != 0) {
    thunk_FUN_1127d260(iVar1 + 0x2d44c);
  }
  return (int)(param_1 + 0x840);
}


// Reference entry 10382860; body size 26 bytes.
#line 1 "ENTRY_10382860"

undefined4 __thiscall Recovered_Bulk::m_FUN_10382860(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 200) + 0x50))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10383b80; body size 62 bytes.
#line 1 "ENTRY_10383b80"

undefined4 __fastcall FUN_10383b80(int param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)((**(code **)(*(int *)(param_1 + 0xc) + 0x14))(9), 0);
  uVar3 = (uint)(0);
  if (uVar2 != 0) {
    do {
      (**(code **)(*(int *)(param_1 + 0xc) + 0x18))(uVar3,9);
      cVar1 = (char)(thunk_FUN_110d8cb0(), 0);
      if (cVar1 != '\0') {
        return (undefined4)(1);
      }
      uVar3 = (uint)(uVar3 + 1);
    } while (uVar3 < uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 10384640; body size 39 bytes.
#line 1 "ENTRY_10384640"

void __fastcall FUN_10384640(int param_1)

{
  short local_8 [2];
  undefined4 local_4;
  
  local_8[0] = (short)(*(short *)(param_1 + 0x834) + 1);
  local_4 = (undefined4)(2);
  thunk_FUN_1038a5a0((uint)&local_8,0);
  return;
}


// Reference entry 1038a930; body size 38 bytes.
#line 1 "ENTRY_1038a930"

void __fastcall FUN_1038a930(int param_1)

{
  if (*(int *)(param_1 + 200) != 0) {
    (**(code **)(*(int *)(param_1 + 0x9c) + 4))(*(int *)(param_1 + 200));
    *(undefined1*)(param_1 + 0x806) = (undefined1)(1);
  }
  return;
}


// Reference entry 1038a960; body size 38 bytes.
#line 1 "ENTRY_1038a960"

void __fastcall FUN_1038a960(int param_1)

{
  if (*(int *)(param_1 + 0xcc) != 0) {
    (**(code **)(*(int *)(param_1 + 0x9c) + 4))(*(int *)(param_1 + 0xcc));
    *(undefined1*)(param_1 + 0x807) = (undefined1)(1);
  }
  return;
}


// Reference entry 1038d370; body size 41 bytes.
#line 1 "ENTRY_1038d370"

undefined4 __fastcall FUN_1038d370(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(), 0);
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 200) + 100))();
    uVar2 = (undefined4)(thunk_FUN_11092a60(), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 1038d570; body size 25 bytes.
#line 1 "ENTRY_1038d570"

undefined1 __fastcall FUN_1038d570(int param_1)

{
  int iVar1;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(), 0);
  if (iVar1 != 0) {
    return (undefined1)(*(undefined1 *)(iVar1 + 0x6c9));
  }
  return (undefined1)(0);
}


// Reference entry 1038d5c0; body size 31 bytes.
#line 1 "ENTRY_1038d5c0"

uint __fastcall FUN_1038d5c0(int param_1)

{
  uint in_EAX;
  int *piVar1;
  uint uVar2;
  
  if (*(int **)(param_1 + 200) != (int *)((0x0))) {
    piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 200) + 100))(), 0);
    in_EAX = (uint)(0);
    if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
      uVar2 = (uint)((**(code **)(*piVar1 + 0x44))(), 0);
      return (uint)(uVar2);
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1038da80; body size 35 bytes.
#line 1 "ENTRY_1038da80"

undefined1 FUN_1038da80(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (int)(1);
  do {
    iVar3 = (int)(iVar2);
    thunk_FUN_10be4f80(iVar2);
    cVar1 = (char)(thunk_FUN_10be9ed0<>(iVar3), 0);
    if (cVar1 != '\0') {
      return (undefined1)(1);
    }
    iVar2 = (int)(iVar2 + 1);
  } while (iVar2 < 4);
  return (undefined1)(0);
}


// Reference entry 1038de80; body size 25 bytes.
#line 1 "ENTRY_1038de80"

undefined4 __fastcall FUN_1038de80(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (int)((**(code **)(**(int **)(param_1 + 200) + 100))(), 0);
  if (iVar1 != 0) {
    uVar2 = (undefined4)(thunk_FUN_11093230(), 0);
    return (undefined4)(uVar2);
  }
  return (undefined4)(0);
}


// Reference entry 1038f0b0; body size 19 bytes.
#line 1 "ENTRY_1038f0b0"

uint __fastcall FUN_1038f0b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x14))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1038f0d0; body size 19 bytes.
#line 1 "ENTRY_1038f0d0"

uint __fastcall FUN_1038f0d0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x14))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1038f0f0; body size 19 bytes.
#line 1 "ENTRY_1038f0f0"

uint __fastcall FUN_1038f0f0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x48))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1038f110; body size 19 bytes.
#line 1 "ENTRY_1038f110"

uint __fastcall FUN_1038f110(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x1c))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1038f130; body size 19 bytes.
#line 1 "ENTRY_1038f130"

uint __fastcall FUN_1038f130(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0x18))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 1038f170; body size 17 bytes.
#line 1 "ENTRY_1038f170"

void __stdcall FUN_1038f170(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCINowPlaying:onMusicChanged");
  return;
}


// Reference entry 1038f1a0; body size 17 bytes.
#line 1 "ENTRY_1038f1a0"

void __stdcall FUN_1038f1a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->op_eq("SCISystemStatusManager:onUserDismissedSystemStatus");
  return;
}


// Reference entry 1038f760; body size 37 bytes.
#line 1 "ENTRY_1038f760"

void __thiscall Recovered_Bulk::m_FUN_1038f760(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  undefined4 unaff_ESI;
  
  iVar1 = (int)((**(code **)(*(int *)(param_1 + 0xc) + 4))(param_2,1), 0);
  if (iVar1 == 0) {
    (**(code **)(*(int *)(param_1 + 0xc) + 8))(unaff_ESI);
  }
  return;
}


// Reference entry 1038fab0; body size 26 bytes.
#line 1 "ENTRY_1038fab0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1038fab0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 200) + 0x34))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 1038fad0; body size 26 bytes.
#line 1 "ENTRY_1038fad0"

undefined4 __thiscall Recovered_Bulk::m_FUN_1038fad0(undefined4 param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  (**(code **)(**(int **)(param_1 + 200) + 0x18))(param_2);
  return (undefined4)(param_3);
}


// Reference entry 10390c70; body size 55 bytes.
#line 1 "ENTRY_10390c70"

void __thiscall Recovered_Bulk::m_FUN_10390c70(int param_2)
{
  int param_1 = (int )this;
  if ((-(uint)(param_2 != 0) & param_2 + 0xcU) == *(uint *)(param_1 + 0x2c)) {
    thunk_FUN_10388ec0();
    return;
  }
  thunk_FUN_112af4e0("SCHousehold",1, "Received an event from an adapter that wasn\'t assigned to us.");
  return;
}


// Reference entry 10391dd0; body size 35 bytes.
#line 1 "ENTRY_10391dd0"

void __stdcall FUN_10391dd0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_112af4e0("SCHousehold",2,"Fire zone groups changed event.");
  thunk_FUN_103892b0();
  return;
}


// Reference entry 10391f70; body size 25 bytes.
#line 1 "ENTRY_10391f70"

void __stdcall FUN_10391f70(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_1039b470();
  thunk_FUN_103892b0();
  return;
}


// Reference entry 10392ae0; body size 16 bytes.
#line 1 "ENTRY_10392ae0"

void __fastcall FUN_10392ae0(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)((0x0))) {
                    
                    
    (**(code **)(**(int **)(param_1 + 4) + 0xc0))();
    return;
  }
  return;
}


// Reference entry 103936d0; body size 61 bytes.
#line 1 "ENTRY_103936d0"

void __fastcall FUN_103936d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  undefined4 *puVar1;
  undefined4 *extraout_ECX;
  SCStr *pSVar2;
  undefined4 *puStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  pSVar2 = (SCStr *)((SCStr *)param_1[1]);
  puVar1 = (undefined4 *)(param_1);
  if ((SCStr *)(pSVar2) != (SCStr *)param_1[2]) {
    do {
      uStack_10 = (undefined4)(*(undefined4 *)(pSVar2 + 0xc));
      uStack_14 = (undefined4)(*(undefined4 *)(pSVar2 + 4));
      puStack_18 = (undefined4 *)(puVar1);
      ((SCStr *)((SCStr *)&puStack_18))->m_op_ctor(pSVar2);
      thunk_FUN_103d65f0<>();
      pSVar2 = (SCStr *)(pSVar2 + 0x18);
      puVar1 = (undefined4 *)(extraout_ECX);
    } while ((SCStr *)(pSVar2) != (SCStr *)param_1[2]);
  }
  uStack_10 = (undefined4)(1);
  uStack_14 = (undefined4)(0x10393707);
  (**(code **)*param_1)();
  return;
}


// Reference entry 10393b80; body size 59 bytes.
#line 1 "ENTRY_10393b80"

void __thiscall Recovered_Bulk::m_FUN_10393b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_103535f0<>(puVar1,param_2);
  return;
}


// Reference entry 10393bd0; body size 59 bytes.
#line 1 "ENTRY_10393bd0"

void __thiscall Recovered_Bulk::m_FUN_10393bd0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    piVar2 = (int *)((int *)param_2[1]);
    puVar1[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
    return;
  }
  thunk_FUN_103532a0<>(puVar1,param_2);
  return;
}


// Reference entry 10395b50; body size 26 bytes.
#line 1 "ENTRY_10395b50"

void __fastcall FUN_10395b50(int param_1)

{
  (**(code **)(**(int **)(param_1 + 200) + 0x24))();
                    
                    
  (**(code **)(**(int **)(param_1 + 0xcc) + 0x24))();
  return;
}


// Reference entry 103965a0; body size 42 bytes.
#line 1 "ENTRY_103965a0"

int __fastcall FUN_103965a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)(27000);
  iVar1 = (int)(param_1 + 0xd7d0);
  thunk_FUN_1124ff50("ZoneGroupState");
  thunk_FUN_112503c0(iVar1,uVar2);
  return (int)(param_1);
}


// Reference entry 103967f0; body size 18 bytes.
#line 1 "ENTRY_103967f0"

void __fastcall FUN_103967f0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)(**(code **)(**(int **)(param_1 + 0xb8) + 100))(), 0);
                    
                    
  (**(code **)(*piVar1 + 0x30))();
  return;
}


// Reference entry 103970a0; body size 22 bytes.
#line 1 "ENTRY_103970a0"

void __fastcall FUN_103970a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  if (*(int *)(param_1 + 0xf0) == 0) {
    return;
  }
  FUN_102bad40();
  return;
}


// Reference entry 10398f40; body size 19 bytes.
#line 1 "ENTRY_10398f40"

void __thiscall Recovered_Bulk::m_FUN_10398f40(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x1c8))(param_2,0,1);
  return;
}


// Reference entry 103994e0; body size 24 bytes.
#line 1 "ENTRY_103994e0"

void __thiscall Recovered_Bulk::m_FUN_103994e0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
    (**(code **)(**(int **)(param_2 + 4) + 0x14))(*(undefined4 *)(param_1 + 4));
  }
  return;
}


// Reference entry 10399f60; body size 19 bytes.
#line 1 "ENTRY_10399f60"

void __thiscall Recovered_Bulk::m_FUN_10399f60(undefined4 param_2)
{
  int *param_1 = (int *)this;
  (**(code **)(*param_1 + 0x1c8))(param_2,0,0);
  return;
}


// Reference entry 1039a9b0; body size 46 bytes.
#line 1 "ENTRY_1039a9b0"

void __fastcall FUN_1039a9b0(int param_1)

{
  if (*(int *)(param_1 + 0x7a0) != 0) {
    thunk_FUN_10c83fc0();
    if (*(undefined4 **)(param_1 + 0x7a0) != (undefined4 *)((0x0))) {
      (**(code **)**(undefined4 **)(param_1 + 0x7a0))(1);
    }
    *(undefined4*)(param_1 + 0x7a0) = (undefined4)(0);
  }
  return;
}


// Reference entry 1039a9f0; body size 17 bytes.
#line 1 "ENTRY_1039a9f0"

void FUN_1039a9f0(void)

{
  int iVar1;
  
  iVar1 = (int)(thunk_FUN_110c2c60(), 0);
  if (iVar1 != 0) {
    thunk_FUN_110c4b80();
    return;
  }
  return;
}


// Reference entry 1039b7c0; body size 45 bytes.
#line 1 "ENTRY_1039b7c0"

void __fastcall FUN_1039b7c0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x120) != 0) {
    thunk_FUN_1059d940(*(int *)(param_1 + 0x120));
  }
  uVar1 = (undefined4)(thunk_FUN_1059d5a0<>(10000), 0);
  *(undefined4*)(param_1 + 0x120) = (undefined4)(uVar1);
  return;
}


// Reference entry 1039ea20; body size 46 bytes.
#line 1 "ENTRY_1039ea20"

undefined4 __fastcall FUN_1039ea20(int param_1)

{
  char cVar1;
  
  cVar1 = (char)((**(code **)(**(int **)(param_1 + 200) + 0x60))(), 0);
  if ((cVar1 != '\0') &&
     ((*(char *)(param_1 + 0x809) != '\0' || (*(char *)(param_1 + 0x801) == '\0')))) {
    return (undefined4)(0);
  }
  return (undefined4)(1);
}


// Reference entry 1039f140; body size 41 bytes.
#line 1 "ENTRY_1039f140"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1039f140(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1039f1e0; body size 24 bytes.
#line 1 "ENTRY_1039f1e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1039f1e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1039f200; body size 24 bytes.
#line 1 "ENTRY_1039f200"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1039f200(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1039f220; body size 24 bytes.
#line 1 "ENTRY_1039f220"

undefined4 * __thiscall Recovered_Bulk::m_FUN_1039f220(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1039f850; body size 19 bytes.
#line 1 "ENTRY_1039f850"

void __fastcall FUN_1039f850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039f870; body size 19 bytes.
#line 1 "ENTRY_1039f870"

void __fastcall FUN_1039f870(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039f890; body size 19 bytes.
#line 1 "ENTRY_1039f890"

void __fastcall FUN_1039f890(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1039fca0; body size 60 bytes.
#line 1 "ENTRY_1039fca0"

void __fastcall FUN_1039fca0(int *param_1)

{ int stack0xfffffffc;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 1039ff20; body size 37 bytes.
#line 1 "ENTRY_1039ff20"

void __fastcall FUN_1039ff20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptorInternals);
  thunk_FUN_11255560();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103a0070; body size 38 bytes.
#line 1 "ENTRY_103a0070"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a0070(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a00a0; body size 38 bytes.
#line 1 "ENTRY_103a00a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a00a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a00d0; body size 45 bytes.
#line 1 "ENTRY_103a00d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a00d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a0110; body size 45 bytes.
#line 1 "ENTRY_103a0110"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a0110(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a0150; body size 45 bytes.
#line 1 "ENTRY_103a0150"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a0150(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a0190; body size 32 bytes.
#line 1 "ENTRY_103a0190"

undefined4 __thiscall Recovered_Bulk::m_FUN_103a0190(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1039f8b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103a01c0; body size 32 bytes.
#line 1 "ENTRY_103a01c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103a01c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1039fa00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103a01f0; body size 58 bytes.
#line 1 "ENTRY_103a01f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a01f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddAccountXAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdbd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a0240; body size 58 bytes.
#line 1 "ENTRY_103a0240"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a0240(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpSPAddOAuthAccountXAIOOp);
  thunk_FUN_111c0af0<>();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xdfd0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a0290; body size 33 bytes.
#line 1 "ENTRY_103a0290"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a0290(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a02c0; body size 33 bytes.
#line 1 "ENTRY_103a02c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a02c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a02f0; body size 33 bytes.
#line 1 "ENTRY_103a02f0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a02f0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a0320; body size 45 bytes.
#line 1 "ENTRY_103a0320"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a0320(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAddAccountX);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAddAccountX);
  thunk_FUN_1039f8b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a0510; body size 62 bytes.
#line 1 "ENTRY_103a0510"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a0510(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCServiceDescriptorInternals);
  thunk_FUN_11255560();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x25c);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a0840; body size 61 bytes.
#line 1 "ENTRY_103a0840"

void __thiscall Recovered_Bulk::m_FUN_103a0840(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 103a1490; body size 21 bytes.
#line 1 "ENTRY_103a1490"

SCStr * __stdcall FUN_103a1490(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCOpAddAccountX");
  return (SCStr *)(param_1);
}


// Reference entry 103a14b0; body size 21 bytes.
#line 1 "ENTRY_103a14b0"

SCStr * __stdcall FUN_103a14b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCServiceDescriptor");
  return (SCStr *)(param_1);
}


// Reference entry 103a14d0; body size 21 bytes.
#line 1 "ENTRY_103a14d0"

SCStr * __stdcall FUN_103a14d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCServiceDescriptorInternals");
  return (SCStr *)(param_1);
}


// Reference entry 103a14f0; body size 43 bytes.
#line 1 "ENTRY_103a14f0"

void __fastcall FUN_103a14f0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 103a1540; body size 21 bytes.
#line 1 "ENTRY_103a1540"

SCStr * __stdcall FUN_103a1540(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103a1560; body size 25 bytes.
#line 1 "ENTRY_103a1560"

SCStr * __thiscall Recovered_Bulk::m_FUN_103a1560(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0xdbd0));
  return (SCStr *)(param_2);
}


// Reference entry 103a1580; body size 26 bytes.
#line 1 "ENTRY_103a1580"

uint __fastcall FUN_103a1580(int *param_1)

{
  if (*param_1 == (int)((0))) {
    return (uint)(*(int *)(param_1[1] + 0x134) << 8 | 7);
  }
  return (uint)((uint)*(byte *)(param_1 + 2));
}


// Reference entry 103a15c0; body size 25 bytes.
#line 1 "ENTRY_103a15c0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103a15c0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0xd7d0));
  return (SCStr *)(param_2);
}


// Reference entry 103a15e0; body size 25 bytes.
#line 1 "ENTRY_103a15e0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103a15e0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep((char *)(*(int *)(param_1 + 0x18) + 0xd7d0));
  return (SCStr *)(param_2);
}


// Reference entry 103a17e0; body size 40 bytes.
#line 1 "ENTRY_103a17e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103a17e0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iStack_c;
  
  iStack_c = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_c))->int_allocRep("MusicMenu");
  thunk_FUN_1054ced0(param_2,*(undefined4 *)(param_1 + 0x10));
  return (undefined4)(param_2);
}


// Reference entry 103a1850; body size 21 bytes.
#line 1 "ENTRY_103a1850"

SCStr * __stdcall FUN_103a1850(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103a1870; body size 21 bytes.
#line 1 "ENTRY_103a1870"

SCStr * __stdcall FUN_103a1870(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103a1fb0; body size 22 bytes.
#line 1 "ENTRY_103a1fb0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103a1fb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->int_allocRep(*(char **)(*(int *)(param_1 + 0x14) + 4));
  return (SCStr *)(param_2);
}


// Reference entry 103a2ec0; body size 39 bytes.
#line 1 "ENTRY_103a2ec0"

undefined1 __fastcall FUN_103a2ec0(int param_1)

{
  char cVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return (undefined1)(0);
  }
  cVar1 = (char)(thunk_FUN_110c4a40(), 0);
  if ((cVar1 == '\0') && (cVar1 = (char)(thunk_FUN_110c4a70(), 0), cVar1 == '\0')) {
    return (undefined1)(0);
  }
  return (undefined1)(1);
}


// Reference entry 103a2f10; body size 19 bytes.
#line 1 "ENTRY_103a2f10"

undefined1 __fastcall FUN_103a2f10(int param_1)

{
  undefined1 uVar1;
  
  if (**(int **)(param_1 + 0x14) == 0) {
    uVar1 = (undefined1)(thunk_FUN_11283440(), 0);
    return (undefined1)(uVar1);
  }
  return (undefined1)(0);
}


// Reference entry 103a2f50; body size 27 bytes.
#line 1 "ENTRY_103a2f50"

uint __fastcall FUN_103a2f50(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x14), 0);
  if (*piVar1 == (int)((0))) {
    return (uint)(((uint)((int3)((uint)piVar1[1] >> 8)) << 8 | (uint)(*(char *)(piVar1[1] + 0x12d) == '\x02')));
  }
  return (uint)((uint)piVar1 & 0xffffff00);
}


// Reference entry 103a2fb0; body size 19 bytes.
#line 1 "ENTRY_103a2fb0"

undefined1 __fastcall FUN_103a2fb0(int param_1)

{
  undefined1 uVar1;
  
  if (*(int *)(param_1 + 0x14) == 0) {
    return (undefined1)(0);
  }
  uVar1 = (undefined1)(FUN_110c4b00(), 0);
  return (undefined1)(uVar1);
}


// Reference entry 103a30e0; body size 27 bytes.
#line 1 "ENTRY_103a30e0"

uint __fastcall FUN_103a30e0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x14), 0);
  if (*piVar1 == (int)((0))) {
    return (uint)(((uint)((int3)((uint)piVar1[1] >> 8)) << 8 | (uint)(*(char *)(piVar1[1] + 0x12d) == '\x01')));
  }
  return (uint)((uint)piVar1 & 0xffffff00);
}


// Reference entry 103a3270; body size 50 bytes.
#line 1 "ENTRY_103a3270"

void __thiscall Recovered_Bulk::m_FUN_103a3270(int param_2)
{
  int param_1 = (int )this;
  if ((param_2 == 1) || (param_2 == 2)) {
    *(undefined4*)(param_1 + 4) = (undefined4)(0xca07);
    return;
  }
  if ((param_2 != 0xd) && (param_2 != 0xe)) {
    *(int*)(param_1 + 4) = (int)(param_2);
    return;
  }
  *(undefined4*)(param_1 + 4) = (undefined4)(0xcb07);
  return;
}


// Reference entry 103a4d20; body size 33 bytes.
#line 1 "ENTRY_103a4d20"

void __thiscall Recovered_Bulk::m_FUN_103a4d20(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_103a4d50(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 103a4f40; body size 60 bytes.
#line 1 "ENTRY_103a4f40"

int __thiscall Recovered_Bulk::m_FUN_103a4f40(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_103a4f90((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 103a57f0; body size 30 bytes.
#line 1 "ENTRY_103a57f0"

void __thiscall Recovered_Bulk::m_FUN_103a57f0(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 103a5de0; body size 41 bytes.
#line 1 "ENTRY_103a5de0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a5de0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a5e40; body size 41 bytes.
#line 1 "ENTRY_103a5e40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a5e40(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a5e80; body size 41 bytes.
#line 1 "ENTRY_103a5e80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a5e80(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a5ee0; body size 24 bytes.
#line 1 "ENTRY_103a5ee0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a5ee0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a5f00; body size 24 bytes.
#line 1 "ENTRY_103a5f00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a5f00(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a5f20; body size 24 bytes.
#line 1 "ENTRY_103a5f20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a5f20(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    (**(code **)(*param_2 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a6180; body size 48 bytes.
#line 1 "ENTRY_103a6180"

undefined4 * __fastcall FUN_103a6180(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 103a63b0; body size 62 bytes.
#line 1 "ENTRY_103a63b0"

undefined4 * __fastcall FUN_103a63b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  puVar1 = (undefined4 *)(operator_new(8), 0);
  puVar1[1] = (undefined4)(0);
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 103a6400; body size 62 bytes.
#line 1 "ENTRY_103a6400"

undefined4 * __fastcall FUN_103a6400(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  puVar1 = (undefined4 *)(operator_new(8), 0);
  puVar1[1] = (undefined4)(0);
  *param_1 = (undefined4)(puVar1);
  *puVar1 = (undefined4)(param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 103a7690; body size 19 bytes.
#line 1 "ENTRY_103a7690"

void __fastcall FUN_103a7690(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103a79b0; body size 60 bytes.
#line 1 "ENTRY_103a79b0"

void __fastcall FUN_103a79b0(int *param_1)

{ int stack0xfffffffc;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 103a7a10; body size 60 bytes.
#line 1 "ENTRY_103a7a10"

void __fastcall FUN_103a7a10(int *param_1)

{ int stack0xfffffffc;
 try {
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  if ((int *)*param_1 != (int *)((0x0))) {
    (**(code **)(*(int *)*param_1 + 8))(DAT_12126b84 ^ (uint)&stack0xfffffffc);
  }

  return;

 } catch (...) { }
}


// Reference entry 103a7a90; body size 19 bytes.
#line 1 "ENTRY_103a7a90"

void __fastcall FUN_103a7a90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 103a7ab0; body size 28 bytes.
#line 1 "ENTRY_103a7ab0"

void __fastcall FUN_103a7ab0(int *param_1)

{
  thunk_FUN_103a4d50(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 103a7b90; body size 19 bytes.
#line 1 "ENTRY_103a7b90"

void __fastcall FUN_103a7b90(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 103a7ef0; body size 28 bytes.
#line 1 "ENTRY_103a7ef0"

void __fastcall FUN_103a7ef0(int *param_1)

{
  thunk_FUN_103a4d50(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x1c);
  return;
}


// Reference entry 103a8730; body size 19 bytes.
#line 1 "ENTRY_103a8730"

void __fastcall FUN_103a8730(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103a92b0; body size 18 bytes.
#line 1 "ENTRY_103a92b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103a92b0(undefined4 param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103a9240<>(param_2);
  return (undefined4)(param_1);
}


// Reference entry 103a9700; body size 45 bytes.
#line 1 "ENTRY_103a9700"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a9700(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a9a30; body size 35 bytes.
#line 1 "ENTRY_103a9a30"

undefined4 __thiscall Recovered_Bulk::m_FUN_103a9a30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103a81d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x298);
  }
  return (undefined4)(param_1);
}


// Reference entry 103a9a60; body size 35 bytes.
#line 1 "ENTRY_103a9a60"

undefined4 __thiscall Recovered_Bulk::m_FUN_103a9a60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103a8350();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xe0);
  }
  return (undefined4)(param_1);
}


// Reference entry 103a9b30; body size 45 bytes.
#line 1 "ENTRY_103a9b30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a9b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a9c20; body size 45 bytes.
#line 1 "ENTRY_103a9c20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a9c20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103a9c60; body size 33 bytes.
#line 1 "ENTRY_103a9c60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103a9c60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103aa070; body size 25 bytes.
#line 1 "ENTRY_103aa070"

void __fastcall FUN_103aa070(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 103ab4c0; body size 31 bytes.
#line 1 "ENTRY_103ab4c0"

int * FUN_103ab4c0(int *param_1)

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


// Reference entry 103abc70; body size 61 bytes.
#line 1 "ENTRY_103abc70"

void __thiscall Recovered_Bulk::m_FUN_103abc70(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 103abcc0; body size 61 bytes.
#line 1 "ENTRY_103abcc0"

void __thiscall Recovered_Bulk::m_FUN_103abcc0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 103abd10; body size 61 bytes.
#line 1 "ENTRY_103abd10"

void __thiscall Recovered_Bulk::m_FUN_103abd10(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (undefined4)(param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    uVar2 = (undefined4)((**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(uVar2);
    return;
  }
  param_1[1] = (undefined4)(0);
  return;
}


// Reference entry 103abd60; body size 30 bytes.
#line 1 "ENTRY_103abd60"

void __thiscall Recovered_Bulk::m_FUN_103abd60(int param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  piVar1 = (int *)((int *)*param_1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    *param_1 = (int)(0);
    (**(code **)(*piVar1 + 8))();
  }
  *param_1 = (int)(param_2);
  return;
}


// Reference entry 103abfd0; body size 42 bytes.
#line 1 "ENTRY_103abfd0"

int __fastcall FUN_103abfd0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 1 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 1) * 8);
}


// Reference entry 103ac010; body size 43 bytes.
#line 1 "ENTRY_103ac010"

int __fastcall FUN_103ac010(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 3) * 4);
}


// Reference entry 103ac150; body size 33 bytes.
#line 1 "ENTRY_103ac150"

void __fastcall FUN_103ac150(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_103a4d50(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 103ac180; body size 31 bytes.
#line 1 "ENTRY_103ac180"

void __fastcall FUN_103ac180(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1[0x1c]);
  while (1 < uVar1) {
    (**(code **)(*param_1 + 0x20))();
    uVar1 = (uint)(param_1[0x1c]);
  }
  return;
}


// Reference entry 103ac1b0; body size 43 bytes.
#line 1 "ENTRY_103ac1b0"

void __fastcall FUN_103ac1b0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xd8));
  thunk_FUN_103a4d50(param_1 + 0xd8,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  *(undefined4*)(param_1 + 0xdc) = (undefined4)(0);
  return;
}


// Reference entry 103b7840; body size 21 bytes.
#line 1 "ENTRY_103b7840"

SCStr * __stdcall FUN_103b7840(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103b78c0; body size 21 bytes.
#line 1 "ENTRY_103b78c0"

SCStr * __stdcall FUN_103b78c0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103b8600; body size 59 bytes.
#line 1 "ENTRY_103b8600"

SCStr * __thiscall Recovered_Bulk::m_FUN_103b8600(SCStr *param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x70) + *(int *)(param_1 + 0x6c)) - 1);
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(*(int *)(param_1 + 100) + (uVar1 >> 2 & *(int *)(param_1 + 0x68) - 1U) * 4) + (uVar1 & 3) * 4));
  return (SCStr *)(param_2);
}


// Reference entry 103b8d90; body size 48 bytes.
#line 1 "ENTRY_103b8d90"

undefined1 __fastcall FUN_103b8d90(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    iVar2 = (int)(thunk_FUN_11128910(), 0);
    cVar1 = (char)(thunk_FUN_101a2c70(iVar2 + 0x8d,param_1 + 0x280), 0);
    if (cVar1 == '\0') {
      *(undefined1*)(param_1 + 0x40) = (undefined1)(1);
    }
  }
  return (undefined1)(*(undefined1 *)(param_1 + 0x40));
}


// Reference entry 103b8dd0; body size 48 bytes.
#line 1 "ENTRY_103b8dd0"

undefined1 __fastcall FUN_103b8dd0(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    iVar2 = (int)(thunk_FUN_11128910(), 0);
    cVar1 = (char)(thunk_FUN_101a2c70(iVar2 + 0x8d,param_1 + 0x84), 0);
    if (cVar1 == '\0') {
      *(undefined1*)(param_1 + 0x40) = (undefined1)(1);
    }
  }
  return (undefined1)(*(undefined1 *)(param_1 + 0x40));
}


// Reference entry 103b9400; body size 19 bytes.
#line 1 "ENTRY_103b9400"

uint __fastcall FUN_103b9400(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 0xc))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 103ba040; body size 49 bytes.
#line 1 "ENTRY_103ba040"

void __fastcall FUN_103ba040(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int iStack_14;
  int iStack_10;
  undefined4 uStack_c;
  
  uStack_c = (undefined4)(0);
  iStack_10 = (int)(param_1 + -0x280);
  *(undefined1*)(param_1 + -0x240) = (undefined1)(1);
  iStack_14 = (int)(param_1);
  ((SCStr *)((SCStr *)&iStack_14))->int_allocRep("SCIBrowseDataSource:onInvalidation");
  thunk_FUN_103d65f0<>();
  return;
}


// Reference entry 103ba080; body size 18 bytes.
#line 1 "ENTRY_103ba080"

void __fastcall FUN_103ba080(int param_1)

{
                    
                    
  (**(code **)(*(int *)(param_1 + -0x90) + 0x94))();
  return;
}


// Reference entry 103bbe00; body size 55 bytes.
#line 1 "ENTRY_103bbe00"

void FUN_103bbe00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  thunk_FUN_103ba670(param_1,param_2,param_3,param_4,param_5,param_6,0,0,0,0,0,0,0,0,0,0,0);
  return;
}


// Reference entry 103bc350; body size 35 bytes.
#line 1 "ENTRY_103bc350"

int __fastcall FUN_103bc350(int *param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  uVar1 = (uint)(param_1[0x1c]);
  while (1 < uVar1) {
    (**(code **)(*param_1 + 0x20))();
    iVar2 = (int)(iVar2 + 1);
    uVar1 = (uint)(param_1[0x1c]);
  }
  return (int)(iVar2);
}


// Reference entry 103bc380; body size 18 bytes.
#line 1 "ENTRY_103bc380"

void __fastcall FUN_103bc380(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0x68))(), 0);
  thunk_FUN_103b8760<>(uVar1);
  return;
}


// Reference entry 103bc490; body size 24 bytes.
#line 1 "ENTRY_103bc490"

void __thiscall Recovered_Bulk::m_FUN_103bc490(undefined4 param_2)
{
  int *param_1 = (int *)this;
  undefined4 uVar1;
  
  uVar1 = (undefined4)((**(code **)(*param_1 + 0x54))(param_2), 0);
  thunk_FUN_103b8760<>(uVar1);
  return;
}


// Reference entry 103bd6f0; body size 16 bytes.
#line 1 "ENTRY_103bd6f0"

undefined4 __stdcall FUN_103bd6f0(short param_1, unsigned int recovered_unused_stack_0)

{
  return (undefined4)(((uint)(4) << 8 | (uint)(param_1 == 0x40c)));
}


// Reference entry 103be170; body size 42 bytes.
#line 1 "ENTRY_103be170"

int __fastcall FUN_103be170(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 1 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 1) * 8);
}


// Reference entry 103be1b0; body size 43 bytes.
#line 1 "ENTRY_103be1b0"

int __fastcall FUN_103be1b0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 3) * 4);
}


// Reference entry 103be1f0; body size 42 bytes.
#line 1 "ENTRY_103be1f0"

int __fastcall FUN_103be1f0(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 1 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 1) * 8);
}


// Reference entry 103be230; body size 43 bytes.
#line 1 "ENTRY_103be230"

int __fastcall FUN_103be230(int param_1)

{
  uint uVar1;
  
  uVar1 = (uint)((*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0xc)) - 1);
  return (int)(*(int *)(*(int *)(param_1 + 4) + (uVar1 >> 2 & *(int *)(param_1 + 8) - 1U) * 4) + (uVar1 & 3) * 4);
}


// Reference entry 103be750; body size 19 bytes.
#line 1 "ENTRY_103be750"

void __fastcall FUN_103be750(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103be8b0; body size 45 bytes.
#line 1 "ENTRY_103be8b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103be8b0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103be9a0; body size 33 bytes.
#line 1 "ENTRY_103be9a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103be9a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103bebe0; body size 35 bytes.
#line 1 "ENTRY_103bebe0"

void __fastcall FUN_103bebe0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0xc));
  puVar2 = (undefined4 *)((undefined4 *)(iVar1 + 8));
  *(undefined4*)(param_1 + 8) = (undefined4)(0xffffffff);
  thunk_FUN_102a30a0(*puVar2,*(undefined4 *)(iVar1 + 0xc),puVar2);
  *(undefined4*)(iVar1 + 0xc) = (undefined4)(*puVar2);
  return;
}


// Reference entry 103bf220; body size 31 bytes.
#line 1 "ENTRY_103bf220"

uint __fastcall FUN_103bf220(int param_1)

{
  int *piVar1;
  uint in_EAX;
  int iVar2;
  
  piVar1 = (int *)((int *)(param_1 + 8));
  *piVar1 = (int)(*piVar1 + 1);
  if (-(int)(1) < *piVar1) {
    iVar2 = (int)(*(int *)(*(int *)(param_1 + 0xc) + 0xc) - *(int *)(*(int *)(param_1 + 0xc) + 8));
    in_EAX = (uint)(iVar2 >> 3);
    if (*(int *)(param_1 + 8) < (int)(in_EAX)) {
      return (uint)(((uint)((int3)(iVar2 >> 0xb)) << 8 | (uint)(1)));
    }
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 103bf3a0; body size 34 bytes.
#line 1 "ENTRY_103bf3a0"

void __thiscall Recovered_Bulk::m_FUN_103bf3a0(undefined4 param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0xc) + 0xc));
  iVar2 = (int)(*(int *)(*(int *)(param_1 + 0xc) + 8));
  thunk_FUN_102e8bc0(iVar2,iVar1,iVar1 - iVar2 >> 3,param_2);
  return;
}


// Reference entry 103bf890; body size 33 bytes.
#line 1 "ENTRY_103bf890"

void __thiscall Recovered_Bulk::m_FUN_103bf890(undefined4 param_2)
{
  int *param_1 = (int *)this;
  thunk_FUN_103bf8c0(param_2,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x38);
  return;
}


// Reference entry 103bf980; body size 60 bytes.
#line 1 "ENTRY_103bf980"

int __thiscall Recovered_Bulk::m_FUN_103bf980(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_103bf9d0((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 103c07e0; body size 41 bytes.
#line 1 "ENTRY_103c07e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103c07e0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c0870; body size 41 bytes.
#line 1 "ENTRY_103c0870"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103c0870(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c08b0; body size 41 bytes.
#line 1 "ENTRY_103c08b0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103c08b0(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c0970; body size 48 bytes.
#line 1 "ENTRY_103c0970"

undefined4 * __fastcall FUN_103c0970(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 103c1dd0; body size 19 bytes.
#line 1 "ENTRY_103c1dd0"

void __fastcall FUN_103c1dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103c24f0; body size 19 bytes.
#line 1 "ENTRY_103c24f0"

void __fastcall FUN_103c24f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x38);
  }
  return;
}


// Reference entry 103c2510; body size 33 bytes.
#line 1 "ENTRY_103c2510"

void __fastcall FUN_103c2510(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103c2540; body size 33 bytes.
#line 1 "ENTRY_103c2540"

void __fastcall FUN_103c2540(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103c2570; body size 33 bytes.
#line 1 "ENTRY_103c2570"

void __fastcall FUN_103c2570(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103c25a0; body size 28 bytes.
#line 1 "ENTRY_103c25a0"

void __fastcall FUN_103c25a0(int *param_1)

{
  thunk_FUN_103bf8c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x38);
  return;
}


// Reference entry 103c2670; body size 19 bytes.
#line 1 "ENTRY_103c2670"

void __fastcall FUN_103c2670(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x38);
  }
  return;
}


// Reference entry 103c2690; body size 33 bytes.
#line 1 "ENTRY_103c2690"

void __fastcall FUN_103c2690(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103c26c0; body size 33 bytes.
#line 1 "ENTRY_103c26c0"

void __fastcall FUN_103c26c0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103c26f0; body size 33 bytes.
#line 1 "ENTRY_103c26f0"

void __fastcall FUN_103c26f0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103c2720; body size 28 bytes.
#line 1 "ENTRY_103c2720"

void __fastcall FUN_103c2720(int *param_1)

{
  thunk_FUN_103bf8c0(param_1,*(undefined4 *)(*param_1 + 4));
  thunk_FUN_1148a50e(*param_1,0x38);
  return;
}


// Reference entry 103c2dc0; body size 32 bytes.
#line 1 "ENTRY_103c2dc0"

void __fastcall FUN_103c2dc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFetchClientToken);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpFetchClientToken);
  thunk_FUN_103c2be0();
  thunk_FUN_103c1f90();
  return;
}


// Reference entry 103c3460; body size 37 bytes.
#line 1 "ENTRY_103c3460"

int * __fastcall FUN_103c3460(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103c3490; body size 37 bytes.
#line 1 "ENTRY_103c3490"

int * __fastcall FUN_103c3490(int *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 103c3c10; body size 38 bytes.
#line 1 "ENTRY_103c3c10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103c3c10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c3c40; body size 45 bytes.
#line 1 "ENTRY_103c3c40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103c3c40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c3cf0; body size 32 bytes.
#line 1 "ENTRY_103c3cf0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103c3cf0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103c1e40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103c3d20; body size 32 bytes.
#line 1 "ENTRY_103c3d20"

undefined4 __thiscall Recovered_Bulk::m_FUN_103c3d20(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103c1f90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103c3d50; body size 32 bytes.
#line 1 "ENTRY_103c3d50"

undefined4 __thiscall Recovered_Bulk::m_FUN_103c3d50(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103c20e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 103c3d80; body size 32 bytes.
#line 1 "ENTRY_103c3d80"

undefined4 __thiscall Recovered_Bulk::m_FUN_103c3d80(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103c21d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x68);
  }
  return (undefined4)(param_1);
}


// Reference entry 103c3e40; body size 35 bytes.
#line 1 "ENTRY_103c3e40"

undefined4 __thiscall Recovered_Bulk::m_FUN_103c3e40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103c27c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x90);
  }
  return (undefined4)(param_1);
}


// Reference entry 103c3f10; body size 35 bytes.
#line 1 "ENTRY_103c3f10"

undefined4 __thiscall Recovered_Bulk::m_FUN_103c3f10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103c2ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x663c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103c3f40; body size 35 bytes.
#line 1 "ENTRY_103c3f40"

undefined4 __thiscall Recovered_Bulk::m_FUN_103c3f40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103c2be0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x663c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103c4010; body size 45 bytes.
#line 1 "ENTRY_103c4010"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103c4010(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c4050; body size 33 bytes.
#line 1 "ENTRY_103c4050"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103c4050(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c4080; body size 58 bytes.
#line 1 "ENTRY_103c4080"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103c4080(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFetchClientToken);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpFetchClientToken);
  thunk_FUN_103c2be0();
  thunk_FUN_103c1f90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6684);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c40d0; body size 45 bytes.
#line 1 "ENTRY_103c40d0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103c40d0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpFetchToken);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpFetchToken);
  thunk_FUN_103c1e40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103c41c0; body size 35 bytes.
#line 1 "ENTRY_103c41c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103c41c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103c2eb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x170);
  }
  return (undefined4)(param_1);
}


// Reference entry 103c4220; body size 25 bytes.
#line 1 "ENTRY_103c4220"

void __fastcall FUN_103c4220(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x38), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 103c4260; body size 19 bytes.
#line 1 "ENTRY_103c4260"

undefined4 *  __thiscall Recovered_Bulk::m_FUN_103c4260(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable_std_Func_impl_no_alloc);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return (undefined4 *)(param_2);
}


// Reference entry 103c4280; body size 21 bytes.
#line 1 "ENTRY_103c4280"

void __thiscall Recovered_Bulk::m_FUN_103c4280(char param_2)
{
  undefined4 param_1 = (undefined4 )this;
  if (param_2 != '\0') {
    thunk_FUN_1148a50e(param_1,8);
  }
  return;
}


// Reference entry 103c42a0; body size 21 bytes.
#line 1 "ENTRY_103c42a0"

undefined4 *  __stdcall FUN_103c42a0(undefined4 *param_1,undefined4 param_2)

{
  FUN_103c3720(*param_1,param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 103c4c20; body size 19 bytes.
#line 1 "ENTRY_103c4c20"

void __thiscall Recovered_Bulk::m_FUN_103c4c20(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)((uint)&ghidra_vftable__Func_impl_no_alloc__lambda_198ef1bf99411092060a7b4526c1ff25__void_SCUserAccount_const__SCStr_const__);
  param_2[1] = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 103c4d50; body size 33 bytes.
#line 1 "ENTRY_103c4d50"

void __fastcall FUN_103c4d50(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103c4d80; body size 33 bytes.
#line 1 "ENTRY_103c4d80"

void __fastcall FUN_103c4d80(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103c4db0; body size 33 bytes.
#line 1 "ENTRY_103c4db0"

void __fastcall FUN_103c4db0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[9]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 0x10))((int *)(piVar1) != (int *)(param_1));
    param_1[9] = (int)(0);
  }
  return;
}


// Reference entry 103c6c50; body size 33 bytes.
#line 1 "ENTRY_103c6c50"

void __fastcall FUN_103c6c50(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_103bf8c0(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 103c7610; body size 43 bytes.
#line 1 "ENTRY_103c7610"

void __fastcall FUN_103c7610(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 103c7650; body size 43 bytes.
#line 1 "ENTRY_103c7650"

void __fastcall FUN_103c7650(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  if ((int *)(piVar1) != (int *)(0x0)) {
    (**(code **)(*piVar1 + 8))();
    *param_1 = (undefined4)(0);
    param_1[1] = (undefined4)(0);
  }
  return;
}


// Reference entry 103c78e0; body size 57 bytes.
#line 1 "ENTRY_103c78e0"

void __fastcall FUN_103c78e0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x6628) == 0) {
    uVar1 = (undefined1)(thunk_FUN_101dce50(), 0);
    uVar2 = (undefined4)(thunk_FUN_111fe010(param_1 + 0x6224), 0);
    uVar2 = (undefined4)(thunk_FUN_111fdd60(uVar1,uVar2), 0);
    *(undefined4*)(param_1 + 0x6628) = (undefined4)(uVar2);
  }
  return;
}


// Reference entry 103c7930; body size 53 bytes.
#line 1 "ENTRY_103c7930"

void __fastcall FUN_103c7930(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x6234) != 0) {
    thunk_FUN_111fd590(*(int *)(param_1 + 0x6234));
  }
  uVar1 = (undefined4)(thunk_FUN_111fe010(param_1 + 0x6238), 0);
  uVar1 = (undefined4)(thunk_FUN_111fdd60(0,uVar1), 0);
  *(undefined4*)(param_1 + 0x6234) = (undefined4)(uVar1);
  return;
}


// Reference entry 103c8120; body size 53 bytes.
#line 1 "ENTRY_103c8120"

int __thiscall Recovered_Bulk::m_FUN_103c8120(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  int iVar2;
  __time64_t _Var3;
  
  _Var3 = (__time64_t)(_time64((__time64_t *)0x0), 0);
  uVar1 = (uint)((uint)_Var3 + param_2);
  iVar2 = (int)((int)((ulonglong)_Var3 >> 0x20) + (uint)((uint)((uint)_Var3) + (uint)(param_2) < (uint)((uint)_Var3)) + (uint)(0xffffff87 < uVar1));
  if (((int)(iVar2) <= *(int *)(param_1 + 0x54)) &&
     (((int)(iVar2) < *(int *)(param_1 + 0x54) || (uVar1 + 0x78 < *(uint *)(param_1 + 0x50))))) {
    return (int)(param_1 + 0x60);
  }
  return (int)(param_1 + 0x48);
}


// Reference entry 103c82b0; body size 21 bytes.
#line 1 "ENTRY_103c82b0"

SCStr * __stdcall FUN_103c82b0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103c82d0; body size 21 bytes.
#line 1 "ENTRY_103c82d0"

SCStr * __stdcall FUN_103c82d0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("");
  return (SCStr *)(param_1);
}


// Reference entry 103c91e0; body size 59 bytes.
#line 1 "ENTRY_103c91e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103c91e0(int param_2, unsigned int recovered_unused_stack_0)
{
  int param_1 = (int )this;
  char cVar1;
  int iVar2;
  
  if (*(int **)(param_1 + 0x58) != (int *)((0x0))) {
    cVar1 = (char)((**(code **)(**(int **)(param_1 + 0x58) + 0xc))(), 0);
    if (cVar1 != '\0') {
      iVar2 = (int)((**(code **)(**(int **)(param_1 + 0x58) + 8))(), 0);
      goto LAB_103c9202;
    }
  }
  iVar2 = (int)(*(int *)(param_1 + 0x5c));
LAB_103c9202:
  if (param_2 == iVar2) {
    *(undefined4*)(param_1 + 0x5c) = (undefined4)(0);
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 103c96b0; body size 19 bytes.
#line 1 "ENTRY_103c96b0"

uint __fastcall FUN_103c96b0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  uint in_EAX;
  uint uVar1;
  
  if (*(int **)(param_1 + 8) != (int *)((0x0))) {
                    
                    
    uVar1 = (uint)((**(code **)(**(int **)(param_1 + 8) + 4))(), 0);
    return (uint)(uVar1);
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 103cbeb0; body size 24 bytes.
#line 1 "ENTRY_103cbeb0"

undefined4 __stdcall FUN_103cbeb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 103cc590; body size 26 bytes.
#line 1 "ENTRY_103cc590"

void __thiscall Recovered_Bulk::m_FUN_103cc590(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x100) + 0x14))();
    return;
  }
  return;
}


// Reference entry 103cc5e0; body size 26 bytes.
#line 1 "ENTRY_103cc5e0"

void __thiscall Recovered_Bulk::m_FUN_103cc5e0(int param_2)
{
  int param_1 = (int )this;
  if (param_2 != 0) {
                    
                    
    (**(code **)(**(int **)(param_1 + 0x100) + 0x18))();
    return;
  }
  return;
}


// Reference entry 103ce410; body size 60 bytes.
#line 1 "ENTRY_103ce410"

int __thiscall Recovered_Bulk::m_FUN_103ce410(SCStr *param_2)
{
  int *param_1 = (int *)this;
  bool bVar1;
  undefined1 local_c [8];
  int local_4;
  
  thunk_FUN_103ce460((uint)&local_c,param_2);
  if ((*(char *)(local_4 + 0xd) == '\0') &&
     (bVar1 = (bool)(((SCStr *)(param_2))->op_lt((SCStr *)(local_4 + 0x10)), 0), !bVar1)) {
    return (int)(local_4);
  }
  return (int)(*param_1);
}


// Reference entry 103cef50; body size 48 bytes.
#line 1 "ENTRY_103cef50"

undefined4 * __fastcall FUN_103cef50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

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


// Reference entry 103d0510; body size 19 bytes.
#line 1 "ENTRY_103d0510"

void __fastcall FUN_103d0510(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 103d0530; body size 19 bytes.
#line 1 "ENTRY_103d0530"

void __fastcall FUN_103d0530(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x28);
  }
  return;
}


// Reference entry 103d0550; body size 36 bytes.
#line 1 "ENTRY_103d0550"

void __fastcall FUN_103d0550(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_102460b0<>(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x18);
  }
  return;
}


// Reference entry 103d0580; body size 36 bytes.
#line 1 "ENTRY_103d0580"

void __fastcall FUN_103d0580(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_10246170<>(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x28);
  }
  return;
}


// Reference entry 103d05b0; body size 36 bytes.
#line 1 "ENTRY_103d05b0"

void __fastcall FUN_103d05b0(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)((int *)param_1[1]);
  if ((int *)(piVar1) != (int *)(0x0)) {
    thunk_FUN_10246290(*param_1,*(undefined4 *)(*piVar1 + 4));
    thunk_FUN_1148a50e(*piVar1,0x18);
  }
  return;
}


// Reference entry 103d06f0; body size 19 bytes.
#line 1 "ENTRY_103d06f0"

void __fastcall FUN_103d06f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x18);
  }
  return;
}


// Reference entry 103d0710; body size 19 bytes.
#line 1 "ENTRY_103d0710"

void __fastcall FUN_103d0710(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x28);
  }
  return;
}


// Reference entry 103d1400; body size 32 bytes.
#line 1 "ENTRY_103d1400"

undefined4 __thiscall Recovered_Bulk::m_FUN_103d1400(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d0730();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x60);
  }
  return (undefined4)(param_1);
}


// Reference entry 103d15e0; body size 33 bytes.
#line 1 "ENTRY_103d15e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103d15e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RITQHandler);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103d1640; body size 25 bytes.
#line 1 "ENTRY_103d1640"

void __fastcall FUN_103d1640(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 103d1660; body size 25 bytes.
#line 1 "ENTRY_103d1660"

void __fastcall FUN_103d1660(int param_1)

{
  void *pvVar1;
  
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x28), 0);
  *(void**)(param_1 + 4) = (void *)(pvVar1);
  return;
}


// Reference entry 103d16c0; body size 50 bytes.
#line 1 "ENTRY_103d16c0"

void __thiscall Recovered_Bulk::m_FUN_103d16c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  int *param_1 = (int *)this;
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_102460b0<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  thunk_FUN_103cd850<>(param_2,param_2);
  return;
}


// Reference entry 103d22b0; body size 30 bytes.
#line 1 "ENTRY_103d22b0"

int FUN_103d22b0(int param_1)

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


// Reference entry 103d2310; body size 31 bytes.
#line 1 "ENTRY_103d2310"

int * FUN_103d2310(int *param_1)

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


// Reference entry 103d2370; body size 52 bytes.
#line 1 "ENTRY_103d2370"

void __thiscall Recovered_Bulk::m_FUN_103d2370(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10247e10();
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(param_2[1]);
  param_1[2] = (undefined4)(param_2[2]);
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 103d27d0; body size 22 bytes.
#line 1 "ENTRY_103d27d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103d27d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103d4710(param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 103d3190; body size 33 bytes.
#line 1 "ENTRY_103d3190"

void __fastcall FUN_103d3190(int *param_1)

{
  int iVar1;
  
  iVar1 = (int)(*param_1);
  thunk_FUN_102460b0<>(param_1,*(undefined4 *)(iVar1 + 4));
  *(int*)(iVar1 + 4) = (int)(iVar1);
  *(int*)iVar1 = (int)((int)(iVar1));
  *(int*)(iVar1 + 8) = (int)(iVar1);
  param_1[1] = (int)(0);
  return;
}


// Reference entry 103d41d0; body size 50 bytes.
#line 1 "ENTRY_103d41d0"

undefined4 * __stdcall FUN_103d41d0(undefined4 *param_1)

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


// Reference entry 103d44d0; body size 33 bytes.
#line 1 "ENTRY_103d44d0"

void __stdcall FUN_103d44d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if ((undefined1 *)*param_2 != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)((undefined1 *)*param_2);
  }
  thunk_FUN_1125bed0(puVar1,param_3);
  return;
}


// Reference entry 103d5170; body size 42 bytes.
#line 1 "ENTRY_103d5170"

int __thiscall Recovered_Bulk::m_FUN_103d5170(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0x10));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return (int)(param_1);
}


// Reference entry 103d5450; body size 38 bytes.
#line 1 "ENTRY_103d5450"

void __fastcall FUN_103d5450(int param_1)

{
  *(undefined1*)(param_1 + 0x5c) = (undefined1)(0);
  FUN_112a9d50(param_1 + 0x2c);
  FUN_112aa350(param_1 + 0x34);
  FUN_112a9d70(param_1 + 0x2c);
  return;
}


// Reference entry 103d5840; body size 19 bytes.
#line 1 "ENTRY_103d5840"

void __fastcall FUN_103d5840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103d5900; body size 45 bytes.
#line 1 "ENTRY_103d5900"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103d5900(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103d5940; body size 33 bytes.
#line 1 "ENTRY_103d5940"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103d5940(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103d5b00; body size 28 bytes.
#line 1 "ENTRY_103d5b00"

void __fastcall FUN_103d5b00(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 8));
  puVar2 = (undefined4 *)((undefined4 *)(iVar1 + 8));
  thunk_FUN_102a30a0(*puVar2,*(undefined4 *)(iVar1 + 0xc),puVar2);
  *(undefined4*)(iVar1 + 0xc) = (undefined4)(*puVar2);
  return;
}


// Reference entry 103d5ff0; body size 41 bytes.
#line 1 "ENTRY_103d5ff0"

undefined4 * __fastcall FUN_103d5ff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCEventSource);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 103d6380; body size 35 bytes.
#line 1 "ENTRY_103d6380"

void __fastcall FUN_103d6380(int param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 8), 0);(undefined4 *)( puVar1) != (undefined4 *)(0x0);
      puVar1 = (undefined4 *)*puVar1) {
  }
  return;
}


// Reference entry 103d63b0; body size 24 bytes.
#line 1 "ENTRY_103d63b0"

int __fastcall FUN_103d63b0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  iVar2 = (int)(0);
  for (puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 8), 0);(undefined4 *)( puVar1) != (undefined4 *)(0x0);
      puVar1 = (undefined4 *)*puVar1) {
    iVar2 = (int)(iVar2 + 1);
  }
  return (int)(iVar2);
}


// Reference entry 103d6d90; body size 63 bytes.
#line 1 "ENTRY_103d6d90"

longlong FUN_103d6d90(void)

{
  int local_8;
  int local_4;
  
  thunk_FUN_1145c930(&local_8,0);
  return (longlong)((longlong)local_8 * 1000 + (longlong)(local_4 / 1000));
}


// Reference entry 103d9170; body size 41 bytes.
#line 1 "ENTRY_103d9170"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103d9170(int *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  int *piVar1;
  
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)(**(code **)(*param_2 + 0xc))(), 0);
    param_1[1] = (undefined4)(piVar1);
    (**(code **)(*piVar1 + 4))();
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103d91b0; body size 16 bytes.
#line 1 "ENTRY_103d91b0"

undefined4 __fastcall FUN_103d91b0(undefined4 param_1)

{
  thunk_FUN_1145ed60(param_1);
  return (undefined4)(param_1);
}


// Reference entry 103df6e0; body size 19 bytes.
#line 1 "ENTRY_103df6e0"

void __fastcall FUN_103df6e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 103e2b30; body size 56 bytes.
#line 1 "ENTRY_103e2b30"

void __fastcall FUN_103e2b30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RSecRegUserEmailAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RSecRegUserEmailAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RSecRegUserEmailAIOOp);
  param_1[0x195d] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  thunk_FUN_103e2b80();
  thunk_FUN_103e15a0();
  return;
}


// Reference entry 103e3a40; body size 38 bytes.
#line 1 "ENTRY_103e3a40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3a40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3a70; body size 38 bytes.
#line 1 "ENTRY_103e3a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3aa0; body size 38 bytes.
#line 1 "ENTRY_103e3aa0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3aa0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3ad0; body size 38 bytes.
#line 1 "ENTRY_103e3ad0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3ad0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3b00; body size 38 bytes.
#line 1 "ENTRY_103e3b00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3b00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3b30; body size 38 bytes.
#line 1 "ENTRY_103e3b30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3b60; body size 38 bytes.
#line 1 "ENTRY_103e3b60"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3b60(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3b90; body size 38 bytes.
#line 1 "ENTRY_103e3b90"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3b90(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3bc0; body size 38 bytes.
#line 1 "ENTRY_103e3bc0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3bc0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3bf0; body size 38 bytes.
#line 1 "ENTRY_103e3bf0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3bf0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3c20; body size 38 bytes.
#line 1 "ENTRY_103e3c20"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3c20(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3c50; body size 38 bytes.
#line 1 "ENTRY_103e3c50"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3c50(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3c80; body size 38 bytes.
#line 1 "ENTRY_103e3c80"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3c80(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3cb0; body size 38 bytes.
#line 1 "ENTRY_103e3cb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3cb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3ce0; body size 38 bytes.
#line 1 "ENTRY_103e3ce0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3ce0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3d10; body size 38 bytes.
#line 1 "ENTRY_103e3d10"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3d10(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3d40; body size 38 bytes.
#line 1 "ENTRY_103e3d40"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3d40(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3d70; body size 38 bytes.
#line 1 "ENTRY_103e3d70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3d70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  thunk_FUN_101ba0d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0xc);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3da0; body size 45 bytes.
#line 1 "ENTRY_103e3da0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e3da0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,8);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e3de0; body size 32 bytes.
#line 1 "ENTRY_103e3de0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3de0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103df700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3e10; body size 32 bytes.
#line 1 "ENTRY_103e3e10"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3e10(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103df850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3e40; body size 32 bytes.
#line 1 "ENTRY_103e3e40"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3e40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103df9a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3e70; body size 32 bytes.
#line 1 "ENTRY_103e3e70"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3e70(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103dfaf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3ea0; body size 32 bytes.
#line 1 "ENTRY_103e3ea0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3ea0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103dfc40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3ed0; body size 32 bytes.
#line 1 "ENTRY_103e3ed0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3ed0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103dfd90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3f00; body size 32 bytes.
#line 1 "ENTRY_103e3f00"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3f00(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103dfee0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3f30; body size 32 bytes.
#line 1 "ENTRY_103e3f30"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3f30(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0030();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3f60; body size 32 bytes.
#line 1 "ENTRY_103e3f60"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3f60(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0180();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3f90; body size 32 bytes.
#line 1 "ENTRY_103e3f90"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3f90(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e02d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3fc0; body size 32 bytes.
#line 1 "ENTRY_103e3fc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3fc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0420();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e3ff0; body size 32 bytes.
#line 1 "ENTRY_103e3ff0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e3ff0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4020; body size 32 bytes.
#line 1 "ENTRY_103e4020"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4020(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e06c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4050; body size 32 bytes.
#line 1 "ENTRY_103e4050"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4050(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4080; body size 32 bytes.
#line 1 "ENTRY_103e4080"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4080(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0960();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e40b0; body size 32 bytes.
#line 1 "ENTRY_103e40b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e40b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e40e0; body size 32 bytes.
#line 1 "ENTRY_103e40e0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e40e0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0c00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4230; body size 35 bytes.
#line 1 "ENTRY_103e4230"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4230(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0ee0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x613c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4260; body size 35 bytes.
#line 1 "ENTRY_103e4260"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4260(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_1124a3e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x620c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4540; body size 35 bytes.
#line 1 "ENTRY_103e4540"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4540(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e12e0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x662c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4620; body size 35 bytes.
#line 1 "ENTRY_103e4620"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4620(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e1440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6238);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4650; body size 32 bytes.
#line 1 "ENTRY_103e4650"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4650(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e15a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x3c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e48b0; body size 35 bytes.
#line 1 "ENTRY_103e48b0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e48b0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e1890();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6630);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e49c0; body size 35 bytes.
#line 1 "ENTRY_103e49c0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e49c0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e1a50();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x622c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4c00; body size 35 bytes.
#line 1 "ENTRY_103e4c00"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4c00(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e1d30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x614c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4dc0; body size 35 bytes.
#line 1 "ENTRY_103e4dc0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4dc0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e20a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x663c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e4ef0; body size 35 bytes.
#line 1 "ENTRY_103e4ef0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e4ef0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e22b0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x662c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e5000; body size 35 bytes.
#line 1 "ENTRY_103e5000"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e5000(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e2440();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6240);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e5030; body size 35 bytes.
#line 1 "ENTRY_103e5030"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e5030(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e25c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6234);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e5250; body size 35 bytes.
#line 1 "ENTRY_103e5250"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e5250(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e28a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x622c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e5330; body size 35 bytes.
#line 1 "ENTRY_103e5330"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e5330(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e2a30();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x622c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e53d0; body size 35 bytes.
#line 1 "ENTRY_103e53d0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e53d0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e2b80();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6538);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e5400; body size 35 bytes.
#line 1 "ENTRY_103e5400"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e5400(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e2cc0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x653c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e54f0; body size 35 bytes.
#line 1 "ENTRY_103e54f0"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e54f0(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e2eb0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x6138);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e5610; body size 35 bytes.
#line 1 "ENTRY_103e5610"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e5610(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e30c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x622c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e5700; body size 35 bytes.
#line 1 "ENTRY_103e5700"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e5700(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e3250();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x622c);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e5730; body size 33 bytes.
#line 1 "ENTRY_103e5730"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5730(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,4);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5760; body size 45 bytes.
#line 1 "ENTRY_103e5760"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5760(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpGetBetaSettings);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpGetBetaSettings);
  thunk_FUN_103df700();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e57a0; body size 45 bytes.
#line 1 "ENTRY_103e57a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e57a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegAccountLogin);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegAccountLogin);
  thunk_FUN_103df850();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e57e0; body size 45 bytes.
#line 1 "ENTRY_103e57e0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e57e0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegAccountTransfer);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegAccountTransfer);
  thunk_FUN_103df9a0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5820; body size 45 bytes.
#line 1 "ENTRY_103e5820"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5820(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegBeginSecureTransfer);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegBeginSecureTransfer);
  thunk_FUN_103dfaf0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5860; body size 45 bytes.
#line 1 "ENTRY_103e5860"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5860(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegCreateIdentity);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegCreateIdentity);
  thunk_FUN_103dfc40();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e58a0; body size 45 bytes.
#line 1 "ENTRY_103e58a0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e58a0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegEmailHint);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegEmailHint);
  thunk_FUN_103dfd90();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5980; body size 45 bytes.
#line 1 "ENTRY_103e5980"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5980(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegGetUserAccountRequest);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegGetUserAccountRequest);
  thunk_FUN_103e0030();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e59c0; body size 45 bytes.
#line 1 "ENTRY_103e59c0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e59c0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPasswordSet);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPasswordSet);
  thunk_FUN_103e0180();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5a00; body size 45 bytes.
#line 1 "ENTRY_103e5a00"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5a00(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPrepTransferPlayer);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegPrepTransferPlayer);
  thunk_FUN_103e02d0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5a40; body size 32 bytes.
#line 1 "ENTRY_103e5a40"

undefined4 __thiscall Recovered_Bulk::m_FUN_103e5a40(byte param_2)
{
  undefined4 param_1 = (undefined4 )this;
  thunk_FUN_103e0c00();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4)(param_1);
}


// Reference entry 103e5a70; body size 45 bytes.
#line 1 "ENTRY_103e5a70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5a70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegResetPassword);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegResetPassword);
  thunk_FUN_103e0420();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5ab0; body size 45 bytes.
#line 1 "ENTRY_103e5ab0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5ab0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUpdateUser);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUpdateUser);
  thunk_FUN_103e0570();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5af0; body size 45 bytes.
#line 1 "ENTRY_103e5af0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5af0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUserEmail);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegUserEmail);
  thunk_FUN_103e06c0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5b30; body size 45 bytes.
#line 1 "ENTRY_103e5b30"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5b30(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegValidateEmail);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegValidateEmail);
  thunk_FUN_103e0810();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5b70; body size 45 bytes.
#line 1 "ENTRY_103e5b70"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5b70(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegVerifyEmail);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegVerifyEmail);
  thunk_FUN_103e0960();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e5bb0; body size 45 bytes.
#line 1 "ENTRY_103e5bb0"

undefined4 * __thiscall Recovered_Bulk::m_FUN_103e5bb0(byte param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpSecRegVerifyEmailSubmit);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpSecRegVerifyEmailSubmit);
  thunk_FUN_103e0ab0();
  if ((param_2 & 1) != 0) {
    thunk_FUN_1148a50e(param_1,0x48);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 103e8070; body size 16 bytes.
#line 1 "ENTRY_103e8070"

void __fastcall FUN_103e8070(int *param_1)

{
  thunk_FUN_103e6840();
                    
                    
  (**(code **)(*param_1 + 0x28))();
  return;
}


// Reference entry 103ea730; body size 17 bytes.
#line 1 "ENTRY_103ea730"

undefined1 * __fastcall FUN_103ea730(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6628) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6628), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ea750; body size 17 bytes.
#line 1 "ENTRY_103ea750"

undefined1 * __fastcall FUN_103ea750(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ea770; body size 17 bytes.
#line 1 "ENTRY_103ea770"

undefined1 * __fastcall FUN_103ea770(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6228) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6228), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ea790; body size 17 bytes.
#line 1 "ENTRY_103ea790"

undefined1 * __fastcall FUN_103ea790(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6228) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6228), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ea7b0; body size 17 bytes.
#line 1 "ENTRY_103ea7b0"

undefined1 * __fastcall FUN_103ea7b0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x612c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ea830; body size 47 bytes.
#line 1 "ENTRY_103ea830"

void __fastcall FUN_103ea830(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar1 = (undefined1)(thunk_FUN_101dce50(), 0);
  uVar2 = (undefined4)(thunk_FUN_111fe010(param_1 + 0x6234), 0);
  uVar2 = (undefined4)(thunk_FUN_111fdd60(uVar1,uVar2), 0);
  *(undefined4*)(param_1 + 0x6230) = (undefined4)(uVar2);
  return;
}


// Reference entry 103ea870; body size 17 bytes.
#line 1 "ENTRY_103ea870"

undefined1 * __fastcall FUN_103ea870(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6628) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6628), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ea890; body size 17 bytes.
#line 1 "ENTRY_103ea890"

undefined1 * __fastcall FUN_103ea890(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ea8b0; body size 17 bytes.
#line 1 "ENTRY_103ea8b0"

undefined1 * __fastcall FUN_103ea8b0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6230) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6230), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ea8d0; body size 17 bytes.
#line 1 "ENTRY_103ea8d0"

undefined1 * __fastcall FUN_103ea8d0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6228) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6228), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103ea8f0; body size 17 bytes.
#line 1 "ENTRY_103ea8f0"

undefined1 * __fastcall FUN_103ea8f0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6224) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6224), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eaa30; body size 17 bytes.
#line 1 "ENTRY_103eaa30"

undefined1 * __fastcall FUN_103eaa30(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6228) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6228), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eaa50; body size 17 bytes.
#line 1 "ENTRY_103eaa50"

undefined1 * __fastcall FUN_103eaa50(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6228) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6228), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 103eaa70; body size 25 bytes.
#line 1 "ENTRY_103eaa70"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eaa70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x12d0c));
  return (SCStr *)(param_2);
}


// Reference entry 103eada0; body size 25 bytes.
#line 1 "ENTRY_103eada0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eada0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x12d24));
  return (SCStr *)(param_2);
}


// Reference entry 103eadc0; body size 25 bytes.
#line 1 "ENTRY_103eadc0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eadc0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x12e44));
  return (SCStr *)(param_2);
}


// Reference entry 103eade0; body size 25 bytes.
#line 1 "ENTRY_103eade0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eade0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6190));
  return (SCStr *)(param_2);
}


// Reference entry 103eae00; body size 25 bytes.
#line 1 "ENTRY_103eae00"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eae00(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x617c));
  return (SCStr *)(param_2);
}


// Reference entry 103eae40; body size 25 bytes.
#line 1 "ENTRY_103eae40"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eae40(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x12d18));
  return (SCStr *)(param_2);
}


// Reference entry 103eaeb0; body size 25 bytes.
#line 1 "ENTRY_103eaeb0"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eaeb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6180));
  return (SCStr *)(param_2);
}


// Reference entry 103eaf10; body size 25 bytes.
#line 1 "ENTRY_103eaf10"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eaf10(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6194));
  return (SCStr *)(param_2);
}


// Reference entry 103eb020; body size 25 bytes.
#line 1 "ENTRY_103eb020"

SCStr * __thiscall Recovered_Bulk::m_FUN_103eb020(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 0x18) + 0x6188));
  return (SCStr *)(param_2);
}


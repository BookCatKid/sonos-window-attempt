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
namespace std { template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xlength_error(A...); template<class... A> int _Xout_of_range(A...); }
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int isShuttingDown(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
template<class...> struct _Tree { char _pad; _Tree(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); static int op_dtor(...) { return 0; } };
struct App { char _pad; App(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Bridges { char _pad; Bridges(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Charger { char _pad; Charger(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Components { char _pad; Components(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Demo { char _pad; Demo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Factory { char _pad; Factory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Forget { char _pad; Forget(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Found { char _pad; Found(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct GetAllPrefixLocations { char _pad; GetAllPrefixLocations(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Household { char _pad; Household(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Invalid { char _pad; Invalid(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Legacy { char _pad; Legacy(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Mixed { char _pad; Mixed(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Modern { char _pad; Modern(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Network { char _pad; Network(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct New { char _pad; New(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct No { char _pad; No(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct None { char _pad; None(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Nothing { char _pad; Nothing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Offline { char _pad; Offline(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Only { char _pad; Only(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Orientation { char _pad; Orientation(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Outdated { char _pad; Outdated(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Reset { char _pad; Reset(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Retail { char _pad; Retail(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCControllerTest { char _pad; SCControllerTest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionContext { char _pad; SCIActionContext(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionOnGroupDescriptor { char _pad; SCIActionOnGroupDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAddToQueueAtNumberDescriptor { char _pad; SCIAddToQueueAtNumberDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAutomationDelegate { char _pad; SCIAutomationDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseDataSource { char _pad; SCIBrowseDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseGroupsInfo { char _pad; SCIBrowseGroupsInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseItem { char _pad; SCIBrowseItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseMetadata { char _pad; SCIBrowseMetadata(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIController { char _pad; SCIController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIControllerTest { char _pad; SCIControllerTest(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCICrashReportManager { char _pad; SCICrashReportManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIData { char _pad; SCIData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIEulaManager { char _pad; SCIEulaManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIExperimentManager { char _pad; SCIExperimentManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInAppMessaging { char _pad; SCIInAppMessaging(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInAppProduct { char _pad; SCIInAppProduct(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInAppProductCallback { char _pad; SCIInAppProductCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInAppPurchaseCallback { char _pad; SCIInAppPurchaseCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInAppPurchaseManager { char _pad; SCIInAppPurchaseManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInnerActionFactory { char _pad; SCIInnerActionFactory(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIInput { char _pad; SCIInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINewWizController { char _pad; SCINewWizController(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINowPlayingSource { char _pad; SCINowPlayingSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINowPlayingTransport { char _pad; SCINowPlayingTransport(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIPowerscrollDataSource { char _pad; SCIPowerscrollDataSource(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISelectableItem { char _pad; SCISelectableItem(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIStringInput { char _pad; SCIStringInput(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIStringInputBase { char _pad; SCIStringInputBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCITime { char _pad; SCITime(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCITooltip { char _pad; SCITooltip(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIWifiDelegate { char _pad; SCIWifiDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCStrProp { char _pad; SCStrProp(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ThrowInfo { char _pad; ThrowInfo(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unknown { char _pad; Unknown(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Unsupported { char _pad; Unsupported(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Updating { char _pad; Updating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Weak { char _pad; Weak(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *HH;
typedef void *SA_RINCON;
typedef void *WARNING;
typedef void *ZM_STATE_ALL_UNCONFIGURED;
typedef void *ZM_STATE_ALL_ZONES_HIDDEN;
typedef void *ZM_STATE_EOL_NO_UPDATES;
typedef void *ZM_STATE_GUEST_LC;
typedef void *ZM_STATE_INCOMPATIBLE;
typedef void *ZM_STATE_INSECURE_ACCOUNT;
typedef void *ZM_STATE_NORMAL;
typedef void *ZM_STATE_NO_PLAYERS;
typedef void *ZM_STATE_NO_ZONES_FOUND;
typedef void *ZM_STATE_NO_ZONES_FOUND_EXISTING_HH;
typedef void *ZM_STATE_NO_ZONES_FOUND_UNATTACHED_ZONES;
typedef void *ZM_STATE_NO_ZONES_FOUND_WRONG_AP;
typedef void *ZM_STATE_ORPHANED_PLAYERS;
typedef void *ZM_STATE_UPDATING;
using namespace std;
extern "C" void LAB_10001ce9(void);
extern "C" void LAB_10005614(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10013746(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_1001d2eb(void);
extern "C" void LAB_1001d494(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_100255ea(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002faea(void);
extern "C" void LAB_1003651b(void);
extern "C" void LAB_10036af2(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_1003718c(void);
extern "C" void LAB_100381ea(void);
extern "C" void LAB_1003c51a(void);
extern "C" void LAB_10044a85(void);
extern "C" void LAB_10049fd5(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100555fb(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_10057f0e(void);
extern "C" void LAB_100581bb(void);
extern "C" void LAB_1005855d(void);
extern "C" void LAB_1005ba00(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_10062008(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_1006d075(void);
extern "C" void LAB_1006faff(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10071b61(void);
extern "C" void LAB_10075365(void);
extern "C" void LAB_10076c79(void);
extern "C" void LAB_10076f76(void);
extern "C" void LAB_1007dc72(void);
extern "C" void LAB_1007df1f(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_100857c4(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_100913f8(void);
extern "C" void LAB_1009543f(void);
extern "C" void LAB_10099107(void);
extern "C" void LAB_10206d21(void);
extern "C" void LAB_102344b0(void);
extern "C" void LAB_10234970(void);
extern "C" void LAB_102349e4(void);
extern "C" void LAB_102349ef(void);
extern "C" void LAB_10235a84(void);
extern "C" void LAB_10249c8c(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a060(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187a528(void);
extern "C" void LAB_1187a54c(void);
extern "C" void LAB_1187a570(void);
extern "C" void LAB_1187a58c(void);
extern "C" void LAB_1187a5f4(void);
extern "C" void LAB_1187a614(void);
extern "C" void LAB_1187a634(void);
extern "C" void LAB_11880134(void);
extern "C" void LAB_11880164(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_1188207c(void);
extern "C" void LAB_118823e4(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11884d84(void);
extern "C" void LAB_11884fe0(void);
extern "C" void LAB_11885b98(void);
extern "C" void LAB_11885ba8(void);
extern "C" void LAB_11885e20(void);
extern "C" void LAB_11885e5c(void);
extern "C" void LAB_11885eb4(void);
extern "C" void LAB_118865b0(void);
extern "C" void LAB_118865bc(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_11886db4(void);
extern "C" void LAB_11886e48(void);
extern "C" void LAB_11886e90(void);
extern "C" void LAB_11886f20(void);
extern "C" void LAB_11886f68(void);
extern "C" void LAB_11886fa4(void);
extern "C" void LAB_11886fb0(void);
extern "C" void LAB_11886ff8(void);
extern "C" void LAB_1188718c(void);
extern "C" void LAB_118875c8(void);
extern "C" void LAB_11887644(void);
extern "C" void LAB_118877bc(void);
extern "C" void LAB_11887884(void);
extern "C" void LAB_118878d4(void);
extern "C" void LAB_11887944(void);
extern "C" void LAB_11887a54(void);
extern "C" void LAB_11887aa0(void);
extern "C" void LAB_11888368(void);
extern "C" void LAB_118883f8(void);
extern "C" void LAB_11888440(void);
extern "C" void LAB_11888488(void);
extern "C" void LAB_11889238(void);
extern "C" void LAB_1188925c(void);
extern "C" void LAB_1188929c(void);
extern "C" void LAB_118892c0(void);
extern "C" void LAB_118892d0(void);
extern "C" void LAB_118892e4(void);
extern "C" void LAB_118892f4(void);
extern "C" void LAB_11889308(void);
extern "C" void LAB_1188932c(void);
extern "C" void LAB_1188936c(void);
extern "C" void LAB_11889390(void);
extern "C" void LAB_118893a0(void);
extern "C" void LAB_118893b4(void);
extern "C" void LAB_118893c4(void);
extern "C" void LAB_118893d8(void);
extern "C" void LAB_118893fc(void);
extern "C" void LAB_1188943c(void);
extern "C" void LAB_11889460(void);
extern "C" void LAB_11889470(void);
extern "C" void LAB_11889484(void);
extern "C" void LAB_11889494(void);
extern "C" void LAB_118894a8(void);
extern "C" void LAB_118894cc(void);
extern "C" void LAB_1188950c(void);
extern "C" void LAB_11889530(void);
extern "C" void LAB_11889540(void);
extern "C" void LAB_11889554(void);
extern "C" void LAB_11889564(void);
extern "C" void LAB_11889578(void);
extern "C" void LAB_118895a0(void);
extern "C" void LAB_11889654(void);
extern "C" void LAB_11889678(void);
extern "C" void LAB_118897bc(void);
extern "C" void LAB_11889948(void);
extern "C" void LAB_11889d78(void);
extern "C" void LAB_1188a09c(void);
extern "C" void LAB_1188a0f0(void);
extern "C" void LAB_1188a3a8(void);
extern "C" void LAB_1188a41c(void);
extern "C" void LAB_1188a7f4(void);
extern "C" void LAB_1188a81c(void);
extern "C" void LAB_1188a964(void);
extern "C" void LAB_1188a9a4(void);
extern "C" void LAB_1188aa0c(void);
extern "C" void LAB_1188aa5c(void);
extern "C" void LAB_1188aaa4(void);
extern "C" void LAB_1188abd4(void);
extern "C" void LAB_1188acc0(void);
extern "C" void LAB_1188ad1c(void);
extern "C" void LAB_1188ada0(void);
extern "C" void LAB_1188ae48(void);
extern "C" void LAB_1188af00(void);
extern "C" void LAB_1188af54(void);
extern "C" void LAB_1188afb0(void);
extern "C" void LAB_1188afe8(void);
extern "C" void LAB_121a0ae4(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_122fc6c4(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fca10(void);

extern "C" void LAB_10001ce9(void);
extern "C" void LAB_10005614(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10013746(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_1001d2eb(void);
extern "C" void LAB_1001d494(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_100255ea(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002faea(void);
extern "C" void LAB_1003651b(void);
extern "C" void LAB_10036af2(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_1003718c(void);
extern "C" void LAB_100381ea(void);
extern "C" void LAB_1003c51a(void);
extern "C" void LAB_10044a85(void);
extern "C" void LAB_10049fd5(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100555fb(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_10057f0e(void);
extern "C" void LAB_100581bb(void);
extern "C" void LAB_1005855d(void);
extern "C" void LAB_1005ba00(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_10062008(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_1006d075(void);
extern "C" void LAB_1006faff(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10071b61(void);
extern "C" void LAB_10075365(void);
extern "C" void LAB_10076c79(void);
extern "C" void LAB_10076f76(void);
extern "C" void LAB_1007dc72(void);
extern "C" void LAB_1007df1f(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_100857c4(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_100913f8(void);
extern "C" void LAB_1009543f(void);
extern "C" void LAB_10099107(void);
extern "C" void LAB_10206d21(void);
extern "C" void LAB_102344b0(void);
extern "C" void LAB_10234970(void);
extern "C" void LAB_102349e4(void);
extern "C" void LAB_102349ef(void);
extern "C" void LAB_10235a84(void);
extern "C" void LAB_10249c8c(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a060(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187a528(void);
extern "C" void LAB_1187a54c(void);
extern "C" void LAB_1187a570(void);
extern "C" void LAB_1187a58c(void);
extern "C" void LAB_1187a5f4(void);
extern "C" void LAB_1187a614(void);
extern "C" void LAB_1187a634(void);
extern "C" void LAB_11880134(void);
extern "C" void LAB_11880164(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_1188207c(void);
extern "C" void LAB_118823e4(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11884d84(void);
extern "C" void LAB_11884fe0(void);
extern "C" void LAB_11885b98(void);
extern "C" void LAB_11885ba8(void);
extern "C" void LAB_11885e20(void);
extern "C" void LAB_11885e5c(void);
extern "C" void LAB_11885eb4(void);
extern "C" void LAB_118865b0(void);
extern "C" void LAB_118865bc(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_11886db4(void);
extern "C" void LAB_11886e48(void);
extern "C" void LAB_11886e90(void);
extern "C" void LAB_11886f20(void);
extern "C" void LAB_11886f68(void);
extern "C" void LAB_11886fa4(void);
extern "C" void LAB_11886fb0(void);
extern "C" void LAB_11886ff8(void);
extern "C" void LAB_1188718c(void);
extern "C" void LAB_118875c8(void);
extern "C" void LAB_11887644(void);
extern "C" void LAB_118877bc(void);
extern "C" void LAB_11887884(void);
extern "C" void LAB_118878d4(void);
extern "C" void LAB_11887944(void);
extern "C" void LAB_11887a54(void);
extern "C" void LAB_11887aa0(void);
extern "C" void LAB_11888368(void);
extern "C" void LAB_118883f8(void);
extern "C" void LAB_11888440(void);
extern "C" void LAB_11888488(void);
extern "C" void LAB_11889238(void);
extern "C" void LAB_1188925c(void);
extern "C" void LAB_1188929c(void);
extern "C" void LAB_118892c0(void);
extern "C" void LAB_118892d0(void);
extern "C" void LAB_118892e4(void);
extern "C" void LAB_118892f4(void);
extern "C" void LAB_11889308(void);
extern "C" void LAB_1188932c(void);
extern "C" void LAB_1188936c(void);
extern "C" void LAB_11889390(void);
extern "C" void LAB_118893a0(void);
extern "C" void LAB_118893b4(void);
extern "C" void LAB_118893c4(void);
extern "C" void LAB_118893d8(void);
extern "C" void LAB_118893fc(void);
extern "C" void LAB_1188943c(void);
extern "C" void LAB_11889460(void);
extern "C" void LAB_11889470(void);
extern "C" void LAB_11889484(void);
extern "C" void LAB_11889494(void);
extern "C" void LAB_118894a8(void);
extern "C" void LAB_118894cc(void);
extern "C" void LAB_1188950c(void);
extern "C" void LAB_11889530(void);
extern "C" void LAB_11889540(void);
extern "C" void LAB_11889554(void);
extern "C" void LAB_11889564(void);
extern "C" void LAB_11889578(void);
extern "C" void LAB_118895a0(void);
extern "C" void LAB_11889654(void);
extern "C" void LAB_11889678(void);
extern "C" void LAB_118897bc(void);
extern "C" void LAB_11889948(void);
extern "C" void LAB_11889d78(void);
extern "C" void LAB_1188a09c(void);
extern "C" void LAB_1188a0f0(void);
extern "C" void LAB_1188a3a8(void);
extern "C" void LAB_1188a41c(void);
extern "C" void LAB_1188a7f4(void);
extern "C" void LAB_1188a81c(void);
extern "C" void LAB_1188a964(void);
extern "C" void LAB_1188a9a4(void);
extern "C" void LAB_1188aa0c(void);
extern "C" void LAB_1188aa5c(void);
extern "C" void LAB_1188aaa4(void);
extern "C" void LAB_1188abd4(void);
extern "C" void LAB_1188acc0(void);
extern "C" void LAB_1188ad1c(void);
extern "C" void LAB_1188ada0(void);
extern "C" void LAB_1188ae48(void);
extern "C" void LAB_1188af00(void);
extern "C" void LAB_1188af54(void);
extern "C" void LAB_1188afb0(void);
extern "C" void LAB_1188afe8(void);
extern "C" void LAB_121a0ae4(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_122fc6c4(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fca10(void);

extern "C" void LAB_10001ce9(void);
extern "C" void LAB_10005614(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10013543(void);
extern "C" void LAB_10013746(void);
extern "C" void LAB_1001718e(void);
extern "C" void LAB_1001d2eb(void);
extern "C" void LAB_1001d494(void);
extern "C" void LAB_1001ec63(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_100255ea(void);
extern "C" void LAB_1002a973(void);
extern "C" void LAB_1002faea(void);
extern "C" void LAB_1003651b(void);
extern "C" void LAB_10036af2(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_1003718c(void);
extern "C" void LAB_100381ea(void);
extern "C" void LAB_1003c51a(void);
extern "C" void LAB_10044a85(void);
extern "C" void LAB_10049fd5(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_100555fb(void);
extern "C" void LAB_10055a9c(void);
extern "C" void LAB_10057f0e(void);
extern "C" void LAB_100581bb(void);
extern "C" void LAB_1005855d(void);
extern "C" void LAB_1005ba00(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_10062008(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_1006d075(void);
extern "C" void LAB_1006faff(void);
extern "C" void LAB_100709e6(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10071b61(void);
extern "C" void LAB_10075365(void);
extern "C" void LAB_10076c79(void);
extern "C" void LAB_10076f76(void);
extern "C" void LAB_1007dc72(void);
extern "C" void LAB_1007df1f(void);
extern "C" void LAB_1007fff4(void);
extern "C" void LAB_100857c4(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_100913f8(void);
extern "C" void LAB_1009543f(void);
extern "C" void LAB_10099107(void);
extern "C" void LAB_10206d21(void);
extern "C" void LAB_102344b0(void);
extern "C" void LAB_10234970(void);
extern "C" void LAB_102349ef(void);
extern "C" void LAB_10235a84(void);
extern "C" void LAB_10249c8c(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a060(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187a528(void);
extern "C" void LAB_1187a54c(void);
extern "C" void LAB_1187a570(void);
extern "C" void LAB_1187a58c(void);
extern "C" void LAB_1187a5f4(void);
extern "C" void LAB_1187a614(void);
extern "C" void LAB_1187a634(void);
extern "C" void LAB_11880134(void);
extern "C" void LAB_11880164(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_1188207c(void);
extern "C" void LAB_118823e4(void);
extern "C" void LAB_11883dcc(void);
extern "C" void LAB_11884d84(void);
extern "C" void LAB_11884fe0(void);
extern "C" void LAB_11885b98(void);
extern "C" void LAB_11885ba8(void);
extern "C" void LAB_11885e20(void);
extern "C" void LAB_11885e5c(void);
extern "C" void LAB_11885eb4(void);
extern "C" void LAB_118865b0(void);
extern "C" void LAB_118865bc(void);
extern "C" void LAB_11886d8c(void);
extern "C" void LAB_11886db4(void);
extern "C" void LAB_11886e48(void);
extern "C" void LAB_11886e90(void);
extern "C" void LAB_11886f20(void);
extern "C" void LAB_11886f68(void);
extern "C" void LAB_11886fa4(void);
extern "C" void LAB_11886fb0(void);
extern "C" void LAB_11886ff8(void);
extern "C" void LAB_1188718c(void);
extern "C" void LAB_118875c8(void);
extern "C" void LAB_11887644(void);
extern "C" void LAB_118877bc(void);
extern "C" void LAB_11887884(void);
extern "C" void LAB_118878d4(void);
extern "C" void LAB_11887944(void);
extern "C" void LAB_11887a54(void);
extern "C" void LAB_11887aa0(void);
extern "C" void LAB_11888368(void);
extern "C" void LAB_118883f8(void);
extern "C" void LAB_11888440(void);
extern "C" void LAB_11888488(void);
extern "C" void LAB_11889238(void);
extern "C" void LAB_1188925c(void);
extern "C" void LAB_1188929c(void);
extern "C" void LAB_118892c0(void);
extern "C" void LAB_118892d0(void);
extern "C" void LAB_118892e4(void);
extern "C" void LAB_118892f4(void);
extern "C" void LAB_11889308(void);
extern "C" void LAB_1188932c(void);
extern "C" void LAB_1188936c(void);
extern "C" void LAB_11889390(void);
extern "C" void LAB_118893a0(void);
extern "C" void LAB_118893b4(void);
extern "C" void LAB_118893c4(void);
extern "C" void LAB_118893d8(void);
extern "C" void LAB_118893fc(void);
extern "C" void LAB_1188943c(void);
extern "C" void LAB_11889460(void);
extern "C" void LAB_11889470(void);
extern "C" void LAB_11889484(void);
extern "C" void LAB_11889494(void);
extern "C" void LAB_118894a8(void);
extern "C" void LAB_118894cc(void);
extern "C" void LAB_1188950c(void);
extern "C" void LAB_11889530(void);
extern "C" void LAB_11889540(void);
extern "C" void LAB_11889554(void);
extern "C" void LAB_11889564(void);
extern "C" void LAB_11889578(void);
extern "C" void LAB_118895a0(void);
extern "C" void LAB_11889654(void);
extern "C" void LAB_11889678(void);
extern "C" void LAB_118897bc(void);
extern "C" void LAB_11889948(void);
extern "C" void LAB_11889d78(void);
extern "C" void LAB_1188a09c(void);
extern "C" void LAB_1188a0f0(void);
extern "C" void LAB_1188a3a8(void);
extern "C" void LAB_1188a41c(void);
extern "C" void LAB_1188a7f4(void);
extern "C" void LAB_1188a81c(void);
extern "C" void LAB_1188a964(void);
extern "C" void LAB_1188a9a4(void);
extern "C" void LAB_1188aa0c(void);
extern "C" void LAB_1188aa5c(void);
extern "C" void LAB_1188aaa4(void);
extern "C" void LAB_1188abd4(void);
extern "C" void LAB_1188acc0(void);
extern "C" void LAB_1188ad1c(void);
extern "C" void LAB_1188ada0(void);
extern "C" void LAB_1188ae48(void);
extern "C" void LAB_1188af00(void);
extern "C" void LAB_1188af54(void);
extern "C" void LAB_1188afb0(void);
extern "C" void LAB_1188afe8(void);
extern "C" void LAB_121a0ae4(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_122fc6c4(void);
extern "C" void LAB_122fc888(void);
extern "C" void LAB_122fca10(void);


extern "C" void FUN_1001ec63(void);
extern "C" void FUN_100255ea(void);
extern "C" void FUN_1002faea(void);
extern "C" void FUN_10036af2(void);
extern "C" void FUN_1005ba00(void);
extern "C" void FUN_1007dc72(void);
extern "C" void FUN_1007fff4(void);
extern "C" void FUN_100913f8(void);

struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_101feeb0(undefined4 param_2); template<class... A> int m_FUN_101feeb0(A...); undefined4 * __thiscall m_FUN_101fef70(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_101fef70(A...); undefined4 * __thiscall m_FUN_101ff000(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_101ff000(A...); undefined4 * __thiscall m_FUN_101ff030(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_101ff030(A...); undefined4 * __thiscall m_FUN_101ff090(undefined4 *param_2); template<class... A> int m_FUN_101ff090(A...); undefined4 * __thiscall m_FUN_101ff250(undefined4 param_2); template<class... A> int m_FUN_101ff250(A...); int * __thiscall m_FUN_101ff2a0(int *param_2); template<class... A> int m_FUN_101ff2a0(A...); undefined4 * __thiscall m_FUN_101ffa20(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_101ffa20(A...); undefined4 * __thiscall m_FUN_10200f00(undefined4 param_2); template<class... A> int m_FUN_10200f00(A...); undefined4 * __thiscall m_FUN_10201800(undefined4 param_2); template<class... A> int m_FUN_10201800(A...); undefined4 * __thiscall m_FUN_10201860(char *param_2,size_t param_3); template<class... A> int m_FUN_10201860(A...); int * __thiscall m_FUN_102048c0(int *param_2); template<class... A> int m_FUN_102048c0(A...); int * __thiscall m_FUN_10204ae0(int *param_2); template<class... A> int m_FUN_10204ae0(A...); undefined4 * __thiscall m_FUN_10204c20(undefined4 *param_2); template<class... A> int m_FUN_10204c20(A...); bool __thiscall m_FUN_10204e00(int *param_2); template<class... A> int m_FUN_10204e00(A...); bool __thiscall m_FUN_10204e20(int *param_2); template<class... A> int m_FUN_10204e20(A...); int __thiscall m_FUN_10204f70(int param_2); template<class... A> int m_FUN_10204f70(A...); void __thiscall m_FUN_10206be0(int param_2); template<class... A> int m_FUN_10206be0(A...); uint __thiscall m_FUN_10206c10(uint param_2); template<class... A> int m_FUN_10206c10(A...); void __thiscall m_FUN_10206c70(uint param_2); template<class... A> int m_FUN_10206c70(A...); void __thiscall m_FUN_102070f0(int param_2); template<class... A> int m_FUN_102070f0(A...); void __thiscall m_FUN_10207180(int *param_2); template<class... A> int m_FUN_10207180(A...); void __thiscall m_FUN_102071f0(undefined4 *param_2); template<class... A> int m_FUN_102071f0(A...); int __thiscall m_FUN_102072f0(undefined4 param_2); template<class... A> int m_FUN_102072f0(A...); int __thiscall m_FUN_10207300(undefined4 param_2); template<class... A> int m_FUN_10207300(A...); int __thiscall m_FUN_10207c90(uint param_2); template<class... A> int m_FUN_10207c90(A...); undefined1 __thiscall m_FUN_10208cb0(int param_2); template<class... A> int m_FUN_10208cb0(A...); void __thiscall m_FUN_1020a430(undefined4 *param_2); template<class... A> int m_FUN_1020a430(A...); void __thiscall m_FUN_1020a580(undefined4 param_2); template<class... A> int m_FUN_1020a580(A...); int * __thiscall m_FUN_1020db00(int *param_2,uint param_3); template<class... A> int m_FUN_1020db00(A...); int * __thiscall m_FUN_1020f940(int *param_2,uint param_3); template<class... A> int m_FUN_1020f940(A...); int * __thiscall m_FUN_10217640(int *param_2); template<class... A> int m_FUN_10217640(A...); bool __thiscall m_FUN_10217e40(uint param_2); template<class... A> int m_FUN_10217e40(A...); int * __thiscall m_FUN_102187f0(int *param_2); template<class... A> int m_FUN_102187f0(A...); void __thiscall m_FUN_10220680(undefined4 *param_2); template<class... A> int m_FUN_10220680(A...); int __thiscall m_FUN_102206b0(int param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_102206b0(A...); int * __thiscall m_FUN_10220910(int *param_2); template<class... A> int m_FUN_10220910(A...); int __thiscall m_FUN_10220990(int param_2); template<class... A> int m_FUN_10220990(A...); int * __thiscall m_FUN_10220ab0(int *param_2); template<class... A> int m_FUN_10220ab0(A...); int * __thiscall m_FUN_10220af0(int *param_2); template<class... A> int m_FUN_10220af0(A...); int * __thiscall m_FUN_10220cc0(int *param_2); template<class... A> int m_FUN_10220cc0(A...); void __thiscall m_FUN_10221670(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10221670(A...); void __thiscall m_FUN_102216b0(int *param_2); template<class... A> int m_FUN_102216b0(A...); void __thiscall m_FUN_10221a50(int *param_2); template<class... A> int m_FUN_10221a50(A...); void __thiscall m_FUN_10221a70(int *param_2); template<class... A> int m_FUN_10221a70(A...); void __thiscall m_FUN_10221a90(int *param_2); template<class... A> int m_FUN_10221a90(A...); int * __thiscall m_FUN_10221f40(int param_2); template<class... A> int m_FUN_10221f40(A...); undefined4 * __thiscall m_FUN_10223ca0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10223ca0(A...); undefined4 * __thiscall m_FUN_10223cc0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10223cc0(A...); undefined4 * __thiscall m_FUN_102242e0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102242e0(A...); undefined4 * __thiscall m_FUN_10224320(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10224320(A...); undefined4 * __thiscall m_FUN_10224340(undefined4 param_2); template<class... A> int m_FUN_10224340(A...); undefined4 * __thiscall m_FUN_10224350(undefined4 param_2); template<class... A> int m_FUN_10224350(A...); undefined4 * __thiscall m_FUN_10224360(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10224360(A...); undefined4 * __thiscall m_FUN_10224370(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10224370(A...); undefined4 * __thiscall m_FUN_10224390(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10224390(A...); undefined4 * __thiscall m_FUN_10224410(int *param_2); template<class... A> int m_FUN_10224410(A...); undefined4 * __thiscall m_FUN_102245a0(int *param_2); template<class... A> int m_FUN_102245a0(A...); undefined4 * __thiscall m_FUN_10224730(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10224730(A...); undefined4 * __thiscall m_FUN_10224740(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_10224740(A...); int * __thiscall m_FUN_10224ac0(int *param_2); template<class... A> int m_FUN_10224ac0(A...); int * __thiscall m_FUN_10224ae0(int *param_2); template<class... A> int m_FUN_10224ae0(A...); int * __thiscall m_FUN_10224b00(int *param_2); template<class... A> int m_FUN_10224b00(A...); int * __thiscall m_FUN_10224b20(int *param_2); template<class... A> int m_FUN_10224b20(A...); undefined4 * __thiscall m_FUN_10224b40(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10224b40(A...); undefined4 * __thiscall m_FUN_10224bf0(int *param_2); template<class... A> int m_FUN_10224bf0(A...); undefined4 * __thiscall m_FUN_10224d90(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10224d90(A...); undefined4 * __thiscall m_FUN_10224dd0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10224dd0(A...); int * __thiscall m_FUN_10224df0(int *param_2); template<class... A> int m_FUN_10224df0(A...); int * __thiscall m_FUN_10224e70(int *param_2); template<class... A> int m_FUN_10224e70(A...); int * __thiscall m_FUN_10224e90(int *param_2); template<class... A> int m_FUN_10224e90(A...); int * __thiscall m_FUN_10224eb0(int *param_2); template<class... A> int m_FUN_10224eb0(A...); int * __thiscall m_FUN_102251f0(int *param_2); template<class... A> int m_FUN_102251f0(A...); undefined4 * __thiscall m_FUN_10225470(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10225470(A...); undefined4 * __thiscall m_FUN_102254a0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_102254a0(A...); undefined4 * __thiscall m_FUN_102254d0(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_102254d0(A...); undefined4 * __thiscall m_FUN_10225500(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10225500(A...); undefined4 * __thiscall m_FUN_10225530(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10225530(A...); undefined4 * __thiscall m_FUN_10225560(undefined4 *param_2,char *param_3); template<class... A> int m_FUN_10225560(A...); int * __thiscall m_FUN_10225590(int *param_2); template<class... A> int m_FUN_10225590(A...); int * __thiscall m_FUN_10225600(int *param_2); template<class... A> int m_FUN_10225600(A...); int * __thiscall m_FUN_10225890(int *param_2); template<class... A> int m_FUN_10225890(A...); void __thiscall m_FUN_10225e10(undefined4 *param_2); template<class... A> int m_FUN_10225e10(A...); void __thiscall m_FUN_10225e30(undefined4 *param_2); template<class... A> int m_FUN_10225e30(A...); void __thiscall m_FUN_10225e50(undefined4 *param_2); template<class... A> int m_FUN_10225e50(A...); void __thiscall m_FUN_10226b90(int *param_2); template<class... A> int m_FUN_10226b90(A...); undefined4 * __thiscall m_FUN_10228de0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10228de0(A...); undefined4 * __thiscall m_FUN_10228e60(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10228e60(A...); undefined4 * __thiscall m_FUN_10228ee0(undefined4 param_2,undefined4 param_3,undefined4 param_4); template<class... A> int m_FUN_10228ee0(A...); undefined4 * __thiscall m_FUN_10229380(undefined4 *param_2); template<class... A> int m_FUN_10229380(A...); undefined4 * __thiscall m_FUN_10229490(undefined4 param_2); template<class... A> int m_FUN_10229490(A...); undefined4 * __thiscall m_FUN_102294b0(undefined4 param_2); template<class... A> int m_FUN_102294b0(A...); undefined4 * __thiscall m_FUN_102294d0(undefined4 param_2); template<class... A> int m_FUN_102294d0(A...); undefined4 * __thiscall m_FUN_102299a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102299a0(A...); undefined4 * __thiscall m_FUN_102299b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102299b0(A...); undefined4 * __thiscall m_FUN_102299c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102299c0(A...); undefined4 * __thiscall m_FUN_102299d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102299d0(A...); undefined4 * __thiscall m_FUN_102299e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102299e0(A...); undefined4 * __thiscall m_FUN_102299f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102299f0(A...); undefined4 * __thiscall m_FUN_10229a00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10229a00(A...); undefined4 * __thiscall m_FUN_10229a10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10229a10(A...); undefined4 * __thiscall m_FUN_10229a20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10229a20(A...); undefined4 * __thiscall m_FUN_10229a30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10229a30(A...); undefined4 * __thiscall m_FUN_10229a40(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10229a40(A...); undefined4 * __thiscall m_FUN_10229ae0(undefined4 *param_2); template<class... A> int m_FUN_10229ae0(A...); undefined4 * __thiscall m_FUN_10229af0(undefined4 *param_2); template<class... A> int m_FUN_10229af0(A...); undefined4 * __thiscall m_FUN_10229b00(undefined4 *param_2); template<class... A> int m_FUN_10229b00(A...); undefined4 * __thiscall m_FUN_10229b10(undefined4 param_2); template<class... A> int m_FUN_10229b10(A...); undefined4 * __thiscall m_FUN_10229b30(undefined4 param_2); template<class... A> int m_FUN_10229b30(A...); undefined4 * __thiscall m_FUN_10229b50(undefined4 param_2); template<class... A> int m_FUN_10229b50(A...); undefined4 * __thiscall m_FUN_1022a190(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1022a190(A...); undefined4 * __thiscall m_FUN_1022a240(undefined4 *param_2); template<class... A> int m_FUN_1022a240(A...); undefined4 * __thiscall m_FUN_1022a270(undefined4 *param_2); template<class... A> int m_FUN_1022a270(A...); undefined4 * __thiscall m_FUN_1022a700(undefined4 param_2); template<class... A> int m_FUN_1022a700(A...); undefined4 * __thiscall m_FUN_1022af30(undefined4 param_2); template<class... A> int m_FUN_1022af30(A...); undefined4 * __thiscall m_FUN_1022b320(undefined4 param_2); template<class... A> int m_FUN_1022b320(A...); undefined4 * __thiscall m_FUN_1022bbe0(undefined4 param_2); template<class... A> int m_FUN_1022bbe0(A...); undefined4 * __thiscall m_FUN_1022c310(undefined4 param_2); template<class... A> int m_FUN_1022c310(A...); undefined4 * __thiscall m_FUN_1022c680(undefined4 param_2); template<class... A> int m_FUN_1022c680(A...); undefined4 * __thiscall m_FUN_1022c690(undefined4 param_2); template<class... A> int m_FUN_1022c690(A...); undefined4 * __thiscall m_FUN_1022c6a0(undefined4 param_2); template<class... A> int m_FUN_1022c6a0(A...); undefined4 * __thiscall m_FUN_1022c6b0(undefined4 param_2,int param_3); template<class... A> int m_FUN_1022c6b0(A...); undefined4 * __thiscall m_FUN_1022c6d0(undefined4 param_2,int param_3); template<class... A> int m_FUN_1022c6d0(A...); undefined4 * __thiscall m_FUN_1022c6f0(undefined4 param_2,int param_3); template<class... A> int m_FUN_1022c6f0(A...); undefined4 * __thiscall m_FUN_1022f470(undefined4 *param_2); template<class... A> int m_FUN_1022f470(A...); undefined4 * __thiscall m_FUN_1022f4e0(undefined4 *param_2); template<class... A> int m_FUN_1022f4e0(A...); bool __thiscall m_FUN_1022f530(int *param_2); template<class... A> int m_FUN_1022f530(A...); bool __thiscall m_FUN_1022f550(int *param_2); template<class... A> int m_FUN_1022f550(A...); bool __thiscall m_FUN_1022f570(int *param_2); template<class... A> int m_FUN_1022f570(A...); bool __thiscall m_FUN_1022f590(int *param_2); template<class... A> int m_FUN_1022f590(A...); bool __thiscall m_FUN_1022f5b0(int *param_2); template<class... A> int m_FUN_1022f5b0(A...); bool __thiscall m_FUN_1022f5d0(int *param_2); template<class... A> int m_FUN_1022f5d0(A...); bool __thiscall m_FUN_1022f5f0(int *param_2); template<class... A> int m_FUN_1022f5f0(A...); bool __thiscall m_FUN_1022f610(int *param_2); template<class... A> int m_FUN_1022f610(A...); bool __thiscall m_FUN_1022f630(int *param_2); template<class... A> int m_FUN_1022f630(A...); bool __thiscall m_FUN_1022f650(int *param_2); template<class... A> int m_FUN_1022f650(A...); bool __thiscall m_FUN_1022f670(int *param_2); template<class... A> int m_FUN_1022f670(A...); bool __thiscall m_FUN_1022f690(int *param_2); template<class... A> int m_FUN_1022f690(A...); void __thiscall m_FUN_1022fce0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1022fce0(A...); void __thiscall m_FUN_1022fd70(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1022fd70(A...); void __thiscall m_FUN_1022fe20(undefined4 param_2); template<class... A> int m_FUN_1022fe20(A...); int * __thiscall m_FUN_10233240(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10233240(A...); int * __thiscall m_FUN_102332c0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_102332c0(A...); int * __thiscall m_FUN_10233340(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10233340(A...); void __thiscall m_FUN_10233a30(int param_2); template<class... A> int m_FUN_10233a30(A...); void __thiscall m_FUN_10233a50(int param_2); template<class... A> int m_FUN_10233a50(A...); void __thiscall m_FUN_10233a70(int param_2); template<class... A> int m_FUN_10233a70(A...); void __thiscall m_FUN_10233a90(int param_2); template<class... A> int m_FUN_10233a90(A...); void __thiscall m_FUN_10233ab0(int param_2); template<class... A> int m_FUN_10233ab0(A...); void __thiscall m_FUN_10233ad0(int param_2); template<class... A> int m_FUN_10233ad0(A...); void __thiscall m_FUN_10233af0(int param_2); template<class... A> int m_FUN_10233af0(A...); void __thiscall m_FUN_10233b10(int param_2); template<class... A> int m_FUN_10233b10(A...); void __thiscall m_FUN_10233b30(int *param_2); template<class... A> int m_FUN_10233b30(A...); void __thiscall m_FUN_10233b90(int *param_2); template<class... A> int m_FUN_10233b90(A...); void __thiscall m_FUN_10233bf0(int *param_2); template<class... A> int m_FUN_10233bf0(A...); void __thiscall m_FUN_10233c50(undefined4 param_2); template<class... A> int m_FUN_10233c50(A...); void __thiscall m_FUN_10233c60(undefined4 param_2); template<class... A> int m_FUN_10233c60(A...); void __thiscall m_FUN_10233c70(undefined4 param_2); template<class... A> int m_FUN_10233c70(A...); void __thiscall m_FUN_10233c80(undefined4 param_2); template<class... A> int m_FUN_10233c80(A...); void __thiscall m_FUN_10233c90(undefined4 param_2); template<class... A> int m_FUN_10233c90(A...); void __thiscall m_FUN_10233ca0(undefined4 param_2); template<class... A> int m_FUN_10233ca0(A...); void __thiscall m_FUN_10233cb0(undefined4 param_2); template<class... A> int m_FUN_10233cb0(A...); void __thiscall m_FUN_10233cc0(undefined4 param_2); template<class... A> int m_FUN_10233cc0(A...); void __thiscall m_FUN_10233cd0(undefined4 param_2); template<class... A> int m_FUN_10233cd0(A...); void __thiscall m_FUN_10233ce0(undefined4 *param_2); template<class... A> int m_FUN_10233ce0(A...); void __thiscall m_FUN_10233d10(undefined4 *param_2); template<class... A> int m_FUN_10233d10(A...); void __thiscall m_FUN_102342a0(undefined4 *param_2); template<class... A> int m_FUN_102342a0(A...); void __thiscall m_FUN_102342c0(undefined4 *param_2); template<class... A> int m_FUN_102342c0(A...); void __thiscall m_FUN_102342e0(undefined4 *param_2); template<class... A> int m_FUN_102342e0(A...); void __thiscall m_FUN_10234300(undefined4 *param_2); template<class... A> int m_FUN_10234300(A...); void __thiscall m_FUN_10234310(undefined4 *param_2); template<class... A> int m_FUN_10234310(A...); void __thiscall m_FUN_10234320(undefined4 *param_2); template<class... A> int m_FUN_10234320(A...); void __thiscall m_FUN_10234330(undefined4 *param_2); template<class... A> int m_FUN_10234330(A...); void __thiscall m_FUN_10234340(undefined4 *param_2); template<class... A> int m_FUN_10234340(A...); void __thiscall m_FUN_10234350(undefined4 *param_2); template<class... A> int m_FUN_10234350(A...); void __thiscall m_FUN_10234360(undefined4 *param_2); template<class... A> int m_FUN_10234360(A...); void __thiscall m_FUN_10234370(undefined4 *param_2); template<class... A> int m_FUN_10234370(A...); void __thiscall m_FUN_10234380(undefined4 *param_2); template<class... A> int m_FUN_10234380(A...); int * __thiscall m_FUN_10234390(int *param_2,int *param_3); template<class... A> int m_FUN_10234390(A...); int * __thiscall m_FUN_10234880(int *param_2,int *param_3); template<class... A> int m_FUN_10234880(A...); uint __thiscall m_FUN_10235120(byte *param_2); template<class... A> int m_FUN_10235120(A...); uint __thiscall m_FUN_10235180(byte *param_2); template<class... A> int m_FUN_10235180(A...); uint __thiscall m_FUN_102351e0(byte *param_2); template<class... A> int m_FUN_102351e0(A...); void __thiscall m_FUN_10236140(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10236140(A...); void __thiscall m_FUN_10236590(undefined4 *param_2); template<class... A> int m_FUN_10236590(A...); void __thiscall m_FUN_102365a0(undefined4 *param_2); template<class... A> int m_FUN_102365a0(A...); void __thiscall m_FUN_102365c0(undefined4 *param_2); template<class... A> int m_FUN_102365c0(A...); void __thiscall m_FUN_102365d0(undefined4 *param_2); template<class... A> int m_FUN_102365d0(A...); undefined4 __thiscall m_FUN_1023c160(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_1023c160(A...); byte __thiscall m_FUN_10241e00(byte param_2,char param_3); template<class... A> int m_FUN_10241e00(A...); uint __thiscall m_FUN_10244ec0(undefined4 param_2); template<class... A> int m_FUN_10244ec0(A...); void __thiscall m_FUN_10244ed0(uint param_2); template<class... A> int m_FUN_10244ed0(A...); void __thiscall m_FUN_10245910(undefined4 *param_2); template<class... A> int m_FUN_10245910(A...); int * __thiscall m_FUN_10245ad0(int *param_2); template<class... A> int m_FUN_10245ad0(A...); int * __thiscall m_FUN_10245b50(int *param_2); template<class... A> int m_FUN_10245b50(A...); int * __thiscall m_FUN_10245bf0(int *param_2); template<class... A> int m_FUN_10245bf0(A...); int * __thiscall m_FUN_10245c60(int *param_2); template<class... A> int m_FUN_10245c60(A...); int * __thiscall m_FUN_10249cf0(int *param_2); template<class... A> int m_FUN_10249cf0(A...); int * __thiscall m_FUN_10249d70(int *param_2); template<class... A> int m_FUN_10249d70(A...); int * __thiscall m_FUN_10249d90(int *param_2); template<class... A> int m_FUN_10249d90(A...); int * __thiscall m_FUN_1024c1a0(int *param_2); template<class... A> int m_FUN_1024c1a0(A...); undefined4 * __thiscall m_FUN_1024c1c0(undefined4 *param_2); template<class... A> int m_FUN_1024c1c0(A...); undefined4 * __thiscall m_FUN_1024e5b0(int *param_2); template<class... A> int m_FUN_1024e5b0(A...); int * __thiscall m_FUN_1024e750(int *param_2); template<class... A> int m_FUN_1024e750(A...); undefined4 * __thiscall m_FUN_1024e770(undefined4 *param_2); template<class... A> int m_FUN_1024e770(A...); void __thiscall m_FUN_1024e900(int *param_2); template<class... A> int m_FUN_1024e900(A...); undefined4 * __thiscall m_FUN_1024efc0(undefined4 param_2); template<class... A> int m_FUN_1024efc0(A...); undefined4 * __thiscall m_FUN_1024f000(undefined4 param_2); template<class... A> int m_FUN_1024f000(A...); void __thiscall m_FUN_1024f980(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1024f980(A...); void __thiscall m_FUN_1024f9b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_1024f9b0(A...); void __thiscall m_FUN_1024fe20(int param_2); template<class... A> int m_FUN_1024fe20(A...); void __thiscall m_FUN_1024fe40(int param_2); template<class... A> int m_FUN_1024fe40(A...); void __thiscall m_FUN_1024fe60(int *param_2); template<class... A> int m_FUN_1024fe60(A...); void __thiscall m_FUN_1024fec0(undefined4 param_2); template<class... A> int m_FUN_1024fec0(A...); void __thiscall m_FUN_10250120(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10250120(A...); SCStr * __thiscall m_FUN_10250d70(SCStr *param_2); template<class... A> int m_FUN_10250d70(A...); undefined4 * __thiscall m_FUN_10253960(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10253960(A...); SCStr * __thiscall m_FUN_10253da0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10253da0(A...); undefined4 * __thiscall m_FUN_10253df0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10253df0(A...); SCStr * __thiscall m_FUN_10254690(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10254690(A...); int * __thiscall m_FUN_102546e0(int *param_2); template<class... A> int m_FUN_102546e0(A...); undefined4 * __thiscall m_FUN_10254700(undefined4 *param_2); template<class... A> int m_FUN_10254700(A...); int * __thiscall m_FUN_10254720(int *param_2); template<class... A> int m_FUN_10254720(A...); int * __thiscall m_FUN_10254740(int *param_2); template<class... A> int m_FUN_10254740(A...); int * __thiscall m_FUN_10254760(int *param_2); template<class... A> int m_FUN_10254760(A...); void __thiscall m_FUN_10254b90(undefined4 *param_2); template<class... A> int m_FUN_10254b90(A...); void __thiscall m_FUN_10254bc0(undefined4 *param_2); template<class... A> int m_FUN_10254bc0(A...); void __thiscall m_FUN_10254bf0(undefined4 *param_2); template<class... A> int m_FUN_10254bf0(A...); undefined4 * __thiscall m_FUN_10257060(undefined4 *param_2); template<class... A> int m_FUN_10257060(A...); undefined4 * __thiscall m_FUN_102570d0(undefined4 *param_2); template<class... A> int m_FUN_102570d0(A...); undefined4 * __thiscall m_FUN_10257240(undefined4 param_2); template<class... A> int m_FUN_10257240(A...); undefined4 * __thiscall m_FUN_10257340(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10257340(A...); undefined4 * __thiscall m_FUN_10257350(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10257350(A...); undefined4 * __thiscall m_FUN_102573e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102573e0(A...); undefined4 * __thiscall m_FUN_10257410(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10257410(A...); SCStr * __thiscall m_FUN_10258f00(SCStr *param_2); template<class... A> int m_FUN_10258f00(A...); bool __thiscall m_FUN_10258f70(int *param_2); template<class... A> int m_FUN_10258f70(A...); bool __thiscall m_FUN_10258f90(int *param_2); template<class... A> int m_FUN_10258f90(A...); int __thiscall m_FUN_102590f0(int param_2); template<class... A> int m_FUN_102590f0(A...); void __thiscall m_FUN_102596f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_102596f0(A...); uint __thiscall m_FUN_1025a0a0(uint param_2); template<class... A> int m_FUN_1025a0a0(A...); void __thiscall m_FUN_1025adf0(int param_2); template<class... A> int m_FUN_1025adf0(A...); void __thiscall m_FUN_1025aee0(int param_2); template<class... A> int m_FUN_1025aee0(A...); void __thiscall m_FUN_1025af00(int param_2); template<class... A> int m_FUN_1025af00(A...); void __thiscall m_FUN_1025af20(int param_2); template<class... A> int m_FUN_1025af20(A...); void __thiscall m_FUN_1025af40(int param_2); template<class... A> int m_FUN_1025af40(A...); void __thiscall m_FUN_1025af60(int param_2); template<class... A> int m_FUN_1025af60(A...); void __thiscall m_FUN_1025af80(int *param_2); template<class... A> int m_FUN_1025af80(A...); void __thiscall m_FUN_1025afe0(int *param_2); template<class... A> int m_FUN_1025afe0(A...); void __thiscall m_FUN_1025b040(int *param_2); template<class... A> int m_FUN_1025b040(A...); void __thiscall m_FUN_1025b0a0(int *param_2); template<class... A> int m_FUN_1025b0a0(A...); void __thiscall m_FUN_1025b100(int *param_2); template<class... A> int m_FUN_1025b100(A...); void __thiscall m_FUN_1025b170(undefined4 param_2); template<class... A> int m_FUN_1025b170(A...); void __thiscall m_FUN_1025b180(undefined4 param_2); template<class... A> int m_FUN_1025b180(A...); void __thiscall m_FUN_1025b190(undefined4 param_2); template<class... A> int m_FUN_1025b190(A...); void __thiscall m_FUN_1025b1a0(undefined4 param_2); template<class... A> int m_FUN_1025b1a0(A...); void __thiscall m_FUN_1025b1b0(undefined4 param_2); template<class... A> int m_FUN_1025b1b0(A...); void __thiscall m_FUN_1025b1c0(undefined4 param_2); template<class... A> int m_FUN_1025b1c0(A...); void __thiscall m_FUN_1025b7f0(undefined4 *param_2); template<class... A> int m_FUN_1025b7f0(A...); void __thiscall m_FUN_1025bad0(undefined4 *param_2); template<class... A> int m_FUN_1025bad0(A...); int __thiscall m_FUN_1025c510(int param_2); template<class... A> int m_FUN_1025c510(A...); undefined4 * __thiscall m_FUN_1025d5b0(undefined4 *param_2); template<class... A> int m_FUN_1025d5b0(A...); int * __thiscall m_FUN_1025d5d0(int *param_2); template<class... A> int m_FUN_1025d5d0(A...); undefined4 * __thiscall m_FUN_1025e200(int param_2); template<class... A> int m_FUN_1025e200(A...); undefined4 * __thiscall m_FUN_1025eab0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1025eab0(A...); undefined4 * __thiscall m_FUN_1025eb90(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1025eb90(A...); undefined4 * __thiscall m_FUN_1025ebb0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_1025ebb0(A...); undefined4 * __thiscall m_FUN_1025f160(undefined4 param_2); template<class... A> int m_FUN_1025f160(A...); undefined4 * __thiscall m_FUN_1025f180(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1025f180(A...); undefined4 * __thiscall m_FUN_1025f210(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_1025f210(A...); undefined4 * __thiscall m_FUN_1025f220(undefined4 param_2,undefined1 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined1 param_7,undefined1 param_8); template<class... A> int m_FUN_1025f220(A...); bool __thiscall m_FUN_1025fe20(int *param_2); template<class... A> int m_FUN_1025fe20(A...); bool __thiscall m_FUN_1025fe40(int *param_2); template<class... A> int m_FUN_1025fe40(A...); void __thiscall m_FUN_10260f30(undefined4 *param_2); template<class... A> int m_FUN_10260f30(A...); SCStr * __thiscall m_FUN_10262f70(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10262f70(A...); SCStr * __thiscall m_FUN_10262fa0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10262fa0(A...); SCStr * __thiscall m_FUN_10262fd0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10262fd0(A...); SCStr * __thiscall m_FUN_10263000(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263000(A...); SCStr * __thiscall m_FUN_10263030(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263030(A...); SCStr * __thiscall m_FUN_10263060(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263060(A...); SCStr * __thiscall m_FUN_10263090(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263090(A...); SCStr * __thiscall m_FUN_102630c0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_102630c0(A...); SCStr * __thiscall m_FUN_102630f0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_102630f0(A...); SCStr * __thiscall m_FUN_10263120(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263120(A...); SCStr * __thiscall m_FUN_10263150(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263150(A...); SCStr * __thiscall m_FUN_10263180(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263180(A...); SCStr * __thiscall m_FUN_102631b0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_102631b0(A...); SCStr * __thiscall m_FUN_102631e0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_102631e0(A...); SCStr * __thiscall m_FUN_10263210(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263210(A...); SCStr * __thiscall m_FUN_10263240(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263240(A...); SCStr * __thiscall m_FUN_10263270(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_10263270(A...); SCStr * __thiscall m_FUN_102632a0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_102632a0(A...); SCStr * __thiscall m_FUN_102632d0(char *param_2,undefined4 *param_3); template<class... A> int m_FUN_102632d0(A...); int * __thiscall m_FUN_102636b0(int *param_2); template<class... A> int m_FUN_102636b0(A...); };

extern int FUN_100517a8(...);
extern int LOCK(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int _CxxThrowException(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int func_0x1001d494(...);
extern int func_0x100581bb(...);
extern int func_0x10076f76(...);
extern int func_0x1007df1f(...);
extern int operator_new(...);
extern __declspec(dllimport) int strncmp(...);
extern __declspec(dllimport) int strtoul(...);
extern int swi(...);
template<class... A> int __stdcall thunk_FUN_101176e0(A...);
extern int thunk_FUN_1011bdc0(...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_101ba530(...);
extern int thunk_FUN_101d7220(...);
extern int thunk_FUN_101fd7b0(...);
extern int thunk_FUN_101fda20(...);
extern int thunk_FUN_102072a0(...);
extern int thunk_FUN_10207b10(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_102260c0(...);
extern int thunk_FUN_10226130(...);
extern int thunk_FUN_10227930(...);
extern int thunk_FUN_102279b0(...);
extern int thunk_FUN_10227a30(...);
extern int thunk_FUN_10227fb0(...);
extern int thunk_FUN_1022d6c0(...);
extern int thunk_FUN_1022d740(...);
extern int thunk_FUN_102341a0(...);
template<class... A> int __stdcall thunk_FUN_10246170(A...);
extern int thunk_FUN_10246290(...);
extern int thunk_FUN_10254af0(...);
template<class... A> int __stdcall thunk_FUN_10254c20(A...);
template<class... A> int __stdcall thunk_FUN_1025f3f0(A...);
extern int thunk_FUN_10292c70(...);
extern int thunk_FUN_103d0730(...);
template<class... A> int __stdcall thunk_FUN_103d3340(A...);
template<class... A> int __stdcall thunk_FUN_103d63d0(A...);
template<class... A> int __stdcall thunk_FUN_103d65f0(A...);
extern int thunk_FUN_1059b760(...);
extern int thunk_FUN_1059bd30(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059c6f0(...);
template<class... A> int __stdcall thunk_FUN_1059cad0(A...);
extern int thunk_FUN_1059d0b0(...);
template<class... A> int __stdcall thunk_FUN_1059d5a0(A...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_105a05f0(...);
template<class... A> int __stdcall thunk_FUN_105a5110(A...);
template<class... A> int __stdcall thunk_FUN_105a51f0(A...);
template<class... A> int __stdcall thunk_FUN_105a52b0(A...);
extern int thunk_FUN_105a7950(...);
extern int thunk_FUN_105ad900(...);
extern int thunk_FUN_105f5740(...);
extern int thunk_FUN_1061e370(...);
extern int thunk_FUN_106243b0(...);
extern int thunk_FUN_1106b190(...);
extern int thunk_FUN_1106b1c0(...);
extern int thunk_FUN_1106f6e0(...);
extern int thunk_FUN_110a5ba0(...);
extern int thunk_FUN_110adba0(...);
extern int thunk_FUN_111a0940(...);
extern int thunk_FUN_111a0e70(...);
extern int thunk_FUN_111c06e0(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
extern int thunk_FUN_1123fcd0(...);
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
extern int thunk_FUN_112a7f50(...);
extern int thunk_FUN_112a8010(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1145d8e0(...);
extern int thunk_FUN_1145f900(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148b586(...);
extern int DAT_11880fb0;
extern int DAT_118823e4;
extern int DAT_11d330dc;
extern int DAT_12126b84;
extern int DAT_121a0ae4;
extern int DAT_122f5650;
extern int g_lSCObjCount;
extern int ghidra_vftable_BatteryWeakChargerData;
extern int ghidra_vftable_FactoryResetData;
extern int ghidra_vftable_ForgotHouseholdData;
extern int ghidra_vftable_InvalidOptimo2OrientationData;
extern int ghidra_vftable_LaunchWifiConfig;
extern int ghidra_vftable_LegacyCRModernHHData;
extern int ghidra_vftable_NoNetworkFoundData;
extern int ghidra_vftable_OutdatedControllerData;
extern int ghidra_vftable_RAsyncBrowseCacheCB;
extern int ghidra_vftable_RAsyncBrowseErrorHandler;
extern int ghidra_vftable_RBrowseNodeObj;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp;
extern int ghidra_vftable_RetailDemoData;
extern int ghidra_vftable_SCAccountManagerEventSinkInternal;
extern int ghidra_vftable_SCActionOnGroupDescriptorImpl;
extern int ghidra_vftable_SCActionStringInput;
extern int ghidra_vftable_SCAddCustomRadioStation;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCBTClassicConnectionManagerEventSinkInternal;
extern int ghidra_vftable_SCBrowseItemEventSinkInternal;
extern int ghidra_vftable_SCController_LimitedAccessStateData;
extern int ghidra_vftable_SCEulaManager;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCExperimentManager_EventSink;
extern int ghidra_vftable_SCFactoryResetActionDescriptor;
extern int ghidra_vftable_SCFavoritesManagerListener;
extern int ghidra_vftable_SCFileBackedData;
extern int ghidra_vftable_SCFoundProductManager_Listener;
extern int ghidra_vftable_SCHouseholdManagerEventSinkInternal;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIActionOnGroupDescriptor;
extern int ghidra_vftable_SCIAddToQueueAtNumberDescriptor;
extern int ghidra_vftable_SCIBrowseGroupsInfo;
extern int ghidra_vftable_SCIBrowseMetadata;
extern int ghidra_vftable_SCIController;
extern int ghidra_vftable_SCIControllerTest;
extern int ghidra_vftable_SCICrashReportManager;
extern int ghidra_vftable_SCIData;
extern int ghidra_vftable_SCIEulaManager;
extern int ghidra_vftable_SCIExperimentManager;
extern int ghidra_vftable_SCIInAppMessaging;
extern int ghidra_vftable_SCIInAppProduct;
extern int ghidra_vftable_SCIInAppProductCallback;
extern int ghidra_vftable_SCIInAppPurchaseCallback;
extern int ghidra_vftable_SCIInAppPurchaseCallbackToken;
extern int ghidra_vftable_SCIInAppPurchaseManager;
extern int ghidra_vftable_SCIInnerActionFactory;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIPowerscrollDataSource;
extern int ghidra_vftable_SCISelectableItem;
extern int ghidra_vftable_SCITime;
extern int ghidra_vftable_SCITooltip;
extern int ghidra_vftable_SCIncrementHHSwgenAndOnlineUpdateWizardActionDescriptor;
extern int ghidra_vftable_SCInnerActionFactoryImpl;
extern int ghidra_vftable_SCInvalidOrientationLearnMoreActionDescriptor;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCMainthreadCallback;
extern int ghidra_vftable_SCNewWizController;
extern int ghidra_vftable_SCNewWizControllerFor;
extern int ghidra_vftable_SCShareManagerEventSinkInternal;
extern int ghidra_vftable_SCShareNameInput;
extern int ghidra_vftable_SCStrProp;
extern int ghidra_vftable_SCStrStandaloneInputBase;
extern int ghidra_vftable_SCSwfObjBCListener;
extern int ghidra_vftable_SCSwfObjHHListener;
extern int ghidra_vftable_SCTestPoint;
extern int ghidra_vftable_SCTime;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUserAccountEventSinkInternal;
extern int ghidra_vftable_SCWeakChargerLearnMoreActionDescriptor;
extern int ghidra_vftable_UnsupportedData;
extern int ghidra_vftable_ZonePlayerUpdateData;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_14;
extern int uStack_24;
extern int uStack_30;
extern int uStack_34;
extern int uStack_4;
extern int uStack_8;
extern int uStack_c;
extern undefined1 LAB_10234476[];
extern "C" void LAB_102349e4(void);
extern undefined1 LAB_1059d6b4[];
extern undefined1 LAB_1059d8b2[];
extern undefined1 LAB_1150a330[];
extern undefined1 LAB_1154fc30[];
extern undefined1 LAB_115a67f4[];
extern undefined1 LAB_115a683d[];
extern undefined1 LAB_115a687d[];
extern undefined1 LAB_115a83b0[];
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe5c0(void);
template<class... A> int FUN_101fe5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe5d0(void);
template<class... A> int FUN_101fe5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe5e0(void);
template<class... A> int FUN_101fe5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe5f0(void);
template<class... A> int FUN_101fe5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe600(void);
template<class... A> int FUN_101fe600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe610(void);
template<class... A> int FUN_101fe610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe620(void);
template<class... A> int FUN_101fe620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe630(void);
template<class... A> int FUN_101fe630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe640(void);
template<class... A> int FUN_101fe640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe650(void);
template<class... A> int FUN_101fe650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe660(void);
template<class... A> int FUN_101fe660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_101fe670(void);
template<class... A> int FUN_101fe670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe680(undefined4 param_1);
template<class... A> int FUN_101fe680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe690(undefined4 param_1);
template<class... A> int FUN_101fe690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_101fe6a0(undefined4 param_1);
template<class... A> int FUN_101fe6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_101fe6b0(int param_1,int param_2);
template<class... A> int FUN_101fe6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_101fe6c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_101fe6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe6e0(undefined4 *param_1);
template<class... A> int FUN_101fe6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe710(undefined4 *param_1);
template<class... A> int FUN_101fe710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe740(undefined4 *param_1);
template<class... A> int FUN_101fe740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe770(undefined4 *param_1);
template<class... A> int FUN_101fe770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe790(undefined4 *param_1);
template<class... A> int FUN_101fe790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe7c0(undefined4 *param_1);
template<class... A> int FUN_101fe7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe7f0(undefined4 *param_1);
template<class... A> int FUN_101fe7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe890(undefined4 *param_1);
template<class... A> int FUN_101fe890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe8b0(undefined4 *param_1);
template<class... A> int FUN_101fe8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fe8d0(undefined4 *param_1);
template<class... A> int FUN_101fe8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fea30(undefined4 *param_1);
template<class... A> int FUN_101fea30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fea90(undefined4 *param_1);
template<class... A> int FUN_101fea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101feab0(undefined4 *param_1);
template<class... A> int FUN_101feab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101feb10(undefined4 *param_1);
template<class... A> int FUN_101feb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101febf0(undefined4 *param_1);
template<class... A> int FUN_101febf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fed90(undefined4 *param_1);
template<class... A> int FUN_101fed90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fedf0(undefined4 *param_1);
template<class... A> int FUN_101fedf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101fee10(undefined4 *param_1);
template<class... A> int FUN_101fee10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ff010(undefined4 *param_1);
template<class... A> int FUN_101ff010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ff050(undefined4 *param_1);
template<class... A> int FUN_101ff050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ff070(undefined4 param_1);
template<class... A> int FUN_101ff070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_101ff080(undefined4 param_1);
template<class... A> int FUN_101ff080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ff0f0(undefined4 *param_1);
template<class... A> int FUN_101ff0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ff200(undefined4 *param_1);
template<class... A> int FUN_101ff200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ff220(undefined4 *param_1);
template<class... A> int FUN_101ff220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ff240(undefined4 *param_1);
template<class... A> int FUN_101ff240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ff270(undefined4 *param_1);
template<class... A> int FUN_101ff270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ffaf0(undefined4 *param_1);
template<class... A> int FUN_101ffaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_101ffc60(undefined4 *param_1);
template<class... A> int FUN_101ffc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10201250(undefined4 *param_1);
template<class... A> int FUN_10201250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10201260(undefined4 *param_1);
template<class... A> int FUN_10201260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10201270(undefined4 *param_1);
template<class... A> int FUN_10201270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10201280(undefined4 *param_1);
template<class... A> int FUN_10201280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10201290(undefined4 *param_1);
template<class... A> int FUN_10201290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102012a0(undefined4 *param_1);
template<class... A> int FUN_102012a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102012b0(undefined4 *param_1);
template<class... A> int FUN_102012b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102012c0(undefined4 *param_1);
template<class... A> int FUN_102012c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102012d0(undefined4 *param_1);
template<class... A> int FUN_102012d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102012e0(undefined4 *param_1);
template<class... A> int FUN_102012e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10201840(undefined4 *param_1);
template<class... A> int FUN_10201840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10201850(undefined4 *param_1);
template<class... A> int FUN_10201850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102018e0(undefined4 *param_1);
template<class... A> int FUN_102018e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10201920(undefined4 *param_1);
template<class... A> int FUN_10201920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10201960(undefined4 *param_1);
template<class... A> int FUN_10201960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10202c80(undefined4 *param_1);
template<class... A> int FUN_10202c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102034e0(undefined4 *param_1);
template<class... A> int FUN_102034e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10203680(undefined4 *param_1);
template<class... A> int FUN_10203680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10203fe0(undefined4 *param_1);
template<class... A> int FUN_10203fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10204280(undefined4 *param_1);
template<class... A> int FUN_10204280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10204290(undefined4 *param_1);
template<class... A> int FUN_10204290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102042c0(undefined4 *param_1);
template<class... A> int FUN_102042c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102047a0(undefined4 *param_1);
template<class... A> int FUN_102047a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10204f80(undefined4 *param_1);
template<class... A> int FUN_10204f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10204f90(int *param_1);
template<class... A> int FUN_10204f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10204fa0(int *param_1);
template<class... A> int FUN_10204fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10204fb0(undefined4 *param_1);
template<class... A> int FUN_10204fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10204fc0(int *param_1);
template<class... A> int FUN_10204fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10204fd0(int *param_1);
template<class... A> int FUN_10204fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10204fe0(undefined4 *param_1);
template<class... A> int FUN_10204fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10204ff0(int *param_1);
template<class... A> int FUN_10204ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205000(undefined4 *param_1);
template<class... A> int FUN_10205000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205010(undefined4 *param_1);
template<class... A> int FUN_10205010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205020(int *param_1);
template<class... A> int FUN_10205020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205030(int *param_1);
template<class... A> int FUN_10205030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205040(undefined4 *param_1);
template<class... A> int FUN_10205040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205050(int *param_1);
template<class... A> int FUN_10205050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205060(int *param_1);
template<class... A> int FUN_10205060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205070(undefined4 *param_1);
template<class... A> int FUN_10205070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205080(int *param_1);
template<class... A> int FUN_10205080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205090(undefined4 *param_1);
template<class... A> int FUN_10205090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102050a0(int *param_1);
template<class... A> int FUN_102050a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102050b0(int *param_1);
template<class... A> int FUN_102050b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102050c0(int *param_1);
template<class... A> int FUN_102050c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102050d0(undefined4 *param_1);
template<class... A> int FUN_102050d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102050e0(int *param_1);
template<class... A> int FUN_102050e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102050f0(undefined4 *param_1);
template<class... A> int FUN_102050f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205100(int *param_1);
template<class... A> int FUN_10205100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205110(int *param_1);
template<class... A> int FUN_10205110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205120(int *param_1);
template<class... A> int FUN_10205120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205130(int *param_1);
template<class... A> int FUN_10205130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205140(undefined4 *param_1);
template<class... A> int FUN_10205140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205150(int *param_1);
template<class... A> int FUN_10205150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205160(undefined4 *param_1);
template<class... A> int FUN_10205160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205170(int *param_1);
template<class... A> int FUN_10205170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10205180(int *param_1);
template<class... A> int FUN_10205180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10205190(int param_1);
template<class... A> int FUN_10205190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102051a0(int param_1);
template<class... A> int FUN_102051a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102051b0(undefined4 *param_1);
template<class... A> int FUN_102051b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102051c0(undefined4 *param_1);
template<class... A> int FUN_102051c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102051d0(undefined4 *param_1);
template<class... A> int FUN_102051d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102051e0(undefined4 *param_1);
template<class... A> int FUN_102051e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102051f0(undefined4 *param_1);
template<class... A> int FUN_102051f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205200(undefined4 *param_1);
template<class... A> int FUN_10205200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205210(undefined4 *param_1);
template<class... A> int FUN_10205210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205220(undefined4 *param_1);
template<class... A> int FUN_10205220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205230(undefined4 *param_1);
template<class... A> int FUN_10205230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205240(undefined4 *param_1);
template<class... A> int FUN_10205240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205250(undefined4 *param_1);
template<class... A> int FUN_10205250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205260(undefined4 *param_1);
template<class... A> int FUN_10205260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205270(undefined4 *param_1);
template<class... A> int FUN_10205270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205280(undefined4 *param_1);
template<class... A> int FUN_10205280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205290(undefined4 *param_1);
template<class... A> int FUN_10205290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102052a0(undefined4 *param_1);
template<class... A> int FUN_102052a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102052b0(undefined4 *param_1);
template<class... A> int FUN_102052b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102052c0(undefined4 *param_1);
template<class... A> int FUN_102052c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102052d0(undefined4 *param_1);
template<class... A> int FUN_102052d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102052e0(undefined4 *param_1);
template<class... A> int FUN_102052e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102052f0(undefined4 *param_1);
template<class... A> int FUN_102052f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205300(undefined4 *param_1);
template<class... A> int FUN_10205300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10205310(undefined4 *param_1);
template<class... A> int FUN_10205310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10205320(int *param_1);
template<class... A> int FUN_10205320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10205330(int *param_1);
template<class... A> int FUN_10205330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10205340(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10205340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10206a00(int param_1);
template<class... A> int FUN_10206a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10206a10(char *param_1,char *param_2);
template<class... A> int FUN_10206a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10206a70(undefined4 param_1);
template<class... A> int FUN_10206a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10206a90(undefined4 param_1);
template<class... A> int FUN_10206a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10206ab0(undefined4 param_1);
template<class... A> int FUN_10206ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10206ad0(undefined4 param_1);
template<class... A> int FUN_10206ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10206af0(undefined4 param_1);
template<class... A> int FUN_10206af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10206b10(undefined4 param_1);
template<class... A> int FUN_10206b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10206b30(undefined4 param_1);
template<class... A> int FUN_10206b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10206b50(undefined4 param_1);
template<class... A> int FUN_10206b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206b70(int param_1);
template<class... A> int FUN_10206b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10206b80(int param_1);
template<class... A> int FUN_10206b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10206b90(undefined4 *param_1);
template<class... A> int FUN_10206b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10206c50(int param_1);
template<class... A> int FUN_10206c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __stdcall FUN_10206d60(undefined4 *param_1, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10206d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206da0(undefined4 param_1);
template<class... A> int FUN_10206da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206db0(undefined4 param_1);
template<class... A> int FUN_10206db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206dc0(undefined4 param_1);
template<class... A> int FUN_10206dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206dd0(undefined4 param_1);
template<class... A> int FUN_10206dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206de0(undefined4 param_1);
template<class... A> int FUN_10206de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206df0(undefined4 param_1);
template<class... A> int FUN_10206df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206e00(undefined4 param_1);
template<class... A> int FUN_10206e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206e10(undefined4 param_1);
template<class... A> int FUN_10206e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206e20(undefined4 param_1);
template<class... A> int FUN_10206e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206e30(undefined4 param_1);
template<class... A> int FUN_10206e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206e40(undefined4 param_1);
template<class... A> int FUN_10206e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10206e50(undefined4 param_1);
template<class... A> int FUN_10206e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10207160(int param_1);
template<class... A> int FUN_10207160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10207170(undefined4 *param_1);
template<class... A> int FUN_10207170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102072b0(void);
template<class... A> int FUN_102072b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10207a70(int param_1);
template<class... A> int FUN_10207a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10207a80(int param_1);
template<class... A> int FUN_10207a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10207a90(uint param_1);
template<class... A> int FUN_10207a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10207c80(int param_1);
template<class... A> int FUN_10207c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10207cc0(int param_1);
template<class... A> int FUN_10207cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10208910(uint *param_1);
template<class... A> int FUN_10208910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10208cc0(int *param_1);
template<class... A> int FUN_10208cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10209fc0(int param_1);
template<class... A> int FUN_10209fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10209fd0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10209fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1020a020(int param_1,int param_2);
template<class... A> int FUN_1020a020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1020a0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_1020a0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1020a0f0(int param_1);
template<class... A> int FUN_1020a0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a100(undefined4 *param_1);
template<class... A> int FUN_1020a100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a120(undefined4 *param_1);
template<class... A> int FUN_1020a120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a140(undefined4 *param_1);
template<class... A> int FUN_1020a140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a160(undefined4 *param_1);
template<class... A> int FUN_1020a160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a180(undefined4 *param_1);
template<class... A> int FUN_1020a180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a1a0(undefined4 *param_1);
template<class... A> int FUN_1020a1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a1c0(undefined4 *param_1);
template<class... A> int FUN_1020a1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a1d0(undefined4 *param_1);
template<class... A> int FUN_1020a1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a1e0(undefined4 *param_1);
template<class... A> int FUN_1020a1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a1f0(undefined4 *param_1);
template<class... A> int FUN_1020a1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a200(undefined4 *param_1);
template<class... A> int FUN_1020a200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a210(undefined4 *param_1);
template<class... A> int FUN_1020a210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a220(undefined4 *param_1);
template<class... A> int FUN_1020a220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a230(undefined4 *param_1);
template<class... A> int FUN_1020a230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a240(undefined4 *param_1);
template<class... A> int FUN_1020a240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a250(undefined4 *param_1);
template<class... A> int FUN_1020a250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020a370(int param_1);
template<class... A> int FUN_1020a370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1020a610(int param_1);
template<class... A> int FUN_1020a610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020d0f0(int param_1);
template<class... A> int FUN_1020d0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1020d230(int param_1);
template<class... A> int FUN_1020d230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020d450(int param_1);
template<class... A> int FUN_1020d450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1020db60(int param_1);
template<class... A> int FUN_1020db60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020dc20(int param_1);
template<class... A> int FUN_1020dc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1020dc30(int param_1);
template<class... A> int FUN_1020dc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1020f9a0(int param_1);
template<class... A> int FUN_1020f9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1020f9b0(int param_1);
template<class... A> int FUN_1020f9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1020fe20(int param_1);
template<class... A> int FUN_1020fe20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1020fe30(int param_1);
template<class... A> int FUN_1020fe30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10210400(int param_1);
template<class... A> int FUN_10210400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10210b10(int param_1);
template<class... A> int FUN_10210b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10217310(int param_1);
template<class... A> int FUN_10217310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10217620(int param_1);
template<class... A> int FUN_10217620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10217630(int param_1);
template<class... A> int FUN_10217630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10217c80(int *param_1);
template<class... A> int FUN_10217c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10217e10(void);
template<class... A> int FUN_10217e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10219070(int param_1);
template<class... A> int FUN_10219070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10219390(void);
template<class... A> int FUN_10219390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102193a0(void);
template<class... A> int FUN_102193a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102193b0(void);
template<class... A> int FUN_102193b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102193c0(void);
template<class... A> int FUN_102193c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102193d0(void);
template<class... A> int FUN_102193d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102193e0(void);
template<class... A> int FUN_102193e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102193f0(void);
template<class... A> int FUN_102193f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10219400(void);
template<class... A> int FUN_10219400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10219410(void);
template<class... A> int FUN_10219410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10219420(void);
template<class... A> int FUN_10219420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10219430(void);
template<class... A> int FUN_10219430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10219440(void);
template<class... A> int FUN_10219440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10219a50(char *param_1);
template<class... A> int FUN_10219a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10219a80(int param_1);
template<class... A> int FUN_10219a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10219aa0(int param_1);
template<class... A> int FUN_10219aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10219bf0(int param_1);
template<class... A> int FUN_10219bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10219c10(int param_1);
template<class... A> int FUN_10219c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ byte __fastcall FUN_10219cb0(int param_1);
template<class... A> int FUN_10219cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10219fb0(int param_1);
template<class... A> int FUN_10219fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10219ff0(void);
template<class... A> int FUN_10219ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021a9a0(int param_1);
template<class... A> int FUN_1021a9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021a9c0(int param_1);
template<class... A> int FUN_1021a9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021add0(int param_1);
template<class... A> int FUN_1021add0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_1021b190(int param_1);
template<class... A> int FUN_1021b190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1021b260(int *param_1);
template<class... A> int FUN_1021b260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1021b270(undefined4 param_1);
template<class... A> int __stdcall FUN_1021b270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1021b400(void);
template<class... A> int FUN_1021b400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1021b410(void);
template<class... A> int FUN_1021b410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1021b420(void);
template<class... A> int FUN_1021b420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1021b430(void);
template<class... A> int FUN_1021b430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021b440(int param_1);
template<class... A> int FUN_1021b440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021b450(undefined4 param_1);
template<class... A> int FUN_1021b450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1021b460(int param_1);
template<class... A> int FUN_1021b460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1021b480(int param_1);
template<class... A> int FUN_1021b480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1021b490(int param_1);
template<class... A> int FUN_1021b490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1021e820(int param_1);
template<class... A> int FUN_1021e820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1021e830(int param_1);
template<class... A> int FUN_1021e830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1021e840(int param_1);
template<class... A> int FUN_1021e840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1021e850(undefined4 param_1);
template<class... A> int FUN_1021e850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1021ef10(int param_1);
template<class... A> int FUN_1021ef10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021ef20(undefined4 *param_1);
template<class... A> int FUN_1021ef20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021ef30(undefined4 *param_1);
template<class... A> int FUN_1021ef30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021ef40(undefined4 *param_1);
template<class... A> int FUN_1021ef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021ef50(undefined4 *param_1);
template<class... A> int FUN_1021ef50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021ef60(undefined4 *param_1);
template<class... A> int FUN_1021ef60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021ef70(undefined4 *param_1);
template<class... A> int FUN_1021ef70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021ef80(undefined4 *param_1);
template<class... A> int FUN_1021ef80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021ef90(undefined4 *param_1);
template<class... A> int FUN_1021ef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021efa0(undefined4 *param_1);
template<class... A> int FUN_1021efa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021efb0(undefined4 *param_1);
template<class... A> int FUN_1021efb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021efc0(undefined4 *param_1);
template<class... A> int FUN_1021efc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021efd0(undefined4 *param_1);
template<class... A> int FUN_1021efd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021efe0(undefined4 *param_1);
template<class... A> int FUN_1021efe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021eff0(undefined4 *param_1);
template<class... A> int FUN_1021eff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1021f000(undefined4 *param_1);
template<class... A> int FUN_1021f000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1021f690(int param_1);
template<class... A> int FUN_1021f690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fb20(undefined4 *param_1);
template<class... A> int FUN_1021fb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fb50(undefined4 *param_1);
template<class... A> int FUN_1021fb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fb80(undefined4 *param_1);
template<class... A> int FUN_1021fb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fbb0(undefined4 *param_1);
template<class... A> int FUN_1021fbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fbe0(undefined4 *param_1);
template<class... A> int FUN_1021fbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fc10(undefined4 *param_1);
template<class... A> int FUN_1021fc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fc40(undefined4 *param_1);
template<class... A> int FUN_1021fc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fc70(undefined4 *param_1);
template<class... A> int FUN_1021fc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fca0(undefined4 *param_1);
template<class... A> int FUN_1021fca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fcd0(undefined4 *param_1);
template<class... A> int FUN_1021fcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fd00(undefined4 *param_1);
template<class... A> int FUN_1021fd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fd30(undefined4 *param_1);
template<class... A> int FUN_1021fd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fd60(undefined4 *param_1);
template<class... A> int FUN_1021fd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fd90(undefined4 *param_1);
template<class... A> int FUN_1021fd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fdc0(undefined4 *param_1);
template<class... A> int FUN_1021fdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fdf0(undefined4 *param_1);
template<class... A> int FUN_1021fdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fe20(undefined4 *param_1);
template<class... A> int FUN_1021fe20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fe50(undefined4 *param_1);
template<class... A> int FUN_1021fe50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fe80(undefined4 *param_1);
template<class... A> int FUN_1021fe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021feb0(undefined4 *param_1);
template<class... A> int FUN_1021feb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021fee0(undefined4 *param_1);
template<class... A> int FUN_1021fee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021ff10(undefined4 *param_1);
template<class... A> int FUN_1021ff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021ff40(undefined4 *param_1);
template<class... A> int FUN_1021ff40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021ff70(undefined4 *param_1);
template<class... A> int FUN_1021ff70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021ffa0(undefined4 *param_1);
template<class... A> int FUN_1021ffa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1021ffd0(undefined4 *param_1);
template<class... A> int FUN_1021ffd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10220000(undefined4 *param_1);
template<class... A> int FUN_10220000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10220030(undefined4 *param_1);
template<class... A> int FUN_10220030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10220060(int *param_1);
template<class... A> int FUN_10220060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10220080(int *param_1);
template<class... A> int FUN_10220080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102204d0(int param_1);
template<class... A> int FUN_102204d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10220610(int param_1);
template<class... A> int FUN_10220610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10220620(int param_1);
template<class... A> int FUN_10220620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10220660(undefined4 param_1);
template<class... A> int FUN_10220660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10220790(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10220790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10220d30(undefined4 param_1);
template<class... A> int __stdcall FUN_10220d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10221390(int *param_1);
template<class... A> int FUN_10221390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102213a0(int *param_1);
template<class... A> int FUN_102213a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102213b0(int param_1);
template<class... A> int FUN_102213b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102216d0(int param_1);
template<class... A> int FUN_102216d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102217d0(int param_1);
template<class... A> int FUN_102217d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102217e0(undefined4 param_1);
template<class... A> int FUN_102217e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102217f0(int param_1);
template<class... A> int FUN_102217f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10221b50(int param_1);
template<class... A> int FUN_10221b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10221b80(void);
template<class... A> int FUN_10221b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10221b90(undefined4 *param_1);
template<class... A> int FUN_10221b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10221e40(undefined4 *param_1);
template<class... A> int FUN_10221e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10221e80(undefined4 *param_1);
template<class... A> int FUN_10221e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10221f30(undefined4 *param_1);
template<class... A> int FUN_10221f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10222430(void);
template<class... A> int FUN_10222430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10222750(void);
template<class... A> int FUN_10222750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10222760(undefined4 *param_1);
template<class... A> int FUN_10222760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10222780(undefined4 *param_1);
template<class... A> int FUN_10222780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102232a0(undefined4 *param_1);
template<class... A> int FUN_102232a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10223990(undefined4 *param_1);
template<class... A> int FUN_10223990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10223c80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10223c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10224130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10224130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10224150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10224150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10224170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10224170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10224190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10224190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102241b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102241b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102241d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102241d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102241f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_102241f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10224210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10224210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10224230(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10224230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102243b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102243b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102243c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102243c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102243d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102243d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102243e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102243e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102243f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_102243f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10224400(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10224400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10224b60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10224b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10224bb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10224bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10224bd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10224bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_102259f0(int param_1);
template<class... A> int FUN_102259f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10225a00(byte *param_1);
template<class... A> int __stdcall FUN_10225a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10225a50(int *param_1,int *param_2);
template<class... A> int FUN_10225a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225a70(void);
template<class... A> int FUN_10225a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225a80(void);
template<class... A> int FUN_10225a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225a90(void);
template<class... A> int FUN_10225a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225aa0(void);
template<class... A> int FUN_10225aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225ab0(int param_1,undefined4 *param_2);
template<class... A> int FUN_10225ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225ae0(int param_1,undefined4 *param_2);
template<class... A> int FUN_10225ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225c40(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_10225c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225c80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10225c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225c90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10225c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225ca0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10225ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225cb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10225cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225cc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10225cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225cd0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10225cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225ce0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10225ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225cf0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10225cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225d00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10225d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225d10(void);
template<class... A> int FUN_10225d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225d20(void);
template<class... A> int FUN_10225d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225d30(void);
template<class... A> int FUN_10225d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225d40(void);
template<class... A> int FUN_10225d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225d50(void);
template<class... A> int FUN_10225d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10225d60(void);
template<class... A> int FUN_10225d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10226070(uint param_1,byte *param_2);
template<class... A> int FUN_10226070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102261e0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_102261e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10226220(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10226220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10226240(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10226240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10226260(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10226260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10226280(undefined4 param_1,int param_2);
template<class... A> int FUN_10226280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10226350(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10226350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10226370(undefined4 *param_1);
template<class... A> int FUN_10226370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10226380(undefined4 *param_1);
template<class... A> int FUN_10226380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10226390(undefined4 *param_1);
template<class... A> int FUN_10226390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102263a0(undefined4 *param_1);
template<class... A> int FUN_102263a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10226850(byte *param_1);
template<class... A> int FUN_10226850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102268a0(undefined4 param_1);
template<class... A> int FUN_102268a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102268b0(undefined4 param_1);
template<class... A> int FUN_102268b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102268c0(undefined4 param_1);
template<class... A> int FUN_102268c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102268d0(void);
template<class... A> int FUN_102268d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10226c30(void);
template<class... A> int FUN_10226c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 FUN_10226c40(void);
template<class... A> int FUN_10226c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10226ce0(int param_1);
template<class... A> int FUN_10226ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227200(undefined4 *param_1);
template<class... A> int FUN_10227200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227210(undefined4 param_1);
template<class... A> int FUN_10227210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227220(undefined4 param_1);
template<class... A> int FUN_10227220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227230(undefined4 param_1);
template<class... A> int FUN_10227230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227240(undefined4 param_1);
template<class... A> int FUN_10227240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227250(undefined4 param_1);
template<class... A> int FUN_10227250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227260(undefined4 param_1);
template<class... A> int FUN_10227260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227270(undefined4 param_1);
template<class... A> int FUN_10227270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227280(undefined4 param_1);
template<class... A> int FUN_10227280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227290(undefined4 param_1);
template<class... A> int FUN_10227290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102272a0(undefined4 param_1);
template<class... A> int FUN_102272a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227340(undefined4 param_1);
template<class... A> int FUN_10227340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227350(undefined4 param_1);
template<class... A> int FUN_10227350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227360(undefined4 param_1);
template<class... A> int FUN_10227360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227370(undefined4 param_1);
template<class... A> int FUN_10227370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227380(undefined4 param_1);
template<class... A> int FUN_10227380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227390(undefined4 param_1);
template<class... A> int FUN_10227390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102273a0(undefined4 param_1);
template<class... A> int FUN_102273a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102273b0(undefined4 param_1);
template<class... A> int FUN_102273b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102273c0(undefined4 param_1);
template<class... A> int FUN_102273c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102273d0(undefined4 param_1);
template<class... A> int FUN_102273d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102273e0(undefined4 param_1);
template<class... A> int FUN_102273e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102273f0(undefined4 param_1);
template<class... A> int FUN_102273f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227400(undefined4 param_1);
template<class... A> int FUN_10227400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227410(undefined4 param_1);
template<class... A> int FUN_10227410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227420(undefined4 param_1);
template<class... A> int FUN_10227420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10227460(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10227460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10227490(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10227490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102274b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_102274b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102274d0(undefined4 param_1,int param_2);
template<class... A> int FUN_102274d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10227580(void);
template<class... A> int FUN_10227580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227890(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10227890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102278b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102278b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102278d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102278d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102278f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102278f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227910(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10227910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227bb0(undefined4 param_1);
template<class... A> int FUN_10227bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227bc0(undefined4 param_1);
template<class... A> int FUN_10227bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227bd0(undefined4 param_1);
template<class... A> int FUN_10227bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227be0(undefined4 param_1);
template<class... A> int FUN_10227be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227bf0(undefined4 param_1);
template<class... A> int FUN_10227bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c00(undefined4 param_1);
template<class... A> int FUN_10227c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c10(undefined4 param_1);
template<class... A> int FUN_10227c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c20(undefined4 param_1);
template<class... A> int FUN_10227c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c30(undefined4 param_1);
template<class... A> int FUN_10227c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c40(undefined4 param_1);
template<class... A> int FUN_10227c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c50(undefined4 param_1);
template<class... A> int FUN_10227c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c60(undefined4 param_1);
template<class... A> int FUN_10227c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c70(undefined4 param_1);
template<class... A> int FUN_10227c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c80(undefined4 param_1);
template<class... A> int FUN_10227c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227c90(undefined4 param_1);
template<class... A> int FUN_10227c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227d30(undefined4 param_1);
template<class... A> int FUN_10227d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227d40(undefined4 param_1);
template<class... A> int FUN_10227d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227d50(undefined4 param_1);
template<class... A> int FUN_10227d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227d60(undefined4 param_1);
template<class... A> int FUN_10227d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227d70(undefined4 param_1);
template<class... A> int FUN_10227d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227d80(undefined4 param_1);
template<class... A> int FUN_10227d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227d90(undefined4 param_1);
template<class... A> int FUN_10227d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227da0(undefined4 param_1);
template<class... A> int FUN_10227da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227db0(undefined4 param_1);
template<class... A> int FUN_10227db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227dc0(undefined4 param_1);
template<class... A> int FUN_10227dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227dd0(undefined4 param_1);
template<class... A> int FUN_10227dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227de0(undefined4 param_1);
template<class... A> int FUN_10227de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227df0(undefined4 param_1);
template<class... A> int FUN_10227df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227e00(undefined4 param_1);
template<class... A> int FUN_10227e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227e10(undefined4 param_1);
template<class... A> int FUN_10227e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227e20(undefined4 param_1);
template<class... A> int FUN_10227e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227e30(undefined4 param_1);
template<class... A> int FUN_10227e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227e40(undefined4 param_1);
template<class... A> int FUN_10227e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227e50(undefined4 param_1);
template<class... A> int FUN_10227e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227ef0(undefined4 param_1);
template<class... A> int FUN_10227ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227f00(undefined4 param_1);
template<class... A> int FUN_10227f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227f10(undefined4 param_1);
template<class... A> int FUN_10227f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227f20(undefined4 param_1);
template<class... A> int FUN_10227f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227f30(undefined4 param_1);
template<class... A> int FUN_10227f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227f40(undefined4 param_1);
template<class... A> int FUN_10227f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10227f50(undefined4 param_1);
template<class... A> int FUN_10227f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10227f60(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10227f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10227f70(void);
template<class... A> int FUN_10227f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10227f80(void);
template<class... A> int FUN_10227f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10227f90(void);
template<class... A> int FUN_10227f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10227fa0(void);
template<class... A> int FUN_10227fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10228260(int param_1,undefined4 *param_2);
template<class... A> int FUN_10228260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10228290(int param_1,undefined4 *param_2);
template<class... A> int FUN_10228290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102283f0(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_102283f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10228430(undefined4 param_1);
template<class... A> int FUN_10228430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10228440(undefined4 param_1);
template<class... A> int FUN_10228440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10228450(undefined4 param_1);
template<class... A> int FUN_10228450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10228460(undefined4 param_1);
template<class... A> int FUN_10228460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10228500(undefined4 param_1);
template<class... A> int FUN_10228500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10228510(undefined4 param_1);
template<class... A> int FUN_10228510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10228520(undefined4 param_1);
template<class... A> int FUN_10228520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10228530(undefined4 param_1);
template<class... A> int FUN_10228530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10228540(undefined4 param_1);
template<class... A> int FUN_10228540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10228550(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10228550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10228570(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10228570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10228590(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10228590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102285c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102285c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102285f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_102285f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10228d30(undefined4 *param_1);
template<class... A> int FUN_10228d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102290e0(undefined4 *param_1);
template<class... A> int FUN_102290e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229100(undefined4 *param_1);
template<class... A> int FUN_10229100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102291a0(undefined4 *param_1);
template<class... A> int FUN_102291a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102292c0(undefined4 *param_1);
template<class... A> int FUN_102292c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229320(undefined4 *param_1);
template<class... A> int FUN_10229320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102293b0(undefined4 *param_1);
template<class... A> int FUN_102293b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229450(undefined4 *param_1);
template<class... A> int FUN_10229450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102294f0(undefined4 param_1);
template<class... A> int FUN_102294f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229500(undefined4 param_1);
template<class... A> int FUN_10229500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229510(undefined4 param_1);
template<class... A> int FUN_10229510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229520(undefined4 param_1);
template<class... A> int FUN_10229520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229530(undefined4 param_1);
template<class... A> int FUN_10229530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229540(undefined4 param_1);
template<class... A> int FUN_10229540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229550(undefined4 param_1);
template<class... A> int FUN_10229550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229560(undefined4 param_1);
template<class... A> int FUN_10229560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10229570(int param_1);
template<class... A> int FUN_10229570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10229580(int param_1);
template<class... A> int FUN_10229580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10229590(int param_1);
template<class... A> int FUN_10229590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102295a0(int param_1);
template<class... A> int FUN_102295a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102295b0(int param_1);
template<class... A> int FUN_102295b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102295c0(int param_1);
template<class... A> int FUN_102295c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102295d0(int param_1);
template<class... A> int FUN_102295d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102295e0(int param_1);
template<class... A> int FUN_102295e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102295f0(int param_1);
template<class... A> int FUN_102295f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229a50(undefined4 *param_1);
template<class... A> int FUN_10229a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229a70(undefined4 *param_1);
template<class... A> int FUN_10229a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229a90(undefined4 *param_1);
template<class... A> int FUN_10229a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229ab0(undefined4 *param_1);
template<class... A> int FUN_10229ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229ac0(undefined4 *param_1);
template<class... A> int FUN_10229ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229ad0(undefined4 *param_1);
template<class... A> int FUN_10229ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229b70(undefined4 *param_1);
template<class... A> int FUN_10229b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229b90(undefined4 *param_1);
template<class... A> int FUN_10229b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229bb0(undefined4 *param_1);
template<class... A> int FUN_10229bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10229bd0(undefined4 *param_1);
template<class... A> int FUN_10229bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229bf0(undefined4 param_1);
template<class... A> int FUN_10229bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229c00(undefined4 param_1);
template<class... A> int FUN_10229c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229c10(undefined4 param_1);
template<class... A> int FUN_10229c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10229c20(undefined4 param_1);
template<class... A> int FUN_10229c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022a180(int param_1);
template<class... A> int FUN_1022a180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022a640(undefined4 *param_1);
template<class... A> int FUN_1022a640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022ab10(undefined4 *param_1);
template<class... A> int FUN_1022ab10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022ad40(undefined4 *param_1);
template<class... A> int FUN_1022ad40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022ba80(undefined4 *param_1);
template<class... A> int FUN_1022ba80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022bc20(undefined4 *param_1);
template<class... A> int FUN_1022bc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022bc30(undefined4 *param_1);
template<class... A> int FUN_1022bc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022bc60(undefined4 *param_1);
template<class... A> int FUN_1022bc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022bd70(undefined4 *param_1);
template<class... A> int FUN_1022bd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022c090(undefined4 *param_1);
template<class... A> int FUN_1022c090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022c1b0(undefined4 *param_1);
template<class... A> int FUN_1022c1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022c350(undefined4 *param_1);
template<class... A> int FUN_1022c350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022cb50(undefined4 *param_1);
template<class... A> int FUN_1022cb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022cba0(undefined4 *param_1);
template<class... A> int FUN_1022cba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022cbf0(undefined4 *param_1);
template<class... A> int FUN_1022cbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022cc40(undefined4 *param_1);
template<class... A> int FUN_1022cc40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022d600(int param_1);
template<class... A> int FUN_1022d600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022d630(int param_1);
template<class... A> int FUN_1022d630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022d690(int param_1);
template<class... A> int FUN_1022d690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1022dad0(void);
template<class... A> int FUN_1022dad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1022dae0(void);
template<class... A> int FUN_1022dae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1022daf0(void);
template<class... A> int FUN_1022daf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022dd40(int param_1);
template<class... A> int FUN_1022dd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022ddf0(int param_1);
template<class... A> int FUN_1022ddf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022de00(int param_1);
template<class... A> int FUN_1022de00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022de30(int *param_1);
template<class... A> int FUN_1022de30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022de40(undefined4 *param_1);
template<class... A> int FUN_1022de40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022de60(int *param_1);
template<class... A> int FUN_1022de60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022de70(int *param_1);
template<class... A> int FUN_1022de70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022dee0(int *param_1);
template<class... A> int FUN_1022dee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022def0(int *param_1);
template<class... A> int FUN_1022def0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022df00(int *param_1);
template<class... A> int FUN_1022df00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022e0c0(int *param_1);
template<class... A> int FUN_1022e0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022e0d0(int *param_1);
template<class... A> int FUN_1022e0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022e1d0(int *param_1);
template<class... A> int FUN_1022e1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022e1e0(undefined4 *param_1);
template<class... A> int FUN_1022e1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022e4f0(undefined4 *param_1);
template<class... A> int FUN_1022e4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022e950(undefined4 *param_1);
template<class... A> int FUN_1022e950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022e9f0(undefined4 *param_1);
template<class... A> int FUN_1022e9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022ea10(undefined4 *param_1);
template<class... A> int FUN_1022ea10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022ea20(undefined4 *param_1);
template<class... A> int FUN_1022ea20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022ea40(undefined4 *param_1);
template<class... A> int FUN_1022ea40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022ee90(undefined4 *param_1);
template<class... A> int FUN_1022ee90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022eeb0(undefined4 *param_1);
template<class... A> int FUN_1022eeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022ef80(int *param_1);
template<class... A> int FUN_1022ef80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022ef90(int *param_1);
template<class... A> int FUN_1022ef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022efa0(int *param_1);
template<class... A> int FUN_1022efa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022f020(int *param_1);
template<class... A> int FUN_1022f020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022f0a0(int *param_1);
template<class... A> int FUN_1022f0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022f170(int *param_1);
template<class... A> int FUN_1022f170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022f1b0(int *param_1);
template<class... A> int FUN_1022f1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022f230(int *param_1);
template<class... A> int FUN_1022f230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022f250(int param_1);
template<class... A> int FUN_1022f250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022f270(int param_1);
template<class... A> int FUN_1022f270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022f290(int param_1);
template<class... A> int FUN_1022f290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f710(undefined4 *param_1);
template<class... A> int FUN_1022f710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f720(undefined4 *param_1);
template<class... A> int FUN_1022f720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f730(undefined4 *param_1);
template<class... A> int FUN_1022f730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f740(undefined4 *param_1);
template<class... A> int FUN_1022f740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f750(undefined4 *param_1);
template<class... A> int FUN_1022f750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f760(undefined4 *param_1);
template<class... A> int FUN_1022f760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f770(undefined4 *param_1);
template<class... A> int FUN_1022f770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f780(undefined4 *param_1);
template<class... A> int FUN_1022f780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f790(undefined4 *param_1);
template<class... A> int FUN_1022f790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f7a0(undefined4 *param_1);
template<class... A> int FUN_1022f7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f7b0(undefined4 *param_1);
template<class... A> int FUN_1022f7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f7c0(undefined4 *param_1);
template<class... A> int FUN_1022f7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f7d0(undefined4 *param_1);
template<class... A> int FUN_1022f7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f7e0(int *param_1);
template<class... A> int FUN_1022f7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f7f0(undefined4 *param_1);
template<class... A> int FUN_1022f7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f800(int *param_1);
template<class... A> int FUN_1022f800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f810(int *param_1);
template<class... A> int FUN_1022f810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f820(int *param_1);
template<class... A> int FUN_1022f820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f830(int *param_1);
template<class... A> int FUN_1022f830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f840(int *param_1);
template<class... A> int FUN_1022f840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f850(int *param_1);
template<class... A> int FUN_1022f850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f860(int *param_1);
template<class... A> int FUN_1022f860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f870(undefined4 *param_1);
template<class... A> int FUN_1022f870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f880(undefined4 *param_1);
template<class... A> int FUN_1022f880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f890(int *param_1);
template<class... A> int FUN_1022f890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f8a0(undefined4 *param_1);
template<class... A> int FUN_1022f8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f8b0(int *param_1);
template<class... A> int FUN_1022f8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f8c0(int *param_1);
template<class... A> int FUN_1022f8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f8d0(int param_1);
template<class... A> int FUN_1022f8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1022f8e0(int param_1);
template<class... A> int FUN_1022f8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f8f0(undefined4 *param_1);
template<class... A> int FUN_1022f8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f900(undefined4 *param_1);
template<class... A> int FUN_1022f900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f910(undefined4 *param_1);
template<class... A> int FUN_1022f910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f920(undefined4 *param_1);
template<class... A> int FUN_1022f920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f930(undefined4 *param_1);
template<class... A> int FUN_1022f930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f940(undefined4 *param_1);
template<class... A> int FUN_1022f940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f950(undefined4 *param_1);
template<class... A> int FUN_1022f950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f960(undefined4 *param_1);
template<class... A> int FUN_1022f960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f970(undefined4 *param_1);
template<class... A> int FUN_1022f970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f980(undefined4 *param_1);
template<class... A> int FUN_1022f980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f990(undefined4 *param_1);
template<class... A> int FUN_1022f990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f9a0(undefined4 *param_1);
template<class... A> int FUN_1022f9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f9b0(undefined4 *param_1);
template<class... A> int FUN_1022f9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f9c0(undefined4 *param_1);
template<class... A> int FUN_1022f9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f9d0(undefined4 *param_1);
template<class... A> int FUN_1022f9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f9e0(undefined4 *param_1);
template<class... A> int FUN_1022f9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1022f9f0(undefined4 *param_1);
template<class... A> int FUN_1022f9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa00(int *param_1);
template<class... A> int FUN_1022fa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa10(int *param_1);
template<class... A> int FUN_1022fa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa20(int *param_1);
template<class... A> int FUN_1022fa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa30(int *param_1);
template<class... A> int FUN_1022fa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa40(int *param_1);
template<class... A> int FUN_1022fa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa50(int *param_1);
template<class... A> int FUN_1022fa50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa60(int *param_1);
template<class... A> int FUN_1022fa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa70(int *param_1);
template<class... A> int FUN_1022fa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa80(int *param_1);
template<class... A> int FUN_1022fa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022fa90(int *param_1);
template<class... A> int FUN_1022fa90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1022faa0(int *param_1);
template<class... A> int FUN_1022faa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022fab0(undefined4 *param_1);
template<class... A> int FUN_1022fab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022fac0(undefined4 *param_1);
template<class... A> int FUN_1022fac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022fad0(undefined4 *param_1);
template<class... A> int FUN_1022fad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022fae0(undefined4 *param_1);
template<class... A> int FUN_1022fae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022faf0(undefined4 *param_1);
template<class... A> int FUN_1022faf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1022fb00(undefined4 *param_1);
template<class... A> int FUN_1022fb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_1022fb10(int *param_1);
template<class... A> int FUN_1022fb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_1022fb20(int *param_1);
template<class... A> int FUN_1022fb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_1022fb30(int *param_1);
template<class... A> int FUN_1022fb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_1022fc70(byte *param_1);
template<class... A> int __stdcall FUN_1022fc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fcc0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1022fcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fd10(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1022fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fd30(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1022fd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fd50(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1022fd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fda0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_1022fda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1022fdd0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1022fdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_1022fe00(int *param_1,int *param_2);
template<class... A> int FUN_1022fe00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231850(undefined4 *param_1);
template<class... A> int FUN_10231850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231870(undefined4 *param_1);
template<class... A> int FUN_10231870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231890(undefined4 *param_1);
template<class... A> int FUN_10231890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231d90(int param_1);
template<class... A> int FUN_10231d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231db0(int param_1);
template<class... A> int FUN_10231db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10231dd0(int param_1);
template<class... A> int FUN_10231dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10231df0(float *param_1);
template<class... A> int FUN_10231df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10231e50(float *param_1);
template<class... A> int FUN_10231e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10231eb0(float *param_1);
template<class... A> int FUN_10231eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10232940(byte *param_1);
template<class... A> int FUN_10232940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10232990(int param_1);
template<class... A> int FUN_10232990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102329a0(int param_1);
template<class... A> int FUN_102329a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102329b0(int param_1);
template<class... A> int FUN_102329b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102329c0(int param_1);
template<class... A> int FUN_102329c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102329d0(int param_1);
template<class... A> int FUN_102329d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102329e0(int param_1);
template<class... A> int FUN_102329e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102329f0(int param_1);
template<class... A> int FUN_102329f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10232a00(int param_1);
template<class... A> int FUN_10232a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10232a10(int param_1);
template<class... A> int FUN_10232a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10232a20(undefined4 param_1);
template<class... A> int FUN_10232a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233030(undefined4 param_1);
template<class... A> int FUN_10233030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233040(undefined4 param_1);
template<class... A> int FUN_10233040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233050(undefined4 param_1);
template<class... A> int FUN_10233050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233060(undefined4 param_1);
template<class... A> int FUN_10233060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233070(undefined4 param_1);
template<class... A> int FUN_10233070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233080(undefined4 param_1);
template<class... A> int FUN_10233080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233090(undefined4 param_1);
template<class... A> int FUN_10233090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102330a0(undefined4 param_1);
template<class... A> int FUN_102330a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102330b0(undefined4 param_1);
template<class... A> int FUN_102330b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102330c0(undefined4 param_1);
template<class... A> int FUN_102330c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102330d0(undefined4 param_1);
template<class... A> int FUN_102330d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102330e0(undefined4 param_1);
template<class... A> int FUN_102330e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102330f0(undefined4 param_1);
template<class... A> int FUN_102330f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233100(undefined4 param_1);
template<class... A> int FUN_10233100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233110(undefined4 param_1);
template<class... A> int FUN_10233110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233120(undefined4 param_1);
template<class... A> int FUN_10233120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233130(undefined4 param_1);
template<class... A> int FUN_10233130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233140(undefined4 param_1);
template<class... A> int FUN_10233140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233150(undefined4 param_1);
template<class... A> int FUN_10233150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233160(undefined4 param_1);
template<class... A> int FUN_10233160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233170(undefined4 param_1);
template<class... A> int FUN_10233170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233180(undefined4 param_1);
template<class... A> int FUN_10233180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233190(undefined4 param_1);
template<class... A> int FUN_10233190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102331a0(undefined4 param_1);
template<class... A> int FUN_102331a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102331b0(int param_1);
template<class... A> int FUN_102331b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102331c0(int param_1);
template<class... A> int FUN_102331c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102331d0(int param_1);
template<class... A> int FUN_102331d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102331e0(int param_1);
template<class... A> int FUN_102331e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102331f0(int param_1);
template<class... A> int FUN_102331f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233200(int param_1);
template<class... A> int FUN_10233200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233210(int param_1);
template<class... A> int FUN_10233210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233220(int param_1);
template<class... A> int FUN_10233220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233230(int param_1);
template<class... A> int FUN_10233230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102333c0(int param_1);
template<class... A> int FUN_102333c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102333d0(int param_1);
template<class... A> int FUN_102333d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102333e0(int param_1);
template<class... A> int FUN_102333e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_102333f0(int param_1);
template<class... A> int FUN_102333f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10233400(int param_1);
template<class... A> int FUN_10233400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10233410(int param_1);
template<class... A> int FUN_10233410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10233420(int param_1);
template<class... A> int FUN_10233420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10233430(int param_1);
template<class... A> int FUN_10233430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10233440(int param_1);
template<class... A> int FUN_10233440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10233450(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10233450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10233460(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10233460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10233470(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10233470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233480(undefined4 param_1);
template<class... A> int FUN_10233480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10233490(undefined4 param_1);
template<class... A> int FUN_10233490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102334a0(undefined4 param_1);
template<class... A> int FUN_102334a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102334b0(undefined4 param_1);
template<class... A> int FUN_102334b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102334c0(undefined4 param_1);
template<class... A> int FUN_102334c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102334d0(undefined4 param_1);
template<class... A> int FUN_102334d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10233790(void);
template<class... A> int FUN_10233790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102337a0(void);
template<class... A> int FUN_102337a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102337b0(void);
template<class... A> int FUN_102337b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102339d0(int param_1);
template<class... A> int FUN_102339d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102339e0(int param_1);
template<class... A> int FUN_102339e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102339f0(int param_1);
template<class... A> int FUN_102339f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10233a00(undefined4 *param_1);
template<class... A> int FUN_10233a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10233a10(undefined4 *param_1);
template<class... A> int FUN_10233a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10233a20(undefined4 *param_1);
template<class... A> int FUN_10233a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10234150(int *param_1);
template<class... A> int FUN_10234150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10234a90(int param_1,int param_2,int param_3);
template<class... A> int FUN_10234a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10234ad0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10234ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10234b10(int param_1,int param_2,int param_3);
template<class... A> int FUN_10234b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234e60(uint param_1);
template<class... A> int FUN_10234e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234ee0(uint param_1);
template<class... A> int FUN_10234ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234f50(uint param_1);
template<class... A> int FUN_10234f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10234fc0(uint param_1);
template<class... A> int FUN_10234fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10235030(uint param_1);
template<class... A> int FUN_10235030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102350a0(uint param_1);
template<class... A> int FUN_102350a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10235110(undefined4 *param_1);
template<class... A> int FUN_10235110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10235240(int param_1);
template<class... A> int FUN_10235240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10235250(int param_1);
template<class... A> int FUN_10235250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10235260(int param_1);
template<class... A> int FUN_10235260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235270(undefined4 param_1);
template<class... A> int FUN_10235270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235290(int param_1);
template<class... A> int FUN_10235290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235310(int param_1);
template<class... A> int FUN_10235310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235390(int param_1);
template<class... A> int FUN_10235390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10235490(int *param_1);
template<class... A> int FUN_10235490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10235a00(undefined4 param_1);
template<class... A> int FUN_10235a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235da0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10235da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235df0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10235df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10235e40(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10235e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10235e90(int param_1,int param_2);
template<class... A> int FUN_10235e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10235ee0(int param_1,int param_2);
template<class... A> int FUN_10235ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10235f30(int param_1,int param_2);
template<class... A> int FUN_10235f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10235fd0(int param_1,int param_2);
template<class... A> int FUN_10235fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10236020(int param_1,int param_2);
template<class... A> int FUN_10236020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10236070(int param_1,int param_2);
template<class... A> int FUN_10236070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102360c0(undefined4 *param_1);
template<class... A> int FUN_102360c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102360d0(undefined4 *param_1);
template<class... A> int FUN_102360d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102365b0(int param_1);
template<class... A> int FUN_102365b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1023ac10(int param_1);
template<class... A> int FUN_1023ac10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1023ac20(int param_1);
template<class... A> int FUN_1023ac20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1023ac30(int param_1);
template<class... A> int FUN_1023ac30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1023ac40(int param_1);
template<class... A> int FUN_1023ac40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1023b270(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1023b270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1023b290(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_1023b290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102409f0(void);
template<class... A> int FUN_102409f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10240a00(void);
template<class... A> int FUN_10240a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10240a10(void);
template<class... A> int FUN_10240a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10240a20(void);
template<class... A> int FUN_10240a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10242860(int param_1);
template<class... A> int FUN_10242860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10242a90(int param_1);
template<class... A> int FUN_10242a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10242aa0(int *param_1);
template<class... A> int FUN_10242aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10242ab0(int *param_1);
template<class... A> int FUN_10242ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10242ac0(int *param_1);
template<class... A> int FUN_10242ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10242b70(int param_1);
template<class... A> int FUN_10242b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10242fb0(float *param_1);
template<class... A> int FUN_10242fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10242fc0(float *param_1);
template<class... A> int FUN_10242fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10242fd0(float *param_1);
template<class... A> int FUN_10242fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10242fe0(void);
template<class... A> int FUN_10242fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10242ff0(void);
template<class... A> int FUN_10242ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243000(void);
template<class... A> int FUN_10243000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243010(void);
template<class... A> int FUN_10243010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243020(void);
template<class... A> int FUN_10243020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243030(void);
template<class... A> int FUN_10243030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243040(void);
template<class... A> int FUN_10243040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243050(void);
template<class... A> int FUN_10243050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243060(void);
template<class... A> int FUN_10243060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243070(void);
template<class... A> int FUN_10243070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243080(void);
template<class... A> int FUN_10243080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243090(void);
template<class... A> int FUN_10243090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243630(undefined4 param_1);
template<class... A> int FUN_10243630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10243640(undefined4 param_1);
template<class... A> int FUN_10243640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243690(undefined4 *param_1);
template<class... A> int FUN_10243690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102436a0(undefined4 *param_1);
template<class... A> int FUN_102436a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102436b0(undefined4 *param_1);
template<class... A> int FUN_102436b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102436c0(undefined4 *param_1);
template<class... A> int FUN_102436c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102436d0(undefined4 *param_1);
template<class... A> int FUN_102436d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102436e0(undefined4 *param_1);
template<class... A> int FUN_102436e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102436f0(undefined4 *param_1);
template<class... A> int FUN_102436f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243700(undefined4 *param_1);
template<class... A> int FUN_10243700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243710(undefined4 *param_1);
template<class... A> int FUN_10243710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243720(undefined4 *param_1);
template<class... A> int FUN_10243720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243730(undefined4 *param_1);
template<class... A> int FUN_10243730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243740(undefined4 *param_1);
template<class... A> int FUN_10243740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243750(undefined4 *param_1);
template<class... A> int FUN_10243750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243760(undefined4 *param_1);
template<class... A> int FUN_10243760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243770(undefined4 *param_1);
template<class... A> int FUN_10243770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243780(undefined4 *param_1);
template<class... A> int FUN_10243780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10243790(undefined4 *param_1);
template<class... A> int FUN_10243790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243d80(undefined4 *param_1);
template<class... A> int FUN_10243d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243db0(undefined4 *param_1);
template<class... A> int FUN_10243db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243de0(undefined4 *param_1);
template<class... A> int FUN_10243de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243e10(undefined4 *param_1);
template<class... A> int FUN_10243e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243e40(undefined4 *param_1);
template<class... A> int FUN_10243e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243e70(undefined4 *param_1);
template<class... A> int FUN_10243e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243ea0(undefined4 *param_1);
template<class... A> int FUN_10243ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243ed0(undefined4 *param_1);
template<class... A> int FUN_10243ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243f00(undefined4 *param_1);
template<class... A> int FUN_10243f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243f30(undefined4 *param_1);
template<class... A> int FUN_10243f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243f60(undefined4 *param_1);
template<class... A> int FUN_10243f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243f90(undefined4 *param_1);
template<class... A> int FUN_10243f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243fc0(undefined4 *param_1);
template<class... A> int FUN_10243fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10243ff0(undefined4 *param_1);
template<class... A> int FUN_10243ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10244020(undefined4 *param_1);
template<class... A> int FUN_10244020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10244050(undefined4 *param_1);
template<class... A> int FUN_10244050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10244080(int *param_1);
template<class... A> int FUN_10244080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10244e80(int *param_1);
template<class... A> int FUN_10244e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10244e90(int *param_1);
template<class... A> int FUN_10244e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10244ea0(int *param_1);
template<class... A> int FUN_10244ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10244eb0(int *param_1);
template<class... A> int FUN_10244eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10245a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10245a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10245a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10245a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10245a90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10245a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10245ab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10245ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245ef0(void);
template<class... A> int FUN_10245ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245f10(void);
template<class... A> int FUN_10245f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245f30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10245f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245f40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10245f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245f50(void);
template<class... A> int FUN_10245f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245f60(void);
template<class... A> int FUN_10245f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10245f70(void);
template<class... A> int FUN_10245f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10246370(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10246370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10246390(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10246390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102463b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102463b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102465b0(uint param_1);
template<class... A> int FUN_102465b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102465d0(undefined4 param_1);
template<class... A> int FUN_102465d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102465e0(undefined4 param_1);
template<class... A> int FUN_102465e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102465f0(undefined4 param_1);
template<class... A> int FUN_102465f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246600(undefined4 param_1);
template<class... A> int FUN_10246600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246610(undefined4 param_1);
template<class... A> int FUN_10246610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246620(undefined4 param_1);
template<class... A> int FUN_10246620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246630(undefined4 param_1);
template<class... A> int FUN_10246630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246640(undefined4 param_1);
template<class... A> int FUN_10246640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246650(undefined4 param_1);
template<class... A> int FUN_10246650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246660(undefined4 param_1);
template<class... A> int FUN_10246660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246670(undefined4 param_1);
template<class... A> int FUN_10246670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102468d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102468d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102468f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_102468f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246910(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10246910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246930(undefined4 param_1);
template<class... A> int FUN_10246930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10246940(undefined4 param_1);
template<class... A> int FUN_10246940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10246950(void);
template<class... A> int FUN_10246950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10246960(void);
template<class... A> int FUN_10246960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10246970(undefined4 *param_1);
template<class... A> int FUN_10246970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102469a0(undefined4 *param_1);
template<class... A> int FUN_102469a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102469c0(undefined4 *param_1);
template<class... A> int FUN_102469c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102469e0(undefined4 *param_1);
template<class... A> int FUN_102469e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10246a90(undefined4 *param_1);
template<class... A> int FUN_10246a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10246ab0(undefined4 *param_1);
template<class... A> int FUN_10246ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10246ad0(undefined4 param_1);
template<class... A> int FUN_10246ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10246ae0(undefined4 param_1);
template<class... A> int FUN_10246ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10246af0(undefined4 *param_1);
template<class... A> int FUN_10246af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10246f90(undefined4 *param_1);
template<class... A> int FUN_10246f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102473d0(undefined4 *param_1);
template<class... A> int FUN_102473d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10247770(undefined4 *param_1);
template<class... A> int FUN_10247770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102478f0(undefined4 *param_1);
template<class... A> int FUN_102478f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10247900(int *param_1);
template<class... A> int FUN_10247900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10247910(int *param_1);
template<class... A> int FUN_10247910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10247920(int *param_1);
template<class... A> int FUN_10247920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10247930(int *param_1);
template<class... A> int FUN_10247930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10247940(undefined4 *param_1);
template<class... A> int FUN_10247940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10247cd0(void);
template<class... A> int FUN_10247cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10247ce0(undefined4 *param_1);
template<class... A> int FUN_10247ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10247d10(undefined4 *param_1);
template<class... A> int FUN_10247d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10247d60(undefined4 param_1);
template<class... A> int FUN_10247d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10247d70(undefined4 param_1);
template<class... A> int FUN_10247d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10247d80(undefined4 param_1);
template<class... A> int FUN_10247d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10247d90(undefined4 param_1);
template<class... A> int FUN_10247d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10247da0(undefined4 param_1);
template<class... A> int FUN_10247da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10247db0(undefined4 param_1);
template<class... A> int FUN_10247db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10247dc0(undefined4 param_1);
template<class... A> int FUN_10247dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10247e00(undefined4 param_1);
template<class... A> int FUN_10247e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10248510(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10248510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10248560(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10248560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102485b0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_102485b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102493e0(void);
template<class... A> int FUN_102493e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102493f0(void);
template<class... A> int FUN_102493f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10249960(undefined4 *param_1);
template<class... A> int FUN_10249960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10249a90(undefined4 *param_1);
template<class... A> int FUN_10249a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10249ac0(int *param_1);
template<class... A> int FUN_10249ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10249c10(int param_1);
template<class... A> int FUN_10249c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10249c20(undefined4 param_1);
template<class... A> int FUN_10249c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10249db0(void);
template<class... A> int FUN_10249db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10249dc0(undefined4 *param_1);
template<class... A> int FUN_10249dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024a1b0(undefined4 *param_1);
template<class... A> int FUN_1024a1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024a580(undefined4 *param_1);
template<class... A> int FUN_1024a580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024a670(undefined4 *param_1);
template<class... A> int FUN_1024a670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024a680(undefined4 *param_1);
template<class... A> int FUN_1024a680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024a690(undefined4 *param_1);
template<class... A> int FUN_1024a690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024a940(undefined4 *param_1);
template<class... A> int FUN_1024a940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1024ac00(void);
template<class... A> int FUN_1024ac00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024afb0(undefined4 *param_1);
template<class... A> int FUN_1024afb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024afc0(undefined4 *param_1);
template<class... A> int FUN_1024afc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024b0f0(undefined4 *param_1);
template<class... A> int FUN_1024b0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024b120(undefined4 *param_1);
template<class... A> int FUN_1024b120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024b150(undefined4 *param_1);
template<class... A> int FUN_1024b150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1024c1e0(void);
template<class... A> int FUN_1024c1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024c1f0(undefined4 *param_1);
template<class... A> int FUN_1024c1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024c260(undefined4 *param_1);
template<class... A> int FUN_1024c260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024c2c0(undefined4 *param_1);
template<class... A> int FUN_1024c2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024c2d0(undefined4 *param_1);
template<class... A> int FUN_1024c2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024c4c0(undefined4 *param_1);
template<class... A> int FUN_1024c4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024c4d0(undefined4 *param_1);
template<class... A> int FUN_1024c4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024c670(undefined4 *param_1);
template<class... A> int FUN_1024c670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1024df00(void);
template<class... A> int FUN_1024df00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024e040(undefined4 *param_1);
template<class... A> int FUN_1024e040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024e170(undefined4 *param_1);
template<class... A> int FUN_1024e170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1024e790(int param_1);
template<class... A> int FUN_1024e790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1024e7a0(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_1024e7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_1024e9a0(int param_1);
template<class... A> int FUN_1024e9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1024e9b0(undefined4 param_1);
template<class... A> int FUN_1024e9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1024e9c0(undefined4 param_1);
template<class... A> int FUN_1024e9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1024e9d0(undefined4 param_1);
template<class... A> int FUN_1024e9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1024e9e0(undefined4 param_1);
template<class... A> int FUN_1024e9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1024e9f0(void);
template<class... A> int FUN_1024e9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1024ea00(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_1024ea00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1024ea40(undefined4 param_1);
template<class... A> int FUN_1024ea40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024ecf0(undefined4 *param_1);
template<class... A> int FUN_1024ecf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024ed60(undefined4 *param_1);
template<class... A> int FUN_1024ed60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024edc0(undefined4 *param_1);
template<class... A> int FUN_1024edc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024ee30(undefined4 param_1);
template<class... A> int FUN_1024ee30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1024ee40(int param_1);
template<class... A> int FUN_1024ee40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1024f2d0(undefined4 *param_1);
template<class... A> int FUN_1024f2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024f5b0(int param_1);
template<class... A> int FUN_1024f5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024f610(undefined4 *param_1);
template<class... A> int FUN_1024f610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024f630(undefined4 *param_1);
template<class... A> int FUN_1024f630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024f7b0(undefined4 *param_1);
template<class... A> int FUN_1024f7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1024f7e0(int *param_1);
template<class... A> int FUN_1024f7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024f8e0(undefined4 *param_1);
template<class... A> int FUN_1024f8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024f8f0(undefined4 *param_1);
template<class... A> int FUN_1024f8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1024f900(int *param_1);
template<class... A> int FUN_1024f900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024f910(undefined4 *param_1);
template<class... A> int FUN_1024f910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1024f920(int *param_1);
template<class... A> int FUN_1024f920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1024f930(int *param_1);
template<class... A> int FUN_1024f930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1024f940(int param_1);
template<class... A> int FUN_1024f940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1024f950(int param_1);
template<class... A> int FUN_1024f950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024f960(undefined4 *param_1);
template<class... A> int FUN_1024f960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024f970(undefined4 *param_1);
template<class... A> int FUN_1024f970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1024fdd0(int param_1);
template<class... A> int FUN_1024fdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1024fdf0(int param_1);
template<class... A> int FUN_1024fdf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1024fe00(int param_1);
template<class... A> int FUN_1024fe00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10251f20(void);
template<class... A> int FUN_10251f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10252bd0(undefined4 *param_1);
template<class... A> int FUN_10252bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10252be0(undefined4 *param_1);
template<class... A> int FUN_10252be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10252bf0(undefined4 *param_1);
template<class... A> int FUN_10252bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10252f10(undefined4 *param_1);
template<class... A> int FUN_10252f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10252f40(undefined4 *param_1);
template<class... A> int FUN_10252f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10252f70(undefined4 *param_1);
template<class... A> int FUN_10252f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __stdcall FUN_102534f0(SCStr *param_1);
template<class... A> int __stdcall FUN_102534f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10253920(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10253920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10253940(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10253940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10253980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10253980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_102547e0(int param_1);
template<class... A> int FUN_102547e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_102547f0(int param_1);
template<class... A> int FUN_102547f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10254800(void);
template<class... A> int FUN_10254800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10254ac0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10254ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10254ad0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10254ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10254ae0(void);
template<class... A> int FUN_10254ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_102550d0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_102550d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_102551b0(uint param_1);
template<class... A> int FUN_102551b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102551d0(undefined4 *param_1);
template<class... A> int FUN_102551d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10255850(undefined4 param_1);
template<class... A> int FUN_10255850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10255860(int param_1,SCStr *param_2);
template<class... A> int FUN_10255860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10255dd0(undefined4 param_1);
template<class... A> int FUN_10255dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10255f20(undefined4 param_1);
template<class... A> int FUN_10255f20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10255f80(undefined4 param_1);
template<class... A> int FUN_10255f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10255f90(undefined4 param_1);
template<class... A> int FUN_10255f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10255fa0(undefined4 param_1);
template<class... A> int FUN_10255fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10255fb0(undefined4 param_1);
template<class... A> int FUN_10255fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10255fc0(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10255fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10256010(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10256010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10256040(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10256040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10256070(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10256070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256210(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10256210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256230(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10256230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256250(undefined4 param_1);
template<class... A> int FUN_10256250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256260(undefined4 param_1);
template<class... A> int FUN_10256260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256270(undefined4 param_1);
template<class... A> int FUN_10256270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256280(undefined4 param_1);
template<class... A> int FUN_10256280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102562e0(undefined4 param_1);
template<class... A> int FUN_102562e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102562f0(undefined4 param_1);
template<class... A> int FUN_102562f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256300(undefined4 param_1);
template<class... A> int FUN_10256300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256360(undefined4 param_1);
template<class... A> int FUN_10256360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256370(undefined4 param_1);
template<class... A> int FUN_10256370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256380(undefined4 param_1);
template<class... A> int FUN_10256380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256390(undefined4 param_1);
template<class... A> int FUN_10256390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102563a0(void);
template<class... A> int FUN_102563a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102563b0(void);
template<class... A> int FUN_102563b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102563c0(void);
template<class... A> int FUN_102563c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_102563d0(void);
template<class... A> int FUN_102563d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102566d0(undefined4 param_1);
template<class... A> int FUN_102566d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102566e0(undefined4 param_1);
template<class... A> int FUN_102566e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102566f0(undefined4 param_1);
template<class... A> int FUN_102566f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256700(undefined4 param_1);
template<class... A> int FUN_10256700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10256710(undefined4 param_1);
template<class... A> int FUN_10256710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10256f50(undefined4 *param_1);
template<class... A> int FUN_10256f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10256fa0(undefined4 *param_1);
template<class... A> int FUN_10256fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10256fd0(undefined4 *param_1);
template<class... A> int FUN_10256fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257000(undefined4 *param_1);
template<class... A> int FUN_10257000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257030(undefined4 *param_1);
template<class... A> int FUN_10257030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257180(undefined4 *param_1);
template<class... A> int FUN_10257180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10257260(undefined4 param_1);
template<class... A> int FUN_10257260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10257270(undefined4 param_1);
template<class... A> int FUN_10257270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10257280(undefined4 param_1);
template<class... A> int FUN_10257280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10257290(undefined4 param_1);
template<class... A> int FUN_10257290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102572a0(int param_1);
template<class... A> int FUN_102572a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102572b0(int param_1);
template<class... A> int FUN_102572b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102572c0(int param_1);
template<class... A> int FUN_102572c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102572d0(int param_1);
template<class... A> int FUN_102572d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102572e0(int param_1);
template<class... A> int FUN_102572e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102572f0(int param_1);
template<class... A> int FUN_102572f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102573f0(undefined4 *param_1);
template<class... A> int FUN_102573f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257430(undefined4 *param_1);
template<class... A> int FUN_10257430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10257450(undefined4 param_1);
template<class... A> int FUN_10257450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10257460(undefined4 param_1);
template<class... A> int FUN_10257460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_102578b0(undefined4 *param_1);
template<class... A> int FUN_102578b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257900(undefined4 *param_1);
template<class... A> int FUN_10257900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257920(undefined4 *param_1);
template<class... A> int FUN_10257920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257930(undefined4 *param_1);
template<class... A> int FUN_10257930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257940(undefined4 *param_1);
template<class... A> int FUN_10257940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257950(undefined4 *param_1);
template<class... A> int FUN_10257950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257960(undefined4 *param_1);
template<class... A> int FUN_10257960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10257da0(undefined4 *param_1);
template<class... A> int FUN_10257da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10258a30(undefined4 *param_1);
template<class... A> int FUN_10258a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10258a40(undefined4 *param_1);
template<class... A> int FUN_10258a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10258a50(undefined4 *param_1);
template<class... A> int FUN_10258a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10258a60(undefined4 *param_1);
template<class... A> int FUN_10258a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10258a70(undefined4 *param_1);
template<class... A> int FUN_10258a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10259100(undefined4 *param_1);
template<class... A> int FUN_10259100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10259110(undefined4 *param_1);
template<class... A> int FUN_10259110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10259120(int *param_1);
template<class... A> int FUN_10259120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10259130(undefined4 *param_1);
template<class... A> int FUN_10259130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10259140(undefined4 *param_1);
template<class... A> int FUN_10259140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10259150(int param_1);
template<class... A> int FUN_10259150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10259160(int param_1);
template<class... A> int FUN_10259160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10259170(undefined4 *param_1);
template<class... A> int FUN_10259170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10259180(undefined4 *param_1);
template<class... A> int FUN_10259180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10259190(undefined4 *param_1);
template<class... A> int FUN_10259190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102591a0(undefined4 *param_1);
template<class... A> int FUN_102591a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102591b0(undefined4 *param_1);
template<class... A> int FUN_102591b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102591c0(int *param_1);
template<class... A> int FUN_102591c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102591d0(int *param_1);
template<class... A> int FUN_102591d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_102591e0(int *param_1);
template<class... A> int FUN_102591e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10259720(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10259720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025a050(undefined4 *param_1);
template<class... A> int FUN_1025a050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025a170(int param_1);
template<class... A> int FUN_1025a170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025a930(int param_1);
template<class... A> int FUN_1025a930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025a940(int param_1);
template<class... A> int FUN_1025a940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025a950(int param_1);
template<class... A> int FUN_1025a950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025a960(int param_1);
template<class... A> int FUN_1025a960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025a970(int param_1);
template<class... A> int FUN_1025a970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025a980(int param_1);
template<class... A> int FUN_1025a980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025a9e0(undefined4 param_1);
template<class... A> int FUN_1025a9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025a9f0(undefined4 param_1);
template<class... A> int FUN_1025a9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa00(undefined4 param_1);
template<class... A> int FUN_1025aa00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa10(undefined4 param_1);
template<class... A> int FUN_1025aa10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa20(undefined4 param_1);
template<class... A> int FUN_1025aa20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa30(undefined4 param_1);
template<class... A> int FUN_1025aa30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa40(undefined4 param_1);
template<class... A> int FUN_1025aa40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa50(undefined4 param_1);
template<class... A> int FUN_1025aa50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa60(undefined4 param_1);
template<class... A> int FUN_1025aa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa70(undefined4 param_1);
template<class... A> int FUN_1025aa70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa80(undefined4 param_1);
template<class... A> int FUN_1025aa80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aa90(undefined4 param_1);
template<class... A> int FUN_1025aa90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aaa0(int param_1);
template<class... A> int FUN_1025aaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aab0(int param_1);
template<class... A> int FUN_1025aab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aac0(int param_1);
template<class... A> int FUN_1025aac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aad0(int param_1);
template<class... A> int FUN_1025aad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aae0(int param_1);
template<class... A> int FUN_1025aae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aaf0(int param_1);
template<class... A> int FUN_1025aaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025ad90(int param_1);
template<class... A> int FUN_1025ad90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025ada0(int param_1);
template<class... A> int FUN_1025ada0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025adb0(int param_1);
template<class... A> int FUN_1025adb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025adc0(int param_1);
template<class... A> int FUN_1025adc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025add0(int param_1);
template<class... A> int FUN_1025add0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025ade0(int param_1);
template<class... A> int FUN_1025ade0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1025aeb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_1025aeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025aec0(int param_1);
template<class... A> int FUN_1025aec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025aed0(undefined4 *param_1);
template<class... A> int FUN_1025aed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1025b710(uint param_1);
template<class... A> int FUN_1025b710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_1025b780(uint param_1);
template<class... A> int FUN_1025b780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_1025b840(void);
template<class... A> int FUN_1025b840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_1025b860(int *param_1);
template<class... A> int FUN_1025b860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025b870(int param_1);
template<class... A> int FUN_1025b870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025b9b0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_1025b9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_1025ba00(int param_1,int param_2);
template<class... A> int FUN_1025ba00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025baa0(undefined4 *param_1);
template<class... A> int FUN_1025baa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025bab0(undefined4 *param_1);
template<class... A> int FUN_1025bab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025bac0(int *param_1);
template<class... A> int FUN_1025bac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025c820(void);
template<class... A> int FUN_1025c820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025c840(void);
template<class... A> int FUN_1025c840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025c850(void);
template<class... A> int FUN_1025c850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025c860(void);
template<class... A> int FUN_1025c860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025c870(void);
template<class... A> int FUN_1025c870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025c880(int param_1);
template<class... A> int FUN_1025c880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025c890(int *param_1);
template<class... A> int FUN_1025c890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025c8a0(void);
template<class... A> int FUN_1025c8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025c8b0(void);
template<class... A> int FUN_1025c8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025c8c0(void);
template<class... A> int FUN_1025c8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025c8d0(void);
template<class... A> int FUN_1025c8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025c910(undefined4 param_1);
template<class... A> int FUN_1025c910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025c920(undefined4 *param_1);
template<class... A> int FUN_1025c920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025c930(undefined4 *param_1);
template<class... A> int FUN_1025c930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025c940(undefined4 *param_1);
template<class... A> int FUN_1025c940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025c950(undefined4 *param_1);
template<class... A> int FUN_1025c950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025d210(undefined4 *param_1);
template<class... A> int FUN_1025d210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025d240(undefined4 *param_1);
template<class... A> int FUN_1025d240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025d270(undefined4 *param_1);
template<class... A> int FUN_1025d270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025d2a0(undefined4 *param_1);
template<class... A> int FUN_1025d2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025d2d0(undefined4 *param_1);
template<class... A> int FUN_1025d2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025d300(undefined4 *param_1);
template<class... A> int FUN_1025d300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025d330(undefined4 *param_1);
template<class... A> int FUN_1025d330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025d5f0(void);
template<class... A> int FUN_1025d5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025d600(undefined4 *param_1);
template<class... A> int FUN_1025d600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025d6b0(undefined4 *param_1);
template<class... A> int FUN_1025d6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025d8a0(undefined4 *param_1);
template<class... A> int FUN_1025d8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_1025d9b0(int *param_1);
template<class... A> int FUN_1025d9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025d9c0(undefined4 *param_1);
template<class... A> int FUN_1025d9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025d9d0(undefined4 *param_1);
template<class... A> int FUN_1025d9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025db30(undefined4 *param_1);
template<class... A> int FUN_1025db30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025df50(void);
template<class... A> int FUN_1025df50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025df60(undefined4 *param_1);
template<class... A> int FUN_1025df60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025e100(undefined4 *param_1);
template<class... A> int FUN_1025e100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025e130(undefined4 *param_1);
template<class... A> int FUN_1025e130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025e190(void);
template<class... A> int FUN_1025e190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025e1a0(undefined4 *param_1);
template<class... A> int FUN_1025e1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025e1f0(undefined4 *param_1);
template<class... A> int FUN_1025e1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025e2a0(undefined4 *param_1);
template<class... A> int FUN_1025e2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025e2f0(undefined4 *param_1);
template<class... A> int FUN_1025e2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025e310(undefined4 *param_1);
template<class... A> int FUN_1025e310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025e320(undefined4 *param_1);
template<class... A> int FUN_1025e320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025e340(undefined4 *param_1);
template<class... A> int FUN_1025e340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025e5e0(void);
template<class... A> int FUN_1025e5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025ebd0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1025ebd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025ebe0(void);
template<class... A> int FUN_1025ebe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_1025ede0(int param_1,SCStr *param_2);
template<class... A> int FUN_1025ede0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ee10(undefined4 param_1);
template<class... A> int FUN_1025ee10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ee20(undefined4 param_1);
template<class... A> int FUN_1025ee20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ee30(undefined4 param_1);
template<class... A> int FUN_1025ee30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ee40(undefined4 param_1);
template<class... A> int FUN_1025ee40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_1025ee50(undefined4 param_1,SCStr *param_2,SCStr *param_3);
template<class... A> int FUN_1025ee50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025eee0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_1025eee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ef00(undefined4 param_1);
template<class... A> int FUN_1025ef00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ef10(undefined4 param_1);
template<class... A> int FUN_1025ef10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ef20(undefined4 param_1);
template<class... A> int FUN_1025ef20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_1025ef30(undefined4 param_1);
template<class... A> int FUN_1025ef30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025ef40(void);
template<class... A> int FUN_1025ef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025ef50(void);
template<class... A> int FUN_1025ef50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025ef60(void);
template<class... A> int FUN_1025ef60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_1025ef70(void);
template<class... A> int FUN_1025ef70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f0a0(undefined4 *param_1);
template<class... A> int FUN_1025f0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f0d0(undefined4 *param_1);
template<class... A> int FUN_1025f0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f390(undefined4 *param_1);
template<class... A> int FUN_1025f390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f3d0(undefined4 *param_1);
template<class... A> int FUN_1025f3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_1025f6f0(undefined4 *param_1);
template<class... A> int FUN_1025f6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_1025fc30(undefined4 *param_1);
template<class... A> int FUN_1025fc30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_1025fe60(undefined4 *param_1);
template<class... A> int FUN_1025fe60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10260480(int param_1);
template<class... A> int FUN_10260480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102604a0(undefined4 param_1);
template<class... A> int FUN_102604a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102604b0(undefined4 param_1);
template<class... A> int FUN_102604b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102604c0(undefined4 param_1);
template<class... A> int FUN_102604c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102604d0(undefined4 param_1);
template<class... A> int FUN_102604d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_102604e0(undefined4 param_1);
template<class... A> int FUN_102604e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10260500(undefined4 param_1);
template<class... A> int FUN_10260500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10260510(undefined4 param_1);
template<class... A> int FUN_10260510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102607b0(undefined4 param_1);
template<class... A> int FUN_102607b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10260830(int param_1);
template<class... A> int FUN_10260830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_102609e0(uint param_1);
template<class... A> int FUN_102609e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10260da0(int param_1,int param_2);
template<class... A> int FUN_10260da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10261020(void);
template<class... A> int FUN_10261020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102610f0(void);
template<class... A> int FUN_102610f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10261550(int param_1);
template<class... A> int FUN_10261550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10261560(void);
template<class... A> int FUN_10261560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10261570(void);
template<class... A> int FUN_10261570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10261580(void);
template<class... A> int FUN_10261580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10261590(void);
template<class... A> int FUN_10261590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_102622f0(void);
template<class... A> int FUN_102622f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10262300(void);
template<class... A> int FUN_10262300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_102626b0(undefined4 *param_1);
template<class... A> int FUN_102626b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10262f10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10262f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10262f30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10262f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10262f50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10262f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10263300(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10263300(A...);
extern void __fastcall FUN_1022df10(void *param_1);

extern void __fastcall thunk_FUN_1022df10(void *param_1);

// Reference entry 101fe5c0; body size 6 bytes.
extern int __stdcall thunk_FUN_101ba530(int a1);
extern int __stdcall thunk_FUN_102207b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10246170(int a1,int a2);
extern int __stdcall thunk_FUN_10246290(int a1,int a2);
extern int __stdcall thunk_FUN_1025f3f0(int a1,int a2);
extern int __stdcall thunk_FUN_1059b760(int a1,int a2);
extern int __stdcall thunk_FUN_1059bd30(int a1);
extern int __stdcall thunk_FUN_1059cad0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1059d0b0(int a1);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_105a5110(int a1,int a2);
extern int __stdcall thunk_FUN_105a51f0(int a1,int a2);
extern int __stdcall thunk_FUN_105a52b0(int a1,int a2);
extern int __stdcall thunk_FUN_105a7950(int a1);
extern int __stdcall thunk_FUN_111a0940(int a1);
extern int __stdcall thunk_FUN_111a0e70(int a1);
extern int __stdcall thunk_FUN_111c06e0(int a1);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_0_0 { virtual int v(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_1_2 { virtual void _p0(); virtual int v(int a1,int a2); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_4_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(void); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_9_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(void); };
struct SCVtbl_11_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual int v(int a1); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_26_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual int v(int a1,int a2); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_3_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_5_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1,int a2); };
struct SCVtbl_6_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1); };
struct SCVtbl_9_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(int a1,int a2); };
struct SCVtbl_21_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual int v(void); };
struct SCVtbl_37_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual int v(void); };
int FUN_10033249();
int FUN_1006af23();
int FUN_100911af();
int FUN_100679f9();
int FUN_1005c743(void);
int FUN_1005c743(...);
template<class... A> int FUN_1005c743(A...);
#line 1 "ENTRY_101fe5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe5c0(void)

{
  return (char *)("SCIActionOnGroupDescriptor");
}


// Reference entry 101fe5d0; body size 6 bytes.
#line 1 "ENTRY_101fe5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe5d0(void)

{
  return (char *)("SCIAddToQueueAtNumberDescriptor");
}


// Reference entry 101fe5e0; body size 6 bytes.
#line 1 "ENTRY_101fe5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe5e0(void)

{
  return (char *)("SCIBrowseDataSource");
}


// Reference entry 101fe5f0; body size 6 bytes.
#line 1 "ENTRY_101fe5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe5f0(void)

{
  return (char *)("SCIBrowseGroupsInfo");
}


// Reference entry 101fe600; body size 6 bytes.
#line 1 "ENTRY_101fe600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe600(void)

{
  return (char *)("SCIBrowseItem");
}


// Reference entry 101fe610; body size 6 bytes.
#line 1 "ENTRY_101fe610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe610(void)

{
  return (char *)("SCIBrowseMetadata");
}


// Reference entry 101fe620; body size 6 bytes.
#line 1 "ENTRY_101fe620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe620(void)

{
  return (char *)("SCIInnerActionFactory");
}


// Reference entry 101fe630; body size 6 bytes.
#line 1 "ENTRY_101fe630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe630(void)

{
  return (char *)("SCINowPlayingSource");
}


// Reference entry 101fe640; body size 6 bytes.
#line 1 "ENTRY_101fe640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe640(void)

{
  return (char *)("SCINowPlayingTransport");
}


// Reference entry 101fe650; body size 6 bytes.
#line 1 "ENTRY_101fe650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe650(void)

{
  return (char *)("SCIPowerscrollDataSource");
}


// Reference entry 101fe660; body size 6 bytes.
#line 1 "ENTRY_101fe660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe660(void)

{
  return (char *)("SCISelectableItem");
}


// Reference entry 101fe670; body size 6 bytes.
#line 1 "ENTRY_101fe670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_101fe670(void)

{
  return (char *)("SCITooltip");
}


// Reference entry 101fe680; body size 5 bytes.
#line 1 "ENTRY_101fe680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe690; body size 5 bytes.
#line 1 "ENTRY_101fe690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe6a0; body size 5 bytes.
#line 1 "ENTRY_101fe6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_101fe6a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101fe6b0; body size 12 bytes.
#line 1 "ENTRY_101fe6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_101fe6b0(int param_1,int param_2)

{
  return (int)(param_1 + param_2 * 4);
}


// Reference entry 101fe6c0; body size 19 bytes.
#line 1 "ENTRY_101fe6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_101fe6c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 101fe6e0; body size 28 bytes.
#line 1 "ENTRY_101fe6e0"

__declspec(naked) void FUN_101fe6e0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_118865b0
  __asm pop ecx
  __asm ret
}





// Reference entry 101fe710; body size 28 bytes.
#line 1 "ENTRY_101fe710"

__declspec(naked) void FUN_101fe710(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_11885ba8
  __asm pop ecx
  __asm ret
}





// Reference entry 101fe740; body size 28 bytes.
#line 1 "ENTRY_101fe740"

__declspec(naked) void FUN_101fe740(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], offset LAB_118865bc
  __asm pop ecx
  __asm ret
}





// Reference entry 101fe770; body size 14 bytes.
#line 1 "ENTRY_101fe770"

__declspec(naked) void FUN_101fe770(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 101fe790; body size 27 bytes.
#line 1 "ENTRY_101fe790"

__declspec(naked) void FUN_101fe790(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11886e48
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 101fe7c0; body size 27 bytes.
#line 1 "ENTRY_101fe7c0"

__declspec(naked) void FUN_101fe7c0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11886ff8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 101fe7f0; body size 27 bytes.
#line 1 "ENTRY_101fe7f0"

__declspec(naked) void FUN_101fe7f0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11886d8c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 101fe890; body size 16 bytes.
#line 1 "ENTRY_101fe890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fe890(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fe8b0; body size 16 bytes.
#line 1 "ENTRY_101fe8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fe8b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fe8d0; body size 16 bytes.
#line 1 "ENTRY_101fe8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fe8d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fea30; body size 16 bytes.
#line 1 "ENTRY_101fea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fea30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fea90; body size 16 bytes.
#line 1 "ENTRY_101fea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fea90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101feab0; body size 16 bytes.
#line 1 "ENTRY_101feab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101feab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101feb10; body size 16 bytes.
#line 1 "ENTRY_101feb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101feb10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101febf0; body size 16 bytes.
#line 1 "ENTRY_101febf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101febf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fed90; body size 16 bytes.
#line 1 "ENTRY_101fed90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fed90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fedf0; body size 16 bytes.
#line 1 "ENTRY_101fedf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fedf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fee10; body size 16 bytes.
#line 1 "ENTRY_101fee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101fee10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101feeb0; body size 18 bytes.
#line 1 "ENTRY_101feeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101feeb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101fef70; body size 11 bytes.
#line 1 "ENTRY_101fef70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101fef70(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101ff000; body size 11 bytes.
#line 1 "ENTRY_101ff000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ff000(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 101ff010; body size 16 bytes.
#line 1 "ENTRY_101ff010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ff010(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ff030; body size 21 bytes.
#line 1 "ENTRY_101ff030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ff030(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 101ff050; body size 23 bytes.
#line 1 "ENTRY_101ff050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ff050(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ff070; body size 3 bytes.
#line 1 "ENTRY_101ff070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ff070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ff080; body size 3 bytes.
#line 1 "ENTRY_101ff080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_101ff080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 101ff090; body size 76 bytes.
#line 1 "ENTRY_101ff090"

__declspec(naked) void FUN_101ff090(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x18
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





// Reference entry 101ff0f0; body size 52 bytes.
#line 1 "ENTRY_101ff0f0"

__declspec(naked) void FUN_101ff0f0(void)

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





// Reference entry 101ff200; body size 23 bytes.
#line 1 "ENTRY_101ff200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ff200(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 101ff220; body size 14 bytes.
#line 1 "ENTRY_101ff220"

__declspec(naked) void FUN_101ff220(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], offset LAB_11885eb4
  __asm pop ecx
  __asm ret
}





// Reference entry 101ff240; body size 9 bytes.
#line 1 "ENTRY_101ff240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_101ff240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncBrowseErrorHandler);
  return (undefined4 *)(param_1);
}


// Reference entry 101ff250; body size 18 bytes.
#line 1 "ENTRY_101ff250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_101ff250(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RBrowseNodeObj);
  return (undefined4 *)(param_1);
}


// Reference entry 101ff270; body size 28 bytes.
#line 1 "ENTRY_101ff270"

__declspec(naked) void FUN_101ff270(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188207c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 101ff2a0; body size 55 bytes.
#line 1 "ENTRY_101ff2a0"

__declspec(naked) void FUN_101ff2a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm mov al, byte ptr [edi + 4]
  __asm mov byte ptr [esi + 4], al
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}





// Reference entry 101ffa20; body size 167 bytes.
#line 1 "ENTRY_101ffa20"

__declspec(naked) void FUN_101ffa20(void)

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
  __asm push offset LAB_11886fb0
  __asm call dword ptr [eax + 0x68]
  __asm push eax
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], offset LAB_11886f20
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], offset LAB_11886f68
  __asm mov dword ptr [edi + 0x46c], offset LAB_11886fa4
  __asm _emit 0xc7 __asm _emit 0x87 __asm _emit 0xd0 __asm _emit 0xd7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x87 __asm _emit 0xd4 __asm _emit 0xdb __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [edi + 0xd7d4], 0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}





// Reference entry 101ffaf0; body size 33 bytes.
#line 1 "ENTRY_101ffaf0"

__declspec(naked) void FUN_101ffaf0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11886e48
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11886e90
  __asm pop ecx
  __asm ret
}





// Reference entry 101ffc60; body size 33 bytes.
#line 1 "ENTRY_101ffc60"

__declspec(naked) void FUN_101ffc60(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11883dcc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188718c
  __asm pop ecx
  __asm ret
}





// Reference entry 10200f00; body size 42 bytes.
#line 1 "ENTRY_10200f00"

__declspec(naked) void FUN_10200f00(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11885e5c
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10201250; body size 9 bytes.
#line 1 "ENTRY_10201250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10201250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFavoritesManagerListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10201260; body size 9 bytes.
#line 1 "ENTRY_10201260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10201260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionOnGroupDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10201270; body size 9 bytes.
#line 1 "ENTRY_10201270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10201270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAddToQueueAtNumberDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10201280; body size 9 bytes.
#line 1 "ENTRY_10201280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10201280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseGroupsInfo);
  return (undefined4 *)(param_1);
}


// Reference entry 10201290; body size 9 bytes.
#line 1 "ENTRY_10201290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10201290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBrowseMetadata);
  return (undefined4 *)(param_1);
}


// Reference entry 102012a0; body size 9 bytes.
#line 1 "ENTRY_102012a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102012a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInnerActionFactory);
  return (undefined4 *)(param_1);
}


// Reference entry 102012b0; body size 9 bytes.
#line 1 "ENTRY_102012b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102012b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIPowerscrollDataSource);
  return (undefined4 *)(param_1);
}


// Reference entry 102012c0; body size 9 bytes.
#line 1 "ENTRY_102012c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102012c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCISelectableItem);
  return (undefined4 *)(param_1);
}


// Reference entry 102012d0; body size 9 bytes.
#line 1 "ENTRY_102012d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102012d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITooltip);
  return (undefined4 *)(param_1);
}


// Reference entry 102012e0; body size 47 bytes.
#line 1 "ENTRY_102012e0"

__declspec(naked) void FUN_102012e0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11886d8c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], offset LAB_11886db4
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 10201800; body size 42 bytes.
#line 1 "ENTRY_10201800"

__declspec(naked) void FUN_10201800(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11885e20
  __asm pop ecx
  __asm ret 4
}





// Reference entry 10201840; body size 9 bytes.
#line 1 "ENTRY_10201840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10201840(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjBCListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10201850; body size 9 bytes.
#line 1 "ENTRY_10201850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10201850(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjHHListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10201860; body size 98 bytes.
#line 1 "ENTRY_10201860"

__declspec(naked) void FUN_10201860(void)

{
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0xc]
  __asm mov ebx, ecx
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x49
  __asm cmp byte ptr [ebp], 0
  __asm _emit 0x74 __asm _emit 0x43
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x18]
  __asm lea eax, [edi + 0x11]
  __asm push eax
  __asm call LAB_100381ea
  __asm push edi
  __asm push ebp
  __asm lea esi, [eax + 0x10]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push esi
  __asm mov dword ptr [eax + 0xc], edi
  __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1148cded
  __asm add esp, 0x10
  __asm mov byte ptr [esi + edi], 0
  __asm mov dword ptr [ebx], esi
  __asm mov eax, ebx
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret 8
  __asm pop ebp
  __asm _emit 0xc7 __asm _emit 0x03 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ebx
  __asm pop ebx
  __asm ret 8
}





// Reference entry 102018e0; body size 9 bytes.
#line 1 "ENTRY_102018e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102018e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10201920; body size 19 bytes.
#line 1 "ENTRY_10201920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10201920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10201960; body size 19 bytes.
#line 1 "ENTRY_10201960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10201960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10202c80; body size 7 bytes.
#line 1 "ENTRY_10202c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10202c80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAsyncBrowseErrorHandler);
  return;
}


// Reference entry 102034e0; body size 28 bytes.
#line 1 "ENTRY_102034e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102034e0(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpCDGetAllPrefixLocationsAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10203680; body size 19 bytes.
#line 1 "ENTRY_10203680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10203680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10203fe0; body size 19 bytes.
#line 1 "ENTRY_10203fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10203fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10204280; body size 7 bytes.
#line 1 "ENTRY_10204280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10204280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10204290; body size 7 bytes.
#line 1 "ENTRY_10204290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10204290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102042c0; body size 7 bytes.
#line 1 "ENTRY_102042c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102042c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102047a0; body size 19 bytes.
#line 1 "ENTRY_102047a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102047a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102048c0; body size 65 bytes.
#line 1 "ENTRY_102048c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102048c0(int *param_2)
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


// Reference entry 10204ae0; body size 65 bytes.
#line 1 "ENTRY_10204ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10204ae0(int *param_2)
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


// Reference entry 10204c20; body size 31 bytes.
#line 1 "ENTRY_10204c20"

__declspec(naked) void FUN_10204c20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp esi, eax
  __asm _emit 0x74 __asm _emit 0x0e
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_10005614
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10204e00; body size 14 bytes.
#line 1 "ENTRY_10204e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10204e00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10204e20; body size 14 bytes.
#line 1 "ENTRY_10204e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10204e20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10204f70; body size 12 bytes.
#line 1 "ENTRY_10204f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10204f70(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10204f80; body size 3 bytes.
#line 1 "ENTRY_10204f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10204f80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10204f90; body size 7 bytes.
#line 1 "ENTRY_10204f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10204f90(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10204fa0; body size 7 bytes.
#line 1 "ENTRY_10204fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10204fa0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10204fb0; body size 3 bytes.
#line 1 "ENTRY_10204fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10204fb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10204fc0; body size 7 bytes.
#line 1 "ENTRY_10204fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10204fc0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10204fd0; body size 7 bytes.
#line 1 "ENTRY_10204fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10204fd0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10204fe0; body size 3 bytes.
#line 1 "ENTRY_10204fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10204fe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10204ff0; body size 7 bytes.
#line 1 "ENTRY_10204ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10204ff0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205000; body size 3 bytes.
#line 1 "ENTRY_10205000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205010; body size 3 bytes.
#line 1 "ENTRY_10205010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205010(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205020; body size 7 bytes.
#line 1 "ENTRY_10205020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205020(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205030; body size 7 bytes.
#line 1 "ENTRY_10205030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205030(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205040; body size 3 bytes.
#line 1 "ENTRY_10205040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205040(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205050; body size 7 bytes.
#line 1 "ENTRY_10205050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205050(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205060; body size 7 bytes.
#line 1 "ENTRY_10205060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205060(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205070; body size 3 bytes.
#line 1 "ENTRY_10205070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205070(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205080; body size 7 bytes.
#line 1 "ENTRY_10205080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205080(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205090; body size 3 bytes.
#line 1 "ENTRY_10205090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205090(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102050a0; body size 7 bytes.
#line 1 "ENTRY_102050a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102050a0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102050b0; body size 7 bytes.
#line 1 "ENTRY_102050b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102050b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102050c0; body size 7 bytes.
#line 1 "ENTRY_102050c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102050c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102050d0; body size 3 bytes.
#line 1 "ENTRY_102050d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102050d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102050e0; body size 7 bytes.
#line 1 "ENTRY_102050e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102050e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 102050f0; body size 3 bytes.
#line 1 "ENTRY_102050f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102050f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205100; body size 7 bytes.
#line 1 "ENTRY_10205100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205100(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205110; body size 7 bytes.
#line 1 "ENTRY_10205110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205110(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205120; body size 7 bytes.
#line 1 "ENTRY_10205120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205120(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205130; body size 7 bytes.
#line 1 "ENTRY_10205130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205130(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205140; body size 3 bytes.
#line 1 "ENTRY_10205140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205140(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205150; body size 7 bytes.
#line 1 "ENTRY_10205150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205150(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205160; body size 3 bytes.
#line 1 "ENTRY_10205160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205170; body size 7 bytes.
#line 1 "ENTRY_10205170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205170(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205180; body size 7 bytes.
#line 1 "ENTRY_10205180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10205180(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10205190; body size 13 bytes.
#line 1 "ENTRY_10205190"

__declspec(naked) void FUN_10205190(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm lea ecx, [eax - 4]
  __asm neg eax
  __asm sbb eax, eax
  __asm and eax, ecx
  __asm ret
}





// Reference entry 102051a0; body size 4 bytes.
#line 1 "ENTRY_102051a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102051a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102051b0; body size 3 bytes.
#line 1 "ENTRY_102051b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102051b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102051c0; body size 3 bytes.
#line 1 "ENTRY_102051c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102051c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102051d0; body size 3 bytes.
#line 1 "ENTRY_102051d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102051d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102051e0; body size 3 bytes.
#line 1 "ENTRY_102051e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102051e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102051f0; body size 3 bytes.
#line 1 "ENTRY_102051f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102051f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205200; body size 3 bytes.
#line 1 "ENTRY_10205200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205210; body size 3 bytes.
#line 1 "ENTRY_10205210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205210(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205220; body size 3 bytes.
#line 1 "ENTRY_10205220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205220(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205230; body size 3 bytes.
#line 1 "ENTRY_10205230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205240; body size 3 bytes.
#line 1 "ENTRY_10205240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205250; body size 3 bytes.
#line 1 "ENTRY_10205250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205260; body size 3 bytes.
#line 1 "ENTRY_10205260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205260(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205270; body size 3 bytes.
#line 1 "ENTRY_10205270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205270(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205280; body size 3 bytes.
#line 1 "ENTRY_10205280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205280(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205290; body size 3 bytes.
#line 1 "ENTRY_10205290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205290(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102052a0; body size 3 bytes.
#line 1 "ENTRY_102052a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102052a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102052b0; body size 3 bytes.
#line 1 "ENTRY_102052b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102052b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102052c0; body size 3 bytes.
#line 1 "ENTRY_102052c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102052c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102052d0; body size 3 bytes.
#line 1 "ENTRY_102052d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102052d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102052e0; body size 3 bytes.
#line 1 "ENTRY_102052e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102052e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102052f0; body size 3 bytes.
#line 1 "ENTRY_102052f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102052f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205300; body size 3 bytes.
#line 1 "ENTRY_10205300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205300(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205310; body size 3 bytes.
#line 1 "ENTRY_10205310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10205310(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10205320; body size 6 bytes.
#line 1 "ENTRY_10205320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10205320(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10205330; body size 6 bytes.
#line 1 "ENTRY_10205330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10205330(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10205340; body size 16 bytes.
#line 1 "ENTRY_10205340"

__declspec(naked) void FUN_10205340(void)

{
  __asm push dword ptr [esp + 8]
  __asm mov ecx, dword ptr [esp + 8]
  __asm call LAB_10071b61
  __asm ret 8
}





// Reference entry 10206a00; body size 4 bytes.
#line 1 "ENTRY_10206a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10206a00(int param_1)

{
  return (int)(param_1 + 0x60);
}


// Reference entry 10206a10; body size 70 bytes.
#line 1 "ENTRY_10206a10"

__declspec(naked) void FUN_10206a10(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm lea edx, [esi + 1]
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov al, byte ptr [esi]
  __asm inc esi
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0xf9
  __asm mov edi, dword ptr [esp + 0xc]
  __asm sub esi, edx
  __asm push esi
  __asm push ecx
  __asm push edi
  __asm call dword ptr [LAB_122fca10]
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x14
  __asm mov al, byte ptr [esi + edi]
  __asm cmp al, 0x2e
  __asm _emit 0x74 __asm _emit 0x08
  __asm cmp al, 0x23
  __asm _emit 0x74 __asm _emit 0x04
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x05
  __asm pop edi
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm pop edi
  __asm xor al, al
  __asm pop esi
  __asm ret
}





// Reference entry 10206a70; body size 18 bytes.
#line 1 "ENTRY_10206a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10206a70(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.container.album.musicAlbum");
  return;
}


// Reference entry 10206a90; body size 18 bytes.
#line 1 "ENTRY_10206a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10206a90(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.container.person.musicArtist");
  return;
}


// Reference entry 10206ab0; body size 18 bytes.
#line 1 "ENTRY_10206ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10206ab0(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.container");
  return;
}


// Reference entry 10206ad0; body size 18 bytes.
#line 1 "ENTRY_10206ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10206ad0(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.container.playlistContainer");
  return;
}


// Reference entry 10206af0; body size 18 bytes.
#line 1 "ENTRY_10206af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10206af0(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.container.podcast");
  return;
}


// Reference entry 10206b10; body size 18 bytes.
#line 1 "ENTRY_10206b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10206b10(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.item.audioItem.podcast");
  return;
}


// Reference entry 10206b30; body size 18 bytes.
#line 1 "ENTRY_10206b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10206b30(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.item.audioItem.audioBroadcast");
  return;
}


// Reference entry 10206b50; body size 18 bytes.
#line 1 "ENTRY_10206b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10206b50(undefined4 param_1)

{
  thunk_FUN_110a5ba0(param_1,"object.item.audioItem.musicTrack");
  return;
}


// Reference entry 10206b70; body size 7 bytes.
#line 1 "ENTRY_10206b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206b70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1e8));
}


// Reference entry 10206b80; body size 4 bytes.
#line 1 "ENTRY_10206b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10206b80(int param_1)

{
  return (int)(param_1 + 0x10);
}


// Reference entry 10206b90; body size 31 bytes.
#line 1 "ENTRY_10206b90"

__declspec(naked) void FUN_10206b90(void)

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





// Reference entry 10206be0; body size 30 bytes.
#line 1 "ENTRY_10206be0"

__declspec(naked) void FUN_10206be0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_1006d075
  __asm mov dword ptr [edi], eax
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + esi*4]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10206c10; body size 49 bytes.
#line 1 "ENTRY_10206c10"

__declspec(naked) void FUN_10206c10(void)

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





// Reference entry 10206c50; body size 14 bytes.
#line 1 "ENTRY_10206c50"

__declspec(naked) void FUN_10206c50(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 10206c70; body size 182 bytes.
#line 1 "ENTRY_10206c70"

__declspec(naked) void FUN_10206c70(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm cmp ebx, 0x3fffffff
  __asm ja LAB_10206d21
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov eax, 0x3fffffff
  __asm push ebp
  __asm mov ebp, dword ptr [esi]
  __asm sub ecx, ebp
  __asm sar ecx, 2
  __asm mov edx, ecx
  __asm _emit 0xd1 __asm _emit 0xea
  __asm sub eax, edx
  __asm push edi
  __asm cmp ecx, eax
  __asm _emit 0x76 __asm _emit 0x07
  __asm mov edi, 0x3fffffff
  __asm _emit 0xeb __asm _emit 0x08
  __asm lea edi, [edx + ecx]
  __asm cmp edi, ebx
  __asm cmovb edi, ebx
  __asm test ebp, ebp
  __asm _emit 0x74 __asm _emit 0x4f
  __asm push esi
  __asm push dword ptr [esi + 4]
  __asm push ebp
  __asm call LAB_10075365
  __asm mov ecx, dword ptr [esi + 8]
  __asm add esp, 0xc
  __asm mov eax, dword ptr [esi]
  __asm sub ecx, eax
  __asm and ecx, 0xfffffffc
  __asm cmp ecx, 0x1000
  __asm _emit 0x72 __asm _emit 0x12
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm _emit 0x77 __asm _emit 0x3a
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm add esp, 8
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push edi
  __asm mov ecx, esi
  __asm call LAB_1006d075
  __asm mov dword ptr [esi], eax
  __asm mov dword ptr [esi + 4], eax
  __asm lea eax, [eax + edi*4]
  __asm pop edi
  __asm pop ebp
  __asm mov dword ptr [esi + 8], eax
  __asm pop esi
  __asm pop ebx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm call LAB_1003c51a
}





// Reference entry 10206d60; body size 21 bytes.
#line 1 "ENTRY_10206d60"

__declspec(naked) void FUN_10206d60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push dword ptr [esp + 4]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_10005614
  __asm ret 8
}





// Reference entry 10206da0; body size 3 bytes.
#line 1 "ENTRY_10206da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206db0; body size 3 bytes.
#line 1 "ENTRY_10206db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206dc0; body size 3 bytes.
#line 1 "ENTRY_10206dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206dd0; body size 3 bytes.
#line 1 "ENTRY_10206dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206de0; body size 3 bytes.
#line 1 "ENTRY_10206de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206df0; body size 3 bytes.
#line 1 "ENTRY_10206df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206e00; body size 3 bytes.
#line 1 "ENTRY_10206e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206e10; body size 3 bytes.
#line 1 "ENTRY_10206e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206e20; body size 3 bytes.
#line 1 "ENTRY_10206e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206e30; body size 3 bytes.
#line 1 "ENTRY_10206e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206e40; body size 3 bytes.
#line 1 "ENTRY_10206e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10206e50; body size 3 bytes.
#line 1 "ENTRY_10206e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10206e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102070f0; body size 79 bytes.
#line 1 "ENTRY_102070f0"

__declspec(naked) void FUN_102070f0(void)

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





// Reference entry 10207160; body size 11 bytes.
#line 1 "ENTRY_10207160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10207160(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10207170; body size 6 bytes.
#line 1 "ENTRY_10207170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10207170(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10207180; body size 83 bytes.
#line 1 "ENTRY_10207180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10207180(int *param_2)
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


// Reference entry 102071f0; body size 33 bytes.
#line 1 "ENTRY_102071f0"

__declspec(naked) void FUN_102071f0(void)

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





// Reference entry 102072b0; body size 10 bytes.
#line 1 "ENTRY_102072b0"

__declspec(naked) void FUN_102072b0(void)

{
  __asm push offset LAB_11884d84
  __asm call LAB_1148a060
}





// Reference entry 102072f0; body size 11 bytes.
#line 1 "ENTRY_102072f0"

__declspec(naked) void FUN_102072f0(void)

{
  __asm add ecx, 0xa988
  __asm jmp LAB_1007fff4
}







// Reference entry 10207300; body size 11 bytes.
#line 1 "ENTRY_10207300"

__declspec(naked) void FUN_10207300(void)

{
  __asm add ecx, 0xc108
  __asm jmp LAB_1002faea
}







// Reference entry 10207a70; body size 4 bytes.
#line 1 "ENTRY_10207a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10207a70(int param_1)

{
  return (int)(param_1 + 0x24);
}


// Reference entry 10207a80; body size 4 bytes.
#line 1 "ENTRY_10207a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10207a80(int param_1)

{
  return (int)(param_1 + 0x28);
}


// Reference entry 10207a90; body size 90 bytes.
#line 1 "ENTRY_10207a90"

__declspec(naked) void FUN_10207a90(void)

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





// Reference entry 10207c80; body size 4 bytes.
#line 1 "ENTRY_10207c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10207c80(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10207c90; body size 30 bytes.
#line 1 "ENTRY_10207c90"

__declspec(naked) void FUN_10207c90(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov edx, dword ptr [ecx]
  __asm sub eax, edx
  __asm mov ecx, dword ptr [esp + 4]
  __asm sar eax, 3
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x06
  __asm lea eax, [edx + ecx*8]
  __asm ret 4
  __asm call LAB_100581bb
  __asm _emit 0xcc
}





// Reference entry 10207cc0; body size 4 bytes.
#line 1 "ENTRY_10207cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10207cc0(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10208910; body size 8 bytes.
#line 1 "ENTRY_10208910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10208910(uint *param_1)

{
  return (bool)((*param_1 >> 2) & 1);
}


// Reference entry 10208cb0; body size 11 bytes.
#line 1 "ENTRY_10208cb0"

__declspec(naked) void FUN_10208cb0(void)

{
  __asm add ecx, 0xc4
  __asm jmp LAB_1005ba00
}







// Reference entry 10208cc0; body size 9 bytes.
#line 1 "ENTRY_10208cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10208cc0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10209fc0; body size 4 bytes.
#line 1 "ENTRY_10209fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10209fc0(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10209fd0; body size 57 bytes.
#line 1 "ENTRY_10209fd0"

__declspec(naked) void FUN_10209fd0(void)

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





// Reference entry 1020a020; body size 60 bytes.
#line 1 "ENTRY_1020a020"

__declspec(naked) void FUN_1020a020(void)

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





// Reference entry 1020a0c0; body size 37 bytes.
#line 1 "ENTRY_1020a0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1020a0c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uStack_4;
  
  uStack_4 = (undefined4)(0);
  thunk_FUN_1145d8e0(param_1,param_2,param_3,&uStack_4);
  return (undefined4)(uStack_4);
}


// Reference entry 1020a0f0; body size 4 bytes.
#line 1 "ENTRY_1020a0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1020a0f0(int param_1)

{
  return (int)(param_1 + 0x40);
}


// Reference entry 1020a100; body size 16 bytes.
#line 1 "ENTRY_1020a100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a100(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a120; body size 16 bytes.
#line 1 "ENTRY_1020a120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a120(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a140; body size 16 bytes.
#line 1 "ENTRY_1020a140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a140(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a160; body size 16 bytes.
#line 1 "ENTRY_1020a160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a160(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a180; body size 16 bytes.
#line 1 "ENTRY_1020a180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a180(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a1a0; body size 16 bytes.
#line 1 "ENTRY_1020a1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a1a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a1c0; body size 9 bytes.
#line 1 "ENTRY_1020a1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a1c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a1d0; body size 9 bytes.
#line 1 "ENTRY_1020a1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a1d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a1e0; body size 9 bytes.
#line 1 "ENTRY_1020a1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a1e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a1f0; body size 9 bytes.
#line 1 "ENTRY_1020a1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a1f0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a200; body size 9 bytes.
#line 1 "ENTRY_1020a200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a200(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a210; body size 9 bytes.
#line 1 "ENTRY_1020a210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a210(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a220; body size 9 bytes.
#line 1 "ENTRY_1020a220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a220(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a230; body size 9 bytes.
#line 1 "ENTRY_1020a230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a230(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a240; body size 9 bytes.
#line 1 "ENTRY_1020a240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a240(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a250; body size 9 bytes.
#line 1 "ENTRY_1020a250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a250(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1020a370; body size 4 bytes.
#line 1 "ENTRY_1020a370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020a370(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x58));
}


// Reference entry 1020a430; body size 11 bytes.
#line 1 "ENTRY_1020a430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1020a430(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1020a580; body size 37 bytes.
#line 1 "ENTRY_1020a580"

__declspec(naked) void FUN_1020a580(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880164
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013746
  __asm mov byte ptr [esi + 0x41], 0
  __asm pop esi
  __asm ret 4
}





// Reference entry 1020a610; body size 4 bytes.
#line 1 "ENTRY_1020a610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1020a610(int param_1)

{
  return (int)(param_1 + 0x30);
}


// Reference entry 1020d0f0; body size 4 bytes.
#line 1 "ENTRY_1020d0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020d0f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 1020d230; body size 4 bytes.
#line 1 "ENTRY_1020d230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1020d230(int param_1)

{
  return (int)(param_1 + 0x7c);
}


// Reference entry 1020d450; body size 4 bytes.
#line 1 "ENTRY_1020d450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020d450(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 1020db00; body size 76 bytes.
#line 1 "ENTRY_1020db00"

__declspec(naked) void FUN_1020db00(void)

{
  __asm mov eax, dword ptr [ecx + 0x18]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [ecx + 0x14]
  __asm sub eax, edi
  __asm sar eax, 3
  __asm cmp eax, ebx
  __asm _emit 0x76 __asm _emit 0x31
  __asm mov eax, dword ptr [edi + ebx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm mov cl, byte ptr [edi + ebx*8 + 4]
  __asm mov eax, esi
  __asm mov byte ptr [esi + 4], cl
  __asm pop esi
  __asm pop edi
  __asm pop ebx
  __asm ret 8
  __asm call LAB_100581bb
  __asm _emit 0xcc
}





// Reference entry 1020db60; body size 10 bytes.
#line 1 "ENTRY_1020db60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1020db60(int param_1)

{
  return (int)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 3);
}


// Reference entry 1020dc20; body size 4 bytes.
#line 1 "ENTRY_1020dc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020dc20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x54));
}


// Reference entry 1020dc30; body size 7 bytes.
#line 1 "ENTRY_1020dc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1020dc30(int param_1)

{
  return (int)(param_1 + 0xb0);
}


// Reference entry 1020f940; body size 76 bytes.
#line 1 "ENTRY_1020f940"

__declspec(naked) void FUN_1020f940(void)

{
  __asm mov eax, dword ptr [ecx + 0x24]
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [ecx + 0x20]
  __asm sub eax, edi
  __asm sar eax, 3
  __asm cmp eax, ebx
  __asm _emit 0x76 __asm _emit 0x31
  __asm mov eax, dword ptr [edi + ebx*8]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x14
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm _emit 0x7d __asm _emit 0x09
  __asm push eax
  __asm call LAB_10066e8c
  __asm add esp, 4
  __asm mov cl, byte ptr [edi + ebx*8 + 4]
  __asm mov eax, esi
  __asm mov byte ptr [esi + 4], cl
  __asm pop esi
  __asm pop edi
  __asm pop ebx
  __asm ret 8
  __asm call LAB_100581bb
  __asm _emit 0xcc
}





// Reference entry 1020f9a0; body size 10 bytes.
#line 1 "ENTRY_1020f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1020f9a0(int param_1)

{
  return (int)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 3);
}


// Reference entry 1020f9b0; body size 4 bytes.
#line 1 "ENTRY_1020f9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1020f9b0(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 1020fe20; body size 4 bytes.
#line 1 "ENTRY_1020fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1020fe20(int param_1)

{
  return (int)(param_1 + 0x38);
}


// Reference entry 1020fe30; body size 4 bytes.
#line 1 "ENTRY_1020fe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1020fe30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10210400; body size 7 bytes.
#line 1 "ENTRY_10210400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10210400(int param_1)

{
  return (int)(param_1 + 0xd7d4);
}


// Reference entry 10210b10; body size 7 bytes.
#line 1 "ENTRY_10210b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10210b10(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1994));
}


// Reference entry 10217310; body size 12 bytes.
#line 1 "ENTRY_10217310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10217310(int param_1)

{
  return (undefined4)((&DAT_122f5650)[param_1]);
}


// Reference entry 10217620; body size 7 bytes.
#line 1 "ENTRY_10217620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10217620(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d0));
}


// Reference entry 10217630; body size 4 bytes.
#line 1 "ENTRY_10217630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10217630(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10217640; body size 39 bytes.
#line 1 "ENTRY_10217640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10217640(int *param_2)
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


// Reference entry 10217c80; body size 52 bytes.
#line 1 "ENTRY_10217c80"

__declspec(naked) void FUN_10217c80(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm cmp byte ptr [esi + 0xc5], 0
  __asm _emit 0x74 __asm _emit 0x24
  __asm mov eax, dword ptr [esi]
  __asm call dword ptr [eax + 0x94]
  __asm push 0
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880164
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013746
  __asm mov byte ptr [esi + 0x41], 0
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 10217e10; body size 31 bytes.
#line 1 "ENTRY_10217e10"

__declspec(naked) void FUN_10217e10(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0
  __asm mov esi, ecx
  __asm push esi
  __asm push ecx
  __asm mov ecx, esp
  __asm push offset LAB_11880134
  __asm call LAB_1005273e
  __asm lea ecx, [esi + 8]
  __asm call LAB_10013543
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 10217e40; body size 16 bytes.
#line 1 "ENTRY_10217e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10217e40(uint param_2)
{
  uint *param_1 = (uint *)this;
  return (bool)((*param_1 & param_2) == param_2);
}


// Reference entry 102187f0; body size 25 bytes.
#line 1 "ENTRY_102187f0"

__declspec(naked) void FUN_102187f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x58]
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





// Reference entry 10219070; body size 4 bytes.
#line 1 "ENTRY_10219070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10219070(int param_1)

{
  return (int)(param_1 + 100);
}


// Reference entry 10219390; body size 6 bytes.
#line 1 "ENTRY_10219390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10219390(void)

{
  return (char *)("SCIActionOnGroupDescriptor");
}


// Reference entry 102193a0; body size 6 bytes.
#line 1 "ENTRY_102193a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102193a0(void)

{
  return (char *)("SCIAddToQueueAtNumberDescriptor");
}


// Reference entry 102193b0; body size 6 bytes.
#line 1 "ENTRY_102193b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102193b0(void)

{
  return (char *)("SCIBrowseDataSource");
}


// Reference entry 102193c0; body size 6 bytes.
#line 1 "ENTRY_102193c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102193c0(void)

{
  return (char *)("SCIBrowseGroupsInfo");
}


// Reference entry 102193d0; body size 6 bytes.
#line 1 "ENTRY_102193d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102193d0(void)

{
  return (char *)("SCIBrowseItem");
}


// Reference entry 102193e0; body size 6 bytes.
#line 1 "ENTRY_102193e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102193e0(void)

{
  return (char *)("SCIBrowseMetadata");
}


// Reference entry 102193f0; body size 6 bytes.
#line 1 "ENTRY_102193f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102193f0(void)

{
  return (char *)("SCIInnerActionFactory");
}


// Reference entry 10219400; body size 6 bytes.
#line 1 "ENTRY_10219400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10219400(void)

{
  return (char *)("SCINowPlayingSource");
}


// Reference entry 10219410; body size 6 bytes.
#line 1 "ENTRY_10219410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10219410(void)

{
  return (char *)("SCINowPlayingTransport");
}


// Reference entry 10219420; body size 6 bytes.
#line 1 "ENTRY_10219420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10219420(void)

{
  return (char *)("SCIPowerscrollDataSource");
}


// Reference entry 10219430; body size 6 bytes.
#line 1 "ENTRY_10219430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10219430(void)

{
  return (char *)("SCISelectableItem");
}


// Reference entry 10219440; body size 6 bytes.
#line 1 "ENTRY_10219440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10219440(void)

{
  return (char *)("SCITooltip");
}


// Reference entry 10219a50; body size 35 bytes.
#line 1 "ENTRY_10219a50"

__declspec(naked) void FUN_10219a50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x18
  __asm push 9
  __asm push offset LAB_11885b98
  __asm push eax
  __asm call dword ptr [LAB_122fca10]
  __asm add esp, 0xc
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x03
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}





// Reference entry 10219a80; body size 18 bytes.
#line 1 "ENTRY_10219a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10219a80(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 8,"object.container.person.musicArtist");
  return;
}


// Reference entry 10219aa0; body size 18 bytes.
#line 1 "ENTRY_10219aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10219aa0(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 8,"object.item.audioItem.audioBook");
  return;
}


// Reference entry 10219bf0; body size 4 bytes.
#line 1 "ENTRY_10219bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10219bf0(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x54));
}


// Reference entry 10219c10; body size 18 bytes.
#line 1 "ENTRY_10219c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10219c10(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 8,"object.container");
  return;
}


// Reference entry 10219cb0; body size 6 bytes.
#line 1 "ENTRY_10219cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

byte __fastcall FUN_10219cb0(int param_1)

{
  return (byte)(*(byte *)(param_1 + 0x6e) & 1);
}


// Reference entry 10219fb0; body size 18 bytes.
#line 1 "ENTRY_10219fb0"

__declspec(naked) void FUN_10219fb0(void)

{
  __asm mov eax, dword ptr [ecx + 0xc]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x08
  __asm cmp byte ptr [eax], 0
  __asm _emit 0x74 __asm _emit 0x03
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}





// Reference entry 10219ff0; body size 14 bytes.
#line 1 "ENTRY_10219ff0"

__declspec(naked) void FUN_10219ff0(void)

{
  __asm push offset LAB_118823e4
  __asm add ecx, 0x18
  __asm call LAB_10062008
  __asm ret
}





// Reference entry 1021a9a0; body size 18 bytes.
#line 1 "ENTRY_1021a9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021a9a0(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 8,"object.container.playlistContainer");
  return;
}


// Reference entry 1021a9c0; body size 18 bytes.
#line 1 "ENTRY_1021a9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021a9c0(int param_1)

{
  thunk_FUN_110a5ba0(param_1 + 8,"object.item.audioItem.podcast");
  return;
}


// Reference entry 1021add0; body size 18 bytes.
#line 1 "ENTRY_1021add0"

__declspec(naked) void FUN_1021add0(void)

{
  __asm movzx eax, word ptr [ecx + 4]
  __asm and eax, 0x7f
  __asm dec eax
  __asm and eax, 0xfffffffe
  __asm cmp eax, 6
  __asm sete al
  __asm ret
}





// Reference entry 1021b190; body size 4 bytes.
#line 1 "ENTRY_1021b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_1021b190(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 1021b260; body size 12 bytes.
#line 1 "ENTRY_1021b260"

__declspec(naked) void FUN_1021b260(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x54]
  __asm cmp eax, 1
  __asm sete al
  __asm ret
}





// Reference entry 1021b270; body size 7 bytes.
#line 1 "ENTRY_1021b270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1021b270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1021b400; body size 6 bytes.
#line 1 "ENTRY_1021b400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1021b400(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 1021b410; body size 6 bytes.
#line 1 "ENTRY_1021b410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1021b410(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 1021b420; body size 6 bytes.
#line 1 "ENTRY_1021b420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1021b420(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 1021b430; body size 6 bytes.
#line 1 "ENTRY_1021b430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1021b430(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 1021b440; body size 4 bytes.
#line 1 "ENTRY_1021b440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021b440(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 1021b450; body size 3 bytes.
#line 1 "ENTRY_1021b450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021b450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1021b460; body size 4 bytes.
#line 1 "ENTRY_1021b460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1021b460(int param_1)

{
  return (int)(param_1 + 0x38);
}


// Reference entry 1021b480; body size 10 bytes.
#line 1 "ENTRY_1021b480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1021b480(int param_1)

{
  return (int)(*(int *)(param_1 + 100) - *(int *)(param_1 + 0x60) >> 2);
}


// Reference entry 1021b490; body size 4 bytes.
#line 1 "ENTRY_1021b490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1021b490(int param_1)

{
  return (int)(param_1 + 0xc);
}


// Reference entry 1021e820; body size 4 bytes.
#line 1 "ENTRY_1021e820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1021e820(int param_1)

{
  return (int)(param_1 + 0x4c);
}


// Reference entry 1021e830; body size 4 bytes.
#line 1 "ENTRY_1021e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1021e830(int param_1)

{
  return (int)(param_1 + 0x18);
}


// Reference entry 1021e840; body size 4 bytes.
#line 1 "ENTRY_1021e840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1021e840(int param_1)

{
  return (int)(param_1 + 0x44);
}


// Reference entry 1021e850; body size 5 bytes.
#line 1 "ENTRY_1021e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1021e850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1021ef10; body size 4 bytes.
#line 1 "ENTRY_1021ef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1021ef10(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 1021ef20; body size 3 bytes.
#line 1 "ENTRY_1021ef20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021ef20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021ef30; body size 3 bytes.
#line 1 "ENTRY_1021ef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021ef30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021ef40; body size 3 bytes.
#line 1 "ENTRY_1021ef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021ef40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021ef50; body size 3 bytes.
#line 1 "ENTRY_1021ef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021ef50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021ef60; body size 3 bytes.
#line 1 "ENTRY_1021ef60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021ef60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021ef70; body size 3 bytes.
#line 1 "ENTRY_1021ef70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021ef70(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021ef80; body size 3 bytes.
#line 1 "ENTRY_1021ef80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021ef80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021ef90; body size 3 bytes.
#line 1 "ENTRY_1021ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021ef90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021efa0; body size 3 bytes.
#line 1 "ENTRY_1021efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021efa0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021efb0; body size 3 bytes.
#line 1 "ENTRY_1021efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021efb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021efc0; body size 3 bytes.
#line 1 "ENTRY_1021efc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021efc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021efd0; body size 3 bytes.
#line 1 "ENTRY_1021efd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021efd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021efe0; body size 3 bytes.
#line 1 "ENTRY_1021efe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021efe0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021eff0; body size 3 bytes.
#line 1 "ENTRY_1021eff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021eff0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021f000; body size 3 bytes.
#line 1 "ENTRY_1021f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1021f000(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1021f690; body size 7 bytes.
#line 1 "ENTRY_1021f690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1021f690(int param_1)

{
  return (int)(param_1 + 0x130);
}


// Reference entry 1021fb20; body size 28 bytes.
#line 1 "ENTRY_1021fb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fb20(undefined4 *param_1)

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


// Reference entry 1021fb50; body size 28 bytes.
#line 1 "ENTRY_1021fb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fb50(undefined4 *param_1)

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


// Reference entry 1021fb80; body size 28 bytes.
#line 1 "ENTRY_1021fb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fb80(undefined4 *param_1)

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


// Reference entry 1021fbb0; body size 28 bytes.
#line 1 "ENTRY_1021fbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fbb0(undefined4 *param_1)

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


// Reference entry 1021fbe0; body size 28 bytes.
#line 1 "ENTRY_1021fbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fbe0(undefined4 *param_1)

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


// Reference entry 1021fc10; body size 28 bytes.
#line 1 "ENTRY_1021fc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fc10(undefined4 *param_1)

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


// Reference entry 1021fc40; body size 28 bytes.
#line 1 "ENTRY_1021fc40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fc40(undefined4 *param_1)

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


// Reference entry 1021fc70; body size 28 bytes.
#line 1 "ENTRY_1021fc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fc70(undefined4 *param_1)

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


// Reference entry 1021fca0; body size 28 bytes.
#line 1 "ENTRY_1021fca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fca0(undefined4 *param_1)

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


// Reference entry 1021fcd0; body size 28 bytes.
#line 1 "ENTRY_1021fcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fcd0(undefined4 *param_1)

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


// Reference entry 1021fd00; body size 28 bytes.
#line 1 "ENTRY_1021fd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fd00(undefined4 *param_1)

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


// Reference entry 1021fd30; body size 28 bytes.
#line 1 "ENTRY_1021fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fd30(undefined4 *param_1)

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


// Reference entry 1021fd60; body size 28 bytes.
#line 1 "ENTRY_1021fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fd60(undefined4 *param_1)

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


// Reference entry 1021fd90; body size 28 bytes.
#line 1 "ENTRY_1021fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fd90(undefined4 *param_1)

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


// Reference entry 1021fdc0; body size 28 bytes.
#line 1 "ENTRY_1021fdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fdc0(undefined4 *param_1)

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


// Reference entry 1021fdf0; body size 28 bytes.
#line 1 "ENTRY_1021fdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fdf0(undefined4 *param_1)

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


// Reference entry 1021fe20; body size 28 bytes.
#line 1 "ENTRY_1021fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fe20(undefined4 *param_1)

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


// Reference entry 1021fe50; body size 28 bytes.
#line 1 "ENTRY_1021fe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fe50(undefined4 *param_1)

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


// Reference entry 1021fe80; body size 28 bytes.
#line 1 "ENTRY_1021fe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fe80(undefined4 *param_1)

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


// Reference entry 1021feb0; body size 28 bytes.
#line 1 "ENTRY_1021feb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021feb0(undefined4 *param_1)

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


// Reference entry 1021fee0; body size 28 bytes.
#line 1 "ENTRY_1021fee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021fee0(undefined4 *param_1)

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


// Reference entry 1021ff10; body size 28 bytes.
#line 1 "ENTRY_1021ff10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021ff10(undefined4 *param_1)

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


// Reference entry 1021ff40; body size 28 bytes.
#line 1 "ENTRY_1021ff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021ff40(undefined4 *param_1)

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


// Reference entry 1021ff70; body size 28 bytes.
#line 1 "ENTRY_1021ff70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021ff70(undefined4 *param_1)

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


// Reference entry 1021ffa0; body size 28 bytes.
#line 1 "ENTRY_1021ffa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021ffa0(undefined4 *param_1)

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


// Reference entry 1021ffd0; body size 28 bytes.
#line 1 "ENTRY_1021ffd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1021ffd0(undefined4 *param_1)

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


// Reference entry 10220000; body size 28 bytes.
#line 1 "ENTRY_10220000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10220000(undefined4 *param_1)

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


// Reference entry 10220030; body size 28 bytes.
#line 1 "ENTRY_10220030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10220030(undefined4 *param_1)

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


// Reference entry 10220060; body size 20 bytes.
#line 1 "ENTRY_10220060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10220060(int *param_1)

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


// Reference entry 10220080; body size 20 bytes.
#line 1 "ENTRY_10220080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10220080(int *param_1)

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


// Reference entry 102204d0; body size 4 bytes.
#line 1 "ENTRY_102204d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102204d0(int param_1)

{
  return (int)(param_1 + 0x48);
}


// Reference entry 10220610; body size 4 bytes.
#line 1 "ENTRY_10220610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10220610(int param_1)

{
  return (int)(param_1 + 0x1c);
}


// Reference entry 10220620; body size 4 bytes.
#line 1 "ENTRY_10220620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10220620(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x5c));
}


// Reference entry 10220660; body size 5 bytes.
#line 1 "ENTRY_10220660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10220660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10220680; body size 28 bytes.
#line 1 "ENTRY_10220680"

__declspec(naked) void FUN_10220680(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm add ecx, 0x60
  __asm cmp ecx, eax
  __asm _emit 0x74 __asm _emit 0x0e
  __asm push dword ptr [esp + 4]
  __asm push dword ptr [eax + 4]
  __asm push dword ptr [eax]
  __asm call LAB_10005614
  __asm ret 4
}





// Reference entry 102206b0; body size 148 bytes.
#line 1 "ENTRY_102206b0"

__declspec(naked) void FUN_102206b0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm mov ebx, ecx
  __asm mov ecx, dword ptr [ebx + 4]
  __asm push esi
  __asm mov esi, ebp
  __asm mov dword ptr [esp + 0xc], ebx
  __asm neg esi
  __asm lea eax, [ebp + 4]
  __asm push edi
  __asm sbb esi, esi
  __asm lea edi, [ebx + 4]
  __asm and esi, eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x3a
  __asm cmp dword ptr [ebx + 8], 0
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 0x10]
  __asm mov ebx, dword ptr [edi]
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x18
  __asm lea eax, [ebx + 4]
  __asm push eax
  __asm call LAB_1001718e
  __asm add esp, 4
  __asm test eax, eax
  __asm _emit 0x75 __asm _emit 0x08
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm push 1
  __asm call dword ptr [eax]
  __asm mov ebx, dword ptr [esp + 0x10]
  __asm _emit 0xc7 __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, edi
  __asm mov dword ptr [eax], esi
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x24
  __asm lea eax, [esi + 4]
  __asm push eax
  __asm call LAB_10066e8c
  __asm mov esi, dword ptr [edi]
  __asm add esp, 4
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x12
  __asm push dword ptr [esp + 0x20]
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm push dword ptr [esp + 0x20]
  __asm call dword ptr [edx + 4]
  __asm mov dword ptr [ebx + 8], eax
  __asm pop edi
  __asm pop esi
  __asm mov eax, ebp
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 10220790; body size 24 bytes.
#line 1 "ENTRY_10220790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10220790(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0((int)(param_1),(int)(param_2),(int)(param_3));
  return (undefined4)(param_1);
}


// Reference entry 10220910; body size 8 bytes.
#line 1 "ENTRY_10220910"

__declspec(naked) void FUN_10220910(void)

{
  __asm add ecx, 4
  __asm jmp LAB_1007dc72
}







// Reference entry 10220990; body size 8 bytes.
#line 1 "ENTRY_10220990"

__declspec(naked) void FUN_10220990(void)

{
  __asm add ecx, 0x7c
  __asm jmp LAB_100255ea
}







// Reference entry 10220ab0; body size 8 bytes.
#line 1 "ENTRY_10220ab0"

__declspec(naked) void FUN_10220ab0(void)

{
  __asm add ecx, 0x40
  __asm jmp LAB_1007dc72
}







// Reference entry 10220af0; body size 8 bytes.
#line 1 "ENTRY_10220af0"

__declspec(naked) void FUN_10220af0(void)

{
  __asm add ecx, 0x18
  __asm jmp LAB_1007dc72
}







// Reference entry 10220cc0; body size 8 bytes.
#line 1 "ENTRY_10220cc0"

__declspec(naked) void FUN_10220cc0(void)

{
  __asm add ecx, 0x14
  __asm jmp LAB_1007dc72
}







// Reference entry 10220d30; body size 26 bytes.
#line 1 "ENTRY_10220d30"

__declspec(naked) void FUN_10220d30(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm lea ecx, [esi + 0x10]
  __asm call LAB_1007dc72
  __asm mov ecx, esi
  __asm call LAB_1009543f
  __asm pop esi
  __asm ret 4
}





// Reference entry 10221390; body size 9 bytes.
#line 1 "ENTRY_10221390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10221390(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 102213a0; body size 9 bytes.
#line 1 "ENTRY_102213a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102213a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 102213b0; body size 4 bytes.
#line 1 "ENTRY_102213b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102213b0(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 10221670; body size 25 bytes.
#line 1 "ENTRY_10221670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10221670(int *param_2,undefined4 param_3)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_5_2*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)),(int)(param_3));
  }
  return;
}


// Reference entry 102216b0; body size 21 bytes.
#line 1 "ENTRY_102216b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_102216b0(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_5_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 102216d0; body size 4 bytes.
#line 1 "ENTRY_102216d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102216d0(int param_1)

{
  return (int)(param_1 + 0x34);
}


// Reference entry 102217d0; body size 4 bytes.
#line 1 "ENTRY_102217d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102217d0(int param_1)

{
  return (int)(param_1 + 0x3c);
}


// Reference entry 102217e0; body size 3 bytes.
#line 1 "ENTRY_102217e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102217e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102217f0; body size 4 bytes.
#line 1 "ENTRY_102217f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102217f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10221a50; body size 21 bytes.
#line 1 "ENTRY_10221a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10221a50(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_6_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 10221a70; body size 21 bytes.
#line 1 "ENTRY_10221a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10221a70(int *param_2)
{
  int param_1 = (int )this;
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_6_1*)(param_2))->v((int)(*(undefined4 *)(param_1 + 4)));
  }
  return;
}


// Reference entry 10221a90; body size 74 bytes.
#line 1 "ENTRY_10221a90"

__declspec(naked) void FUN_10221a90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm push edi
  __asm lea esi, [ecx + 0xd3]
  __asm mov edx, dword ptr [eax]
  __asm lea edi, [ecx + 0xd2]
  __asm test edx, edx
  __asm _emit 0x75 __asm _emit 0x05
  __asm mov edx, offset LAB_1186d2ee
  __asm xor eax, eax
  __asm cmp byte ptr [edx], al
  __asm _emit 0x74 __asm _emit 0x0d
  __asm push 0xa
  __asm push eax
  __asm push edx
  __asm call dword ptr [LAB_122fc6c4]
  __asm add esp, 0xc
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov cl, al
  __asm and cl, 1
  __asm mov byte ptr [edi], cl
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x06 __asm _emit 0xd1 __asm _emit 0xe8
  __asm and al, 1
  __asm mov byte ptr [esi], al
  __asm pop edi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10221b50; body size 4 bytes.
#line 1 "ENTRY_10221b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10221b50(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10221b80; body size 6 bytes.
#line 1 "ENTRY_10221b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10221b80(void)

{
  return (char *)("SCIData");
}


// Reference entry 10221b90; body size 27 bytes.
#line 1 "ENTRY_10221b90"

__declspec(naked) void FUN_10221b90(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_118875c8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10221e40; body size 47 bytes.
#line 1 "ENTRY_10221e40"

__declspec(naked) void FUN_10221e40(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_118875c8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11887644
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 10221e80; body size 9 bytes.
#line 1 "ENTRY_10221e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10221e80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIData);
  return (undefined4 *)(param_1);
}


// Reference entry 10221f30; body size 7 bytes.
#line 1 "ENTRY_10221f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10221f30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10221f40; body size 24 bytes.
#line 1 "ENTRY_10221f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10221f40(int param_2)
{
  int *param_1 = (int *)this;
  ((SCVtbl_9_2*)(param_1))->v((int)(*(undefined4 *)(param_2 + 8)),(int)(*(undefined4 *)(param_2 + 0xc)));
  return (int *)(param_1);
}


// Reference entry 10222430; body size 6 bytes.
#line 1 "ENTRY_10222430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10222430(void)

{
  return (char *)("SCIData");
}


// Reference entry 10222750; body size 6 bytes.
#line 1 "ENTRY_10222750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10222750(void)

{
  return (undefined4)(0x16);
}


// Reference entry 10222760; body size 16 bytes.
#line 1 "ENTRY_10222760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10222760(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10222780; body size 16 bytes.
#line 1 "ENTRY_10222780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10222780(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102232a0; body size 3 bytes.
#line 1 "ENTRY_102232a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102232a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10223990; body size 28 bytes.
#line 1 "ENTRY_10223990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10223990(undefined4 *param_1)

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


// Reference entry 10223c80; body size 25 bytes.
#line 1 "ENTRY_10223c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10223c80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10223ca0; body size 22 bytes.
#line 1 "ENTRY_10223ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10223ca0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10223cc0; body size 22 bytes.
#line 1 "ENTRY_10223cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10223cc0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10224130; body size 18 bytes.
#line 1 "ENTRY_10224130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10224130(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224150; body size 25 bytes.
#line 1 "ENTRY_10224150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10224150(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224170; body size 25 bytes.
#line 1 "ENTRY_10224170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10224170(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224190; body size 18 bytes.
#line 1 "ENTRY_10224190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10224190(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102241b0; body size 25 bytes.
#line 1 "ENTRY_102241b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102241b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102241d0; body size 25 bytes.
#line 1 "ENTRY_102241d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102241d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102241f0; body size 18 bytes.
#line 1 "ENTRY_102241f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102241f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224210; body size 25 bytes.
#line 1 "ENTRY_10224210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10224210(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224230; body size 25 bytes.
#line 1 "ENTRY_10224230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10224230(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102242e0; body size 40 bytes.
#line 1 "ENTRY_102242e0"

__declspec(naked) void FUN_102242e0(void)

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





// Reference entry 10224320; body size 20 bytes.
#line 1 "ENTRY_10224320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224320(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224340; body size 11 bytes.
#line 1 "ENTRY_10224340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224340(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10224350; body size 11 bytes.
#line 1 "ENTRY_10224350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224350(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10224360; body size 13 bytes.
#line 1 "ENTRY_10224360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224360(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10224370; body size 22 bytes.
#line 1 "ENTRY_10224370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224370(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10224390; body size 22 bytes.
#line 1 "ENTRY_10224390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224390(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 102243b0; body size 5 bytes.
#line 1 "ENTRY_102243b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102243b0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102243c0; body size 5 bytes.
#line 1 "ENTRY_102243c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102243c0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102243d0; body size 5 bytes.
#line 1 "ENTRY_102243d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102243d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102243e0; body size 5 bytes.
#line 1 "ENTRY_102243e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102243e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102243f0; body size 5 bytes.
#line 1 "ENTRY_102243f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102243f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10224400; body size 5 bytes.
#line 1 "ENTRY_10224400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10224400(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10224410; body size 106 bytes.
#line 1 "ENTRY_10224410"

__declspec(naked) void FUN_10224410(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], offset LAB_11889654
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





// Reference entry 102245a0; body size 106 bytes.
#line 1 "ENTRY_102245a0"

__declspec(naked) void FUN_102245a0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], offset LAB_11889678
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





// Reference entry 10224730; body size 11 bytes.
#line 1 "ENTRY_10224730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224730(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10224740; body size 13 bytes.
#line 1 "ENTRY_10224740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224740(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_4);
  return (undefined4 *)(param_1);
}


// Reference entry 10224ac0; body size 26 bytes.
#line 1 "ENTRY_10224ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10224ac0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10224ae0; body size 26 bytes.
#line 1 "ENTRY_10224ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10224ae0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10224b00; body size 26 bytes.
#line 1 "ENTRY_10224b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10224b00(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10224b20; body size 26 bytes.
#line 1 "ENTRY_10224b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10224b20(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10224b40; body size 22 bytes.
#line 1 "ENTRY_10224b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224b40(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10224b60; body size 18 bytes.
#line 1 "ENTRY_10224b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10224b60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224bb0; body size 25 bytes.
#line 1 "ENTRY_10224bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10224bb0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224bd0; body size 25 bytes.
#line 1 "ENTRY_10224bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10224bd0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224bf0; body size 106 bytes.
#line 1 "ENTRY_10224bf0"

__declspec(naked) void FUN_10224bf0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], offset LAB_118895a0
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





// Reference entry 10224d90; body size 42 bytes.
#line 1 "ENTRY_10224d90"

__declspec(naked) void FUN_10224d90(void)

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





// Reference entry 10224dd0; body size 22 bytes.
#line 1 "ENTRY_10224dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10224dd0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10224df0; body size 91 bytes.
#line 1 "ENTRY_10224df0"

__declspec(naked) void FUN_10224df0(void)

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





// Reference entry 10224e70; body size 26 bytes.
#line 1 "ENTRY_10224e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10224e70(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10224e90; body size 26 bytes.
#line 1 "ENTRY_10224e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10224e90(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10224eb0; body size 91 bytes.
#line 1 "ENTRY_10224eb0"

__declspec(naked) void FUN_10224eb0(void)

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





// Reference entry 102251f0; body size 43 bytes.
#line 1 "ENTRY_102251f0"

__declspec(naked) void FUN_102251f0(void)

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





// Reference entry 10225470; body size 35 bytes.
#line 1 "ENTRY_10225470"

__declspec(naked) void FUN_10225470(void)

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





// Reference entry 102254a0; body size 35 bytes.
#line 1 "ENTRY_102254a0"

__declspec(naked) void FUN_102254a0(void)

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





// Reference entry 102254d0; body size 35 bytes.
#line 1 "ENTRY_102254d0"

__declspec(naked) void FUN_102254d0(void)

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





// Reference entry 10225500; body size 35 bytes.
#line 1 "ENTRY_10225500"

__declspec(naked) void FUN_10225500(void)

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





// Reference entry 10225530; body size 35 bytes.
#line 1 "ENTRY_10225530"

__declspec(naked) void FUN_10225530(void)

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





// Reference entry 10225560; body size 35 bytes.
#line 1 "ENTRY_10225560"

__declspec(naked) void FUN_10225560(void)

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





// Reference entry 10225590; body size 78 bytes.
#line 1 "ENTRY_10225590"

__declspec(naked) void FUN_10225590(void)

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





// Reference entry 10225600; body size 78 bytes.
#line 1 "ENTRY_10225600"

__declspec(naked) void FUN_10225600(void)

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





// Reference entry 10225890; body size 78 bytes.
#line 1 "ENTRY_10225890"

__declspec(naked) void FUN_10225890(void)

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





// Reference entry 102259f0; body size 12 bytes.
#line 1 "ENTRY_102259f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_102259f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10225a00; body size 57 bytes.
#line 1 "ENTRY_10225a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10225a00(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10225a50; body size 18 bytes.
#line 1 "ENTRY_10225a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10225a50(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10225a70; body size 3 bytes.
#line 1 "ENTRY_10225a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225a70(void)

{
  return;
}


// Reference entry 10225a80; body size 3 bytes.
#line 1 "ENTRY_10225a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225a80(void)

{
  return;
}


// Reference entry 10225a90; body size 3 bytes.
#line 1 "ENTRY_10225a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225a90(void)

{
  return;
}


// Reference entry 10225aa0; body size 3 bytes.
#line 1 "ENTRY_10225aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225aa0(void)

{
  return;
}


// Reference entry 10225ab0; body size 38 bytes.
#line 1 "ENTRY_10225ab0"

__declspec(naked) void FUN_10225ab0(void)

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





// Reference entry 10225ae0; body size 38 bytes.
#line 1 "ENTRY_10225ae0"

__declspec(naked) void FUN_10225ae0(void)

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





// Reference entry 10225c40; body size 40 bytes.
#line 1 "ENTRY_10225c40"

__declspec(naked) void FUN_10225c40(void)

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





// Reference entry 10225c80; body size 13 bytes.
#line 1 "ENTRY_10225c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225c80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10225c90; body size 13 bytes.
#line 1 "ENTRY_10225c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225c90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10225ca0; body size 13 bytes.
#line 1 "ENTRY_10225ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225ca0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10225cb0; body size 13 bytes.
#line 1 "ENTRY_10225cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225cb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10225cc0; body size 13 bytes.
#line 1 "ENTRY_10225cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225cc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10225cd0; body size 13 bytes.
#line 1 "ENTRY_10225cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225cd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10225ce0; body size 13 bytes.
#line 1 "ENTRY_10225ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225ce0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10225cf0; body size 13 bytes.
#line 1 "ENTRY_10225cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225cf0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10225d00; body size 13 bytes.
#line 1 "ENTRY_10225d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225d00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10225d10; body size 3 bytes.
#line 1 "ENTRY_10225d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225d10(void)

{
  return;
}


// Reference entry 10225d20; body size 3 bytes.
#line 1 "ENTRY_10225d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225d20(void)

{
  return;
}


// Reference entry 10225d30; body size 3 bytes.
#line 1 "ENTRY_10225d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225d30(void)

{
  return;
}


// Reference entry 10225d40; body size 3 bytes.
#line 1 "ENTRY_10225d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225d40(void)

{
  return;
}


// Reference entry 10225d50; body size 3 bytes.
#line 1 "ENTRY_10225d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225d50(void)

{
  return;
}


// Reference entry 10225d60; body size 3 bytes.
#line 1 "ENTRY_10225d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10225d60(void)

{
  return;
}


// Reference entry 10225e10; body size 18 bytes.
#line 1 "ENTRY_10225e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10225e10(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10225e30; body size 18 bytes.
#line 1 "ENTRY_10225e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10225e30(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10225e50; body size 18 bytes.
#line 1 "ENTRY_10225e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10225e50(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10226070; body size 54 bytes.
#line 1 "ENTRY_10226070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10226070(uint param_1,byte *param_2)

{
  return (int)(((((*param_2 ^ param_1) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) *
          0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 102261e0; body size 41 bytes.
#line 1 "ENTRY_102261e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102261e0(undefined4 param_1,undefined4 *param_2)

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


// Reference entry 10226220; body size 15 bytes.
#line 1 "ENTRY_10226220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10226220(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10226240; body size 15 bytes.
#line 1 "ENTRY_10226240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10226240(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10226260; body size 15 bytes.
#line 1 "ENTRY_10226260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10226260(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10226280; body size 62 bytes.
#line 1 "ENTRY_10226280"

__declspec(naked) void FUN_10226280(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, dword ptr [edi + 0x10]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x23
  __asm push ebx
  __asm or ebx, 0xffffffff
  __asm mov eax, ebx
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x15
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x5e __asm _emit 0x08
  __asm dec ebx
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 4]
  __asm pop ebx
  __asm push 0x14
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm ret
}





// Reference entry 10226350; body size 15 bytes.
#line 1 "ENTRY_10226350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10226350(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10226370; body size 7 bytes.
#line 1 "ENTRY_10226370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10226370(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10226380; body size 7 bytes.
#line 1 "ENTRY_10226380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10226380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10226390; body size 7 bytes.
#line 1 "ENTRY_10226390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10226390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102263a0; body size 7 bytes.
#line 1 "ENTRY_102263a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102263a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10226850; body size 55 bytes.
#line 1 "ENTRY_10226850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10226850(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 102268a0; body size 5 bytes.
#line 1 "ENTRY_102268a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102268a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102268b0; body size 5 bytes.
#line 1 "ENTRY_102268b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102268b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102268c0; body size 5 bytes.
#line 1 "ENTRY_102268c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102268c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102268d0; body size 3 bytes.
#line 1 "ENTRY_102268d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102268d0(void)

{
  return;
}


// Reference entry 10226b90; body size 122 bytes.
#line 1 "ENTRY_10226b90"

__declspec(naked) void FUN_10226b90(void)

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
  __asm mov dword ptr [esi], offset LAB_118895a0
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





// Reference entry 10226c30; body size 3 bytes.
#line 1 "ENTRY_10226c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10226c30(void)

{
  return (undefined1)(1);
}


// Reference entry 10226c40; body size 3 bytes.
#line 1 "ENTRY_10226c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 FUN_10226c40(void)

{
  return (undefined1)(1);
}


// Reference entry 10226ce0; body size 12 bytes.
#line 1 "ENTRY_10226ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10226ce0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10227200; body size 7 bytes.
#line 1 "ENTRY_10227200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227200(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10227210; body size 5 bytes.
#line 1 "ENTRY_10227210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227220; body size 5 bytes.
#line 1 "ENTRY_10227220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227230; body size 5 bytes.
#line 1 "ENTRY_10227230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227240; body size 5 bytes.
#line 1 "ENTRY_10227240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227250; body size 5 bytes.
#line 1 "ENTRY_10227250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227260; body size 5 bytes.
#line 1 "ENTRY_10227260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227270; body size 5 bytes.
#line 1 "ENTRY_10227270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227280; body size 5 bytes.
#line 1 "ENTRY_10227280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227290; body size 5 bytes.
#line 1 "ENTRY_10227290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102272a0; body size 5 bytes.
#line 1 "ENTRY_102272a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102272a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227340; body size 5 bytes.
#line 1 "ENTRY_10227340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227350; body size 5 bytes.
#line 1 "ENTRY_10227350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227360; body size 5 bytes.
#line 1 "ENTRY_10227360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227370; body size 5 bytes.
#line 1 "ENTRY_10227370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227380; body size 5 bytes.
#line 1 "ENTRY_10227380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227390; body size 5 bytes.
#line 1 "ENTRY_10227390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102273a0; body size 5 bytes.
#line 1 "ENTRY_102273a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102273a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102273b0; body size 5 bytes.
#line 1 "ENTRY_102273b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102273b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102273c0; body size 5 bytes.
#line 1 "ENTRY_102273c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102273c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102273d0; body size 5 bytes.
#line 1 "ENTRY_102273d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102273d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102273e0; body size 5 bytes.
#line 1 "ENTRY_102273e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102273e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102273f0; body size 5 bytes.
#line 1 "ENTRY_102273f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102273f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227400; body size 5 bytes.
#line 1 "ENTRY_10227400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227410; body size 5 bytes.
#line 1 "ENTRY_10227410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227420; body size 5 bytes.
#line 1 "ENTRY_10227420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227460; body size 30 bytes.
#line 1 "ENTRY_10227460"

__declspec(naked) void FUN_10227460(void)

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





// Reference entry 10227490; body size 25 bytes.
#line 1 "ENTRY_10227490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10227490(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  ((SCStr *)((SCStr *)(param_2 + 1)))->m_op_ctor((SCStr *)(param_3 + 1));
  return;
}


// Reference entry 102274b0; body size 22 bytes.
#line 1 "ENTRY_102274b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102274b0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  return;
}


// Reference entry 102274d0; body size 51 bytes.
#line 1 "ENTRY_102274d0"

__declspec(naked) void FUN_102274d0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [eax + 8]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x25
  __asm push edi
  __asm or edi, 0xffffffff
  __asm mov eax, edi
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x17
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x7e __asm _emit 0x08
  __asm dec edi
  __asm _emit 0x75 __asm _emit 0x09
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm pop edi
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop edi
  __asm pop esi
  __asm ret
}





// Reference entry 10227580; body size 3 bytes.
#line 1 "ENTRY_10227580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10227580(void)

{
  return;
}


// Reference entry 10227890; body size 15 bytes.
#line 1 "ENTRY_10227890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227890(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102278b0; body size 15 bytes.
#line 1 "ENTRY_102278b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102278b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102278d0; body size 15 bytes.
#line 1 "ENTRY_102278d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102278d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102278f0; body size 15 bytes.
#line 1 "ENTRY_102278f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102278f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10227910; body size 15 bytes.
#line 1 "ENTRY_10227910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10227bb0; body size 5 bytes.
#line 1 "ENTRY_10227bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227bb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227bc0; body size 5 bytes.
#line 1 "ENTRY_10227bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227bc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227bd0; body size 5 bytes.
#line 1 "ENTRY_10227bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227bd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227be0; body size 5 bytes.
#line 1 "ENTRY_10227be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227bf0; body size 5 bytes.
#line 1 "ENTRY_10227bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c00; body size 5 bytes.
#line 1 "ENTRY_10227c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c10; body size 5 bytes.
#line 1 "ENTRY_10227c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c20; body size 5 bytes.
#line 1 "ENTRY_10227c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c30; body size 5 bytes.
#line 1 "ENTRY_10227c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c40; body size 5 bytes.
#line 1 "ENTRY_10227c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c50; body size 5 bytes.
#line 1 "ENTRY_10227c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c60; body size 5 bytes.
#line 1 "ENTRY_10227c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c70; body size 5 bytes.
#line 1 "ENTRY_10227c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c80; body size 5 bytes.
#line 1 "ENTRY_10227c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227c90; body size 5 bytes.
#line 1 "ENTRY_10227c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227d30; body size 5 bytes.
#line 1 "ENTRY_10227d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227d40; body size 5 bytes.
#line 1 "ENTRY_10227d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227d40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227d50; body size 5 bytes.
#line 1 "ENTRY_10227d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227d50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227d60; body size 5 bytes.
#line 1 "ENTRY_10227d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227d70; body size 5 bytes.
#line 1 "ENTRY_10227d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227d80; body size 5 bytes.
#line 1 "ENTRY_10227d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227d90; body size 5 bytes.
#line 1 "ENTRY_10227d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227da0; body size 5 bytes.
#line 1 "ENTRY_10227da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227db0; body size 5 bytes.
#line 1 "ENTRY_10227db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227dc0; body size 5 bytes.
#line 1 "ENTRY_10227dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227dd0; body size 5 bytes.
#line 1 "ENTRY_10227dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227de0; body size 5 bytes.
#line 1 "ENTRY_10227de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227df0; body size 5 bytes.
#line 1 "ENTRY_10227df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227e00; body size 5 bytes.
#line 1 "ENTRY_10227e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227e10; body size 5 bytes.
#line 1 "ENTRY_10227e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227e10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227e20; body size 5 bytes.
#line 1 "ENTRY_10227e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227e20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227e30; body size 5 bytes.
#line 1 "ENTRY_10227e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227e30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227e40; body size 5 bytes.
#line 1 "ENTRY_10227e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227e40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227e50; body size 5 bytes.
#line 1 "ENTRY_10227e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227ef0; body size 5 bytes.
#line 1 "ENTRY_10227ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227f00; body size 5 bytes.
#line 1 "ENTRY_10227f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227f00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227f10; body size 5 bytes.
#line 1 "ENTRY_10227f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227f10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227f20; body size 5 bytes.
#line 1 "ENTRY_10227f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227f30; body size 5 bytes.
#line 1 "ENTRY_10227f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227f30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227f40; body size 5 bytes.
#line 1 "ENTRY_10227f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227f40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227f50; body size 5 bytes.
#line 1 "ENTRY_10227f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10227f50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10227f60; body size 11 bytes.
#line 1 "ENTRY_10227f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10227f60(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10227f70; body size 6 bytes.
#line 1 "ENTRY_10227f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10227f70(void)

{
  return (char *)("SCIActionContext");
}


// Reference entry 10227f80; body size 6 bytes.
#line 1 "ENTRY_10227f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10227f80(void)

{
  return (char *)("SCIController");
}


// Reference entry 10227f90; body size 6 bytes.
#line 1 "ENTRY_10227f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10227f90(void)

{
  return (char *)("SCINewWizController");
}


// Reference entry 10227fa0; body size 6 bytes.
#line 1 "ENTRY_10227fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10227fa0(void)

{
  return (char *)("SCIWifiDelegate");
}


// Reference entry 10228260; body size 38 bytes.
#line 1 "ENTRY_10228260"

__declspec(naked) void FUN_10228260(void)

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





// Reference entry 10228290; body size 38 bytes.
#line 1 "ENTRY_10228290"

__declspec(naked) void FUN_10228290(void)

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





// Reference entry 102283f0; body size 40 bytes.
#line 1 "ENTRY_102283f0"

__declspec(naked) void FUN_102283f0(void)

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





// Reference entry 10228430; body size 5 bytes.
#line 1 "ENTRY_10228430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10228430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10228440; body size 5 bytes.
#line 1 "ENTRY_10228440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10228440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10228450; body size 5 bytes.
#line 1 "ENTRY_10228450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10228450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10228460; body size 5 bytes.
#line 1 "ENTRY_10228460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10228460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10228500; body size 5 bytes.
#line 1 "ENTRY_10228500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10228500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10228510; body size 5 bytes.
#line 1 "ENTRY_10228510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10228510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10228520; body size 5 bytes.
#line 1 "ENTRY_10228520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10228520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10228530; body size 5 bytes.
#line 1 "ENTRY_10228530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10228530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10228540; body size 5 bytes.
#line 1 "ENTRY_10228540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10228540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10228550; body size 19 bytes.
#line 1 "ENTRY_10228550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10228550(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10228570; body size 19 bytes.
#line 1 "ENTRY_10228570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10228570(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10228590; body size 30 bytes.
#line 1 "ENTRY_10228590"

__declspec(naked) void FUN_10228590(void)

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





// Reference entry 102285c0; body size 30 bytes.
#line 1 "ENTRY_102285c0"

__declspec(naked) void FUN_102285c0(void)

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





// Reference entry 102285f0; body size 30 bytes.
#line 1 "ENTRY_102285f0"

__declspec(naked) void FUN_102285f0(void)

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





// Reference entry 10228d30; body size 27 bytes.
#line 1 "ENTRY_10228d30"

__declspec(naked) void FUN_10228d30(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11887aa0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10228de0; body size 95 bytes.
#line 1 "ENTRY_10228de0"

__declspec(naked) void FUN_10228de0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm call LAB_10099107
  __asm push dword ptr [esp + 0x14]
  __asm mov ecx, eax
  __asm push dword ptr [esp + 0x14]
  __asm mov edx, dword ptr [eax]
  __asm push dword ptr [esp + 0x14]
  __asm call dword ptr [edx + 0xc]
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_118894a8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], offset LAB_118894cc
  __asm mov dword ptr [esi + 0x18], offset LAB_1188950c
  __asm mov dword ptr [esi + 0x1c], offset LAB_11889530
  __asm mov dword ptr [esi + 0x38], offset LAB_11889540
  __asm mov dword ptr [esi + 0x44], offset LAB_11889554
  __asm mov dword ptr [esi + 0x50], offset LAB_11889564
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 10228e60; body size 95 bytes.
#line 1 "ENTRY_10228e60"

__declspec(naked) void FUN_10228e60(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm call LAB_10057f0e
  __asm push dword ptr [esp + 0x14]
  __asm mov ecx, eax
  __asm push dword ptr [esp + 0x14]
  __asm mov edx, dword ptr [eax]
  __asm push dword ptr [esp + 0x14]
  __asm call dword ptr [edx + 0xc]
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_118893d8
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], offset LAB_118893fc
  __asm mov dword ptr [esi + 0x18], offset LAB_1188943c
  __asm mov dword ptr [esi + 0x1c], offset LAB_11889460
  __asm mov dword ptr [esi + 0x38], offset LAB_11889470
  __asm mov dword ptr [esi + 0x44], offset LAB_11889484
  __asm mov dword ptr [esi + 0x50], offset LAB_11889494
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 10228ee0; body size 95 bytes.
#line 1 "ENTRY_10228ee0"

__declspec(naked) void FUN_10228ee0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm call LAB_100555fb
  __asm push dword ptr [esp + 0x14]
  __asm mov ecx, eax
  __asm push dword ptr [esp + 0x14]
  __asm mov edx, dword ptr [eax]
  __asm push dword ptr [esp + 0x14]
  __asm call dword ptr [edx + 0xc]
  __asm push eax
  __asm mov ecx, esi
  __asm call LAB_10055a9c
  __asm mov dword ptr [esi], offset LAB_11889238
  __asm mov eax, esi
  __asm mov dword ptr [esi + 8], offset LAB_1188925c
  __asm mov dword ptr [esi + 0x18], offset LAB_1188929c
  __asm mov dword ptr [esi + 0x1c], offset LAB_118892c0
  __asm mov dword ptr [esi + 0x38], offset LAB_118892d0
  __asm mov dword ptr [esi + 0x44], offset LAB_118892e4
  __asm mov dword ptr [esi + 0x50], offset LAB_118892f4
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 102290e0; body size 16 bytes.
#line 1 "ENTRY_102290e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102290e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229100; body size 16 bytes.
#line 1 "ENTRY_10229100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102291a0; body size 16 bytes.
#line 1 "ENTRY_102291a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102291a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102292c0; body size 16 bytes.
#line 1 "ENTRY_102292c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102292c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229320; body size 16 bytes.
#line 1 "ENTRY_10229320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229320(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229380; body size 32 bytes.
#line 1 "ENTRY_10229380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229380(undefined4 *param_2)
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


// Reference entry 102293b0; body size 16 bytes.
#line 1 "ENTRY_102293b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102293b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229450; body size 16 bytes.
#line 1 "ENTRY_10229450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229450(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229490; body size 18 bytes.
#line 1 "ENTRY_10229490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229490(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102294b0; body size 18 bytes.
#line 1 "ENTRY_102294b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102294b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102294d0; body size 18 bytes.
#line 1 "ENTRY_102294d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102294d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102294f0; body size 3 bytes.
#line 1 "ENTRY_102294f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102294f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229500; body size 3 bytes.
#line 1 "ENTRY_10229500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229510; body size 3 bytes.
#line 1 "ENTRY_10229510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229520; body size 3 bytes.
#line 1 "ENTRY_10229520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229530; body size 3 bytes.
#line 1 "ENTRY_10229530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229540; body size 3 bytes.
#line 1 "ENTRY_10229540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229550; body size 3 bytes.
#line 1 "ENTRY_10229550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229560; body size 3 bytes.
#line 1 "ENTRY_10229560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229570; body size 10 bytes.
#line 1 "ENTRY_10229570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10229570(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10229580; body size 10 bytes.
#line 1 "ENTRY_10229580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10229580(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10229590; body size 10 bytes.
#line 1 "ENTRY_10229590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10229590(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102295a0; body size 10 bytes.
#line 1 "ENTRY_102295a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102295a0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102295b0; body size 10 bytes.
#line 1 "ENTRY_102295b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102295b0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102295c0; body size 10 bytes.
#line 1 "ENTRY_102295c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102295c0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102295d0; body size 10 bytes.
#line 1 "ENTRY_102295d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102295d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102295e0; body size 10 bytes.
#line 1 "ENTRY_102295e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102295e0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102295f0; body size 10 bytes.
#line 1 "ENTRY_102295f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102295f0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102299a0; body size 11 bytes.
#line 1 "ENTRY_102299a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102299a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102299b0; body size 11 bytes.
#line 1 "ENTRY_102299b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102299b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102299c0; body size 11 bytes.
#line 1 "ENTRY_102299c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102299c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102299d0; body size 11 bytes.
#line 1 "ENTRY_102299d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102299d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102299e0; body size 11 bytes.
#line 1 "ENTRY_102299e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102299e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102299f0; body size 11 bytes.
#line 1 "ENTRY_102299f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102299f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229a00; body size 11 bytes.
#line 1 "ENTRY_10229a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229a00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229a10; body size 11 bytes.
#line 1 "ENTRY_10229a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229a10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229a20; body size 11 bytes.
#line 1 "ENTRY_10229a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229a20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229a30; body size 11 bytes.
#line 1 "ENTRY_10229a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229a30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229a40; body size 11 bytes.
#line 1 "ENTRY_10229a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229a40(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229a50; body size 16 bytes.
#line 1 "ENTRY_10229a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229a50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229a70; body size 16 bytes.
#line 1 "ENTRY_10229a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229a70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229a90; body size 16 bytes.
#line 1 "ENTRY_10229a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229a90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229ab0; body size 9 bytes.
#line 1 "ENTRY_10229ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229ab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229ac0; body size 9 bytes.
#line 1 "ENTRY_10229ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229ad0; body size 9 bytes.
#line 1 "ENTRY_10229ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229ae0; body size 13 bytes.
#line 1 "ENTRY_10229ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229ae0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229af0; body size 13 bytes.
#line 1 "ENTRY_10229af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229af0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229b00; body size 13 bytes.
#line 1 "ENTRY_10229b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229b00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229b10; body size 14 bytes.
#line 1 "ENTRY_10229b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229b10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229b30; body size 14 bytes.
#line 1 "ENTRY_10229b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229b30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229b50; body size 14 bytes.
#line 1 "ENTRY_10229b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10229b50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10229b70; body size 23 bytes.
#line 1 "ENTRY_10229b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229b70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229b90; body size 23 bytes.
#line 1 "ENTRY_10229b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229b90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229bb0; body size 23 bytes.
#line 1 "ENTRY_10229bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229bd0; body size 23 bytes.
#line 1 "ENTRY_10229bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10229bd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10229bf0; body size 3 bytes.
#line 1 "ENTRY_10229bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229bf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229c00; body size 3 bytes.
#line 1 "ENTRY_10229c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229c00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229c10; body size 3 bytes.
#line 1 "ENTRY_10229c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10229c20; body size 3 bytes.
#line 1 "ENTRY_10229c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10229c20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1022a180; body size 10 bytes.
#line 1 "ENTRY_1022a180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022a180(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1022a190; body size 18 bytes.
#line 1 "ENTRY_1022a190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1022a190(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1022a240; body size 35 bytes.
#line 1 "ENTRY_1022a240"

__declspec(naked) void FUN_1022a240(void)

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





// Reference entry 1022a270; body size 13 bytes.
#line 1 "ENTRY_1022a270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1022a270(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1022a640; body size 23 bytes.
#line 1 "ENTRY_1022a640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022a640(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1022a700; body size 42 bytes.
#line 1 "ENTRY_1022a700"

__declspec(naked) void FUN_1022a700(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11889578
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1022ab10; body size 9 bytes.
#line 1 "ENTRY_1022ab10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022ab10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCFoundProductManager_Listener);
  return (undefined4 *)(param_1);
}


// Reference entry 1022ad40; body size 21 bytes.
#line 1 "ENTRY_1022ad40"

__declspec(naked) void FUN_1022ad40(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 1022af30; body size 42 bytes.
#line 1 "ENTRY_1022af30"

__declspec(naked) void FUN_1022af30(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11887884
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1022b320; body size 42 bytes.
#line 1 "ENTRY_1022b320"

__declspec(naked) void FUN_1022b320(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11887a54
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1022ba80; body size 33 bytes.
#line 1 "ENTRY_1022ba80"

__declspec(naked) void FUN_1022ba80(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11883dcc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11888488
  __asm pop ecx
  __asm ret
}





// Reference entry 1022bbe0; body size 42 bytes.
#line 1 "ENTRY_1022bbe0"

__declspec(naked) void FUN_1022bbe0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11887944
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1022bc20; body size 9 bytes.
#line 1 "ENTRY_1022bc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022bc20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIController);
  return (undefined4 *)(param_1);
}


// Reference entry 1022bc30; body size 33 bytes.
#line 1 "ENTRY_1022bc30"

__declspec(naked) void FUN_1022bc30(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11883dcc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11888368
  __asm pop ecx
  __asm ret
}





// Reference entry 1022bc60; body size 33 bytes.
#line 1 "ENTRY_1022bc60"

__declspec(naked) void FUN_1022bc60(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11883dcc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_118883f8
  __asm pop ecx
  __asm ret
}





// Reference entry 1022bd70; body size 9 bytes.
#line 1 "ENTRY_1022bd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022bd70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCMainthreadCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 1022c090; body size 35 bytes.
#line 1 "ENTRY_1022c090"

__declspec(naked) void FUN_1022c090(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 1022c1b0; body size 28 bytes.
#line 1 "ENTRY_1022c1b0"

__declspec(naked) void FUN_1022c1b0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push esi
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esi], offset LAB_118877bc
  __asm call LAB_10049fd5
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 1022c310; body size 42 bytes.
#line 1 "ENTRY_1022c310"

__declspec(naked) void FUN_1022c310(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_118878d4
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1022c350; body size 33 bytes.
#line 1 "ENTRY_1022c350"

__declspec(naked) void FUN_1022c350(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11883dcc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_11888440
  __asm pop ecx
  __asm ret
}





// Reference entry 1022c680; body size 11 bytes.
#line 1 "ENTRY_1022c680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1022c680(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1022c690; body size 11 bytes.
#line 1 "ENTRY_1022c690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1022c690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1022c6a0; body size 11 bytes.
#line 1 "ENTRY_1022c6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1022c6a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1022c6b0; body size 24 bytes.
#line 1 "ENTRY_1022c6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1022c6b0(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1022c6d0; body size 24 bytes.
#line 1 "ENTRY_1022c6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1022c6d0(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1022c6f0; body size 24 bytes.
#line 1 "ENTRY_1022c6f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1022c6f0(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1022cb50; body size 53 bytes.
#line 1 "ENTRY_1022cb50"

__declspec(naked) void FUN_1022cb50(void)

{
  __asm mov dword ptr [ecx], offset LAB_11889308
  __asm mov dword ptr [ecx + 8], offset LAB_1188932c
  __asm mov dword ptr [ecx + 0x18], offset LAB_1188936c
  __asm mov dword ptr [ecx + 0x1c], offset LAB_11889390
  __asm mov dword ptr [ecx + 0x38], offset LAB_118893a0
  __asm mov dword ptr [ecx + 0x44], offset LAB_118893b4
  __asm mov dword ptr [ecx + 0x50], offset LAB_118893c4
  __asm jmp LAB_100709e6
}





// Reference entry 1022cba0; body size 53 bytes.
#line 1 "ENTRY_1022cba0"

__declspec(naked) void FUN_1022cba0(void)

{
  __asm mov dword ptr [ecx], offset LAB_118894a8
  __asm mov dword ptr [ecx + 8], offset LAB_118894cc
  __asm mov dword ptr [ecx + 0x18], offset LAB_1188950c
  __asm mov dword ptr [ecx + 0x1c], offset LAB_11889530
  __asm mov dword ptr [ecx + 0x38], offset LAB_11889540
  __asm mov dword ptr [ecx + 0x44], offset LAB_11889554
  __asm mov dword ptr [ecx + 0x50], offset LAB_11889564
  __asm jmp LAB_100709e6
}





// Reference entry 1022cbf0; body size 53 bytes.
#line 1 "ENTRY_1022cbf0"

__declspec(naked) void FUN_1022cbf0(void)

{
  __asm mov dword ptr [ecx], offset LAB_118893d8
  __asm mov dword ptr [ecx + 8], offset LAB_118893fc
  __asm mov dword ptr [ecx + 0x18], offset LAB_1188943c
  __asm mov dword ptr [ecx + 0x1c], offset LAB_11889460
  __asm mov dword ptr [ecx + 0x38], offset LAB_11889470
  __asm mov dword ptr [ecx + 0x44], offset LAB_11889484
  __asm mov dword ptr [ecx + 0x50], offset LAB_11889494
  __asm jmp LAB_100709e6
}





// Reference entry 1022cc40; body size 53 bytes.
#line 1 "ENTRY_1022cc40"

__declspec(naked) void FUN_1022cc40(void)

{
  __asm mov dword ptr [ecx], offset LAB_11889238
  __asm mov dword ptr [ecx + 8], offset LAB_1188925c
  __asm mov dword ptr [ecx + 0x18], offset LAB_1188929c
  __asm mov dword ptr [ecx + 0x1c], offset LAB_118892c0
  __asm mov dword ptr [ecx + 0x38], offset LAB_118892d0
  __asm mov dword ptr [ecx + 0x44], offset LAB_118892e4
  __asm mov dword ptr [ecx + 0x50], offset LAB_118892f4
  __asm jmp LAB_100709e6
}





// Reference entry 1022d600; body size 34 bytes.
#line 1 "ENTRY_1022d600"

__declspec(naked) void FUN_1022d600(void)

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





// Reference entry 1022d630; body size 34 bytes.
#line 1 "ENTRY_1022d630"

__declspec(naked) void FUN_1022d630(void)

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





// Reference entry 1022d690; body size 34 bytes.
#line 1 "ENTRY_1022d690"

__declspec(naked) void FUN_1022d690(void)

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





// Reference entry 1022dad0; body size 3 bytes.
#line 1 "ENTRY_1022dad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1022dad0(void)

{
  return;
}


// Reference entry 1022dae0; body size 3 bytes.
#line 1 "ENTRY_1022dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1022dae0(void)

{
  return;
}


// Reference entry 1022daf0; body size 3 bytes.
#line 1 "ENTRY_1022daf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1022daf0(void)

{
  return;
}


// Reference entry 1022dd40; body size 47 bytes.
#line 1 "ENTRY_1022dd40"

__declspec(naked) void FUN_1022dd40(void)

{
  __asm push esi
  __asm mov esi, dword ptr [ecx + 8]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x25
  __asm push edi
  __asm or edi, 0xffffffff
  __asm mov eax, edi
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x17
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax]
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x7e __asm _emit 0x08
  __asm dec edi
  __asm _emit 0x75 __asm _emit 0x09
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm pop edi
  __asm pop esi
  __asm jmp dword ptr [eax + 4]
  __asm pop edi
  __asm pop esi
  __asm ret
}





// Reference entry 1022ddf0; body size 5 bytes.
#line 1 "ENTRY_1022ddf0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022ddf0(int param_1)

{ __asm jmp FUN_10033249 }


// Reference entry 1022de00; body size 5 bytes.
#line 1 "ENTRY_1022de00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022de00(int param_1)

{ __asm jmp FUN_1006af23 }


// Reference entry 1022de30; body size 11 bytes.
#line 1 "ENTRY_1022de30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022de30(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_BatteryWeakChargerData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022de40; body size 19 bytes.
#line 1 "ENTRY_1022de40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022de40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022de60; body size 11 bytes.
#line 1 "ENTRY_1022de60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022de60(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_FactoryResetData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022de70; body size 11 bytes.
#line 1 "ENTRY_1022de70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022de70(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_ForgotHouseholdData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022dee0; body size 11 bytes.
#line 1 "ENTRY_1022dee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022dee0(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_InvalidOptimo2OrientationData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022def0; body size 11 bytes.
#line 1 "ENTRY_1022def0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022def0(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_LaunchWifiConfig);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022df00; body size 11 bytes.
#line 1 "ENTRY_1022df00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022df00(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_LegacyCRModernHHData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022e0c0; body size 11 bytes.
#line 1 "ENTRY_1022e0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022e0c0(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_NoNetworkFoundData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022e0d0; body size 11 bytes.
#line 1 "ENTRY_1022e0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022e0d0(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_OutdatedControllerData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022e1d0; body size 11 bytes.
#line 1 "ENTRY_1022e1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022e1d0(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_RetailDemoData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022e1e0; body size 19 bytes.
#line 1 "ENTRY_1022e1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022e1e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022e4f0; body size 19 bytes.
#line 1 "ENTRY_1022e4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022e4f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022e950; body size 19 bytes.
#line 1 "ENTRY_1022e950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022e950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022e9f0; body size 19 bytes.
#line 1 "ENTRY_1022e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022e9f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022ea10; body size 7 bytes.
#line 1 "ENTRY_1022ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022ea10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022ea20; body size 19 bytes.
#line 1 "ENTRY_1022ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022ea20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022ea40; body size 19 bytes.
#line 1 "ENTRY_1022ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022ea40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022ee90; body size 19 bytes.
#line 1 "ENTRY_1022ee90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022ee90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022eeb0; body size 19 bytes.
#line 1 "ENTRY_1022eeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022eeb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1022ef80; body size 11 bytes.
#line 1 "ENTRY_1022ef80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022ef80(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_UnsupportedData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022ef90; body size 11 bytes.
#line 1 "ENTRY_1022ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022ef90(int *param_1)

{
  *param_1 = (int)((int)(uint)&ghidra_vftable_ZonePlayerUpdateData);

  thunk_FUN_1022df10(param_1);

}


// Reference entry 1022efa0; body size 98 bytes.
#line 1 "ENTRY_1022efa0"

__declspec(naked) void FUN_1022efa0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x57
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x50
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm shr eax, 3
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x10
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_10076f76
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push dword ptr [edi]
  __asm push edi
  __asm call LAB_10076c79
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
  __asm call LAB_100857c4
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 1022f020; body size 98 bytes.
#line 1 "ENTRY_1022f020"

__declspec(naked) void FUN_1022f020(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm test esi, esi
  __asm _emit 0x74 __asm _emit 0x57
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x50
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm shr eax, 3
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x10
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_1007df1f
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push dword ptr [edi]
  __asm push edi
  __asm call LAB_10001ce9
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
  __asm call LAB_1003651b
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 1022f0a0; body size 131 bytes.
#line 1 "ENTRY_1022f0a0"

__declspec(naked) void FUN_1022f0a0(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x78
  __asm mov ecx, dword ptr [edi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x71
  __asm mov eax, dword ptr [edi + 0x1c]
  __asm shr eax, 3
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x10
  __asm mov eax, dword ptr [edi + 4]
  __asm mov ecx, edi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_1001d494
  __asm pop edi
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, dword ptr [ecx + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x19
  __asm push esi
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm mov esi, dword ptr [eax]
  __asm push 0x10
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0xed
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
  __asm call LAB_1006faff
  __asm add esp, 0xc
  __asm pop edi
  __asm pop ecx
  __asm ret
}





// Reference entry 1022f170; body size 18 bytes.
#line 1 "ENTRY_1022f170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022f170(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 1022f1b0; body size 18 bytes.
#line 1 "ENTRY_1022f1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022f1b0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 1022f230; body size 18 bytes.
#line 1 "ENTRY_1022f230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022f230(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 1022f250; body size 18 bytes.
#line 1 "ENTRY_1022f250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022f250(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1022f270; body size 18 bytes.
#line 1 "ENTRY_1022f270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022f270(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1022f290; body size 18 bytes.
#line 1 "ENTRY_1022f290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1022f290(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 1022f470; body size 80 bytes.
#line 1 "ENTRY_1022f470"

__declspec(naked) void FUN_1022f470(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm mov edx, dword ptr [eax]
  __asm mov edi, ecx
  __asm mov esi, dword ptr [eax + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x40 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, dword ptr [edi + 4]
  __asm mov dword ptr [edi], edx
  __asm mov dword ptr [edi + 4], esi
  __asm test ebx, ebx
  __asm _emit 0x74 __asm _emit 0x21
  __asm or esi, 0xffffffff
  __asm mov eax, esi
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x43 __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x15
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm call dword ptr [eax]
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x73 __asm _emit 0x08
  __asm dec esi
  __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, dword ptr [ebx]
  __asm mov ecx, ebx
  __asm call dword ptr [eax + 4]
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 4
}





// Reference entry 1022f4e0; body size 60 bytes.
#line 1 "ENTRY_1022f4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1022f4e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    thunk_FUN_102341a0();
    *param_1 = (undefined4)(*param_2);
    param_1[1] = (undefined4)(param_2[1]);
    param_1[2] = (undefined4)(param_2[2]);
    *param_2 = (undefined4)(0);
    param_2[1] = (undefined4)(0);
    param_2[2] = (undefined4)(0);
  }
  return (undefined4 *)(param_1);
}


// Reference entry 1022f530; body size 14 bytes.
#line 1 "ENTRY_1022f530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f530(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1022f550; body size 14 bytes.
#line 1 "ENTRY_1022f550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f550(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1022f570; body size 14 bytes.
#line 1 "ENTRY_1022f570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f570(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1022f590; body size 14 bytes.
#line 1 "ENTRY_1022f590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f590(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1022f5b0; body size 14 bytes.
#line 1 "ENTRY_1022f5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f5b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1022f5d0; body size 14 bytes.
#line 1 "ENTRY_1022f5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f5d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1022f5f0; body size 14 bytes.
#line 1 "ENTRY_1022f5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f5f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1022f610; body size 14 bytes.
#line 1 "ENTRY_1022f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f610(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1022f630; body size 14 bytes.
#line 1 "ENTRY_1022f630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f630(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1022f650; body size 14 bytes.
#line 1 "ENTRY_1022f650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f650(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1022f670; body size 14 bytes.
#line 1 "ENTRY_1022f670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f670(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1022f690; body size 14 bytes.
#line 1 "ENTRY_1022f690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1022f690(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1022f710; body size 3 bytes.
#line 1 "ENTRY_1022f710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f710(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f720; body size 3 bytes.
#line 1 "ENTRY_1022f720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f730; body size 3 bytes.
#line 1 "ENTRY_1022f730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f730(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f740; body size 3 bytes.
#line 1 "ENTRY_1022f740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f740(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f750; body size 3 bytes.
#line 1 "ENTRY_1022f750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f750(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f760; body size 3 bytes.
#line 1 "ENTRY_1022f760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f760(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f770; body size 3 bytes.
#line 1 "ENTRY_1022f770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f780; body size 3 bytes.
#line 1 "ENTRY_1022f780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f780(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f790; body size 3 bytes.
#line 1 "ENTRY_1022f790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f790(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f7a0; body size 3 bytes.
#line 1 "ENTRY_1022f7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f7a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f7b0; body size 3 bytes.
#line 1 "ENTRY_1022f7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f7b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f7c0; body size 3 bytes.
#line 1 "ENTRY_1022f7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f7c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f7d0; body size 3 bytes.
#line 1 "ENTRY_1022f7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f7d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f7e0; body size 7 bytes.
#line 1 "ENTRY_1022f7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f7e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f7f0; body size 3 bytes.
#line 1 "ENTRY_1022f7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f7f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f800; body size 7 bytes.
#line 1 "ENTRY_1022f800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f800(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f810; body size 7 bytes.
#line 1 "ENTRY_1022f810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f810(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f820; body size 7 bytes.
#line 1 "ENTRY_1022f820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f820(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f830; body size 7 bytes.
#line 1 "ENTRY_1022f830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f830(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f840; body size 7 bytes.
#line 1 "ENTRY_1022f840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f840(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f850; body size 7 bytes.
#line 1 "ENTRY_1022f850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f850(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f860; body size 7 bytes.
#line 1 "ENTRY_1022f860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f860(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f870; body size 3 bytes.
#line 1 "ENTRY_1022f870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f880; body size 3 bytes.
#line 1 "ENTRY_1022f880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f880(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f890; body size 7 bytes.
#line 1 "ENTRY_1022f890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f890(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f8a0; body size 3 bytes.
#line 1 "ENTRY_1022f8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f8a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f8b0; body size 7 bytes.
#line 1 "ENTRY_1022f8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f8b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f8c0; body size 7 bytes.
#line 1 "ENTRY_1022f8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f8c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1022f8d0; body size 8 bytes.
#line 1 "ENTRY_1022f8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f8d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1022f8e0; body size 8 bytes.
#line 1 "ENTRY_1022f8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1022f8e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1022f8f0; body size 3 bytes.
#line 1 "ENTRY_1022f8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f8f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f900; body size 3 bytes.
#line 1 "ENTRY_1022f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f910; body size 3 bytes.
#line 1 "ENTRY_1022f910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f920; body size 3 bytes.
#line 1 "ENTRY_1022f920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f930; body size 3 bytes.
#line 1 "ENTRY_1022f930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f940; body size 3 bytes.
#line 1 "ENTRY_1022f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f950; body size 3 bytes.
#line 1 "ENTRY_1022f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f960; body size 3 bytes.
#line 1 "ENTRY_1022f960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f970; body size 3 bytes.
#line 1 "ENTRY_1022f970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f980; body size 3 bytes.
#line 1 "ENTRY_1022f980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f990; body size 3 bytes.
#line 1 "ENTRY_1022f990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f9a0; body size 3 bytes.
#line 1 "ENTRY_1022f9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f9a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f9b0; body size 3 bytes.
#line 1 "ENTRY_1022f9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f9b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f9c0; body size 3 bytes.
#line 1 "ENTRY_1022f9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f9c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f9d0; body size 3 bytes.
#line 1 "ENTRY_1022f9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f9d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f9e0; body size 3 bytes.
#line 1 "ENTRY_1022f9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f9e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022f9f0; body size 3 bytes.
#line 1 "ENTRY_1022f9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1022f9f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1022fa00; body size 6 bytes.
#line 1 "ENTRY_1022fa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa00(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fa10; body size 6 bytes.
#line 1 "ENTRY_1022fa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa10(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fa20; body size 6 bytes.
#line 1 "ENTRY_1022fa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa20(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fa30; body size 6 bytes.
#line 1 "ENTRY_1022fa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa30(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fa40; body size 6 bytes.
#line 1 "ENTRY_1022fa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa40(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fa50; body size 6 bytes.
#line 1 "ENTRY_1022fa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa50(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fa60; body size 6 bytes.
#line 1 "ENTRY_1022fa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa60(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fa70; body size 6 bytes.
#line 1 "ENTRY_1022fa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa70(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fa80; body size 6 bytes.
#line 1 "ENTRY_1022fa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa80(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fa90; body size 6 bytes.
#line 1 "ENTRY_1022fa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022fa90(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022faa0; body size 6 bytes.
#line 1 "ENTRY_1022faa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1022faa0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 1022fab0; body size 9 bytes.
#line 1 "ENTRY_1022fab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022fab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 1022fac0; body size 9 bytes.
#line 1 "ENTRY_1022fac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022fac0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 1022fad0; body size 9 bytes.
#line 1 "ENTRY_1022fad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022fad0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 1022fae0; body size 9 bytes.
#line 1 "ENTRY_1022fae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022fae0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 1022faf0; body size 9 bytes.
#line 1 "ENTRY_1022faf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022faf0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 1022fb00; body size 9 bytes.
#line 1 "ENTRY_1022fb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1022fb00(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 1022fb10; body size 10 bytes.
#line 1 "ENTRY_1022fb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_1022fb10(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 1022fb20; body size 10 bytes.
#line 1 "ENTRY_1022fb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_1022fb20(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 1022fb30; body size 10 bytes.
#line 1 "ENTRY_1022fb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_1022fb30(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 1022fc70; body size 57 bytes.
#line 1 "ENTRY_1022fc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_1022fc70(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 1022fcc0; body size 25 bytes.
#line 1 "ENTRY_1022fcc0"

__declspec(naked) void FUN_1022fcc0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 4
  __asm call LAB_1148a05a
}





// Reference entry 1022fce0; body size 29 bytes.
#line 1 "ENTRY_1022fce0"

__declspec(naked) void FUN_1022fce0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}





// Reference entry 1022fd10; body size 25 bytes.
#line 1 "ENTRY_1022fd10"

__declspec(naked) void FUN_1022fd10(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 4
  __asm call LAB_1148a05a
}





// Reference entry 1022fd30; body size 25 bytes.
#line 1 "ENTRY_1022fd30"

__declspec(naked) void FUN_1022fd30(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 4
  __asm call LAB_1148a05a
}





// Reference entry 1022fd50; body size 25 bytes.
#line 1 "ENTRY_1022fd50"

__declspec(naked) void FUN_1022fd50(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 4
  __asm call LAB_1148a05a
}





// Reference entry 1022fd70; body size 29 bytes.
#line 1 "ENTRY_1022fd70"

__declspec(naked) void FUN_1022fd70(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}





// Reference entry 1022fda0; body size 30 bytes.
#line 1 "ENTRY_1022fda0"

__declspec(naked) void FUN_1022fda0(void)

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





// Reference entry 1022fdd0; body size 27 bytes.
#line 1 "ENTRY_1022fdd0"

__declspec(naked) void FUN_1022fdd0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret 4
  __asm call LAB_1148a05a
}





// Reference entry 1022fe00; body size 18 bytes.
#line 1 "ENTRY_1022fe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_1022fe00(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1022fe20; body size 35 bytes.
#line 1 "ENTRY_1022fe20"

__declspec(naked) void FUN_1022fe20(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [esp + 4], eax
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0f
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm mov eax, dword ptr [eax + 8]
  __asm call eax
  __asm ret 4
  __asm call LAB_1148a05a
}





// Reference entry 10231850; body size 22 bytes.
#line 1 "ENTRY_10231850"

__declspec(naked) void FUN_10231850(void)

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





// Reference entry 10231870; body size 22 bytes.
#line 1 "ENTRY_10231870"

__declspec(naked) void FUN_10231870(void)

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





// Reference entry 10231890; body size 22 bytes.
#line 1 "ENTRY_10231890"

__declspec(naked) void FUN_10231890(void)

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





// Reference entry 10231d90; body size 20 bytes.
#line 1 "ENTRY_10231d90"

__declspec(naked) void FUN_10231d90(void)

{
  __asm cmp dword ptr [ecx + 8], 0xccccccc
  __asm _emit 0x74 __asm _emit 0x01
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}





// Reference entry 10231db0; body size 20 bytes.
#line 1 "ENTRY_10231db0"

__declspec(naked) void FUN_10231db0(void)

{
  __asm cmp dword ptr [ecx + 8], 0xfffffff
  __asm _emit 0x74 __asm _emit 0x01
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}





// Reference entry 10231dd0; body size 20 bytes.
#line 1 "ENTRY_10231dd0"

__declspec(naked) void FUN_10231dd0(void)

{
  __asm cmp dword ptr [ecx + 8], 0xfffffff
  __asm _emit 0x74 __asm _emit 0x01
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}





// Reference entry 10231df0; body size 66 bytes.
#line 1 "ENTRY_10231df0"

__declspec(naked) void FUN_10231df0(void)

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





// Reference entry 10231e50; body size 66 bytes.
#line 1 "ENTRY_10231e50"

__declspec(naked) void FUN_10231e50(void)

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





// Reference entry 10231eb0; body size 66 bytes.
#line 1 "ENTRY_10231eb0"

__declspec(naked) void FUN_10231eb0(void)

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





// Reference entry 10232940; body size 55 bytes.
#line 1 "ENTRY_10232940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10232940(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10232990; body size 8 bytes.
#line 1 "ENTRY_10232990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10232990(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102329a0; body size 8 bytes.
#line 1 "ENTRY_102329a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102329a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102329b0; body size 8 bytes.
#line 1 "ENTRY_102329b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102329b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102329c0; body size 8 bytes.
#line 1 "ENTRY_102329c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102329c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102329d0; body size 8 bytes.
#line 1 "ENTRY_102329d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102329d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102329e0; body size 8 bytes.
#line 1 "ENTRY_102329e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102329e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 102329f0; body size 8 bytes.
#line 1 "ENTRY_102329f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102329f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10232a00; body size 8 bytes.
#line 1 "ENTRY_10232a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10232a00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10232a10; body size 8 bytes.
#line 1 "ENTRY_10232a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10232a10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10232a20; body size 5 bytes.
#line 1 "ENTRY_10232a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10232a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233030; body size 3 bytes.
#line 1 "ENTRY_10233030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233040; body size 3 bytes.
#line 1 "ENTRY_10233040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233050; body size 3 bytes.
#line 1 "ENTRY_10233050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233060; body size 3 bytes.
#line 1 "ENTRY_10233060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233070; body size 3 bytes.
#line 1 "ENTRY_10233070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233080; body size 3 bytes.
#line 1 "ENTRY_10233080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233090; body size 3 bytes.
#line 1 "ENTRY_10233090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102330a0; body size 3 bytes.
#line 1 "ENTRY_102330a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102330a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102330b0; body size 3 bytes.
#line 1 "ENTRY_102330b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102330b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102330c0; body size 3 bytes.
#line 1 "ENTRY_102330c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102330c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102330d0; body size 3 bytes.
#line 1 "ENTRY_102330d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102330d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102330e0; body size 3 bytes.
#line 1 "ENTRY_102330e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102330e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102330f0; body size 3 bytes.
#line 1 "ENTRY_102330f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102330f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233100; body size 3 bytes.
#line 1 "ENTRY_10233100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233110; body size 3 bytes.
#line 1 "ENTRY_10233110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233120; body size 3 bytes.
#line 1 "ENTRY_10233120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233130; body size 3 bytes.
#line 1 "ENTRY_10233130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233140; body size 3 bytes.
#line 1 "ENTRY_10233140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233150; body size 3 bytes.
#line 1 "ENTRY_10233150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233160; body size 3 bytes.
#line 1 "ENTRY_10233160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233170; body size 3 bytes.
#line 1 "ENTRY_10233170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233180; body size 3 bytes.
#line 1 "ENTRY_10233180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233190; body size 3 bytes.
#line 1 "ENTRY_10233190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102331a0; body size 3 bytes.
#line 1 "ENTRY_102331a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102331a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102331b0; body size 4 bytes.
#line 1 "ENTRY_102331b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102331b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102331c0; body size 4 bytes.
#line 1 "ENTRY_102331c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102331c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102331d0; body size 4 bytes.
#line 1 "ENTRY_102331d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102331d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102331e0; body size 4 bytes.
#line 1 "ENTRY_102331e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102331e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 102331f0; body size 4 bytes.
#line 1 "ENTRY_102331f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102331f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10233200; body size 4 bytes.
#line 1 "ENTRY_10233200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233200(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10233210; body size 4 bytes.
#line 1 "ENTRY_10233210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233210(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10233220; body size 4 bytes.
#line 1 "ENTRY_10233220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233220(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10233230; body size 4 bytes.
#line 1 "ENTRY_10233230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233230(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10233240; body size 92 bytes.
#line 1 "ENTRY_10233240"

__declspec(naked) void FUN_10233240(void)

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





// Reference entry 102332c0; body size 92 bytes.
#line 1 "ENTRY_102332c0"

__declspec(naked) void FUN_102332c0(void)

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





// Reference entry 10233340; body size 92 bytes.
#line 1 "ENTRY_10233340"

__declspec(naked) void FUN_10233340(void)

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





// Reference entry 102333c0; body size 7 bytes.
#line 1 "ENTRY_102333c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102333c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 102333d0; body size 7 bytes.
#line 1 "ENTRY_102333d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102333d0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 102333e0; body size 7 bytes.
#line 1 "ENTRY_102333e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102333e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 102333f0; body size 7 bytes.
#line 1 "ENTRY_102333f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_102333f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10233400; body size 7 bytes.
#line 1 "ENTRY_10233400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10233400(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10233410; body size 7 bytes.
#line 1 "ENTRY_10233410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10233410(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10233420; body size 7 bytes.
#line 1 "ENTRY_10233420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10233420(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10233430; body size 7 bytes.
#line 1 "ENTRY_10233430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10233430(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10233440; body size 7 bytes.
#line 1 "ENTRY_10233440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10233440(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10233450; body size 13 bytes.
#line 1 "ENTRY_10233450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10233450(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10233460; body size 13 bytes.
#line 1 "ENTRY_10233460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10233460(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10233470; body size 13 bytes.
#line 1 "ENTRY_10233470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10233470(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10233480; body size 3 bytes.
#line 1 "ENTRY_10233480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233490; body size 3 bytes.
#line 1 "ENTRY_10233490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10233490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102334a0; body size 3 bytes.
#line 1 "ENTRY_102334a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102334a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102334b0; body size 3 bytes.
#line 1 "ENTRY_102334b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102334b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102334c0; body size 3 bytes.
#line 1 "ENTRY_102334c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102334c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102334d0; body size 3 bytes.
#line 1 "ENTRY_102334d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102334d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10233790; body size 3 bytes.
#line 1 "ENTRY_10233790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10233790(void)

{
  return;
}


// Reference entry 102337a0; body size 3 bytes.
#line 1 "ENTRY_102337a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102337a0(void)

{
  return;
}


// Reference entry 102337b0; body size 3 bytes.
#line 1 "ENTRY_102337b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102337b0(void)

{
  return;
}


// Reference entry 102339d0; body size 11 bytes.
#line 1 "ENTRY_102339d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102339d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102339e0; body size 11 bytes.
#line 1 "ENTRY_102339e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102339e0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102339f0; body size 11 bytes.
#line 1 "ENTRY_102339f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102339f0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10233a00; body size 6 bytes.
#line 1 "ENTRY_10233a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10233a00(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10233a10; body size 6 bytes.
#line 1 "ENTRY_10233a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10233a10(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10233a20; body size 6 bytes.
#line 1 "ENTRY_10233a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10233a20(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10233a30; body size 26 bytes.
#line 1 "ENTRY_10233a30"

__declspec(naked) void FUN_10233a30(void)

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





// Reference entry 10233a50; body size 26 bytes.
#line 1 "ENTRY_10233a50"

__declspec(naked) void FUN_10233a50(void)

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





// Reference entry 10233a70; body size 26 bytes.
#line 1 "ENTRY_10233a70"

__declspec(naked) void FUN_10233a70(void)

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





// Reference entry 10233a90; body size 26 bytes.
#line 1 "ENTRY_10233a90"

__declspec(naked) void FUN_10233a90(void)

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





// Reference entry 10233ab0; body size 26 bytes.
#line 1 "ENTRY_10233ab0"

__declspec(naked) void FUN_10233ab0(void)

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





// Reference entry 10233ad0; body size 26 bytes.
#line 1 "ENTRY_10233ad0"

__declspec(naked) void FUN_10233ad0(void)

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





// Reference entry 10233af0; body size 26 bytes.
#line 1 "ENTRY_10233af0"

__declspec(naked) void FUN_10233af0(void)

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





// Reference entry 10233b10; body size 26 bytes.
#line 1 "ENTRY_10233b10"

__declspec(naked) void FUN_10233b10(void)

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





// Reference entry 10233b30; body size 76 bytes.
#line 1 "ENTRY_10233b30"

__declspec(naked) void FUN_10233b30(void)

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





// Reference entry 10233b90; body size 76 bytes.
#line 1 "ENTRY_10233b90"

__declspec(naked) void FUN_10233b90(void)

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





// Reference entry 10233bf0; body size 76 bytes.
#line 1 "ENTRY_10233bf0"

__declspec(naked) void FUN_10233bf0(void)

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





// Reference entry 10233c50; body size 10 bytes.
#line 1 "ENTRY_10233c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233c50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10233c60; body size 10 bytes.
#line 1 "ENTRY_10233c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233c60(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10233c70; body size 10 bytes.
#line 1 "ENTRY_10233c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233c70(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10233c80; body size 10 bytes.
#line 1 "ENTRY_10233c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233c80(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10233c90; body size 10 bytes.
#line 1 "ENTRY_10233c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233c90(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10233ca0; body size 10 bytes.
#line 1 "ENTRY_10233ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233ca0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10233cb0; body size 10 bytes.
#line 1 "ENTRY_10233cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233cb0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10233cc0; body size 10 bytes.
#line 1 "ENTRY_10233cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233cc0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10233cd0; body size 10 bytes.
#line 1 "ENTRY_10233cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233cd0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10233ce0; body size 33 bytes.
#line 1 "ENTRY_10233ce0"

__declspec(naked) void FUN_10233ce0(void)

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





// Reference entry 10233d10; body size 43 bytes.
#line 1 "ENTRY_10233d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10233d10(undefined4 *param_2)
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


// Reference entry 10234150; body size 55 bytes.
#line 1 "ENTRY_10234150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10234150(int *param_1)

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


// Reference entry 102342a0; body size 14 bytes.
#line 1 "ENTRY_102342a0"

__declspec(naked) void FUN_102342a0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}





// Reference entry 102342c0; body size 14 bytes.
#line 1 "ENTRY_102342c0"

__declspec(naked) void FUN_102342c0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}





// Reference entry 102342e0; body size 14 bytes.
#line 1 "ENTRY_102342e0"

__declspec(naked) void FUN_102342e0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}





// Reference entry 10234300; body size 13 bytes.
#line 1 "ENTRY_10234300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10234300(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10234310; body size 13 bytes.
#line 1 "ENTRY_10234310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10234310(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10234320; body size 13 bytes.
#line 1 "ENTRY_10234320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10234320(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10234330; body size 12 bytes.
#line 1 "ENTRY_10234330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10234330(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10234340; body size 12 bytes.
#line 1 "ENTRY_10234340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10234340(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10234350; body size 12 bytes.
#line 1 "ENTRY_10234350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10234350(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10234360; body size 11 bytes.
#line 1 "ENTRY_10234360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10234360(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10234370; body size 11 bytes.
#line 1 "ENTRY_10234370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10234370(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10234380; body size 11 bytes.
#line 1 "ENTRY_10234380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10234380(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10234390; body size 519 bytes.
#line 1 "ENTRY_10234390"

__declspec(naked) void FUN_10234390(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm sub esp, 0x20
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x2c]
  __asm push ebp
  __asm mov ebp, ecx
  __asm cmp edx, ebx
  __asm _emit 0x75 __asm _emit 0x0a
  __asm pop ebp
  __asm mov eax, ebx
  __asm pop ebx
  __asm add esp, 0x20
  __asm ret 8
  __asm mov eax, dword ptr [ebp + 4]
  __asm mov dword ptr [esp + 0x14], eax
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esp + 8], eax
  __asm movzx eax, byte ptr [edx + 8]
  __asm xor eax, 0x811c9dc5
  __asm imul ecx, eax, 0x1000193
  __asm movzx eax, byte ptr [edx + 9]
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebp + 0xc]
  __asm mov esi, edx
  __asm xor ecx, eax
  __asm mov dword ptr [esp + 0x2c], edi
  __asm movzx eax, byte ptr [edx + 0xa]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm movzx eax, byte ptr [edx + 0xb]
  __asm imul ecx, ecx, 0x1000193
  __asm xor ecx, eax
  __asm mov eax, dword ptr [ebp + 0x18]
  __asm imul ecx, ecx, 0x1000193
  __asm and eax, ecx
  __asm mov ecx, dword ptr [edi + eax*8]
  __asm mov dword ptr [esp + 0x18], ecx
  __asm lea eax, [edi + eax*8]
  __asm mov dword ptr [esp + 0x14], eax
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esp + 0x24], eax
  __asm mov edi, esi
  __asm mov dword ptr [esp + 0x28], esi
  __asm mov esi, dword ptr [esi]
  __asm mov dword ptr [esp + 0x20], edi
  __asm mov edi, dword ptr [edi + 0x10]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x21
  __asm or eax, 0xffffffff
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x17
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax]
  __asm or eax, 0xffffffff
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 4]
  __asm push 0x14
  __asm push dword ptr [esp + 0x24]
  __asm call LAB_100131d8
  __asm dec dword ptr [ebp + 8]
  __asm add esp, 8
  __asm mov eax, dword ptr [esp + 0x24]
  __asm cmp dword ptr [esp + 0x28], eax
  __asm _emit 0x74 __asm _emit 0x29
  __asm cmp esi, ebx
  __asm _emit 0x75 __asm _emit 0xad
  __asm mov eax, dword ptr [esp + 0x18]
  __asm cmp eax, dword ptr [esp + 0x34]
  __asm _emit 0x75 __asm _emit 0x06
  __asm mov ecx, dword ptr [esp + 0x14]
  __asm mov dword ptr [ecx], esi
  __asm mov eax, dword ptr [esp + 0x10]
  __asm pop edi
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, ebx
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0x20
  __asm ret 8
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov ecx, dword ptr [esp + 0x14]
  __asm cmp eax, dword ptr [esp + 0x34]
  __asm _emit 0x75 __asm _emit 0x08
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm mov dword ptr [ecx], eax
  __asm _emit 0xeb __asm _emit 0x04
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [ecx + 4], eax
  __asm cmp esi, ebx
  __asm _emit 0x74 __asm _emit 0xca __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
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
  __asm mov ecx, dword ptr [ebp + 0x18]
  __asm and ecx, eax
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm lea eax, [eax + ecx*8]
  __asm mov dword ptr [esp + 0x34], eax
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [esp + 0x28], eax
  __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ebx, esi
  __asm mov dword ptr [esp + 0x24], esi
  __asm mov esi, dword ptr [esi]
  __asm mov edi, dword ptr [ebx + 0x10]
  __asm test edi, edi
  __asm _emit 0x74 __asm _emit 0x21
  __asm or eax, 0xffffffff
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x47 __asm _emit 0x04 __asm _emit 0x75 __asm _emit 0x17
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax]
  __asm or eax, 0xffffffff
  __asm _emit 0xf0 __asm _emit 0x0f __asm _emit 0xc1 __asm _emit 0x47 __asm _emit 0x08 __asm _emit 0x75 __asm _emit 0x07
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 4]
  __asm push 0x14
  __asm push ebx
  __asm call LAB_100131d8
  __asm dec dword ptr [ebp + 8]
  __asm add esp, 8
  __asm mov eax, dword ptr [esp + 0x28]
  __asm cmp dword ptr [esp + 0x24], eax
  __asm _emit 0x74 __asm _emit 0x21
  __asm mov eax, dword ptr [esp + 0x38]
  __asm cmp esi, eax
  __asm _emit 0x75 __asm _emit 0xb0
  __asm mov ecx, dword ptr [esp + 0x34]
  __asm pop edi
  __asm mov dword ptr [ecx], esi
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm mov dword ptr [ecx], esi
  __asm mov dword ptr [esi + 4], ecx
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0x20
  __asm ret 8
  __asm mov ecx, dword ptr [esp + 0x34]
  __asm mov edx, dword ptr [esp + 0x1c]
  __asm mov ebx, dword ptr [esp + 0x38]
  __asm mov dword ptr [ecx], edx
  __asm mov dword ptr [ecx + 4], edx
  __asm cmp esi, ebx
  __asm jne LAB_102344b0
  __asm mov eax, dword ptr [esp + 0x10]
  __asm pop edi
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, ebx
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm add esp, 0x20
  __asm ret 8
}





// Reference entry 10234880; body size 419 bytes.
#line 1 "ENTRY_10234880"

__declspec(naked) void FUN_10234880(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm sub esp, 0x14
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x24]
  __asm mov ebx, ecx
  __asm cmp edx, ebp
  __asm je LAB_102349ef
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
  __asm push 0x10
  __asm push eax
  __asm call LAB_100131d8
  __asm dec dword ptr [ebx + 8]
  __asm add esp, 8
  __asm cmp edi, dword ptr [esp + 0x1c]
  __asm _emit 0x74 __asm _emit 0x2d
  __asm cmp esi, ebp
  __asm _emit 0x75 __asm _emit 0xe2
  __asm mov eax, dword ptr [esp + 0x14]
  __asm cmp eax, dword ptr [esp + 0x28]
  __asm jne LAB_102349e4
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
  __asm _emit 0x75 __asm _emit 0x08
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov dword ptr [ecx], eax
  __asm _emit 0xeb __asm _emit 0x04
  __asm mov eax, dword ptr [esp + 0x2c]
  __asm mov dword ptr [ecx + 4], eax
  __asm cmp esi, ebp
  __asm je LAB_102349e4
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
  __asm _emit 0x66 __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, esi
  __asm mov edi, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x10
  __asm push eax
  __asm call LAB_100131d8
  __asm dec dword ptr [ebx + 8]
  __asm add esp, 8
  __asm cmp edi, dword ptr [esp + 0x1c]
  __asm _emit 0x74 __asm _emit 0x1f
  __asm cmp esi, ebp
  __asm _emit 0x75 __asm _emit 0xe2
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
  __asm jne LAB_10234970
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





// Reference entry 10234a90; body size 43 bytes.
#line 1 "ENTRY_10234a90"

__declspec(naked) void FUN_10234a90(void)

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





// Reference entry 10234ad0; body size 43 bytes.
#line 1 "ENTRY_10234ad0"

__declspec(naked) void FUN_10234ad0(void)

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





// Reference entry 10234b10; body size 43 bytes.
#line 1 "ENTRY_10234b10"

__declspec(naked) void FUN_10234b10(void)

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





// Reference entry 10234e60; body size 90 bytes.
#line 1 "ENTRY_10234e60"

__declspec(naked) void FUN_10234e60(void)

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





// Reference entry 10234ee0; body size 87 bytes.
#line 1 "ENTRY_10234ee0"

__declspec(naked) void FUN_10234ee0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xfffffff
  __asm _emit 0x77 __asm _emit 0x47
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





// Reference entry 10234f50; body size 87 bytes.
#line 1 "ENTRY_10234f50"

__declspec(naked) void FUN_10234f50(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xfffffff
  __asm _emit 0x77 __asm _emit 0x47
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





// Reference entry 10234fc0; body size 87 bytes.
#line 1 "ENTRY_10234fc0"

__declspec(naked) void FUN_10234fc0(void)

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





// Reference entry 10235030; body size 87 bytes.
#line 1 "ENTRY_10235030"

__declspec(naked) void FUN_10235030(void)

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





// Reference entry 102350a0; body size 87 bytes.
#line 1 "ENTRY_102350a0"

__declspec(naked) void FUN_102350a0(void)

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





// Reference entry 10235110; body size 3 bytes.
#line 1 "ENTRY_10235110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10235110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10235120; body size 68 bytes.
#line 1 "ENTRY_10235120"

__declspec(naked) void FUN_10235120(void)

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





// Reference entry 10235180; body size 68 bytes.
#line 1 "ENTRY_10235180"

__declspec(naked) void FUN_10235180(void)

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





// Reference entry 102351e0; body size 68 bytes.
#line 1 "ENTRY_102351e0"

__declspec(naked) void FUN_102351e0(void)

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





// Reference entry 10235240; body size 4 bytes.
#line 1 "ENTRY_10235240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10235240(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10235250; body size 4 bytes.
#line 1 "ENTRY_10235250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10235250(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10235260; body size 4 bytes.
#line 1 "ENTRY_10235260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10235260(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10235270; body size 14 bytes.
#line 1 "ENTRY_10235270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10235270(undefined4 param_1)

{
  thunk_FUN_1106b190(param_1,0,0);
  return;
}


// Reference entry 10235290; body size 94 bytes.
#line 1 "ENTRY_10235290"

__declspec(naked) void FUN_10235290(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x50
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm shr eax, 3
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x10
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_10076f76
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push dword ptr [edi]
  __asm push edi
  __asm call LAB_10076c79
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
  __asm call LAB_100857c4
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 10235310; body size 94 bytes.
#line 1 "ENTRY_10235310"

__declspec(naked) void FUN_10235310(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x50
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm shr eax, 3
  __asm push edi
  __asm lea edi, [esi + 4]
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x10
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, esi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_1007df1f
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm push dword ptr [edi]
  __asm push edi
  __asm call LAB_10001ce9
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
  __asm call LAB_1003651b
  __asm add esp, 0x14
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret
}





// Reference entry 10235390; body size 123 bytes.
#line 1 "ENTRY_10235390"

__declspec(naked) void FUN_10235390(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [edi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x6d
  __asm mov eax, dword ptr [edi + 0x1c]
  __asm shr eax, 3
  __asm cmp eax, ecx
  __asm _emit 0x76 __asm _emit 0x10
  __asm mov eax, dword ptr [edi + 4]
  __asm mov ecx, edi
  __asm push eax
  __asm push dword ptr [eax]
  __asm call LAB_1001d494
  __asm pop edi
  __asm pop ecx
  __asm ret
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov eax, dword ptr [ecx + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x15
  __asm push esi
  __asm mov esi, dword ptr [eax]
  __asm push 0x10
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, esi
  __asm test esi, esi
  __asm _emit 0x75 __asm _emit 0xed
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
  __asm call LAB_1006faff
  __asm add esp, 0xc
  __asm pop edi
  __asm pop ecx
  __asm ret
}





// Reference entry 10235490; body size 59 bytes.
#line 1 "ENTRY_10235490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10235490(int *param_1)

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


// Reference entry 10235a00; body size 22 bytes.
#line 1 "ENTRY_10235a00"

__declspec(naked) void FUN_10235a00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x11
  __asm _emit 0x77 __asm _emit 0x73
  __asm jmp dword ptr [eax*4 + LAB_10235a84]
  __asm mov eax, offset LAB_11884fe0
  __asm ret
}





// Reference entry 10235da0; body size 57 bytes.
#line 1 "ENTRY_10235da0"

__declspec(naked) void FUN_10235da0(void)

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





// Reference entry 10235df0; body size 54 bytes.
#line 1 "ENTRY_10235df0"

__declspec(naked) void FUN_10235df0(void)

{
  __asm mov ecx, dword ptr [esp + 0xc]
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





// Reference entry 10235e40; body size 54 bytes.
#line 1 "ENTRY_10235e40"

__declspec(naked) void FUN_10235e40(void)

{
  __asm mov ecx, dword ptr [esp + 0xc]
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





// Reference entry 10235e90; body size 60 bytes.
#line 1 "ENTRY_10235e90"

__declspec(naked) void FUN_10235e90(void)

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





// Reference entry 10235ee0; body size 57 bytes.
#line 1 "ENTRY_10235ee0"

__declspec(naked) void FUN_10235ee0(void)

{
  __asm mov ecx, dword ptr [esp + 8]
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





// Reference entry 10235f30; body size 57 bytes.
#line 1 "ENTRY_10235f30"

__declspec(naked) void FUN_10235f30(void)

{
  __asm mov ecx, dword ptr [esp + 8]
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





// Reference entry 10235fd0; body size 61 bytes.
#line 1 "ENTRY_10235fd0"

__declspec(naked) void FUN_10235fd0(void)

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





// Reference entry 10236020; body size 61 bytes.
#line 1 "ENTRY_10236020"

__declspec(naked) void FUN_10236020(void)

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





// Reference entry 10236070; body size 61 bytes.
#line 1 "ENTRY_10236070"

__declspec(naked) void FUN_10236070(void)

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





// Reference entry 102360c0; body size 9 bytes.
#line 1 "ENTRY_102360c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102360c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102360d0; body size 9 bytes.
#line 1 "ENTRY_102360d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102360d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10236140; body size 32 bytes.
#line 1 "ENTRY_10236140"

__declspec(naked) void FUN_10236140(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}





// Reference entry 10236590; body size 12 bytes.
#line 1 "ENTRY_10236590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10236590(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102365a0; body size 12 bytes.
#line 1 "ENTRY_102365a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_102365a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 102365b0; body size 4 bytes.
#line 1 "ENTRY_102365b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102365b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 102365c0; body size 11 bytes.
#line 1 "ENTRY_102365c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_102365c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 102365d0; body size 11 bytes.
#line 1 "ENTRY_102365d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_102365d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1023ac10; body size 5 bytes.
#line 1 "ENTRY_1023ac10"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1023ac10(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 1023ac20; body size 5 bytes.
#line 1 "ENTRY_1023ac20"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1023ac20(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 1023ac30; body size 5 bytes.
#line 1 "ENTRY_1023ac30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1023ac30(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 1023ac40; body size 5 bytes.
#line 1 "ENTRY_1023ac40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1023ac40(int param_1)

{ __asm jmp FUN_100911af }


// Reference entry 1023b270; body size 16 bytes.
#line 1 "ENTRY_1023b270"

__declspec(naked) void FUN_1023b270(void)

{
  __asm push dword ptr [esp + 8]
  __asm push dword ptr [esp + 8]
  __asm call LAB_1001d2eb
  __asm ret 8
}





// Reference entry 1023b290; body size 20 bytes.
#line 1 "ENTRY_1023b290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_1023b290(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_101176e0<>(param_1,param_2);
  return (undefined4)(param_1);
}


// Reference entry 1023c160; body size 39 bytes.
#line 1 "ENTRY_1023c160"

__declspec(naked) void FUN_1023c160(void)

{
  __asm cmp dword ptr [ecx + 0xec], 0
  __asm _emit 0x74 __asm _emit 0x19
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x02 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x09 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}





// Reference entry 102409f0; body size 6 bytes.
#line 1 "ENTRY_102409f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102409f0(void)

{
  return (char *)("SCIActionContext");
}


// Reference entry 10240a00; body size 6 bytes.
#line 1 "ENTRY_10240a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10240a00(void)

{
  return (char *)("SCIController");
}


// Reference entry 10240a10; body size 6 bytes.
#line 1 "ENTRY_10240a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10240a10(void)

{
  return (char *)("SCINewWizController");
}


// Reference entry 10240a20; body size 6 bytes.
#line 1 "ENTRY_10240a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10240a20(void)

{
  return (char *)("SCIWifiDelegate");
}


// Reference entry 10241e00; body size 156 bytes.
#line 1 "ENTRY_10241e00"

__declspec(naked) void FUN_10241e00(void)

{
  __asm push ebx
  __asm mov bl, byte ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm test bl, bl
  __asm _emit 0x75 __asm _emit 0x10
  __asm cmp dword ptr [esi + 0xec], 0
  __asm _emit 0x75 __asm _emit 0x07
  __asm pop esi
  __asm xor al, al
  __asm pop ebx
  __asm ret 8
  __asm cmp dword ptr [esi + 0xec], 1
  __asm movzx eax, bl
  __asm sete bh
  __asm xor eax, 1
  __asm inc eax
  __asm xor bh, bl
  __asm mov dword ptr [esi + 0xec], eax
  __asm mov eax, dword ptr [esi + 0xf0]
  __asm push edi
  __asm test eax, eax
  __asm _emit 0x74 __asm _emit 0x13
  __asm push eax
  __asm lea ecx, [esi + 0xc]
  __asm call LAB_1001ec63
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test bl, bl
  __asm _emit 0x74 __asm _emit 0x3d
  __asm cmp byte ptr [esp + 0x14], 0
  __asm mov ecx, 0x927c0
  __asm mov eax, 0x1d4c0
  __asm cmovne eax, ecx
  __asm lea ecx, [esi + 0xc]
  __asm push eax
  __asm call LAB_100913f8
  __asm cmp dword ptr [esi + 0xf4], 0
  __asm mov dword ptr [esi + 0xf0], eax
  __asm _emit 0x75 __asm _emit 0x13
  __asm push 0x927c0
  __asm lea ecx, [esi + 0xc]
  __asm call LAB_100913f8
  __asm mov dword ptr [esi + 0xf4], eax
  __asm pop edi
  __asm pop esi
  __asm mov al, bh
  __asm pop ebx
  __asm ret 8
}





// Reference entry 10242860; body size 7 bytes.
#line 1 "ENTRY_10242860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10242860(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x6ca));
}


// Reference entry 10242a90; body size 10 bytes.
#line 1 "ENTRY_10242a90"

__declspec(naked) void FUN_10242a90(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm cmp eax, dword ptr [ecx + 8]
  __asm setne al
  __asm ret
}





// Reference entry 10242aa0; body size 7 bytes.
#line 1 "ENTRY_10242aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10242aa0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10242ab0; body size 7 bytes.
#line 1 "ENTRY_10242ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10242ab0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10242ac0; body size 7 bytes.
#line 1 "ENTRY_10242ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10242ac0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10242b70; body size 7 bytes.
#line 1 "ENTRY_10242b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10242b70(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xd0c));
}


// Reference entry 10242fb0; body size 3 bytes.
#line 1 "ENTRY_10242fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10242fb0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10242fc0; body size 3 bytes.
#line 1 "ENTRY_10242fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10242fc0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10242fd0; body size 3 bytes.
#line 1 "ENTRY_10242fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10242fd0(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10242fe0; body size 6 bytes.
#line 1 "ENTRY_10242fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10242fe0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10242ff0; body size 6 bytes.
#line 1 "ENTRY_10242ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10242ff0(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10243000; body size 6 bytes.
#line 1 "ENTRY_10243000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243000(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10243010; body size 6 bytes.
#line 1 "ENTRY_10243010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243010(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10243020; body size 6 bytes.
#line 1 "ENTRY_10243020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243020(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10243030; body size 6 bytes.
#line 1 "ENTRY_10243030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243030(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10243040; body size 6 bytes.
#line 1 "ENTRY_10243040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243040(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10243050; body size 6 bytes.
#line 1 "ENTRY_10243050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243050(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10243060; body size 6 bytes.
#line 1 "ENTRY_10243060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243060(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10243070; body size 6 bytes.
#line 1 "ENTRY_10243070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243070(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10243080; body size 6 bytes.
#line 1 "ENTRY_10243080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243080(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10243090; body size 6 bytes.
#line 1 "ENTRY_10243090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243090(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10243630; body size 5 bytes.
#line 1 "ENTRY_10243630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10243640; body size 5 bytes.
#line 1 "ENTRY_10243640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10243640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10243690; body size 3 bytes.
#line 1 "ENTRY_10243690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102436a0; body size 3 bytes.
#line 1 "ENTRY_102436a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102436a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102436b0; body size 3 bytes.
#line 1 "ENTRY_102436b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102436b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102436c0; body size 3 bytes.
#line 1 "ENTRY_102436c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102436c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102436d0; body size 3 bytes.
#line 1 "ENTRY_102436d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102436d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102436e0; body size 3 bytes.
#line 1 "ENTRY_102436e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102436e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102436f0; body size 3 bytes.
#line 1 "ENTRY_102436f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102436f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243700; body size 3 bytes.
#line 1 "ENTRY_10243700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243700(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243710; body size 3 bytes.
#line 1 "ENTRY_10243710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243710(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243720; body size 3 bytes.
#line 1 "ENTRY_10243720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243720(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243730; body size 3 bytes.
#line 1 "ENTRY_10243730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243730(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243740; body size 3 bytes.
#line 1 "ENTRY_10243740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243740(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243750; body size 3 bytes.
#line 1 "ENTRY_10243750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243750(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243760; body size 3 bytes.
#line 1 "ENTRY_10243760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243760(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243770; body size 3 bytes.
#line 1 "ENTRY_10243770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243770(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243780; body size 3 bytes.
#line 1 "ENTRY_10243780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243780(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243790; body size 3 bytes.
#line 1 "ENTRY_10243790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10243790(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10243d80; body size 28 bytes.
#line 1 "ENTRY_10243d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243d80(undefined4 *param_1)

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


// Reference entry 10243db0; body size 28 bytes.
#line 1 "ENTRY_10243db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243db0(undefined4 *param_1)

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


// Reference entry 10243de0; body size 28 bytes.
#line 1 "ENTRY_10243de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243de0(undefined4 *param_1)

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


// Reference entry 10243e10; body size 28 bytes.
#line 1 "ENTRY_10243e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243e10(undefined4 *param_1)

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


// Reference entry 10243e40; body size 28 bytes.
#line 1 "ENTRY_10243e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243e40(undefined4 *param_1)

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


// Reference entry 10243e70; body size 28 bytes.
#line 1 "ENTRY_10243e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243e70(undefined4 *param_1)

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


// Reference entry 10243ea0; body size 28 bytes.
#line 1 "ENTRY_10243ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243ea0(undefined4 *param_1)

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


// Reference entry 10243ed0; body size 28 bytes.
#line 1 "ENTRY_10243ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243ed0(undefined4 *param_1)

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


// Reference entry 10243f00; body size 28 bytes.
#line 1 "ENTRY_10243f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243f00(undefined4 *param_1)

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


// Reference entry 10243f30; body size 28 bytes.
#line 1 "ENTRY_10243f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243f30(undefined4 *param_1)

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


// Reference entry 10243f60; body size 28 bytes.
#line 1 "ENTRY_10243f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243f60(undefined4 *param_1)

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


// Reference entry 10243f90; body size 28 bytes.
#line 1 "ENTRY_10243f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243f90(undefined4 *param_1)

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


// Reference entry 10243fc0; body size 28 bytes.
#line 1 "ENTRY_10243fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243fc0(undefined4 *param_1)

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


// Reference entry 10243ff0; body size 28 bytes.
#line 1 "ENTRY_10243ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10243ff0(undefined4 *param_1)

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


// Reference entry 10244020; body size 28 bytes.
#line 1 "ENTRY_10244020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10244020(undefined4 *param_1)

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


// Reference entry 10244050; body size 28 bytes.
#line 1 "ENTRY_10244050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10244050(undefined4 *param_1)

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


// Reference entry 10244080; body size 20 bytes.
#line 1 "ENTRY_10244080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10244080(int *param_1)

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


// Reference entry 10244e80; body size 9 bytes.
#line 1 "ENTRY_10244e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10244e80(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10244e90; body size 9 bytes.
#line 1 "ENTRY_10244e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10244e90(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10244ea0; body size 9 bytes.
#line 1 "ENTRY_10244ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10244ea0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10244eb0; body size 9 bytes.
#line 1 "ENTRY_10244eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10244eb0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10244ec0; body size 8 bytes.
#line 1 "ENTRY_10244ec0"

__declspec(naked) void FUN_10244ec0(void)

{
  __asm add ecx, 4
  __asm jmp LAB_100913f8
}







// Reference entry 10244ed0; body size 8 bytes.
#line 1 "ENTRY_10244ed0"

__declspec(naked) void FUN_10244ed0(void)

{
  __asm add ecx, 4
  __asm jmp LAB_1001ec63
}







// Reference entry 10245910; body size 33 bytes.
#line 1 "ENTRY_10245910"

__declspec(naked) void FUN_10245910(void)

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





// Reference entry 10245a50; body size 18 bytes.
#line 1 "ENTRY_10245a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10245a50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10245a70; body size 18 bytes.
#line 1 "ENTRY_10245a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10245a70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10245a90; body size 18 bytes.
#line 1 "ENTRY_10245a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10245a90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10245ab0; body size 18 bytes.
#line 1 "ENTRY_10245ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10245ab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10245ad0; body size 91 bytes.
#line 1 "ENTRY_10245ad0"

__declspec(naked) void FUN_10245ad0(void)

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





// Reference entry 10245b50; body size 26 bytes.
#line 1 "ENTRY_10245b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10245b50(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10245bf0; body size 78 bytes.
#line 1 "ENTRY_10245bf0"

__declspec(naked) void FUN_10245bf0(void)

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





// Reference entry 10245c60; body size 78 bytes.
#line 1 "ENTRY_10245c60"

__declspec(naked) void FUN_10245c60(void)

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





// Reference entry 10245ef0; body size 25 bytes.
#line 1 "ENTRY_10245ef0"

__declspec(naked) void FUN_10245ef0(void)

{
  __asm push 0x28
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}





// Reference entry 10245f10; body size 25 bytes.
#line 1 "ENTRY_10245f10"

__declspec(naked) void FUN_10245f10(void)

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





// Reference entry 10245f30; body size 13 bytes.
#line 1 "ENTRY_10245f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10245f30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10245f40; body size 13 bytes.
#line 1 "ENTRY_10245f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10245f40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10245f50; body size 3 bytes.
#line 1 "ENTRY_10245f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10245f50(void)

{
  return;
}


// Reference entry 10245f60; body size 3 bytes.
#line 1 "ENTRY_10245f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10245f60(void)

{
  return;
}


// Reference entry 10245f70; body size 3 bytes.
#line 1 "ENTRY_10245f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10245f70(void)

{
  return;
}


// Reference entry 10246370; body size 15 bytes.
#line 1 "ENTRY_10246370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10246370(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10246390; body size 15 bytes.
#line 1 "ENTRY_10246390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10246390(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x28);
  return;
}


// Reference entry 102463b0; body size 15 bytes.
#line 1 "ENTRY_102463b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102463b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 102465b0; body size 22 bytes.
#line 1 "ENTRY_102465b0"

__declspec(naked) void FUN_102465b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x6666666
  __asm ja LAB_10070f3b
  __asm lea eax, [eax + eax*4]
  __asm shl eax, 3
  __asm ret
}





// Reference entry 102465d0; body size 5 bytes.
#line 1 "ENTRY_102465d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102465d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102465e0; body size 5 bytes.
#line 1 "ENTRY_102465e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102465e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102465f0; body size 5 bytes.
#line 1 "ENTRY_102465f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102465f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246600; body size 5 bytes.
#line 1 "ENTRY_10246600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246610; body size 5 bytes.
#line 1 "ENTRY_10246610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246620; body size 5 bytes.
#line 1 "ENTRY_10246620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246620(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246630; body size 5 bytes.
#line 1 "ENTRY_10246630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246640; body size 5 bytes.
#line 1 "ENTRY_10246640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246650; body size 5 bytes.
#line 1 "ENTRY_10246650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246660; body size 5 bytes.
#line 1 "ENTRY_10246660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246660(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246670; body size 5 bytes.
#line 1 "ENTRY_10246670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102468d0; body size 15 bytes.
#line 1 "ENTRY_102468d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102468d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 102468f0; body size 15 bytes.
#line 1 "ENTRY_102468f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102468f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10246910; body size 15 bytes.
#line 1 "ENTRY_10246910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246910(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10246930; body size 5 bytes.
#line 1 "ENTRY_10246930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246940; body size 5 bytes.
#line 1 "ENTRY_10246940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10246940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246950; body size 6 bytes.
#line 1 "ENTRY_10246950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10246950(void)

{
  return (char *)("SCIAutomationDelegate");
}


// Reference entry 10246960; body size 6 bytes.
#line 1 "ENTRY_10246960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10246960(void)

{
  return (char *)("SCIControllerTest");
}


// Reference entry 10246970; body size 27 bytes.
#line 1 "ENTRY_10246970"

__declspec(naked) void FUN_10246970(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_118897bc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 102469a0; body size 16 bytes.
#line 1 "ENTRY_102469a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102469a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102469c0; body size 16 bytes.
#line 1 "ENTRY_102469c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102469c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102469e0; body size 9 bytes.
#line 1 "ENTRY_102469e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102469e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10246a90; body size 16 bytes.
#line 1 "ENTRY_10246a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10246a90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10246ab0; body size 16 bytes.
#line 1 "ENTRY_10246ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10246ab0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10246ad0; body size 3 bytes.
#line 1 "ENTRY_10246ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10246ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246ae0; body size 3 bytes.
#line 1 "ENTRY_10246ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10246ae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10246af0; body size 52 bytes.
#line 1 "ENTRY_10246af0"

__declspec(naked) void FUN_10246af0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x28
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





// Reference entry 10246f90; body size 9 bytes.
#line 1 "ENTRY_10246f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10246f90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIControllerTest);
  return (undefined4 *)(param_1);
}


// Reference entry 102473d0; body size 5 bytes.
#line 1 "ENTRY_102473d0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102473d0(undefined4 *param_1)

{ __asm jmp FUN_100679f9 }


// Reference entry 10247770; body size 7 bytes.
#line 1 "ENTRY_10247770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10247770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 102478f0; body size 3 bytes.
#line 1 "ENTRY_102478f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102478f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10247900; body size 7 bytes.
#line 1 "ENTRY_10247900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10247900(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10247910; body size 7 bytes.
#line 1 "ENTRY_10247910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10247910(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10247920; body size 7 bytes.
#line 1 "ENTRY_10247920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10247920(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10247930; body size 7 bytes.
#line 1 "ENTRY_10247930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10247930(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10247940; body size 3 bytes.
#line 1 "ENTRY_10247940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10247940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10247cd0; body size 6 bytes.
#line 1 "ENTRY_10247cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10247cd0(void)

{
  return (char *)("SCControllerTest");
}


// Reference entry 10247ce0; body size 31 bytes.
#line 1 "ENTRY_10247ce0"

__declspec(naked) void FUN_10247ce0(void)

{
  __asm push esi
  __asm push 0x28
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





// Reference entry 10247d10; body size 31 bytes.
#line 1 "ENTRY_10247d10"

__declspec(naked) void FUN_10247d10(void)

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





// Reference entry 10247d60; body size 3 bytes.
#line 1 "ENTRY_10247d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10247d60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10247d70; body size 3 bytes.
#line 1 "ENTRY_10247d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10247d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10247d80; body size 3 bytes.
#line 1 "ENTRY_10247d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10247d80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10247d90; body size 3 bytes.
#line 1 "ENTRY_10247d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10247d90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10247da0; body size 3 bytes.
#line 1 "ENTRY_10247da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10247da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10247db0; body size 3 bytes.
#line 1 "ENTRY_10247db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10247db0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10247dc0; body size 3 bytes.
#line 1 "ENTRY_10247dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10247dc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10247e00; body size 3 bytes.
#line 1 "ENTRY_10247e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10247e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10248510; body size 57 bytes.
#line 1 "ENTRY_10248510"

__declspec(naked) void FUN_10248510(void)

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





// Reference entry 10248560; body size 57 bytes.
#line 1 "ENTRY_10248560"

__declspec(naked) void FUN_10248560(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*4]
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





// Reference entry 102485b0; body size 57 bytes.
#line 1 "ENTRY_102485b0"

__declspec(naked) void FUN_102485b0(void)

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





// Reference entry 102493e0; body size 6 bytes.
#line 1 "ENTRY_102493e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102493e0(void)

{
  return (char *)("SCIAutomationDelegate");
}


// Reference entry 102493f0; body size 6 bytes.
#line 1 "ENTRY_102493f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102493f0(void)

{
  return (char *)("SCIControllerTest");
}


// Reference entry 10249960; body size 3 bytes.
#line 1 "ENTRY_10249960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10249960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10249a90; body size 28 bytes.
#line 1 "ENTRY_10249a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10249a90(undefined4 *param_1)

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


// Reference entry 10249ac0; body size 20 bytes.
#line 1 "ENTRY_10249ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10249ac0(int *param_1)

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


// Reference entry 10249c10; body size 8 bytes.
#line 1 "ENTRY_10249c10"

__declspec(naked) void FUN_10249c10(void)

{
  __asm add ecx, 4
  __asm jmp LAB_10036af2
}







// Reference entry 10249c20; body size 22 bytes.
#line 1 "ENTRY_10249c20"

__declspec(naked) void FUN_10249c20(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xd
  __asm _emit 0x77 __asm _emit 0x5b
  __asm jmp dword ptr [eax*4 + LAB_10249c8c]
  __asm mov eax, offset LAB_11889948
  __asm ret
}





// Reference entry 10249cf0; body size 91 bytes.
#line 1 "ENTRY_10249cf0"

__declspec(naked) void FUN_10249cf0(void)

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





// Reference entry 10249d70; body size 26 bytes.
#line 1 "ENTRY_10249d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10249d70(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10249d90; body size 26 bytes.
#line 1 "ENTRY_10249d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10249d90(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10249db0; body size 6 bytes.
#line 1 "ENTRY_10249db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10249db0(void)

{
  return (char *)("SCICrashReportManager");
}


// Reference entry 10249dc0; body size 27 bytes.
#line 1 "ENTRY_10249dc0"

__declspec(naked) void FUN_10249dc0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11889d78
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1024a1b0; body size 9 bytes.
#line 1 "ENTRY_1024a1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1024a1b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCICrashReportManager);
  return (undefined4 *)(param_1);
}


// Reference entry 1024a580; body size 7 bytes.
#line 1 "ENTRY_1024a580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024a580(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1024a670; body size 3 bytes.
#line 1 "ENTRY_1024a670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024a670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024a680; body size 3 bytes.
#line 1 "ENTRY_1024a680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024a680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024a690; body size 3 bytes.
#line 1 "ENTRY_1024a690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024a690(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024a940; body size 9 bytes.
#line 1 "ENTRY_1024a940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024a940(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1024ac00; body size 6 bytes.
#line 1 "ENTRY_1024ac00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1024ac00(void)

{
  return (char *)("SCICrashReportManager");
}


// Reference entry 1024afb0; body size 3 bytes.
#line 1 "ENTRY_1024afb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024afb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024afc0; body size 3 bytes.
#line 1 "ENTRY_1024afc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024afc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024b0f0; body size 28 bytes.
#line 1 "ENTRY_1024b0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024b0f0(undefined4 *param_1)

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


// Reference entry 1024b120; body size 28 bytes.
#line 1 "ENTRY_1024b120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024b120(undefined4 *param_1)

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


// Reference entry 1024b150; body size 28 bytes.
#line 1 "ENTRY_1024b150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024b150(undefined4 *param_1)

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


// Reference entry 1024c1a0; body size 26 bytes.
#line 1 "ENTRY_1024c1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1024c1a0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1024c1c0; body size 25 bytes.
#line 1 "ENTRY_1024c1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1024c1c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1024c1e0; body size 6 bytes.
#line 1 "ENTRY_1024c1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1024c1e0(void)

{
  return (char *)("SCIEulaManager");
}


// Reference entry 1024c1f0; body size 27 bytes.
#line 1 "ENTRY_1024c1f0"

__declspec(naked) void FUN_1024c1f0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188a09c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1024c260; body size 68 bytes.
#line 1 "ENTRY_1024c260"

__declspec(naked) void FUN_1024c260(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188a09c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], offset LAB_1188a0f0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 1024c2c0; body size 9 bytes.
#line 1 "ENTRY_1024c2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1024c2c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIEulaManager);
  return (undefined4 *)(param_1);
}


// Reference entry 1024c2d0; body size 19 bytes.
#line 1 "ENTRY_1024c2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024c2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1024c4c0; body size 7 bytes.
#line 1 "ENTRY_1024c4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024c4c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1024c4d0; body size 3 bytes.
#line 1 "ENTRY_1024c4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024c4d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024c670; body size 9 bytes.
#line 1 "ENTRY_1024c670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024c670(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1024df00; body size 6 bytes.
#line 1 "ENTRY_1024df00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1024df00(void)

{
  return (char *)("SCIEulaManager");
}


// Reference entry 1024e040; body size 3 bytes.
#line 1 "ENTRY_1024e040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024e040(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024e170; body size 28 bytes.
#line 1 "ENTRY_1024e170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024e170(undefined4 *param_1)

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


// Reference entry 1024e5b0; body size 106 bytes.
#line 1 "ENTRY_1024e5b0"

__declspec(naked) void FUN_1024e5b0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], offset LAB_1188a81c
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





// Reference entry 1024e750; body size 26 bytes.
#line 1 "ENTRY_1024e750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1024e750(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1024e770; body size 25 bytes.
#line 1 "ENTRY_1024e770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1024e770(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1024e790; body size 12 bytes.
#line 1 "ENTRY_1024e790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1024e790(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1024e7a0; body size 40 bytes.
#line 1 "ENTRY_1024e7a0"

__declspec(naked) void FUN_1024e7a0(void)

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





// Reference entry 1024e900; body size 122 bytes.
#line 1 "ENTRY_1024e900"

__declspec(naked) void FUN_1024e900(void)

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
  __asm mov dword ptr [esi], offset LAB_1188a81c
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





// Reference entry 1024e9a0; body size 12 bytes.
#line 1 "ENTRY_1024e9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_1024e9a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1024e9b0; body size 5 bytes.
#line 1 "ENTRY_1024e9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1024e9b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1024e9c0; body size 5 bytes.
#line 1 "ENTRY_1024e9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1024e9c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1024e9d0; body size 5 bytes.
#line 1 "ENTRY_1024e9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1024e9d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1024e9e0; body size 5 bytes.
#line 1 "ENTRY_1024e9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1024e9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1024e9f0; body size 6 bytes.
#line 1 "ENTRY_1024e9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1024e9f0(void)

{
  return (char *)("SCIExperimentManager");
}


// Reference entry 1024ea00; body size 40 bytes.
#line 1 "ENTRY_1024ea00"

__declspec(naked) void FUN_1024ea00(void)

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





// Reference entry 1024ea40; body size 5 bytes.
#line 1 "ENTRY_1024ea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1024ea40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1024ecf0; body size 27 bytes.
#line 1 "ENTRY_1024ecf0"

__declspec(naked) void FUN_1024ecf0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188a3a8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1024ed60; body size 16 bytes.
#line 1 "ENTRY_1024ed60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1024ed60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1024edc0; body size 16 bytes.
#line 1 "ENTRY_1024edc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1024edc0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1024ee30; body size 3 bytes.
#line 1 "ENTRY_1024ee30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024ee30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1024ee40; body size 10 bytes.
#line 1 "ENTRY_1024ee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1024ee40(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 1024efc0; body size 42 bytes.
#line 1 "ENTRY_1024efc0"

__declspec(naked) void FUN_1024efc0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188a7f4
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1024f000; body size 42 bytes.
#line 1 "ENTRY_1024f000"

__declspec(naked) void FUN_1024f000(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188a41c
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1024f2d0; body size 9 bytes.
#line 1 "ENTRY_1024f2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1024f2d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIExperimentManager);
  return (undefined4 *)(param_1);
}


// Reference entry 1024f5b0; body size 34 bytes.
#line 1 "ENTRY_1024f5b0"

__declspec(naked) void FUN_1024f5b0(void)

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





// Reference entry 1024f610; body size 19 bytes.
#line 1 "ENTRY_1024f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024f610(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1024f630; body size 19 bytes.
#line 1 "ENTRY_1024f630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024f630(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1024f7b0; body size 7 bytes.
#line 1 "ENTRY_1024f7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024f7b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1024f7e0; body size 18 bytes.
#line 1 "ENTRY_1024f7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1024f7e0(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 1024f8e0; body size 3 bytes.
#line 1 "ENTRY_1024f8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024f8e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024f8f0; body size 3 bytes.
#line 1 "ENTRY_1024f8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024f8f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024f900; body size 7 bytes.
#line 1 "ENTRY_1024f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1024f900(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1024f910; body size 3 bytes.
#line 1 "ENTRY_1024f910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024f910(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024f920; body size 7 bytes.
#line 1 "ENTRY_1024f920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1024f920(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1024f930; body size 7 bytes.
#line 1 "ENTRY_1024f930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1024f930(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1024f940; body size 8 bytes.
#line 1 "ENTRY_1024f940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1024f940(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1024f950; body size 8 bytes.
#line 1 "ENTRY_1024f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1024f950(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 1024f960; body size 3 bytes.
#line 1 "ENTRY_1024f960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024f960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024f970; body size 3 bytes.
#line 1 "ENTRY_1024f970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024f970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1024f980; body size 29 bytes.
#line 1 "ENTRY_1024f980"

__declspec(naked) void FUN_1024f980(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}





// Reference entry 1024f9b0; body size 29 bytes.
#line 1 "ENTRY_1024f9b0"

__declspec(naked) void FUN_1024f9b0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}





// Reference entry 1024fdd0; body size 8 bytes.
#line 1 "ENTRY_1024fdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1024fdd0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1024fdf0; body size 4 bytes.
#line 1 "ENTRY_1024fdf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1024fdf0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1024fe00; body size 7 bytes.
#line 1 "ENTRY_1024fe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1024fe00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1024fe20; body size 26 bytes.
#line 1 "ENTRY_1024fe20"

__declspec(naked) void FUN_1024fe20(void)

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





// Reference entry 1024fe40; body size 26 bytes.
#line 1 "ENTRY_1024fe40"

__declspec(naked) void FUN_1024fe40(void)

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





// Reference entry 1024fe60; body size 76 bytes.
#line 1 "ENTRY_1024fe60"

__declspec(naked) void FUN_1024fe60(void)

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





// Reference entry 1024fec0; body size 10 bytes.
#line 1 "ENTRY_1024fec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1024fec0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10250120; body size 32 bytes.
#line 1 "ENTRY_10250120"

__declspec(naked) void FUN_10250120(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}





// Reference entry 10250d70; body size 23 bytes.
#line 1 "ENTRY_10250d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10250d70(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x794));
  return (SCStr *)(param_2);
}


// Reference entry 10251f20; body size 6 bytes.
#line 1 "ENTRY_10251f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10251f20(void)

{
  return (char *)("SCIExperimentManager");
}


// Reference entry 10252bd0; body size 3 bytes.
#line 1 "ENTRY_10252bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10252bd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10252be0; body size 3 bytes.
#line 1 "ENTRY_10252be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10252be0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10252bf0; body size 3 bytes.
#line 1 "ENTRY_10252bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10252bf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10252f10; body size 28 bytes.
#line 1 "ENTRY_10252f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10252f10(undefined4 *param_1)

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


// Reference entry 10252f40; body size 28 bytes.
#line 1 "ENTRY_10252f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10252f40(undefined4 *param_1)

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


// Reference entry 10252f70; body size 28 bytes.
#line 1 "ENTRY_10252f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10252f70(undefined4 *param_1)

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


// Reference entry 102534f0; body size 129 bytes.
#line 1 "ENTRY_102534f0"

__declspec(naked) void FUN_102534f0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm push offset LAB_1187a528
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x66
  __asm push offset LAB_1187a54c
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x56
  __asm push offset LAB_1187a570
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x46
  __asm push offset LAB_1187a58c
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x36
  __asm push offset LAB_1187a5f4
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x26
  __asm push offset LAB_1187a614
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x16
  __asm push offset LAB_1187a634
  __asm mov ecx, esi
  __asm call LAB_1008ca83
  __asm test al, al
  __asm _emit 0x75 __asm _emit 0x06
  __asm mov al, 1
  __asm pop esi
  __asm ret 4
  __asm xor al, al
  __asm pop esi
  __asm ret 4
}





// Reference entry 10253920; body size 18 bytes.
#line 1 "ENTRY_10253920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10253920(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10253940; body size 25 bytes.
#line 1 "ENTRY_10253940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10253940(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10253960; body size 22 bytes.
#line 1 "ENTRY_10253960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10253960(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10253980; body size 18 bytes.
#line 1 "ENTRY_10253980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10253980(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10253da0; body size 60 bytes.
#line 1 "ENTRY_10253da0"

__declspec(naked) void FUN_10253da0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm xorps xmm0, xmm0
  __asm mov eax, esi
  __asm movq qword ptr [esi + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}





// Reference entry 10253df0; body size 22 bytes.
#line 1 "ENTRY_10253df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10253df0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10254690; body size 62 bytes.
#line 1 "ENTRY_10254690"

__declspec(naked) void FUN_10254690(void)

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
  __asm movq qword ptr [esi + 4], xmm0
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}





// Reference entry 102546e0; body size 26 bytes.
#line 1 "ENTRY_102546e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102546e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10254700; body size 25 bytes.
#line 1 "ENTRY_10254700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10254700(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10254720; body size 26 bytes.
#line 1 "ENTRY_10254720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10254720(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10254740; body size 26 bytes.
#line 1 "ENTRY_10254740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10254740(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10254760; body size 91 bytes.
#line 1 "ENTRY_10254760"

__declspec(naked) void FUN_10254760(void)

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





// Reference entry 102547e0; body size 12 bytes.
#line 1 "ENTRY_102547e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_102547e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 102547f0; body size 12 bytes.
#line 1 "ENTRY_102547f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_102547f0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10254800; body size 25 bytes.
#line 1 "ENTRY_10254800"

__declspec(naked) void FUN_10254800(void)

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





// Reference entry 10254ac0; body size 13 bytes.
#line 1 "ENTRY_10254ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10254ac0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10254ad0; body size 13 bytes.
#line 1 "ENTRY_10254ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10254ad0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10254ae0; body size 3 bytes.
#line 1 "ENTRY_10254ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10254ae0(void)

{
  return;
}


// Reference entry 10254b90; body size 39 bytes.
#line 1 "ENTRY_10254b90"

__declspec(naked) void FUN_10254b90(void)

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





// Reference entry 10254bc0; body size 39 bytes.
#line 1 "ENTRY_10254bc0"

__declspec(naked) void FUN_10254bc0(void)

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





// Reference entry 10254bf0; body size 39 bytes.
#line 1 "ENTRY_10254bf0"

__declspec(naked) void FUN_10254bf0(void)

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





// Reference entry 102550d0; body size 15 bytes.
#line 1 "ENTRY_102550d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_102550d0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 102551b0; body size 19 bytes.
#line 1 "ENTRY_102551b0"

__declspec(naked) void FUN_102551b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x7ffffff
  __asm ja LAB_10070f3b
  __asm shl eax, 5
  __asm ret
}





// Reference entry 102551d0; body size 7 bytes.
#line 1 "ENTRY_102551d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102551d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10255850; body size 5 bytes.
#line 1 "ENTRY_10255850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10255850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10255860; body size 37 bytes.
#line 1 "ENTRY_10255860"

__declspec(naked) void FUN_10255860(void)

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





// Reference entry 10255dd0; body size 5 bytes.
#line 1 "ENTRY_10255dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10255dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10255f20; body size 5 bytes.
#line 1 "ENTRY_10255f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10255f20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10255f80; body size 5 bytes.
#line 1 "ENTRY_10255f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10255f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10255f90; body size 5 bytes.
#line 1 "ENTRY_10255f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10255f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10255fa0; body size 5 bytes.
#line 1 "ENTRY_10255fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10255fa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10255fb0; body size 5 bytes.
#line 1 "ENTRY_10255fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10255fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10255fc0; body size 55 bytes.
#line 1 "ENTRY_10255fc0"

__declspec(naked) void FUN_10255fc0(void)

{
  __asm mov eax, dword ptr [esp + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov ecx, esi
  __asm push dword ptr [eax]
  __asm call LAB_10036c23
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46
  __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x0c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret
}





// Reference entry 10256010; body size 28 bytes.
#line 1 "ENTRY_10256010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10256010(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10256040; body size 28 bytes.
#line 1 "ENTRY_10256040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10256040(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10256070; body size 28 bytes.
#line 1 "ENTRY_10256070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10256070(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10256210; body size 15 bytes.
#line 1 "ENTRY_10256210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256210(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10256230; body size 15 bytes.
#line 1 "ENTRY_10256230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256230(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10256250; body size 5 bytes.
#line 1 "ENTRY_10256250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256260; body size 5 bytes.
#line 1 "ENTRY_10256260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256270; body size 5 bytes.
#line 1 "ENTRY_10256270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256280; body size 5 bytes.
#line 1 "ENTRY_10256280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102562e0; body size 5 bytes.
#line 1 "ENTRY_102562e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102562e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102562f0; body size 5 bytes.
#line 1 "ENTRY_102562f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102562f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256300; body size 5 bytes.
#line 1 "ENTRY_10256300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256360; body size 5 bytes.
#line 1 "ENTRY_10256360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256370; body size 5 bytes.
#line 1 "ENTRY_10256370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256380; body size 5 bytes.
#line 1 "ENTRY_10256380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256390; body size 5 bytes.
#line 1 "ENTRY_10256390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102563a0; body size 6 bytes.
#line 1 "ENTRY_102563a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102563a0(void)

{
  return (char *)("SCIInAppProduct");
}


// Reference entry 102563b0; body size 6 bytes.
#line 1 "ENTRY_102563b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102563b0(void)

{
  return (char *)("SCIInAppProductCallback");
}


// Reference entry 102563c0; body size 6 bytes.
#line 1 "ENTRY_102563c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102563c0(void)

{
  return (char *)("SCIInAppPurchaseCallback");
}


// Reference entry 102563d0; body size 6 bytes.
#line 1 "ENTRY_102563d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_102563d0(void)

{
  return (char *)("SCIInAppPurchaseManager");
}


// Reference entry 102566d0; body size 5 bytes.
#line 1 "ENTRY_102566d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102566d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102566e0; body size 5 bytes.
#line 1 "ENTRY_102566e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102566e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102566f0; body size 5 bytes.
#line 1 "ENTRY_102566f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102566f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256700; body size 5 bytes.
#line 1 "ENTRY_10256700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256710; body size 5 bytes.
#line 1 "ENTRY_10256710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10256710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10256f50; body size 54 bytes.
#line 1 "ENTRY_10256f50"

__declspec(naked) void FUN_10256f50(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_11881068
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], offset LAB_1188aaa4
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 10256fa0; body size 27 bytes.
#line 1 "ENTRY_10256fa0"

__declspec(naked) void FUN_10256fa0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188a9a4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10256fd0; body size 27 bytes.
#line 1 "ENTRY_10256fd0"

__declspec(naked) void FUN_10256fd0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188aa0c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10257000; body size 27 bytes.
#line 1 "ENTRY_10257000"

__declspec(naked) void FUN_10257000(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188aa5c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10257030; body size 27 bytes.
#line 1 "ENTRY_10257030"

__declspec(naked) void FUN_10257030(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188a964
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 10257060; body size 32 bytes.
#line 1 "ENTRY_10257060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10257060(undefined4 *param_2)
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


// Reference entry 102570d0; body size 32 bytes.
#line 1 "ENTRY_102570d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102570d0(undefined4 *param_2)
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


// Reference entry 10257180; body size 16 bytes.
#line 1 "ENTRY_10257180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257180(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10257240; body size 18 bytes.
#line 1 "ENTRY_10257240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10257240(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10257260; body size 3 bytes.
#line 1 "ENTRY_10257260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10257260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10257270; body size 3 bytes.
#line 1 "ENTRY_10257270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10257270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10257280; body size 3 bytes.
#line 1 "ENTRY_10257280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10257280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10257290; body size 3 bytes.
#line 1 "ENTRY_10257290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10257290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102572a0; body size 10 bytes.
#line 1 "ENTRY_102572a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102572a0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102572b0; body size 10 bytes.
#line 1 "ENTRY_102572b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102572b0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102572c0; body size 10 bytes.
#line 1 "ENTRY_102572c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102572c0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102572d0; body size 10 bytes.
#line 1 "ENTRY_102572d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102572d0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102572e0; body size 10 bytes.
#line 1 "ENTRY_102572e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102572e0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 102572f0; body size 10 bytes.
#line 1 "ENTRY_102572f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102572f0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10257340; body size 11 bytes.
#line 1 "ENTRY_10257340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10257340(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10257350; body size 11 bytes.
#line 1 "ENTRY_10257350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10257350(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102573e0; body size 11 bytes.
#line 1 "ENTRY_102573e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_102573e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 102573f0; body size 16 bytes.
#line 1 "ENTRY_102573f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_102573f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10257410; body size 21 bytes.
#line 1 "ENTRY_10257410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10257410(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10257430; body size 23 bytes.
#line 1 "ENTRY_10257430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257430(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10257450; body size 3 bytes.
#line 1 "ENTRY_10257450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10257450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10257460; body size 3 bytes.
#line 1 "ENTRY_10257460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10257460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102578b0; body size 52 bytes.
#line 1 "ENTRY_102578b0"

__declspec(naked) void FUN_102578b0(void)

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





// Reference entry 10257900; body size 23 bytes.
#line 1 "ENTRY_10257900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257900(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10257920; body size 9 bytes.
#line 1 "ENTRY_10257920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInAppProduct);
  return (undefined4 *)(param_1);
}


// Reference entry 10257930; body size 9 bytes.
#line 1 "ENTRY_10257930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInAppProductCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10257940; body size 9 bytes.
#line 1 "ENTRY_10257940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInAppPurchaseCallback);
  return (undefined4 *)(param_1);
}


// Reference entry 10257950; body size 9 bytes.
#line 1 "ENTRY_10257950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInAppPurchaseCallbackToken);
  return (undefined4 *)(param_1);
}


// Reference entry 10257960; body size 9 bytes.
#line 1 "ENTRY_10257960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10257960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInAppPurchaseManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10257da0; body size 28 bytes.
#line 1 "ENTRY_10257da0"

__declspec(naked) void FUN_10257da0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 10258a30; body size 7 bytes.
#line 1 "ENTRY_10258a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10258a30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10258a40; body size 7 bytes.
#line 1 "ENTRY_10258a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10258a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10258a50; body size 7 bytes.
#line 1 "ENTRY_10258a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10258a50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10258a60; body size 7 bytes.
#line 1 "ENTRY_10258a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10258a60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10258a70; body size 7 bytes.
#line 1 "ENTRY_10258a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10258a70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10258f00; body size 90 bytes.
#line 1 "ENTRY_10258f00"

__declspec(naked) void FUN_10258f00(void)

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
  __asm mov eax, dword ptr [edi + 4]
  __asm cmp eax, dword ptr [esi + 4]
  __asm _emit 0x74 __asm _emit 0x2f
  __asm mov ecx, dword ptr [esi + 8]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x16 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov ecx, dword ptr [edi + 8]
  __asm mov dword ptr [esi + 8], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}





// Reference entry 10258f70; body size 14 bytes.
#line 1 "ENTRY_10258f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10258f70(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10258f90; body size 14 bytes.
#line 1 "ENTRY_10258f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10258f90(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 102590f0; body size 12 bytes.
#line 1 "ENTRY_102590f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_102590f0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10259100; body size 3 bytes.
#line 1 "ENTRY_10259100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10259100(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10259110; body size 3 bytes.
#line 1 "ENTRY_10259110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10259110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10259120; body size 7 bytes.
#line 1 "ENTRY_10259120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10259120(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10259130; body size 3 bytes.
#line 1 "ENTRY_10259130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10259130(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10259140; body size 3 bytes.
#line 1 "ENTRY_10259140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10259140(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10259150; body size 8 bytes.
#line 1 "ENTRY_10259150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10259150(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10259160; body size 8 bytes.
#line 1 "ENTRY_10259160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10259160(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10259170; body size 3 bytes.
#line 1 "ENTRY_10259170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10259170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10259180; body size 3 bytes.
#line 1 "ENTRY_10259180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10259180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10259190; body size 3 bytes.
#line 1 "ENTRY_10259190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10259190(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102591a0; body size 3 bytes.
#line 1 "ENTRY_102591a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102591a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102591b0; body size 3 bytes.
#line 1 "ENTRY_102591b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102591b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 102591c0; body size 6 bytes.
#line 1 "ENTRY_102591c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102591c0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102591d0; body size 6 bytes.
#line 1 "ENTRY_102591d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102591d0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102591e0; body size 6 bytes.
#line 1 "ENTRY_102591e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_102591e0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 102596f0; body size 29 bytes.
#line 1 "ENTRY_102596f0"

__declspec(naked) void FUN_102596f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x11
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm push dword ptr [esp + 8]
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}





// Reference entry 10259720; body size 25 bytes.
#line 1 "ENTRY_10259720"

__declspec(naked) void FUN_10259720(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x0d
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 4]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 4
  __asm call LAB_1148a05a
}





// Reference entry 1025a050; body size 31 bytes.
#line 1 "ENTRY_1025a050"

__declspec(naked) void FUN_1025a050(void)

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





// Reference entry 1025a0a0; body size 49 bytes.
#line 1 "ENTRY_1025a0a0"

__declspec(naked) void FUN_1025a0a0(void)

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





// Reference entry 1025a170; body size 14 bytes.
#line 1 "ENTRY_1025a170"

__declspec(naked) void FUN_1025a170(void)

{
  __asm cmp dword ptr [ecx + 4], 0x7ffffff
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 1025a930; body size 8 bytes.
#line 1 "ENTRY_1025a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025a930(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1025a940; body size 8 bytes.
#line 1 "ENTRY_1025a940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025a940(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1025a950; body size 8 bytes.
#line 1 "ENTRY_1025a950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025a950(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1025a960; body size 8 bytes.
#line 1 "ENTRY_1025a960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025a960(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1025a970; body size 8 bytes.
#line 1 "ENTRY_1025a970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025a970(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1025a980; body size 8 bytes.
#line 1 "ENTRY_1025a980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025a980(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 1025a9e0; body size 3 bytes.
#line 1 "ENTRY_1025a9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025a9e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025a9f0; body size 3 bytes.
#line 1 "ENTRY_1025a9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025a9f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa00; body size 3 bytes.
#line 1 "ENTRY_1025aa00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa10; body size 3 bytes.
#line 1 "ENTRY_1025aa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa20; body size 3 bytes.
#line 1 "ENTRY_1025aa20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa30; body size 3 bytes.
#line 1 "ENTRY_1025aa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa40; body size 3 bytes.
#line 1 "ENTRY_1025aa40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa50; body size 3 bytes.
#line 1 "ENTRY_1025aa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa60; body size 3 bytes.
#line 1 "ENTRY_1025aa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa70; body size 3 bytes.
#line 1 "ENTRY_1025aa70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa80; body size 3 bytes.
#line 1 "ENTRY_1025aa80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aa90; body size 3 bytes.
#line 1 "ENTRY_1025aa90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aa90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025aaa0; body size 4 bytes.
#line 1 "ENTRY_1025aaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aaa0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1025aab0; body size 4 bytes.
#line 1 "ENTRY_1025aab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aab0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1025aac0; body size 4 bytes.
#line 1 "ENTRY_1025aac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aac0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1025aad0; body size 4 bytes.
#line 1 "ENTRY_1025aad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aad0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1025aae0; body size 4 bytes.
#line 1 "ENTRY_1025aae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aae0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1025aaf0; body size 4 bytes.
#line 1 "ENTRY_1025aaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aaf0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 1025ad90; body size 7 bytes.
#line 1 "ENTRY_1025ad90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025ad90(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1025ada0; body size 7 bytes.
#line 1 "ENTRY_1025ada0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025ada0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1025adb0; body size 7 bytes.
#line 1 "ENTRY_1025adb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025adb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1025adc0; body size 7 bytes.
#line 1 "ENTRY_1025adc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025adc0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1025add0; body size 7 bytes.
#line 1 "ENTRY_1025add0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025add0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1025ade0; body size 7 bytes.
#line 1 "ENTRY_1025ade0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025ade0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 1025adf0; body size 79 bytes.
#line 1 "ENTRY_1025adf0"

__declspec(naked) void FUN_1025adf0(void)

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





// Reference entry 1025aeb0; body size 3 bytes.
#line 1 "ENTRY_1025aeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_1025aeb0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 1025aec0; body size 11 bytes.
#line 1 "ENTRY_1025aec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025aec0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1025aed0; body size 6 bytes.
#line 1 "ENTRY_1025aed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025aed0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 1025aee0; body size 26 bytes.
#line 1 "ENTRY_1025aee0"

__declspec(naked) void FUN_1025aee0(void)

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





// Reference entry 1025af00; body size 26 bytes.
#line 1 "ENTRY_1025af00"

__declspec(naked) void FUN_1025af00(void)

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





// Reference entry 1025af20; body size 26 bytes.
#line 1 "ENTRY_1025af20"

__declspec(naked) void FUN_1025af20(void)

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





// Reference entry 1025af40; body size 26 bytes.
#line 1 "ENTRY_1025af40"

__declspec(naked) void FUN_1025af40(void)

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





// Reference entry 1025af60; body size 26 bytes.
#line 1 "ENTRY_1025af60"

__declspec(naked) void FUN_1025af60(void)

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





// Reference entry 1025af80; body size 76 bytes.
#line 1 "ENTRY_1025af80"

__declspec(naked) void FUN_1025af80(void)

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





// Reference entry 1025afe0; body size 76 bytes.
#line 1 "ENTRY_1025afe0"

__declspec(naked) void FUN_1025afe0(void)

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





// Reference entry 1025b040; body size 76 bytes.
#line 1 "ENTRY_1025b040"

__declspec(naked) void FUN_1025b040(void)

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





// Reference entry 1025b0a0; body size 76 bytes.
#line 1 "ENTRY_1025b0a0"

__declspec(naked) void FUN_1025b0a0(void)

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





// Reference entry 1025b100; body size 83 bytes.
#line 1 "ENTRY_1025b100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1025b100(int *param_2)
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


// Reference entry 1025b170; body size 10 bytes.
#line 1 "ENTRY_1025b170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1025b170(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1025b180; body size 10 bytes.
#line 1 "ENTRY_1025b180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1025b180(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1025b190; body size 10 bytes.
#line 1 "ENTRY_1025b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1025b190(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1025b1a0; body size 10 bytes.
#line 1 "ENTRY_1025b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1025b1a0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1025b1b0; body size 10 bytes.
#line 1 "ENTRY_1025b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1025b1b0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1025b1c0; body size 10 bytes.
#line 1 "ENTRY_1025b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1025b1c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 1025b710; body size 87 bytes.
#line 1 "ENTRY_1025b710"

__declspec(naked) void FUN_1025b710(void)

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





// Reference entry 1025b780; body size 87 bytes.
#line 1 "ENTRY_1025b780"

__declspec(naked) void FUN_1025b780(void)

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





// Reference entry 1025b7f0; body size 59 bytes.
#line 1 "ENTRY_1025b7f0"

__declspec(naked) void FUN_1025b7f0(void)

{
  __asm mov edx, dword ptr [ecx + 0xc]
  __asm cmp edx, dword ptr [ecx + 0x10]
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm _emit 0x74 __asm _emit 0x1f
  __asm mov ecx, dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm mov dword ptr [edx], eax
  __asm mov ecx, dword ptr [ecx + 4]
  __asm mov dword ptr [edx + 4], ecx
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x05
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [esi + 4], 8
  __asm pop esi
  __asm ret 4
  __asm push dword ptr [esp + 8]
  __asm mov ecx, esi
  __asm push edx
  __asm call LAB_1005855d
  __asm pop esi
  __asm ret 4
}





// Reference entry 1025b840; body size 20 bytes.
#line 1 "ENTRY_1025b840"

__declspec(naked) uint FUN_1025b840(void)

{
  __asm mov ecx, dword ptr [LAB_121a0ae4]
  __asm test ecx, ecx
  __asm _emit 0x74 __asm _emit 0x07
  __asm mov eax, dword ptr [ecx]
  __asm mov eax, dword ptr [eax + 0x24]
  __asm jmp eax
  __asm xor al, al
  __asm ret
}





// Reference entry 1025b860; body size 9 bytes.
#line 1 "ENTRY_1025b860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_1025b860(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 1025b870; body size 25 bytes.
#line 1 "ENTRY_1025b870"

__declspec(naked) void FUN_1025b870(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm push esi
  __asm push dword ptr [esi + 4]
  __asm push dword ptr [esi]
  __asm call LAB_10044a85
  __asm mov eax, dword ptr [esi]
  __asm add esp, 0xc
  __asm mov dword ptr [esi + 4], eax
  __asm pop esi
  __asm ret
}





// Reference entry 1025b9b0; body size 54 bytes.
#line 1 "ENTRY_1025b9b0"

__declspec(naked) void FUN_1025b9b0(void)

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





// Reference entry 1025ba00; body size 57 bytes.
#line 1 "ENTRY_1025ba00"

__declspec(naked) void FUN_1025ba00(void)

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





// Reference entry 1025baa0; body size 9 bytes.
#line 1 "ENTRY_1025baa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025baa0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1025bab0; body size 9 bytes.
#line 1 "ENTRY_1025bab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025bab0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1025bac0; body size 9 bytes.
#line 1 "ENTRY_1025bac0"

__declspec(naked) void FUN_1025bac0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm cmp eax, dword ptr [ecx + 4]
  __asm sete al
  __asm ret
}





// Reference entry 1025bad0; body size 11 bytes.
#line 1 "ENTRY_1025bad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_1025bad0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 1025c510; body size 13 bytes.
#line 1 "ENTRY_1025c510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_1025c510(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 1025c820; body size 16 bytes.
#line 1 "ENTRY_1025c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1025c820(void)

{
  if ((int *)(DAT_121a0ae4) != (int *)(0x0)) {
                    
                    
    ((SCVtbl_5_0*)((int *)(uint)(DAT_121a0ae4)))->v();
    return;
  }
  return;
}


// Reference entry 1025c840; body size 6 bytes.
#line 1 "ENTRY_1025c840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025c840(void)

{
  return (char *)("SCIInAppProduct");
}


// Reference entry 1025c850; body size 6 bytes.
#line 1 "ENTRY_1025c850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025c850(void)

{
  return (char *)("SCIInAppProductCallback");
}


// Reference entry 1025c860; body size 6 bytes.
#line 1 "ENTRY_1025c860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025c860(void)

{
  return (char *)("SCIInAppPurchaseCallback");
}


// Reference entry 1025c870; body size 6 bytes.
#line 1 "ENTRY_1025c870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025c870(void)

{
  return (char *)("SCIInAppPurchaseManager");
}


// Reference entry 1025c880; body size 10 bytes.
#line 1 "ENTRY_1025c880"

__declspec(naked) void FUN_1025c880(void)

{
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp eax, dword ptr [ecx + 0xc]
  __asm sete al
  __asm ret
}





// Reference entry 1025c890; body size 7 bytes.
#line 1 "ENTRY_1025c890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025c890(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 1025c8a0; body size 6 bytes.
#line 1 "ENTRY_1025c8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025c8a0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 1025c8b0; body size 6 bytes.
#line 1 "ENTRY_1025c8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025c8b0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1025c8c0; body size 6 bytes.
#line 1 "ENTRY_1025c8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025c8c0(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 1025c8d0; body size 6 bytes.
#line 1 "ENTRY_1025c8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025c8d0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 1025c910; body size 5 bytes.
#line 1 "ENTRY_1025c910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025c910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025c920; body size 3 bytes.
#line 1 "ENTRY_1025c920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025c920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1025c930; body size 3 bytes.
#line 1 "ENTRY_1025c930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025c930(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1025c940; body size 3 bytes.
#line 1 "ENTRY_1025c940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025c940(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1025c950; body size 3 bytes.
#line 1 "ENTRY_1025c950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025c950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1025d210; body size 28 bytes.
#line 1 "ENTRY_1025d210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025d210(undefined4 *param_1)

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


// Reference entry 1025d240; body size 28 bytes.
#line 1 "ENTRY_1025d240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025d240(undefined4 *param_1)

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


// Reference entry 1025d270; body size 28 bytes.
#line 1 "ENTRY_1025d270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025d270(undefined4 *param_1)

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


// Reference entry 1025d2a0; body size 28 bytes.
#line 1 "ENTRY_1025d2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025d2a0(undefined4 *param_1)

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


// Reference entry 1025d2d0; body size 28 bytes.
#line 1 "ENTRY_1025d2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025d2d0(undefined4 *param_1)

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


// Reference entry 1025d300; body size 28 bytes.
#line 1 "ENTRY_1025d300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025d300(undefined4 *param_1)

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


// Reference entry 1025d330; body size 28 bytes.
#line 1 "ENTRY_1025d330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025d330(undefined4 *param_1)

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


// Reference entry 1025d5b0; body size 25 bytes.
#line 1 "ENTRY_1025d5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1025d5b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 1025d5d0; body size 26 bytes.
#line 1 "ENTRY_1025d5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_1025d5d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 1025d5f0; body size 6 bytes.
#line 1 "ENTRY_1025d5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025d5f0(void)

{
  return (char *)("SCIInAppMessaging");
}


// Reference entry 1025d600; body size 27 bytes.
#line 1 "ENTRY_1025d600"

__declspec(naked) void FUN_1025d600(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188abd4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1025d6b0; body size 9 bytes.
#line 1 "ENTRY_1025d6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025d6b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIInAppMessaging);
  return (undefined4 *)(param_1);
}


// Reference entry 1025d8a0; body size 7 bytes.
#line 1 "ENTRY_1025d8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025d8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1025d9b0; body size 7 bytes.
#line 1 "ENTRY_1025d9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_1025d9b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 1025d9c0; body size 3 bytes.
#line 1 "ENTRY_1025d9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025d9c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1025d9d0; body size 3 bytes.
#line 1 "ENTRY_1025d9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025d9d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1025db30; body size 9 bytes.
#line 1 "ENTRY_1025db30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025db30(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 1025df50; body size 6 bytes.
#line 1 "ENTRY_1025df50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025df50(void)

{
  return (char *)("SCIInAppMessaging");
}


// Reference entry 1025df60; body size 3 bytes.
#line 1 "ENTRY_1025df60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025df60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1025e100; body size 28 bytes.
#line 1 "ENTRY_1025e100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025e100(undefined4 *param_1)

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


// Reference entry 1025e130; body size 28 bytes.
#line 1 "ENTRY_1025e130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025e130(undefined4 *param_1)

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


// Reference entry 1025e190; body size 6 bytes.
#line 1 "ENTRY_1025e190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025e190(void)

{
  return (char *)("SCITime");
}


// Reference entry 1025e1a0; body size 27 bytes.
#line 1 "ENTRY_1025e1a0"

__declspec(naked) void FUN_1025e1a0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188acc0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1025e1f0; body size 9 bytes.
#line 1 "ENTRY_1025e1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_1025e1f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITime);
  return (undefined4 *)(param_1);
}


// Reference entry 1025e200; body size 57 bytes.
#line 1 "ENTRY_1025e200"

__declspec(naked) void FUN_1025e200(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], offset LAB_1188acc0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], offset LAB_1188ad1c
  __asm mov eax, dword ptr [edx + 8]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, dword ptr [edx + 0xc]
  __asm mov dword ptr [ecx + 0xc], eax
  __asm mov eax, dword ptr [edx + 0x10]
  __asm mov dword ptr [ecx + 0x10], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret 4
}





// Reference entry 1025e2a0; body size 54 bytes.
#line 1 "ENTRY_1025e2a0"

__declspec(naked) void FUN_1025e2a0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188acc0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188ad1c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 1025e2f0; body size 19 bytes.
#line 1 "ENTRY_1025e2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025e2f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1025e310; body size 7 bytes.
#line 1 "ENTRY_1025e310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025e310(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1025e320; body size 19 bytes.
#line 1 "ENTRY_1025e320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025e320(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1025e340; body size 3 bytes.
#line 1 "ENTRY_1025e340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025e340(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 1025e5e0; body size 6 bytes.
#line 1 "ENTRY_1025e5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025e5e0(void)

{
  return (char *)("SCITime");
}


// Reference entry 1025eab0; body size 22 bytes.
#line 1 "ENTRY_1025eab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1025eab0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1025eb90; body size 22 bytes.
#line 1 "ENTRY_1025eb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1025eb90(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1025ebb0; body size 22 bytes.
#line 1 "ENTRY_1025ebb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1025ebb0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 1025ebd0; body size 13 bytes.
#line 1 "ENTRY_1025ebd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1025ebd0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 1025ebe0; body size 3 bytes.
#line 1 "ENTRY_1025ebe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1025ebe0(void)

{
  return;
}


// Reference entry 1025ede0; body size 37 bytes.
#line 1 "ENTRY_1025ede0"

__declspec(naked) void FUN_1025ede0(void)

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





// Reference entry 1025ee10; body size 5 bytes.
#line 1 "ENTRY_1025ee10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025ee10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025ee20; body size 5 bytes.
#line 1 "ENTRY_1025ee20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025ee20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025ee30; body size 5 bytes.
#line 1 "ENTRY_1025ee30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025ee30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025ee40; body size 5 bytes.
#line 1 "ENTRY_1025ee40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025ee40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025ee50; body size 14 bytes.
#line 1 "ENTRY_1025ee50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_1025ee50(undefined4 param_1,SCStr *param_2,SCStr *param_3)

{
  ((SCStr *)(param_2))->m_op_ctor(param_3);
  return;
}


// Reference entry 1025eee0; body size 15 bytes.
#line 1 "ENTRY_1025eee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025eee0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 1025ef00; body size 5 bytes.
#line 1 "ENTRY_1025ef00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025ef00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025ef10; body size 5 bytes.
#line 1 "ENTRY_1025ef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025ef10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025ef20; body size 5 bytes.
#line 1 "ENTRY_1025ef20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025ef20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025ef30; body size 5 bytes.
#line 1 "ENTRY_1025ef30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_1025ef30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 1025ef40; body size 6 bytes.
#line 1 "ENTRY_1025ef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025ef40(void)

{
  return (char *)("SCIInput");
}


// Reference entry 1025ef50; body size 6 bytes.
#line 1 "ENTRY_1025ef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025ef50(void)

{
  return (char *)("SCIStringInput");
}


// Reference entry 1025ef60; body size 6 bytes.
#line 1 "ENTRY_1025ef60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025ef60(void)

{
  return (char *)("SCIStringInputBase");
}


// Reference entry 1025ef70; body size 6 bytes.
#line 1 "ENTRY_1025ef70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_1025ef70(void)

{
  return (char *)("SCStrProp");
}


// Reference entry 1025f0a0; body size 27 bytes.
#line 1 "ENTRY_1025f0a0"

__declspec(naked) void FUN_1025f0a0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188ada0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1025f0d0; body size 34 bytes.
#line 1 "ENTRY_1025f0d0"

__declspec(naked) void FUN_1025f0d0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], offset LAB_1188afe8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}





// Reference entry 1025f160; body size 18 bytes.
#line 1 "ENTRY_1025f160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1025f160(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 1025f180; body size 11 bytes.
#line 1 "ENTRY_1025f180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1025f180(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1025f210; body size 11 bytes.
#line 1 "ENTRY_1025f210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_1025f210(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 1025f220; body size 69 bytes.
#line 1 "ENTRY_1025f220"

__declspec(naked) void FUN_1025f220(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x14]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x1c]
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1003718c
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 0x18], eax
  __asm mov al, byte ptr [esp + 0x10]
  __asm mov byte ptr [esi + 0x1c], al
  __asm mov eax, dword ptr [esp + 0x1c]
  __asm mov dword ptr [esi + 0x20], eax
  __asm mov al, byte ptr [esp + 0x20]
  __asm mov byte ptr [esi + 0x24], al
  __asm mov al, byte ptr [esp + 0x24]
  __asm mov byte ptr [esi + 0x25], al
  __asm mov eax, esi
  __asm mov dword ptr [esi], offset LAB_1188ae48
  __asm pop esi
  __asm pop ecx
  __asm ret 0x1c
}





// Reference entry 1025f390; body size 40 bytes.
#line 1 "ENTRY_1025f390"

__declspec(naked) void FUN_1025f390(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188ada0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], offset LAB_1188af54
  __asm pop ecx
  __asm ret
}





// Reference entry 1025f3d0; body size 21 bytes.
#line 1 "ENTRY_1025f3d0"

__declspec(naked) void FUN_1025f3d0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], offset LAB_1188afb0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 1025f6f0; body size 40 bytes.
#line 1 "ENTRY_1025f6f0"

__declspec(naked) void FUN_1025f6f0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], offset LAB_1188ada0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx], offset LAB_1188af00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}





// Reference entry 1025fc30; body size 7 bytes.
#line 1 "ENTRY_1025fc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_1025fc30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 1025fe20; body size 14 bytes.
#line 1 "ENTRY_1025fe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1025fe20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 1025fe40; body size 14 bytes.
#line 1 "ENTRY_1025fe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_1025fe40(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 1025fe60; body size 3 bytes.
#line 1 "ENTRY_1025fe60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_1025fe60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10260480; body size 14 bytes.
#line 1 "ENTRY_10260480"

__declspec(naked) void FUN_10260480(void)

{
  __asm cmp dword ptr [ecx + 4], 0xccccccc
  __asm je LAB_1000d4ae
  __asm ret
}





// Reference entry 102604a0; body size 3 bytes.
#line 1 "ENTRY_102604a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102604a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102604b0; body size 3 bytes.
#line 1 "ENTRY_102604b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102604b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102604c0; body size 3 bytes.
#line 1 "ENTRY_102604c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102604c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102604d0; body size 3 bytes.
#line 1 "ENTRY_102604d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102604d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102604e0; body size 3 bytes.
#line 1 "ENTRY_102604e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_102604e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10260500; body size 3 bytes.
#line 1 "ENTRY_10260500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10260500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10260510; body size 3 bytes.
#line 1 "ENTRY_10260510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10260510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 102607b0; body size 5 bytes.
#line 1 "ENTRY_102607b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102607b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10260830; body size 11 bytes.
#line 1 "ENTRY_10260830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10260830(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 102609e0; body size 90 bytes.
#line 1 "ENTRY_102609e0"

__declspec(naked) void FUN_102609e0(void)

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





// Reference entry 10260da0; body size 60 bytes.
#line 1 "ENTRY_10260da0"

__declspec(naked) void FUN_10260da0(void)

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





// Reference entry 10260f30; body size 11 bytes.
#line 1 "ENTRY_10260f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10260f30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10261020; body size 6 bytes.
#line 1 "ENTRY_10261020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10261020(void)

{
  return (undefined4)(0x20);
}


// Reference entry 102610f0; body size 6 bytes.
#line 1 "ENTRY_102610f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102610f0(void)

{
  return (undefined4)(3);
}


// Reference entry 10261550; body size 4 bytes.
#line 1 "ENTRY_10261550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10261550(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x11));
}


// Reference entry 10261560; body size 6 bytes.
#line 1 "ENTRY_10261560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10261560(void)

{
  return (char *)("SCIInput");
}


// Reference entry 10261570; body size 6 bytes.
#line 1 "ENTRY_10261570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10261570(void)

{
  return (char *)("SCIStringInput");
}


// Reference entry 10261580; body size 6 bytes.
#line 1 "ENTRY_10261580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10261580(void)

{
  return (char *)("SCIStringInputBase");
}


// Reference entry 10261590; body size 6 bytes.
#line 1 "ENTRY_10261590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10261590(void)

{
  return (char *)("SCStrProp");
}


// Reference entry 102622f0; body size 6 bytes.
#line 1 "ENTRY_102622f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_102622f0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10262300; body size 6 bytes.
#line 1 "ENTRY_10262300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10262300(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 102626b0; body size 28 bytes.
#line 1 "ENTRY_102626b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_102626b0(undefined4 *param_1)

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


// Reference entry 10262f10; body size 18 bytes.
#line 1 "ENTRY_10262f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10262f10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10262f30; body size 25 bytes.
#line 1 "ENTRY_10262f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10262f30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10262f50; body size 25 bytes.
#line 1 "ENTRY_10262f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10262f50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10262f70; body size 33 bytes.
#line 1 "ENTRY_10262f70"

__declspec(naked) void FUN_10262f70(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10262fa0; body size 33 bytes.
#line 1 "ENTRY_10262fa0"

__declspec(naked) void FUN_10262fa0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10262fd0; body size 33 bytes.
#line 1 "ENTRY_10262fd0"

__declspec(naked) void FUN_10262fd0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263000; body size 33 bytes.
#line 1 "ENTRY_10263000"

__declspec(naked) void FUN_10263000(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263030; body size 33 bytes.
#line 1 "ENTRY_10263030"

__declspec(naked) void FUN_10263030(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263060; body size 33 bytes.
#line 1 "ENTRY_10263060"

__declspec(naked) void FUN_10263060(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263090; body size 33 bytes.
#line 1 "ENTRY_10263090"

__declspec(naked) void FUN_10263090(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 102630c0; body size 33 bytes.
#line 1 "ENTRY_102630c0"

__declspec(naked) void FUN_102630c0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 102630f0; body size 33 bytes.
#line 1 "ENTRY_102630f0"

__declspec(naked) void FUN_102630f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263120; body size 33 bytes.
#line 1 "ENTRY_10263120"

__declspec(naked) void FUN_10263120(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263150; body size 33 bytes.
#line 1 "ENTRY_10263150"

__declspec(naked) void FUN_10263150(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263180; body size 33 bytes.
#line 1 "ENTRY_10263180"

__declspec(naked) void FUN_10263180(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 102631b0; body size 33 bytes.
#line 1 "ENTRY_102631b0"

__declspec(naked) void FUN_102631b0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 102631e0; body size 33 bytes.
#line 1 "ENTRY_102631e0"

__declspec(naked) void FUN_102631e0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263210; body size 33 bytes.
#line 1 "ENTRY_10263210"

__declspec(naked) void FUN_10263210(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263240; body size 33 bytes.
#line 1 "ENTRY_10263240"

__declspec(naked) void FUN_10263240(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263270; body size 33 bytes.
#line 1 "ENTRY_10263270"

__declspec(naked) void FUN_10263270(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 102632a0; body size 33 bytes.
#line 1 "ENTRY_102632a0"

__declspec(naked) void FUN_102632a0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 102632d0; body size 33 bytes.
#line 1 "ENTRY_102632d0"

__declspec(naked) void FUN_102632d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}





// Reference entry 10263300; body size 18 bytes.
#line 1 "ENTRY_10263300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10263300(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 102636b0; body size 26 bytes.
#line 1 "ENTRY_102636b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_102636b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


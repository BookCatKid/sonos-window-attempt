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
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int format(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); static int op_ctor(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AlarmClock { char _pad; AlarmClock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Clearing { char _pad; Clearing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CoderInitialized { char _pad; CoderInitialized(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ConfigModeInitiated { char _pad; ConfigModeInitiated(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct CreateAlarm { char _pad; CreateAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Destructor { char _pad; Destructor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Entering { char _pad; Entering(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Error { char _pad; Error(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ErrorString { char _pad; ErrorString(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ExtendedError { char _pad; ExtendedError(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct InConfigMode { char _pad; InConfigMode(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct LegacyPlayers { char _pad; LegacyPlayers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ModernPlayers { char _pad; ModernPlayers(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ReEnterConfigModeNeeded { char _pad; ReEnterConfigModeNeeded(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RetryAtLearnToTune { char _pad; RetryAtLearnToTune(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct RetryAtNoiseOrRaiseDevice { char _pad; RetryAtNoiseOrRaiseDevice(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarm { char _pad; SCAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIActionWithIntDescriptor { char _pad; SCIActionWithIntDescriptor(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpAlarmSave { char _pad; SCIOpAlarmSave(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct ShowExtendedNoiseError { char _pad; ShowExtendedNoiseError(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SuccessfullyTuned { char _pad; SuccessfullyTuned(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct UpdateAlarm { char _pad; UpdateAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *E9;
typedef void *WARNING;
using namespace std;
struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_10f77620(undefined4 param_2); template<class... A> int m_FUN_10f77620(A...); undefined4 * __thiscall m_FUN_10f77670(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10f77670(A...); undefined4 * __thiscall m_FUN_10f77720(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10f77720(A...); undefined4 * __thiscall m_FUN_10f779c0(undefined4 param_2); template<class... A> int m_FUN_10f779c0(A...); undefined4 * __thiscall m_FUN_10f77a00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f77a00(A...); undefined4 __thiscall m_FUN_10f7b080(uint param_2); template<class... A> int m_FUN_10f7b080(A...); undefined4 * __thiscall m_FUN_10f7b9c0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f7b9c0(A...); undefined4 * __thiscall m_FUN_10f7ba00(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f7ba00(A...); undefined4 * __thiscall m_FUN_10f7baf0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f7baf0(A...); undefined4 * __thiscall m_FUN_10f7c6a0(undefined4 param_2); template<class... A> int m_FUN_10f7c6a0(A...); undefined4 * __thiscall m_FUN_10f7c700(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f7c700(A...); undefined4 * __thiscall m_FUN_10f7c790(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f7c790(A...); bool __thiscall m_FUN_10f7e2b0(int *param_2); template<class... A> int m_FUN_10f7e2b0(A...); bool __thiscall m_FUN_10f7e2d0(int *param_2); template<class... A> int m_FUN_10f7e2d0(A...); void __thiscall m_FUN_10f7ef60(int param_2); template<class... A> int m_FUN_10f7ef60(A...); void __thiscall m_FUN_10f7f010(int *param_2); template<class... A> int m_FUN_10f7f010(A...); void __thiscall m_FUN_10f7f5b0(undefined4 *param_2); template<class... A> int m_FUN_10f7f5b0(A...); void __thiscall m_FUN_10f7f750(undefined4 *param_2); template<class... A> int m_FUN_10f7f750(A...); undefined4 * __thiscall m_FUN_10f7f900(undefined4 *param_2); template<class... A> int m_FUN_10f7f900(A...); undefined4 * __thiscall m_FUN_10f7f950(undefined4 *param_2); template<class... A> int m_FUN_10f7f950(A...); SCStr * __thiscall m_FUN_10f7fa60(SCStr *param_2); template<class... A> int m_FUN_10f7fa60(A...); int __thiscall m_FUN_10f81e10(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10f81e10(A...); undefined4 * __thiscall m_FUN_10f821e0(undefined4 param_2); template<class... A> int m_FUN_10f821e0(A...); undefined4 * __thiscall m_FUN_10f82210(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f82210(A...); undefined4 * __thiscall m_FUN_10f82220(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f82220(A...); bool __thiscall m_FUN_10f83170(int *param_2); template<class... A> int m_FUN_10f83170(A...); bool __thiscall m_FUN_10f83190(int *param_2); template<class... A> int m_FUN_10f83190(A...); void __thiscall m_FUN_10f839a0(int param_2); template<class... A> int m_FUN_10f839a0(A...); void __thiscall m_FUN_10f839c0(undefined4 param_2); template<class... A> int m_FUN_10f839c0(A...); void __thiscall m_FUN_10f83ad0(int param_2); template<class... A> int m_FUN_10f83ad0(A...); void __thiscall m_FUN_10f83b00(undefined4 *param_2); template<class... A> int m_FUN_10f83b00(A...); void __thiscall m_FUN_10f83b10(undefined4 *param_2); template<class... A> int m_FUN_10f83b10(A...); undefined1 * __thiscall m_FUN_10f86840(char *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f86840(A...); undefined1 * __thiscall m_FUN_10f868a0(char *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f868a0(A...); undefined1 * __thiscall m_FUN_10f86900(char *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f86900(A...); undefined4 * __thiscall m_FUN_10f86a80(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f86a80(A...); void __thiscall m_FUN_10f86b10(undefined4 *param_2); template<class... A> int m_FUN_10f86b10(A...); void __thiscall m_FUN_10f874c0(int *param_2,undefined4 *param_3); template<class... A> int m_FUN_10f874c0(A...); undefined4 * __thiscall m_FUN_10f878f0(undefined4 param_2); template<class... A> int m_FUN_10f878f0(A...); undefined4 * __thiscall m_FUN_10f879e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f879e0(A...); undefined4 * __thiscall m_FUN_10f879f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f879f0(A...); undefined4 * __thiscall m_FUN_10f87a00(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f87a00(A...); undefined4 * __thiscall m_FUN_10f87a10(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f87a10(A...); undefined4 * __thiscall m_FUN_10f87a40(undefined4 *param_2); template<class... A> int m_FUN_10f87a40(A...); undefined4 * __thiscall m_FUN_10f87a50(undefined4 param_2); template<class... A> int m_FUN_10f87a50(A...); undefined4 * __thiscall m_FUN_10f87aa0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10f87aa0(A...); int __thiscall m_FUN_10f87af0(int param_2); template<class... A> int m_FUN_10f87af0(A...); undefined4 * __thiscall m_FUN_10f87c10(undefined4 param_2); template<class... A> int m_FUN_10f87c10(A...); undefined4 * __thiscall m_FUN_10f87c20(undefined4 param_2,int param_3); template<class... A> int m_FUN_10f87c20(A...); undefined1 * __thiscall m_FUN_10f886b0(undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6); template<class... A> int m_FUN_10f886b0(A...); bool __thiscall m_FUN_10f88970(int *param_2); template<class... A> int m_FUN_10f88970(A...); bool __thiscall m_FUN_10f88990(int *param_2); template<class... A> int m_FUN_10f88990(A...); bool __thiscall m_FUN_10f88a30(int *param_2); template<class... A> int m_FUN_10f88a30(A...); bool __thiscall m_FUN_10f88a50(int *param_2); template<class... A> int m_FUN_10f88a50(A...); int * __thiscall m_FUN_10f89320(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10f89320(A...); void __thiscall m_FUN_10f895c0(undefined4 *param_2); template<class... A> int m_FUN_10f895c0(A...); void __thiscall m_FUN_10f895e0(undefined4 *param_2); template<class... A> int m_FUN_10f895e0(A...); void __thiscall m_FUN_10f895f0(undefined4 *param_2); template<class... A> int m_FUN_10f895f0(A...); void __thiscall m_FUN_10f89600(undefined4 *param_2); template<class... A> int m_FUN_10f89600(A...); uint __thiscall m_FUN_10f899a0(undefined4 *param_2); template<class... A> int m_FUN_10f899a0(A...); int __thiscall m_FUN_10f89ab0(byte *param_2); template<class... A> int m_FUN_10f89ab0(A...); void __thiscall m_FUN_10f89c10(undefined4 *param_2); template<class... A> int m_FUN_10f89c10(A...); void __thiscall m_FUN_10f89c30(undefined4 *param_2); template<class... A> int m_FUN_10f89c30(A...); void __thiscall m_FUN_10f89db0(undefined4 *param_2); template<class... A> int m_FUN_10f89db0(A...); void __thiscall m_FUN_10f8a030(undefined4 *param_2); template<class... A> int m_FUN_10f8a030(A...); undefined4 * __thiscall m_FUN_10f8a650(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f8a650(A...); undefined4 * __thiscall m_FUN_10f8a660(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f8a660(A...); bool __thiscall m_FUN_10f8bce0(int *param_2); template<class... A> int m_FUN_10f8bce0(A...); bool __thiscall m_FUN_10f8bd00(int *param_2); template<class... A> int m_FUN_10f8bd00(A...); uint __thiscall m_FUN_10f8c230(uint param_2); template<class... A> int m_FUN_10f8c230(A...); void __thiscall m_FUN_10f8c890(undefined4 *param_2); template<class... A> int m_FUN_10f8c890(A...); void __thiscall m_FUN_10f8cb60(undefined4 *param_2); template<class... A> int m_FUN_10f8cb60(A...); void __thiscall m_FUN_10f8cb70(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10f8cb70(A...); int * __thiscall m_FUN_10f8cf40(int *param_2); template<class... A> int m_FUN_10f8cf40(A...); int * __thiscall m_FUN_10f8cf70(int *param_2); template<class... A> int m_FUN_10f8cf70(A...); void __thiscall m_FUN_10f8e3e0(undefined4 *param_2); template<class... A> int m_FUN_10f8e3e0(A...); void __thiscall m_FUN_10f8ea50(undefined4 param_2); template<class... A> int m_FUN_10f8ea50(A...); undefined4 * __thiscall m_FUN_10f8eda0(undefined4 param_2); template<class... A> int m_FUN_10f8eda0(A...); undefined4 * __thiscall m_FUN_10f8eeb0(undefined4 param_2); template<class... A> int m_FUN_10f8eeb0(A...); undefined4 * __thiscall m_FUN_10f8eed0(undefined4 param_2); template<class... A> int m_FUN_10f8eed0(A...); undefined4 * __thiscall m_FUN_10f8eef0(undefined4 param_2); template<class... A> int m_FUN_10f8eef0(A...); undefined4 * __thiscall m_FUN_10f8ef10(undefined4 param_2); template<class... A> int m_FUN_10f8ef10(A...); undefined4 * __thiscall m_FUN_10f8efa0(undefined4 param_2); template<class... A> int m_FUN_10f8efa0(A...); undefined4 * __thiscall m_FUN_10f8f040(undefined4 param_2); template<class... A> int m_FUN_10f8f040(A...); undefined4 * __thiscall m_FUN_10f91460(undefined4 param_2); template<class... A> int m_FUN_10f91460(A...); undefined4 * __thiscall m_FUN_10f91480(undefined4 param_2); template<class... A> int m_FUN_10f91480(A...); undefined4 * __thiscall m_FUN_10f914a0(undefined4 param_2); template<class... A> int m_FUN_10f914a0(A...); undefined4 * __thiscall m_FUN_10f915a0(undefined4 param_2); template<class... A> int m_FUN_10f915a0(A...); undefined4 * __thiscall m_FUN_10f915c0(undefined4 param_2); template<class... A> int m_FUN_10f915c0(A...); undefined4 * __thiscall m_FUN_10f915f0(undefined4 param_2); template<class... A> int m_FUN_10f915f0(A...); undefined4 * __thiscall m_FUN_10f91610(undefined4 param_2); template<class... A> int m_FUN_10f91610(A...); undefined4 * __thiscall m_FUN_10f91650(undefined4 param_2); template<class... A> int m_FUN_10f91650(A...); undefined4 * __thiscall m_FUN_10f91670(undefined4 param_2); template<class... A> int m_FUN_10f91670(A...); undefined4 * __thiscall m_FUN_10f96d60(undefined4 param_2); template<class... A> int m_FUN_10f96d60(A...); undefined4 * __thiscall m_FUN_10f96d80(undefined4 param_2); template<class... A> int m_FUN_10f96d80(A...); undefined4 * __thiscall m_FUN_10f96da0(undefined4 param_2); template<class... A> int m_FUN_10f96da0(A...); undefined4 * __thiscall m_FUN_10f96dc0(undefined4 param_2); template<class... A> int m_FUN_10f96dc0(A...); undefined4 * __thiscall m_FUN_10f96de0(undefined4 param_2); template<class... A> int m_FUN_10f96de0(A...); undefined4 * __thiscall m_FUN_10f96e00(undefined4 param_2); template<class... A> int m_FUN_10f96e00(A...); undefined4 * __thiscall m_FUN_10f96e20(undefined4 param_2); template<class... A> int m_FUN_10f96e20(A...); void __thiscall m_FUN_10f99410(undefined4 param_2); template<class... A> int m_FUN_10f99410(A...); undefined4 * __thiscall m_FUN_10f99440(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f99440(A...); undefined4 * __thiscall m_FUN_10f994b0(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10f994b0(A...); undefined4 * __thiscall m_FUN_10f994d0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f994d0(A...); undefined4 * __thiscall m_FUN_10f99520(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f99520(A...); undefined4 * __thiscall m_FUN_10f99540(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f99540(A...); undefined4 * __thiscall m_FUN_10f99730(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f99730(A...); undefined4 * __thiscall m_FUN_10f99750(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10f99750(A...); undefined4 * __thiscall m_FUN_10f99770(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f99770(A...); undefined4 * __thiscall m_FUN_10f997a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10f997a0(A...); void __thiscall m_FUN_10f998a0(int *param_2,uint *param_3); template<class... A> int m_FUN_10f998a0(A...); int * __thiscall m_FUN_10f99c00(int *param_2,uint *param_3); template<class... A> int m_FUN_10f99c00(A...); undefined4 * __thiscall m_FUN_10f9a690(undefined4 param_2); template<class... A> int m_FUN_10f9a690(A...); undefined4 * __thiscall m_FUN_10f9a6b0(undefined4 param_2); template<class... A> int m_FUN_10f9a6b0(A...); undefined4 * __thiscall m_FUN_10f9a6d0(undefined4 param_2); template<class... A> int m_FUN_10f9a6d0(A...); undefined4 * __thiscall m_FUN_10f9a770(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f9a770(A...); undefined4 * __thiscall m_FUN_10f9a780(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f9a780(A...); undefined4 * __thiscall m_FUN_10f9a890(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f9a890(A...); undefined4 * __thiscall m_FUN_10f9a8a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f9a8a0(A...); undefined4 * __thiscall m_FUN_10f9a8b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f9a8b0(A...); undefined4 * __thiscall m_FUN_10f9a8c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f9a8c0(A...); undefined4 * __thiscall m_FUN_10f9abf0(undefined4 param_2); template<class... A> int m_FUN_10f9abf0(A...); undefined4 * __thiscall m_FUN_10f9ac10(undefined4 param_2); template<class... A> int m_FUN_10f9ac10(A...); undefined4 * __thiscall m_FUN_10f9ad40(undefined4 param_2); template<class... A> int m_FUN_10f9ad40(A...); undefined4 * __thiscall m_FUN_10f9ad60(undefined4 param_2); template<class... A> int m_FUN_10f9ad60(A...); undefined4 * __thiscall m_FUN_10f9ad90(undefined4 param_2); template<class... A> int m_FUN_10f9ad90(A...); undefined4 * __thiscall m_FUN_10f9adc0(undefined4 param_2); template<class... A> int m_FUN_10f9adc0(A...); undefined4 * __thiscall m_FUN_10f9ade0(undefined4 param_2); template<class... A> int m_FUN_10f9ade0(A...); undefined4 * __thiscall m_FUN_10f9ae10(undefined4 param_2); template<class... A> int m_FUN_10f9ae10(A...); undefined4 * __thiscall m_FUN_10f9ae30(undefined4 param_2); template<class... A> int m_FUN_10f9ae30(A...); undefined4 * __thiscall m_FUN_10f9ae60(undefined4 param_2); template<class... A> int m_FUN_10f9ae60(A...); int * __thiscall m_FUN_10f9b770(int *param_2); template<class... A> int m_FUN_10f9b770(A...); int * __thiscall m_FUN_10f9b7d0(int *param_2); template<class... A> int m_FUN_10f9b7d0(A...); bool __thiscall m_FUN_10f9b870(int *param_2); template<class... A> int m_FUN_10f9b870(A...); bool __thiscall m_FUN_10f9b890(int *param_2); template<class... A> int m_FUN_10f9b890(A...); bool __thiscall m_FUN_10f9b8b0(int *param_2); template<class... A> int m_FUN_10f9b8b0(A...); bool __thiscall m_FUN_10f9b8d0(int *param_2); template<class... A> int m_FUN_10f9b8d0(A...); undefined4 * __thiscall m_FUN_10f9bb50(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f9bb50(A...); undefined4 * __thiscall m_FUN_10f9bbf0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10f9bbf0(A...); void __thiscall m_FUN_10f9d720(undefined4 *param_2); template<class... A> int m_FUN_10f9d720(A...); void __thiscall m_FUN_10f9d730(undefined4 *param_2); template<class... A> int m_FUN_10f9d730(A...); void __thiscall m_FUN_10f9dbd0(undefined4 *param_2); template<class... A> int m_FUN_10f9dbd0(A...); void __thiscall m_FUN_10f9fd10(undefined4 *param_2); template<class... A> int m_FUN_10f9fd10(A...); undefined4 * __thiscall m_FUN_10fa4a70(undefined4 param_2); template<class... A> int m_FUN_10fa4a70(A...); undefined4 * __thiscall m_FUN_10fa4d20(undefined4 param_2); template<class... A> int m_FUN_10fa4d20(A...); undefined4 * __thiscall m_FUN_10fa4d40(undefined4 param_2); template<class... A> int m_FUN_10fa4d40(A...); undefined4 * __thiscall m_FUN_10fa4d60(undefined4 param_2); template<class... A> int m_FUN_10fa4d60(A...); undefined4 * __thiscall m_FUN_10fa4d80(undefined4 param_2); template<class... A> int m_FUN_10fa4d80(A...); undefined4 * __thiscall m_FUN_10fa4ea0(undefined4 param_2); template<class... A> int m_FUN_10fa4ea0(A...); undefined4 * __thiscall m_FUN_10fa5060(undefined4 param_2); template<class... A> int m_FUN_10fa5060(A...); undefined4 * __thiscall m_FUN_10faa9d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10faa9d0(A...); undefined4 * __thiscall m_FUN_10faa9f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10faa9f0(A...); undefined4 * __thiscall m_FUN_10faaa10(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10faaa10(A...); undefined4 * __thiscall m_FUN_10faaa30(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10faaa30(A...); undefined4 * __thiscall m_FUN_10faaa50(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10faaa50(A...); undefined4 * __thiscall m_FUN_10faaaa0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10faaaa0(A...); undefined4 * __thiscall m_FUN_10faaaf0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10faaaf0(A...); undefined4 * __thiscall m_FUN_10faab50(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10faab50(A...); undefined4 * __thiscall m_FUN_10faafa0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10faafa0(A...); undefined4 * __thiscall m_FUN_10faafc0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10faafc0(A...); undefined4 * __thiscall m_FUN_10faafe0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10faafe0(A...); undefined4 * __thiscall m_FUN_10fab000(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10fab000(A...); undefined4 * __thiscall m_FUN_10fab080(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10fab080(A...); undefined4 * __thiscall m_FUN_10fab0d0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10fab0d0(A...); undefined4 * __thiscall m_FUN_10fab120(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10fab120(A...); undefined4 * __thiscall m_FUN_10fab180(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10fab180(A...); int * __thiscall m_FUN_10fab1d0(int *param_2); template<class... A> int m_FUN_10fab1d0(A...); void __thiscall m_FUN_10fab3b0(undefined4 *param_2); template<class... A> int m_FUN_10fab3b0(A...); void __thiscall m_FUN_10fab3d0(undefined4 *param_2); template<class... A> int m_FUN_10fab3d0(A...); void __thiscall m_FUN_10fab3f0(undefined4 *param_2); template<class... A> int m_FUN_10fab3f0(A...); void __thiscall m_FUN_10fab410(undefined4 *param_2); template<class... A> int m_FUN_10fab410(A...); int __thiscall m_FUN_10facc30(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10facc30(A...); void __thiscall m_FUN_10fad2c0(int *param_2,int *param_3); template<class... A> int m_FUN_10fad2c0(A...); undefined4 * __thiscall m_FUN_10fadd00(undefined4 *param_2); template<class... A> int m_FUN_10fadd00(A...); undefined4 * __thiscall m_FUN_10fadd90(undefined4 *param_2); template<class... A> int m_FUN_10fadd90(A...); undefined4 * __thiscall m_FUN_10fade20(undefined4 *param_2); template<class... A> int m_FUN_10fade20(A...); undefined4 * __thiscall m_FUN_10fadeb0(undefined4 param_2); template<class... A> int m_FUN_10fadeb0(A...); undefined4 * __thiscall m_FUN_10faded0(undefined4 param_2); template<class... A> int m_FUN_10faded0(A...); undefined4 * __thiscall m_FUN_10fadef0(undefined4 param_2); template<class... A> int m_FUN_10fadef0(A...); undefined4 * __thiscall m_FUN_10fadf10(undefined4 param_2); template<class... A> int m_FUN_10fadf10(A...); undefined4 * __thiscall m_FUN_10fadf30(undefined4 param_2); template<class... A> int m_FUN_10fadf30(A...); undefined4 * __thiscall m_FUN_10fae1f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae1f0(A...); undefined4 * __thiscall m_FUN_10fae200(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae200(A...); undefined4 * __thiscall m_FUN_10fae210(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae210(A...); undefined4 * __thiscall m_FUN_10fae220(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae220(A...); undefined4 * __thiscall m_FUN_10fae230(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae230(A...); undefined4 * __thiscall m_FUN_10fae240(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae240(A...); undefined4 * __thiscall m_FUN_10fae250(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae250(A...); undefined4 * __thiscall m_FUN_10fae260(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae260(A...); undefined4 * __thiscall m_FUN_10fae270(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae270(A...); undefined4 * __thiscall m_FUN_10fae280(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae280(A...); undefined4 * __thiscall m_FUN_10fae290(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae290(A...); undefined4 * __thiscall m_FUN_10fae2a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae2a0(A...); undefined4 * __thiscall m_FUN_10fae2b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae2b0(A...); undefined4 * __thiscall m_FUN_10fae2c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae2c0(A...); undefined4 * __thiscall m_FUN_10fae2d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae2d0(A...); undefined4 * __thiscall m_FUN_10fae2e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fae2e0(A...); undefined8 * __thiscall m_FUN_10fae350(undefined8 *param_2); template<class... A> int m_FUN_10fae350(A...); undefined8 * __thiscall m_FUN_10fae370(undefined8 *param_2); template<class... A> int m_FUN_10fae370(A...); undefined8 * __thiscall m_FUN_10fae390(undefined8 *param_2); template<class... A> int m_FUN_10fae390(A...); undefined4 * __thiscall m_FUN_10fae3b0(undefined4 param_2); template<class... A> int m_FUN_10fae3b0(A...); undefined4 * __thiscall m_FUN_10fae3d0(undefined4 param_2); template<class... A> int m_FUN_10fae3d0(A...); undefined4 * __thiscall m_FUN_10fae3f0(undefined4 param_2); template<class... A> int m_FUN_10fae3f0(A...); undefined4 * __thiscall m_FUN_10fae410(undefined4 param_2); template<class... A> int m_FUN_10fae410(A...); undefined4 * __thiscall m_FUN_10faecf0(undefined4 param_2); template<class... A> int m_FUN_10faecf0(A...); undefined4 * __thiscall m_FUN_10faed10(int param_2,undefined4 param_3); template<class... A> int m_FUN_10faed10(A...); undefined4 * __thiscall m_FUN_10faed70(undefined4 param_2); template<class... A> int m_FUN_10faed70(A...); undefined4 * __thiscall m_FUN_10faed90(undefined4 param_2); template<class... A> int m_FUN_10faed90(A...); undefined4 * __thiscall m_FUN_10faefa0(undefined4 param_2); template<class... A> int m_FUN_10faefa0(A...); undefined4 * __thiscall m_FUN_10faf2f0(undefined4 param_2); template<class... A> int m_FUN_10faf2f0(A...); undefined4 * __thiscall m_FUN_10faf5c0(undefined4 param_2); template<class... A> int m_FUN_10faf5c0(A...); undefined4 * __thiscall m_FUN_10faf5e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10faf5e0(A...); undefined4 * __thiscall m_FUN_10faf610(undefined4 param_2); template<class... A> int m_FUN_10faf610(A...); undefined4 * __thiscall m_FUN_10faf620(undefined4 param_2); template<class... A> int m_FUN_10faf620(A...); undefined4 * __thiscall m_FUN_10faf630(undefined4 param_2); template<class... A> int m_FUN_10faf630(A...); undefined4 * __thiscall m_FUN_10faf640(undefined4 param_2); template<class... A> int m_FUN_10faf640(A...); int * __thiscall m_FUN_10fb0b40(int *param_2); template<class... A> int m_FUN_10fb0b40(A...); int * __thiscall m_FUN_10fb0ba0(int *param_2); template<class... A> int m_FUN_10fb0ba0(A...); int * __thiscall m_FUN_10fb0c00(int *param_2); template<class... A> int m_FUN_10fb0c00(A...); int * __thiscall m_FUN_10fb0c60(int *param_2); template<class... A> int m_FUN_10fb0c60(A...); int * __thiscall m_FUN_10fb0d00(int *param_2); template<class... A> int m_FUN_10fb0d00(A...); int * __thiscall m_FUN_10fb0e60(int *param_2); template<class... A> int m_FUN_10fb0e60(A...); bool __thiscall m_FUN_10fb0f00(int *param_2); template<class... A> int m_FUN_10fb0f00(A...); bool __thiscall m_FUN_10fb0f20(int *param_2); template<class... A> int m_FUN_10fb0f20(A...); bool __thiscall m_FUN_10fb0f40(int *param_2); template<class... A> int m_FUN_10fb0f40(A...); bool __thiscall m_FUN_10fb0f60(int *param_2); template<class... A> int m_FUN_10fb0f60(A...); bool __thiscall m_FUN_10fb0f80(int *param_2); template<class... A> int m_FUN_10fb0f80(A...); bool __thiscall m_FUN_10fb0fa0(int *param_2); template<class... A> int m_FUN_10fb0fa0(A...); bool __thiscall m_FUN_10fb0fc0(int *param_2); template<class... A> int m_FUN_10fb0fc0(A...); bool __thiscall m_FUN_10fb0fe0(int *param_2); template<class... A> int m_FUN_10fb0fe0(A...); bool __thiscall m_FUN_10fb1000(int *param_2); template<class... A> int m_FUN_10fb1000(A...); bool __thiscall m_FUN_10fb1020(int *param_2); template<class... A> int m_FUN_10fb1020(A...); bool __thiscall m_FUN_10fb1040(int *param_2); template<class... A> int m_FUN_10fb1040(A...); bool __thiscall m_FUN_10fb1060(int *param_2); template<class... A> int m_FUN_10fb1060(A...); bool __thiscall m_FUN_10fb1080(int *param_2); template<class... A> int m_FUN_10fb1080(A...); bool __thiscall m_FUN_10fb10a0(int *param_2); template<class... A> int m_FUN_10fb10a0(A...); bool __thiscall m_FUN_10fb10c0(int *param_2); template<class... A> int m_FUN_10fb10c0(A...); bool __thiscall m_FUN_10fb10e0(int *param_2); template<class... A> int m_FUN_10fb10e0(A...); void __thiscall m_FUN_10fb13c0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fb13c0(A...); void __thiscall m_FUN_10fb13f0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fb13f0(A...); void __thiscall m_FUN_10fb1420(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fb1420(A...); void __thiscall m_FUN_10fb2ab0(int *param_2,int param_3); template<class... A> int m_FUN_10fb2ab0(A...); void __thiscall m_FUN_10fb2b00(int *param_2,int param_3); template<class... A> int m_FUN_10fb2b00(A...); void __thiscall m_FUN_10fb2b50(int *param_2,int param_3); template<class... A> int m_FUN_10fb2b50(A...); void __thiscall m_FUN_10fb2ba0(int *param_2,int param_3); template<class... A> int m_FUN_10fb2ba0(A...); int * __thiscall m_FUN_10fb3470(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10fb3470(A...); int * __thiscall m_FUN_10fb34f0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10fb34f0(A...); int * __thiscall m_FUN_10fb3570(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10fb3570(A...); int * __thiscall m_FUN_10fb35f0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10fb35f0(A...); void __thiscall m_FUN_10fb3e90(undefined4 *param_2); template<class... A> int m_FUN_10fb3e90(A...); void __thiscall m_FUN_10fb3eb0(undefined4 *param_2); template<class... A> int m_FUN_10fb3eb0(A...); void __thiscall m_FUN_10fb3ed0(undefined4 *param_2); template<class... A> int m_FUN_10fb3ed0(A...); void __thiscall m_FUN_10fb3ef0(undefined4 *param_2); template<class... A> int m_FUN_10fb3ef0(A...); void __thiscall m_FUN_10fb3f10(undefined4 *param_2); template<class... A> int m_FUN_10fb3f10(A...); void __thiscall m_FUN_10fb3f20(undefined4 *param_2); template<class... A> int m_FUN_10fb3f20(A...); void __thiscall m_FUN_10fb3f30(undefined4 *param_2); template<class... A> int m_FUN_10fb3f30(A...); void __thiscall m_FUN_10fb3f40(undefined4 *param_2); template<class... A> int m_FUN_10fb3f40(A...); void __thiscall m_FUN_10fb3f50(undefined4 *param_2); template<class... A> int m_FUN_10fb3f50(A...); void __thiscall m_FUN_10fb3f60(undefined4 *param_2); template<class... A> int m_FUN_10fb3f60(A...); void __thiscall m_FUN_10fb3f70(undefined4 *param_2); template<class... A> int m_FUN_10fb3f70(A...); void __thiscall m_FUN_10fb3f80(undefined4 *param_2); template<class... A> int m_FUN_10fb3f80(A...); void __thiscall m_FUN_10fb3f90(undefined4 *param_2); template<class... A> int m_FUN_10fb3f90(A...); void __thiscall m_FUN_10fb3fa0(undefined4 *param_2); template<class... A> int m_FUN_10fb3fa0(A...); void __thiscall m_FUN_10fb3fb0(undefined4 *param_2); template<class... A> int m_FUN_10fb3fb0(A...); void __thiscall m_FUN_10fb3fc0(undefined4 *param_2); template<class... A> int m_FUN_10fb3fc0(A...); int __thiscall m_FUN_10fb44d0(int *param_2); template<class... A> int m_FUN_10fb44d0(A...); void __thiscall m_FUN_10fb6750(undefined4 *param_2); template<class... A> int m_FUN_10fb6750(A...); void __thiscall m_FUN_10fb6770(undefined4 *param_2); template<class... A> int m_FUN_10fb6770(A...); void __thiscall m_FUN_10fb6790(undefined4 *param_2); template<class... A> int m_FUN_10fb6790(A...); void __thiscall m_FUN_10fb67b0(undefined4 *param_2); template<class... A> int m_FUN_10fb67b0(A...); void __thiscall m_FUN_10fb67d0(undefined4 *param_2); template<class... A> int m_FUN_10fb67d0(A...); void __thiscall m_FUN_10fb67e0(undefined4 *param_2); template<class... A> int m_FUN_10fb67e0(A...); void __thiscall m_FUN_10fb67f0(undefined4 *param_2); template<class... A> int m_FUN_10fb67f0(A...); void __thiscall m_FUN_10fb6800(undefined4 *param_2); template<class... A> int m_FUN_10fb6800(A...); uint __thiscall m_FUN_10fb6810(byte *param_2); template<class... A> int m_FUN_10fb6810(A...); uint __thiscall m_FUN_10fb6870(byte *param_2); template<class... A> int m_FUN_10fb6870(A...); uint __thiscall m_FUN_10fb68d0(byte *param_2); template<class... A> int m_FUN_10fb68d0(A...); uint __thiscall m_FUN_10fb6930(byte *param_2); template<class... A> int m_FUN_10fb6930(A...); void __thiscall m_FUN_10fb85d0(undefined4 *param_2); template<class... A> int m_FUN_10fb85d0(A...); void __thiscall m_FUN_10fb85e0(undefined4 *param_2); template<class... A> int m_FUN_10fb85e0(A...); void __thiscall m_FUN_10fb85f0(undefined4 *param_2); template<class... A> int m_FUN_10fb85f0(A...); void __thiscall m_FUN_10fb8600(undefined4 *param_2); template<class... A> int m_FUN_10fb8600(A...); void __thiscall m_FUN_10fb8610(undefined4 *param_2); template<class... A> int m_FUN_10fb8610(A...); void __thiscall m_FUN_10fb8620(undefined4 *param_2); template<class... A> int m_FUN_10fb8620(A...); void __thiscall m_FUN_10fb8630(undefined4 *param_2); template<class... A> int m_FUN_10fb8630(A...); void __thiscall m_FUN_10fb8640(undefined4 *param_2); template<class... A> int m_FUN_10fb8640(A...); void __thiscall m_FUN_10fb8650(undefined4 *param_2); template<class... A> int m_FUN_10fb8650(A...); undefined4 __thiscall m_FUN_10fb9b90(undefined4 param_2); template<class... A> int m_FUN_10fb9b90(A...); undefined4 * __thiscall m_FUN_10fc0880(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fc0880(A...); undefined4 * __thiscall m_FUN_10fc08d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10fc08d0(A...); undefined4 * __thiscall m_FUN_10fc09e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10fc09e0(A...); undefined4 * __thiscall m_FUN_10fc0a00(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10fc0a00(A...); undefined4 * __thiscall m_FUN_10fc1280(undefined4 param_2); template<class... A> int m_FUN_10fc1280(A...); undefined4 * __thiscall m_FUN_10fc12a0(undefined4 param_2); template<class... A> int m_FUN_10fc12a0(A...); undefined4 * __thiscall m_FUN_10fc1300(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fc1300(A...); undefined4 * __thiscall m_FUN_10fc1310(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fc1310(A...); undefined4 * __thiscall m_FUN_10fc13a0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fc13a0(A...); undefined4 * __thiscall m_FUN_10fc13b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fc13b0(A...); undefined4 * __thiscall m_FUN_10fc1930(undefined4 param_2); template<class... A> int m_FUN_10fc1930(A...); undefined4 * __thiscall m_FUN_10fc1950(undefined4 param_2); template<class... A> int m_FUN_10fc1950(A...); undefined4 * __thiscall m_FUN_10fc1a90(undefined4 param_2); template<class... A> int m_FUN_10fc1a90(A...); undefined4 * __thiscall m_FUN_10fc1ab0(undefined4 param_2); template<class... A> int m_FUN_10fc1ab0(A...); undefined4 * __thiscall m_FUN_10fc1ae0(undefined4 param_2); template<class... A> int m_FUN_10fc1ae0(A...); undefined4 * __thiscall m_FUN_10fc1b10(undefined4 param_2); template<class... A> int m_FUN_10fc1b10(A...); undefined4 * __thiscall m_FUN_10fc1b40(undefined4 param_2); template<class... A> int m_FUN_10fc1b40(A...); undefined4 * __thiscall m_FUN_10fc1b70(undefined4 param_2); template<class... A> int m_FUN_10fc1b70(A...); undefined4 * __thiscall m_FUN_10fc1b90(undefined4 param_2); template<class... A> int m_FUN_10fc1b90(A...); undefined4 * __thiscall m_FUN_10fc1be0(undefined4 param_2); template<class... A> int m_FUN_10fc1be0(A...); undefined4 * __thiscall m_FUN_10fc1c10(undefined4 param_2); template<class... A> int m_FUN_10fc1c10(A...); int * __thiscall m_FUN_10fc2380(int *param_2); template<class... A> int m_FUN_10fc2380(A...); bool __thiscall m_FUN_10fc2420(int *param_2); template<class... A> int m_FUN_10fc2420(A...); bool __thiscall m_FUN_10fc2440(int *param_2); template<class... A> int m_FUN_10fc2440(A...); undefined4 * __thiscall m_FUN_10fc25a0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fc25a0(A...); void __thiscall m_FUN_10fc3710(undefined4 *param_2); template<class... A> int m_FUN_10fc3710(A...); void __thiscall m_FUN_10fc3d40(undefined4 *param_2); template<class... A> int m_FUN_10fc3d40(A...); void __thiscall m_FUN_10fc59a0(undefined4 *param_2); template<class... A> int m_FUN_10fc59a0(A...); undefined4 * __thiscall m_FUN_10fca4c0(undefined4 *param_2); template<class... A> int m_FUN_10fca4c0(A...); int * __thiscall m_FUN_10fcbbb0(int *param_2); template<class... A> int m_FUN_10fcbbb0(A...); int * __thiscall m_FUN_10fcd6e0(int *param_2); template<class... A> int m_FUN_10fcd6e0(A...); void __thiscall m_FUN_10fcd7a0(undefined4 *param_2); template<class... A> int m_FUN_10fcd7a0(A...); void __thiscall m_FUN_10fcd7d0(undefined4 *param_2); template<class... A> int m_FUN_10fcd7d0(A...); void __thiscall m_FUN_10fcd800(undefined4 *param_2); template<class... A> int m_FUN_10fcd800(A...); undefined4 * __thiscall m_FUN_10fcdef0(undefined4 *param_2); template<class... A> int m_FUN_10fcdef0(A...); undefined4 * __thiscall m_FUN_10fcdf40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fcdf40(A...); int * __thiscall m_FUN_10fce5f0(int *param_2); template<class... A> int m_FUN_10fce5f0(A...); int __thiscall m_FUN_10fce650(int param_2); template<class... A> int m_FUN_10fce650(A...); uint __thiscall m_FUN_10fce7f0(uint param_2); template<class... A> int m_FUN_10fce7f0(A...); int * __thiscall m_FUN_10fcf670(int *param_2); template<class... A> int m_FUN_10fcf670(A...); int * __thiscall m_FUN_10fcf690(int *param_2); template<class... A> int m_FUN_10fcf690(A...); int * __thiscall m_FUN_10fd3020(int *param_2); template<class... A> int m_FUN_10fd3020(A...); undefined4 * __thiscall m_FUN_10fd3060(undefined4 *param_2); template<class... A> int m_FUN_10fd3060(A...); undefined4 * __thiscall m_FUN_10fd3090(undefined4 *param_2); template<class... A> int m_FUN_10fd3090(A...); undefined4 * __thiscall m_FUN_10fd3ed0(undefined4 param_2); template<class... A> int m_FUN_10fd3ed0(A...); undefined4 * __thiscall m_FUN_10fd7970(undefined4 param_2); template<class... A> int m_FUN_10fd7970(A...); undefined4 * __thiscall m_FUN_10fde890(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10fde890(A...); undefined4 * __thiscall m_FUN_10fde8b0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10fde8b0(A...); undefined4 * __thiscall m_FUN_10fde8d0(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10fde8d0(A...); void __thiscall m_FUN_10fde9e0(undefined4 *param_2); template<class... A> int m_FUN_10fde9e0(A...); void __thiscall m_FUN_10fdea10(undefined4 *param_2); template<class... A> int m_FUN_10fdea10(A...); void __thiscall m_FUN_10fdea40(undefined4 *param_2); template<class... A> int m_FUN_10fdea40(A...); undefined4 * __thiscall m_FUN_10fdfda0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); template<class... A> int m_FUN_10fdfda0(A...); undefined4 * __thiscall m_FUN_10fe0160(undefined4 *param_2); template<class... A> int m_FUN_10fe0160(A...); undefined4 * __thiscall m_FUN_10fe01d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fe01d0(A...); undefined4 * __thiscall m_FUN_10fe01f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fe01f0(A...); undefined4 * __thiscall m_FUN_10fe0200(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fe0200(A...); undefined4 * __thiscall m_FUN_10fe0330(undefined4 param_2,undefined1 param_3); template<class... A> int m_FUN_10fe0330(A...); int * __thiscall m_FUN_10fe0bb0(int *param_2); template<class... A> int m_FUN_10fe0bb0(A...); int __thiscall m_FUN_10fe0c10(int param_2); template<class... A> int m_FUN_10fe0c10(A...); void __thiscall m_FUN_10fe0c40(int *param_2,int param_3); template<class... A> int m_FUN_10fe0c40(A...); int * __thiscall m_FUN_10fe0c60(int param_2); template<class... A> int m_FUN_10fe0c60(A...); int * __thiscall m_FUN_10fe0c80(int param_2); template<class... A> int m_FUN_10fe0c80(A...); uint __thiscall m_FUN_10fe10e0(uint param_2); template<class... A> int m_FUN_10fe10e0(A...); void __thiscall m_FUN_10fe1550(undefined4 *param_2); template<class... A> int m_FUN_10fe1550(A...); void __thiscall m_FUN_10fe15b0(undefined4 *param_2); template<class... A> int m_FUN_10fe15b0(A...); void __thiscall m_FUN_10fe2270(undefined4 *param_2,void *param_3); template<class... A> int m_FUN_10fe2270(A...); int __thiscall m_FUN_10fe23c0(int param_2); template<class... A> int m_FUN_10fe23c0(A...); int __thiscall m_FUN_10fe23d0(int param_2); template<class... A> int m_FUN_10fe23d0(A...); undefined4 * __thiscall m_FUN_10fe2790(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4); template<class... A> int m_FUN_10fe2790(A...); void __thiscall m_FUN_10fe2830(uint param_2,undefined4 *param_3); template<class... A> int m_FUN_10fe2830(A...); void __thiscall m_FUN_10fe45b0(undefined4 param_2,int param_3); template<class... A> int m_FUN_10fe45b0(A...); undefined4 __thiscall m_FUN_10fe5150(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5); template<class... A> int m_FUN_10fe5150(A...); undefined4 __thiscall m_FUN_10fe5160(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6); template<class... A> int m_FUN_10fe5160(A...); undefined4 * __thiscall m_FUN_10fe87d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10fe87d0(A...); undefined4 * __thiscall m_FUN_10fe8940(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10fe8940(A...); undefined4 * __thiscall m_FUN_10fe8a60(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10fe8a60(A...); int * __thiscall m_FUN_10fe8d20(int *param_2); template<class... A> int m_FUN_10fe8d20(A...); void __thiscall m_FUN_10fe92e0(undefined4 *param_2); template<class... A> int m_FUN_10fe92e0(A...); void __thiscall m_FUN_10fe9310(undefined4 *param_2); template<class... A> int m_FUN_10fe9310(A...); void __thiscall m_FUN_10fe9340(undefined4 *param_2); template<class... A> int m_FUN_10fe9340(A...); void __thiscall m_FUN_10fe9370(undefined4 *param_2); template<class... A> int m_FUN_10fe9370(A...); void __thiscall m_FUN_10fe93a0(undefined4 param_2); template<class... A> int m_FUN_10fe93a0(A...); void __thiscall m_FUN_10fe93c0(undefined4 *param_2); template<class... A> int m_FUN_10fe93c0(A...); void __thiscall m_FUN_10fe93f0(undefined4 *param_2); template<class... A> int m_FUN_10fe93f0(A...); int * __thiscall m_FUN_10fe9d00(int *param_2,uint *param_3); template<class... A> int m_FUN_10fe9d00(A...); void __thiscall m_FUN_10febbc0(undefined4 param_2); template<class... A> int m_FUN_10febbc0(A...); undefined4 * __thiscall m_FUN_10fec1a0(undefined4 *param_2); template<class... A> int m_FUN_10fec1a0(A...); undefined4 * __thiscall m_FUN_10fec270(undefined4 param_2); template<class... A> int m_FUN_10fec270(A...); undefined4 * __thiscall m_FUN_10fec2d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fec2d0(A...); undefined4 * __thiscall m_FUN_10fec360(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fec360(A...); undefined4 * __thiscall m_FUN_10fec390(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fec390(A...); undefined4 * __thiscall m_FUN_10fec3b0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fec3b0(A...); undefined4 * __thiscall m_FUN_10fec3d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fec3d0(A...); undefined4 * __thiscall m_FUN_10fec3e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10fec3e0(A...); undefined4 * __thiscall m_FUN_10fec500(undefined4 param_2); template<class... A> int m_FUN_10fec500(A...); undefined4 * __thiscall m_FUN_10fec550(undefined4 param_2); template<class... A> int m_FUN_10fec550(A...); undefined4 * __thiscall m_FUN_10fed4e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10fed4e0(A...); int * __thiscall m_FUN_10fee2d0(int *param_2); template<class... A> int m_FUN_10fee2d0(A...); void __thiscall m_FUN_10fee490(undefined4 *param_2,undefined4 param_3); template<class... A> int m_FUN_10fee490(A...); int __thiscall m_FUN_10fee4b0(int param_2); template<class... A> int m_FUN_10fee4b0(A...); void __thiscall m_FUN_10fee5e0(int *param_2,int param_3); template<class... A> int m_FUN_10fee5e0(A...); int * __thiscall m_FUN_10feeb30(int param_2); template<class... A> int m_FUN_10feeb30(A...); int * __thiscall m_FUN_10feeb50(int param_2); template<class... A> int m_FUN_10feeb50(A...); uint __thiscall m_FUN_10feef50(uint param_2); template<class... A> int m_FUN_10feef50(A...); uint __thiscall m_FUN_10feef90(uint param_2); template<class... A> int m_FUN_10feef90(A...); void __thiscall m_FUN_10fef6c0(int param_2); template<class... A> int m_FUN_10fef6c0(A...); void __thiscall m_FUN_10fef800(int *param_2); template<class... A> int m_FUN_10fef800(A...); int __thiscall m_FUN_10fef870(uint param_2,char param_3); template<class... A> int m_FUN_10fef870(A...); undefined4 __thiscall m_FUN_10fef8f0(uint param_2); template<class... A> int m_FUN_10fef8f0(A...); void __thiscall m_FUN_10ff07c0(undefined4 *param_2); template<class... A> int m_FUN_10ff07c0(A...); };

extern int FUN_10065348(...);
extern int FUN_10f7d8a0(...);
extern int FUN_10f7d8b0(...);
extern int FUN_10f82740(...);
extern int FUN_10f8b430(...);
extern int FUN_10f8b440(...);
extern int FUN_10f8b450(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern int createSCIntArray(...);
extern int createSCStringArray(...);
extern int func_0x10003c83(...);
extern int func_0x100051af(...);
extern int func_0x1005d1b6(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
template<class... A> int __stdcall thunk_FUN_10118c40(A...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012d130(...);
extern int thunk_FUN_101a7120(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101da3a0(...);
extern int thunk_FUN_102207b0(...);
extern int thunk_FUN_1025f580(...);
extern int thunk_FUN_102e3e40(...);
extern int thunk_FUN_10320760(...);
extern int thunk_FUN_1037a2b0(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_103d60a0(...);
extern int thunk_FUN_1059c050(...);
extern int thunk_FUN_1059d800(...);
extern int thunk_FUN_1059d940(...);
extern int thunk_FUN_10baa650(...);
extern int thunk_FUN_10d5dc90(...);
extern int thunk_FUN_10dd1260(...);
extern int thunk_FUN_10dd3190(...);
extern int thunk_FUN_10dd31f0(...);
template<class... A> int __stdcall thunk_FUN_10f30c90(A...);
template<class... A> int __stdcall thunk_FUN_10f77460(A...);
extern int thunk_FUN_10f7ce30(...);
extern int thunk_FUN_10f82020(...);
extern int thunk_FUN_10f86b70(...);
extern int thunk_FUN_10f86c10(...);
extern int thunk_FUN_10f86d80(...);
extern int thunk_FUN_10f87440(...);
extern int thunk_FUN_10f875b0(...);
extern int thunk_FUN_10f88700(...);
extern int thunk_FUN_10f89dd0(...);
extern int thunk_FUN_10f925d0(...);
extern int thunk_FUN_10f93200(...);
extern int thunk_FUN_10fab730(...);
extern int thunk_FUN_10fab810(...);
extern int thunk_FUN_10fab930(...);
template<class... A> int __stdcall thunk_FUN_10fac550(A...);
extern int thunk_FUN_10fad420(...);
extern int thunk_FUN_10fad4a0(...);
extern int thunk_FUN_10fad520(...);
extern int thunk_FUN_10fad5a0(...);
extern int thunk_FUN_10faf860(...);
extern int thunk_FUN_10faf8e0(...);
extern int thunk_FUN_10faf960(...);
extern int thunk_FUN_10fafe10(...);
extern int thunk_FUN_10fb01d0(...);
extern int thunk_FUN_10fbd9b0(...);
extern int thunk_FUN_10fde940(...);
template<class... A> int __stdcall thunk_FUN_10fdea70(A...);
extern int thunk_FUN_10fdf590(...);
extern int thunk_FUN_10fdf810(...);
template<class... A> int __stdcall thunk_FUN_10fdfe20(A...);
template<class... A> int __stdcall thunk_FUN_10fe9420(A...);
extern int thunk_FUN_10fea200(...);
extern int thunk_FUN_10feac90(...);
template<class... A> int __stdcall thunk_FUN_10fee6a0(A...);
extern int thunk_FUN_10ff3290(...);
extern int thunk_FUN_1109aba0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_11128910(...);
extern int thunk_FUN_111a4f00(...);
template<class... A> int __stdcall thunk_FUN_111c0760(A...);
template<class... A> int __stdcall thunk_FUN_111ca9f0(A...);
extern int thunk_FUN_111d11c0(...);
extern int thunk_FUN_111d1960(...);
extern int thunk_FUN_111dd660(...);
template<class... A> int __stdcall thunk_FUN_1123bf80(A...);
extern int thunk_FUN_1123fcd0(...);
extern int thunk_FUN_1123fce0(...);
extern int thunk_FUN_112407b0(...);
extern int thunk_FUN_11240850(...);
extern int thunk_FUN_11249110(...);
extern int thunk_FUN_1124a160(...);
extern int thunk_FUN_1124a200(...);
extern int thunk_FUN_1124a3f0(...);
extern int thunk_FUN_1124d790(...);
extern int thunk_FUN_1124ef40(...);
extern int thunk_FUN_1124f060(...);
extern int thunk_FUN_1125acd0(...);
extern int thunk_FUN_11261330(...);
extern int thunk_FUN_112624a0(...);
extern int thunk_FUN_1128f110(...);
extern int thunk_FUN_1128f160(...);
extern int thunk_FUN_1128f200(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_11882ff0;
extern int DAT_1195e878;
extern int DAT_12126b84;
extern int DAT_122f1250;
extern int DAT_122f5600;
extern int g_lSCObjCount;
extern int ghidra_vftable_RAlarmClock;
extern int ghidra_vftable_RAlarmProgramDataBrowseCB;
extern int ghidra_vftable_RAudioIn;
extern int ghidra_vftable_RConnectedPartnerRemoveRequest;
extern int ghidra_vftable_RConnectedPartnersGetAIOOp;
extern int ghidra_vftable_RConnectionManager;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RGroupRenderingControl;
extern int ghidra_vftable_RHTControl;
extern int ghidra_vftable_RHTTPBufferedDataIO;
extern int ghidra_vftable_RHTTPDataIO;
extern int ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest;
extern int ghidra_vftable_RMuseDeviceSetSettingsPostRequest;
extern int ghidra_vftable_RMusicServicesDirectory;
extern int ghidra_vftable_RUpnpACCreateAlarmAIOOp;
extern int ghidra_vftable_RUpnpACUpdateAlarmAIOOp;
extern int ghidra_vftable_RUpnpAVTReorderTracksInSavedQueueAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_RUpnpClient;
extern int ghidra_vftable_RZPDevice;
extern int ghidra_vftable_SCAlarmSettingsFrequencyDescriptor;
extern int ghidra_vftable_SCAlarmSettingsVolumeAction;
extern int ghidra_vftable_SCArray;
extern int ghidra_vftable_SCBridgeRemovalWizardCompleteState;
extern int ghidra_vftable_SCBridgeRemovalWizardDoNotRemoveState;
extern int ghidra_vftable_SCBridgeRemovalWizardInitState;
extern int ghidra_vftable_SCBridgeRemovalWizardIntroState;
extern int ghidra_vftable_SCBridgeRemovalWizardNetworkTestIntroState;
extern int ghidra_vftable_SCBridgeRemovalWizardResetCompleteState;
extern int ghidra_vftable_SCBridgeRemovalWizardResetFailedState;
extern int ghidra_vftable_SCBridgeRemovalWizardState;
extern int ghidra_vftable_SCBridgeRemovalWizardTestFailState;
extern int ghidra_vftable_SCBridgeRemovalWizardTestPassState;
extern int ghidra_vftable_SCDataRow;
extern int ghidra_vftable_SCGenericEventSink;
extern int ghidra_vftable_SCGenericEventSinkCB;
extern int ghidra_vftable_SCHistoryHideActionDescriptor;
extern int ghidra_vftable_SCHouseholdEventSink;
extern int ghidra_vftable_SCIActionDelegateCB;
extern int ghidra_vftable_SCIActionWithIntDescriptor;
extern int ghidra_vftable_SCIAlarm;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpAlarmSave;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCITimeSettingsProperty;
extern int ghidra_vftable_SCLegacySubmitDiagsWizCompleteState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizDoneState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizErrorState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizInitState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizIntroState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizSubmittingState;
extern int ghidra_vftable_SCLegacySubmitDiagsWizard;
extern int ghidra_vftable_SCLegacyUsageDataWizard;
extern int ghidra_vftable_SCLifecycleLauncherWizard;
extern int ghidra_vftable_SCLifecycleLauncherWizardCompleteState;
extern int ghidra_vftable_SCLifecycleLauncherWizardInfoState;
extern int ghidra_vftable_SCLifecycleLauncherWizardInitState;
extern int ghidra_vftable_SCLifecycleLauncherWizardMissingProductsState;
extern int ghidra_vftable_SCLifecycleLauncherWizardRemindState;
extern int ghidra_vftable_SCLifecycleLauncherWizardState;
extern int ghidra_vftable_SCLifecycleNetworkTestAllTestsFailedState;
extern int ghidra_vftable_SCLifecycleNetworkTestCompleteState;
extern int ghidra_vftable_SCLifecycleNetworkTestErrorState;
extern int ghidra_vftable_SCLifecycleNetworkTestInitState;
extern int ghidra_vftable_SCLifecycleNetworkTestStartWifiState;
extern int ghidra_vftable_SCLifecycleNetworkTestWifiSubmittingState;
extern int ghidra_vftable_SCLifecycleNetworkTestWizardState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardCompleteState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardConfirmState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardInitState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardIntroState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardNetworkTestIntroState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardReadyForDownloadState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardResetFailedState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardTermsOfUseState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardTestFailState;
extern int ghidra_vftable_SCLifecyclePlayerRemovalWizardTestPassState;
extern int ghidra_vftable_SCOpAlarmSave;
extern int ghidra_vftable_SCOpCBProxy;
extern int ghidra_vftable_SCOpConnectedPartnerRemove;
extern int ghidra_vftable_SCOpDeviceVoiceSettingsSet;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpMuseGetPlayerInfo;
extern int ghidra_vftable_SCOpMuseSetSettings;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCPasswordInput;
extern int ghidra_vftable_SCPendingDataObject;
extern int ghidra_vftable_SCSelfTrueplayEnabledState;
extern int ghidra_vftable_SCSelfTrueplayIntroState;
extern int ghidra_vftable_SCSelfTrueplaySkippedState;
extern int ghidra_vftable_SCSonarCleanupState;
extern int ghidra_vftable_SCSonarCompleteState;
extern int ghidra_vftable_SCSonarEndState;
extern int ghidra_vftable_SCSonarInitState;
extern int ghidra_vftable_SCSonarIntroState;
extern int ghidra_vftable_SCSwfObjIndexListener;
extern int ghidra_vftable_SCTimerUser;
extern int ghidra_vftable_SCUsageDataCompleteState;
extern int ghidra_vftable_SCUsageDataInitState;
extern int ghidra_vftable_SCUsageDataOptInState;
extern int ghidra_vftable_SCUsageDataPostCompleteState;
extern int ghidra_vftable_SCUsageDataPrereqOnPostCompleteState;
extern int ghidra_vftable_SCUsageDataStartState;
extern int ghidra_vftable_SCWizard;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_SCWrapperObj;
extern int ghidra_vftable_SwfObjIndexListener;
extern int in_EAX;
extern int uStack_10;
extern int uStack_14;
extern int uStack_1c;
extern int uStack_20;
extern int uStack_24;
extern int uStack_28;
extern int uStack_2c;
extern int uStack_30;
extern int uStack_410;
extern int uStack_41c;
extern int uStack_70;
extern int uStack_7c;
extern int uStack_8;
extern int uStack_80;
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_11728460[];
extern undefined1 LAB_1177afa0[];
extern undefined1 LAB_1177bdab[];
extern undefined1 LAB_1177c063[];
extern undefined1 LAB_1177c1c0[];
extern undefined1 LAB_1177e080[];
extern undefined1 LAB_1177e0b0[];
extern undefined1 LAB_1177e0e0[];
extern undefined1 LAB_1177f98d[];
extern undefined1 LAB_11784ae0[];
extern undefined1 LAB_11785c35[];
extern undefined1 LAB_11786714[];
extern undefined1 LAB_117babb0[];
extern undefined1 LAB_117c4be8[];
extern undefined1 LAB_117c4cc8[];
extern undefined1 LAB_117c6650[];
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f77360(void);
template<class... A> int FUN_10f77360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f77400(undefined4 *param_1);
template<class... A> int FUN_10f77400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f77430(undefined4 *param_1);
template<class... A> int FUN_10f77430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f77660(undefined4 *param_1);
template<class... A> int FUN_10f77660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f779a0(undefined4 *param_1);
template<class... A> int FUN_10f779a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f779b0(undefined4 *param_1);
template<class... A> int FUN_10f779b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f77a40(undefined4 *param_1);
template<class... A> int FUN_10f77a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f77c70(undefined4 *param_1);
template<class... A> int FUN_10f77c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f77ca0(undefined4 *param_1);
template<class... A> int FUN_10f77ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f77d70(undefined4 *param_1);
template<class... A> int FUN_10f77d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f77d80(undefined4 *param_1);
template<class... A> int FUN_10f77d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f77d90(undefined4 *param_1);
template<class... A> int FUN_10f77d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f78130(void);
template<class... A> int FUN_10f78130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10f78f70(SCStr *param_1);
template<class... A> int __stdcall FUN_10f78f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f790e0(int param_1);
template<class... A> int FUN_10f790e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f79d60(int param_1);
template<class... A> int FUN_10f79d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10f79d70(void);
template<class... A> int FUN_10f79d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f79ef0(int *param_1);
template<class... A> int FUN_10f79ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f7a4b0(undefined4 *param_1);
template<class... A> int FUN_10f7a4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f7b9a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f7b9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f7b9e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f7b9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f7bb10(void);
template<class... A> int FUN_10f7bb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f7bb30(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f7bb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f7bb40(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f7bb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f7bb50(void);
template<class... A> int FUN_10f7bb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f7bf90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f7bf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c110(undefined4 param_1);
template<class... A> int FUN_10f7c110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c120(undefined4 param_1);
template<class... A> int FUN_10f7c120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c130(undefined4 param_1);
template<class... A> int FUN_10f7c130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c140(undefined4 param_1);
template<class... A> int FUN_10f7c140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c150(undefined4 param_1);
template<class... A> int FUN_10f7c150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f7c160(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f7c160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c200(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f7c200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c220(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f7c220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c240(undefined4 param_1);
template<class... A> int FUN_10f7c240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c250(undefined4 param_1);
template<class... A> int FUN_10f7c250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c260(undefined4 param_1);
template<class... A> int FUN_10f7c260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c270(undefined4 param_1);
template<class... A> int FUN_10f7c270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7c280(undefined4 param_1);
template<class... A> int FUN_10f7c280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f7c7a0(undefined4 *param_1);
template<class... A> int FUN_10f7c7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7c7c0(undefined4 param_1);
template<class... A> int FUN_10f7c7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f7c7d0(undefined4 *param_1);
template<class... A> int FUN_10f7c7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f7c8e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f7c8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f7cad0(undefined4 *param_1);
template<class... A> int FUN_10f7cad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f7d2c0(undefined4 *param_1);
template<class... A> int FUN_10f7d2c0(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10f7d8a0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f7d8b0 (ram,0x101ba14a) */ void __fastcall FUN_10f7d8b0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f7e200(undefined4 *param_1);
template<class... A> int FUN_10f7e200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7e2f0(int param_1);
template<class... A> int FUN_10f7e2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7e300(int param_1);
template<class... A> int FUN_10f7e300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f7e310(int *param_1);
template<class... A> int FUN_10f7e310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f7ebc0(undefined4 *param_1);
template<class... A> int FUN_10f7ebc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f7ec10(int param_1);
template<class... A> int FUN_10f7ec10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7ec30(undefined4 param_1);
template<class... A> int FUN_10f7ec30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7ec40(undefined4 param_1);
template<class... A> int FUN_10f7ec40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7ec50(undefined4 param_1);
template<class... A> int FUN_10f7ec50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7ec60(undefined4 param_1);
template<class... A> int FUN_10f7ec60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7ec70(undefined4 param_1);
template<class... A> int FUN_10f7ec70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7ec80(undefined4 param_1);
template<class... A> int FUN_10f7ec80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7ec90(undefined4 param_1);
template<class... A> int FUN_10f7ec90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7eca0(undefined4 param_1);
template<class... A> int FUN_10f7eca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7ecb0(undefined4 param_1);
template<class... A> int FUN_10f7ecb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f7ef50(undefined4 param_1);
template<class... A> int FUN_10f7ef50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10f7efd0(int *param_1);
template<class... A> int FUN_10f7efd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f7f000(int param_1);
template<class... A> int FUN_10f7f000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f7f530(uint param_1);
template<class... A> int FUN_10f7f530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f7f6b0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f7f6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f7f700(int param_1,int param_2);
template<class... A> int FUN_10f7f700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f7f8c0(int param_1);
template<class... A> int FUN_10f7f8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f7f8e0(int param_1);
template<class... A> int FUN_10f7f8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f80580(int param_1);
template<class... A> int FUN_10f80580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f80590(int param_1);
template<class... A> int FUN_10f80590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f80720(void);
template<class... A> int FUN_10f80720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f80730(void);
template<class... A> int FUN_10f80730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f81ad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f81ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f81b90(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f81b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f81ba0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f81ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f81bb0(void);
template<class... A> int FUN_10f81bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f81d50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f81d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f81df0(undefined4 param_1);
template<class... A> int FUN_10f81df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f81e00(undefined4 param_1);
template<class... A> int FUN_10f81e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f81ec0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f81ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f81f60(undefined4 param_1);
template<class... A> int FUN_10f81f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f81f70(undefined4 param_1);
template<class... A> int FUN_10f81f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f81f80(undefined4 param_1);
template<class... A> int FUN_10f81f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f81f90(undefined4 *param_1);
template<class... A> int FUN_10f81f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f81fc0(undefined4 *param_1);
template<class... A> int FUN_10f81fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f82200(int param_1);
template<class... A> int FUN_10f82200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f82230(undefined4 *param_1);
template<class... A> int FUN_10f82230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f82250(undefined4 param_1);
template<class... A> int FUN_10f82250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f82260(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f82260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f823e0(undefined4 *param_1);
template<class... A> int FUN_10f823e0(A...);
/* WARNING: Removing unreachable block_10f82740 (ram,0x101ba14a) */ void __fastcall FUN_10f82740(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82be0(undefined4 *param_1);
template<class... A> int FUN_10f82be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82bf0(undefined4 *param_1);
template<class... A> int FUN_10f82bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82c00(undefined4 *param_1);
template<class... A> int FUN_10f82c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f82c10(void);
template<class... A> int FUN_10f82c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82c40(undefined4 *param_1);
template<class... A> int FUN_10f82c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82c50(undefined4 *param_1);
template<class... A> int FUN_10f82c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82c60(undefined4 *param_1);
template<class... A> int FUN_10f82c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f82c70(void);
template<class... A> int FUN_10f82c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82ce0(int param_1);
template<class... A> int FUN_10f82ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f82d10(void);
template<class... A> int FUN_10f82d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82e30(undefined4 *param_1);
template<class... A> int FUN_10f82e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82e60(undefined4 *param_1);
template<class... A> int FUN_10f82e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82e70(int param_1);
template<class... A> int FUN_10f82e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f82e80(void);
template<class... A> int FUN_10f82e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f82ed0(int param_1);
template<class... A> int FUN_10f82ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f82ee0(void);
template<class... A> int FUN_10f82ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f83130(void);
template<class... A> int FUN_10f83130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f831b0(int *param_1);
template<class... A> int FUN_10f831b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f831c0(int param_1);
template<class... A> int FUN_10f831c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f831d0(int param_1);
template<class... A> int FUN_10f831d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f831e0(int param_1);
template<class... A> int FUN_10f831e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f831f0(int *param_1);
template<class... A> int FUN_10f831f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f83200(int *param_1);
template<class... A> int FUN_10f83200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f83210(undefined4 *param_1);
template<class... A> int FUN_10f83210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f83220(undefined4 *param_1);
template<class... A> int FUN_10f83220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f83450(int param_1);
template<class... A> int FUN_10f83450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f838e0(undefined4 *param_1);
template<class... A> int FUN_10f838e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f83920(int param_1);
template<class... A> int FUN_10f83920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f83930(undefined4 param_1);
template<class... A> int FUN_10f83930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f83940(undefined4 param_1);
template<class... A> int FUN_10f83940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f83950(undefined4 param_1);
template<class... A> int FUN_10f83950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f83960(undefined4 param_1);
template<class... A> int FUN_10f83960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f83970(int param_1);
template<class... A> int FUN_10f83970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f83980(int param_1);
template<class... A> int FUN_10f83980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f83990(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10f83990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f83f30(int param_1);
template<class... A> int FUN_10f83f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f83f40(int param_1);
template<class... A> int FUN_10f83f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f83f50(uint param_1);
template<class... A> int FUN_10f83f50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f83fc0(int param_1);
template<class... A> int FUN_10f83fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f84080(int param_1);
template<class... A> int FUN_10f84080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f84090(int param_1);
template<class... A> int FUN_10f84090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f840a0(int param_1);
template<class... A> int FUN_10f840a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f840b0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f840b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f84100(int param_1,int param_2);
template<class... A> int FUN_10f84100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f84150(int param_1);
template<class... A> int FUN_10f84150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f84160(int param_1);
template<class... A> int FUN_10f84160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f84220(undefined4 *param_1);
template<class... A> int FUN_10f84220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f84230(int param_1);
template<class... A> int FUN_10f84230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f84240(int param_1);
template<class... A> int FUN_10f84240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f84250(int param_1);
template<class... A> int FUN_10f84250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f84260(int param_1);
template<class... A> int FUN_10f84260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f84270(int param_1);
template<class... A> int FUN_10f84270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f84280(int param_1);
template<class... A> int FUN_10f84280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f86020(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5);
template<class... A> int FUN_10f86020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f860a0(uint param_1,undefined4 param_2,int param_3);
template<class... A> int FUN_10f860a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f86130(void);
template<class... A> int FUN_10f86130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f86140(void);
template<class... A> int FUN_10f86140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f86150(int param_1);
template<class... A> int FUN_10f86150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f86450(int param_1);
template<class... A> int FUN_10f86450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f86460(int param_1);
template<class... A> int FUN_10f86460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10f86660(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10f86660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f86680(int param_1);
template<class... A> int FUN_10f86680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f866a0(int param_1);
template<class... A> int FUN_10f866a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f86820(int param_1);
template<class... A> int FUN_10f86820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f86830(int param_1);
template<class... A> int FUN_10f86830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f86a00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f86a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f86a20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10f86a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f86a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f86a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f86a60(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f86a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f86a70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f86a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f86aa0(void);
template<class... A> int FUN_10f86aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f86ab0(void);
template<class... A> int FUN_10f86ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f86ac0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f86ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f86ad0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f86ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f86ae0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f86ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f86af0(void);
template<class... A> int FUN_10f86af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f86b00(void);
template<class... A> int FUN_10f86b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f86cb0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f86cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f86d50(undefined4 *param_1);
template<class... A> int FUN_10f86d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f86d60(undefined4 *param_1);
template<class... A> int FUN_10f86d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f86d70(undefined4 param_1);
template<class... A> int FUN_10f86d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f870a0(undefined4 param_1);
template<class... A> int FUN_10f870a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f870b0(undefined4 param_1);
template<class... A> int FUN_10f870b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f870c0(undefined4 param_1);
template<class... A> int FUN_10f870c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f870d0(undefined4 param_1);
template<class... A> int FUN_10f870d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f870e0(undefined4 param_1);
template<class... A> int FUN_10f870e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f870f0(undefined4 param_1);
template<class... A> int FUN_10f870f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f87100(undefined4 param_1);
template<class... A> int FUN_10f87100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f87110(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f87110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f87420(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f87420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f87540(undefined4 param_1);
template<class... A> int FUN_10f87540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f87550(undefined4 param_1);
template<class... A> int FUN_10f87550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f87560(undefined4 param_1);
template<class... A> int FUN_10f87560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f87570(undefined4 param_1);
template<class... A> int FUN_10f87570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f87580(undefined4 param_1);
template<class... A> int FUN_10f87580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f87590(undefined4 param_1);
template<class... A> int FUN_10f87590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f875a0(undefined4 param_1);
template<class... A> int FUN_10f875a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f87870(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4);
template<class... A> int FUN_10f87870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f878c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f878c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f87a20(undefined4 *param_1);
template<class... A> int FUN_10f87a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f87a70(undefined4 *param_1);
template<class... A> int FUN_10f87a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f87a90(undefined4 param_1);
template<class... A> int FUN_10f87a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f88830(void);
template<class... A> int FUN_10f88830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f888c0(int param_1);
template<class... A> int FUN_10f888c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f888d0(int *param_1);
template<class... A> int FUN_10f888d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f88950(int param_1);
template<class... A> int FUN_10f88950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10f889b0(char *param_1,char *param_2);
template<class... A> int FUN_10f889b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10f88a70(char *param_1,char *param_2);
template<class... A> int FUN_10f88a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f88af0(int *param_1);
template<class... A> int FUN_10f88af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f88b00(int *param_1);
template<class... A> int FUN_10f88b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f88b10(int *param_1);
template<class... A> int FUN_10f88b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f88b20(int *param_1);
template<class... A> int FUN_10f88b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f88b30(undefined4 *param_1);
template<class... A> int FUN_10f88b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f88b40(undefined4 *param_1);
template<class... A> int FUN_10f88b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10f88b50(int *param_1);
template<class... A> int FUN_10f88b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10f88b60(byte *param_1,byte *param_2);
template<class... A> int FUN_10f88b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10f88be0(byte *param_1,byte *param_2);
template<class... A> int FUN_10f88be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10f88c60(byte *param_1,byte *param_2);
template<class... A> int FUN_10f88c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10f88ce0(byte *param_1,byte *param_2);
template<class... A> int FUN_10f88ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f88df0(undefined4 *param_1);
template<class... A> int FUN_10f88df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f88f80(int param_1);
template<class... A> int FUN_10f88f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10f88fa0(float *param_1);
template<class... A> int FUN_10f88fa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f890b0(undefined4 param_1);
template<class... A> int FUN_10f890b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f892c0(undefined4 param_1);
template<class... A> int FUN_10f892c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f892d0(undefined4 param_1);
template<class... A> int FUN_10f892d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f892e0(undefined4 param_1);
template<class... A> int FUN_10f892e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f892f0(undefined4 param_1);
template<class... A> int FUN_10f892f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f89300(undefined4 param_1);
template<class... A> int FUN_10f89300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f89310(undefined4 param_1);
template<class... A> int FUN_10f89310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f893a0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10f893a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f893b0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10f893b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f893c0(undefined4 param_1);
template<class... A> int FUN_10f893c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f893d0(undefined4 param_1);
template<class... A> int FUN_10f893d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f89450(void);
template<class... A> int FUN_10f89450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f89510(int param_1);
template<class... A> int FUN_10f89510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f89520(undefined4 *param_1);
template<class... A> int FUN_10f89520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f89860(int param_1,int param_2,int param_3);
template<class... A> int FUN_10f89860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f898a0(uint param_1);
template<class... A> int FUN_10f898a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f89920(uint param_1);
template<class... A> int FUN_10f89920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f89990(undefined4 *param_1);
template<class... A> int FUN_10f89990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f899f0(int param_1);
template<class... A> int FUN_10f899f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f89a00(int param_1);
template<class... A> int FUN_10f89a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f89b20(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f89b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f89b70(int param_1,int param_2);
template<class... A> int FUN_10f89b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f89bc0(int param_1,int param_2);
template<class... A> int FUN_10f89bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f89c20(int param_1);
template<class... A> int FUN_10f89c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f89c40(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f89c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10f89c60(float *param_1);
template<class... A> int FUN_10f89c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f89c70(void);
template<class... A> int FUN_10f89c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f89c80(void);
template<class... A> int FUN_10f89c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f89c90(void);
template<class... A> int FUN_10f89c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f89ca0(void);
template<class... A> int FUN_10f89ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f89cb0(undefined4 param_1);
template<class... A> int FUN_10f89cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f89cc0(int *param_1);
template<class... A> int FUN_10f89cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f89d50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f89d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f89d70(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f89d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f89da0(void);
template<class... A> int FUN_10f89da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f89f80(undefined4 *param_1);
template<class... A> int FUN_10f89f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f89f90(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f89f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f89fc0(undefined4 param_1);
template<class... A> int FUN_10f89fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f89fd0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f89fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f8a000(undefined4 param_1);
template<class... A> int FUN_10f8a000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f8a010(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10f8a010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f8a020(void);
template<class... A> int FUN_10f8a020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f8a060(undefined4 param_1);
template<class... A> int FUN_10f8a060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f8a070(undefined4 param_1);
template<class... A> int FUN_10f8a070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f8a670(undefined4 *param_1);
template<class... A> int FUN_10f8a670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8a690(undefined4 param_1);
template<class... A> int FUN_10f8a690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f8a6a0(undefined4 *param_1);
template<class... A> int FUN_10f8a6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f8a6c0(undefined4 *param_1);
template<class... A> int FUN_10f8a6c0(A...);
/* WARNING: Removing unreachable block_10f8b430 (ram,0x101ba14a) */ void __fastcall FUN_10f8b430(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f8b440 (ram,0x101ba14a) */ void __fastcall FUN_10f8b440(undefined4 *param_1);
/* WARNING: Removing unreachable block_10f8b450 (ram,0x101ba14a) */ void __fastcall FUN_10f8b450(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f8bc80(undefined4 *param_1);
template<class... A> int FUN_10f8bc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f8bca0(undefined4 *param_1);
template<class... A> int FUN_10f8bca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f8bcc0(undefined4 *param_1);
template<class... A> int FUN_10f8bcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8bd20(int param_1);
template<class... A> int FUN_10f8bd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8bd30(int param_1);
template<class... A> int FUN_10f8bd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8bd40(undefined4 *param_1);
template<class... A> int FUN_10f8bd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8bd50(undefined4 *param_1);
template<class... A> int FUN_10f8bd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10f8bd60(int *param_1);
template<class... A> int FUN_10f8bd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10f8bd70(int *param_1);
template<class... A> int FUN_10f8bd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f8c2e0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10f8c2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f8c2f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f8c2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8c300(undefined4 param_1);
template<class... A> int FUN_10f8c300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8c310(undefined4 param_1);
template<class... A> int FUN_10f8c310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8c320(undefined4 param_1);
template<class... A> int FUN_10f8c320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8c330(undefined4 param_1);
template<class... A> int FUN_10f8c330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f8c340(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10f8c340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10f8c3c0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f8c3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f8c3f0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10f8c3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f8c420(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10f8c420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f8c820(uint param_1);
template<class... A> int FUN_10f8c820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f8c920(int *param_1);
template<class... A> int FUN_10f8c920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f8c930(undefined4 *param_1);
template<class... A> int FUN_10f8c930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f8cb00(int param_1,int param_2);
template<class... A> int FUN_10f8cb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8cb50(int *param_1);
template<class... A> int FUN_10f8cb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8ce90(int param_1);
template<class... A> int FUN_10f8ce90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f8ceb0(int param_1);
template<class... A> int FUN_10f8ceb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f8cf00(int param_1);
template<class... A> int FUN_10f8cf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f8cf10(int param_1);
template<class... A> int FUN_10f8cf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f8cf20(int param_1);
template<class... A> int FUN_10f8cf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f8cf30(int param_1);
template<class... A> int FUN_10f8cf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f8d040(int param_1);
template<class... A> int FUN_10f8d040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10f8d060(int param_1);
template<class... A> int FUN_10f8d060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * FUN_10f8ddc0(SCStr *param_1,int param_2);
template<class... A> int FUN_10f8ddc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f8e030(void);
template<class... A> int FUN_10f8e030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f8e040(void);
template<class... A> int FUN_10f8e040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f8ea80(int *param_1);
template<class... A> int FUN_10f8ea80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f8f0d0(undefined4 *param_1);
template<class... A> int FUN_10f8f0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f8f0e0(int *param_1);
template<class... A> int FUN_10f8f0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f8f110(undefined4 *param_1);
template<class... A> int FUN_10f8f110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f8f120(undefined4 *param_1);
template<class... A> int FUN_10f8f120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f8f130(undefined4 *param_1);
template<class... A> int FUN_10f8f130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f91ac0(undefined4 *param_1);
template<class... A> int FUN_10f91ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f91ad0(undefined4 *param_1);
template<class... A> int FUN_10f91ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f91b90(undefined4 *param_1);
template<class... A> int FUN_10f91b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f91ba0(undefined4 *param_1);
template<class... A> int FUN_10f91ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f91bb0(undefined4 *param_1);
template<class... A> int FUN_10f91bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f91c40(undefined4 *param_1);
template<class... A> int FUN_10f91c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f929b0(int param_1);
template<class... A> int FUN_10f929b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f93070(int param_1);
template<class... A> int FUN_10f93070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f931e0(undefined4 *param_1);
template<class... A> int FUN_10f931e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f96c30(int param_1);
template<class... A> int FUN_10f96c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10f96d50(int param_1);
template<class... A> int FUN_10f96d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f96fb0(undefined4 *param_1);
template<class... A> int FUN_10f96fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f96fc0(undefined4 *param_1);
template<class... A> int FUN_10f96fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f96fd0(undefined4 *param_1);
template<class... A> int FUN_10f96fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f96fe0(undefined4 *param_1);
template<class... A> int FUN_10f96fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f96ff0(undefined4 *param_1);
template<class... A> int FUN_10f96ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f97000(undefined4 *param_1);
template<class... A> int FUN_10f97000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f97130(int *param_1);
template<class... A> int FUN_10f97130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f99470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f99470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f99490(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10f99490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f99560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f99560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f99580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10f99580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f997f0(void);
template<class... A> int FUN_10f997f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99800(void);
template<class... A> int FUN_10f99800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99820(void);
template<class... A> int FUN_10f99820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99840(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f99840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99850(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f99850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99860(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f99860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99870(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f99870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99880(void);
template<class... A> int FUN_10f99880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99890(void);
template<class... A> int FUN_10f99890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99c60(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f99c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f99c80(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10f99c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f99dd0(undefined4 param_1);
template<class... A> int FUN_10f99dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f99de0(undefined4 param_1);
template<class... A> int FUN_10f99de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f99df0(undefined4 param_1);
template<class... A> int FUN_10f99df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10f99e00(int param_1,uint *param_2);
template<class... A> int FUN_10f99e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10f99e30(int param_1,uint *param_2);
template<class... A> int FUN_10f99e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a0e0(undefined4 param_1);
template<class... A> int FUN_10f9a0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a0f0(undefined4 param_1);
template<class... A> int FUN_10f9a0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a100(undefined4 param_1);
template<class... A> int FUN_10f9a100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a110(undefined4 param_1);
template<class... A> int FUN_10f9a110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a120(undefined4 param_1);
template<class... A> int FUN_10f9a120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a130(undefined4 param_1);
template<class... A> int FUN_10f9a130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a140(undefined4 param_1);
template<class... A> int FUN_10f9a140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a150(undefined4 param_1);
template<class... A> int FUN_10f9a150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a160(undefined4 param_1);
template<class... A> int FUN_10f9a160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a170(undefined4 param_1);
template<class... A> int FUN_10f9a170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a180(undefined4 param_1);
template<class... A> int FUN_10f9a180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f9a190(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f9a190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f9a1d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10f9a1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f9a310(int *param_1,int *param_2);
template<class... A> int FUN_10f9a310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a460(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f9a460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a480(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f9a480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a4a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f9a4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a4c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10f9a4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a4e0(undefined4 param_1);
template<class... A> int FUN_10f9a4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a4f0(undefined4 param_1);
template<class... A> int FUN_10f9a4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a500(undefined4 param_1);
template<class... A> int FUN_10f9a500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a510(undefined4 param_1);
template<class... A> int FUN_10f9a510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a520(undefined4 param_1);
template<class... A> int FUN_10f9a520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10f9a530(undefined4 param_1);
template<class... A> int FUN_10f9a530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f9a8d0(undefined4 *param_1);
template<class... A> int FUN_10f9a8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f9a8f0(undefined4 *param_1);
template<class... A> int FUN_10f9a8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9a910(undefined4 param_1);
template<class... A> int FUN_10f9a910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9a920(undefined4 param_1);
template<class... A> int FUN_10f9a920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f9a930(undefined4 *param_1);
template<class... A> int FUN_10f9a930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f9a980(undefined4 *param_1);
template<class... A> int FUN_10f9a980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10f9aa60(undefined4 *param_1);
template<class... A> int FUN_10f9aa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b230(int param_1);
template<class... A> int FUN_10f9b230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b250(int param_1);
template<class... A> int FUN_10f9b250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b530(undefined4 *param_1);
template<class... A> int FUN_10f9b530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b540(undefined4 *param_1);
template<class... A> int FUN_10f9b540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b640(undefined4 *param_1);
template<class... A> int FUN_10f9b640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b650(undefined4 *param_1);
template<class... A> int FUN_10f9b650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b660(undefined4 *param_1);
template<class... A> int FUN_10f9b660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b670(undefined4 *param_1);
template<class... A> int FUN_10f9b670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b680(undefined4 *param_1);
template<class... A> int FUN_10f9b680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b6a0(undefined4 *param_1);
template<class... A> int FUN_10f9b6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9b6b0(undefined4 *param_1);
template<class... A> int FUN_10f9b6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f9bb10(int *param_1);
template<class... A> int FUN_10f9bb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f9bb20(int *param_1);
template<class... A> int FUN_10f9bb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f9bb30(int *param_1);
template<class... A> int FUN_10f9bb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10f9bb40(int *param_1);
template<class... A> int FUN_10f9bb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9c410(undefined4 *param_1);
template<class... A> int FUN_10f9c410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9c440(undefined4 *param_1);
template<class... A> int FUN_10f9c440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9c4b0(int param_1);
template<class... A> int FUN_10f9c4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10f9c4d0(int param_1);
template<class... A> int FUN_10f9c4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9ce40(undefined4 param_1);
template<class... A> int FUN_10f9ce40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9ce50(undefined4 param_1);
template<class... A> int FUN_10f9ce50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9ce60(undefined4 param_1);
template<class... A> int FUN_10f9ce60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9ce70(undefined4 param_1);
template<class... A> int FUN_10f9ce70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9ce80(undefined4 param_1);
template<class... A> int FUN_10f9ce80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9ce90(undefined4 param_1);
template<class... A> int FUN_10f9ce90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9cea0(undefined4 param_1);
template<class... A> int FUN_10f9cea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9ceb0(undefined4 param_1);
template<class... A> int FUN_10f9ceb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9cec0(undefined4 param_1);
template<class... A> int FUN_10f9cec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9ced0(undefined4 param_1);
template<class... A> int FUN_10f9ced0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9cee0(undefined4 param_1);
template<class... A> int FUN_10f9cee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9cef0(undefined4 param_1);
template<class... A> int FUN_10f9cef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9cf00(undefined4 param_1);
template<class... A> int FUN_10f9cf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9cf10(undefined4 param_1);
template<class... A> int FUN_10f9cf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9cf20(undefined4 param_1);
template<class... A> int FUN_10f9cf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9cf30(undefined4 param_1);
template<class... A> int FUN_10f9cf30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f9d540(int param_1);
template<class... A> int FUN_10f9d540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10f9d570(int param_1);
template<class... A> int FUN_10f9d570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f9d600(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10f9d600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f9d610(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10f9d610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9d620(int param_1);
template<class... A> int FUN_10f9d620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10f9d630(int param_1);
template<class... A> int FUN_10f9d630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f9dab0(uint param_1);
template<class... A> int FUN_10f9dab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10f9db30(uint param_1);
template<class... A> int FUN_10f9db30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f9f2f0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f9f2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10f9f340(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10f9f340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f9f390(int param_1,int param_2);
template<class... A> int FUN_10f9f390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10f9f3e0(int param_1,int param_2);
template<class... A> int FUN_10f9f3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fa01a0(int param_1);
template<class... A> int FUN_10fa01a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fa01b0(int param_1);
template<class... A> int FUN_10fa01b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fa33d0(int param_1);
template<class... A> int FUN_10fa33d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fa33f0(int param_1);
template<class... A> int FUN_10fa33f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fa3520(void);
template<class... A> int FUN_10fa3520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fa3530(void);
template<class... A> int FUN_10fa3530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fa3540(void);
template<class... A> int FUN_10fa3540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fa3550(void);
template<class... A> int FUN_10fa3550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fa36c0(undefined4 param_1);
template<class... A> int FUN_10fa36c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fa36d0(undefined4 param_1);
template<class... A> int FUN_10fa36d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fa40e0(int param_1);
template<class... A> int FUN_10fa40e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fa51a0(int *param_1);
template<class... A> int FUN_10fa51a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fa51d0(undefined4 *param_1);
template<class... A> int FUN_10fa51d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fa51e0(undefined4 *param_1);
template<class... A> int FUN_10fa51e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fa51f0(undefined4 *param_1);
template<class... A> int FUN_10fa51f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fa5200(undefined4 *param_1);
template<class... A> int FUN_10fa5200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fa5370(undefined4 *param_1);
template<class... A> int FUN_10fa5370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faae80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10faae80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faaea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10faaea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faaec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10faaec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faaee0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10faaee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faaf00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10faaf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faaf20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10faaf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faaf40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10faaf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faaf60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10faaf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faaf80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10faaf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fab020(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fab020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fab030(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fab030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fab040(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fab040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fab050(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fab050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fab060(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fab060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fab070(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fab070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab240(void);
template<class... A> int FUN_10fab240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab250(void);
template<class... A> int FUN_10fab250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab260(void);
template<class... A> int FUN_10fab260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab270(void);
template<class... A> int FUN_10fab270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab280(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab290(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab2a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab2b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab2c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab2d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab2e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab2f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab300(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab310(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab320(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fab320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab330(void);
template<class... A> int FUN_10fab330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab340(void);
template<class... A> int FUN_10fab340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab350(void);
template<class... A> int FUN_10fab350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab360(void);
template<class... A> int FUN_10fab360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab370(void);
template<class... A> int FUN_10fab370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab380(void);
template<class... A> int FUN_10fab380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab390(void);
template<class... A> int FUN_10fab390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab3a0(void);
template<class... A> int FUN_10fab3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fab8f0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10fab8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10faba10(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10faba10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10faba30(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10faba30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10faba50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10faba50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10faba70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10faba70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fabbf0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10fabbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fabcc0(undefined4 *param_1);
template<class... A> int FUN_10fabcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fabcd0(undefined4 *param_1);
template<class... A> int FUN_10fabcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fabce0(undefined4 *param_1);
template<class... A> int FUN_10fabce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fabcf0(undefined4 *param_1);
template<class... A> int FUN_10fabcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fabd00(undefined4 param_1);
template<class... A> int FUN_10fabd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fabd10(undefined4 param_1);
template<class... A> int FUN_10fabd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fabd20(undefined4 param_1);
template<class... A> int FUN_10fabd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fabd30(undefined4 param_1);
template<class... A> int FUN_10fabd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10faca40(undefined4 param_1);
template<class... A> int FUN_10faca40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10faca50(undefined4 param_1);
template<class... A> int FUN_10faca50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10faca60(undefined4 param_1);
template<class... A> int FUN_10faca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10faca70(undefined4 param_1);
template<class... A> int FUN_10faca70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10faca80(undefined4 param_1);
template<class... A> int FUN_10faca80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10faca90(undefined4 param_1);
template<class... A> int FUN_10faca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facaa0(undefined4 param_1);
template<class... A> int FUN_10facaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facab0(undefined4 param_1);
template<class... A> int FUN_10facab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facac0(undefined4 param_1);
template<class... A> int FUN_10facac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facad0(undefined4 param_1);
template<class... A> int FUN_10facad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facae0(undefined4 param_1);
template<class... A> int FUN_10facae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facaf0(undefined4 param_1);
template<class... A> int FUN_10facaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb00(undefined4 param_1);
template<class... A> int FUN_10facb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb10(undefined4 param_1);
template<class... A> int FUN_10facb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb20(undefined4 param_1);
template<class... A> int FUN_10facb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb30(undefined4 param_1);
template<class... A> int FUN_10facb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb40(undefined4 param_1);
template<class... A> int FUN_10facb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb50(undefined4 param_1);
template<class... A> int FUN_10facb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb60(undefined4 param_1);
template<class... A> int FUN_10facb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb70(undefined4 param_1);
template<class... A> int FUN_10facb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb80(undefined4 param_1);
template<class... A> int FUN_10facb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facb90(undefined4 param_1);
template<class... A> int FUN_10facb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facba0(undefined4 param_1);
template<class... A> int FUN_10facba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facbb0(undefined4 param_1);
template<class... A> int FUN_10facbb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facbc0(undefined4 param_1);
template<class... A> int FUN_10facbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facbd0(undefined4 param_1);
template<class... A> int FUN_10facbd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facbe0(undefined4 param_1);
template<class... A> int FUN_10facbe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facbf0(undefined4 param_1);
template<class... A> int FUN_10facbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facc00(undefined4 param_1);
template<class... A> int FUN_10facc00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facc10(undefined4 param_1);
template<class... A> int FUN_10facc10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10facc20(undefined4 param_1);
template<class... A> int FUN_10facc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10facce0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10facce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10facd20(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10facd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10facd60(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10facd60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10facdd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10facdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10facf50(undefined4 param_1,int param_2);
template<class... A> int FUN_10facf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad3a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fad3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad3c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fad3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad3e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fad3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad400(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fad400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad820(undefined4 param_1);
template<class... A> int FUN_10fad820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad830(undefined4 param_1);
template<class... A> int FUN_10fad830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad840(undefined4 param_1);
template<class... A> int FUN_10fad840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad850(undefined4 param_1);
template<class... A> int FUN_10fad850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad860(undefined4 param_1);
template<class... A> int FUN_10fad860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad870(undefined4 param_1);
template<class... A> int FUN_10fad870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad880(undefined4 param_1);
template<class... A> int FUN_10fad880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad890(undefined4 param_1);
template<class... A> int FUN_10fad890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad8a0(undefined4 param_1);
template<class... A> int FUN_10fad8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad8b0(undefined4 param_1);
template<class... A> int FUN_10fad8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad8c0(undefined4 param_1);
template<class... A> int FUN_10fad8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad8d0(undefined4 param_1);
template<class... A> int FUN_10fad8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad8e0(undefined4 param_1);
template<class... A> int FUN_10fad8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad8f0(undefined4 param_1);
template<class... A> int FUN_10fad8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad900(undefined4 param_1);
template<class... A> int FUN_10fad900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad910(undefined4 param_1);
template<class... A> int FUN_10fad910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad920(undefined4 param_1);
template<class... A> int FUN_10fad920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad930(undefined4 param_1);
template<class... A> int FUN_10fad930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fad940(undefined4 param_1);
template<class... A> int FUN_10fad940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fad950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fad950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fad980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fad980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fad9b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fad9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fad9e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fad9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fadce0(undefined4 *param_1);
template<class... A> int FUN_10fadce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fadd70(undefined4 *param_1);
template<class... A> int FUN_10fadd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fade00(undefined4 *param_1);
template<class... A> int FUN_10fade00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fade90(undefined4 *param_1);
template<class... A> int FUN_10fade90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fae2f0(undefined4 *param_1);
template<class... A> int FUN_10fae2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fae310(undefined4 *param_1);
template<class... A> int FUN_10fae310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fae330(undefined4 *param_1);
template<class... A> int FUN_10fae330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fae430(undefined4 *param_1);
template<class... A> int FUN_10fae430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fae450(undefined4 *param_1);
template<class... A> int FUN_10fae450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fae470(undefined4 *param_1);
template<class... A> int FUN_10fae470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fae490(undefined4 param_1);
template<class... A> int FUN_10fae490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fae4a0(undefined4 param_1);
template<class... A> int FUN_10fae4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fae4b0(undefined4 param_1);
template<class... A> int FUN_10fae4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fae8b0(undefined4 *param_1);
template<class... A> int FUN_10fae8b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fae970(undefined4 *param_1);
template<class... A> int FUN_10fae970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faea50(undefined4 *param_1);
template<class... A> int FUN_10faea50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10faea90(undefined4 *param_1);
template<class... A> int FUN_10faea90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10faf660(int param_1);
template<class... A> int FUN_10faf660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10faf7d0(undefined4 *param_1);
template<class... A> int FUN_10faf7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fafd90(void);
template<class... A> int FUN_10fafd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fafda0(void);
template<class... A> int FUN_10fafda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fafdb0(void);
template<class... A> int FUN_10fafdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fafdc0(void);
template<class... A> int FUN_10fafdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10faffb0(int param_1);
template<class... A> int FUN_10faffb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0060(int param_1);
template<class... A> int FUN_10fb0060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0070(int param_1);
template<class... A> int FUN_10fb0070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0080(int param_1);
template<class... A> int FUN_10fb0080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0410(undefined4 *param_1);
template<class... A> int FUN_10fb0410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0420(undefined4 *param_1);
template<class... A> int FUN_10fb0420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0430(undefined4 *param_1);
template<class... A> int FUN_10fb0430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0440(undefined4 *param_1);
template<class... A> int FUN_10fb0440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0a10(int *param_1);
template<class... A> int FUN_10fb0a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0a70(int *param_1);
template<class... A> int FUN_10fb0a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0ad0(int *param_1);
template<class... A> int FUN_10fb0ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb0ae0(int *param_1);
template<class... A> int FUN_10fb0ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb11f0(int *param_1);
template<class... A> int FUN_10fb11f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb1200(int *param_1);
template<class... A> int FUN_10fb1200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb1210(int *param_1);
template<class... A> int FUN_10fb1210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb1220(int *param_1);
template<class... A> int FUN_10fb1220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb1230(undefined4 *param_1);
template<class... A> int FUN_10fb1230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb1240(undefined4 *param_1);
template<class... A> int FUN_10fb1240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb1250(undefined4 *param_1);
template<class... A> int FUN_10fb1250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1260(int *param_1);
template<class... A> int FUN_10fb1260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1270(int *param_1);
template<class... A> int FUN_10fb1270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1280(int *param_1);
template<class... A> int FUN_10fb1280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1290(int *param_1);
template<class... A> int FUN_10fb1290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb12a0(int *param_1);
template<class... A> int FUN_10fb12a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb12b0(int *param_1);
template<class... A> int FUN_10fb12b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb12c0(int *param_1);
template<class... A> int FUN_10fb12c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb12d0(int *param_1);
template<class... A> int FUN_10fb12d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb12e0(int *param_1);
template<class... A> int FUN_10fb12e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb12f0(int *param_1);
template<class... A> int FUN_10fb12f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1300(int *param_1);
template<class... A> int FUN_10fb1300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1310(int *param_1);
template<class... A> int FUN_10fb1310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1320(int *param_1);
template<class... A> int FUN_10fb1320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1330(int *param_1);
template<class... A> int FUN_10fb1330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1340(int *param_1);
template<class... A> int FUN_10fb1340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1350(int *param_1);
template<class... A> int FUN_10fb1350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1360(int *param_1);
template<class... A> int FUN_10fb1360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1370(int *param_1);
template<class... A> int FUN_10fb1370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1380(int *param_1);
template<class... A> int FUN_10fb1380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb1390(int *param_1);
template<class... A> int FUN_10fb1390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb13a0(int *param_1);
template<class... A> int FUN_10fb13a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb13b0(int *param_1);
template<class... A> int FUN_10fb13b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb13e0(undefined4 *param_1);
template<class... A> int FUN_10fb13e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb1410(undefined4 *param_1);
template<class... A> int FUN_10fb1410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb1440(undefined4 *param_1);
template<class... A> int FUN_10fb1440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb1450(undefined4 *param_1);
template<class... A> int FUN_10fb1450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb1460(undefined4 *param_1);
template<class... A> int FUN_10fb1460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb1470(undefined4 *param_1);
template<class... A> int FUN_10fb1470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb1480(undefined4 *param_1);
template<class... A> int FUN_10fb1480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb1490(undefined4 *param_1);
template<class... A> int FUN_10fb1490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb14a0(undefined4 *param_1);
template<class... A> int FUN_10fb14a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb14b0(undefined4 *param_1);
template<class... A> int FUN_10fb14b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb14c0(undefined4 *param_1);
template<class... A> int FUN_10fb14c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb14d0(undefined4 *param_1);
template<class... A> int FUN_10fb14d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10fb14e0(int *param_1);
template<class... A> int FUN_10fb14e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10fb14f0(int *param_1);
template<class... A> int FUN_10fb14f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10fb1500(int *param_1);
template<class... A> int FUN_10fb1500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10fb1510(int *param_1);
template<class... A> int FUN_10fb1510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb2090(undefined4 *param_1);
template<class... A> int FUN_10fb2090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb20b0(undefined4 *param_1);
template<class... A> int FUN_10fb20b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb20d0(undefined4 *param_1);
template<class... A> int FUN_10fb20d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb25f0(int param_1);
template<class... A> int FUN_10fb25f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb2610(int param_1);
template<class... A> int FUN_10fb2610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb2630(int param_1);
template<class... A> int FUN_10fb2630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb2650(int param_1);
template<class... A> int FUN_10fb2650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb2670(int param_1);
template<class... A> int FUN_10fb2670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb26d0(int param_1);
template<class... A> int FUN_10fb26d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb2730(int param_1);
template<class... A> int FUN_10fb2730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb2790(int param_1);
template<class... A> int FUN_10fb2790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb32f0(undefined4 param_1);
template<class... A> int FUN_10fb32f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3300(undefined4 param_1);
template<class... A> int FUN_10fb3300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3310(undefined4 param_1);
template<class... A> int FUN_10fb3310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3320(undefined4 param_1);
template<class... A> int FUN_10fb3320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3330(undefined4 param_1);
template<class... A> int FUN_10fb3330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3340(undefined4 param_1);
template<class... A> int FUN_10fb3340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3350(undefined4 param_1);
template<class... A> int FUN_10fb3350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3360(undefined4 param_1);
template<class... A> int FUN_10fb3360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3370(undefined4 param_1);
template<class... A> int FUN_10fb3370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3380(undefined4 param_1);
template<class... A> int FUN_10fb3380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3390(undefined4 param_1);
template<class... A> int FUN_10fb3390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb33a0(undefined4 param_1);
template<class... A> int FUN_10fb33a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb33b0(undefined4 param_1);
template<class... A> int FUN_10fb33b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb33c0(undefined4 param_1);
template<class... A> int FUN_10fb33c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb33d0(undefined4 param_1);
template<class... A> int FUN_10fb33d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb33e0(undefined4 param_1);
template<class... A> int FUN_10fb33e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb33f0(undefined4 param_1);
template<class... A> int FUN_10fb33f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3400(undefined4 param_1);
template<class... A> int FUN_10fb3400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3410(undefined4 param_1);
template<class... A> int FUN_10fb3410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3420(undefined4 param_1);
template<class... A> int FUN_10fb3420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3430(undefined4 param_1);
template<class... A> int FUN_10fb3430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3440(undefined4 param_1);
template<class... A> int FUN_10fb3440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3450(undefined4 param_1);
template<class... A> int FUN_10fb3450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3460(undefined4 param_1);
template<class... A> int FUN_10fb3460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb3670(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10fb3670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb3680(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10fb3680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb3690(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10fb3690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb36a0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10fb36a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb36b0(int param_1);
template<class... A> int FUN_10fb36b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb36c0(int param_1);
template<class... A> int FUN_10fb36c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb36d0(int param_1);
template<class... A> int FUN_10fb36d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb36e0(int param_1);
template<class... A> int FUN_10fb36e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb36f0(int param_1);
template<class... A> int FUN_10fb36f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb3700(int param_1);
template<class... A> int FUN_10fb3700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fb3710(int param_1);
template<class... A> int FUN_10fb3710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb38e0(void);
template<class... A> int FUN_10fb38e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb38f0(void);
template<class... A> int FUN_10fb38f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb3900(void);
template<class... A> int FUN_10fb3900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb3910(void);
template<class... A> int FUN_10fb3910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb3920(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10fb3920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb3930(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10fb3930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb3940(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10fb3940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb3950(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10fb3950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3c20(int param_1);
template<class... A> int FUN_10fb3c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3c30(int param_1);
template<class... A> int FUN_10fb3c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3c40(int param_1);
template<class... A> int FUN_10fb3c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb3c50(int param_1);
template<class... A> int FUN_10fb3c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb3c60(undefined4 *param_1);
template<class... A> int FUN_10fb3c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb3c70(undefined4 *param_1);
template<class... A> int FUN_10fb3c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb3c80(undefined4 *param_1);
template<class... A> int FUN_10fb3c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb3c90(undefined4 *param_1);
template<class... A> int FUN_10fb3c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb45e0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10fb45e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb4620(int param_1,int param_2,int param_3);
template<class... A> int FUN_10fb4620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb4660(int param_1,int param_2,int param_3);
template<class... A> int FUN_10fb4660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb46a0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10fb46a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fb6390(uint param_1);
template<class... A> int FUN_10fb6390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fb6410(uint param_1);
template<class... A> int FUN_10fb6410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fb6490(uint param_1);
template<class... A> int FUN_10fb6490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fb6500(uint param_1);
template<class... A> int FUN_10fb6500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fb6580(uint param_1);
template<class... A> int FUN_10fb6580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fb65f0(uint param_1);
template<class... A> int FUN_10fb65f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fb6660(uint param_1);
template<class... A> int FUN_10fb6660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fb66d0(uint param_1);
template<class... A> int FUN_10fb66d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb6990(int param_1);
template<class... A> int FUN_10fb6990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb69a0(int param_1);
template<class... A> int FUN_10fb69a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb69b0(int param_1);
template<class... A> int FUN_10fb69b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fb69c0(int param_1);
template<class... A> int FUN_10fb69c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb6fb0(int param_1);
template<class... A> int FUN_10fb6fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb7010(int param_1);
template<class... A> int FUN_10fb7010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fb7100(int param_1);
template<class... A> int FUN_10fb7100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb7790(int param_1);
template<class... A> int FUN_10fb7790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fb7c70(int param_1);
template<class... A> int FUN_10fb7c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb81a0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10fb81a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb81f0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10fb81f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb8240(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10fb8240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fb8290(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10fb8290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb82e0(int param_1,int param_2);
template<class... A> int FUN_10fb82e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb8340(int param_1,int param_2);
template<class... A> int FUN_10fb8340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb83a0(int param_1,int param_2);
template<class... A> int FUN_10fb83a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb83f0(int param_1,int param_2);
template<class... A> int FUN_10fb83f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb8450(int param_1,int param_2);
template<class... A> int FUN_10fb8450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb84a0(int param_1,int param_2);
template<class... A> int FUN_10fb84a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb84f0(int param_1,int param_2);
template<class... A> int FUN_10fb84f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fb8540(int param_1,int param_2);
template<class... A> int FUN_10fb8540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb85b0(int param_1);
template<class... A> int FUN_10fb85b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fb85c0(int param_1);
template<class... A> int FUN_10fb85c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fbc970(int *param_1);
template<class... A> int FUN_10fbc970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10fbca30(int param_1);
template<class... A> int FUN_10fbca30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10fbca40(int param_1);
template<class... A> int FUN_10fbca40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10fbca50(int param_1);
template<class... A> int FUN_10fbca50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10fbca60(int param_1);
template<class... A> int FUN_10fbca60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbca70(void);
template<class... A> int FUN_10fbca70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbca80(void);
template<class... A> int FUN_10fbca80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbca90(void);
template<class... A> int FUN_10fbca90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcaa0(void);
template<class... A> int FUN_10fbcaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcab0(void);
template<class... A> int FUN_10fbcab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcac0(void);
template<class... A> int FUN_10fbcac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcad0(void);
template<class... A> int FUN_10fbcad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcae0(void);
template<class... A> int FUN_10fbcae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcaf0(void);
template<class... A> int FUN_10fbcaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcb00(void);
template<class... A> int FUN_10fbcb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcb10(void);
template<class... A> int FUN_10fbcb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcb20(void);
template<class... A> int FUN_10fbcb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcb30(void);
template<class... A> int FUN_10fbcb30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcb40(void);
template<class... A> int FUN_10fbcb40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcb50(void);
template<class... A> int FUN_10fbcb50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbcb60(void);
template<class... A> int FUN_10fbcb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbce40(undefined4 param_1);
template<class... A> int FUN_10fbce40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbce50(undefined4 param_1);
template<class... A> int FUN_10fbce50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbce60(undefined4 param_1);
template<class... A> int FUN_10fbce60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbce70(undefined4 param_1);
template<class... A> int FUN_10fbce70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbce80(undefined4 param_1);
template<class... A> int FUN_10fbce80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fbce90(undefined4 param_1);
template<class... A> int FUN_10fbce90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fbcf20(undefined4 *param_1);
template<class... A> int FUN_10fbcf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fbcf50(undefined4 *param_1);
template<class... A> int FUN_10fbcf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fbcf80(undefined4 *param_1);
template<class... A> int FUN_10fbcf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fbd300(int param_1);
template<class... A> int FUN_10fbd300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc0740(int param_1);
template<class... A> int FUN_10fc0740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc0750(int param_1);
template<class... A> int FUN_10fc0750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc0760(int param_1);
template<class... A> int FUN_10fc0760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc0770(int param_1);
template<class... A> int FUN_10fc0770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc0780(int *param_1);
template<class... A> int FUN_10fc0780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc0790(int *param_1);
template<class... A> int FUN_10fc0790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc07a0(int *param_1);
template<class... A> int FUN_10fc07a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc07b0(int *param_1);
template<class... A> int FUN_10fc07b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc07c0(int param_1);
template<class... A> int FUN_10fc07c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc07d0(int param_1);
template<class... A> int FUN_10fc07d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc07e0(int param_1);
template<class... A> int FUN_10fc07e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc07f0(int param_1);
template<class... A> int FUN_10fc07f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fc0860(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fc0860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fc08f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10fc08f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fc0a50(void);
template<class... A> int FUN_10fc0a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fc0a70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fc0a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fc0a80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fc0a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fc0a90(void);
template<class... A> int FUN_10fc0a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fc0c60(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10fc0c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc0d30(undefined4 param_1);
template<class... A> int FUN_10fc0d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10fc0d40(int param_1,uint *param_2);
template<class... A> int FUN_10fc0d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc0ea0(undefined4 param_1);
template<class... A> int FUN_10fc0ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc0eb0(undefined4 param_1);
template<class... A> int FUN_10fc0eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc0ec0(undefined4 param_1);
template<class... A> int FUN_10fc0ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc0ed0(undefined4 param_1);
template<class... A> int FUN_10fc0ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc0ee0(undefined4 param_1);
template<class... A> int FUN_10fc0ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc0ef0(undefined4 param_1);
template<class... A> int FUN_10fc0ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fc0f00(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10fc0f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc10c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fc10c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc10e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fc10e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc1100(undefined4 param_1);
template<class... A> int FUN_10fc1100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc1110(undefined4 param_1);
template<class... A> int FUN_10fc1110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc1120(undefined4 param_1);
template<class... A> int FUN_10fc1120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fc13c0(undefined4 *param_1);
template<class... A> int FUN_10fc13c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc13e0(undefined4 param_1);
template<class... A> int FUN_10fc13e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fc13f0(undefined4 *param_1);
template<class... A> int FUN_10fc13f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fc14d0(undefined4 *param_1);
template<class... A> int FUN_10fc14d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc1e70(int param_1);
template<class... A> int FUN_10fc1e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc2160(undefined4 *param_1);
template<class... A> int FUN_10fc2160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc2170(undefined4 *param_1);
template<class... A> int FUN_10fc2170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc2270(undefined4 *param_1);
template<class... A> int FUN_10fc2270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc2280(undefined4 *param_1);
template<class... A> int FUN_10fc2280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc2290(undefined4 *param_1);
template<class... A> int FUN_10fc2290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc22a0(undefined4 *param_1);
template<class... A> int FUN_10fc22a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc22b0(undefined4 *param_1);
template<class... A> int FUN_10fc22b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc2360(undefined4 *param_1);
template<class... A> int FUN_10fc2360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc2370(undefined4 *param_1);
template<class... A> int FUN_10fc2370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc2560(int *param_1);
template<class... A> int FUN_10fc2560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc2570(int *param_1);
template<class... A> int FUN_10fc2570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc2580(int *param_1);
template<class... A> int FUN_10fc2580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc2590(int *param_1);
template<class... A> int FUN_10fc2590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc2e00(undefined4 *param_1);
template<class... A> int FUN_10fc2e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fc2e50(int param_1);
template<class... A> int FUN_10fc2e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc32a0(undefined4 param_1);
template<class... A> int FUN_10fc32a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc32b0(undefined4 param_1);
template<class... A> int FUN_10fc32b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc32c0(undefined4 param_1);
template<class... A> int FUN_10fc32c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc32d0(undefined4 param_1);
template<class... A> int FUN_10fc32d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc32e0(undefined4 param_1);
template<class... A> int FUN_10fc32e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc32f0(undefined4 param_1);
template<class... A> int FUN_10fc32f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc3300(undefined4 param_1);
template<class... A> int FUN_10fc3300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc3310(undefined4 param_1);
template<class... A> int FUN_10fc3310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10fc3620(int param_1);
template<class... A> int FUN_10fc3620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fc3680(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10fc3680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc3690(int param_1);
template<class... A> int FUN_10fc3690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fc3a90(uint param_1);
template<class... A> int FUN_10fc3a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fc5030(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10fc5030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fc5080(int param_1,int param_2);
template<class... A> int FUN_10fc5080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc5b20(int param_1);
template<class... A> int FUN_10fc5b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fc5b30(int param_1);
template<class... A> int FUN_10fc5b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc92f0(int param_1);
template<class... A> int FUN_10fc92f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc9310(int param_1);
template<class... A> int FUN_10fc9310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc9440(void);
template<class... A> int FUN_10fc9440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc9450(void);
template<class... A> int FUN_10fc9450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc95c0(undefined4 param_1);
template<class... A> int FUN_10fc95c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fc95d0(undefined4 param_1);
template<class... A> int FUN_10fc95d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fc9f70(int param_1);
template<class... A> int FUN_10fc9f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fcbc20(undefined4 *param_1);
template<class... A> int FUN_10fcbc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fcceb0(undefined4 *param_1);
template<class... A> int FUN_10fcceb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fccf10(undefined4 *param_1);
template<class... A> int FUN_10fccf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fcd6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fcd6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fcdaf0(undefined4 *param_1);
template<class... A> int FUN_10fcdaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fcdb00(undefined4 param_1);
template<class... A> int FUN_10fcdb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fcdc50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fcdc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fcdc80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fcdc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fcdcb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fcdcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fcdda0(undefined4 param_1);
template<class... A> int FUN_10fcdda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fcddb0(undefined4 param_1);
template<class... A> int FUN_10fcddb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fcddc0(undefined4 param_1);
template<class... A> int FUN_10fcddc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fcddd0(undefined4 param_1);
template<class... A> int FUN_10fcddd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fcdf60(undefined4 *param_1);
template<class... A> int FUN_10fcdf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fcdf80(undefined4 param_1);
template<class... A> int FUN_10fcdf80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fcdf90(undefined4 *param_1);
template<class... A> int FUN_10fcdf90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fce660(undefined4 *param_1);
template<class... A> int FUN_10fce660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fce8e0(undefined4 param_1);
template<class... A> int FUN_10fce8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fce8f0(undefined4 param_1);
template<class... A> int FUN_10fce8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fce900(undefined4 param_1);
template<class... A> int FUN_10fce900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fce910(undefined4 param_1);
template<class... A> int FUN_10fce910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fce920(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fce920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fce930(undefined4 *param_1);
template<class... A> int FUN_10fce930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fcebb0(uint param_1);
template<class... A> int FUN_10fcebb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fcec50(int *param_1);
template<class... A> int FUN_10fcec50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fcf400(void);
template<class... A> int FUN_10fcf400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fcf410(void);
template<class... A> int FUN_10fcf410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fcf6d0(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10fcf6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fcf710(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10fcf710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fcf750(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10fcf750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fcf790(undefined4 *param_1);
template<class... A> int FUN_10fcf790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fcf840(undefined4 *param_1);
template<class... A> int FUN_10fcf840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fcffb0(undefined4 *param_1);
template<class... A> int FUN_10fcffb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fd0960(undefined4 *param_1);
template<class... A> int FUN_10fd0960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fd0e50(int *param_1);
template<class... A> int FUN_10fd0e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fd0e60(undefined4 *param_1);
template<class... A> int FUN_10fd0e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fd1790(undefined4 *param_1);
template<class... A> int FUN_10fd1790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fd17b0(undefined4 *param_1);
template<class... A> int FUN_10fd17b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fd17d0(undefined4 *param_1);
template<class... A> int FUN_10fd17d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fd25b0(undefined4 *param_1);
template<class... A> int FUN_10fd25b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fd2d90(undefined4 *param_1);
template<class... A> int FUN_10fd2d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fd2dc0(undefined4 *param_1);
template<class... A> int FUN_10fd2dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fd2df0(undefined4 *param_1);
template<class... A> int FUN_10fd2df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fd2e20(undefined4 *param_1);
template<class... A> int FUN_10fd2e20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fd30c0(undefined4 *param_1);
template<class... A> int FUN_10fd30c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fd8830(undefined4 *param_1);
template<class... A> int FUN_10fd8830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fd96d0(undefined4 *param_1);
template<class... A> int FUN_10fd96d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fdd590(undefined4 *param_1);
template<class... A> int FUN_10fdd590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fddfb0(undefined4 *param_1);
template<class... A> int FUN_10fddfb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fde870(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fde870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fde900(void);
template<class... A> int FUN_10fde900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fde910(void *param_1,int param_2,int param_3);
template<class... A> int FUN_10fde910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fded30(undefined4 *param_1);
template<class... A> int FUN_10fded30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fded40(undefined4 *param_1);
template<class... A> int FUN_10fded40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdefa0(undefined4 *param_1,undefined4 *param_2,code *param_3);
template<class... A> int FUN_10fdefa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdf050(int param_1,int param_2,code *param_3);
template<class... A> int FUN_10fdf050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdf170(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4);
template<class... A> int FUN_10fdf170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdf1e0(void *param_1,int param_2,int param_3);
template<class... A> int FUN_10fdf1e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10fdf210(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10fdf210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10fdf290(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10fdf290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10fdf310(int param_1);
template<class... A> int FUN_10fdf310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fdf580(undefined4 param_1);
template<class... A> int FUN_10fdf580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdf690(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 code *param_5);
template<class... A> int FUN_10fdf690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdf6d0(undefined4 *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10fdf6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10fdf720(int param_1);
template<class... A> int FUN_10fdf720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdf730(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5);
template<class... A> int FUN_10fdf730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdf7a0(undefined4 *param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10fdf7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fdfb20(undefined4 param_1);
template<class... A> int FUN_10fdfb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fdfc70(undefined4 param_1);
template<class... A> int FUN_10fdfc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fdfc80(undefined4 param_1);
template<class... A> int FUN_10fdfc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdfc90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fdfc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdfcc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fdfcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdfcf0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10fdfcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fdfd20(void);
template<class... A> int FUN_10fdfd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fe0070(undefined4 param_1);
template<class... A> int FUN_10fe0070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fe0080(undefined4 param_1);
template<class... A> int FUN_10fe0080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fe0090(undefined4 param_1);
template<class... A> int FUN_10fe0090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fe00a0(undefined4 param_1);
template<class... A> int FUN_10fe00a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fe00b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fe00b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fe00d0(undefined4 param_1);
template<class... A> int FUN_10fe00d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  FUN_10fe00e0(int param_1,int param_2,undefined4 param_3);
template<class... A> int FUN_10fe00e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe0110(undefined4 *param_1);
template<class... A> int FUN_10fe0110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe0210(undefined4 *param_1);
template<class... A> int FUN_10fe0210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe0230(undefined4 param_1);
template<class... A> int FUN_10fe0230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe0240(undefined4 *param_1);
template<class... A> int FUN_10fe0240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe0370(undefined4 *param_1);
template<class... A> int FUN_10fe0370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fe07e0(void);
template<class... A> int FUN_10fe07e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fe0900(undefined4 *param_1);
template<class... A> int FUN_10fe0900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fe0930(undefined4 *param_1);
template<class... A> int FUN_10fe0930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fe0c20(int *param_1);
template<class... A> int FUN_10fe0c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe0c30(undefined4 *param_1);
template<class... A> int FUN_10fe0c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe11d0(undefined4 param_1);
template<class... A> int FUN_10fe11d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe11e0(undefined4 param_1);
template<class... A> int FUN_10fe11e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe11f0(undefined4 param_1);
template<class... A> int FUN_10fe11f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe1200(undefined4 param_1);
template<class... A> int FUN_10fe1200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 *  __stdcall FUN_10fe1210(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10fe1210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fe1220(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10fe1220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fe1230(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fe1230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fe1240(undefined4 *param_1);
template<class... A> int FUN_10fe1240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe14b0(undefined4 *param_1);
template<class... A> int FUN_10fe14b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fe14c0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10fe14c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10fe14e0(uint param_1);
template<class... A> int FUN_10fe14e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fe15c0(int *param_1);
template<class... A> int FUN_10fe15c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fe15d0(int param_1);
template<class... A> int FUN_10fe15d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe24a0(int param_1);
template<class... A> int FUN_10fe24a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe2770(int param_1);
template<class... A> int FUN_10fe2770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10fe2780(int param_1);
template<class... A> int FUN_10fe2780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10fe2810(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10fe2810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fe34d0(void);
template<class... A> int FUN_10fe34d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fe34e0(void);
template<class... A> int FUN_10fe34e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fe36f0(undefined4 *param_1);
template<class... A> int FUN_10fe36f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fe4530(int param_1);
template<class... A> int FUN_10fe4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fe4590(int param_1);
template<class... A> int FUN_10fe4590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fe45a0(int *param_1);
template<class... A> int FUN_10fe45a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10fe64a0(void);
template<class... A> int FUN_10fe64a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe64b0(undefined4 *param_1);
template<class... A> int FUN_10fe64b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe6520(undefined4 *param_1);
template<class... A> int FUN_10fe6520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fe6720(undefined4 *param_1);
template<class... A> int FUN_10fe6720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe6850(undefined4 *param_1);
template<class... A> int FUN_10fe6850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fe6860(int *param_1);
template<class... A> int FUN_10fe6860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe6870(undefined4 *param_1);
template<class... A> int FUN_10fe6870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10fe6d10(void);
template<class... A> int FUN_10fe6d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fe6d90(undefined4 *param_1);
template<class... A> int FUN_10fe6d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fe6f60(undefined4 *param_1);
template<class... A> int FUN_10fe6f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe8770(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fe8770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe8790(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fe8790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe87b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10fe87b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fe88a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10fe88a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fe8f70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fe8f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fe8f90(void);
template<class... A> int FUN_10fe8f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fe9030(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fe9030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fe9040(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10fe9040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fe9050(void);
template<class... A> int FUN_10fe9050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fe9d60(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10fe9d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fe9d80(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10fe9d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fe9da0(undefined4 *param_1);
template<class... A> int FUN_10fe9da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fe9db0(undefined4 *param_1);
template<class... A> int FUN_10fe9db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fe9dc0(int param_1,int param_2,int param_3,undefined4 param_4);
template<class... A> int FUN_10fe9dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10fea0f0(int param_1,uint *param_2);
template<class... A> int FUN_10fea0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10fea280(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10fea280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feac80(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10feac80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feae80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5);
template<class... A> int FUN_10feae80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feb010(int param_1,int param_2,int param_3,int *param_4);
template<class... A> int FUN_10feb010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10feb5d0(undefined4 param_1);
template<class... A> int FUN_10feb5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10feb5e0(undefined4 param_1);
template<class... A> int FUN_10feb5e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10feb870(undefined4 param_1);
template<class... A> int FUN_10feb870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10feb8c0(undefined4 param_1);
template<class... A> int FUN_10feb8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10feb8d0(undefined4 param_1);
template<class... A> int FUN_10feb8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10feb8e0(undefined4 param_1);
template<class... A> int FUN_10feb8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10feb8f0(undefined4 param_1);
template<class... A> int FUN_10feb8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10feb900(undefined4 param_1);
template<class... A> int FUN_10feb900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10feb940(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10feb940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feb980(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10feb980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feb990(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10feb990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feb9b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10feb9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feb9e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10feb9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feba10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10feba10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feba40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10feba40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10feba70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10feba70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10febaa0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10febaa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10febad0(void);
template<class... A> int FUN_10febad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febca0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10febca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febcc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10febcc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febce0(undefined4 param_1);
template<class... A> int FUN_10febce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febcf0(undefined4 param_1);
template<class... A> int FUN_10febcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febd00(undefined4 param_1);
template<class... A> int FUN_10febd00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febd10(undefined4 param_1);
template<class... A> int FUN_10febd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febd20(undefined4 param_1);
template<class... A> int FUN_10febd20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febd30(undefined4 param_1);
template<class... A> int FUN_10febd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febd40(undefined4 param_1);
template<class... A> int FUN_10febd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febd90(undefined4 param_1);
template<class... A> int FUN_10febd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febda0(undefined4 param_1);
template<class... A> int FUN_10febda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febdb0(undefined4 param_1);
template<class... A> int FUN_10febdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febe00(undefined4 param_1);
template<class... A> int FUN_10febe00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febe10(undefined4 param_1);
template<class... A> int FUN_10febe10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febe20(undefined4 param_1);
template<class... A> int FUN_10febe20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febe30(void);
template<class... A> int FUN_10febe30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10febe40(void);
template<class... A> int FUN_10febe40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fec030(undefined4 param_1);
template<class... A> int FUN_10fec030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fec040(undefined4 param_1);
template<class... A> int FUN_10fec040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec140(undefined4 *param_1);
template<class... A> int FUN_10fec140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec210(undefined4 *param_1);
template<class... A> int FUN_10fec210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec230(undefined4 *param_1);
template<class... A> int FUN_10fec230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec370(undefined4 *param_1);
template<class... A> int FUN_10fec370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec3f0(undefined4 *param_1);
template<class... A> int FUN_10fec3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec410(undefined4 *param_1);
template<class... A> int FUN_10fec410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fec430(undefined4 param_1);
template<class... A> int FUN_10fec430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fec440(undefined4 param_1);
template<class... A> int FUN_10fec440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fec450(undefined4 param_1);
template<class... A> int FUN_10fec450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec460(undefined4 *param_1);
template<class... A> int FUN_10fec460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec470(undefined4 *param_1);
template<class... A> int FUN_10fec470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec4c0(undefined4 *param_1);
template<class... A> int FUN_10fec4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec4e0(undefined4 *param_1);
template<class... A> int FUN_10fec4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10fec540(undefined4 *param_1);
template<class... A> int FUN_10fec540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fed790(int param_1);
template<class... A> int FUN_10fed790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fed7b0(int param_1);
template<class... A> int FUN_10fed7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fed920(undefined4 *param_1);
template<class... A> int FUN_10fed920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fed940(undefined4 *param_1);
template<class... A> int FUN_10fed940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fee250(void);
template<class... A> int FUN_10fee250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fee4c0(int *param_1);
template<class... A> int FUN_10fee4c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fee4d0(undefined4 *param_1);
template<class... A> int FUN_10fee4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fee4e0(int *param_1);
template<class... A> int FUN_10fee4e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fee4f0(undefined4 *param_1);
template<class... A> int FUN_10fee4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fee500(undefined4 *param_1);
template<class... A> int FUN_10fee500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fee510(int *param_1);
template<class... A> int FUN_10fee510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fee520(undefined4 *param_1);
template<class... A> int FUN_10fee520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fee530(int *param_1);
template<class... A> int FUN_10fee530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fee540(int *param_1);
template<class... A> int FUN_10fee540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10fee550(int *param_1);
template<class... A> int FUN_10fee550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10fee560(int *param_1);
template<class... A> int FUN_10fee560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fee5b0(undefined4 *param_1);
template<class... A> int FUN_10fee5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fee5c0(undefined4 *param_1);
template<class... A> int FUN_10fee5c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fee5d0(undefined4 *param_1);
template<class... A> int FUN_10fee5d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10fee680(uint *param_1,uint *param_2);
template<class... A> int FUN_10fee680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10feef00(undefined4 *param_1);
template<class... A> int FUN_10feef00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fef0f0(int param_1);
template<class... A> int FUN_10fef0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fef2d0(undefined4 param_1);
template<class... A> int FUN_10fef2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef320(undefined4 param_1);
template<class... A> int FUN_10fef320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef330(undefined4 param_1);
template<class... A> int FUN_10fef330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef340(undefined4 param_1);
template<class... A> int FUN_10fef340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef350(undefined4 param_1);
template<class... A> int FUN_10fef350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef360(undefined4 param_1);
template<class... A> int FUN_10fef360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef370(undefined4 param_1);
template<class... A> int FUN_10fef370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef380(undefined4 param_1);
template<class... A> int FUN_10fef380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef390(undefined4 param_1);
template<class... A> int FUN_10fef390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef3a0(undefined4 param_1);
template<class... A> int FUN_10fef3a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef3b0(undefined4 param_1);
template<class... A> int FUN_10fef3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef3c0(undefined4 param_1);
template<class... A> int FUN_10fef3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef3d0(undefined4 param_1);
template<class... A> int FUN_10fef3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef3e0(undefined4 param_1);
template<class... A> int FUN_10fef3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef3f0(undefined4 param_1);
template<class... A> int FUN_10fef3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef400(undefined4 param_1);
template<class... A> int FUN_10fef400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef410(undefined4 param_1);
template<class... A> int FUN_10fef410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10fef6b0(undefined4 param_1);
template<class... A> int FUN_10fef6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fef7b0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fef7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fef7c0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10fef7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10fef7d0(int param_1);
template<class... A> int FUN_10fef7d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fef7e0(undefined4 *param_1);
template<class... A> int FUN_10fef7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10fef7f0(undefined4 *param_1);
template<class... A> int FUN_10fef7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10fefe40(void);
template<class... A> int FUN_10fefe40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10fefe50(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10fefe50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ff02c0(uint param_1);
template<class... A> int FUN_10ff02c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ff0340(uint param_1);
template<class... A> int FUN_10ff0340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10ff03b0(uint param_1);
template<class... A> int FUN_10ff03b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ff0bf0(int *param_1);
template<class... A> int FUN_10ff0bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ff0c00(int *param_1);
template<class... A> int FUN_10ff0c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ff0c30(byte *param_1);
template<class... A> int FUN_10ff0c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ff0c60(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10ff0c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ff0cb0(int param_1,int param_2);
template<class... A> int FUN_10ff0cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ff0da0(undefined4 *param_1);
template<class... A> int FUN_10ff0da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ff1180(int *param_1);
template<class... A> int FUN_10ff1180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ff13e0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10ff13e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ff6de0(int *param_1);
template<class... A> int FUN_10ff6de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ff6df0(int *param_1);
template<class... A> int FUN_10ff6df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ff6e50(int *param_1);
template<class... A> int FUN_10ff6e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ff6e60(int *param_1);
template<class... A> int FUN_10ff6e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ff6e70(int *param_1);
template<class... A> int FUN_10ff6e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ff6fb0(void);
template<class... A> int FUN_10ff6fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ff6fc0(void);
template<class... A> int FUN_10ff6fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ff6fd0(void);
template<class... A> int FUN_10ff6fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ff6fe0(void);
template<class... A> int FUN_10ff6fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ff6ff0(void);
template<class... A> int FUN_10ff6ff0(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);
extern void __fastcall FUN_11164740(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);
extern void __fastcall thunk_FUN_11164740(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RConnectedPartnerRemoveAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RConnectedPartnersGetAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RGetDeviceDescriptionAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RMuseGetPlayerInfoAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RMuseSetSettingsAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_SCOpDeviceVoiceSettingsCompoundSet_;

// Reference entry 10f77360; body size 6 bytes.
extern int __stdcall thunk_FUN_102207b0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1025f580(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10320760(int a1);
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_1059d940(int a1);
extern int __stdcall thunk_FUN_10d5dc90(int a1);
extern int __stdcall thunk_FUN_10f86b70(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10fee6a0(int a1,int a2);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
extern int __stdcall thunk_FUN_111ca9f0(int a1,int a2,int a3,int a4,int a5);
extern int __stdcall thunk_FUN_111d11c0(int a1,int a2,int a3,int a4,int a5);
extern int __stdcall thunk_FUN_111d1960(int a1,int a2,int a3,int a4,int a5,int a6);
extern int __stdcall thunk_FUN_1124a160(int a1);
extern int __stdcall thunk_FUN_1124a200(int a1,int a2);
struct SCFp_8_0 { char _p[8]; int (__thiscall *v)(void); };
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_4 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_2_5 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2,int a3,int a4,int a5); };
struct SCVtbl_2_6 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2,int a3,int a4,int a5,int a6); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_6_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_53_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual int v(int a1,int a2); };
struct SCVtbl_55_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual int v(int a1,int a2); };
struct SCVtbl_56_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual int v(int a1); };
struct SCVtbl_56_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual int v(int a1,int a2); };
struct SCVtbl_57_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual int v(int a1,int a2); };
struct SCVtbl_93_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual int v(int a1,int a2); };
struct SCVtbl_93_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_4 { virtual void _p0(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_5_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(void); };
struct SCVtbl_5_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1,int a2); };
struct SCVtbl_6_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual int v(int a1,int a2); };
struct SCVtbl_7_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual int v(int a1,int a2); };
struct SCVtbl_8_3 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual int v(int a1,int a2,int a3); };
struct SCVtbl_9_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual int v(int a1); };
struct SCVtbl_15_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual int v(int a1); };
struct SCVtbl_18_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual int v(int a1,int a2); };
struct SCVtbl_23_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual int v(int a1); };
struct SCVtbl_36_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual int v(int a1); };
struct SCVtbl_51_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual int v(int a1); };
struct SCVtbl_54_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual int v(void); };
struct SCVtbl_110_2 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual void _p23(); virtual void _p24(); virtual void _p25(); virtual void _p26(); virtual void _p27(); virtual void _p28(); virtual void _p29(); virtual void _p30(); virtual void _p31(); virtual void _p32(); virtual void _p33(); virtual void _p34(); virtual void _p35(); virtual void _p36(); virtual void _p37(); virtual void _p38(); virtual void _p39(); virtual void _p40(); virtual void _p41(); virtual void _p42(); virtual void _p43(); virtual void _p44(); virtual void _p45(); virtual void _p46(); virtual void _p47(); virtual void _p48(); virtual void _p49(); virtual void _p50(); virtual void _p51(); virtual void _p52(); virtual void _p53(); virtual void _p54(); virtual void _p55(); virtual void _p56(); virtual void _p57(); virtual void _p58(); virtual void _p59(); virtual void _p60(); virtual void _p61(); virtual void _p62(); virtual void _p63(); virtual void _p64(); virtual void _p65(); virtual void _p66(); virtual void _p67(); virtual void _p68(); virtual void _p69(); virtual void _p70(); virtual void _p71(); virtual void _p72(); virtual void _p73(); virtual void _p74(); virtual void _p75(); virtual void _p76(); virtual void _p77(); virtual void _p78(); virtual void _p79(); virtual void _p80(); virtual void _p81(); virtual void _p82(); virtual void _p83(); virtual void _p84(); virtual void _p85(); virtual void _p86(); virtual void _p87(); virtual void _p88(); virtual void _p89(); virtual void _p90(); virtual void _p91(); virtual void _p92(); virtual void _p93(); virtual void _p94(); virtual void _p95(); virtual void _p96(); virtual void _p97(); virtual void _p98(); virtual void _p99(); virtual void _p100(); virtual void _p101(); virtual void _p102(); virtual void _p103(); virtual void _p104(); virtual void _p105(); virtual void _p106(); virtual void _p107(); virtual void _p108(); virtual void _p109(); virtual int v(int a1,int a2); };
int FUN_10012049();
int FUN_1004a188();
int FUN_100656e5();
int FUN_100854c7();
int FUN_1000e10b();
int FUN_1005bece();
int FUN_1007abee();
int FUN_1000d58f();
int FUN_100514f6();
int FUN_1001b879();
#line 1 "ENTRY_10f77360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f77360(void)

{
  return (char *)("SCIOpAlarmSave");
}


// Reference entry 10f77400; body size 27 bytes.
#line 1 "ENTRY_10f77400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f77400(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f77430; body size 27 bytes.
#line 1 "ENTRY_10f77430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f77430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f77620; body size 42 bytes.
#line 1 "ENTRY_10f77620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77620(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWrapperObj);
  return (undefined4 *)(param_1);
}


// Reference entry 10f77660; body size 9 bytes.
#line 1 "ENTRY_10f77660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f77660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RAlarmProgramDataBrowseCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10f77670; body size 137 bytes.
#line 1 "ENTRY_10f77670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77670(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)(((SCFp_72_0*)(iVar1))->v(), 0);
  }
  else {
    uVar2 = (undefined4)(((SCFp_76_0*)(iVar1))->v(), 0);
  }
  uVar3 = (undefined4)(((SCVtbl_20_4*)((int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4))))->v((int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6)), 0);
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:AlarmClock:1"),(int)("CreateAlarm"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
  param_1[0x35f4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f77720; body size 127 bytes.
#line 1 "ENTRY_10f77720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77720(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7)
{
  undefined4 *param_1 = (undefined4 *)this;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = (int)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 4) + 4 + param_2));
  if (param_7 == '\0') {
    uVar2 = (undefined4)(((SCFp_72_0*)(iVar1))->v(), 0);
  }
  else {
    uVar2 = (undefined4)(((SCFp_76_0*)(iVar1))->v(), 0);
  }
  uVar3 = (undefined4)(((SCVtbl_20_4*)((int *)(param_2 + 4 + *(int *)(*(int *)(param_2 + 4) + 4))))->v((int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6)), 0);
  thunk_FUN_111c0760((int)(uVar2),(int)("urn:schemas-upnp-org:service:AlarmClock:1"),(int)("UpdateAlarm"),(int)(uVar3),(int)(param_3),(int)(param_4),(int)(param_5),(int)(param_6));
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
  return (undefined4 *)(param_1);
}


// Reference entry 10f779a0; body size 9 bytes.
#line 1 "ENTRY_10f779a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f779a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAlarm);
  return (undefined4 *)(param_1);
}


// Reference entry 10f779b0; body size 9 bytes.
#line 1 "ENTRY_10f779b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f779b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpAlarmSave);
  return (undefined4 *)(param_1);
}


// Reference entry 10f779c0; body size 50 bytes.
#line 1 "ENTRY_10f779c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f779c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f77460((int)(param_2));
  param_1[0x12] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmSave);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmSave);
  param_1[0x13] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f77a00; body size 51 bytes.
#line 1 "ENTRY_10f77a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f77a00(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_10f77460((int)(param_2));
  param_1[0x13] = (undefined4)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmSave);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmSave);
  param_1[0x12] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f77a40; body size 19 bytes.
#line 1 "ENTRY_10f77a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f77a40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f77c70; body size 28 bytes.
#line 1 "ENTRY_10f77c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f77c70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACCreateAlarmAIOOp);
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


// Reference entry 10f77ca0; body size 28 bytes.
#line 1 "ENTRY_10f77ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f77ca0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpACUpdateAlarmAIOOp);
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


// Reference entry 10f77d70; body size 7 bytes.
#line 1 "ENTRY_10f77d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f77d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f77d80; body size 7 bytes.
#line 1 "ENTRY_10f77d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f77d80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10f77d90; body size 18 bytes.
#line 1 "ENTRY_10f77d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f77d90(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpAlarmSave);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpAlarmSave);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f78130; body size 6 bytes.
#line 1 "ENTRY_10f78130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f78130(void)

{
  return (char *)("SCAlarm");
}


// Reference entry 10f78f70; body size 21 bytes.
#line 1 "ENTRY_10f78f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10f78f70(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarm");
  return (SCStr *)(param_1);
}


// Reference entry 10f790e0; body size 7 bytes.
#line 1 "ENTRY_10f790e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f790e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d0));
}


// Reference entry 10f79d60; body size 4 bytes.
#line 1 "ENTRY_10f79d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f79d60(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10f79d70; body size 6 bytes.
#line 1 "ENTRY_10f79d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10f79d70(void)

{
  return (char *)("SCIOpAlarmSave");
}


// Reference entry 10f79ef0; body size 7 bytes.
#line 1 "ENTRY_10f79ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f79ef0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10f7a4b0; body size 28 bytes.
#line 1 "ENTRY_10f7a4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f7a4b0(undefined4 *param_1)

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


// Reference entry 10f7b080; body size 42 bytes.
#line 1 "ENTRY_10f7b080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10f7b080(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  
  if (param_2 < 7) {
    uVar1 = (uint)(1 << ((byte)param_2 & 0x1f));
    return (undefined4)(((uint)((int3)(uVar1 >> 8)) << 8 | (uint)((*(uint *)(param_1 + (param_2 >> 5) * 4) & uVar1) != 0)));
  }
                    
  thunk_FUN_10baa650();
}


// Reference entry 10f7b9a0; body size 18 bytes.
#line 1 "ENTRY_10f7b9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f7b9a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7b9c0; body size 22 bytes.
#line 1 "ENTRY_10f7b9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7b9c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7b9e0; body size 18 bytes.
#line 1 "ENTRY_10f7b9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f7b9e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7ba00; body size 22 bytes.
#line 1 "ENTRY_10f7ba00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7ba00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7baf0; body size 22 bytes.
#line 1 "ENTRY_10f7baf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7baf0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7bb10; body size 25 bytes.
#line 1 "ENTRY_10f7bb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f7bb10(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x18), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10f7bb30; body size 13 bytes.
#line 1 "ENTRY_10f7bb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f7bb30(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f7bb40; body size 13 bytes.
#line 1 "ENTRY_10f7bb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f7bb40(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f7bb50; body size 3 bytes.
#line 1 "ENTRY_10f7bb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f7bb50(void)

{
  return;
}


// Reference entry 10f7bf90; body size 15 bytes.
#line 1 "ENTRY_10f7bf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f7bf90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10f7c110; body size 5 bytes.
#line 1 "ENTRY_10f7c110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c120; body size 5 bytes.
#line 1 "ENTRY_10f7c120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c130; body size 5 bytes.
#line 1 "ENTRY_10f7c130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c140; body size 5 bytes.
#line 1 "ENTRY_10f7c140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c150; body size 5 bytes.
#line 1 "ENTRY_10f7c150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c160; body size 28 bytes.
#line 1 "ENTRY_10f7c160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f7c160(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10f7c200; body size 15 bytes.
#line 1 "ENTRY_10f7c200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c200(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f7c220; body size 15 bytes.
#line 1 "ENTRY_10f7c220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c220(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f7c240; body size 5 bytes.
#line 1 "ENTRY_10f7c240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c240(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c250; body size 5 bytes.
#line 1 "ENTRY_10f7c250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c260; body size 5 bytes.
#line 1 "ENTRY_10f7c260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c260(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c270; body size 5 bytes.
#line 1 "ENTRY_10f7c270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c270(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c280; body size 5 bytes.
#line 1 "ENTRY_10f7c280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7c280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c6a0; body size 18 bytes.
#line 1 "ENTRY_10f7c6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7c6a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7c700; body size 11 bytes.
#line 1 "ENTRY_10f7c700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7c700(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7c790; body size 11 bytes.
#line 1 "ENTRY_10f7c790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7c790(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7c7a0; body size 16 bytes.
#line 1 "ENTRY_10f7c7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f7c7a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7c7c0; body size 3 bytes.
#line 1 "ENTRY_10f7c7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7c7c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7c7d0; body size 52 bytes.
#line 1 "ENTRY_10f7c7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f7c7d0(undefined4 *param_1)

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


// Reference entry 10f7c8e0; body size 385 bytes.
#line 1 "ENTRY_10f7c8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f7c8e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
 try {
  SCStr *this_;
  uint uVar1;
  SCStr *this_00;
  undefined4 uStack_41c;
  void *pvStack_418;
  undefined1 *puStack_414;
  undefined4 uStack_410;
  char acStack_40c [1028];
  uint uStack_8;


  uVar1 = (uint)(DAT_12126b84 ^ (uint)(uint)&acStack_40c);

  uStack_8 = (uint)(uVar1);
  thunk_FUN_1124a200((int)("application/x-www-form-urlencoded"),(int)(0));
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1887) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x621e) = (undefined1)(0);
  param_1[0x1888] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RConnectedPartnerRemoveRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RConnectedPartnerRemoveRequest);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  this_ = (SCStr *)((SCStr *)(param_1 + 0x188b));
  *(undefined4*)this_ = (undefined4)((SCStr *)(0));
  param_1[0x188c] = (undefined4)(0);
  *(unsigned char*)((char *)&uStack_410 + 0) = (unsigned char)(5);
  *(unsigned short*)((char *)&uStack_410 + 1) = (unsigned short)(0);
  thunk_FUN_11261330((uint)&acStack_40c,0x401,"/auth/oauth/v2/apps/revoke",0xf,uVar1);
  ((SCStr *)((SCStr *)&uStack_41c))->int_allocRep((uint)&acStack_40c);
  *(unsigned char*)((char *)&uStack_410 + 0) = (unsigned char)(6);
  if ((SCStr *)(&uStack_41c) != (SCStr *)((this_))) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(uStack_41c));
    ((SCStr *)(this_))->int_addref();
  }
  *(unsigned char*)((char *)&uStack_410 + 0) = (unsigned char)(7);
  ((SCStr *)((SCStr *)&uStack_41c))->int_release();
  uStack_410 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_410 + 1)) << 8 | (uint)(5)));
  ((SCStr *)(this_00))->format((char *)(param_1 + 0x1886));
  uVar1 = (uint)(((SCStr *)((SCStr *)(param_1 + 0x1886)))->length(), 0);
  param_1[0x1884] = (undefined4)(uVar1);

  thunk_FUN_1148ac28();
  return;

 } catch (...) { }
}


// Reference entry 10f7cad0; body size 66 bytes.
#line 1 "ENTRY_10f7cad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f7cad0(undefined4 *param_1)

{
  thunk_FUN_10f7ce30();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RConnectedPartnersGetAIOOp);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RConnectedPartnersGetAIOOp);
  param_1[7] = (undefined4)((uint)&ghidra_vftable_RConnectedPartnersGetAIOOp);
  param_1[0x11] = (undefined4)(0);
  param_1[0x13] = (undefined4)(0);
  param_1[0x14] = (undefined4)(0);
  param_1[0x12] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10f7d2c0; body size 394 bytes.
#line 1 "ENTRY_10f7d2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f7d2c0(undefined4 *param_1)

{
 try {
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  SCStr *this_;
  undefined1 *puVar4;
  void *pvStack_418;
  undefined1 *puStack_414;
  undefined4 uStack_410;
  undefined1 auStack_40c [1028];
  uint uStack_8;


  uVar2 = (uint)(DAT_12126b84 ^ (uint)(uint)&auStack_40c);

  uStack_8 = (uint)(uVar2);
  thunk_FUN_1124a160((int)(0));
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RHTTPBufferedDataIO);
  param_1[0x1844] = (undefined4)(0);
  param_1[0x1845] = (undefined4)(0);
  param_1[0x1846] = (undefined4)(0);
  *(undefined2*)(param_1 + 0x1847) = (undefined2)(1);
  *(undefined1*)((int)param_1 + 0x611e) = (undefined1)(1);
  param_1[0x1848] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest);
  param_1[0x1843] = (undefined4)((uint)&ghidra_vftable_RListOfLinkedServicesWithOAuthTokensRequest);
  param_1[0x1849] = (undefined4)(0);
  param_1[0x184a] = (undefined4)(0);
  param_1[0x184b] = (undefined4)(0);
  param_1[0x184c] = (undefined4)(0);

  iVar3 = (int)(thunk_FUN_1109f7f0(uVar2), 0);
  puVar1 = (undefined1 *)(*(undefined1 **)(iVar3 + 0xfc), 0);
  if ((undefined1 *)(puVar1) == (undefined1 *)(0x0)) {
    puVar4 = (undefined1 *)(&DAT_1186d2ee);
  }
  else {
    puVar4 = (undefined1 *)(puVar1);
    if (*(int *)(puVar1 + -0x10) < 0xffff) {
      thunk_FUN_1123fce0(puVar1 + -0x10);
    }
  }
  *(unsigned char*)((char *)&uStack_410 + 0) = (unsigned char)(6);
  if ((((undefined1 *)(puVar1) != (undefined1 *)(0x0)) && (*(int *)(puVar1 + -0x10) < 0xffff)) &&
     (iVar3 = (int)(thunk_FUN_1123fcd0(puVar1 + -0x10), 0), iVar3 == 0)) {
    *(undefined4*)(puVar1 + -8) = (undefined4)(0);
    *(undefined4*)(puVar1 + -0xc) = (undefined4)(0);
    thunk_FUN_113cfb70(puVar1,*(undefined4 *)(puVar1 + -4));
    free(puVar1 + -0x10);
  }
  uStack_410 = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_410 + 1)) << 8 | (uint)(5)));
  thunk_FUN_11261330((uint)&auStack_40c,0x401,"/auth/oauth/v3/clients?userId=%s",0xf);
  ((SCStr *)(this_))->format((char *)(param_1 + 0x184b));

  thunk_FUN_1148ac28(puVar4);
  return;

 } catch (...) { }
}


// Reference entry 10f7d8a0; body size 11 bytes.
#line 1 "ENTRY_10f7d8a0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f7d8a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RConnectedPartnerRemoveAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f7d8b0; body size 11 bytes.
#line 1 "ENTRY_10f7d8b0"

/* WARNING: Removing unreachable block_10f7d8b0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f7d8b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RConnectedPartnersGetAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f7e200; body size 18 bytes.
#line 1 "ENTRY_10f7e200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f7e200(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpConnectedPartnerRemove);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpConnectedPartnerRemove);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f7e2b0; body size 14 bytes.
#line 1 "ENTRY_10f7e2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f7e2b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f7e2d0; body size 14 bytes.
#line 1 "ENTRY_10f7e2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f7e2d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f7e2f0; body size 4 bytes.
#line 1 "ENTRY_10f7e2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7e2f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f7e300; body size 4 bytes.
#line 1 "ENTRY_10f7e300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7e300(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f7e310; body size 6 bytes.
#line 1 "ENTRY_10f7e310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f7e310(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f7ebc0; body size 31 bytes.
#line 1 "ENTRY_10f7ebc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f7ebc0(undefined4 *param_1)

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


// Reference entry 10f7ec10; body size 14 bytes.
#line 1 "ENTRY_10f7ec10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f7ec10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xaaaaaaa) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10f7ec30; body size 5 bytes.
#line 1 "ENTRY_10f7ec30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7ec30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7ec40; body size 3 bytes.
#line 1 "ENTRY_10f7ec40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7ec40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7ec50; body size 3 bytes.
#line 1 "ENTRY_10f7ec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7ec50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7ec60; body size 3 bytes.
#line 1 "ENTRY_10f7ec60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7ec60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7ec70; body size 3 bytes.
#line 1 "ENTRY_10f7ec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7ec70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7ec80; body size 3 bytes.
#line 1 "ENTRY_10f7ec80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7ec80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7ec90; body size 3 bytes.
#line 1 "ENTRY_10f7ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7ec90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7eca0; body size 3 bytes.
#line 1 "ENTRY_10f7eca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7eca0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7ecb0; body size 3 bytes.
#line 1 "ENTRY_10f7ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7ecb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7ef50; body size 5 bytes.
#line 1 "ENTRY_10f7ef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f7ef50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f7ef60; body size 79 bytes.
#line 1 "ENTRY_10f7ef60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f7ef60(int param_2)
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


// Reference entry 10f7efd0; body size 31 bytes.
#line 1 "ENTRY_10f7efd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10f7efd0(int *param_1)

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


// Reference entry 10f7f000; body size 11 bytes.
#line 1 "ENTRY_10f7f000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f7f000(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f7f010; body size 83 bytes.
#line 1 "ENTRY_10f7f010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f7f010(int *param_2)
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


// Reference entry 10f7f530; body size 90 bytes.
#line 1 "ENTRY_10f7f530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f7f530(uint param_1)

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


// Reference entry 10f7f5b0; body size 13 bytes.
#line 1 "ENTRY_10f7f5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f7f5b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f7f6b0; body size 57 bytes.
#line 1 "ENTRY_10f7f6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f7f6b0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10f7f700; body size 60 bytes.
#line 1 "ENTRY_10f7f700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f7f700(int param_1,int param_2)

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


// Reference entry 10f7f750; body size 11 bytes.
#line 1 "ENTRY_10f7f750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f7f750(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f7f8c0; body size 17 bytes.
#line 1 "ENTRY_10f7f8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f7f8c0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x622c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x622c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10f7f8e0; body size 17 bytes.
#line 1 "ENTRY_10f7f8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f7f8e0(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x612c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10f7f900; body size 64 bytes.
#line 1 "ENTRY_10f7f900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7f900(undefined4 *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x44));
  if (iVar1 != 0) {
    *param_2 = (undefined4)(*(undefined4 *)(iVar1 + 0x6134));
    piVar2 = (int *)(*(int **)(iVar1 + 0x6138), 0);
    param_2[1] = (undefined4)(piVar2);
    if ((int *)(piVar2) != (int *)(0x0)) {
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    return (undefined4 *)(param_2);
  }
  *param_2 = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  return (undefined4 *)(param_2);
}


// Reference entry 10f7f950; body size 37 bytes.
#line 1 "ENTRY_10f7f950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f7f950(undefined4 *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0x6134));
  piVar1 = (int *)(*(int **)(param_1 + 0x6138), 0);
  param_2[1] = (undefined4)(piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (undefined4 *)(param_2);
}


// Reference entry 10f7fa60; body size 20 bytes.
#line 1 "ENTRY_10f7fa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10f7fa60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x34));
  return (SCStr *)(param_2);
}


// Reference entry 10f80580; body size 4 bytes.
#line 1 "ENTRY_10f80580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f80580(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x54));
}


// Reference entry 10f80590; body size 4 bytes.
#line 1 "ENTRY_10f80590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f80590(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x54));
}


// Reference entry 10f80720; body size 6 bytes.
#line 1 "ENTRY_10f80720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f80720(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10f80730; body size 6 bytes.
#line 1 "ENTRY_10f80730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f80730(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10f81ad0; body size 18 bytes.
#line 1 "ENTRY_10f81ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f81ad0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f81b90; body size 13 bytes.
#line 1 "ENTRY_10f81b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f81b90(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f81ba0; body size 13 bytes.
#line 1 "ENTRY_10f81ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f81ba0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f81bb0; body size 3 bytes.
#line 1 "ENTRY_10f81bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f81bb0(void)

{
  return;
}


// Reference entry 10f81d50; body size 15 bytes.
#line 1 "ENTRY_10f81d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f81d50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x10);
  return;
}


// Reference entry 10f81df0; body size 5 bytes.
#line 1 "ENTRY_10f81df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f81df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f81e00; body size 5 bytes.
#line 1 "ENTRY_10f81e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f81e00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f81e10; body size 130 bytes.
#line 1 "ENTRY_10f81e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10f81e10(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  ((SCVtbl_1_0*)(param_1))->v();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      ((SCVtbl_5_1*)((int *)param_1[1]))->v((int)(param_3));
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 10f81ec0; body size 28 bytes.
#line 1 "ENTRY_10f81ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f81ec0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10f81f60; body size 5 bytes.
#line 1 "ENTRY_10f81f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f81f60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f81f70; body size 5 bytes.
#line 1 "ENTRY_10f81f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f81f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f81f80; body size 5 bytes.
#line 1 "ENTRY_10f81f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f81f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f81f90; body size 28 bytes.
#line 1 "ENTRY_10f81f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f81f90(undefined4 *param_1)

{
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef);
  return (undefined4 *)(param_1);
}


// Reference entry 10f81fc0; body size 70 bytes.
#line 1 "ENTRY_10f81fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f81fc0(undefined4 *param_1)

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


// Reference entry 10f821e0; body size 18 bytes.
#line 1 "ENTRY_10f821e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f821e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f82200; body size 10 bytes.
#line 1 "ENTRY_10f82200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f82200(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f82210; body size 11 bytes.
#line 1 "ENTRY_10f82210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f82210(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f82220; body size 11 bytes.
#line 1 "ENTRY_10f82220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f82220(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f82230; body size 16 bytes.
#line 1 "ENTRY_10f82230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f82230(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f82250; body size 3 bytes.
#line 1 "ENTRY_10f82250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f82250(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f82260; body size 12 bytes.
#line 1 "ENTRY_10f82260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f82260(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10f823e0; body size 34 bytes.
#line 1 "ENTRY_10f823e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f823e0(undefined4 *param_1)

{
  thunk_FUN_10f82020();
  *param_1 = (undefined4)((uint)&ghidra_vftable_RZPDevice);
  param_1[0xde] = (undefined4)((uint)&ghidra_vftable_RZPDevice);
  return (undefined4 *)(param_1);
}


// Reference entry 10f82740; body size 11 bytes.
#line 1 "ENTRY_10f82740"

/* WARNING: Removing unreachable block_10f82740 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82740(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RGetDeviceDescriptionAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f82be0; body size 5 bytes.
#line 1 "ENTRY_10f82be0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82be0(undefined4 *param_1)

{ __asm jmp FUN_10012049 }


// Reference entry 10f82bf0; body size 5 bytes.
#line 1 "ENTRY_10f82bf0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82bf0(undefined4 *param_1)

{ __asm jmp FUN_1004a188 }


// Reference entry 10f82c00; body size 5 bytes.
#line 1 "ENTRY_10f82c00"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82c00(undefined4 *param_1)

{ __asm jmp FUN_100656e5 }


// Reference entry 10f82c10; body size 3 bytes.
#line 1 "ENTRY_10f82c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f82c10(void)

{
  return;
}


// Reference entry 10f82c40; body size 5 bytes.
#line 1 "ENTRY_10f82c40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82c40(undefined4 *param_1)

{ __asm jmp FUN_100854c7 }


// Reference entry 10f82c50; body size 7 bytes.
#line 1 "ENTRY_10f82c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82c50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTControl);
  return;
}


// Reference entry 10f82c60; body size 7 bytes.
#line 1 "ENTRY_10f82c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82c60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServicesDirectory);
  return;
}


// Reference entry 10f82c70; body size 3 bytes.
#line 1 "ENTRY_10f82c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f82c70(void)

{
  return;
}


// Reference entry 10f82ce0; body size 11 bytes.
#line 1 "ENTRY_10f82ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82ce0(int param_1)

{
 try {
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  *(undefined***)(*(int *)(*(int *)(param_1 + 8) + 4) + -0x680 + param_1 + 0x688) = (undefined **)((uint)&ghidra_vftable_RUpnpClient);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 8) + 4));
  *(int*)(iVar1 + -0x684 + param_1 + 0x688) = (int)(iVar1 + -0x680);
  *(undefined1*)(param_1 + 0x671) = (undefined1)(0);
  if (*(char *)(param_1 + 0x32d) != '\0') {
    if (DAT_122f5600 != 0) {
      thunk_FUN_1123bf80<>((int *)(param_1 + 8),1);
    }
    *(undefined1*)(param_1 + 0x32d) = (undefined1)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f82d10; body size 3 bytes.
#line 1 "ENTRY_10f82d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f82d10(void)

{
  return;
}


// Reference entry 10f82e30; body size 7 bytes.
#line 1 "ENTRY_10f82e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82e30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RHTControl);
  return;
}


// Reference entry 10f82e60; body size 7 bytes.
#line 1 "ENTRY_10f82e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82e60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMusicServicesDirectory);
  return;
}


// Reference entry 10f82e70; body size 11 bytes.
#line 1 "ENTRY_10f82e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82e70(int param_1)

{
 try {
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  *(undefined***)(*(int *)(*(int *)(param_1 + 8) + 4) + -0x680 + param_1 + 0x688) = (undefined **)((uint)&ghidra_vftable_RUpnpClient);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 8) + 4));
  *(int*)(iVar1 + -0x684 + param_1 + 0x688) = (int)(iVar1 + -0x680);
  *(undefined1*)(param_1 + 0x671) = (undefined1)(0);
  if (*(char *)(param_1 + 0x32d) != '\0') {
    if (DAT_122f5600 != 0) {
      thunk_FUN_1123bf80<>((int *)(param_1 + 8),1);
    }
    *(undefined1*)(param_1 + 0x32d) = (undefined1)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f82e80; body size 3 bytes.
#line 1 "ENTRY_10f82e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f82e80(void)

{
  return;
}


// Reference entry 10f82ed0; body size 11 bytes.
#line 1 "ENTRY_10f82ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f82ed0(int param_1)

{
 try {
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  *(undefined***)(*(int *)(*(int *)(param_1 + 8) + 4) + -0x680 + param_1 + 0x688) = (undefined **)((uint)&ghidra_vftable_RUpnpClient);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 8) + 4));
  *(int*)(iVar1 + -0x684 + param_1 + 0x688) = (int)(iVar1 + -0x680);
  *(undefined1*)(param_1 + 0x671) = (undefined1)(0);
  if (*(char *)(param_1 + 0x32d) != '\0') {
    if (DAT_122f5600 != 0) {
      thunk_FUN_1123bf80<>((int *)(param_1 + 8),1);
    }
    *(undefined1*)(param_1 + 0x32d) = (undefined1)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f82ee0; body size 3 bytes.
#line 1 "ENTRY_10f82ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f82ee0(void)

{
  return;
}


// Reference entry 10f83130; body size 3 bytes.
#line 1 "ENTRY_10f83130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f83130(void)

{
  return;
}


// Reference entry 10f83170; body size 14 bytes.
#line 1 "ENTRY_10f83170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f83170(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f83190; body size 14 bytes.
#line 1 "ENTRY_10f83190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f83190(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f831b0; body size 7 bytes.
#line 1 "ENTRY_10f831b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f831b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10f831c0; body size 8 bytes.
#line 1 "ENTRY_10f831c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f831c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10f831d0; body size 4 bytes.
#line 1 "ENTRY_10f831d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f831d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f831e0; body size 4 bytes.
#line 1 "ENTRY_10f831e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f831e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f831f0; body size 6 bytes.
#line 1 "ENTRY_10f831f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f831f0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10f83200; body size 6 bytes.
#line 1 "ENTRY_10f83200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f83200(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10f83210; body size 9 bytes.
#line 1 "ENTRY_10f83210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f83210(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f83220; body size 9 bytes.
#line 1 "ENTRY_10f83220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f83220(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f83450; body size 11 bytes.
#line 1 "ENTRY_10f83450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f83450(int param_1)

{
 try {
  int iVar1;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;


  *(undefined***)(*(int *)(*(int *)(param_1 + 8) + 4) + -0x680 + param_1 + 0x688) = (undefined **)((uint)&ghidra_vftable_RUpnpClient);
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 8) + 4));
  *(int*)(iVar1 + -0x684 + param_1 + 0x688) = (int)(iVar1 + -0x680);
  *(undefined1*)(param_1 + 0x671) = (undefined1)(0);
  if (*(char *)(param_1 + 0x32d) != '\0') {
    if (DAT_122f5600 != 0) {
      thunk_FUN_1123bf80<>((int *)(param_1 + 8),1);
    }
    *(undefined1*)(param_1 + 0x32d) = (undefined1)(0);
  }

  return;

 } catch (...) { }
}


// Reference entry 10f838e0; body size 22 bytes.
#line 1 "ENTRY_10f838e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f838e0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x10), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f83920; body size 8 bytes.
#line 1 "ENTRY_10f83920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f83920(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10f83930; body size 3 bytes.
#line 1 "ENTRY_10f83930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f83930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f83940; body size 3 bytes.
#line 1 "ENTRY_10f83940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f83940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f83950; body size 3 bytes.
#line 1 "ENTRY_10f83950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f83950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f83960; body size 3 bytes.
#line 1 "ENTRY_10f83960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f83960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f83970; body size 4 bytes.
#line 1 "ENTRY_10f83970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f83970(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10f83980; body size 7 bytes.
#line 1 "ENTRY_10f83980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f83980(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10f83990; body size 3 bytes.
#line 1 "ENTRY_10f83990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f83990(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10f839a0; body size 26 bytes.
#line 1 "ENTRY_10f839a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f839a0(int param_2)
{
  int param_1 = (int )this;
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_2 + 0x24) != (undefined4 *)((0x0))) {
    uVar1 = (undefined4)(((SCVtbl_0_1*)(*(undefined4 **)(param_2 + 0x24)))->v((int)(param_1)), 0);
    *(undefined4*)(param_1 + 0x24) = (undefined4)(uVar1);
  }
  return;
}


// Reference entry 10f839c0; body size 10 bytes.
#line 1 "ENTRY_10f839c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f839c0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10f83ad0; body size 38 bytes.
#line 1 "ENTRY_10f83ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f83ad0(int param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_2 + 4), 0);
  **(int**)(param_1 + 4) = (int)(param_2);
  *(undefined4**)(*(int *)(param_1 + 4) + 4) = (undefined4 *)(puVar1);
  uVar2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 4) = (undefined4)(uVar2);
  *puVar1 = (undefined4)(uVar2);
  return;
}


// Reference entry 10f83b00; body size 13 bytes.
#line 1 "ENTRY_10f83b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f83b00(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f83b10; body size 11 bytes.
#line 1 "ENTRY_10f83b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f83b10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f83f30; body size 7 bytes.
#line 1 "ENTRY_10f83f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f83f30(int param_1)

{
  return (int)(param_1 + 0x2148);
}


// Reference entry 10f83f40; body size 7 bytes.
#line 1 "ENTRY_10f83f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f83f40(int param_1)

{
  return (int)(param_1 + 0x27d4);
}


// Reference entry 10f83f50; body size 87 bytes.
#line 1 "ENTRY_10f83f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f83f50(uint param_1)

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


// Reference entry 10f83fc0; body size 7 bytes.
#line 1 "ENTRY_10f83fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f83fc0(int param_1)

{
  return (int)(param_1 + 0x4204);
}


// Reference entry 10f84080; body size 7 bytes.
#line 1 "ENTRY_10f84080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f84080(int param_1)

{
  return (int)(param_1 + 0x4890);
}


// Reference entry 10f84090; body size 7 bytes.
#line 1 "ENTRY_10f84090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f84090(int param_1)

{
  return (int)(param_1 + 0x5668);
}


// Reference entry 10f840a0; body size 7 bytes.
#line 1 "ENTRY_10f840a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f840a0(int param_1)

{
  return (int)(param_1 + 0x4fdc);
}


// Reference entry 10f840b0; body size 54 bytes.
#line 1 "ENTRY_10f840b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f840b0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x10);
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


// Reference entry 10f84100; body size 57 bytes.
#line 1 "ENTRY_10f84100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f84100(int param_1,int param_2)

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


// Reference entry 10f84150; body size 7 bytes.
#line 1 "ENTRY_10f84150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f84150(int param_1)

{
  return (int)(param_1 + 0x718);
}


// Reference entry 10f84160; body size 7 bytes.
#line 1 "ENTRY_10f84160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f84160(int param_1)

{
  return (int)(param_1 + 0x718);
}


// Reference entry 10f84220; body size 8 bytes.
#line 1 "ENTRY_10f84220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f84220(undefined4 *param_1)

{
  return (int)(*(int *)*param_1 + 8);
}


// Reference entry 10f84230; body size 4 bytes.
#line 1 "ENTRY_10f84230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f84230(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f84240; body size 7 bytes.
#line 1 "ENTRY_10f84240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f84240(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xc090));
}


// Reference entry 10f84250; body size 7 bytes.
#line 1 "ENTRY_10f84250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f84250(int param_1)

{
  return (int)(param_1 + 0x1abc);
}


// Reference entry 10f84260; body size 7 bytes.
#line 1 "ENTRY_10f84260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f84260(int param_1)

{
  return (int)(param_1 + 0x1abc);
}


// Reference entry 10f84270; body size 7 bytes.
#line 1 "ENTRY_10f84270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f84270(int param_1)

{
  return (int)(param_1 + 0x6380);
}


// Reference entry 10f84280; body size 7 bytes.
#line 1 "ENTRY_10f84280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f84280(int param_1)

{
  return (int)(param_1 + 0x3b78);
}


// Reference entry 10f86020; body size 96 bytes.
#line 1 "ENTRY_10f86020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f86020(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  *(undefined4*)(param_5 + 0x84) = (undefined4)(param_1);
  *(undefined4*)(param_5 + 0x8c) = (undefined4)(param_2);
  *(undefined1*)(param_5 + 0x80) = (undefined1)(1);
  *(undefined1*)(param_5 + 0x88) = (undefined1)(1);
  if (0 < param_3) {
    *(int*)(param_5 + 0xa4) = (int)(param_3);
    *(undefined1*)(param_5 + 0xa0) = (undefined1)(1);
    *(undefined1*)(param_5 + 0x68) = (undefined1)(1);
    *(bool*)(param_5 + 0x69) = (bool)(0x14 < param_3);
  }
  if (0 < param_4) {
    *(undefined1*)(param_5 + 0xa8) = (undefined1)(1);
    *(int*)(param_5 + 0xac) = (int)(param_4);
  }
  return;
}


// Reference entry 10f860a0; body size 105 bytes.
#line 1 "ENTRY_10f860a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f860a0(uint param_1,undefined4 param_2,int param_3){
  byte bVar1;
  
  *(uint*)(param_3 + 0xe4) = (uint)(param_1 >> 8 & 0xff);
  *(uint*)(param_3 + 0xec) = (uint)(param_1 >> 0x10 & 0xff);
  *(undefined1*)(param_3 + 0xe0) = (undefined1)(1);
  *(undefined1*)(param_3 + 0xe8) = (undefined1)(1);
  *(undefined1*)(param_3 + 0xf0) = (undefined1)(1);
  *(undefined4*)(param_3 + 0xf4) = (undefined4)(param_2);
  bVar1 = (byte)((byte)(param_1 >> 8));
  if ((bVar1 < 0x34) &&
     ((bVar1 != 0x33 || ((bVar1 = (byte)((byte)(param_1 >> 0x10)), bVar1 < 2 && (bVar1 != 1)))))) {
    *(undefined1*)(param_3 + 0x66) = (undefined1)(1);
    *(undefined1*)(param_3 + 0x67) = (undefined1)(0);
    return;
  }
  *(undefined1*)(param_3 + 0x66) = (undefined1)(1);
  *(undefined1*)(param_3 + 0x67) = (undefined1)(1);
  return;
}


// Reference entry 10f86130; body size 6 bytes.
#line 1 "ENTRY_10f86130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f86130(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10f86140; body size 6 bytes.
#line 1 "ENTRY_10f86140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f86140(void)

{
  return (undefined4)(0xfffffff);
}


// Reference entry 10f86150; body size 7 bytes.
#line 1 "ENTRY_10f86150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f86150(int param_1)

{
  return (int)(param_1 + 0x2e60);
}


// Reference entry 10f86450; body size 7 bytes.
#line 1 "ENTRY_10f86450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f86450(int param_1)

{
  return (int)(param_1 + 0x34ec);
}


// Reference entry 10f86460; body size 7 bytes.
#line 1 "ENTRY_10f86460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f86460(int param_1)

{
  return (int)(param_1 + 0x5cf4);
}


// Reference entry 10f86660; body size 24 bytes.
#line 1 "ENTRY_10f86660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10f86660(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_102207b0((int)(param_1),(int)(param_2),(int)(param_3));
  return (undefined4)(param_1);
}


// Reference entry 10f86680; body size 4 bytes.
#line 1 "ENTRY_10f86680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f86680(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f866a0; body size 7 bytes.
#line 1 "ENTRY_10f866a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f866a0(int param_1)

{
  return (int)(param_1 + 0xda4);
}


// Reference entry 10f86820; body size 7 bytes.
#line 1 "ENTRY_10f86820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f86820(int param_1)

{
  return (int)(param_1 + 0x6a0c);
}


// Reference entry 10f86830; body size 7 bytes.
#line 1 "ENTRY_10f86830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f86830(int param_1)

{
  return (int)(param_1 + 0x1430);
}


// Reference entry 10f86840; body size 70 bytes.
#line 1 "ENTRY_10f86840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10f86840(char *param_2,undefined1 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  char cVar1;
  char *pcVar2;
  
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  thunk_FUN_1012d130(param_2,(int)strlen((const char *)param_2));
  param_1[0x18] = (undefined1)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 10f868a0; body size 70 bytes.
#line 1 "ENTRY_10f868a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10f868a0(char *param_2,undefined1 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  char cVar1;
  char *pcVar2;
  
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  thunk_FUN_1012d130(param_2,(int)strlen((const char *)param_2));
  param_1[0x18] = (undefined1)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 10f86900; body size 70 bytes.
#line 1 "ENTRY_10f86900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10f86900(char *param_2,undefined1 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  char cVar1;
  char *pcVar2;
  
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0xf);
  *param_1 = (undefined1)(0);
  thunk_FUN_1012d130(param_2,(int)strlen((const char *)param_2));
  param_1[0x18] = (undefined1)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 10f86a00; body size 18 bytes.
#line 1 "ENTRY_10f86a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f86a00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f86a20; body size 25 bytes.
#line 1 "ENTRY_10f86a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f86a20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f86a40; body size 25 bytes.
#line 1 "ENTRY_10f86a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f86a40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f86a60; body size 5 bytes.
#line 1 "ENTRY_10f86a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f86a60(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f86a70; body size 5 bytes.
#line 1 "ENTRY_10f86a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f86a70(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f86a80; body size 22 bytes.
#line 1 "ENTRY_10f86a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f86a80(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f86aa0; body size 3 bytes.
#line 1 "ENTRY_10f86aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f86aa0(void)

{
  return;
}


// Reference entry 10f86ab0; body size 3 bytes.
#line 1 "ENTRY_10f86ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f86ab0(void)

{
  return;
}


// Reference entry 10f86ac0; body size 13 bytes.
#line 1 "ENTRY_10f86ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f86ac0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f86ad0; body size 13 bytes.
#line 1 "ENTRY_10f86ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f86ad0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f86ae0; body size 13 bytes.
#line 1 "ENTRY_10f86ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f86ae0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f86af0; body size 3 bytes.
#line 1 "ENTRY_10f86af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f86af0(void)

{
  return;
}


// Reference entry 10f86b00; body size 3 bytes.
#line 1 "ENTRY_10f86b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f86b00(void)

{
  return;
}


// Reference entry 10f86b10; body size 18 bytes.
#line 1 "ENTRY_10f86b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f86b10(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10f86cb0; body size 15 bytes.
#line 1 "ENTRY_10f86cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f86cb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x24);
  return;
}


// Reference entry 10f86d50; body size 7 bytes.
#line 1 "ENTRY_10f86d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f86d50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f86d60; body size 7 bytes.
#line 1 "ENTRY_10f86d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f86d60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f86d70; body size 5 bytes.
#line 1 "ENTRY_10f86d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f86d70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f870a0; body size 5 bytes.
#line 1 "ENTRY_10f870a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f870a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f870b0; body size 5 bytes.
#line 1 "ENTRY_10f870b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f870b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f870c0; body size 5 bytes.
#line 1 "ENTRY_10f870c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f870c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f870d0; body size 5 bytes.
#line 1 "ENTRY_10f870d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f870d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f870e0; body size 5 bytes.
#line 1 "ENTRY_10f870e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f870e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f870f0; body size 5 bytes.
#line 1 "ENTRY_10f870f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f870f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f87100; body size 5 bytes.
#line 1 "ENTRY_10f87100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f87100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f87110; body size 27 bytes.
#line 1 "ENTRY_10f87110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f87110(undefined4 param_1,int param_2,int param_3)

{
  thunk_FUN_10118c40((int)(param_3));
  *(undefined1*)(param_2 + 0x18) = (undefined1)(*(undefined1 *)(param_3 + 0x18));
  return;
}


// Reference entry 10f87420; body size 15 bytes.
#line 1 "ENTRY_10f87420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f87420(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f874c0; body size 94 bytes.
#line 1 "ENTRY_10f874c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f874c0(int *param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined1 auStack_8 [8];
  
  puVar5 = (undefined4 *)(param_3);
  if (0xf < (uint)param_3[5]) {
    puVar5 = (undefined4 *)((undefined4 *)*param_3);
  }
  uVar3 = (uint)(0);
  uVar4 = (uint)(0x811c9dc5);
  if (param_3[4] != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar3 + (int)puVar5));
      uVar3 = (uint)(uVar3 + 1);
      uVar4 = (uint)((*pbVar1 ^ uVar4) * 0x1000193);
    } while (uVar3 < (uint)param_3[4]);
  }
  iVar2 = (int)(thunk_FUN_10f86b70((int)((uint)&auStack_8),(int)(param_3),(int)(uVar4)), 0);
  iVar2 = (int)(*(int *)(iVar2 + 4));
  if (iVar2 == 0) {
    iVar2 = (int)(*(int *)(param_1 + 4));
  }
  *param_2 = (int)(iVar2);
  return;
}


// Reference entry 10f87540; body size 5 bytes.
#line 1 "ENTRY_10f87540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f87540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f87550; body size 5 bytes.
#line 1 "ENTRY_10f87550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f87550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f87560; body size 5 bytes.
#line 1 "ENTRY_10f87560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f87560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f87570; body size 5 bytes.
#line 1 "ENTRY_10f87570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f87570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f87580; body size 5 bytes.
#line 1 "ENTRY_10f87580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f87580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f87590; body size 5 bytes.
#line 1 "ENTRY_10f87590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f87590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f875a0; body size 5 bytes.
#line 1 "ENTRY_10f875a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f875a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f87870; body size 52 bytes.
#line 1 "ENTRY_10f87870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f87870(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1);
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)((undefined4 *)*param_1);
  }
  piVar1 = (int *)(param_1 + 4);
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)((undefined4 *)*param_1);
  }
  thunk_FUN_10f86d80(param_1,*piVar1 + (int)puVar2,param_2,param_3,param_4,1);
  return;
}


// Reference entry 10f878c0; body size 30 bytes.
#line 1 "ENTRY_10f878c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f878c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10f878f0; body size 18 bytes.
#line 1 "ENTRY_10f878f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f878f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f879e0; body size 11 bytes.
#line 1 "ENTRY_10f879e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f879e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f879f0; body size 11 bytes.
#line 1 "ENTRY_10f879f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f879f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f87a00; body size 11 bytes.
#line 1 "ENTRY_10f87a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f87a00(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f87a10; body size 11 bytes.
#line 1 "ENTRY_10f87a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f87a10(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f87a20; body size 16 bytes.
#line 1 "ENTRY_10f87a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f87a20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f87a40; body size 13 bytes.
#line 1 "ENTRY_10f87a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f87a40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f87a50; body size 14 bytes.
#line 1 "ENTRY_10f87a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f87a50(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f87a70; body size 23 bytes.
#line 1 "ENTRY_10f87a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f87a70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f87a90; body size 3 bytes.
#line 1 "ENTRY_10f87a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f87a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f87aa0; body size 18 bytes.
#line 1 "ENTRY_10f87aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f87aa0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f87af0; body size 33 bytes.
#line 1 "ENTRY_10f87af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10f87af0(int param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10118c40((int)(param_2));
  *(undefined1*)(param_1 + 0x18) = (undefined1)(*(undefined1 *)(param_2 + 0x18));
  return (int)(param_1);
}


// Reference entry 10f87c10; body size 11 bytes.
#line 1 "ENTRY_10f87c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f87c10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f87c20; body size 24 bytes.
#line 1 "ENTRY_10f87c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f87c20(undefined4 param_2,int param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*(undefined4 *)(param_3 + 4));
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f886b0; body size 39 bytes.
#line 1 "ENTRY_10f886b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10f886b0(undefined1 param_2,undefined1 param_3,undefined1 param_4,
            undefined1 param_5,undefined1 param_6)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(param_2);
  param_1[1] = (undefined1)(param_3);
  param_1[2] = (undefined1)(param_4);
  param_1[3] = (undefined1)(param_5);
  param_1[4] = (undefined1)(param_6);
  return (undefined1 *)(param_1);
}


// Reference entry 10f88830; body size 3 bytes.
#line 1 "ENTRY_10f88830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f88830(void)

{
  return;
}


// Reference entry 10f888c0; body size 5 bytes.
#line 1 "ENTRY_10f888c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f888c0(int param_1)

{ __asm jmp FUN_1000e10b }


// Reference entry 10f888d0; body size 98 bytes.
#line 1 "ENTRY_10f888d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f888d0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(uint *)(iVar2 + 8) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 4));
    piStack_4 = (int *)(param_1);
    if (*(uint *)((iVar2 + 8)) < *(uint *)((iVar2 + 0x1c) >> 3)) {
      func_0x100051af(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_10f86c10(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 8) = (undefined4)(0);
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_10f87440(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 0x10),&piStack_4);
  }
  return;
}


// Reference entry 10f88950; body size 18 bytes.
#line 1 "ENTRY_10f88950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f88950(int param_1)

{
  **(undefined4**)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_1 + 8));
  *(undefined4*)(*(int *)(param_1 + 8) + 4) = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10f88970; body size 14 bytes.
#line 1 "ENTRY_10f88970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f88970(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f88990; body size 14 bytes.
#line 1 "ENTRY_10f88990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f88990(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f889b0; body size 96 bytes.
#line 1 "ENTRY_10f889b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10f889b0(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (char)(*param_1);
  cVar2 = (char)(*param_2);
  if (cVar1 == cVar2) {
    cVar1 = (char)(param_1[1]);
    cVar2 = (char)(param_2[1]);
    if (cVar1 == cVar2) {
      cVar1 = (char)(param_1[2]);
      cVar2 = (char)(param_2[2]);
      if (cVar1 == cVar2) {
        cVar1 = (char)(param_1[3]);
        cVar2 = (char)(param_2[3]);
        if (cVar1 == cVar2) {
          if (param_1[4] != param_2[4]) {
            return (bool)(param_1[4] == param_2[4]);
          }
          return (bool)(true);
        }
      }
    }
  }
  return (bool)(cVar1 == cVar2);
}


// Reference entry 10f88a30; body size 14 bytes.
#line 1 "ENTRY_10f88a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f88a30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f88a50; body size 14 bytes.
#line 1 "ENTRY_10f88a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f88a50(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f88a70; body size 96 bytes.
#line 1 "ENTRY_10f88a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10f88a70(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = (char)(*param_1);
  cVar2 = (char)(*param_2);
  if (cVar1 == cVar2) {
    cVar1 = (char)(param_1[1]);
    cVar2 = (char)(param_2[1]);
    if (cVar1 == cVar2) {
      cVar1 = (char)(param_1[2]);
      cVar2 = (char)(param_2[2]);
      if (cVar1 == cVar2) {
        cVar1 = (char)(param_1[3]);
        cVar2 = (char)(param_2[3]);
        if (cVar1 == cVar2) {
          if (param_1[4] != param_2[4]) {
            return (uint)((uint)(param_1[4] != param_2[4]));
          }
          return (uint)((uint)param_1 & 0xffffff00);
        }
      }
    }
  }
  return (uint)((uint)(cVar1 != cVar2));
}


// Reference entry 10f88af0; body size 6 bytes.
#line 1 "ENTRY_10f88af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f88af0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10f88b00; body size 6 bytes.
#line 1 "ENTRY_10f88b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f88b00(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10f88b10; body size 6 bytes.
#line 1 "ENTRY_10f88b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f88b10(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10f88b20; body size 6 bytes.
#line 1 "ENTRY_10f88b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f88b20(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10f88b30; body size 9 bytes.
#line 1 "ENTRY_10f88b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f88b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f88b40; body size 9 bytes.
#line 1 "ENTRY_10f88b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f88b40(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f88b50; body size 10 bytes.
#line 1 "ENTRY_10f88b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10f88b50(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10f88b60; body size 96 bytes.
#line 1 "ENTRY_10f88b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10f88b60(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = (byte)(*param_1);
  bVar2 = (byte)(*param_2);
  if (bVar1 == bVar2) {
    bVar1 = (byte)(param_1[1]);
    bVar2 = (byte)(param_2[1]);
    if (bVar1 == bVar2) {
      bVar1 = (byte)(param_1[2]);
      bVar2 = (byte)(param_2[2]);
      if (bVar1 == bVar2) {
        bVar1 = (byte)(param_1[3]);
        bVar2 = (byte)(param_2[3]);
        if (bVar1 == bVar2) {
          if (param_1[4] != param_2[4]) {
            return (uint)((uint)param_1[4] - (uint)param_2[4] >> 0x1f);
          }
          return (uint)((uint)param_1 & 0xffffff00);
        }
      }
    }
  }
  return (uint)((uint)bVar1 - (uint)bVar2 >> 0x1f);
}


// Reference entry 10f88be0; body size 96 bytes.
#line 1 "ENTRY_10f88be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10f88be0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = (byte)(*param_1);
  bVar2 = (byte)(*param_2);
  if (bVar1 == bVar2) {
    bVar1 = (byte)(param_1[1]);
    bVar2 = (byte)(param_2[1]);
    if (bVar1 == bVar2) {
      bVar1 = (byte)(param_1[2]);
      bVar2 = (byte)(param_2[2]);
      if (bVar1 == bVar2) {
        bVar1 = (byte)(param_1[3]);
        bVar2 = (byte)(param_2[3]);
        if (bVar1 == bVar2) {
          bVar1 = (byte)(param_1[4]);
          bVar2 = (byte)(param_2[4]);
          if (bVar1 != bVar2) {
            return (bool)((uint)bVar1 == (uint)bVar2 || (int)((uint)bVar1 - (uint)bVar2) < 0);
          }
          return (bool)(true);
        }
      }
    }
  }
  return (bool)((uint)bVar1 == (uint)bVar2 || (int)((uint)bVar1 - (uint)bVar2) < 0);
}


// Reference entry 10f88c60; body size 96 bytes.
#line 1 "ENTRY_10f88c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10f88c60(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = (byte)(*param_1);
  bVar2 = (byte)(*param_2);
  if (bVar1 == bVar2) {
    bVar1 = (byte)(param_1[1]);
    bVar2 = (byte)(param_2[1]);
    if (bVar1 == bVar2) {
      bVar1 = (byte)(param_1[2]);
      bVar2 = (byte)(param_2[2]);
      if (bVar1 == bVar2) {
        bVar1 = (byte)(param_1[3]);
        bVar2 = (byte)(param_2[3]);
        if (bVar1 == bVar2) {
          bVar1 = (byte)(param_1[4]);
          bVar2 = (byte)(param_2[4]);
          if (bVar1 != bVar2) {
            return (uint)((uint)((uint)bVar1 != (uint)bVar2 && -1 < (int)((uint)bVar1 - (uint)bVar2)));
          }
          return (uint)((uint)param_1 & 0xffffff00);
        }
      }
    }
  }
  return (uint)((uint)((uint)bVar1 != (uint)bVar2 && -1 < (int)((uint)bVar1 - (uint)bVar2)));
}


// Reference entry 10f88ce0; body size 105 bytes.
#line 1 "ENTRY_10f88ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint FUN_10f88ce0(byte *param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = (byte)(*param_1);
  bVar2 = (byte)(*param_2);
  if (bVar1 == bVar2) {
    bVar1 = (byte)(param_1[1]);
    bVar2 = (byte)(param_2[1]);
    if (bVar1 == bVar2) {
      bVar1 = (byte)(param_1[2]);
      bVar2 = (byte)(param_2[2]);
      if (bVar1 == bVar2) {
        bVar1 = (byte)(param_1[3]);
        bVar2 = (byte)(param_2[3]);
        if (bVar1 == bVar2) {
          if (param_1[4] != param_2[4]) {
            return (uint)((uint)(byte)((byte)((uint)param_1[4] - (uint)param_2[4] >> 0x1f) ^ 1));
          }
          return (uint)((uint)param_1 & 0xffffff00 ^ 1);
        }
      }
    }
  }
  return (uint)((uint)(byte)((byte)((uint)bVar1 - (uint)bVar2 >> 0x1f) ^ 1));
}


// Reference entry 10f88df0; body size 22 bytes.
#line 1 "ENTRY_10f88df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f88df0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f88f80; body size 20 bytes.
#line 1 "ENTRY_10f88f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f88f80(int param_1)

{
  if (*(int *)(param_1 + 8) != 0x71c71c7) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10f88fa0; body size 66 bytes.
#line 1 "ENTRY_10f88fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10f88fa0(float *param_1)

{
  float fVar1;
  
  fVar1 = (float)((float)((double)((int)param_1[2] + 1) + (double)(uint)(&DAT_11880fb0)[-((int)param_1[2] + 1 >> 0x1f)]) /
          (float)((double)(int)param_1[7] + (double)(uint)(&DAT_11880fb0)[-((int)param_1[7] >> 0x1f)]));
  return (bool)(*param_1 <= (float)((fVar1)) && (float)(fVar1) != *param_1);
}


// Reference entry 10f890b0; body size 5 bytes.
#line 1 "ENTRY_10f890b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f890b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f892c0; body size 3 bytes.
#line 1 "ENTRY_10f892c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f892c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f892d0; body size 3 bytes.
#line 1 "ENTRY_10f892d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f892d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f892e0; body size 3 bytes.
#line 1 "ENTRY_10f892e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f892e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f892f0; body size 3 bytes.
#line 1 "ENTRY_10f892f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f892f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f89300; body size 3 bytes.
#line 1 "ENTRY_10f89300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f89300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f89310; body size 3 bytes.
#line 1 "ENTRY_10f89310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f89310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f89320; body size 92 bytes.
#line 1 "ENTRY_10f89320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f89320(uint param_2,int param_3,int *param_4)
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


// Reference entry 10f893a0; body size 13 bytes.
#line 1 "ENTRY_10f893a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f893a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10f893b0; body size 13 bytes.
#line 1 "ENTRY_10f893b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f893b0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10f893c0; body size 3 bytes.
#line 1 "ENTRY_10f893c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f893c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f893d0; body size 3 bytes.
#line 1 "ENTRY_10f893d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f893d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f89450; body size 3 bytes.
#line 1 "ENTRY_10f89450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f89450(void)

{
  return;
}


// Reference entry 10f89510; body size 11 bytes.
#line 1 "ENTRY_10f89510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f89510(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f89520; body size 6 bytes.
#line 1 "ENTRY_10f89520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f89520(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10f895c0; body size 14 bytes.
#line 1 "ENTRY_10f895c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f895c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 4), 0);
  return;
}


// Reference entry 10f895e0; body size 13 bytes.
#line 1 "ENTRY_10f895e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f895e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f895f0; body size 12 bytes.
#line 1 "ENTRY_10f895f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f895f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10f89600; body size 11 bytes.
#line 1 "ENTRY_10f89600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f89600(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f89860; body size 43 bytes.
#line 1 "ENTRY_10f89860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f89860(int param_1,int param_2,int param_3)

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


// Reference entry 10f898a0; body size 90 bytes.
#line 1 "ENTRY_10f898a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f898a0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x71c71c8) {
    param_1 = (uint)(param_1 * 0x24);
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


// Reference entry 10f89920; body size 87 bytes.
#line 1 "ENTRY_10f89920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f89920(uint param_1)

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


// Reference entry 10f89990; body size 3 bytes.
#line 1 "ENTRY_10f89990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f89990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f899a0; body size 61 bytes.
#line 1 "ENTRY_10f899a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10f899a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2);
  if (0xf < (uint)param_2[5]) {
    puVar4 = (undefined4 *)((undefined4 *)*param_2);
  }
  uVar2 = (uint)(0);
  uVar3 = (uint)(0x811c9dc5);
  if (param_2[4] != 0) {
    do {
      pbVar1 = (byte *)((byte *)(uVar2 + (int)puVar4));
      uVar2 = (uint)(uVar2 + 1);
      uVar3 = (uint)((*pbVar1 ^ uVar3) * 0x1000193);
    } while (uVar2 < (uint)param_2[4]);
  }
  return (uint)(*(uint *)(param_1 + 0x18) & uVar3);
}


// Reference entry 10f899f0; body size 4 bytes.
#line 1 "ENTRY_10f899f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f899f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10f89a00; body size 94 bytes.
#line 1 "ENTRY_10f89a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f89a00(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(uint *)(param_1 + 8) != 0) {
    piVar1 = (int *)((int *)(param_1 + 4));
    iStack_4 = (int)(param_1);
    if (*(uint *)((param_1 + 8)) < *(uint *)((param_1 + 0x1c) >> 3)) {
      func_0x100051af(*(undefined4 *)*piVar1,(undefined4 *)*piVar1);
      return;
    }
    thunk_FUN_10f86c10(piVar1,*piVar1);
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10f87440(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),&iStack_4);
  }
  return;
}


// Reference entry 10f89ab0; body size 83 bytes.
#line 1 "ENTRY_10f89ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10f89ab0(byte *param_2)
{
  byte *param_1 = (byte *)this;
  byte bVar1;
  byte bVar2;
  
  bVar1 = (byte)(*param_1);
  bVar2 = (byte)(*param_2);
  if (bVar1 == bVar2) {
    bVar1 = (byte)(param_1[1]);
    bVar2 = (byte)(param_2[1]);
    if (bVar1 == bVar2) {
      bVar1 = (byte)(param_1[2]);
      bVar2 = (byte)(param_2[2]);
      if (bVar1 == bVar2) {
        bVar1 = (byte)(param_1[3]);
        bVar2 = (byte)(param_2[3]);
        if (bVar1 == bVar2) {
          if (param_1[4] != param_2[4]) {
            return (int)((uint)param_1[4] - (uint)param_2[4]);
          }
          return (int)(0);
        }
      }
    }
  }
  return (int)((uint)bVar1 - (uint)bVar2);
}


// Reference entry 10f89b20; body size 57 bytes.
#line 1 "ENTRY_10f89b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f89b20(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x24);
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


// Reference entry 10f89b70; body size 60 bytes.
#line 1 "ENTRY_10f89b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f89b70(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x24);
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


// Reference entry 10f89bc0; body size 61 bytes.
#line 1 "ENTRY_10f89bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f89bc0(int param_1,int param_2)

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


// Reference entry 10f89c10; body size 12 bytes.
#line 1 "ENTRY_10f89c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f89c10(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10f89c20; body size 4 bytes.
#line 1 "ENTRY_10f89c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f89c20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f89c30; body size 11 bytes.
#line 1 "ENTRY_10f89c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f89c30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f89c40; body size 16 bytes.
#line 1 "ENTRY_10f89c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f89c40(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10f875b0(param_1,param_2);
  return;
}


// Reference entry 10f89c60; body size 3 bytes.
#line 1 "ENTRY_10f89c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10f89c60(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10f89c70; body size 6 bytes.
#line 1 "ENTRY_10f89c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f89c70(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10f89c80; body size 6 bytes.
#line 1 "ENTRY_10f89c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f89c80(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10f89c90; body size 6 bytes.
#line 1 "ENTRY_10f89c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f89c90(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10f89ca0; body size 6 bytes.
#line 1 "ENTRY_10f89ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f89ca0(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10f89cb0; body size 5 bytes.
#line 1 "ENTRY_10f89cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f89cb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f89cc0; body size 9 bytes.
#line 1 "ENTRY_10f89cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f89cc0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10f89d50; body size 25 bytes.
#line 1 "ENTRY_10f89d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f89d50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f89d70; body size 33 bytes.
#line 1 "ENTRY_10f89d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f89d70(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10f89da0; body size 3 bytes.
#line 1 "ENTRY_10f89da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f89da0(void)

{
  return;
}


// Reference entry 10f89db0; body size 18 bytes.
#line 1 "ENTRY_10f89db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f89db0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10f89f80; body size 7 bytes.
#line 1 "ENTRY_10f89f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f89f80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f89f90; body size 33 bytes.
#line 1 "ENTRY_10f89f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f89f90(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (int)((param_2 - (int)param_1) + (int)param_3);
}


// Reference entry 10f89fc0; body size 5 bytes.
#line 1 "ENTRY_10f89fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f89fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f89fd0; body size 36 bytes.
#line 1 "ENTRY_10f89fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f89fd0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10f8a000; body size 5 bytes.
#line 1 "ENTRY_10f8a000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f8a000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f8a010; body size 13 bytes.
#line 1 "ENTRY_10f8a010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f8a010(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10f8a020; body size 3 bytes.
#line 1 "ENTRY_10f8a020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f8a020(void)

{
  return;
}


// Reference entry 10f8a030; body size 36 bytes.
#line 1 "ENTRY_10f8a030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f8a030(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10f89dd0(puVar1,param_2);
  return;
}


// Reference entry 10f8a060; body size 5 bytes.
#line 1 "ENTRY_10f8a060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f8a060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f8a070; body size 5 bytes.
#line 1 "ENTRY_10f8a070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f8a070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f8a650; body size 11 bytes.
#line 1 "ENTRY_10f8a650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8a650(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f8a660; body size 11 bytes.
#line 1 "ENTRY_10f8a660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8a660(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f8a670; body size 23 bytes.
#line 1 "ENTRY_10f8a670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f8a670(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f8a690; body size 3 bytes.
#line 1 "ENTRY_10f8a690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8a690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f8a6a0; body size 23 bytes.
#line 1 "ENTRY_10f8a6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f8a6a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f8a6c0; body size 121 bytes.
#line 1 "ENTRY_10f8a6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f8a6c0(undefined4 *param_1)

{
  thunk_FUN_1124a200((int)("application/json"),(int)(0));
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RHTTPDataIO);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest);
  param_1[0x1883] = (undefined4)((uint)&ghidra_vftable_RMuseDeviceSetSettingsPostRequest);
  param_1[0x1884] = (undefined4)(0);
  param_1[0x1885] = (undefined4)(0);
  param_1[0x1886] = (undefined4)(0);
  param_1[0x1887] = (undefined4)(0);
  param_1[0x1888] = (undefined4)(0);
  param_1[0x1889] = (undefined4)(0);
  param_1[0x188a] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f8b430; body size 11 bytes.
#line 1 "ENTRY_10f8b430"

/* WARNING: Removing unreachable block_10f8b430 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8b430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RMuseGetPlayerInfoAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f8b440; body size 11 bytes.
#line 1 "ENTRY_10f8b440"

/* WARNING: Removing unreachable block_10f8b440 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8b440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RMuseSetSettingsAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f8b450; body size 11 bytes.
#line 1 "ENTRY_10f8b450"

/* WARNING: Removing unreachable block_10f8b450 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8b450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_SCOpDeviceVoiceSettingsCompoundSet_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10f8bc80; body size 18 bytes.
#line 1 "ENTRY_10f8bc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8bc80(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpDeviceVoiceSettingsSet);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpDeviceVoiceSettingsSet);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f8bca0; body size 18 bytes.
#line 1 "ENTRY_10f8bca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8bca0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpMuseGetPlayerInfo);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpMuseGetPlayerInfo);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f8bcc0; body size 18 bytes.
#line 1 "ENTRY_10f8bcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8bcc0(undefined4 *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpMuseSetSettings);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpMuseSetSettings);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  param_1[2] = (undefined4)((uint)&ghidra_vftable_SCOpImpl);
  if (param_1[3] != 0) {
    piVar1 = (int *)((int *)param_1[4]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      param_1[3] = (undefined4)(0);
      param_1[4] = (undefined4)(0);
      ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
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
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[2] = (undefined4)((uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f8bce0; body size 14 bytes.
#line 1 "ENTRY_10f8bce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f8bce0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f8bd00; body size 14 bytes.
#line 1 "ENTRY_10f8bd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f8bd00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f8bd20; body size 4 bytes.
#line 1 "ENTRY_10f8bd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8bd20(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f8bd30; body size 4 bytes.
#line 1 "ENTRY_10f8bd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8bd30(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10f8bd40; body size 3 bytes.
#line 1 "ENTRY_10f8bd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8bd40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f8bd50; body size 3 bytes.
#line 1 "ENTRY_10f8bd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8bd50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10f8bd60; body size 6 bytes.
#line 1 "ENTRY_10f8bd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10f8bd60(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10f8bd70; body size 6 bytes.
#line 1 "ENTRY_10f8bd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10f8bd70(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10f8c230; body size 49 bytes.
#line 1 "ENTRY_10f8c230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10f8c230(uint param_2)
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


// Reference entry 10f8c2e0; body size 3 bytes.
#line 1 "ENTRY_10f8c2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f8c2e0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10f8c2f0; body size 3 bytes.
#line 1 "ENTRY_10f8c2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f8c2f0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10f8c300; body size 3 bytes.
#line 1 "ENTRY_10f8c300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8c300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f8c310; body size 3 bytes.
#line 1 "ENTRY_10f8c310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8c310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f8c320; body size 3 bytes.
#line 1 "ENTRY_10f8c320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8c320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f8c330; body size 3 bytes.
#line 1 "ENTRY_10f8c330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8c330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f8c340; body size 3 bytes.
#line 1 "ENTRY_10f8c340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f8c340(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10f8c3c0; body size 38 bytes.
#line 1 "ENTRY_10f8c3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __stdcall FUN_10f8c3c0(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return (void *)((char *)((int)param_3 + (param_2 - (int)param_1 >> 2) * 4));
}


// Reference entry 10f8c3f0; body size 27 bytes.
#line 1 "ENTRY_10f8c3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f8c3f0(void *param_1,int param_2,void *param_3,unsigned int recovered_unused_stack_0)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10f8c420; body size 27 bytes.
#line 1 "ENTRY_10f8c420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f8c420(void *param_1,int param_2,void *param_3)

{
  memmove(param_3,param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10f8c820; body size 87 bytes.
#line 1 "ENTRY_10f8c820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f8c820(uint param_1)

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


// Reference entry 10f8c890; body size 11 bytes.
#line 1 "ENTRY_10f8c890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f8c890(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f8c920; body size 9 bytes.
#line 1 "ENTRY_10f8c920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f8c920(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10f8c930; body size 6 bytes.
#line 1 "ENTRY_10f8c930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8c930(undefined4 *param_1)

{
  param_1[1] = (undefined4)(*param_1);
  return;
}


// Reference entry 10f8cb00; body size 61 bytes.
#line 1 "ENTRY_10f8cb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f8cb00(int param_1,int param_2)

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


// Reference entry 10f8cb50; body size 9 bytes.
#line 1 "ENTRY_10f8cb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8cb50(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 10f8cb60; body size 12 bytes.
#line 1 "ENTRY_10f8cb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f8cb60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10f8cb70; body size 42 bytes.
#line 1 "ENTRY_10f8cb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f8cb70(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(char *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10f8ce90; body size 21 bytes.
#line 1 "ENTRY_10f8ce90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8ce90(int param_1)

{
  if (*(int *)(param_1 + 0x6158) != 0) {
    return (undefined4)(*(undefined4 *)(*(int *)(param_1 + 0x6158) + 0x448c));
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 10f8ceb0; body size 24 bytes.
#line 1 "ENTRY_10f8ceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f8ceb0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(*(int *)(param_1 + 0x18) + 0x6158));
  if (iVar1 != 0) {
    return (undefined4)(*(undefined4 *)(iVar1 + 0x448c));
  }
  return (undefined4)(0xffffffff);
}


// Reference entry 10f8cf00; body size 7 bytes.
#line 1 "ENTRY_10f8cf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f8cf00(int param_1)

{
  return (int)(param_1 + 0x6220);
}


// Reference entry 10f8cf10; body size 4 bytes.
#line 1 "ENTRY_10f8cf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f8cf10(int param_1)

{
  return (int)(param_1 + 0x30);
}


// Reference entry 10f8cf20; body size 4 bytes.
#line 1 "ENTRY_10f8cf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f8cf20(int param_1)

{
  return (int)(param_1 + 0x14);
}


// Reference entry 10f8cf30; body size 7 bytes.
#line 1 "ENTRY_10f8cf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f8cf30(int param_1)

{
  return (int)(param_1 + 0x623c);
}


// Reference entry 10f8cf40; body size 28 bytes.
#line 1 "ENTRY_10f8cf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f8cf40(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x614c), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (int *)(param_2);
}


// Reference entry 10f8cf70; body size 28 bytes.
#line 1 "ENTRY_10f8cf70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f8cf70(int *param_2)
{
  int param_1 = (int )this;
  int *piVar1;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x6130), 0);
  *param_2 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (int *)(param_2);
}


// Reference entry 10f8d040; body size 17 bytes.
#line 1 "ENTRY_10f8d040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f8d040(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x6214) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x6214), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10f8d060; body size 17 bytes.
#line 1 "ENTRY_10f8d060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10f8d060(int param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(&DAT_1186d2ee);
  if (*(undefined1 **)(param_1 + 0x612c) != (undefined1 *)((0x0))) {
    puVar1 = (undefined1 *)(*(undefined1 **)(param_1 + 0x612c), 0);
  }
  return (undefined1 *)(puVar1);
}


// Reference entry 10f8ddc0; body size 67 bytes.
#line 1 "ENTRY_10f8ddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * FUN_10f8ddc0(SCStr *param_1,int param_2)

{
  if (param_2 == 0) {
    ((SCStr *)(param_1))->int_allocRep("device");
    return (SCStr *)(param_1);
  }
  if (param_2 != 1) {
    ((SCStr *)(param_1))->int_allocRep("");
    return (SCStr *)(param_1);
  }
  ((SCStr *)(param_1))->int_allocRep("hardwareStatus");
  return (SCStr *)(param_1);
}


// Reference entry 10f8e030; body size 6 bytes.
#line 1 "ENTRY_10f8e030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f8e030(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10f8e040; body size 6 bytes.
#line 1 "ENTRY_10f8e040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f8e040(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10f8e3e0; body size 36 bytes.
#line 1 "ENTRY_10f8e3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f8e3e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 8)) {
    *puVar1 = (undefined4)(*param_2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    return;
  }
  thunk_FUN_10f89dd0(puVar1,param_2);
  return;
}


// Reference entry 10f8ea50; body size 13 bytes.
#line 1 "ENTRY_10f8ea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f8ea50(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x6160) = (undefined4)(param_2);
  return;
}


// Reference entry 10f8ea80; body size 9 bytes.
#line 1 "ENTRY_10f8ea80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f8ea80(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10f8eda0; body size 26 bytes.
#line 1 "ENTRY_10f8eda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8eda0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10f8eeb0; body size 26 bytes.
#line 1 "ENTRY_10f8eeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8eeb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUsageDataCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f8eed0; body size 26 bytes.
#line 1 "ENTRY_10f8eed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8eed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUsageDataInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f8eef0; body size 26 bytes.
#line 1 "ENTRY_10f8eef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8eef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUsageDataOptInState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f8ef10; body size 110 bytes.
#line 1 "ENTRY_10f8ef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8ef10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUsageDataPostCompleteState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCUsageDataPostCompleteState);
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


// Reference entry 10f8efa0; body size 117 bytes.
#line 1 "ENTRY_10f8efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8efa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUsageDataPrereqOnPostCompleteState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCUsageDataPrereqOnPostCompleteState);
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


// Reference entry 10f8f040; body size 110 bytes.
#line 1 "ENTRY_10f8f040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f8f040(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCUsageDataStartState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCUsageDataStartState);
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


// Reference entry 10f8f0d0; body size 7 bytes.
#line 1 "ENTRY_10f8f0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8f0d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f8f0e0; body size 39 bytes.
#line 1 "ENTRY_10f8f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8f0e0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLegacyUsageDataWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCLegacyUsageDataWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCLegacyUsageDataWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCLegacyUsageDataWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCLegacyUsageDataWizard);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar4 = (int *)((int *)((SCVtbl_6_1*)((int *)pSVar3))->v((int)(&piStack_14)), 0);
  piVar1 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)((SCVtbl_3_0*)(piVar1))->v(), 0);
  }

  if ((int *)(piStack_14) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_14))->v();
  }

  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_51_1*)(piVar1))->v((int)(param_1[0x14]));
  }
  thunk_FUN_10dd3190();
  if (param_1[0x2a] != 0) {
    thunk_FUN_1059d940((int)(param_1[0x2a]));
    param_1[0x2a] = (int)(0);
    *(undefined1*)((int)param_1 + 0xad) = (undefined1)(0);
  }
  thunk_FUN_10dd31f0();
  thunk_FUN_112af4e0("Wizard",5,"Clearing sub-wizard mode.");
  if ((undefined4 *)param_1[0x26] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
    param_1[0x26] = (int)(0);
  }

  if ((int *)(piVar4) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar4))->v();
  }
  piVar1 = (int *)((int *)param_1[0x32]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x31] = (int)(0);
    param_1[0x32] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x30]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2f] = (int)(0);
    param_1[0x30] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x2e]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2d] = (int)(0);
    param_1[0x2e] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x28]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x27] = (int)(0);
    param_1[0x28] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1b] = (int)(0);
    param_1[0x1c] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  thunk_FUN_10dd1260();
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCHouseholdEventSink);
  piVar1 = (int *)((int *)param_1[0x15]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x14] = (int)(0);
    param_1[0x15] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();

  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f8f110; body size 7 bytes.
#line 1 "ENTRY_10f8f110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8f110(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f8f120; body size 7 bytes.
#line 1 "ENTRY_10f8f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8f120(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f8f130; body size 7 bytes.
#line 1 "ENTRY_10f8f130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f8f130(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f91460; body size 26 bytes.
#line 1 "ENTRY_10f91460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91460(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10f91480; body size 26 bytes.
#line 1 "ENTRY_10f91480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91480(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelfTrueplayEnabledState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f914a0; body size 199 bytes.
#line 1 "ENTRY_10f914a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f914a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelfTrueplayIntroState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCSelfTrueplayIntroState);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[10] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[6] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
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
  return (undefined4 *)(param_1);
}


// Reference entry 10f915a0; body size 26 bytes.
#line 1 "ENTRY_10f915a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f915a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSelfTrueplaySkippedState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f915c0; body size 30 bytes.
#line 1 "ENTRY_10f915c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f915c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarCleanupState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f915f0; body size 26 bytes.
#line 1 "ENTRY_10f915f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f915f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f91610; body size 44 bytes.
#line 1 "ENTRY_10f91610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91610(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarEndState);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f91650; body size 26 bytes.
#line 1 "ENTRY_10f91650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91650(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f91670; body size 40 bytes.
#line 1 "ENTRY_10f91670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f91670(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSonarIntroState);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f91ac0; body size 7 bytes.
#line 1 "ENTRY_10f91ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f91ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f91ad0; body size 7 bytes.
#line 1 "ENTRY_10f91ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f91ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f91b90; body size 7 bytes.
#line 1 "ENTRY_10f91b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f91b90(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f91ba0; body size 7 bytes.
#line 1 "ENTRY_10f91ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f91ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f91bb0; body size 7 bytes.
#line 1 "ENTRY_10f91bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f91bb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f91c40; body size 7 bytes.
#line 1 "ENTRY_10f91c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f91c40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f929b0; body size 5 bytes.
#line 1 "ENTRY_10f929b0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f929b0(int param_1)

{ __asm jmp FUN_1005bece }


// Reference entry 10f93070; body size 45 bytes.
#line 1 "ENTRY_10f93070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f93070(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCSonarCompleteState);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10f931e0; body size 16 bytes.
#line 1 "ENTRY_10f931e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f931e0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f96c30; body size 5 bytes.
#line 1 "ENTRY_10f96c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f96c30(int param_1)

{
  *(undefined1*)(param_1 + 0x1c) = (undefined1)(1);
  return;
}


// Reference entry 10f96d50; body size 4 bytes.
#line 1 "ENTRY_10f96d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10f96d50(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xc));
}


// Reference entry 10f96d60; body size 26 bytes.
#line 1 "ENTRY_10f96d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f96d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10f96d80; body size 26 bytes.
#line 1 "ENTRY_10f96d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f96d80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f96da0; body size 26 bytes.
#line 1 "ENTRY_10f96da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f96da0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizDoneState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f96dc0; body size 26 bytes.
#line 1 "ENTRY_10f96dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f96dc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizErrorState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f96de0; body size 26 bytes.
#line 1 "ENTRY_10f96de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f96de0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f96e00; body size 26 bytes.
#line 1 "ENTRY_10f96e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f96e00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizIntroState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f96e20; body size 148 bytes.
#line 1 "ENTRY_10f96e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f96e20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizSubmittingState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCLegacySubmitDiagsWizSubmittingState);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xd] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x19] = (undefined4)(0);
  param_1[0x23] = (undefined4)(0);
  *(undefined1*)(param_1 + 0x24) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f96fb0; body size 7 bytes.
#line 1 "ENTRY_10f96fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f96fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f96fc0; body size 7 bytes.
#line 1 "ENTRY_10f96fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f96fc0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f96fd0; body size 7 bytes.
#line 1 "ENTRY_10f96fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f96fd0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f96fe0; body size 7 bytes.
#line 1 "ENTRY_10f96fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f96fe0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f96ff0; body size 7 bytes.
#line 1 "ENTRY_10f96ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f96ff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f97000; body size 7 bytes.
#line 1 "ENTRY_10f97000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f97000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f97130; body size 39 bytes.
#line 1 "ENTRY_10f97130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f97130(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLegacySubmitDiagsWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCLegacySubmitDiagsWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCLegacySubmitDiagsWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCLegacySubmitDiagsWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCLegacySubmitDiagsWizard);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar4 = (int *)((int *)((SCVtbl_6_1*)((int *)pSVar3))->v((int)(&piStack_14)), 0);
  piVar1 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)((SCVtbl_3_0*)(piVar1))->v(), 0);
  }

  if ((int *)(piStack_14) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_14))->v();
  }

  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_51_1*)(piVar1))->v((int)(param_1[0x14]));
  }
  thunk_FUN_10dd3190();
  if (param_1[0x2a] != 0) {
    thunk_FUN_1059d940((int)(param_1[0x2a]));
    param_1[0x2a] = (int)(0);
    *(undefined1*)((int)param_1 + 0xad) = (undefined1)(0);
  }
  thunk_FUN_10dd31f0();
  thunk_FUN_112af4e0("Wizard",5,"Clearing sub-wizard mode.");
  if ((undefined4 *)param_1[0x26] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
    param_1[0x26] = (int)(0);
  }

  if ((int *)(piVar4) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar4))->v();
  }
  piVar1 = (int *)((int *)param_1[0x32]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x31] = (int)(0);
    param_1[0x32] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x30]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2f] = (int)(0);
    param_1[0x30] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x2e]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2d] = (int)(0);
    param_1[0x2e] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x28]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x27] = (int)(0);
    param_1[0x28] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1b] = (int)(0);
    param_1[0x1c] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  thunk_FUN_10dd1260();
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCHouseholdEventSink);
  piVar1 = (int *)((int *)param_1[0x15]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x14] = (int)(0);
    param_1[0x15] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();

  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10f99410; body size 13 bytes.
#line 1 "ENTRY_10f99410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f99410(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x798) = (undefined4)(param_2);
  return;
}


// Reference entry 10f99440; body size 32 bytes.
#line 1 "ENTRY_10f99440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f99440(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f99470; body size 18 bytes.
#line 1 "ENTRY_10f99470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f99470(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f99490; body size 18 bytes.
#line 1 "ENTRY_10f99490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f99490(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f994b0; body size 22 bytes.
#line 1 "ENTRY_10f994b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f994b0(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f994d0; body size 53 bytes.
#line 1 "ENTRY_10f994d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f994d0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f99520; body size 22 bytes.
#line 1 "ENTRY_10f99520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f99520(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f99540; body size 22 bytes.
#line 1 "ENTRY_10f99540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f99540(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f99560; body size 18 bytes.
#line 1 "ENTRY_10f99560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f99560(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f99580; body size 18 bytes.
#line 1 "ENTRY_10f99580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f99580(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f99730; body size 22 bytes.
#line 1 "ENTRY_10f99730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f99730(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f99750; body size 22 bytes.
#line 1 "ENTRY_10f99750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f99750(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10f99770; body size 34 bytes.
#line 1 "ENTRY_10f99770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f99770(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f997a0; body size 55 bytes.
#line 1 "ENTRY_10f997a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f997a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f997f0; body size 3 bytes.
#line 1 "ENTRY_10f997f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f997f0(void)

{
  return;
}


// Reference entry 10f99800; body size 25 bytes.
#line 1 "ENTRY_10f99800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99800(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10f99820; body size 25 bytes.
#line 1 "ENTRY_10f99820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99820(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10f99840; body size 13 bytes.
#line 1 "ENTRY_10f99840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99840(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f99850; body size 13 bytes.
#line 1 "ENTRY_10f99850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99850(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f99860; body size 13 bytes.
#line 1 "ENTRY_10f99860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99860(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f99870; body size 13 bytes.
#line 1 "ENTRY_10f99870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99870(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10f99880; body size 3 bytes.
#line 1 "ENTRY_10f99880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99880(void)

{
  return;
}


// Reference entry 10f99890; body size 3 bytes.
#line 1 "ENTRY_10f99890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99890(void)

{
  return;
}


// Reference entry 10f998a0; body size 118 bytes.
#line 1 "ENTRY_10f998a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f998a0(int *param_2,uint *param_3)
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


// Reference entry 10f99c00; body size 73 bytes.
#line 1 "ENTRY_10f99c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f99c00(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*param_1);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar1 + 4), 0);
  *param_2 = (int)((int)puVar4);
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = (uint)(*param_3);
    do {
      *param_2 = (int)((int)puVar4);
      uVar3 = (uint)(puVar4[4]);
      if (uVar2 <= uVar3) {
        param_2[2] = (int)((int)puVar4);
        puVar4 = (undefined4 *)((undefined4 *)*puVar4);
      }
      else {
        puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
      }
      param_2[1] = (int)((uint)(uVar2 <= uVar3));
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 10f99c60; body size 15 bytes.
#line 1 "ENTRY_10f99c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99c60(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x24);
  return;
}


// Reference entry 10f99c80; body size 15 bytes.
#line 1 "ENTRY_10f99c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f99c80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10f99dd0; body size 5 bytes.
#line 1 "ENTRY_10f99dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f99dd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f99de0; body size 5 bytes.
#line 1 "ENTRY_10f99de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f99de0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f99df0; body size 5 bytes.
#line 1 "ENTRY_10f99df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f99df0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f99e00; body size 31 bytes.
#line 1 "ENTRY_10f99e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_10f99e00(int param_1,uint *param_2){
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f99e30; body size 31 bytes.
#line 1 "ENTRY_10f99e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_10f99e30(int param_1,uint *param_2){
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10f9a0e0; body size 5 bytes.
#line 1 "ENTRY_10f9a0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a0f0; body size 5 bytes.
#line 1 "ENTRY_10f9a0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a100; body size 5 bytes.
#line 1 "ENTRY_10f9a100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a110; body size 5 bytes.
#line 1 "ENTRY_10f9a110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a120; body size 5 bytes.
#line 1 "ENTRY_10f9a120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a130; body size 5 bytes.
#line 1 "ENTRY_10f9a130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a140; body size 5 bytes.
#line 1 "ENTRY_10f9a140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a150; body size 5 bytes.
#line 1 "ENTRY_10f9a150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a160; body size 5 bytes.
#line 1 "ENTRY_10f9a160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a160(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a170; body size 5 bytes.
#line 1 "ENTRY_10f9a170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a180; body size 5 bytes.
#line 1 "ENTRY_10f9a180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a190; body size 43 bytes.
#line 1 "ENTRY_10f9a190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f9a190(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  return;
}


// Reference entry 10f9a1d0; body size 29 bytes.
#line 1 "ENTRY_10f9a1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f9a1d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10f9a310; body size 86 bytes.
#line 1 "ENTRY_10f9a310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f9a310(int *param_1,int *param_2)

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


// Reference entry 10f9a460; body size 15 bytes.
#line 1 "ENTRY_10f9a460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a460(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f9a480; body size 15 bytes.
#line 1 "ENTRY_10f9a480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a480(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f9a4a0; body size 15 bytes.
#line 1 "ENTRY_10f9a4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a4a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f9a4c0; body size 15 bytes.
#line 1 "ENTRY_10f9a4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a4c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10f9a4e0; body size 5 bytes.
#line 1 "ENTRY_10f9a4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a4e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a4f0; body size 5 bytes.
#line 1 "ENTRY_10f9a4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a4f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a500; body size 5 bytes.
#line 1 "ENTRY_10f9a500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a510; body size 5 bytes.
#line 1 "ENTRY_10f9a510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a510(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a520; body size 5 bytes.
#line 1 "ENTRY_10f9a520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a530; body size 5 bytes.
#line 1 "ENTRY_10f9a530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10f9a530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a690; body size 26 bytes.
#line 1 "ENTRY_10f9a690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9a690(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a6b0; body size 18 bytes.
#line 1 "ENTRY_10f9a6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9a6b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a6d0; body size 18 bytes.
#line 1 "ENTRY_10f9a6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9a6d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a770; body size 11 bytes.
#line 1 "ENTRY_10f9a770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9a770(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a780; body size 11 bytes.
#line 1 "ENTRY_10f9a780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9a780(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a890; body size 11 bytes.
#line 1 "ENTRY_10f9a890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9a890(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a8a0; body size 11 bytes.
#line 1 "ENTRY_10f9a8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9a8a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a8b0; body size 11 bytes.
#line 1 "ENTRY_10f9a8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9a8b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a8c0; body size 11 bytes.
#line 1 "ENTRY_10f9a8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9a8c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a8d0; body size 16 bytes.
#line 1 "ENTRY_10f9a8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f9a8d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a8f0; body size 16 bytes.
#line 1 "ENTRY_10f9a8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f9a8f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a910; body size 3 bytes.
#line 1 "ENTRY_10f9a910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9a910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a920; body size 3 bytes.
#line 1 "ENTRY_10f9a920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9a920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9a930; body size 52 bytes.
#line 1 "ENTRY_10f9a930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f9a930(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9a980; body size 52 bytes.
#line 1 "ENTRY_10f9a980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f9a980(undefined4 *param_1)

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


// Reference entry 10f9aa60; body size 35 bytes.
#line 1 "ENTRY_10f9aa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10f9aa60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9abf0; body size 26 bytes.
#line 1 "ENTRY_10f9abf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9abf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9ac10; body size 26 bytes.
#line 1 "ENTRY_10f9ac10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9ac10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardDoNotRemoveState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9ad40; body size 26 bytes.
#line 1 "ENTRY_10f9ad40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9ad40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9ad60; body size 30 bytes.
#line 1 "ENTRY_10f9ad60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9ad60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardIntroState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9ad90; body size 30 bytes.
#line 1 "ENTRY_10f9ad90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9ad90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardNetworkTestIntroState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9adc0; body size 26 bytes.
#line 1 "ENTRY_10f9adc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9adc0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardResetCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9ade0; body size 30 bytes.
#line 1 "ENTRY_10f9ade0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9ade0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardResetFailedState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9ae10; body size 26 bytes.
#line 1 "ENTRY_10f9ae10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9ae10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardState);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9ae30; body size 30 bytes.
#line 1 "ENTRY_10f9ae30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9ae30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardTestFailState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9ae60; body size 30 bytes.
#line 1 "ENTRY_10f9ae60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9ae60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCBridgeRemovalWizardTestPassState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10f9b230; body size 19 bytes.
#line 1 "ENTRY_10f9b230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b230(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
  }
  return;
}


// Reference entry 10f9b250; body size 19 bytes.
#line 1 "ENTRY_10f9b250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b250(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10f9b530; body size 7 bytes.
#line 1 "ENTRY_10f9b530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f9b540; body size 7 bytes.
#line 1 "ENTRY_10f9b540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f9b640; body size 7 bytes.
#line 1 "ENTRY_10f9b640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b640(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f9b650; body size 7 bytes.
#line 1 "ENTRY_10f9b650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b650(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f9b660; body size 7 bytes.
#line 1 "ENTRY_10f9b660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f9b670; body size 7 bytes.
#line 1 "ENTRY_10f9b670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f9b680; body size 7 bytes.
#line 1 "ENTRY_10f9b680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b680(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f9b6a0; body size 7 bytes.
#line 1 "ENTRY_10f9b6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b6a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f9b6b0; body size 7 bytes.
#line 1 "ENTRY_10f9b6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9b6b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10f9b770; body size 65 bytes.
#line 1 "ENTRY_10f9b770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f9b770(int *param_2)
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


// Reference entry 10f9b7d0; body size 120 bytes.
#line 1 "ENTRY_10f9b7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10f9b7d0(int *param_2)
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


// Reference entry 10f9b870; body size 14 bytes.
#line 1 "ENTRY_10f9b870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f9b870(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f9b890; body size 14 bytes.
#line 1 "ENTRY_10f9b890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f9b890(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10f9b8b0; body size 14 bytes.
#line 1 "ENTRY_10f9b8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f9b8b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f9b8d0; body size 14 bytes.
#line 1 "ENTRY_10f9b8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10f9b8d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10f9bb10; body size 6 bytes.
#line 1 "ENTRY_10f9bb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f9bb10(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f9bb20; body size 6 bytes.
#line 1 "ENTRY_10f9bb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f9bb20(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f9bb30; body size 6 bytes.
#line 1 "ENTRY_10f9bb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f9bb30(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f9bb40; body size 6 bytes.
#line 1 "ENTRY_10f9bb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10f9bb40(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10f9bb50; body size 20 bytes.
#line 1 "ENTRY_10f9bb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9bb50(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 10f9bbf0; body size 20 bytes.
#line 1 "ENTRY_10f9bbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10f9bbf0(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 10f9c410; body size 31 bytes.
#line 1 "ENTRY_10f9c410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9c410(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10f9c440; body size 31 bytes.
#line 1 "ENTRY_10f9c440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9c440(undefined4 *param_1)

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


// Reference entry 10f9c4b0; body size 14 bytes.
#line 1 "ENTRY_10f9c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9c4b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x71c71c7) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10f9c4d0; body size 14 bytes.
#line 1 "ENTRY_10f9c4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10f9c4d0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10f9ce40; body size 3 bytes.
#line 1 "ENTRY_10f9ce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9ce40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9ce50; body size 3 bytes.
#line 1 "ENTRY_10f9ce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9ce50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9ce60; body size 3 bytes.
#line 1 "ENTRY_10f9ce60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9ce60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9ce70; body size 3 bytes.
#line 1 "ENTRY_10f9ce70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9ce70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9ce80; body size 3 bytes.
#line 1 "ENTRY_10f9ce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9ce80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9ce90; body size 3 bytes.
#line 1 "ENTRY_10f9ce90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9ce90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9cea0; body size 3 bytes.
#line 1 "ENTRY_10f9cea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9cea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9ceb0; body size 3 bytes.
#line 1 "ENTRY_10f9ceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9ceb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9cec0; body size 3 bytes.
#line 1 "ENTRY_10f9cec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9cec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9ced0; body size 3 bytes.
#line 1 "ENTRY_10f9ced0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9ced0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9cee0; body size 3 bytes.
#line 1 "ENTRY_10f9cee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9cee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9cef0; body size 3 bytes.
#line 1 "ENTRY_10f9cef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9cef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9cf00; body size 3 bytes.
#line 1 "ENTRY_10f9cf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9cf00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9cf10; body size 3 bytes.
#line 1 "ENTRY_10f9cf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9cf10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9cf20; body size 3 bytes.
#line 1 "ENTRY_10f9cf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9cf20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9cf30; body size 3 bytes.
#line 1 "ENTRY_10f9cf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9cf30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10f9d540; body size 30 bytes.
#line 1 "ENTRY_10f9d540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f9d540(int param_1)

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


// Reference entry 10f9d570; body size 30 bytes.
#line 1 "ENTRY_10f9d570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10f9d570(int param_1)

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


// Reference entry 10f9d600; body size 3 bytes.
#line 1 "ENTRY_10f9d600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f9d600(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10f9d610; body size 3 bytes.
#line 1 "ENTRY_10f9d610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f9d610(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10f9d620; body size 11 bytes.
#line 1 "ENTRY_10f9d620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9d620(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f9d630; body size 11 bytes.
#line 1 "ENTRY_10f9d630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10f9d630(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10f9d720; body size 13 bytes.
#line 1 "ENTRY_10f9d720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f9d720(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f9d730; body size 11 bytes.
#line 1 "ENTRY_10f9d730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f9d730(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10f9dab0; body size 90 bytes.
#line 1 "ENTRY_10f9dab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f9dab0(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x71c71c8) {
    param_1 = (uint)(param_1 * 0x24);
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


// Reference entry 10f9db30; body size 97 bytes.
#line 1 "ENTRY_10f9db30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10f9db30(uint param_1)

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


// Reference entry 10f9dbd0; body size 13 bytes.
#line 1 "ENTRY_10f9dbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f9dbd0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10f9f2f0; body size 57 bytes.
#line 1 "ENTRY_10f9f2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f9f2f0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x24);
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


// Reference entry 10f9f340; body size 63 bytes.
#line 1 "ENTRY_10f9f340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10f9f340(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10f9f390; body size 60 bytes.
#line 1 "ENTRY_10f9f390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f9f390(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x24);
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


// Reference entry 10f9f3e0; body size 66 bytes.
#line 1 "ENTRY_10f9f3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10f9f3e0(int param_1,int param_2)

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


// Reference entry 10f9fd10; body size 11 bytes.
#line 1 "ENTRY_10f9fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10f9fd10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fa01a0; body size 7 bytes.
#line 1 "ENTRY_10fa01a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fa01a0(int param_1)

{
  return (int)(param_1 + 0xec);
}


// Reference entry 10fa01b0; body size 7 bytes.
#line 1 "ENTRY_10fa01b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fa01b0(int param_1)

{
  return (int)(param_1 + 0xe0);
}


// Reference entry 10fa33d0; body size 21 bytes.
#line 1 "ENTRY_10fa33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fa33d0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec));
  return (undefined4)(((uint)((int3)(iVar1 >> 0xb)) << 8 | (uint)(iVar1 >> 3 != 0)));
}


// Reference entry 10fa33f0; body size 21 bytes.
#line 1 "ENTRY_10fa33f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fa33f0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0));
  return (undefined4)(((uint)((int3)(iVar1 >> 0xb)) << 8 | (uint)(iVar1 >> 3 != 0)));
}


// Reference entry 10fa3520; body size 6 bytes.
#line 1 "ENTRY_10fa3520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fa3520(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10fa3530; body size 6 bytes.
#line 1 "ENTRY_10fa3530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fa3530(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10fa3540; body size 6 bytes.
#line 1 "ENTRY_10fa3540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fa3540(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10fa3550; body size 6 bytes.
#line 1 "ENTRY_10fa3550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fa3550(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10fa36c0; body size 5 bytes.
#line 1 "ENTRY_10fa36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fa36c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fa36d0; body size 5 bytes.
#line 1 "ENTRY_10fa36d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fa36d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fa40e0; body size 4 bytes.
#line 1 "ENTRY_10fa40e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fa40e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10fa4a70; body size 26 bytes.
#line 1 "ENTRY_10fa4a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa4a70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10fa4d20; body size 26 bytes.
#line 1 "ENTRY_10fa4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa4d20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10fa4d40; body size 26 bytes.
#line 1 "ENTRY_10fa4d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa4d40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardInfoState);
  return (undefined4 *)(param_1);
}


// Reference entry 10fa4d60; body size 26 bytes.
#line 1 "ENTRY_10fa4d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa4d60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10fa4d80; body size 26 bytes.
#line 1 "ENTRY_10fa4d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa4d80(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardMissingProductsState);
  return (undefined4 *)(param_1);
}


// Reference entry 10fa4ea0; body size 30 bytes.
#line 1 "ENTRY_10fa4ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa4ea0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardRemindState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fa5060; body size 26 bytes.
#line 1 "ENTRY_10fa5060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fa5060(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleLauncherWizardState);
  return (undefined4 *)(param_1);
}


// Reference entry 10fa51a0; body size 39 bytes.
#line 1 "ENTRY_10fa51a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fa51a0(int *param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  SCLibrary *pSVar3;
  int *piVar4;
  int *piStack_14;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCLifecycleLauncherWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCLifecycleLauncherWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCLifecycleLauncherWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCLifecycleLauncherWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCLifecycleLauncherWizard);


  uVar2 = (uint)(DAT_12126b84);

  *param_1 = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[10] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCWizard);
  piStack_14 = (int *)(param_1);
  thunk_FUN_112af4e0("Wizard",5,"Entering Wizard Destructor",uVar2);
  pSVar3 = (SCLibrary *)(((SCLibrary *)(0))->getSingleton(), 0);
  piVar4 = (int *)((int *)((SCVtbl_6_1*)((int *)pSVar3))->v((int)(&piStack_14)), 0);
  piVar1 = (int *)((int *)*piVar4);
  *piVar4 = (int)(0);
  if ((int *)(piVar1) == (int *)(0x0)) {
    piVar4 = (int *)((int *)0x0);
  }
  else {
    piVar4 = (int *)((int *)((SCVtbl_3_0*)(piVar1))->v(), 0);
  }

  if ((int *)(piStack_14) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_14))->v();
  }

  if ((int *)(piVar1) != (int *)(0x0)) {
    ((SCVtbl_51_1*)(piVar1))->v((int)(param_1[0x14]));
  }
  thunk_FUN_10dd3190();
  if (param_1[0x2a] != 0) {
    thunk_FUN_1059d940((int)(param_1[0x2a]));
    param_1[0x2a] = (int)(0);
    *(undefined1*)((int)param_1 + 0xad) = (undefined1)(0);
  }
  thunk_FUN_10dd31f0();
  thunk_FUN_112af4e0("Wizard",5,"Clearing sub-wizard mode.");
  if ((undefined4 *)param_1[0x26] != (undefined4 *)(((0x0)))) {
    (*(code *)**(undefined4 **)param_1[0x26])(1);
    param_1[0x26] = (int)(0);
  }

  if ((int *)(piVar4) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar4))->v();
  }
  piVar1 = (int *)((int *)param_1[0x32]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x31] = (int)(0);
    param_1[0x32] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x30]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2f] = (int)(0);
    param_1[0x30] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x2e]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x2d] = (int)(0);
    param_1[0x2e] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x28]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x27] = (int)(0);
    param_1[0x28] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  piVar1 = (int *)((int *)param_1[0x1c]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x1b] = (int)(0);
    param_1[0x1c] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  thunk_FUN_10dd1260();
  param_1[0x13] = (int)((int)(uint)&ghidra_vftable_SCHouseholdEventSink);
  piVar1 = (int *)((int *)param_1[0x15]);

  if ((int *)(piVar1) != (int *)(0x0)) {
    param_1[0x14] = (int)(0);
    param_1[0x15] = (int)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }
  param_1[0x12] = (int)((int)(uint)&ghidra_vftable_RControlAIOOpCB);
  thunk_FUN_11240850();
  thunk_FUN_103d60a0();

  param_1[2] = (int)((int)(uint)&ghidra_vftable_SCTimerUser);
  thunk_FUN_1059d800();
  thunk_FUN_1059c050();
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (int)((int)(uint)&ghidra_vftable_SCIObj);

  return;

 } catch (...) { }
}


// Reference entry 10fa51d0; body size 7 bytes.
#line 1 "ENTRY_10fa51d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fa51d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fa51e0; body size 7 bytes.
#line 1 "ENTRY_10fa51e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fa51e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fa51f0; body size 7 bytes.
#line 1 "ENTRY_10fa51f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fa51f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fa5200; body size 7 bytes.
#line 1 "ENTRY_10fa5200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fa5200(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fa5370; body size 7 bytes.
#line 1 "ENTRY_10fa5370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fa5370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10faa9d0; body size 22 bytes.
#line 1 "ENTRY_10faa9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faa9d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10faa9f0; body size 22 bytes.
#line 1 "ENTRY_10faa9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faa9f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaa10; body size 22 bytes.
#line 1 "ENTRY_10faaa10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faaa10(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaa30; body size 22 bytes.
#line 1 "ENTRY_10faaa30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faaa30(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaa50; body size 53 bytes.
#line 1 "ENTRY_10faaa50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faaa50(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaaa0; body size 53 bytes.
#line 1 "ENTRY_10faaaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faaaa0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaaf0; body size 67 bytes.
#line 1 "ENTRY_10faaaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faaaf0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faab50; body size 53 bytes.
#line 1 "ENTRY_10faab50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faab50(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faae80; body size 18 bytes.
#line 1 "ENTRY_10faae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faae80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaea0; body size 25 bytes.
#line 1 "ENTRY_10faaea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faaea0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaec0; body size 25 bytes.
#line 1 "ENTRY_10faaec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faaec0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaee0; body size 18 bytes.
#line 1 "ENTRY_10faaee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faaee0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaf00; body size 25 bytes.
#line 1 "ENTRY_10faaf00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faaf00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaf20; body size 25 bytes.
#line 1 "ENTRY_10faaf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faaf20(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaf40; body size 18 bytes.
#line 1 "ENTRY_10faaf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faaf40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaf60; body size 25 bytes.
#line 1 "ENTRY_10faaf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faaf60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faaf80; body size 25 bytes.
#line 1 "ENTRY_10faaf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faaf80(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faafa0; body size 22 bytes.
#line 1 "ENTRY_10faafa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faafa0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10faafc0; body size 22 bytes.
#line 1 "ENTRY_10faafc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faafc0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10faafe0; body size 22 bytes.
#line 1 "ENTRY_10faafe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faafe0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fab000; body size 22 bytes.
#line 1 "ENTRY_10fab000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fab000(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fab020; body size 5 bytes.
#line 1 "ENTRY_10fab020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fab020(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fab030; body size 5 bytes.
#line 1 "ENTRY_10fab030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fab030(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fab040; body size 5 bytes.
#line 1 "ENTRY_10fab040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fab040(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fab050; body size 5 bytes.
#line 1 "ENTRY_10fab050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fab050(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fab060; body size 5 bytes.
#line 1 "ENTRY_10fab060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fab060(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fab070; body size 5 bytes.
#line 1 "ENTRY_10fab070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fab070(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fab080; body size 55 bytes.
#line 1 "ENTRY_10fab080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fab080(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fab0d0; body size 55 bytes.
#line 1 "ENTRY_10fab0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fab0d0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fab120; body size 69 bytes.
#line 1 "ENTRY_10fab120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fab120(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fab180; body size 55 bytes.
#line 1 "ENTRY_10fab180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fab180(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fab1d0; body size 78 bytes.
#line 1 "ENTRY_10fab1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fab1d0(int *param_2)
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
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10fab240; body size 3 bytes.
#line 1 "ENTRY_10fab240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab240(void)

{
  return;
}


// Reference entry 10fab250; body size 3 bytes.
#line 1 "ENTRY_10fab250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab250(void)

{
  return;
}


// Reference entry 10fab260; body size 3 bytes.
#line 1 "ENTRY_10fab260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab260(void)

{
  return;
}


// Reference entry 10fab270; body size 3 bytes.
#line 1 "ENTRY_10fab270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab270(void)

{
  return;
}


// Reference entry 10fab280; body size 13 bytes.
#line 1 "ENTRY_10fab280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab280(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab290; body size 13 bytes.
#line 1 "ENTRY_10fab290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab290(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab2a0; body size 13 bytes.
#line 1 "ENTRY_10fab2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab2a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab2b0; body size 13 bytes.
#line 1 "ENTRY_10fab2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab2b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab2c0; body size 13 bytes.
#line 1 "ENTRY_10fab2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab2c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab2d0; body size 13 bytes.
#line 1 "ENTRY_10fab2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab2d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab2e0; body size 13 bytes.
#line 1 "ENTRY_10fab2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab2e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab2f0; body size 13 bytes.
#line 1 "ENTRY_10fab2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab2f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab300; body size 13 bytes.
#line 1 "ENTRY_10fab300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab300(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab310; body size 13 bytes.
#line 1 "ENTRY_10fab310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab310(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab320; body size 13 bytes.
#line 1 "ENTRY_10fab320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab320(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fab330; body size 3 bytes.
#line 1 "ENTRY_10fab330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab330(void)

{
  return;
}


// Reference entry 10fab340; body size 3 bytes.
#line 1 "ENTRY_10fab340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab340(void)

{
  return;
}


// Reference entry 10fab350; body size 3 bytes.
#line 1 "ENTRY_10fab350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab350(void)

{
  return;
}


// Reference entry 10fab360; body size 3 bytes.
#line 1 "ENTRY_10fab360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab360(void)

{
  return;
}


// Reference entry 10fab370; body size 3 bytes.
#line 1 "ENTRY_10fab370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab370(void)

{
  return;
}


// Reference entry 10fab380; body size 3 bytes.
#line 1 "ENTRY_10fab380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab380(void)

{
  return;
}


// Reference entry 10fab390; body size 3 bytes.
#line 1 "ENTRY_10fab390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab390(void)

{
  return;
}


// Reference entry 10fab3a0; body size 3 bytes.
#line 1 "ENTRY_10fab3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab3a0(void)

{
  return;
}


// Reference entry 10fab3b0; body size 18 bytes.
#line 1 "ENTRY_10fab3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fab3b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10fab3d0; body size 18 bytes.
#line 1 "ENTRY_10fab3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fab3d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10fab3f0; body size 18 bytes.
#line 1 "ENTRY_10fab3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fab3f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10fab410; body size 18 bytes.
#line 1 "ENTRY_10fab410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fab410(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10fab8f0; body size 51 bytes.
#line 1 "ENTRY_10fab8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fab8f0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(undefined4*)param_2[1] = (undefined4)((undefined4)(0));
  puVar2 = (undefined4 *)((undefined4 *)*param_2);
  while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    puVar1 = (undefined4 *)((undefined4 *)*puVar2);
    thunk_FUN_10fb01d0();
    thunk_FUN_1148a50e(puVar2,0x20);
    puVar2 = (undefined4 *)(puVar1);
  }
  return;
}


// Reference entry 10faba10; body size 15 bytes.
#line 1 "ENTRY_10faba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10faba10(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10faba30; body size 15 bytes.
#line 1 "ENTRY_10faba30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10faba30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10faba50; body size 15 bytes.
#line 1 "ENTRY_10faba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10faba50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10faba70; body size 15 bytes.
#line 1 "ENTRY_10faba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10faba70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10fabbf0; body size 26 bytes.
#line 1 "ENTRY_10fabbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fabbf0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_10fb01d0();
  thunk_FUN_1148a50e(param_2,0x20);
  return;
}


// Reference entry 10fabcc0; body size 7 bytes.
#line 1 "ENTRY_10fabcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fabcc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fabcd0; body size 7 bytes.
#line 1 "ENTRY_10fabcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fabcd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fabce0; body size 7 bytes.
#line 1 "ENTRY_10fabce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fabce0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fabcf0; body size 7 bytes.
#line 1 "ENTRY_10fabcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fabcf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fabd00; body size 5 bytes.
#line 1 "ENTRY_10fabd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fabd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fabd10; body size 5 bytes.
#line 1 "ENTRY_10fabd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fabd10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fabd20; body size 5 bytes.
#line 1 "ENTRY_10fabd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fabd20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fabd30; body size 5 bytes.
#line 1 "ENTRY_10fabd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fabd30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10faca40; body size 5 bytes.
#line 1 "ENTRY_10faca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10faca40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10faca50; body size 5 bytes.
#line 1 "ENTRY_10faca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10faca50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10faca60; body size 5 bytes.
#line 1 "ENTRY_10faca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10faca60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10faca70; body size 5 bytes.
#line 1 "ENTRY_10faca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10faca70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10faca80; body size 5 bytes.
#line 1 "ENTRY_10faca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10faca80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10faca90; body size 5 bytes.
#line 1 "ENTRY_10faca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10faca90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facaa0; body size 5 bytes.
#line 1 "ENTRY_10facaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facaa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facab0; body size 5 bytes.
#line 1 "ENTRY_10facab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facac0; body size 5 bytes.
#line 1 "ENTRY_10facac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facad0; body size 5 bytes.
#line 1 "ENTRY_10facad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facae0; body size 5 bytes.
#line 1 "ENTRY_10facae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facae0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facaf0; body size 5 bytes.
#line 1 "ENTRY_10facaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facaf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb00; body size 5 bytes.
#line 1 "ENTRY_10facb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb10; body size 5 bytes.
#line 1 "ENTRY_10facb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb20; body size 5 bytes.
#line 1 "ENTRY_10facb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb30; body size 5 bytes.
#line 1 "ENTRY_10facb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb40; body size 5 bytes.
#line 1 "ENTRY_10facb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb50; body size 5 bytes.
#line 1 "ENTRY_10facb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb60; body size 5 bytes.
#line 1 "ENTRY_10facb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb70; body size 5 bytes.
#line 1 "ENTRY_10facb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb80; body size 5 bytes.
#line 1 "ENTRY_10facb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facb90; body size 5 bytes.
#line 1 "ENTRY_10facb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facb90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facba0; body size 5 bytes.
#line 1 "ENTRY_10facba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facba0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facbb0; body size 5 bytes.
#line 1 "ENTRY_10facbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facbb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facbc0; body size 5 bytes.
#line 1 "ENTRY_10facbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facbc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facbd0; body size 5 bytes.
#line 1 "ENTRY_10facbd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facbd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facbe0; body size 5 bytes.
#line 1 "ENTRY_10facbe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facbe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facbf0; body size 5 bytes.
#line 1 "ENTRY_10facbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facbf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facc00; body size 5 bytes.
#line 1 "ENTRY_10facc00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facc00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facc10; body size 5 bytes.
#line 1 "ENTRY_10facc10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facc10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facc20; body size 5 bytes.
#line 1 "ENTRY_10facc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10facc20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10facc30; body size 130 bytes.
#line 1 "ENTRY_10facc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10facc30(int *param_2,undefined4 param_3)
{
  int *param_1 = (int *)this;
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)((int *)*param_2);
  *param_2 = (int)(0);
  param_2[1] = (int)(0);
  ((SCVtbl_1_0*)(param_1))->v();
  piVar2 = (int *)((int *)param_1[2]);
  if ((int *)(piVar2) != (int *)(0x0)) {
    param_1[1] = (int)(0);
    param_1[2] = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  param_1[1] = (int)((int)piVar1);
  if ((int *)(piVar1) == (int *)(0x0)) {
    param_1[2] = (int)(0);
  }
  else {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[2] = (int)(iVar3);
    if ((int *)param_1[1] != (int *)(((0x0)))) {
      ((SCVtbl_5_1*)((int *)param_1[1]))->v((int)(param_3));
      return (int)(param_1[1]);
    }
  }
  thunk_FUN_112af4e0("SCLibrary",1,"((SCOpRefBase *)(0))->int_start()  - attempt to run NULL op");
  return (int)(param_1[1]);
}


// Reference entry 10facce0; body size 43 bytes.
#line 1 "ENTRY_10facce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10facce0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  return;
}


// Reference entry 10facd20; body size 43 bytes.
#line 1 "ENTRY_10facd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10facd20(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  return;
}


// Reference entry 10facd60; body size 78 bytes.
#line 1 "ENTRY_10facd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10facd60(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  return;
}


// Reference entry 10facdd0; body size 43 bytes.
#line 1 "ENTRY_10facdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10facdd0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  return;
}


// Reference entry 10facf50; body size 12 bytes.
#line 1 "ENTRY_10facf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10facf50(undefined4 param_1,int param_2)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_2 + 0x14), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_2 + 0x10) = (undefined4)(0);
    *(undefined4*)(param_2 + 0x14) = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }

  ((SCStr *)((SCStr *)(param_2 + 0xc)))->int_release();
  *(undefined4*)(param_2 + 0xc) = (undefined4)(0);
  piVar1 = (int *)(*(int **)(param_2 + 8), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_2 + 4) = (undefined4)(0);
    *(undefined4*)(param_2 + 8) = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }

  return;

 } catch (...) { }
}


// Reference entry 10fad2c0; body size 173 bytes.
#line 1 "ENTRY_10fad2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fad2c0(int *param_2,int *param_3)
{
  int param_1 = (int )this;
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = (uint)(*(uint *)(param_1 + 0x20) &
          ((((*(byte *)(param_3 + 2) ^ 0x811c9dc5) * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 9)) * 0x1000193 ^ (uint)*(byte *)((int)param_3 + 10)) * 0x1000193 ^
          (uint)*(byte *)((int)param_3 + 0xb)) * 0x1000193);
  iVar1 = (int)(*(int *)(param_1 + 0x14));
  piVar2 = (int *)(*(int **)(iVar1 + uVar4 * 8), 0);
  if (*(int **)(iVar1 + 4 + uVar4 * 8) == (int *)((param_3))) {
    if ((int *)(piVar2) == (int *)(param_3)) {
      uVar3 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
      *(undefined4*)(iVar1 + uVar4 * 8) = (undefined4)(uVar3);
      *(undefined4*)(iVar1 + 4 + uVar4 * 8) = (undefined4)(uVar3);
    }
    else {
      *(int*)(iVar1 + 4 + uVar4 * 8) = (int)(param_3[1]);
    }
  }
  else if ((int *)(piVar2) == (int *)(param_3)) {
    *(int*)(iVar1 + uVar4 * 8) = (int)(*param_3);
  }
  iVar1 = (int)(*param_3);
  *(int*)(param_1 + 0x10) = (int)(*(int *)(param_1 + 0x10) + -1);
  *(int*)param_3[1] = (int)((int)(iVar1));
  *(int*)(iVar1 + 4) = (int)(param_3[1]);
  thunk_FUN_10fb01d0();
  thunk_FUN_1148a50e(param_3,0x20);
  *param_2 = (int)(iVar1);
  return;
}


// Reference entry 10fad3a0; body size 15 bytes.
#line 1 "ENTRY_10fad3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad3a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10fad3c0; body size 15 bytes.
#line 1 "ENTRY_10fad3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad3c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10fad3e0; body size 15 bytes.
#line 1 "ENTRY_10fad3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad3e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10fad400; body size 15 bytes.
#line 1 "ENTRY_10fad400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad400(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10fad820; body size 5 bytes.
#line 1 "ENTRY_10fad820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad830; body size 5 bytes.
#line 1 "ENTRY_10fad830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad840; body size 5 bytes.
#line 1 "ENTRY_10fad840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad850; body size 5 bytes.
#line 1 "ENTRY_10fad850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad860; body size 5 bytes.
#line 1 "ENTRY_10fad860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad870; body size 5 bytes.
#line 1 "ENTRY_10fad870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad880; body size 5 bytes.
#line 1 "ENTRY_10fad880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad890; body size 5 bytes.
#line 1 "ENTRY_10fad890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad8a0; body size 5 bytes.
#line 1 "ENTRY_10fad8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad8a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad8b0; body size 5 bytes.
#line 1 "ENTRY_10fad8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad8b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad8c0; body size 5 bytes.
#line 1 "ENTRY_10fad8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad8d0; body size 5 bytes.
#line 1 "ENTRY_10fad8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad8d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad8e0; body size 5 bytes.
#line 1 "ENTRY_10fad8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad8f0; body size 5 bytes.
#line 1 "ENTRY_10fad8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad900; body size 5 bytes.
#line 1 "ENTRY_10fad900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad910; body size 5 bytes.
#line 1 "ENTRY_10fad910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad920; body size 5 bytes.
#line 1 "ENTRY_10fad920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad930; body size 5 bytes.
#line 1 "ENTRY_10fad930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad940; body size 5 bytes.
#line 1 "ENTRY_10fad940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fad940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fad950; body size 30 bytes.
#line 1 "ENTRY_10fad950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fad950(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10fad980; body size 30 bytes.
#line 1 "ENTRY_10fad980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fad980(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10fad9b0; body size 30 bytes.
#line 1 "ENTRY_10fad9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fad9b0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10fad9e0; body size 30 bytes.
#line 1 "ENTRY_10fad9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fad9e0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (;(undefined4 *)( param_1) != (undefined4 *)(param_2); param_1 = param_1 + 1) {
    *param_1 = (undefined4)(*param_3);
  }
  return;
}


// Reference entry 10fadce0; body size 16 bytes.
#line 1 "ENTRY_10fadce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fadce0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fadd00; body size 32 bytes.
#line 1 "ENTRY_10fadd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fadd00(undefined4 *param_2)
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


// Reference entry 10fadd70; body size 16 bytes.
#line 1 "ENTRY_10fadd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fadd70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fadd90; body size 32 bytes.
#line 1 "ENTRY_10fadd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fadd90(undefined4 *param_2)
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


// Reference entry 10fade00; body size 16 bytes.
#line 1 "ENTRY_10fade00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fade00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fade20; body size 32 bytes.
#line 1 "ENTRY_10fade20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fade20(undefined4 *param_2)
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


// Reference entry 10fade90; body size 16 bytes.
#line 1 "ENTRY_10fade90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fade90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fadeb0; body size 26 bytes.
#line 1 "ENTRY_10fadeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fadeb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10faded0; body size 18 bytes.
#line 1 "ENTRY_10faded0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faded0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fadef0; body size 18 bytes.
#line 1 "ENTRY_10fadef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fadef0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fadf10; body size 18 bytes.
#line 1 "ENTRY_10fadf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fadf10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fadf30; body size 18 bytes.
#line 1 "ENTRY_10fadf30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fadf30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae1f0; body size 11 bytes.
#line 1 "ENTRY_10fae1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae1f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae200; body size 11 bytes.
#line 1 "ENTRY_10fae200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae200(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae210; body size 11 bytes.
#line 1 "ENTRY_10fae210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae210(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae220; body size 11 bytes.
#line 1 "ENTRY_10fae220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae220(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae230; body size 11 bytes.
#line 1 "ENTRY_10fae230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae230(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae240; body size 11 bytes.
#line 1 "ENTRY_10fae240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae240(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae250; body size 11 bytes.
#line 1 "ENTRY_10fae250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae250(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae260; body size 11 bytes.
#line 1 "ENTRY_10fae260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae260(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae270; body size 11 bytes.
#line 1 "ENTRY_10fae270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae270(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae280; body size 11 bytes.
#line 1 "ENTRY_10fae280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae280(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae290; body size 11 bytes.
#line 1 "ENTRY_10fae290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae290(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae2a0; body size 11 bytes.
#line 1 "ENTRY_10fae2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae2a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae2b0; body size 11 bytes.
#line 1 "ENTRY_10fae2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae2b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae2c0; body size 11 bytes.
#line 1 "ENTRY_10fae2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae2c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae2d0; body size 11 bytes.
#line 1 "ENTRY_10fae2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae2d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae2e0; body size 11 bytes.
#line 1 "ENTRY_10fae2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae2e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae2f0; body size 16 bytes.
#line 1 "ENTRY_10fae2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fae2f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae310; body size 16 bytes.
#line 1 "ENTRY_10fae310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fae310(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae330; body size 16 bytes.
#line 1 "ENTRY_10fae330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fae330(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae350; body size 23 bytes.
#line 1 "ENTRY_10fae350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::m_FUN_10fae350(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 10fae370; body size 23 bytes.
#line 1 "ENTRY_10fae370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::m_FUN_10fae370(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 10fae390; body size 23 bytes.
#line 1 "ENTRY_10fae390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined8 * __thiscall Recovered_Bulk::m_FUN_10fae390(undefined8 *param_2)
{
  undefined8 *param_1 = (undefined8 *)this;
  *param_1 = (undefined8)(*param_2);
  *(undefined4*)(param_1 + 1) = (undefined4)(*(undefined4 *)(param_2 + 1));
  return (undefined8 *)(param_1);
}


// Reference entry 10fae3b0; body size 14 bytes.
#line 1 "ENTRY_10fae3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae3b0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae3d0; body size 14 bytes.
#line 1 "ENTRY_10fae3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae3d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae3f0; body size 14 bytes.
#line 1 "ENTRY_10fae3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae3f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae410; body size 14 bytes.
#line 1 "ENTRY_10fae410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fae410(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae430; body size 23 bytes.
#line 1 "ENTRY_10fae430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fae430(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae450; body size 23 bytes.
#line 1 "ENTRY_10fae450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fae450(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae470; body size 23 bytes.
#line 1 "ENTRY_10fae470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fae470(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae490; body size 3 bytes.
#line 1 "ENTRY_10fae490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fae490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fae4a0; body size 3 bytes.
#line 1 "ENTRY_10fae4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fae4a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fae4b0; body size 3 bytes.
#line 1 "ENTRY_10fae4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fae4b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fae8b0; body size 35 bytes.
#line 1 "ENTRY_10fae8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fae8b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fae970; body size 35 bytes.
#line 1 "ENTRY_10fae970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fae970(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faea50; body size 42 bytes.
#line 1 "ENTRY_10faea50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faea50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faea90; body size 35 bytes.
#line 1 "ENTRY_10faea90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10faea90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faecf0; body size 26 bytes.
#line 1 "ENTRY_10faecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faecf0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestAllTestsFailedState);
  return (undefined4 *)(param_1);
}


// Reference entry 10faed10; body size 66 bytes.
#line 1 "ENTRY_10faed10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faed10(int param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestCompleteState);
  thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",param_3);
  *(undefined4*)(param_2 + 0x94) = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10faed70; body size 26 bytes.
#line 1 "ENTRY_10faed70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faed70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestErrorState);
  return (undefined4 *)(param_1);
}


// Reference entry 10faed90; body size 33 bytes.
#line 1 "ENTRY_10faed90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faed90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestInitState);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faefa0; body size 68 bytes.
#line 1 "ENTRY_10faefa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faefa0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestStartWifiState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestStartWifiState);
  param_1[6] = (undefined4)(0);
  param_1[7] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faf2f0; body size 298 bytes.
#line 1 "ENTRY_10faf2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faf2f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestWifiSubmittingState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestWifiSubmittingState);
  param_1[6] = (undefined4)(0);
  *(undefined1*)(param_1 + 7) = (undefined1)(0);
  param_1[8] = (undefined4)(0);
  param_1[9] = (undefined4)(0);
  param_1[0xb] = (undefined4)(0);
  param_1[0xc] = (undefined4)(0);
  param_1[0xe] = (undefined4)(0);
  param_1[0xf] = (undefined4)(0);
  param_1[10] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0xd] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x19] = (undefined4)(0);
  param_1[0x23] = (undefined4)(0);
  param_1[0x25] = (undefined4)(0);
  param_1[0x26] = (undefined4)(0);
  param_1[0x28] = (undefined4)(0);
  param_1[0x29] = (undefined4)(0);
  param_1[0x24] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x27] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x33] = (undefined4)(0);
  param_1[0x3d] = (undefined4)(0);
  param_1[0x3f] = (undefined4)(0);
  param_1[0x40] = (undefined4)(0);
  param_1[0x42] = (undefined4)(0);
  param_1[0x43] = (undefined4)(0);
  param_1[0x3e] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x41] = (undefined4)((uint)&ghidra_vftable_SCOpRef);
  param_1[0x4d] = (undefined4)(0);
  param_1[0x57] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10faf5c0; body size 26 bytes.
#line 1 "ENTRY_10faf5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faf5c0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestWizardState);
  return (undefined4 *)(param_1);
}


// Reference entry 10faf5e0; body size 36 bytes.
#line 1 "ENTRY_10faf5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faf5e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  thunk_FUN_1025f580((int)(param_2),(int)(param_3),(int)(0));
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPasswordInput);
  return (undefined4 *)(param_1);
}


// Reference entry 10faf610; body size 11 bytes.
#line 1 "ENTRY_10faf610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faf610(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10faf620; body size 11 bytes.
#line 1 "ENTRY_10faf620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faf620(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10faf630; body size 11 bytes.
#line 1 "ENTRY_10faf630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faf630(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10faf640; body size 11 bytes.
#line 1 "ENTRY_10faf640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10faf640(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10faf660; body size 5 bytes.
#line 1 "ENTRY_10faf660"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10faf660(int param_1)

{ __asm jmp FUN_1007abee }


// Reference entry 10faf7d0; body size 7 bytes.
#line 1 "ENTRY_10faf7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10faf7d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fafd90; body size 3 bytes.
#line 1 "ENTRY_10fafd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fafd90(void)

{
  return;
}


// Reference entry 10fafda0; body size 3 bytes.
#line 1 "ENTRY_10fafda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fafda0(void)

{
  return;
}


// Reference entry 10fafdb0; body size 3 bytes.
#line 1 "ENTRY_10fafdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fafdb0(void)

{
  return;
}


// Reference entry 10fafdc0; body size 3 bytes.
#line 1 "ENTRY_10fafdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fafdc0(void)

{
  return;
}


// Reference entry 10faffb0; body size 8 bytes.
#line 1 "ENTRY_10faffb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10faffb0(int param_1)

{
 try {
  int *piVar1;
  uint uVar2;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;

  uVar2 = (uint)(DAT_12126b84);

  piVar1 = (int *)(*(int **)(param_1 + 0x14), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
    ((SCVtbl_2_1*)(piVar1))->v((int)(uVar2));
  }

  ((SCStr *)((SCStr *)(param_1 + 0xc)))->int_release();
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  piVar1 = (int *)(*(int **)(param_1 + 8), 0);

  if ((int *)(piVar1) != (int *)(0x0)) {
    *(undefined4*)(param_1 + 4) = (undefined4)(0);
    *(undefined4*)(param_1 + 8) = (undefined4)(0);
    ((SCVtbl_2_0*)(piVar1))->v();
  }

  return;

 } catch (...) { }
}


// Reference entry 10fb0060; body size 5 bytes.
#line 1 "ENTRY_10fb0060"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0060(int param_1)

{ __asm jmp FUN_1000d58f }


// Reference entry 10fb0070; body size 5 bytes.
#line 1 "ENTRY_10fb0070"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0070(int param_1)

{ __asm jmp FUN_1007abee }


// Reference entry 10fb0080; body size 5 bytes.
#line 1 "ENTRY_10fb0080"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0080(int param_1)

{ __asm jmp FUN_100514f6 }


// Reference entry 10fb0410; body size 7 bytes.
#line 1 "ENTRY_10fb0410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0410(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fb0420; body size 7 bytes.
#line 1 "ENTRY_10fb0420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0420(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fb0430; body size 7 bytes.
#line 1 "ENTRY_10fb0430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0430(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fb0440; body size 7 bytes.
#line 1 "ENTRY_10fb0440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fb0a10; body size 72 bytes.
#line 1 "ENTRY_10fb0a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0a10(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    piStack_4 = (int *)(param_1);
    thunk_FUN_10fab730(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 0x10) = (undefined4)(0);
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_10fad420(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&piStack_4);
  }
  return;
}


// Reference entry 10fb0a70; body size 72 bytes.
#line 1 "ENTRY_10fb0a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0a70(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    piStack_4 = (int *)(param_1);
    thunk_FUN_10fab810(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 0x10) = (undefined4)(0);
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_10fad4a0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&piStack_4);
  }
  return;
}


// Reference entry 10fb0ad0; body size 11 bytes.
#line 1 "ENTRY_10fb0ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0ad0(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iStack_4;
  
  iVar1 = (int)(*param_1);
  if (iVar1 == 0) {
    return;
  }
  if (*(int *)(iVar1 + 0x10) != 0) {
    puVar2 = (undefined4 *)(*(undefined4 **)(iVar1 + 0xc), 0);
    *(undefined4*)puVar2[1] = (undefined4)((undefined4)(0));
    iStack_4 = (int)(iVar1);
    puVar2 = (undefined4 *)((undefined4 *)*puVar2);
    while ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
      puVar3 = (undefined4 *)((undefined4 *)*puVar2);
      thunk_FUN_10fb01d0();
      thunk_FUN_1148a50e(puVar2,0x20);
      puVar2 = (undefined4 *)(puVar3);
    }
    *(undefined4 *)*(undefined4*)(iVar1 + 0xc) = (undefined4)(*(undefined4 *)(iVar1 + 0xc));
    *(int*)(*(int *)(iVar1 + 0xc) + 4) = (int)(*(int *)(iVar1 + 0xc));
    *(undefined4*)(iVar1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*(int *)(iVar1 + 0xc));
    thunk_FUN_10fad520(*(undefined4 *)(iVar1 + 0x14),*(undefined4 *)(iVar1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10fb0ae0; body size 72 bytes.
#line 1 "ENTRY_10fb0ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb0ae0(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piStack_4;
  
  iVar2 = (int)(*param_1);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x10) != 0)) {
    piVar1 = (int *)((int *)(iVar2 + 0xc));
    piStack_4 = (int *)(param_1);
    thunk_FUN_10fab930(piVar1,*(undefined4 *)(iVar2 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(iVar2 + 0x10) = (undefined4)(0);
    piStack_4 = (int *)((int *)*piVar1);
    thunk_FUN_10fad5a0(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),&piStack_4);
  }
  return;
}


// Reference entry 10fb0b40; body size 65 bytes.
#line 1 "ENTRY_10fb0b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb0b40(int *param_2)
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


// Reference entry 10fb0ba0; body size 65 bytes.
#line 1 "ENTRY_10fb0ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb0ba0(int *param_2)
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


// Reference entry 10fb0c00; body size 65 bytes.
#line 1 "ENTRY_10fb0c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb0c00(int *param_2)
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


// Reference entry 10fb0c60; body size 120 bytes.
#line 1 "ENTRY_10fb0c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb0c60(int *param_2)
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


// Reference entry 10fb0d00; body size 120 bytes.
#line 1 "ENTRY_10fb0d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb0d00(int *param_2)
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


// Reference entry 10fb0e60; body size 120 bytes.
#line 1 "ENTRY_10fb0e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb0e60(int *param_2)
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


// Reference entry 10fb0f00; body size 14 bytes.
#line 1 "ENTRY_10fb0f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb0f00(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10fb0f20; body size 14 bytes.
#line 1 "ENTRY_10fb0f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb0f20(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10fb0f40; body size 14 bytes.
#line 1 "ENTRY_10fb0f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb0f40(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10fb0f60; body size 14 bytes.
#line 1 "ENTRY_10fb0f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb0f60(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10fb0f80; body size 14 bytes.
#line 1 "ENTRY_10fb0f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb0f80(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10fb0fa0; body size 14 bytes.
#line 1 "ENTRY_10fb0fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb0fa0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10fb0fc0; body size 14 bytes.
#line 1 "ENTRY_10fb0fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb0fc0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10fb0fe0; body size 14 bytes.
#line 1 "ENTRY_10fb0fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb0fe0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10fb1000; body size 14 bytes.
#line 1 "ENTRY_10fb1000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb1000(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10fb1020; body size 14 bytes.
#line 1 "ENTRY_10fb1020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb1020(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10fb1040; body size 14 bytes.
#line 1 "ENTRY_10fb1040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb1040(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10fb1060; body size 14 bytes.
#line 1 "ENTRY_10fb1060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb1060(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10fb1080; body size 14 bytes.
#line 1 "ENTRY_10fb1080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb1080(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10fb10a0; body size 14 bytes.
#line 1 "ENTRY_10fb10a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb10a0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10fb10c0; body size 14 bytes.
#line 1 "ENTRY_10fb10c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb10c0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10fb10e0; body size 14 bytes.
#line 1 "ENTRY_10fb10e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fb10e0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10fb11f0; body size 7 bytes.
#line 1 "ENTRY_10fb11f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb11f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fb1200; body size 7 bytes.
#line 1 "ENTRY_10fb1200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb1200(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fb1210; body size 7 bytes.
#line 1 "ENTRY_10fb1210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb1210(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fb1220; body size 7 bytes.
#line 1 "ENTRY_10fb1220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb1220(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fb1230; body size 3 bytes.
#line 1 "ENTRY_10fb1230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb1230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fb1240; body size 3 bytes.
#line 1 "ENTRY_10fb1240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb1240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fb1250; body size 3 bytes.
#line 1 "ENTRY_10fb1250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb1250(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fb1260; body size 6 bytes.
#line 1 "ENTRY_10fb1260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1260(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1270; body size 6 bytes.
#line 1 "ENTRY_10fb1270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1270(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1280; body size 6 bytes.
#line 1 "ENTRY_10fb1280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1280(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1290; body size 6 bytes.
#line 1 "ENTRY_10fb1290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1290(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb12a0; body size 6 bytes.
#line 1 "ENTRY_10fb12a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb12a0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb12b0; body size 6 bytes.
#line 1 "ENTRY_10fb12b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb12b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb12c0; body size 6 bytes.
#line 1 "ENTRY_10fb12c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb12c0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb12d0; body size 6 bytes.
#line 1 "ENTRY_10fb12d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb12d0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb12e0; body size 6 bytes.
#line 1 "ENTRY_10fb12e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb12e0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb12f0; body size 6 bytes.
#line 1 "ENTRY_10fb12f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb12f0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1300; body size 6 bytes.
#line 1 "ENTRY_10fb1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1300(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1310; body size 6 bytes.
#line 1 "ENTRY_10fb1310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1310(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1320; body size 6 bytes.
#line 1 "ENTRY_10fb1320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1320(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1330; body size 6 bytes.
#line 1 "ENTRY_10fb1330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1330(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1340; body size 6 bytes.
#line 1 "ENTRY_10fb1340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1340(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1350; body size 6 bytes.
#line 1 "ENTRY_10fb1350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1350(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1360; body size 6 bytes.
#line 1 "ENTRY_10fb1360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1360(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1370; body size 6 bytes.
#line 1 "ENTRY_10fb1370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1370(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1380; body size 6 bytes.
#line 1 "ENTRY_10fb1380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1380(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb1390; body size 6 bytes.
#line 1 "ENTRY_10fb1390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb1390(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb13a0; body size 6 bytes.
#line 1 "ENTRY_10fb13a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb13a0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb13b0; body size 6 bytes.
#line 1 "ENTRY_10fb13b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb13b0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10fb13c0; body size 15 bytes.
#line 1 "ENTRY_10fb13c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb13c0(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_2 = (undefined4)(puVar1);
  *param_1 = (undefined4)(*puVar1);
  return;
}


// Reference entry 10fb13e0; body size 9 bytes.
#line 1 "ENTRY_10fb13e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb13e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb13f0; body size 15 bytes.
#line 1 "ENTRY_10fb13f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb13f0(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_2 = (undefined4)(puVar1);
  *param_1 = (undefined4)(*puVar1);
  return;
}


// Reference entry 10fb1410; body size 9 bytes.
#line 1 "ENTRY_10fb1410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb1410(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1420; body size 15 bytes.
#line 1 "ENTRY_10fb1420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb1420(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)*param_1);
  *param_2 = (undefined4)(puVar1);
  *param_1 = (undefined4)(*puVar1);
  return;
}


// Reference entry 10fb1440; body size 9 bytes.
#line 1 "ENTRY_10fb1440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb1440(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1450; body size 9 bytes.
#line 1 "ENTRY_10fb1450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb1450(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1460; body size 9 bytes.
#line 1 "ENTRY_10fb1460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb1460(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1470; body size 9 bytes.
#line 1 "ENTRY_10fb1470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb1470(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1480; body size 9 bytes.
#line 1 "ENTRY_10fb1480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb1480(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb1490; body size 9 bytes.
#line 1 "ENTRY_10fb1490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb1490(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb14a0; body size 9 bytes.
#line 1 "ENTRY_10fb14a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb14a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb14b0; body size 9 bytes.
#line 1 "ENTRY_10fb14b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb14b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb14c0; body size 9 bytes.
#line 1 "ENTRY_10fb14c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb14c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb14d0; body size 9 bytes.
#line 1 "ENTRY_10fb14d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb14d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fb14e0; body size 10 bytes.
#line 1 "ENTRY_10fb14e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10fb14e0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10fb14f0; body size 10 bytes.
#line 1 "ENTRY_10fb14f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10fb14f0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10fb1500; body size 10 bytes.
#line 1 "ENTRY_10fb1500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10fb1500(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10fb1510; body size 10 bytes.
#line 1 "ENTRY_10fb1510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10fb1510(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10fb2090; body size 22 bytes.
#line 1 "ENTRY_10fb2090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb2090(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10fb20b0; body size 22 bytes.
#line 1 "ENTRY_10fb20b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb20b0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x1c), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10fb20d0; body size 22 bytes.
#line 1 "ENTRY_10fb20d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb20d0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x20), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10fb25f0; body size 20 bytes.
#line 1 "ENTRY_10fb25f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb25f0(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10fb2610; body size 20 bytes.
#line 1 "ENTRY_10fb2610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb2610(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10fb2630; body size 20 bytes.
#line 1 "ENTRY_10fb2630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb2630(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0x7ffffff) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10fb2650; body size 20 bytes.
#line 1 "ENTRY_10fb2650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb2650(int param_1)

{
  if (*(int *)(param_1 + 0x10) != 0x9249249) {
    return;
  }
                    
  std::_Xlength_error("unordered_map/set too long");
}


// Reference entry 10fb2670; body size 67 bytes.
#line 1 "ENTRY_10fb2670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb2670(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) + (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10fb26d0; body size 67 bytes.
#line 1 "ENTRY_10fb26d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb26d0(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) + (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10fb2730; body size 67 bytes.
#line 1 "ENTRY_10fb2730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb2730(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) + (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10fb2790; body size 67 bytes.
#line 1 "ENTRY_10fb2790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb2790(int param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (int)(*(int *)(param_1 + 0x10) + 1);
  fVar2 = (float)((float)((double)iVar1 + (double)(uint)(&DAT_11880fb0)[-(iVar1 >> 0x1f)]) /
          (float)((double)*(int *)(param_1 + 0x24) + (double)(uint)(&DAT_11880fb0)[-(*(int *)(param_1 + 0x24) >> 0x1f)]));
  return (bool)(*(float *)(param_1 + 8) <= (float)(fVar2) &&(float)( fVar2) != *(float *)(param_1 + 8));
}


// Reference entry 10fb2ab0; body size 54 bytes.
#line 1 "ENTRY_10fb2ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb2ab0(int *param_2,int param_3)
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


// Reference entry 10fb2b00; body size 54 bytes.
#line 1 "ENTRY_10fb2b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb2b00(int *param_2,int param_3)
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


// Reference entry 10fb2b50; body size 54 bytes.
#line 1 "ENTRY_10fb2b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb2b50(int *param_2,int param_3)
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


// Reference entry 10fb2ba0; body size 54 bytes.
#line 1 "ENTRY_10fb2ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb2ba0(int *param_2,int param_3)
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


// Reference entry 10fb32f0; body size 3 bytes.
#line 1 "ENTRY_10fb32f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb32f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3300; body size 3 bytes.
#line 1 "ENTRY_10fb3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3310; body size 3 bytes.
#line 1 "ENTRY_10fb3310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3320; body size 3 bytes.
#line 1 "ENTRY_10fb3320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3330; body size 3 bytes.
#line 1 "ENTRY_10fb3330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3340; body size 3 bytes.
#line 1 "ENTRY_10fb3340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3350; body size 3 bytes.
#line 1 "ENTRY_10fb3350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3360; body size 3 bytes.
#line 1 "ENTRY_10fb3360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3370; body size 3 bytes.
#line 1 "ENTRY_10fb3370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3380; body size 3 bytes.
#line 1 "ENTRY_10fb3380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3390; body size 3 bytes.
#line 1 "ENTRY_10fb3390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb33a0; body size 3 bytes.
#line 1 "ENTRY_10fb33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb33a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb33b0; body size 3 bytes.
#line 1 "ENTRY_10fb33b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb33b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb33c0; body size 3 bytes.
#line 1 "ENTRY_10fb33c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb33c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb33d0; body size 3 bytes.
#line 1 "ENTRY_10fb33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb33d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb33e0; body size 3 bytes.
#line 1 "ENTRY_10fb33e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb33e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb33f0; body size 3 bytes.
#line 1 "ENTRY_10fb33f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb33f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3400; body size 3 bytes.
#line 1 "ENTRY_10fb3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3410; body size 3 bytes.
#line 1 "ENTRY_10fb3410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3420; body size 3 bytes.
#line 1 "ENTRY_10fb3420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3430; body size 3 bytes.
#line 1 "ENTRY_10fb3430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3440; body size 3 bytes.
#line 1 "ENTRY_10fb3440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3450; body size 3 bytes.
#line 1 "ENTRY_10fb3450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3460; body size 3 bytes.
#line 1 "ENTRY_10fb3460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fb3470; body size 92 bytes.
#line 1 "ENTRY_10fb3470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb3470(uint param_2,int param_3,int *param_4)
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


// Reference entry 10fb34f0; body size 92 bytes.
#line 1 "ENTRY_10fb34f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb34f0(uint param_2,int param_3,int *param_4)
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


// Reference entry 10fb3570; body size 92 bytes.
#line 1 "ENTRY_10fb3570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb3570(uint param_2,int param_3,int *param_4)
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


// Reference entry 10fb35f0; body size 92 bytes.
#line 1 "ENTRY_10fb35f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fb35f0(uint param_2,int param_3,int *param_4)
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


// Reference entry 10fb3670; body size 13 bytes.
#line 1 "ENTRY_10fb3670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb3670(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10fb3680; body size 13 bytes.
#line 1 "ENTRY_10fb3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb3680(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10fb3690; body size 13 bytes.
#line 1 "ENTRY_10fb3690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb3690(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10fb36a0; body size 13 bytes.
#line 1 "ENTRY_10fb36a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb36a0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10fb36b0; body size 4 bytes.
#line 1 "ENTRY_10fb36b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb36b0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10fb36c0; body size 4 bytes.
#line 1 "ENTRY_10fb36c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb36c0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10fb36d0; body size 4 bytes.
#line 1 "ENTRY_10fb36d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb36d0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10fb36e0; body size 4 bytes.
#line 1 "ENTRY_10fb36e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb36e0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10fb36f0; body size 4 bytes.
#line 1 "ENTRY_10fb36f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb36f0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10fb3700; body size 4 bytes.
#line 1 "ENTRY_10fb3700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb3700(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10fb3710; body size 4 bytes.
#line 1 "ENTRY_10fb3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fb3710(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10fb38e0; body size 3 bytes.
#line 1 "ENTRY_10fb38e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb38e0(void)

{
  return;
}


// Reference entry 10fb38f0; body size 3 bytes.
#line 1 "ENTRY_10fb38f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb38f0(void)

{
  return;
}


// Reference entry 10fb3900; body size 3 bytes.
#line 1 "ENTRY_10fb3900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb3900(void)

{
  return;
}


// Reference entry 10fb3910; body size 3 bytes.
#line 1 "ENTRY_10fb3910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb3910(void)

{
  return;
}


// Reference entry 10fb3920; body size 3 bytes.
#line 1 "ENTRY_10fb3920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb3920(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10fb3930; body size 3 bytes.
#line 1 "ENTRY_10fb3930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb3930(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10fb3940; body size 3 bytes.
#line 1 "ENTRY_10fb3940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb3940(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10fb3950; body size 3 bytes.
#line 1 "ENTRY_10fb3950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb3950(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10fb3c20; body size 11 bytes.
#line 1 "ENTRY_10fb3c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3c20(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10fb3c30; body size 11 bytes.
#line 1 "ENTRY_10fb3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3c30(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10fb3c40; body size 11 bytes.
#line 1 "ENTRY_10fb3c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3c40(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10fb3c50; body size 11 bytes.
#line 1 "ENTRY_10fb3c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb3c50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10fb3c60; body size 6 bytes.
#line 1 "ENTRY_10fb3c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb3c60(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10fb3c70; body size 6 bytes.
#line 1 "ENTRY_10fb3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb3c70(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10fb3c80; body size 6 bytes.
#line 1 "ENTRY_10fb3c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb3c80(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10fb3c90; body size 6 bytes.
#line 1 "ENTRY_10fb3c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb3c90(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10fb3e90; body size 14 bytes.
#line 1 "ENTRY_10fb3e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3e90(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10fb3eb0; body size 14 bytes.
#line 1 "ENTRY_10fb3eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3eb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10fb3ed0; body size 14 bytes.
#line 1 "ENTRY_10fb3ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3ed0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10fb3ef0; body size 14 bytes.
#line 1 "ENTRY_10fb3ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3ef0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10fb3f10; body size 13 bytes.
#line 1 "ENTRY_10fb3f10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3f10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10fb3f20; body size 13 bytes.
#line 1 "ENTRY_10fb3f20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3f20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10fb3f30; body size 13 bytes.
#line 1 "ENTRY_10fb3f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3f30(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10fb3f40; body size 13 bytes.
#line 1 "ENTRY_10fb3f40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3f40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10fb3f50; body size 12 bytes.
#line 1 "ENTRY_10fb3f50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3f50(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10fb3f60; body size 12 bytes.
#line 1 "ENTRY_10fb3f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3f60(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10fb3f70; body size 12 bytes.
#line 1 "ENTRY_10fb3f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3f70(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10fb3f80; body size 12 bytes.
#line 1 "ENTRY_10fb3f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3f80(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10fb3f90; body size 11 bytes.
#line 1 "ENTRY_10fb3f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3f90(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fb3fa0; body size 11 bytes.
#line 1 "ENTRY_10fb3fa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3fa0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fb3fb0; body size 11 bytes.
#line 1 "ENTRY_10fb3fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3fb0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fb3fc0; body size 11 bytes.
#line 1 "ENTRY_10fb3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb3fc0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fb44d0; body size 48 bytes.
#line 1 "ENTRY_10fb44d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10fb44d0(int *param_2)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -1);
  *(int*)param_2[1] = (int)((int)(iVar1));
  *(int*)(iVar1 + 4) = (int)(param_2[1]);
  thunk_FUN_10fb01d0();
  thunk_FUN_1148a50e(param_2,0x20);
  return (int)(iVar1);
}


// Reference entry 10fb45e0; body size 43 bytes.
#line 1 "ENTRY_10fb45e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb45e0(int param_1,int param_2,int param_3)

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


// Reference entry 10fb4620; body size 43 bytes.
#line 1 "ENTRY_10fb4620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb4620(int param_1,int param_2,int param_3)

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


// Reference entry 10fb4660; body size 43 bytes.
#line 1 "ENTRY_10fb4660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb4660(int param_1,int param_2,int param_3)

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


// Reference entry 10fb46a0; body size 43 bytes.
#line 1 "ENTRY_10fb46a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb46a0(int param_1,int param_2,int param_3)

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


// Reference entry 10fb6390; body size 97 bytes.
#line 1 "ENTRY_10fb6390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fb6390(uint param_1)

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


// Reference entry 10fb6410; body size 97 bytes.
#line 1 "ENTRY_10fb6410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fb6410(uint param_1)

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


// Reference entry 10fb6490; body size 87 bytes.
#line 1 "ENTRY_10fb6490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fb6490(uint param_1)

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


// Reference entry 10fb6500; body size 97 bytes.
#line 1 "ENTRY_10fb6500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fb6500(uint param_1)

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


// Reference entry 10fb6580; body size 87 bytes.
#line 1 "ENTRY_10fb6580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fb6580(uint param_1)

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


// Reference entry 10fb65f0; body size 87 bytes.
#line 1 "ENTRY_10fb65f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fb65f0(uint param_1)

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


// Reference entry 10fb6660; body size 87 bytes.
#line 1 "ENTRY_10fb6660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fb6660(uint param_1)

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


// Reference entry 10fb66d0; body size 87 bytes.
#line 1 "ENTRY_10fb66d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fb66d0(uint param_1)

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


// Reference entry 10fb6750; body size 14 bytes.
#line 1 "ENTRY_10fb6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb6750(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10fb6770; body size 14 bytes.
#line 1 "ENTRY_10fb6770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb6770(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10fb6790; body size 14 bytes.
#line 1 "ENTRY_10fb6790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb6790(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10fb67b0; body size 14 bytes.
#line 1 "ENTRY_10fb67b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb67b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(**(undefined4 **)(param_1 + 0xc), 0);
  return;
}


// Reference entry 10fb67d0; body size 13 bytes.
#line 1 "ENTRY_10fb67d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb67d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10fb67e0; body size 13 bytes.
#line 1 "ENTRY_10fb67e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb67e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10fb67f0; body size 13 bytes.
#line 1 "ENTRY_10fb67f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb67f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10fb6800; body size 13 bytes.
#line 1 "ENTRY_10fb6800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb6800(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10fb6810; body size 68 bytes.
#line 1 "ENTRY_10fb6810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10fb6810(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10fb6870; body size 68 bytes.
#line 1 "ENTRY_10fb6870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10fb6870(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10fb68d0; body size 68 bytes.
#line 1 "ENTRY_10fb68d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10fb68d0(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10fb6930; body size 68 bytes.
#line 1 "ENTRY_10fb6930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10fb6930(byte *param_2)
{
  int param_1 = (int )this;
  return (uint)(*(uint *)(param_1 + 0x20) &
         ((((*param_2 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_2[1]) * 0x1000193 ^ (uint)param_2[2]) * 0x1000193 ^ (uint)param_2[3]) * 0x1000193);
}


// Reference entry 10fb6990; body size 4 bytes.
#line 1 "ENTRY_10fb6990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb6990(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10fb69a0; body size 4 bytes.
#line 1 "ENTRY_10fb69a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb69a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10fb69b0; body size 4 bytes.
#line 1 "ENTRY_10fb69b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb69b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10fb69c0; body size 4 bytes.
#line 1 "ENTRY_10fb69c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fb69c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10fb6fb0; body size 68 bytes.
#line 1 "ENTRY_10fb6fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb6fb0(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10fab730(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10fad420(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10fb7010; body size 68 bytes.
#line 1 "ENTRY_10fb7010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb7010(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10fab810(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10fad4a0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10fb7100; body size 68 bytes.
#line 1 "ENTRY_10fb7100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fb7100(int param_1)

{
  int *piVar1;
  int iStack_4;
  
  if (*(int *)(param_1 + 0x10) != 0) {
    piVar1 = (int *)((int *)(param_1 + 0xc));
    iStack_4 = (int)(param_1);
    thunk_FUN_10fab930(piVar1,*(undefined4 *)(param_1 + 0xc));
    *(int *)*piVar1 = (int)(*piVar1);
    *(int*)(*piVar1 + 4) = (int)(*piVar1);
    *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
    iStack_4 = (int)(*piVar1);
    thunk_FUN_10fad5a0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),&iStack_4);
  }
  return;
}


// Reference entry 10fb7790; body size 84 bytes.
#line 1 "ENTRY_10fb7790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb7790(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0xc), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    iVar1 = (int)(*(int *)(param_1 + 8));
    puVar2[1] = (undefined4)(iVar1);
    puVar2[2] = (undefined4)(iVar1);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestCompleteState);
    thunk_FUN_112af4e0("Wizard",5,"Exit code set to %d.",0);
    *(undefined4*)(iVar1 + 0x94) = (undefined4)(0);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fb7c70; body size 91 bytes.
#line 1 "ENTRY_10fb7c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fb7c70(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(operator_new(0x20), 0);
  if ((undefined4 *)(puVar2) != (undefined4 *)(0x0)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_1 + 8));
    puVar2[1] = (undefined4)(uVar1);
    puVar2[2] = (undefined4)(uVar1);
    puVar2[3] = (undefined4)((uint)&ghidra_vftable_SCIOpCBDelegate);
    puVar2[4] = (undefined4)(0);
    puVar2[5] = (undefined4)(0);
    *puVar2 = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestStartWifiState);
    puVar2[3] = (undefined4)((uint)&ghidra_vftable_SCLifecycleNetworkTestStartWifiState);
    puVar2[6] = (undefined4)(0);
    puVar2[7] = (undefined4)(0);
    return (undefined4 *)(puVar2);
  }
  return (undefined4 *)((undefined4 *)0x0);
}


// Reference entry 10fb81a0; body size 63 bytes.
#line 1 "ENTRY_10fb81a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb81a0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10fb81f0; body size 63 bytes.
#line 1 "ENTRY_10fb81f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb81f0(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10fb8240; body size 54 bytes.
#line 1 "ENTRY_10fb8240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb8240(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10fb8290; body size 63 bytes.
#line 1 "ENTRY_10fb8290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fb8290(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10fb82e0; body size 66 bytes.
#line 1 "ENTRY_10fb82e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb82e0(int param_1,int param_2)

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


// Reference entry 10fb8340; body size 66 bytes.
#line 1 "ENTRY_10fb8340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb8340(int param_1,int param_2)

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


// Reference entry 10fb83a0; body size 57 bytes.
#line 1 "ENTRY_10fb83a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb83a0(int param_1,int param_2)

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


// Reference entry 10fb83f0; body size 66 bytes.
#line 1 "ENTRY_10fb83f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb83f0(int param_1,int param_2)

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


// Reference entry 10fb8450; body size 61 bytes.
#line 1 "ENTRY_10fb8450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb8450(int param_1,int param_2)

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


// Reference entry 10fb84a0; body size 61 bytes.
#line 1 "ENTRY_10fb84a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb84a0(int param_1,int param_2)

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


// Reference entry 10fb84f0; body size 61 bytes.
#line 1 "ENTRY_10fb84f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb84f0(int param_1,int param_2)

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


// Reference entry 10fb8540; body size 61 bytes.
#line 1 "ENTRY_10fb8540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fb8540(int param_1,int param_2)

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


// Reference entry 10fb85b0; body size 8 bytes.
#line 1 "ENTRY_10fb85b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb85b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x10) == 0);
}


// Reference entry 10fb85c0; body size 8 bytes.
#line 1 "ENTRY_10fb85c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fb85c0(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10fb85d0; body size 12 bytes.
#line 1 "ENTRY_10fb85d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb85d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10fb85e0; body size 12 bytes.
#line 1 "ENTRY_10fb85e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb85e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10fb85f0; body size 12 bytes.
#line 1 "ENTRY_10fb85f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb85f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10fb8600; body size 12 bytes.
#line 1 "ENTRY_10fb8600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb8600(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10fb8610; body size 12 bytes.
#line 1 "ENTRY_10fb8610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb8610(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10fb8620; body size 11 bytes.
#line 1 "ENTRY_10fb8620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb8620(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fb8630; body size 11 bytes.
#line 1 "ENTRY_10fb8630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb8630(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fb8640; body size 11 bytes.
#line 1 "ENTRY_10fb8640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb8640(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fb8650; body size 11 bytes.
#line 1 "ENTRY_10fb8650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fb8650(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fb9b90; body size 1669 bytes.
#line 1 "ENTRY_10fb9b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10fb9b90(undefined4 param_2)
{
  int param_1 = (int )this;
 try {
  char cVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piStack_a0;
  int *piStack_98;
  int *piStack_90;
  int *piStack_88;
  void *pvStack_84;
  undefined1 *puStack_80;
  undefined4 uStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *piStack_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  int *piStack_5c;
  int iStack_58;
  int *piStack_54;
  int *piStack_50;
  int *piStack_4c;
  int *piStack_48;
  int *piStack_44;
  int *piStack_40;
  int *piStack_3c;
  int *piStack_38;
  int *piStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  int *piStack_20;
  int *piStack_1c;
  int *piStack_18;
  int *piStack_14;
  undefined4 uStack_10;
  int *piStack_c;
  char *pcStack_8;


  piVar2 = (int *)((int *)thunk_FUN_1037a2b0(&piStack_c,DAT_12126b84 ^ (uint)&piStack_78), 0);
  piStack_50 = (int *)((int *)*piVar2);

  *piVar2 = (int)(0);
  if ((int *)(piStack_50) == (int *)(0x0)) {
    piStack_a0 = (int *)((int *)0x0);
  }
  else {
    piStack_a0 = (int *)((int *)((SCVtbl_3_0*)(piStack_50))->v(), 0);
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(3);
  if ((int *)(piStack_c) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_c))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(2);
  piVar3 = (int *)((int *)thunk_FUN_102e3e40(&piStack_14), 0);
  piVar2 = (int *)((int *)*piVar3);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(4);
  *piVar3 = (int)(0);
  piStack_34 = (int *)(piVar2);
  if ((int *)(piVar2) == (int *)(0x0)) {
    piStack_98 = (int *)((int *)0x0);
  }
  else {
    piStack_98 = (int *)((int *)((SCVtbl_3_0*)(piVar2))->v(), 0);
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(7);
  if ((int *)(piStack_14) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_14))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(6);
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x26a8,&DAT_11882ff0), 0);
  ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep(pcVar4);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(8);
  ((SCVtbl_5_2*)(piVar2))->v((int)(&piStack_c),(int)(&pcStack_8));
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(9);
  if ((int *)(piStack_c) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_c))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(10);
  ((SCStr *)((SCStr *)&pcStack_8))->int_release();
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(6);
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x26a9,&DAT_11882ff0), 0);
  ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep(pcVar4);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0xb);
  ((SCVtbl_6_2*)(piVar2))->v((int)(&piStack_c),(int)(&pcStack_8));
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0xc);
  if ((int *)(piStack_c) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_c))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0xd);
  ((SCStr *)((SCStr *)&pcStack_8))->int_release();
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(6);
  piVar3 = (int *)((int *)createSCStringArray(), 0);
  piStack_14 = (int *)((int *)*piVar3);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0xe);
  *piVar3 = (int)(0);
  if ((int *)(piStack_14) == (int *)(0x0)) {
    piStack_90 = (int *)((int *)0x0);
  }
  else {
    piStack_90 = (int *)((int *)((SCVtbl_3_0*)(piStack_14))->v(), 0);
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x11);
  if ((int *)(piStack_c) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_c))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x10);
  piVar3 = (int *)((int *)createSCIntArray(), 0);
  piStack_68 = (int *)((int *)*piVar3);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x12);
  *piVar3 = (int)(0);
  piStack_1c = (int *)(piStack_68);
  if ((int *)(piStack_68) == (int *)(0x0)) {
    piStack_64 = (int *)((int *)0x0);
  }
  else {
    piStack_64 = (int *)((int *)((SCVtbl_3_0*)(piStack_68))->v(), 0);
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x15);
  if ((int *)(piStack_18) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_18))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x14);
  piVar3 = (int *)((int *)createSCStringArray(), 0);
  piStack_c = (int *)((int *)*piVar3);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x16);
  *piVar3 = (int)(0);
  if ((int *)(piStack_c) == (int *)(0x0)) {
    piStack_88 = (int *)((int *)0x0);
  }
  else {
    piStack_88 = (int *)((int *)((SCVtbl_3_0*)(piStack_c))->v(), 0);
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x19);
  if ((int *)(piStack_20) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_20))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x18);
  ((SCStr *)((SCStr *)&uStack_10))->int_allocRep("ModernPlayers");
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x1a);
  piVar5 = (int *)((int *)((SCVtbl_93_2*)(*(int **)(param_1 + 8)))->v((int)(&piStack_18),(int)(&uStack_10)), 0);
  piVar3 = (int *)((int *)*piVar5);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x1b);
  *piVar5 = (int)(0);
  piStack_78 = (int *)(piVar3);
  piStack_60 = (int *)(piVar3);
  if ((int *)(piVar3) == (int *)(0x0)) {
    piStack_74 = (int *)((int *)0x0);
  }
  else {
    piStack_74 = (int *)((int *)((SCVtbl_3_0*)(piVar3))->v(), 0);
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x1e);
  if ((int *)(piStack_18) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_18))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x20);
  ((SCStr *)((SCStr *)&uStack_10))->int_release();

  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x1f);
  piVar6 = (int *)((int *)((SCVtbl_36_1*)(piVar3))->v((int)(&piStack_48)), 0);
  piVar5 = (int *)((int *)*piVar6);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x21);
  *piVar6 = (int)(0);
  piStack_70 = (int *)(piVar5);
  piStack_5c = (int *)(piVar5);
  if ((int *)(piVar5) == (int *)(0x0)) {
    piStack_6c = (int *)((int *)0x0);
  }
  else {
    piStack_6c = (int *)((int *)((SCVtbl_3_0*)(piVar5))->v(), 0);
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x24);
  if ((int *)(piStack_48) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_48))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x23);
  iStack_58 = (int)(((SCVtbl_5_0*)(piVar5))->v(), 0);
  piStack_18 = (int *)((int *)0x0);
  if (0 < iStack_58) {
    do {
      ((SCVtbl_7_2*)(piVar5))->v((int)(&pcStack_8),(int)(piStack_18));
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x25);
      pcVar4 = (char *)("");
      if ((char *)(pcStack_8) != (char *)(0x0)) {
        pcVar4 = (char *)(pcStack_8);
      }
      ((SCStr *)((SCStr *)&uStack_10))->int_allocRep(pcVar4);
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x26);
      piVar3 = (int *)((int *)((SCVtbl_18_2*)(piVar3))->v((int)(&piStack_4c),(int)(&uStack_10)), 0);
      piVar2 = (int *)((int *)*piVar3);
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x27);
      *piVar3 = (int)(0);
      piStack_44 = (int *)(piVar2);
      if ((int *)(piVar2) == (int *)(0x0)) {
        piVar3 = (int *)((int *)0x0);
      }
      else {
        piVar3 = (int *)((int *)((SCVtbl_3_0*)(piVar2))->v(), 0);
      }
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x2a);
      piStack_40 = (int *)(piVar3);
      if ((int *)(piStack_4c) != (int *)(0x0)) {
        ((SCVtbl_2_0*)(piStack_4c))->v();
      }
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x2c);
      ((SCStr *)((SCStr *)&uStack_10))->int_release();

      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x2b);
      ((SCStr *)((SCStr *)&uStack_24))->int_allocRep("result");
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x2d);
      cVar1 = (char)(((SCVtbl_15_1*)(piVar2))->v((int)(&uStack_24)), 0);
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x2e);
      ((SCStr *)((SCStr *)&uStack_24))->int_release();

      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x2b);
      if (cVar1 == '\0') {
        ((SCStr *)((SCStr *)&uStack_28))->int_allocRep("deviceID");
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x2f);
        ((SCVtbl_6_2*)(piVar2))->v((int)(&uStack_2c),(int)(&uStack_28));
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x32);
        ((SCStr *)((SCStr *)&uStack_28))->int_release();

        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x31);
        piVar5 = (int *)((int *)((SCVtbl_110_2*)(piStack_50))->v((int)(&piStack_54),(int)(&uStack_2c)), 0);
        piVar2 = (int *)((int *)*piVar5);
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x33);
        *piVar5 = (int)(0);
        piStack_3c = (int *)(piVar2);
        if ((int *)(piVar2) == (int *)(0x0)) {
          piVar5 = (int *)((int *)0x0);
        }
        else {
          piVar5 = (int *)((int *)((SCVtbl_3_0*)(piVar2))->v(), 0);
        }
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x36);
        piStack_38 = (int *)(piVar5);
        if ((int *)(piStack_54) != (int *)(0x0)) {
          ((SCVtbl_2_0*)(piStack_54))->v();
        }
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x35);
        uVar7 = (undefined4)(((SCVtbl_54_0*)(piVar2))->v(), 0);
        uVar7 = (undefined4)(((SCVtbl_51_1*)(piVar2))->v((int)(uVar7)), 0);
        uVar7 = (undefined4)(func_0x1005d1b6(&uStack_30,uVar7), 0);
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x37);
        ((SCVtbl_9_1*)(piStack_14))->v((int)(uVar7));
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x38);
        ((SCStr *)((SCStr *)&uStack_30))->int_release();

        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x35);
        uVar7 = (undefined4)(thunk_FUN_10320760((int)(&piStack_20)), 0);
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x39);
        ((SCVtbl_9_1*)(piStack_c))->v((int)(uVar7));
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x3a);
        ((SCStr *)((SCStr *)&piStack_20))->int_release();
        piStack_20 = (int *)((int *)0x0);
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x3b);
        if ((int *)(piVar5) != (int *)(0x0)) {
          piStack_3c = (int *)((int *)0x0);
          piStack_38 = (int *)((int *)0x0);
          ((SCVtbl_2_0*)(piVar5))->v();
        }
        *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x3c);
        ((SCStr *)((SCStr *)&uStack_2c))->int_release();

      }
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x3d);
      if ((int *)(piVar3) != (int *)(0x0)) {
        piStack_44 = (int *)((int *)0x0);
        piStack_40 = (int *)((int *)0x0);
        ((SCVtbl_2_0*)(piVar3))->v();
      }
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x3e);
      ((SCStr *)((SCStr *)&pcStack_8))->int_release();
      piStack_18 = (int *)((int *)((int)piStack_18 + 1));
      pcStack_8 = (char *)((char *)0x0);
      *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x23);
      piVar2 = (int *)(piStack_34);
      piVar5 = (int *)(piStack_5c);
      piVar3 = (int *)(piStack_60);
    } while ((int)piStack_18 < iStack_58);
  }
  piVar3 = (int *)(piStack_64);
  if ((int *)(piStack_64) != (int *)(0x0)) {
    ((SCVtbl_1_4*)(piStack_64))->v((int)(piStack_1c),(int)(piStack_64),(int)(piStack_c),(int)(0xffffffff));
  }
  func_0x10003c83(&piStack_1c,piStack_14);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x3f);
  if ((int *)(piStack_1c) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_1c))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x23);
  ((SCStr *)((SCStr *)&piStack_14))->int_allocRep("lifecycletest.continue");
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x40);
  pcVar4 = (char *)((char *)thunk_FUN_1109aba0(0x208f,&DAT_11882ff0), 0);
  ((SCStr *)((SCStr *)&pcStack_8))->int_allocRep(pcVar4);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x41);
  ((SCVtbl_8_3*)(piVar2))->v((int)(&piStack_1c),(int)(&pcStack_8),(int)(&piStack_14));
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x42);
  if ((int *)(piStack_1c) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_1c))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x43);
  ((SCStr *)((SCStr *)&pcStack_8))->int_release();
  pcStack_8 = (char *)((char *)0x0);
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x44);
  ((SCStr *)((SCStr *)&piStack_14))->int_release();
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x23);
  ((SCVtbl_23_1*)(piVar2))->v((int)(param_2));
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x45);
  if ((int *)(piStack_6c) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_6c))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x46);
  if ((int *)(piStack_74) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_74))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x47);
  if ((int *)(piStack_88) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_88))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x48);
  if ((int *)(piVar3) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piVar3))->v();
  }
  *(unsigned char*)((char *)&uStack_7c + 0) = (unsigned char)(0x49);
  if ((int *)(piStack_90) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_90))->v();
  }
  uStack_7c = (undefined4)(((uint)(*(unsigned short *)((char *)&uStack_7c + 1)) << 8 | (uint)(0x4a)));
  if ((int *)(piStack_98) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_98))->v();
  }

  if ((int *)(piStack_a0) != (int *)(0x0)) {
    ((SCVtbl_2_0*)(piStack_a0))->v();
  }

  return (undefined4)(param_2);

 } catch (...) { }
}


// Reference entry 10fbc970; body size 7 bytes.
#line 1 "ENTRY_10fbc970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fbc970(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fbca30; body size 4 bytes.
#line 1 "ENTRY_10fbca30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10fbca30(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10fbca40; body size 4 bytes.
#line 1 "ENTRY_10fbca40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10fbca40(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10fbca50; body size 4 bytes.
#line 1 "ENTRY_10fbca50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10fbca50(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10fbca60; body size 4 bytes.
#line 1 "ENTRY_10fbca60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10fbca60(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10fbca70; body size 6 bytes.
#line 1 "ENTRY_10fbca70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbca70(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10fbca80; body size 6 bytes.
#line 1 "ENTRY_10fbca80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbca80(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10fbca90; body size 6 bytes.
#line 1 "ENTRY_10fbca90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbca90(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10fbcaa0; body size 6 bytes.
#line 1 "ENTRY_10fbcaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcaa0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10fbcab0; body size 6 bytes.
#line 1 "ENTRY_10fbcab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcab0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10fbcac0; body size 6 bytes.
#line 1 "ENTRY_10fbcac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcac0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10fbcad0; body size 6 bytes.
#line 1 "ENTRY_10fbcad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcad0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10fbcae0; body size 6 bytes.
#line 1 "ENTRY_10fbcae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcae0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10fbcaf0; body size 6 bytes.
#line 1 "ENTRY_10fbcaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcaf0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10fbcb00; body size 6 bytes.
#line 1 "ENTRY_10fbcb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcb00(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10fbcb10; body size 6 bytes.
#line 1 "ENTRY_10fbcb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcb10(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10fbcb20; body size 6 bytes.
#line 1 "ENTRY_10fbcb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcb20(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10fbcb30; body size 6 bytes.
#line 1 "ENTRY_10fbcb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcb30(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10fbcb40; body size 6 bytes.
#line 1 "ENTRY_10fbcb40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcb40(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10fbcb50; body size 6 bytes.
#line 1 "ENTRY_10fbcb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcb50(void)

{
  return (undefined4)(0x7ffffff);
}


// Reference entry 10fbcb60; body size 6 bytes.
#line 1 "ENTRY_10fbcb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbcb60(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10fbce40; body size 5 bytes.
#line 1 "ENTRY_10fbce40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbce40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fbce50; body size 5 bytes.
#line 1 "ENTRY_10fbce50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbce50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fbce60; body size 5 bytes.
#line 1 "ENTRY_10fbce60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbce60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fbce70; body size 5 bytes.
#line 1 "ENTRY_10fbce70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbce70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fbce80; body size 5 bytes.
#line 1 "ENTRY_10fbce80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbce80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fbce90; body size 5 bytes.
#line 1 "ENTRY_10fbce90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fbce90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fbcf20; body size 28 bytes.
#line 1 "ENTRY_10fbcf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fbcf20(undefined4 *param_1)

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


// Reference entry 10fbcf50; body size 28 bytes.
#line 1 "ENTRY_10fbcf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fbcf50(undefined4 *param_1)

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


// Reference entry 10fbcf80; body size 28 bytes.
#line 1 "ENTRY_10fbcf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fbcf80(undefined4 *param_1)

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


// Reference entry 10fbd300; body size 5 bytes.
#line 1 "ENTRY_10fbd300"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fbd300(int param_1)

{ __asm jmp FUN_1001b879 }


// Reference entry 10fc0740; body size 4 bytes.
#line 1 "ENTRY_10fc0740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc0740(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10fc0750; body size 4 bytes.
#line 1 "ENTRY_10fc0750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc0750(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10fc0760; body size 4 bytes.
#line 1 "ENTRY_10fc0760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc0760(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10fc0770; body size 4 bytes.
#line 1 "ENTRY_10fc0770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc0770(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x10));
}


// Reference entry 10fc0780; body size 9 bytes.
#line 1 "ENTRY_10fc0780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc0780(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10fc0790; body size 9 bytes.
#line 1 "ENTRY_10fc0790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc0790(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10fc07a0; body size 9 bytes.
#line 1 "ENTRY_10fc07a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc07a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10fc07b0; body size 9 bytes.
#line 1 "ENTRY_10fc07b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc07b0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10fc07c0; body size 4 bytes.
#line 1 "ENTRY_10fc07c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc07c0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10fc07d0; body size 4 bytes.
#line 1 "ENTRY_10fc07d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc07d0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10fc07e0; body size 4 bytes.
#line 1 "ENTRY_10fc07e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc07e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10fc07f0; body size 4 bytes.
#line 1 "ENTRY_10fc07f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc07f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10fc0860; body size 18 bytes.
#line 1 "ENTRY_10fc0860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fc0860(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc0880; body size 53 bytes.
#line 1 "ENTRY_10fc0880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc0880(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc08d0; body size 22 bytes.
#line 1 "ENTRY_10fc08d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc08d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc08f0; body size 18 bytes.
#line 1 "ENTRY_10fc08f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fc08f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc09e0; body size 22 bytes.
#line 1 "ENTRY_10fc09e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc09e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc0a00; body size 55 bytes.
#line 1 "ENTRY_10fc0a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc0a00(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc0a50; body size 25 bytes.
#line 1 "ENTRY_10fc0a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fc0a50(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10fc0a70; body size 13 bytes.
#line 1 "ENTRY_10fc0a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fc0a70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fc0a80; body size 13 bytes.
#line 1 "ENTRY_10fc0a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fc0a80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fc0a90; body size 3 bytes.
#line 1 "ENTRY_10fc0a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fc0a90(void)

{
  return;
}


// Reference entry 10fc0c60; body size 15 bytes.
#line 1 "ENTRY_10fc0c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fc0c60(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x24);
  return;
}


// Reference entry 10fc0d30; body size 5 bytes.
#line 1 "ENTRY_10fc0d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc0d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc0d40; body size 31 bytes.
#line 1 "ENTRY_10fc0d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_10fc0d40(int param_1,uint *param_2){
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10fc0ea0; body size 5 bytes.
#line 1 "ENTRY_10fc0ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc0ea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc0eb0; body size 5 bytes.
#line 1 "ENTRY_10fc0eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc0eb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc0ec0; body size 5 bytes.
#line 1 "ENTRY_10fc0ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc0ec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc0ed0; body size 5 bytes.
#line 1 "ENTRY_10fc0ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc0ed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc0ee0; body size 5 bytes.
#line 1 "ENTRY_10fc0ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc0ee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc0ef0; body size 5 bytes.
#line 1 "ENTRY_10fc0ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc0ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc0f00; body size 43 bytes.
#line 1 "ENTRY_10fc0f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fc0f00(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  return;
}


// Reference entry 10fc10c0; body size 15 bytes.
#line 1 "ENTRY_10fc10c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc10c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10fc10e0; body size 15 bytes.
#line 1 "ENTRY_10fc10e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc10e0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10fc1100; body size 5 bytes.
#line 1 "ENTRY_10fc1100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc1100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc1110; body size 5 bytes.
#line 1 "ENTRY_10fc1110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc1110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc1120; body size 5 bytes.
#line 1 "ENTRY_10fc1120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc1120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc1280; body size 26 bytes.
#line 1 "ENTRY_10fc1280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1280(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardStateFor);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc12a0; body size 18 bytes.
#line 1 "ENTRY_10fc12a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc12a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1300; body size 11 bytes.
#line 1 "ENTRY_10fc1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1300(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1310; body size 11 bytes.
#line 1 "ENTRY_10fc1310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1310(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc13a0; body size 11 bytes.
#line 1 "ENTRY_10fc13a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc13a0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc13b0; body size 11 bytes.
#line 1 "ENTRY_10fc13b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc13b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc13c0; body size 16 bytes.
#line 1 "ENTRY_10fc13c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fc13c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc13e0; body size 3 bytes.
#line 1 "ENTRY_10fc13e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc13e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc13f0; body size 52 bytes.
#line 1 "ENTRY_10fc13f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fc13f0(undefined4 *param_1)

{
  void *pvVar1;
  
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc14d0; body size 35 bytes.
#line 1 "ENTRY_10fc14d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fc14d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1930; body size 26 bytes.
#line 1 "ENTRY_10fc1930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1930(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardCompleteState);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1950; body size 30 bytes.
#line 1 "ENTRY_10fc1950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1950(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardConfirmState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1a90; body size 26 bytes.
#line 1 "ENTRY_10fc1a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1a90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardInitState);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1ab0; body size 30 bytes.
#line 1 "ENTRY_10fc1ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1ab0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardIntroState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1ae0; body size 30 bytes.
#line 1 "ENTRY_10fc1ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1ae0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardNetworkTestIntroState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1b10; body size 30 bytes.
#line 1 "ENTRY_10fc1b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1b10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardReadyForDownloadState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1b40; body size 30 bytes.
#line 1 "ENTRY_10fc1b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1b40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardResetFailedState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1b70; body size 26 bytes.
#line 1 "ENTRY_10fc1b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1b70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardState);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1b90; body size 58 bytes.
#line 1 "ENTRY_10fc1b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1b90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCIActionDelegateCB);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardTermsOfUseState);
  param_1[3] = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardTermsOfUseState);
  *(undefined1*)(param_1 + 6) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1be0; body size 30 bytes.
#line 1 "ENTRY_10fc1be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1be0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardTestFailState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1c10; body size 30 bytes.
#line 1 "ENTRY_10fc1c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc1c10(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCLifecyclePlayerRemovalWizardTestPassState);
  *(undefined1*)(param_1 + 3) = (undefined1)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fc1e70; body size 19 bytes.
#line 1 "ENTRY_10fc1e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc1e70(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x24);
  }
  return;
}


// Reference entry 10fc2160; body size 7 bytes.
#line 1 "ENTRY_10fc2160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc2160(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fc2170; body size 7 bytes.
#line 1 "ENTRY_10fc2170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc2170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fc2270; body size 7 bytes.
#line 1 "ENTRY_10fc2270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc2270(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fc2280; body size 7 bytes.
#line 1 "ENTRY_10fc2280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc2280(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fc2290; body size 7 bytes.
#line 1 "ENTRY_10fc2290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc2290(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fc22a0; body size 7 bytes.
#line 1 "ENTRY_10fc22a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc22a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fc22b0; body size 7 bytes.
#line 1 "ENTRY_10fc22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc22b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fc2360; body size 7 bytes.
#line 1 "ENTRY_10fc2360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc2360(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fc2370; body size 7 bytes.
#line 1 "ENTRY_10fc2370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc2370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10fc2380; body size 120 bytes.
#line 1 "ENTRY_10fc2380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fc2380(int *param_2)
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


// Reference entry 10fc2420; body size 14 bytes.
#line 1 "ENTRY_10fc2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fc2420(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10fc2440; body size 14 bytes.
#line 1 "ENTRY_10fc2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10fc2440(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10fc2560; body size 6 bytes.
#line 1 "ENTRY_10fc2560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc2560(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10fc2570; body size 6 bytes.
#line 1 "ENTRY_10fc2570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc2570(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10fc2580; body size 6 bytes.
#line 1 "ENTRY_10fc2580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc2580(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10fc2590; body size 6 bytes.
#line 1 "ENTRY_10fc2590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc2590(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10fc25a0; body size 20 bytes.
#line 1 "ENTRY_10fc25a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fc25a0(undefined4 *param_2, unsigned int recovered_unused_stack_0)
{
  _Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *param_1 = (_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<unsigned int>>,std::_Iterator_base0> *)this;
  *param_2 = (undefined4)(*(undefined4 *)param_1);
  ((std::_Tree_unchecked_const_iterator<> *)(param_1))->op_inc();
  return (undefined4 *)(param_2);
}


// Reference entry 10fc2e00; body size 31 bytes.
#line 1 "ENTRY_10fc2e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc2e00(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x24), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  *param_1 = (undefined4)(pvVar1);
  return;
}


// Reference entry 10fc2e50; body size 14 bytes.
#line 1 "ENTRY_10fc2e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fc2e50(int param_1)

{
  if (*(int *)(param_1 + 4) != 0x71c71c7) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10fc32a0; body size 3 bytes.
#line 1 "ENTRY_10fc32a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc32a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc32b0; body size 3 bytes.
#line 1 "ENTRY_10fc32b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc32b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc32c0; body size 3 bytes.
#line 1 "ENTRY_10fc32c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc32c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc32d0; body size 3 bytes.
#line 1 "ENTRY_10fc32d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc32d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc32e0; body size 3 bytes.
#line 1 "ENTRY_10fc32e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc32e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc32f0; body size 3 bytes.
#line 1 "ENTRY_10fc32f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc32f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc3300; body size 3 bytes.
#line 1 "ENTRY_10fc3300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc3300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc3310; body size 3 bytes.
#line 1 "ENTRY_10fc3310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc3310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc3620; body size 30 bytes.
#line 1 "ENTRY_10fc3620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10fc3620(int param_1)

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


// Reference entry 10fc3680; body size 3 bytes.
#line 1 "ENTRY_10fc3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fc3680(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10fc3690; body size 11 bytes.
#line 1 "ENTRY_10fc3690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc3690(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10fc3710; body size 11 bytes.
#line 1 "ENTRY_10fc3710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fc3710(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fc3a90; body size 90 bytes.
#line 1 "ENTRY_10fc3a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fc3a90(uint param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (param_1 < 0x71c71c8) {
    param_1 = (uint)(param_1 * 0x24);
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


// Reference entry 10fc3d40; body size 13 bytes.
#line 1 "ENTRY_10fc3d40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fc3d40(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10fc5030; body size 57 bytes.
#line 1 "ENTRY_10fc5030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fc5030(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_3 * 0x24);
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


// Reference entry 10fc5080; body size 60 bytes.
#line 1 "ENTRY_10fc5080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fc5080(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)(param_2 * 0x24);
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


// Reference entry 10fc59a0; body size 11 bytes.
#line 1 "ENTRY_10fc59a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fc59a0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fc5b20; body size 7 bytes.
#line 1 "ENTRY_10fc5b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc5b20(int param_1)

{
  return (int)(param_1 + 0xec);
}


// Reference entry 10fc5b30; body size 7 bytes.
#line 1 "ENTRY_10fc5b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fc5b30(int param_1)

{
  return (int)(param_1 + 0xe0);
}


// Reference entry 10fc92f0; body size 21 bytes.
#line 1 "ENTRY_10fc92f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc92f0(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec));
  return (undefined4)(((uint)((int3)(iVar1 >> 0xb)) << 8 | (uint)(iVar1 >> 3 != 0)));
}


// Reference entry 10fc9310; body size 21 bytes.
#line 1 "ENTRY_10fc9310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc9310(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0));
  return (undefined4)(((uint)((int3)(iVar1 >> 0xb)) << 8 | (uint)(iVar1 >> 3 != 0)));
}


// Reference entry 10fc9440; body size 6 bytes.
#line 1 "ENTRY_10fc9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc9440(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10fc9450; body size 6 bytes.
#line 1 "ENTRY_10fc9450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc9450(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10fc95c0; body size 5 bytes.
#line 1 "ENTRY_10fc95c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc95c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc95d0; body size 5 bytes.
#line 1 "ENTRY_10fc95d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fc95d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fc9f70; body size 4 bytes.
#line 1 "ENTRY_10fc9f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fc9f70(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10fca4c0; body size 25 bytes.
#line 1 "ENTRY_10fca4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fca4c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fcbbb0; body size 78 bytes.
#line 1 "ENTRY_10fcbbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fcbbb0(int *param_2)
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
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)((int)piVar1);
  if ((int *)(piVar1) != (int *)(0x0)) {
    iVar3 = (int)(((SCVtbl_3_0*)(piVar1))->v(), 0);
    param_1[1] = (int)(iVar3);
    return (int *)(param_1);
  }
  param_1[1] = (int)(0);
  return (int *)(param_1);
}


// Reference entry 10fcbc20; body size 16 bytes.
#line 1 "ENTRY_10fcbc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fcbc20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fcceb0; body size 28 bytes.
#line 1 "ENTRY_10fcceb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fcceb0(undefined4 *param_1)

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


// Reference entry 10fccf10; body size 11 bytes.
#line 1 "ENTRY_10fccf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fccf10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjIndexListener);

  thunk_FUN_11164740(param_1);

}


// Reference entry 10fcd6c0; body size 25 bytes.
#line 1 "ENTRY_10fcd6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fcd6c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fcd6e0; body size 26 bytes.
#line 1 "ENTRY_10fcd6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fcd6e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10fcd7a0; body size 39 bytes.
#line 1 "ENTRY_10fcd7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fcd7a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fcd7d0; body size 39 bytes.
#line 1 "ENTRY_10fcd7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fcd7d0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fcd800; body size 39 bytes.
#line 1 "ENTRY_10fcd800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fcd800(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fcdaf0; body size 7 bytes.
#line 1 "ENTRY_10fcdaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fcdaf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fcdb00; body size 5 bytes.
#line 1 "ENTRY_10fcdb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fcdb00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fcdc50; body size 28 bytes.
#line 1 "ENTRY_10fcdc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fcdc50(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10fcdc80; body size 28 bytes.
#line 1 "ENTRY_10fcdc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fcdc80(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10fcdcb0; body size 28 bytes.
#line 1 "ENTRY_10fcdcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fcdcb0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10fcdda0; body size 5 bytes.
#line 1 "ENTRY_10fcdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fcdda0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fcddb0; body size 5 bytes.
#line 1 "ENTRY_10fcddb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fcddb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fcddc0; body size 5 bytes.
#line 1 "ENTRY_10fcddc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fcddc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fcddd0; body size 5 bytes.
#line 1 "ENTRY_10fcddd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fcddd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fcdef0; body size 32 bytes.
#line 1 "ENTRY_10fcdef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fcdef0(undefined4 *param_2)
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


// Reference entry 10fcdf40; body size 21 bytes.
#line 1 "ENTRY_10fcdf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fcdf40(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fcdf60; body size 23 bytes.
#line 1 "ENTRY_10fcdf60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fcdf60(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fcdf80; body size 3 bytes.
#line 1 "ENTRY_10fcdf80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fcdf80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fcdf90; body size 23 bytes.
#line 1 "ENTRY_10fcdf90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fcdf90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fce5f0; body size 65 bytes.
#line 1 "ENTRY_10fce5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fce5f0(int *param_2)
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


// Reference entry 10fce650; body size 12 bytes.
#line 1 "ENTRY_10fce650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10fce650(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10fce660; body size 3 bytes.
#line 1 "ENTRY_10fce660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fce660(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fce7f0; body size 49 bytes.
#line 1 "ENTRY_10fce7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10fce7f0(uint param_2)
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


// Reference entry 10fce8e0; body size 3 bytes.
#line 1 "ENTRY_10fce8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fce8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fce8f0; body size 3 bytes.
#line 1 "ENTRY_10fce8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fce8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fce900; body size 3 bytes.
#line 1 "ENTRY_10fce900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fce900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fce910; body size 3 bytes.
#line 1 "ENTRY_10fce910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fce910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fce920; body size 3 bytes.
#line 1 "ENTRY_10fce920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fce920(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10fce930; body size 6 bytes.
#line 1 "ENTRY_10fce930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fce930(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10fcebb0; body size 87 bytes.
#line 1 "ENTRY_10fcebb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fcebb0(uint param_1)

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


// Reference entry 10fcec50; body size 9 bytes.
#line 1 "ENTRY_10fcec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fcec50(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10fcf400; body size 6 bytes.
#line 1 "ENTRY_10fcf400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fcf400(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10fcf410; body size 6 bytes.
#line 1 "ENTRY_10fcf410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fcf410(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10fcf670; body size 26 bytes.
#line 1 "ENTRY_10fcf670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fcf670(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10fcf690; body size 43 bytes.
#line 1 "ENTRY_10fcf690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fcf690(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (int)((int)piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10fcf6d0; body size 40 bytes.
#line 1 "ENTRY_10fcf6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fcf6d0(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0((int)(&param_1),(int)(param_2));
  return;
}


// Reference entry 10fcf710; body size 40 bytes.
#line 1 "ENTRY_10fcf710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fcf710(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0((int)(&param_1),(int)(param_2));
  return;
}


// Reference entry 10fcf750; body size 40 bytes.
#line 1 "ENTRY_10fcf750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fcf750(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0((int)(&param_1),(int)(param_2));
  return;
}


// Reference entry 10fcf790; body size 27 bytes.
#line 1 "ENTRY_10fcf790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fcf790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fcf840; body size 16 bytes.
#line 1 "ENTRY_10fcf840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fcf840(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fcffb0; body size 9 bytes.
#line 1 "ENTRY_10fcffb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fcffb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCITimeSettingsProperty);
  return (undefined4 *)(param_1);
}


// Reference entry 10fd0960; body size 7 bytes.
#line 1 "ENTRY_10fd0960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fd0960(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10fd0e50; body size 7 bytes.
#line 1 "ENTRY_10fd0e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fd0e50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fd0e60; body size 3 bytes.
#line 1 "ENTRY_10fd0e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fd0e60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fd1790; body size 16 bytes.
#line 1 "ENTRY_10fd1790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fd1790(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10fd17b0; body size 16 bytes.
#line 1 "ENTRY_10fd17b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fd17b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10fd17d0; body size 16 bytes.
#line 1 "ENTRY_10fd17d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fd17d0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10fd25b0; body size 3 bytes.
#line 1 "ENTRY_10fd25b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fd25b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fd2d90; body size 28 bytes.
#line 1 "ENTRY_10fd2d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fd2d90(undefined4 *param_1)

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


// Reference entry 10fd2dc0; body size 28 bytes.
#line 1 "ENTRY_10fd2dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fd2dc0(undefined4 *param_1)

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


// Reference entry 10fd2df0; body size 28 bytes.
#line 1 "ENTRY_10fd2df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fd2df0(undefined4 *param_1)

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


// Reference entry 10fd2e20; body size 28 bytes.
#line 1 "ENTRY_10fd2e20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fd2e20(undefined4 *param_1)

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


// Reference entry 10fd3020; body size 43 bytes.
#line 1 "ENTRY_10fd3020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fd3020(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  param_1[1] = (int)(0);
  if ((int *)(param_2) != (int *)(0x0)) {
    piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
    param_1[1] = (int)((int)piVar1);
    ((SCVtbl_1_0*)(piVar1))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10fd3060; body size 32 bytes.
#line 1 "ENTRY_10fd3060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fd3060(undefined4 *param_2)
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


// Reference entry 10fd3090; body size 32 bytes.
#line 1 "ENTRY_10fd3090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fd3090(undefined4 *param_2)
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


// Reference entry 10fd30c0; body size 16 bytes.
#line 1 "ENTRY_10fd30c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fd30c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fd3ed0; body size 42 bytes.
#line 1 "ENTRY_10fd3ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fd3ed0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmSettingsFrequencyDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10fd7970; body size 56 bytes.
#line 1 "ENTRY_10fd7970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fd7970(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCAlarmSettingsVolumeAction);
  return (undefined4 *)(param_1);
}


// Reference entry 10fd8830; body size 19 bytes.
#line 1 "ENTRY_10fd8830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fd8830(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10fd96d0; body size 3 bytes.
#line 1 "ENTRY_10fd96d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fd96d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fdd590; body size 3 bytes.
#line 1 "ENTRY_10fdd590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fdd590(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fddfb0; body size 28 bytes.
#line 1 "ENTRY_10fddfb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fddfb0(undefined4 *param_1)

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


// Reference entry 10fde870; body size 25 bytes.
#line 1 "ENTRY_10fde870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fde870(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fde890; body size 22 bytes.
#line 1 "ENTRY_10fde890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fde890(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fde8b0; body size 20 bytes.
#line 1 "ENTRY_10fde8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fde8b0(undefined4 param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fde8d0; body size 39 bytes.
#line 1 "ENTRY_10fde8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fde8d0(undefined4 param_2,undefined4 *param_3)
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


// Reference entry 10fde900; body size 3 bytes.
#line 1 "ENTRY_10fde900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fde900(void)

{
  return;
}


// Reference entry 10fde910; body size 28 bytes.
#line 1 "ENTRY_10fde910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fde910(void *param_1,int param_2,int param_3)

{
  memmove((char *)(param_3 - (param_2 - (int)param_1)),param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10fde9e0; body size 39 bytes.
#line 1 "ENTRY_10fde9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fde9e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fdea10; body size 39 bytes.
#line 1 "ENTRY_10fdea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fdea10(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fdea40; body size 39 bytes.
#line 1 "ENTRY_10fdea40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fdea40(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fded30; body size 7 bytes.
#line 1 "ENTRY_10fded30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fded30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fded40; body size 7 bytes.
#line 1 "ENTRY_10fded40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fded40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fdefa0; body size 133 bytes.
#line 1 "ENTRY_10fdefa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdefa0(undefined4 *param_1,undefined4 *param_2,code *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char cVar4;
  
  puVar3 = (undefined4 *)(param_1);
  if ((undefined4 *)(param_1) != (undefined4 *)(param_2)) {
    while (puVar3 = (undefined4 *)(puVar3 + 1),(undefined4 *)( puVar3) != (undefined4 *)(param_2)) {
      uVar1 = (undefined4)(*puVar3);
      cVar4 = (char)((*param_3)(uVar1,*param_1), 0);
      if (cVar4 == '\0') {
        cVar4 = (char)((*param_3)(uVar1,puVar3[-1]), 0);
        puVar2 = (undefined4 *)(puVar3);
        while (cVar4 != '\0') {
          *puVar2 = (undefined4)(puVar2[-1]);
          cVar4 = (char)((*param_3)(uVar1,puVar2[-2]), 0);
          puVar2 = (undefined4 *)(puVar2 + -1);
        }
        *puVar2 = (undefined4)(uVar1);
      }
      else {
        memmove((char *)((int)puVar3 + (4 - ((int)puVar3 - (int)param_1))),param_1, (int)puVar3 - (int)param_1);
        *param_1 = (undefined4)(uVar1);
      }
    }
  }
  return;
}


// Reference entry 10fdf050; body size 229 bytes.
#line 1 "ENTRY_10fdf050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdf050(int param_1,int param_2,code *param_3)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar4 = (uint)(param_2 - param_1 >> 2);
  iVar6 = (int)(param_2 - param_1 >> 3);
  if (0 < iVar6) {
    iVar5 = (int)((int)(uVar4 - 1) >> 1);
    do {
      uVar1 = (undefined4)(*(undefined4 *)(param_1 + -4 + iVar6 * 4));
      iVar6 = (int)(iVar6 + -1);
      iVar2 = (int)(iVar6);
      while (iVar2 < iVar5) {
        iVar7 = (int)(iVar2 * 2 + 2);
        cVar3 = (char)((*param_3)(*(undefined4 *)(param_1 + iVar7 * 4), *(undefined4 *)(param_1 + 4 + iVar2 * 8)), 0);
        if (cVar3 != '\0') {
          iVar7 = (int)(iVar2 * 2 + 1);
        }
        *(undefined4*)(param_1 + iVar2 * 4) = (undefined4)(*(undefined4 *)(param_1 + iVar7 * 4));
        iVar2 = (int)(iVar7);
      }
      if ((iVar2 == iVar5) && ((uVar4 & 1) == 0)) {
        *(undefined4*)(param_1 + iVar2 * 4) = (undefined4)(*(undefined4 *)(param_1 + -4 + uVar4 * 4));
        iVar2 = (int)(uVar4 - 1);
      }
      while (iVar6 < iVar2) {
        iVar7 = (int)(iVar2 + -1 >> 1);
        cVar3 = (char)((*param_3)(*(undefined4 *)(param_1 + iVar7 * 4),uVar1), 0);
        if (cVar3 == '\0') break;
        *(undefined4*)(param_1 + iVar2 * 4) = (undefined4)(*(undefined4 *)(param_1 + iVar7 * 4));
        iVar2 = (int)(iVar7);
      }
      *(undefined4*)(param_1 + iVar2 * 4) = (undefined4)(uVar1);
    } while (0 < iVar6);
  }
  return;
}


// Reference entry 10fdf170; body size 90 bytes.
#line 1 "ENTRY_10fdf170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdf170(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,code *param_4)

{
  undefined4 uVar1;
  char cVar2;
  
  cVar2 = (char)((*param_4)(*param_2,*param_1), 0);
  if (cVar2 != '\0') {
    uVar1 = (undefined4)(*param_2);
    *param_2 = (undefined4)(*param_1);
    *param_1 = (undefined4)(uVar1);
  }
  cVar2 = (char)((*param_4)(*param_3,*param_2), 0);
  if (cVar2 != '\0') {
    uVar1 = (undefined4)(*param_3);
    *param_3 = (undefined4)(*param_2);
    *param_2 = (undefined4)(uVar1);
    cVar2 = (char)((*param_4)(uVar1,*param_1), 0);
    if (cVar2 != '\0') {
      uVar1 = (undefined4)(*param_2);
      *param_2 = (undefined4)(*param_1);
      *param_1 = (undefined4)(uVar1);
    }
  }
  return;
}


// Reference entry 10fdf1e0; body size 28 bytes.
#line 1 "ENTRY_10fdf1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdf1e0(void *param_1,int param_2,int param_3)

{
  memmove((char *)(param_3 - (param_2 - (int)param_1)),param_1,param_2 - (int)param_1);
  return;
}


// Reference entry 10fdf210; body size 93 bytes.
#line 1 "ENTRY_10fdf210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10fdf210(int *param_1,int *param_2,int *param_3)

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
        ((SCVtbl_2_0*)(piVar1))->v();
        iVar2 = (int)(*piVar4);
      }
      *piVar3 = (int)(iVar2);
      piVar1 = (int *)((int *)param_2[-1]);
      param_3[-1] = (int)((int)piVar1);
      if ((int *)(piVar1) != (int *)(0x0)) {
        ((SCVtbl_1_0*)(piVar1))->v();
      }
    }
    param_3 = (int *)(piVar3);
    param_2 = (int *)(piVar4);
  } while ((int *)(piVar4) != (int *)(param_1));
  return (int *)(piVar3);
}


// Reference entry 10fdf290; body size 92 bytes.
#line 1 "ENTRY_10fdf290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10fdf290(int *param_1,int *param_2,int *param_3)

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
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while ((int *)(param_1) != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 10fdf310; body size 8 bytes.
#line 1 "ENTRY_10fdf310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10fdf310(int param_1)

{
  return (int)(param_1 + 4);
}


// Reference entry 10fdf580; body size 5 bytes.
#line 1 "ENTRY_10fdf580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fdf580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fdf690; body size 42 bytes.
#line 1 "ENTRY_10fdf690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdf690(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 code *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  *param_3 = (undefined4)(*param_1);
  uVar2 = (uint)(param_2 - (int)param_1 >> 2);
  iVar4 = (int)(0);
  iVar3 = (int)((int)(uVar2 - 1) >> 1);
  iVar5 = (int)(iVar4);
  if (0 < iVar3) {
    do {
      iVar4 = (int)(iVar5 * 2 + 2);
      cVar1 = (char)((*param_5)(param_1[iVar4],param_1[iVar5 * 2 + 1]), 0);
      if (cVar1 != '\0') {
        iVar4 = (int)(iVar5 * 2 + 1);
      }
      param_1[iVar5] = (undefined4)(param_1[iVar4]);
      iVar5 = (int)(iVar4);
    } while (iVar4 < iVar3);
  }
  if ((iVar4 == iVar3) && ((uVar2 & 1) == 0)) {
    param_1[iVar4] = (undefined4)(param_1[uVar2 - 1]);
    iVar4 = (int)(uVar2 - 1);
  }
  if (iVar4 < 1) {
    param_1[iVar4] = (undefined4)(*param_4);
    return;
  }
  do {
    iVar5 = (int)(iVar4 + -1 >> 1);
    cVar1 = (char)((*param_5)(param_1[iVar5],*param_4), 0);
    if (cVar1 == '\0') break;
    param_1[iVar4] = (undefined4)(param_1[iVar5]);
    iVar4 = (int)(iVar5);
  } while (0 < iVar5);
  param_1[iVar4] = (undefined4)(*param_4);
  return;
}


// Reference entry 10fdf6d0; body size 61 bytes.
#line 1 "ENTRY_10fdf6d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdf6d0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (7 < (int)(param_2 - (int)param_1 & 0xfffffffcU)) {
    uVar1 = (undefined4)(*(undefined4 *)(param_2 + -4));
    puVar2 = (undefined4 *)((undefined4 *)(param_2 + -4));
    *puVar2 = (undefined4)(*param_1);
    param_2 = (int)(uVar1);
    thunk_FUN_10fdf590(param_1,0,(int)puVar2 - (int)param_1 >> 2,&param_2,param_3);
  }
  return;
}


// Reference entry 10fdf720; body size 8 bytes.
#line 1 "ENTRY_10fdf720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10fdf720(int param_1)

{
  return (int)(param_1 + -4);
}


// Reference entry 10fdf730; body size 87 bytes.
#line 1 "ENTRY_10fdf730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdf730(int param_1,int param_2,int param_3,undefined4 *param_4,code *param_5)

{
  char cVar1;
  int iVar2;
  
  if (param_2 <= param_3) {
    *(undefined4*)(param_1 + param_2 * 4) = (undefined4)(*param_4);
    return;
  }
  do {
    iVar2 = (int)(param_2 + -1 >> 1);
    cVar1 = (char)((*param_5)(*(undefined4 *)(param_1 + iVar2 * 4),*param_4), 0);
    if (cVar1 == '\0') break;
    *(undefined4*)(param_1 + param_2 * 4) = (undefined4)(*(undefined4 *)(param_1 + iVar2 * 4));
    param_2 = (int)(iVar2);
  } while (param_3 < iVar2);
  *(undefined4*)(param_1 + param_2 * 4) = (undefined4)(*param_4);
  return;
}


// Reference entry 10fdf7a0; body size 87 bytes.
#line 1 "ENTRY_10fdf7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdf7a0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = (undefined4)(param_3);
  for (uVar2 = (uint)(param_2 - (int)param_1); 7 < (int)(uVar2 & 0xfffffffc); uVar2 = uVar2 - 4) {
    param_2 = (int)(*(undefined4 *)((int)param_1 + (uVar2 - 4)));
    *(undefined4*)((int)param_1 + (uVar2 - 4)) = (undefined4)(*param_1);
    thunk_FUN_10fdf590(param_1,0,(int)(uVar2 - 4) >> 2,&param_2,uVar1);
  }
  return;
}


// Reference entry 10fdfb20; body size 5 bytes.
#line 1 "ENTRY_10fdfb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fdfb20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fdfc70; body size 5 bytes.
#line 1 "ENTRY_10fdfc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fdfc70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fdfc80; body size 5 bytes.
#line 1 "ENTRY_10fdfc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fdfc80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fdfc90; body size 28 bytes.
#line 1 "ENTRY_10fdfc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdfc90(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10fdfcc0; body size 28 bytes.
#line 1 "ENTRY_10fdfcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdfcc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10fdfcf0; body size 28 bytes.
#line 1 "ENTRY_10fdfcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdfcf0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10fdfd20; body size 3 bytes.
#line 1 "ENTRY_10fdfd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fdfd20(void)

{
  return;
}


// Reference entry 10fdfda0; body size 102 bytes.
#line 1 "ENTRY_10fdfda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fdfda0(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  size_t _Size;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) == *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(thunk_FUN_101a7120(param_3,param_4), 0);
    *param_2 = (undefined4)(uVar2);
    return (undefined4 *)(param_2);
  }
  uVar2 = (undefined4)(*param_4);
  if ((undefined4 *)((param_3)) == (undefined4 *)(puVar1)) {
    *puVar1 = (undefined4)(uVar2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    *param_2 = (undefined4)(param_3);
    return (undefined4 *)(param_2);
  }
  *puVar1 = (undefined4)(puVar1[-1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  _Size = (size_t)((int)puVar1 + (-4 - (int)param_3));
  memmove((char *)((int)puVar1 - _Size),param_3,_Size);
  *param_3 = (undefined4)(uVar2);
  *param_2 = (undefined4)(param_3);
  return (undefined4 *)(param_2);
}


// Reference entry 10fe0070; body size 5 bytes.
#line 1 "ENTRY_10fe0070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fe0070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe0080; body size 5 bytes.
#line 1 "ENTRY_10fe0080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fe0080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe0090; body size 5 bytes.
#line 1 "ENTRY_10fe0090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fe0090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe00a0; body size 5 bytes.
#line 1 "ENTRY_10fe00a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fe00a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe00b0; body size 19 bytes.
#line 1 "ENTRY_10fe00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fe00b0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10fe00d0; body size 5 bytes.
#line 1 "ENTRY_10fe00d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fe00d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe00e0; body size 31 bytes.
#line 1 "ENTRY_10fe00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  FUN_10fe00e0(int param_1,int param_2,undefined4 param_3)

{
  thunk_FUN_10fdf810(param_1,param_2,param_2 - param_1 >> 2,param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe0110; body size 54 bytes.
#line 1 "ENTRY_10fe0110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe0110(undefined4 *param_1)

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


// Reference entry 10fe0160; body size 32 bytes.
#line 1 "ENTRY_10fe0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe0160(undefined4 *param_2)
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


// Reference entry 10fe01d0; body size 21 bytes.
#line 1 "ENTRY_10fe01d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe01d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe01f0; body size 11 bytes.
#line 1 "ENTRY_10fe01f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe01f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe0200; body size 11 bytes.
#line 1 "ENTRY_10fe0200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe0200(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe0210; body size 23 bytes.
#line 1 "ENTRY_10fe0210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe0210(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe0230; body size 3 bytes.
#line 1 "ENTRY_10fe0230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe0230(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe0240; body size 23 bytes.
#line 1 "ENTRY_10fe0240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe0240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe0330; body size 49 bytes.
#line 1 "ENTRY_10fe0330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe0330(undefined4 param_2,undefined1 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *(undefined1*)(param_1 + 3) = (undefined1)(param_3);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCDataRow);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe0370; body size 62 bytes.
#line 1 "ENTRY_10fe0370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe0370(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCPendingDataObject);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[1] = (undefined4)((uint)&ghidra_vftable_SCArray);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe07e0; body size 3 bytes.
#line 1 "ENTRY_10fe07e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fe07e0(void)

{
  return;
}


// Reference entry 10fe0900; body size 28 bytes.
#line 1 "ENTRY_10fe0900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fe0900(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInSavedQueueAIOOp);
  param_1[0x18] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInSavedQueueAIOOp);
  param_1[0x11b] = (undefined4)((uint)&ghidra_vftable_RUpnpAVTReorderTracksInSavedQueueAIOOp);
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


// Reference entry 10fe0930; body size 19 bytes.
#line 1 "ENTRY_10fe0930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fe0930(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10fe0bb0; body size 65 bytes.
#line 1 "ENTRY_10fe0bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fe0bb0(int *param_2)
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


// Reference entry 10fe0c10; body size 12 bytes.
#line 1 "ENTRY_10fe0c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10fe0c10(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10fe0c20; body size 7 bytes.
#line 1 "ENTRY_10fe0c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fe0c20(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fe0c30; body size 3 bytes.
#line 1 "ENTRY_10fe0c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe0c30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fe0c40; body size 18 bytes.
#line 1 "ENTRY_10fe0c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe0c40(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 10fe0c60; body size 14 bytes.
#line 1 "ENTRY_10fe0c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fe0c60(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10fe0c80; body size 14 bytes.
#line 1 "ENTRY_10fe0c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fe0c80(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10fe10e0; body size 49 bytes.
#line 1 "ENTRY_10fe10e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10fe10e0(uint param_2)
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


// Reference entry 10fe11d0; body size 3 bytes.
#line 1 "ENTRY_10fe11d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe11d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe11e0; body size 3 bytes.
#line 1 "ENTRY_10fe11e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe11e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe11f0; body size 3 bytes.
#line 1 "ENTRY_10fe11f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe11f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe1200; body size 3 bytes.
#line 1 "ENTRY_10fe1200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe1200(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fe1210; body size 13 bytes.
#line 1 "ENTRY_10fe1210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 *  __stdcall FUN_10fe1210(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe1220; body size 13 bytes.
#line 1 "ENTRY_10fe1220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fe1220(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10fe1230; body size 3 bytes.
#line 1 "ENTRY_10fe1230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fe1230(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10fe1240; body size 6 bytes.
#line 1 "ENTRY_10fe1240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fe1240(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10fe14b0; body size 3 bytes.
#line 1 "ENTRY_10fe14b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe14b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fe14c0; body size 3 bytes.
#line 1 "ENTRY_10fe14c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fe14c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10fe14e0; body size 87 bytes.
#line 1 "ENTRY_10fe14e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10fe14e0(uint param_1)

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


// Reference entry 10fe1550; body size 59 bytes.
#line 1 "ENTRY_10fe1550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe1550(undefined4 *param_2)
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
      ((SCVtbl_1_0*)(piVar2))->v();
    }
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 8);
    return;
  }
  thunk_FUN_10fdea70<>(puVar1,param_2);
  return;
}


// Reference entry 10fe15b0; body size 11 bytes.
#line 1 "ENTRY_10fe15b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe15b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10fe15c0; body size 9 bytes.
#line 1 "ENTRY_10fe15c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fe15c0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10fe15d0; body size 25 bytes.
#line 1 "ENTRY_10fe15d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fe15d0(int param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((undefined4 *)(param_1 + 8));
  thunk_FUN_10fde940(*puVar1,*(undefined4 *)(param_1 + 0xc),puVar1);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(*puVar1);
  return;
}


// Reference entry 10fe2270; body size 42 bytes.
#line 1 "ENTRY_10fe2270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe2270(undefined4 *param_2,void *param_3)
{
  int param_1 = (int )this;
  memmove(param_3,(char *)((int)param_3 + 4),*(int *)(param_1 + 4) - ((int)param_3 + 4));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  *param_2 = (undefined4)(param_3);
  return;
}


// Reference entry 10fe23c0; body size 13 bytes.
#line 1 "ENTRY_10fe23c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10fe23c0(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 4);
}


// Reference entry 10fe23d0; body size 13 bytes.
#line 1 "ENTRY_10fe23d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10fe23d0(int param_2)
{
  int param_1 = (int )this;
  return (int)(*(int *)(param_1 + 8) + param_2 * 8);
}


// Reference entry 10fe24a0; body size 7 bytes.
#line 1 "ENTRY_10fe24a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe24a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0xd7d8));
}


// Reference entry 10fe2770; body size 4 bytes.
#line 1 "ENTRY_10fe2770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe2770(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10fe2780; body size 4 bytes.
#line 1 "ENTRY_10fe2780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10fe2780(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0xc));
}


// Reference entry 10fe2790; body size 102 bytes.
#line 1 "ENTRY_10fe2790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe2790(undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  size_t _Size;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  if ((undefined4 *)(puVar1) == *(undefined4 **)(param_1 + 8)) {
    uVar2 = (undefined4)(thunk_FUN_101a7120(param_3,param_4), 0);
    *param_2 = (undefined4)(uVar2);
    return (undefined4 *)(param_2);
  }
  uVar2 = (undefined4)(*param_4);
  if ((undefined4 *)((param_3)) == (undefined4 *)(puVar1)) {
    *puVar1 = (undefined4)(uVar2);
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
    *param_2 = (undefined4)(param_3);
    return (undefined4 *)(param_2);
  }
  *puVar1 = (undefined4)(puVar1[-1]);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  _Size = (size_t)((int)puVar1 + (-4 - (int)param_3));
  memmove((char *)((int)puVar1 - _Size),param_3,_Size);
  *param_3 = (undefined4)(uVar2);
  *param_2 = (undefined4)(param_3);
  return (undefined4 *)(param_2);
}


// Reference entry 10fe2810; body size 24 bytes.
#line 1 "ENTRY_10fe2810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __stdcall FUN_10fe2810(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10fdfe20<>(param_1,param_2,param_3);
  return (undefined4)(param_1);
}


// Reference entry 10fe2830; body size 143 bytes.
#line 1 "ENTRY_10fe2830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe2830(uint param_2,undefined4 *param_3)
{
  int param_1 = (int )this;
  undefined4 *_Src;
  undefined4 *puVar1;
  undefined4 uVar2;
  size_t _Size;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 0xc), 0);
  if ((uint)((int)puVar1 - *(int *)(param_1 + 8) >> 2) <= param_2) {
    if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
      *puVar1 = (undefined4)(*param_3);
      *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 4);
      return;
    }
    thunk_FUN_101a7120(puVar1,param_3);
    return;
  }
  _Src = (undefined4 *)((undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4));
  if ((undefined4 *)(puVar1) != *(undefined4 **)(param_1 + 0x10)) {
    uVar2 = (undefined4)(*param_3);
    if ((undefined4 *)(_Src) == (undefined4 *)(puVar1)) {
      *puVar1 = (undefined4)(uVar2);
      *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 4);
      return;
    }
    *puVar1 = (undefined4)(puVar1[-1]);
    *(int*)(param_1 + 0xc) = (int)(*(int *)(param_1 + 0xc) + 4);
    _Size = (size_t)((int)puVar1 + (-4 - (int)_Src));
    memmove((char *)((int)puVar1 - _Size),_Src,_Size);
    *_Src = (undefined4)(uVar2);
    return;
  }
  thunk_FUN_101a7120(_Src,param_3);
  return;
}


// Reference entry 10fe34d0; body size 6 bytes.
#line 1 "ENTRY_10fe34d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fe34d0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10fe34e0; body size 6 bytes.
#line 1 "ENTRY_10fe34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fe34e0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10fe36f0; body size 28 bytes.
#line 1 "ENTRY_10fe36f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fe36f0(undefined4 *param_1)

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


// Reference entry 10fe4530; body size 5 bytes.
#line 1 "ENTRY_10fe4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fe4530(int param_1)

{
  *(undefined1*)(param_1 + 0xc) = (undefined1)(1);
  return;
}


// Reference entry 10fe4590; body size 10 bytes.
#line 1 "ENTRY_10fe4590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fe4590(int param_1)

{
  return (int)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 3);
}


// Reference entry 10fe45a0; body size 9 bytes.
#line 1 "ENTRY_10fe45a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fe45a0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 3);
}


// Reference entry 10fe45b0; body size 38 bytes.
#line 1 "ENTRY_10fe45b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe45b0(undefined4 param_2,int param_3)
{
  int param_1 = (int )this;
  int iVar1;
  
  iVar1 = (int)(*(int *)(param_1 + 8) + param_3 * 4);
  thunk_FUN_10fdf810(iVar1,*(int *)(param_1 + 0xc),*(int *)(param_1 + 0xc) - iVar1 >> 2,param_2);
  return;
}


// Reference entry 10fe5150; body size 11 bytes.
#line 1 "ENTRY_10fe5150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10fe5150(undefined4 param_2,undefined4 param_3,undefined4 param_4,
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

  pvVar3 = (void *)(operator_new(0x11c38), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_2);
    uVar6 = (undefined4)(param_3);
    uVar7 = (undefined4)(param_4);
    uVar4 = (undefined4)(((SCVtbl_2_5*)(piVar1))->v((int)(param_2),(int)(param_3),(int)(param_4),(int)(iVar8),(int)(uVar2)), 0);
    uVar5 = (undefined4)(thunk_FUN_111d11c0((int)(uVar4),(int)(uVar5),(int)(uVar6),(int)(uVar7),(int)(iVar8)), 0);
  }

  pvVar3 = (void *)(operator_new(0x11c38), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar6 = (undefined4)(0);
  }
  else {
    iVar8 = (int)(piVar1[2]);
    uVar6 = (undefined4)(((SCVtbl_2_4*)(piVar1))->v((int)(param_2),(int)(param_3),(int)(param_4),(int)(iVar8)), 0);
    uVar6 = (undefined4)(thunk_FUN_111d11c0((int)(uVar6),(int)(param_2),(int)(param_3),(int)(param_4),(int)(iVar8)), 0);
  }

  uVar7 = (undefined4)(thunk_FUN_111dd660(), 0);
  uVar4 = (undefined4)(((SCVtbl_3_0*)(piVar1))->v(), 0);
  pvVar3 = (void *)(operator_new(100), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0((int)(uVar5),(int)(uVar6),(int)(uVar7),(int)(uVar4),(int)(&DAT_122f1250)), 0);
  }
  *param_5 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10fe5160; body size 11 bytes.
#line 1 "ENTRY_10fe5160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10fe5160(undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 *param_6)
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
  undefined4 uVar8;
  int iVar9;
  void *pvStack_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  piVar1 = (int *)(*(int **)(param_1 + 0x1688), 0);


  uVar2 = (uint)(DAT_12126b84);

  pvVar3 = (void *)(operator_new(0x11c38), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    iVar9 = (int)(piVar1[2]);
    uVar5 = (undefined4)(param_2);
    uVar6 = (undefined4)(param_3);
    uVar7 = (undefined4)(param_4);
    uVar8 = (undefined4)(param_5);
    uVar4 = (undefined4)(((SCVtbl_2_6*)(piVar1))->v((int)(param_2),(int)(param_3),(int)(param_4),(int)(param_5),(int)(iVar9),(int)(uVar2)), 0);
    uVar5 = (undefined4)(thunk_FUN_111d1960((int)(uVar4),(int)(uVar5),(int)(uVar6),(int)(uVar7),(int)(uVar8),(int)(iVar9)), 0);
  }

  pvVar3 = (void *)(operator_new(0x11c38), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar6 = (undefined4)(0);
  }
  else {
    iVar9 = (int)(piVar1[2]);
    uVar6 = (undefined4)(((SCVtbl_2_5*)(piVar1))->v((int)(param_2),(int)(param_3),(int)(param_4),(int)(param_5),(int)(iVar9)), 0);
    uVar6 = (undefined4)(thunk_FUN_111d1960((int)(uVar6),(int)(param_2),(int)(param_3),(int)(param_4),(int)(param_5),(int)(iVar9)), 0);
  }

  uVar7 = (undefined4)(thunk_FUN_111dd660(), 0);
  uVar8 = (undefined4)(((SCVtbl_3_0*)(piVar1))->v(), 0);
  pvVar3 = (void *)(operator_new(100), 0);

  if ((void *)(pvVar3) == (void *)(0x0)) {
    uVar5 = (undefined4)(0);
  }
  else {
    uVar5 = (undefined4)(thunk_FUN_111ca9f0((int)(uVar5),(int)(uVar6),(int)(uVar7),(int)(uVar8),(int)(&DAT_122f1250)), 0);
  }
  *param_6 = (undefined4)(uVar5);

  return (undefined4)(0);

 } catch (...) { }
}


// Reference entry 10fe64a0; body size 6 bytes.
#line 1 "ENTRY_10fe64a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10fe64a0(void)

{
  return (char *)("SCIActionWithIntDescriptor");
}


// Reference entry 10fe64b0; body size 27 bytes.
#line 1 "ENTRY_10fe64b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe64b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe6520; body size 9 bytes.
#line 1 "ENTRY_10fe6520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe6520(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIActionWithIntDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe6720; body size 7 bytes.
#line 1 "ENTRY_10fe6720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fe6720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10fe6850; body size 3 bytes.
#line 1 "ENTRY_10fe6850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe6850(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fe6860; body size 7 bytes.
#line 1 "ENTRY_10fe6860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fe6860(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fe6870; body size 3 bytes.
#line 1 "ENTRY_10fe6870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe6870(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fe6d10; body size 6 bytes.
#line 1 "ENTRY_10fe6d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10fe6d10(void)

{
  return (char *)("SCIActionWithIntDescriptor");
}


// Reference entry 10fe6d90; body size 3 bytes.
#line 1 "ENTRY_10fe6d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fe6d90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fe6f60; body size 28 bytes.
#line 1 "ENTRY_10fe6f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fe6f60(undefined4 *param_1)

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


// Reference entry 10fe8770; body size 18 bytes.
#line 1 "ENTRY_10fe8770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe8770(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe8790; body size 25 bytes.
#line 1 "ENTRY_10fe8790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe8790(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe87b0; body size 25 bytes.
#line 1 "ENTRY_10fe87b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe87b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe87d0; body size 22 bytes.
#line 1 "ENTRY_10fe87d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe87d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe88a0; body size 18 bytes.
#line 1 "ENTRY_10fe88a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fe88a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe8940; body size 22 bytes.
#line 1 "ENTRY_10fe8940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe8940(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe8a60; body size 22 bytes.
#line 1 "ENTRY_10fe8a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fe8a60(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fe8d20; body size 83 bytes.
#line 1 "ENTRY_10fe8d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fe8d20(int *param_2)
{
  int *param_1 = (int *)this;
  int *piVar1;
  
  param_2 = (int *)((int *)*param_2);
  if ((int *)(param_2) != (int *)((int *)*param_1)) {
    piVar1 = (int *)((int *)param_1[1]);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *param_1 = (int)(0);
      param_1[1] = (int)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
    }
    *param_1 = (int)((int)param_2);
    if ((int *)(param_2) != (int *)(0x0)) {
      piVar1 = (int *)((int *)((SCVtbl_3_0*)(param_2))->v(), 0);
      param_1[1] = (int)((int)piVar1);
      ((SCVtbl_1_0*)(piVar1))->v();
      return (int *)(param_1);
    }
    param_1[1] = (int)(0);
  }
  return (int *)(param_1);
}


// Reference entry 10fe8f70; body size 22 bytes.
#line 1 "ENTRY_10fe8f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fe8f70(undefined4 *param_1,undefined4 *param_2)

{
  thunk_FUN_10fee6a0((int)(*param_1),(int)(*param_2));
  return;
}


// Reference entry 10fe8f90; body size 25 bytes.
#line 1 "ENTRY_10fe8f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fe8f90(void)

{
  void *pvVar1;
  
  pvVar1 = (void *)(operator_new(0x14), 0);
  *(void**)pvVar1 = (void *)((void *)(pvVar1));
  *(void**)((int)pvVar1 + 4) = (void *)(pvVar1);
  *(void**)((int)pvVar1 + 8) = (void *)(pvVar1);
  *(undefined2*)((int)pvVar1 + 0xc) = (undefined2)(0x101);
  return;
}


// Reference entry 10fe9030; body size 13 bytes.
#line 1 "ENTRY_10fe9030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fe9030(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fe9040; body size 13 bytes.
#line 1 "ENTRY_10fe9040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fe9040(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10fe9050; body size 3 bytes.
#line 1 "ENTRY_10fe9050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fe9050(void)

{
  return;
}


// Reference entry 10fe92e0; body size 39 bytes.
#line 1 "ENTRY_10fe92e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe92e0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fe9310; body size 39 bytes.
#line 1 "ENTRY_10fe9310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe9310(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fe9340; body size 39 bytes.
#line 1 "ENTRY_10fe9340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe9340(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fe9370; body size 39 bytes.
#line 1 "ENTRY_10fe9370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe9370(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fe93a0; body size 23 bytes.
#line 1 "ENTRY_10fe93a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe93a0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_10d5dc90((int)(param_2));
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
  return;
}


// Reference entry 10fe93c0; body size 39 bytes.
#line 1 "ENTRY_10fe93c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe93c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fe93f0; body size 39 bytes.
#line 1 "ENTRY_10fe93f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fe93f0(undefined4 *param_2)
{
  int param_1 = (int )this;
  undefined4 *puVar1;
  int *piVar2;
  
  puVar1 = (undefined4 *)(*(undefined4 **)(param_1 + 4), 0);
  *puVar1 = (undefined4)(*param_2);
  piVar2 = (int *)((int *)param_2[1]);
  puVar1[1] = (undefined4)(piVar2);
  if ((int *)(piVar2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(piVar2))->v();
  }
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 8);
  return;
}


// Reference entry 10fe9d00; body size 73 bytes.
#line 1 "ENTRY_10fe9d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fe9d00(int *param_2,uint *param_3)
{
  int *param_1 = (int *)this;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = (int)(*param_1);
  puVar4 = (undefined4 *)(*(undefined4 **)(iVar1 + 4), 0);
  *param_2 = (int)((int)puVar4);
  param_2[1] = (int)(0);
  param_2[2] = (int)(iVar1);
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    uVar2 = (uint)(*param_3);
    do {
      *param_2 = (int)((int)puVar4);
      uVar3 = (uint)(puVar4[4]);
      if (uVar2 <= uVar3) {
        param_2[2] = (int)((int)puVar4);
        puVar4 = (undefined4 *)((undefined4 *)*puVar4);
      }
      else {
        puVar4 = (undefined4 *)((undefined4 *)puVar4[2]);
      }
      param_2[1] = (int)((uint)(uVar2 <= uVar3));
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return (int *)(param_2);
}


// Reference entry 10fe9d60; body size 15 bytes.
#line 1 "ENTRY_10fe9d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fe9d60(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10fe9d80; body size 15 bytes.
#line 1 "ENTRY_10fe9d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fe9d80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10fe9da0; body size 7 bytes.
#line 1 "ENTRY_10fe9da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fe9da0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fe9db0; body size 7 bytes.
#line 1 "ENTRY_10fe9db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fe9db0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fe9dc0; body size 148 bytes.
#line 1 "ENTRY_10fe9dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fe9dc0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)(param_3 - param_1 >> 3);
  if (0x28 < iVar1) {
    iVar2 = (int)(iVar1 + 1 >> 3);
    iVar1 = (int)(iVar2 * 8);
    thunk_FUN_10fea200(param_1,iVar1 + param_1,param_1 + iVar2 * 0x10,param_4);
    thunk_FUN_10fea200(param_2 + iVar2 * -8,param_2,iVar1 + param_2,param_4);
    iVar3 = (int)(param_3 + iVar2 * -8);
    thunk_FUN_10fea200(param_3 + iVar2 * -0x10,iVar3,param_3,param_4);
    thunk_FUN_10fea200(param_1 + iVar1,param_2,iVar3,param_4);
    return;
  }
  thunk_FUN_10fea200(param_1,param_2,param_3,param_4);
  return;
}


// Reference entry 10fea0f0; body size 31 bytes.
#line 1 "ENTRY_10fea0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

uint __stdcall FUN_10fea0f0(int param_1,uint *param_2){
  uint in_EAX;
  
  if ((*(char *)(param_1 + 0xd) == '\0') && (in_EAX = (uint)(*param_2), *(uint *)(param_1 + 0x10) <= (uint)(in_EAX)) ) {
    return (uint)(((uint)((int3)(in_EAX >> 8)) << 8 | (uint)(1)));
  }
  return (uint)(in_EAX & 0xffffff00);
}


// Reference entry 10fea280; body size 92 bytes.
#line 1 "ENTRY_10fea280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * FUN_10fea280(int *param_1,int *param_2,int *param_3)

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
    param_1 = (int *)(param_1 + 2);
    param_3 = (int *)(param_3 + 2);
  } while ((int *)(param_1) != (int *)(param_2));
  return (int *)(param_3);
}


// Reference entry 10feac80; body size 11 bytes.
#line 1 "ENTRY_10feac80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feac80(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = (undefined4)(param_2);
  return;
}


// Reference entry 10feae80; body size 92 bytes.
#line 1 "ENTRY_10feae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feae80(int *param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5)

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
  thunk_FUN_10feac90(param_1,0,param_2 - (int)param_1 >> 3,param_4,param_5);
  return;
}


// Reference entry 10feb010; body size 181 bytes.
#line 1 "ENTRY_10feb010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feb010(int param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  
  while (iVar2 = (int)(param_2), param_3 < iVar2) {
    param_2 = (int)(iVar2 + -1 >> 1);
    cVar3 = (char)(thunk_FUN_10fee6a0((int)(*(undefined4 *)(param_1 + param_2 * 8)),(int)(*param_4)), 0);
    if (cVar3 == '\0') break;
    iVar4 = (int)(*(int *)(param_1 + param_2 * 8));
    if ((int)(iVar4) != *(int *)(param_1 + iVar2 * 8)) {
      piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8), 0);
      if ((int *)(piVar1) != (int *)(0x0)) {
        *(undefined4*)(param_1 + iVar2 * 8) = (undefined4)(0);
        *(undefined4*)(param_1 + 4 + iVar2 * 8) = (undefined4)(0);
        ((SCVtbl_2_0*)(piVar1))->v();
        iVar4 = (int)(*(int *)(param_1 + param_2 * 8));
      }
      *(int*)(param_1 + iVar2 * 8) = (int)(iVar4);
      piVar1 = (int *)(*(int **)(param_1 + 4 + param_2 * 8), 0);
      *(int**)(param_1 + 4 + iVar2 * 8) = (int *)(piVar1);
      if ((int *)(piVar1) != (int *)(0x0)) {
        ((SCVtbl_1_0*)(piVar1))->v();
      }
    }
  }
  iVar4 = (int)(*param_4);
  if ((int)(iVar4) != *(int *)(param_1 + iVar2 * 8)) {
    piVar1 = (int *)(*(int **)(param_1 + 4 + iVar2 * 8), 0);
    if ((int *)(piVar1) != (int *)(0x0)) {
      *(undefined4*)(param_1 + iVar2 * 8) = (undefined4)(0);
      *(undefined4*)(param_1 + 4 + iVar2 * 8) = (undefined4)(0);
      ((SCVtbl_2_0*)(piVar1))->v();
      iVar4 = (int)(*param_4);
    }
    *(int*)(param_1 + iVar2 * 8) = (int)(iVar4);
    piVar1 = (int *)((int *)param_4[1]);
    *(int**)(param_1 + 4 + iVar2 * 8) = (int *)(piVar1);
    if ((int *)(piVar1) != (int *)(0x0)) {
                    
                    
      ((SCVtbl_1_0*)(piVar1))->v();
      return;
    }
  }
  return;
}


// Reference entry 10feb5d0; body size 5 bytes.
#line 1 "ENTRY_10feb5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10feb5d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10feb5e0; body size 5 bytes.
#line 1 "ENTRY_10feb5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10feb5e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10feb870; body size 5 bytes.
#line 1 "ENTRY_10feb870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10feb870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10feb8c0; body size 5 bytes.
#line 1 "ENTRY_10feb8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10feb8c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10feb8d0; body size 5 bytes.
#line 1 "ENTRY_10feb8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10feb8d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10feb8e0; body size 5 bytes.
#line 1 "ENTRY_10feb8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10feb8e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10feb8f0; body size 5 bytes.
#line 1 "ENTRY_10feb8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10feb8f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10feb900; body size 5 bytes.
#line 1 "ENTRY_10feb900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10feb900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10feb940; body size 40 bytes.
#line 1 "ENTRY_10feb940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10feb940(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1 = (undefined4 *)((undefined4 *)uVar1);
  thunk_FUN_103beae0((int)(&param_1),(int)(param_2));
  return;
}


// Reference entry 10feb980; body size 13 bytes.
#line 1 "ENTRY_10feb980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feb980(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10feb990; body size 14 bytes.
#line 1 "ENTRY_10feb990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feb990(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  thunk_FUN_10d5dc90((int)(param_3));
  return;
}


// Reference entry 10feb9b0; body size 28 bytes.
#line 1 "ENTRY_10feb9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feb9b0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10feb9e0; body size 28 bytes.
#line 1 "ENTRY_10feb9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feb9e0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10feba10; body size 28 bytes.
#line 1 "ENTRY_10feba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feba10(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10feba40; body size 28 bytes.
#line 1 "ENTRY_10feba40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feba40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10feba70; body size 28 bytes.
#line 1 "ENTRY_10feba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10feba70(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10febaa0; body size 28 bytes.
#line 1 "ENTRY_10febaa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10febaa0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


// Reference entry 10febad0; body size 3 bytes.
#line 1 "ENTRY_10febad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10febad0(void)

{
  return;
}


// Reference entry 10febbc0; body size 40 bytes.
#line 1 "ENTRY_10febbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10febbc0(undefined4 param_2)
{
  int param_1 = (int )this;
  if (*(int *)((param_1 + 4)) != *(int *)((param_1 + 8))) {
    thunk_FUN_10d5dc90((int)(param_2));
    *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 0x20);
    return;
  }
  thunk_FUN_10fe9420<>(*(int *)(param_1 + 4),param_2);
  return;
}


// Reference entry 10febca0; body size 15 bytes.
#line 1 "ENTRY_10febca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febca0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10febcc0; body size 15 bytes.
#line 1 "ENTRY_10febcc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febcc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10febce0; body size 5 bytes.
#line 1 "ENTRY_10febce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febce0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febcf0; body size 5 bytes.
#line 1 "ENTRY_10febcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febcf0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febd00; body size 5 bytes.
#line 1 "ENTRY_10febd00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febd00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febd10; body size 5 bytes.
#line 1 "ENTRY_10febd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febd10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febd20; body size 5 bytes.
#line 1 "ENTRY_10febd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febd20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febd30; body size 5 bytes.
#line 1 "ENTRY_10febd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febd30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febd40; body size 5 bytes.
#line 1 "ENTRY_10febd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febd40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febd90; body size 5 bytes.
#line 1 "ENTRY_10febd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febd90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febda0; body size 5 bytes.
#line 1 "ENTRY_10febda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febda0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febdb0; body size 5 bytes.
#line 1 "ENTRY_10febdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febdb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febe00; body size 5 bytes.
#line 1 "ENTRY_10febe00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febe00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febe10; body size 5 bytes.
#line 1 "ENTRY_10febe10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febe10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febe20; body size 5 bytes.
#line 1 "ENTRY_10febe20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febe20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10febe30; body size 6 bytes.
#line 1 "ENTRY_10febe30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febe30(void)

{
  return (undefined4)(6);
}


// Reference entry 10febe40; body size 6 bytes.
#line 1 "ENTRY_10febe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10febe40(void)

{
  return (undefined4)(9);
}


// Reference entry 10fec030; body size 5 bytes.
#line 1 "ENTRY_10fec030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fec030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fec040; body size 5 bytes.
#line 1 "ENTRY_10fec040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fec040(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fec140; body size 16 bytes.
#line 1 "ENTRY_10fec140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec1a0; body size 32 bytes.
#line 1 "ENTRY_10fec1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec1a0(undefined4 *param_2)
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


// Reference entry 10fec210; body size 16 bytes.
#line 1 "ENTRY_10fec210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec210(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec230; body size 16 bytes.
#line 1 "ENTRY_10fec230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec230(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec270; body size 18 bytes.
#line 1 "ENTRY_10fec270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec270(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec2d0; body size 11 bytes.
#line 1 "ENTRY_10fec2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec2d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec360; body size 11 bytes.
#line 1 "ENTRY_10fec360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec360(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec370; body size 16 bytes.
#line 1 "ENTRY_10fec370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec370(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec390; body size 21 bytes.
#line 1 "ENTRY_10fec390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec390(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec3b0; body size 21 bytes.
#line 1 "ENTRY_10fec3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec3b0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec3d0; body size 11 bytes.
#line 1 "ENTRY_10fec3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec3d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec3e0; body size 11 bytes.
#line 1 "ENTRY_10fec3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec3e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec3f0; body size 23 bytes.
#line 1 "ENTRY_10fec3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec3f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec410; body size 23 bytes.
#line 1 "ENTRY_10fec410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec410(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec430; body size 3 bytes.
#line 1 "ENTRY_10fec430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fec430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fec440; body size 3 bytes.
#line 1 "ENTRY_10fec440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fec440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fec450; body size 3 bytes.
#line 1 "ENTRY_10fec450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fec450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fec460; body size 9 bytes.
#line 1 "ENTRY_10fec460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec460(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec470; body size 52 bytes.
#line 1 "ENTRY_10fec470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec470(undefined4 *param_1)

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


// Reference entry 10fec4c0; body size 23 bytes.
#line 1 "ENTRY_10fec4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec4c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec4e0; body size 23 bytes.
#line 1 "ENTRY_10fec4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec4e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec500; body size 42 bytes.
#line 1 "ENTRY_10fec500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec500(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGenericEventSink);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec540; body size 9 bytes.
#line 1 "ENTRY_10fec540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10fec540(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCGenericEventSinkCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10fec550; body size 42 bytes.
#line 1 "ENTRY_10fec550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fec550(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[1] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + 1);
  param_1[2] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCHistoryHideActionDescriptor);
  return (undefined4 *)(param_1);
}


// Reference entry 10fed4e0; body size 18 bytes.
#line 1 "ENTRY_10fed4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10fed4e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10fed790; body size 19 bytes.
#line 1 "ENTRY_10fed790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fed790(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10fed7b0; body size 19 bytes.
#line 1 "ENTRY_10fed7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fed7b0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x14);
  }
  return;
}


// Reference entry 10fed920; body size 19 bytes.
#line 1 "ENTRY_10fed920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fed920(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10fed940; body size 19 bytes.
#line 1 "ENTRY_10fed940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fed940(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10fee250; body size 3 bytes.
#line 1 "ENTRY_10fee250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fee250(void)

{
  return;
}


// Reference entry 10fee2d0; body size 65 bytes.
#line 1 "ENTRY_10fee2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10fee2d0(int *param_2)
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


// Reference entry 10fee490; body size 16 bytes.
#line 1 "ENTRY_10fee490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fee490(undefined4 *param_2,undefined4 param_3)
{
  undefined4 param_1 = (undefined4 )this;
  *param_2 = (undefined4)(param_1);
  param_2[1] = (undefined4)(param_3);
  return;
}


// Reference entry 10fee4b0; body size 12 bytes.
#line 1 "ENTRY_10fee4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10fee4b0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 8);
}


// Reference entry 10fee4c0; body size 7 bytes.
#line 1 "ENTRY_10fee4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fee4c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fee4d0; body size 3 bytes.
#line 1 "ENTRY_10fee4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fee4d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fee4e0; body size 7 bytes.
#line 1 "ENTRY_10fee4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fee4e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fee4f0; body size 3 bytes.
#line 1 "ENTRY_10fee4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fee4f0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fee500; body size 3 bytes.
#line 1 "ENTRY_10fee500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fee500(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fee510; body size 7 bytes.
#line 1 "ENTRY_10fee510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fee510(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fee520; body size 3 bytes.
#line 1 "ENTRY_10fee520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fee520(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fee530; body size 7 bytes.
#line 1 "ENTRY_10fee530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fee530(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fee540; body size 7 bytes.
#line 1 "ENTRY_10fee540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fee540(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fee550; body size 7 bytes.
#line 1 "ENTRY_10fee550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10fee550(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10fee560; body size 55 bytes.
#line 1 "ENTRY_10fee560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10fee560(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint3 uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (uint)(param_1[1]);
  uVar5 = (uint)(1 << (uVar1 & 0x1f));
  uVar4 = (uint)(0);
  if (0x1f < (uVar1 & 0x3f)) {
    uVar4 = (uint)(uVar5);
  }
  uVar5 = (uint)(uVar5 ^ uVar4);
  iVar2 = (int)(*param_1);
  if (0x3f < (uVar1 & 0x3f)) {
    uVar4 = (uint)(uVar5);
  }
  uVar3 = (uint3)((uint3)((uint)iVar2 >> 8));
  if ((uVar5 & *(uint *)(iVar2 + (uVar1 >> 6) * 8)) != 0 ||
      (uVar4 & *(uint *)(iVar2 + 4 + (uVar1 >> 6) * 8)) != 0) {
    return (int)(((uint)(uVar3) << 8 | (uint)(1)));
  }
  return (int)((uint)uVar3 << 8);
}


// Reference entry 10fee5b0; body size 3 bytes.
#line 1 "ENTRY_10fee5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fee5b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fee5c0; body size 3 bytes.
#line 1 "ENTRY_10fee5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fee5c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fee5d0; body size 3 bytes.
#line 1 "ENTRY_10fee5d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fee5d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10fee5e0; body size 18 bytes.
#line 1 "ENTRY_10fee5e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fee5e0(int *param_2,int param_3)
{
  int *param_1 = (int *)this;
  *param_2 = (int)(*param_1 + param_3 * 8);
  return;
}


// Reference entry 10fee680; body size 18 bytes.
#line 1 "ENTRY_10fee680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10fee680(uint *param_1,uint *param_2)

{
  return (bool)(*param_1 < (uint)(*(param_2)));
}


// Reference entry 10feeb30; body size 14 bytes.
#line 1 "ENTRY_10feeb30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10feeb30(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10feeb50; body size 14 bytes.
#line 1 "ENTRY_10feeb50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10feeb50(int param_2)
{
  int *param_1 = (int *)this;
  *param_1 = (int)(*param_1 + param_2 * 8);
  return (int *)(param_1);
}


// Reference entry 10feef00; body size 31 bytes.
#line 1 "ENTRY_10feef00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10feef00(undefined4 *param_1)

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


// Reference entry 10feef50; body size 49 bytes.
#line 1 "ENTRY_10feef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10feef50(uint param_2)
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


// Reference entry 10feef90; body size 49 bytes.
#line 1 "ENTRY_10feef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __thiscall Recovered_Bulk::m_FUN_10feef90(uint param_2)
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


// Reference entry 10fef0f0; body size 14 bytes.
#line 1 "ENTRY_10fef0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fef0f0(int param_1)

{
  if (*(int *)(param_1 + 4) != 0xccccccc) {
    return;
  }
                    
  std::_Xlength_error("map/set too long");
}


// Reference entry 10fef2d0; body size 5 bytes.
#line 1 "ENTRY_10fef2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fef2d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef320; body size 3 bytes.
#line 1 "ENTRY_10fef320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef330; body size 3 bytes.
#line 1 "ENTRY_10fef330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef340; body size 3 bytes.
#line 1 "ENTRY_10fef340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef340(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef350; body size 3 bytes.
#line 1 "ENTRY_10fef350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef350(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef360; body size 3 bytes.
#line 1 "ENTRY_10fef360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef360(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef370; body size 3 bytes.
#line 1 "ENTRY_10fef370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef370(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef380; body size 3 bytes.
#line 1 "ENTRY_10fef380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef380(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef390; body size 3 bytes.
#line 1 "ENTRY_10fef390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef390(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef3a0; body size 3 bytes.
#line 1 "ENTRY_10fef3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef3a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef3b0; body size 3 bytes.
#line 1 "ENTRY_10fef3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef3b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef3c0; body size 3 bytes.
#line 1 "ENTRY_10fef3c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef3c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef3d0; body size 3 bytes.
#line 1 "ENTRY_10fef3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef3d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef3e0; body size 3 bytes.
#line 1 "ENTRY_10fef3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef3e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef3f0; body size 3 bytes.
#line 1 "ENTRY_10fef3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef3f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef400; body size 3 bytes.
#line 1 "ENTRY_10fef400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef410; body size 3 bytes.
#line 1 "ENTRY_10fef410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef6b0; body size 5 bytes.
#line 1 "ENTRY_10fef6b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10fef6b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10fef6c0; body size 79 bytes.
#line 1 "ENTRY_10fef6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fef6c0(int param_2)
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


// Reference entry 10fef7b0; body size 3 bytes.
#line 1 "ENTRY_10fef7b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fef7b0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10fef7c0; body size 3 bytes.
#line 1 "ENTRY_10fef7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fef7c0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10fef7d0; body size 11 bytes.
#line 1 "ENTRY_10fef7d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10fef7d0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10fef7e0; body size 6 bytes.
#line 1 "ENTRY_10fef7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fef7e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10fef7f0; body size 6 bytes.
#line 1 "ENTRY_10fef7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10fef7f0(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10fef800; body size 83 bytes.
#line 1 "ENTRY_10fef800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10fef800(int *param_2)
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


// Reference entry 10fef870; body size 92 bytes.
#line 1 "ENTRY_10fef870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10fef870(uint param_2,char param_3)
{
  int param_1 = (int )this;
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = (uint)(*(uint *)(param_1 + 4 + (param_2 >> 6) * 8));
  puVar1 = (uint *)((uint *)(param_1 + (param_2 >> 6) * 8));
  uVar3 = (uint)(1 << (param_2 & 0x1f));
  uVar4 = (uint)(0);
  if (0x1f < (param_2 & 0x3f)) {
    uVar4 = (uint)(uVar3);
  }
  uVar3 = (uint)(uVar3 ^ uVar4);
  if (0x3f < (param_2 & 0x3f)) {
    uVar4 = (uint)(uVar3);
  }
  if (param_3 != '\0') {
    puVar1[1] = (uint)(uVar2 | uVar4);
    *puVar1 = (uint)(*puVar1 | uVar3);
    return (int)(param_1);
  }
  puVar1[1] = (uint)(uVar2 & ~uVar4);
  *puVar1 = (uint)(*puVar1 & ~uVar3);
  return (int)(param_1);
}


// Reference entry 10fef8f0; body size 58 bytes.
#line 1 "ENTRY_10fef8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __thiscall Recovered_Bulk::m_FUN_10fef8f0(uint param_2)
{
  int param_1 = (int )this;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(1 << (param_2 & 0x1f));
  uVar1 = (uint)(0);
  if (0x1f < (param_2 & 0x3f)) {
    uVar1 = (uint)(uVar2);
  }
  uVar2 = (uint)(uVar2 ^ uVar1);
  if (0x3f < (param_2 & 0x3f)) {
    uVar1 = (uint)(uVar2);
  }
  if ((uVar2 & *(uint *)(param_1 + (param_2 >> 6) * 8)) != 0 ||
      (uVar1 & *(uint *)(param_1 + 4 + (param_2 >> 6) * 8)) != 0) {
    return (undefined4)(1);
  }
  return (undefined4)(0);
}


// Reference entry 10fefe40; body size 3 bytes.
#line 1 "ENTRY_10fefe40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10fefe40(void)

{
  return;
}


// Reference entry 10fefe50; body size 3 bytes.
#line 1 "ENTRY_10fefe50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10fefe50(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10ff02c0; body size 90 bytes.
#line 1 "ENTRY_10ff02c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ff02c0(uint param_1)

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


// Reference entry 10ff0340; body size 87 bytes.
#line 1 "ENTRY_10ff0340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ff0340(uint param_1)

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


// Reference entry 10ff03b0; body size 87 bytes.
#line 1 "ENTRY_10ff03b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * FUN_10ff03b0(uint param_1)

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


// Reference entry 10ff07c0; body size 11 bytes.
#line 1 "ENTRY_10ff07c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ff07c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10ff0bf0; body size 9 bytes.
#line 1 "ENTRY_10ff0bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ff0bf0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10ff0c00; body size 9 bytes.
#line 1 "ENTRY_10ff0c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ff0c00(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 3);
}


// Reference entry 10ff0c30; body size 35 bytes.
#line 1 "ENTRY_10ff0c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ff0c30(byte *param_1)

{
  byte *pbVar1;
  int iVar2;
  
  pbVar1 = (byte *)(param_1 + 0x10);
  iVar2 = (int)(0);
  for (;(byte *)((param_1)) != (byte *)(pbVar1); param_1 = param_1 + 1) {
    iVar2 = (int)(iVar2 + (char)(&DAT_1195e878)[*param_1]);
  }
  return (int)(iVar2);
}


// Reference entry 10ff0c60; body size 57 bytes.
#line 1 "ENTRY_10ff0c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ff0c60(undefined4 param_1,int param_2,int param_3)

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


// Reference entry 10ff0cb0; body size 60 bytes.
#line 1 "ENTRY_10ff0cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ff0cb0(int param_1,int param_2)

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


// Reference entry 10ff0da0; body size 16 bytes.
#line 1 "ENTRY_10ff0da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ff0da0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10ff1180; body size 9 bytes.
#line 1 "ENTRY_10ff1180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ff1180(int *param_1)

{
  return (undefined4)(((uint)((int3)((uint)*param_1 >> 8)) << 8 | (uint)(*param_1 == (int)((param_1))[1])));
}


// Reference entry 10ff13e0; body size 8 bytes.
#line 1 "ENTRY_10ff13e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ff13e0(unsigned int recovered_unused_stack_0)

{
  thunk_FUN_10ff3290();
  return;
}


// Reference entry 10ff6de0; body size 7 bytes.
#line 1 "ENTRY_10ff6de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ff6de0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10ff6df0; body size 7 bytes.
#line 1 "ENTRY_10ff6df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ff6df0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10ff6e50; body size 7 bytes.
#line 1 "ENTRY_10ff6e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ff6e50(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10ff6e60; body size 7 bytes.
#line 1 "ENTRY_10ff6e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ff6e60(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10ff6e70; body size 7 bytes.
#line 1 "ENTRY_10ff6e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ff6e70(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10ff6fb0; body size 6 bytes.
#line 1 "ENTRY_10ff6fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ff6fb0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10ff6fc0; body size 6 bytes.
#line 1 "ENTRY_10ff6fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ff6fc0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10ff6fd0; body size 6 bytes.
#line 1 "ENTRY_10ff6fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ff6fd0(void)

{
  return (undefined4)(0x1fffffff);
}


// Reference entry 10ff6fe0; body size 6 bytes.
#line 1 "ENTRY_10ff6fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ff6fe0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10ff6ff0; body size 6 bytes.
#line 1 "ENTRY_10ff6ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ff6ff0(void)

{
  return (undefined4)(0x1fffffff);
}


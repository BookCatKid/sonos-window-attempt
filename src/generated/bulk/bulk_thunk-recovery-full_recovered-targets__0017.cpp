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
namespace std { template<class... A> int _Xbad_alloc(A...); template<class... A> int _Xbad_function_call(A...); template<class... A> int _Xlength_error(A...); typedef int _Iterator_base0; }
struct SCOpRefBase { char _pad; SCOpRefBase(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int int_start(A...); };
struct SCStr { char _pad; SCStr(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); template<class... A> int append(A...); template<class... A> int int_addref(A...); template<class... A> int int_allocRep(A...); template<class... A> int int_release(A...); template<class... A> int length(A...); static int op_ctor(...) { return 0; } static int op_eq(...) { return 0; } static int op_lt(...) { return 0; } };
namespace std { template<class...> struct _Tree_simple_types { char _pad; _Tree_simple_types(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_unchecked_const_iterator { char _pad; _Tree_unchecked_const_iterator(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); static int op_inc(...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct _Tree_val { char _pad; _Tree_val(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_ios { char _pad; basic_ios(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int setstate(A...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_istream { char _pad; basic_istream(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int _Ipfx(A...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct basic_streambuf { char _pad; basic_streambuf(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int sbumpc(A...); template<class... A> int sgetc(A...); template<class... A> int snextc(A...); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
namespace std { template<class...> struct char_traits { char _pad; char_traits(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); }; }
struct AlarmClock { char _pad; AlarmClock(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Could { char _pad; Could(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct DestroyAlarm { char _pad; DestroyAlarm(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Exit { char _pad; Exit(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ghidra { char _pad; Ghidra(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Ordinal_14 { char _pad; Ordinal_14(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Recovered { char _pad; Recovered(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Removing { char _pad; Removing(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCAlarmManager { char _pad; SCAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCChirpManager { char _pad; SCChirpManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIAlarmManager { char _pad; SCIAlarmManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIArtworkCache { char _pad; SCIArtworkCache(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIArtworkCacheManager { char _pad; SCIArtworkCacheManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIArtworkData { char _pad; SCIArtworkData(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBTClassicConnectionCallback { char _pad; SCIBTClassicConnectionCallback(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBTClassicConnectionManager { char _pad; SCIBTClassicConnectionManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBTClassicConnectionProvider { char _pad; SCIBTClassicConnectionProvider(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIBrowseService { char _pad; SCIBrowseService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIChirpDelegate { char _pad; SCIChirpDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIChirpListener { char _pad; SCIChirpListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIHousehold { char _pad; SCIHousehold(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCILogoArtworkCache { char _pad; SCILogoArtworkCache(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINfcDelegate { char _pad; SCINfcDelegate(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCINfcListener { char _pad; SCINfcListener(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDeviceDelete { char _pad; SCIOpDeviceDelete(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDeviceGet { char _pad; SCIOpDeviceGet(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpDevicePut { char _pad; SCIOpDevicePut(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIOpReplaceAccount { char _pad; SCIOpReplaceAccount(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCIScrobblingService { char _pad; SCIScrobblingService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCISimpleMessagingService { char _pad; SCISimpleMessagingService(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCLibrary { char _pad; SCLibrary(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SCNfcManager { char _pad; SCNfcManager(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Subroutine { char _pad; Subroutine(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct SubscribedAlarms { char _pad; SubscribedAlarms(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Too { char _pad; Too(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Treating { char _pad; Treating(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
struct Wizard { char _pad; Wizard(...); template<class T> int operator==(T); template<class T> int operator!=(T); template<class T> int operator<(T); template<class T> int operator<=(T); template<class T> int operator>(T); template<class T> int operator>=(T); template<class T> int operator+(T); template<class T> int operator-(T); template<class T> int operator*(T); template<class T> int operator/(T); template<class T> int operator[](T); template<class T> int operator=(T); template<class... A> int operator()(A...); int operator++(); int operator++(int); int operator--(); int operator--(int); int operator!(); int operator~(); template<class T> int operator&(T); template<class T> int operator|(T); template<class T> int operator^(T); template<class T> int operator<<(T); template<class T> int operator>>(T); auto operator->() { return this; } template<class T> operator T*(); template<class T> operator T(); template<class... A> int m_op_ctor(A...); template<class... A> int m_op_dtor(A...); };
typedef void *D;
typedef void *E9;
typedef void *G;
typedef void *H;
typedef void *I;
typedef void *N;
typedef void *P;
typedef void *R;
typedef void *WARNING;
typedef void *_Ipfx;
using namespace std;
extern "C" void LAB_10005d80(void);
extern "C" void LAB_100072f7(void);
extern "C" void LAB_10007c2f(void);
extern "C" void LAB_1000897c(void);
extern "C" void LAB_100097af(void);
extern "C" void LAB_1000b73a(void);
extern "C" void LAB_1000d4ae(void);
extern "C" void LAB_1000e23c(void);
extern "C" void LAB_100131d8(void);
extern "C" void LAB_10013336(void);
extern "C" void LAB_10015a73(void);
extern "C" void LAB_1001d01b(void);
extern "C" void LAB_1001e6fa(void);
extern "C" void LAB_100202d9(void);
extern "C" void LAB_10022435(void);
extern "C" void LAB_100238df(void);
extern "C" void LAB_10024f14(void);
extern "C" void LAB_100284b6(void);
extern "C" void LAB_10028c0e(void);
extern "C" void LAB_1002f757(void);
extern "C" void LAB_1003061b(void);
extern "C" void LAB_100307b5(void);
extern "C" void LAB_1003084b(void);
extern "C" void LAB_100311d8(void);
extern "C" void LAB_10033ab9(void);
extern "C" void LAB_10035805(void);
extern "C" void LAB_10035954(void);
extern "C" void LAB_10036c23(void);
extern "C" void LAB_10037ce0(void);
extern "C" void LAB_100382f3(void);
extern "C" void LAB_100399be(void);
extern "C" void LAB_10039a68(void);
extern "C" void LAB_1003ef36(void);
extern "C" void LAB_10046a33(void);
extern "C" void LAB_1004dff4(void);
extern "C" void LAB_1004ec47(void);
extern "C" void LAB_10051bcc(void);
extern "C" void LAB_1005273e(void);
extern "C" void LAB_10052a3b(void);
extern "C" void LAB_100533a0(void);
extern "C" void LAB_10059c69(void);
extern "C" void LAB_1005af92(void);
extern "C" void LAB_1005c315(void);
extern "C" void LAB_1005f6c8(void);
extern "C" void LAB_10061e4b(void);
extern "C" void LAB_1006306b(void);
extern "C" void LAB_100632a0(void);
extern "C" void LAB_100665b3(void);
extern "C" void LAB_10066e8c(void);
extern "C" void LAB_10068156(void);
extern "C" void LAB_1006ab18(void);
extern "C" void LAB_1006da57(void);
extern "C" void LAB_10070f3b(void);
extern "C" void LAB_10070fbd(void);
extern "C" void LAB_10071f8a(void);
extern "C" void LAB_1007302e(void);
extern "C" void LAB_1007699f(void);
extern "C" void LAB_10076f1c(void);
extern "C" void LAB_10077f48(void);
extern "C" void LAB_1007b0d5(void);
extern "C" void LAB_1007d204(void);
extern "C" void LAB_1007dd2b(void);
extern "C" void LAB_1007e870(void);
extern "C" void LAB_10088bd6(void);
extern "C" void LAB_1008ca83(void);
extern "C" void LAB_1008dbcc(void);
extern "C" void LAB_10092c0d(void);
extern "C" void LAB_1009780c(void);
extern "C" void LAB_1009807c(void);
extern "C" void LAB_1009a700(void);
extern "C" void LAB_10ba1346(void);
extern "C" void LAB_10ba145a(void);
extern "C" void LAB_10ba1496(void);
extern "C" void LAB_10ba378f(void);
extern "C" void LAB_10ba9870(void);
extern "C" void LAB_10ba9880(void);
extern "C" void LAB_1148a054(void);
extern "C" void LAB_1148a05a(void);
extern "C" void LAB_1148a066(void);
extern "C" void LAB_1148cded(void);
extern "C" void LAB_1148cdf3(void);
extern "C" void LAB_1148ce0b(void);
extern "C" void LAB_1148ce11(void);
extern "C" void LAB_1186d2ee(void);
extern "C" void LAB_1187afec(void);
extern "C" void LAB_11880f54(void);
extern "C" void LAB_11880fb0(void);
extern "C" void LAB_11881068(void);
extern "C" void LAB_11881130(void);
extern "C" void LAB_11881144(void);
extern "C" void LAB_11881488(void);
extern "C" void LAB_11881498(void);
extern "C" void LAB_11883984(void);
extern "C" void LAB_11883b7c(void);
extern "C" void LAB_11885328(void);
extern "C" void LAB_1188e740(void);
extern "C" void LAB_118900d8(void);
extern "C" void LAB_118900e8(void);
extern "C" void LAB_118a38d8(void);
extern "C" void LAB_118abe0c(void);
extern "C" void LAB_118afb08(void);
extern "C" void LAB_1190e3e4(void);
extern "C" void LAB_1190e400(void);
extern "C" void LAB_1190e448(void);
extern "C" void LAB_1190e484(void);
extern "C" void LAB_1190e4cc(void);
extern "C" void LAB_1190e778(void);
extern "C" void LAB_1190e830(void);
extern "C" void LAB_1190e884(void);
extern "C" void LAB_1190e894(void);
extern "C" void LAB_1190e9b0(void);
extern "C" void LAB_1190ea68(void);
extern "C" void LAB_1190eabc(void);
extern "C" void LAB_1190eacc(void);
extern "C" void LAB_1190eb84(void);
extern "C" void LAB_1190ebd8(void);
extern "C" void LAB_1190ebe8(void);
extern "C" void LAB_1190f200(void);
extern "C" void LAB_1190f25c(void);
extern "C" void LAB_1190f280(void);
extern "C" void LAB_1190f2dc(void);
extern "C" void LAB_1190faa8(void);
extern "C" void LAB_1190fbe0(void);
extern "C" void LAB_1190fcf4(void);
extern "C" void LAB_1190fd04(void);
extern "C" void LAB_1190fdc8(void);
extern "C" void LAB_1190fe2c(void);
extern "C" void LAB_1190fe98(void);
extern "C" void LAB_1190ff1c(void);
extern "C" void LAB_1190ffa4(void);
extern "C" void LAB_1190ffb0(void);
extern "C" void LAB_1190ffb8(void);
extern "C" void LAB_1190ffc4(void);
extern "C" void LAB_11910224(void);
extern "C" void LAB_11910260(void);
extern "C" void LAB_119102a8(void);
extern "C" void LAB_119102e4(void);
extern "C" void LAB_119102f0(void);
extern "C" void LAB_119103bc(void);
extern "C" void LAB_11910438(void);
extern "C" void LAB_119106c0(void);
extern "C" void LAB_11910ac8(void);
extern "C" void LAB_11910af0(void);
extern "C" void LAB_11910b44(void);
extern "C" void LAB_11910e58(void);
extern "C" void LAB_11910f40(void);
extern "C" void LAB_11910ff8(void);
extern "C" void LAB_119110b0(void);
extern "C" void LAB_11911188(void);
extern "C" void LAB_119112c0(void);
extern "C" void LAB_11911708(void);
extern "C" void LAB_119117c0(void);
extern "C" void LAB_119117d4(void);
extern "C" void LAB_119118e0(void);
extern "C" void LAB_119119bc(void);
extern "C" void LAB_11911aa4(void);
extern "C" void LAB_11911b80(void);
extern "C" void LAB_11911cb4(void);
extern "C" void LAB_11911d08(void);
extern "C" void LAB_11911d64(void);
extern "C" void LAB_11911dc0(void);
extern "C" void LAB_11911f70(void);
extern "C" void LAB_11911f94(void);
extern "C" void LAB_11911fb8(void);
extern "C" void LAB_11911fd4(void);
extern "C" void LAB_11912094(void);
extern "C" void LAB_119123c4(void);
extern "C" void LAB_119123e8(void);
extern "C" void LAB_1191240c(void);
extern "C" void LAB_11912430(void);
extern "C" void LAB_11912518(void);
extern "C" void LAB_11912648(void);
extern "C" void LAB_11912678(void);
extern "C" void LAB_119129cc(void);
extern "C" void LAB_11912a3c(void);
extern "C" void LAB_12126b84(void);
extern "C" void LAB_121a0e68(void);
extern "C" void LAB_122e8a30(void);
extern "C" void LAB_122fc64c(void);
extern "C" void LAB_122fc6c4(void);
extern "C" void LAB_122fc888(void);


extern "C" void FUN_1006da57(void);

struct Recovered_Bulk { char _pad; undefined4 * __thiscall m_FUN_10b84c00(undefined4 param_2); template<class... A> int m_FUN_10b84c00(A...); undefined4 * __thiscall m_FUN_10b84c20(undefined4 param_2); template<class... A> int m_FUN_10b84c20(A...); undefined4 * __thiscall m_FUN_10b84c40(undefined4 param_2); template<class... A> int m_FUN_10b84c40(A...); undefined4 * __thiscall m_FUN_10b84c60(undefined4 param_2); template<class... A> int m_FUN_10b84c60(A...); undefined4 * __thiscall m_FUN_10b85400(undefined4 param_2,undefined4 param_3,void *param_4,size_t param_5,
            void *param_6,size_t param_7); template<class... A> int m_FUN_10b85400(A...); undefined4 * __thiscall m_FUN_10b86c80(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10b86c80(A...); undefined4 * __thiscall m_FUN_10b86cb0(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); template<class... A> int m_FUN_10b86cb0(A...); undefined4 * __thiscall m_FUN_10b86d00(undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8); template<class... A> int m_FUN_10b86d00(A...); int * __thiscall m_FUN_10b8b420(int *param_2); template<class... A> int m_FUN_10b8b420(A...); SCStr * __thiscall m_FUN_10b8b450(SCStr *param_2); template<class... A> int m_FUN_10b8b450(A...); SCStr * __thiscall m_FUN_10b8b470(SCStr *param_2); template<class... A> int m_FUN_10b8b470(A...); SCStr * __thiscall m_FUN_10b8b490(SCStr *param_2); template<class... A> int m_FUN_10b8b490(A...); SCStr * __thiscall m_FUN_10b8b4b0(SCStr *param_2); template<class... A> int m_FUN_10b8b4b0(A...); SCStr * __thiscall m_FUN_10b8b4d0(SCStr *param_2); template<class... A> int m_FUN_10b8b4d0(A...); SCStr * __thiscall m_FUN_10b8b510(SCStr *param_2); template<class... A> int m_FUN_10b8b510(A...); int * __thiscall m_FUN_10b8b5f0(int *param_2); template<class... A> int m_FUN_10b8b5f0(A...); int * __thiscall m_FUN_10b8b890(int *param_2); template<class... A> int m_FUN_10b8b890(A...); SCStr * __thiscall m_FUN_10b8ba60(SCStr *param_2); template<class... A> int m_FUN_10b8ba60(A...); void __thiscall m_FUN_10b8e230(undefined4 *param_2); template<class... A> int m_FUN_10b8e230(A...); void __thiscall m_FUN_10b8e470(undefined4 *param_2); template<class... A> int m_FUN_10b8e470(A...); undefined4 * __thiscall m_FUN_10b8e4b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b8e4b0(A...); undefined4 * __thiscall m_FUN_10b8e4c0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b8e4c0(A...); bool __thiscall m_FUN_10b8e630(int *param_2); template<class... A> int m_FUN_10b8e630(A...); bool __thiscall m_FUN_10b8e650(int *param_2); template<class... A> int m_FUN_10b8e650(A...); uint __thiscall m_FUN_10b8e740(uint param_2); template<class... A> int m_FUN_10b8e740(A...); void __thiscall m_FUN_10b8ea10(undefined4 *param_2); template<class... A> int m_FUN_10b8ea10(A...); void __thiscall m_FUN_10b8eac0(undefined4 *param_2); template<class... A> int m_FUN_10b8eac0(A...); void __thiscall m_FUN_10b8eaf0(undefined4 *param_2); template<class... A> int m_FUN_10b8eaf0(A...); int * __thiscall m_FUN_10b8eb20(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b8eb20(A...); undefined4 * __thiscall m_FUN_10b8eb70(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b8eb70(A...); undefined4 * __thiscall m_FUN_10b8ecb0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b8ecb0(A...); int * __thiscall m_FUN_10b8ecf0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10b8ecf0(A...); int * __thiscall m_FUN_10b8ed40(int *param_2); template<class... A> int m_FUN_10b8ed40(A...); int * __thiscall m_FUN_10b8ed60(int *param_2); template<class... A> int m_FUN_10b8ed60(A...); int * __thiscall m_FUN_10b8ed80(int *param_2); template<class... A> int m_FUN_10b8ed80(A...); int * __thiscall m_FUN_10b8edf0(int *param_2); template<class... A> int m_FUN_10b8edf0(A...); int * __thiscall m_FUN_10b8ee60(int *param_2); template<class... A> int m_FUN_10b8ee60(A...); int * __thiscall m_FUN_10b8eed0(int *param_2); template<class... A> int m_FUN_10b8eed0(A...); void __thiscall m_FUN_10b8efb0(undefined4 *param_2); template<class... A> int m_FUN_10b8efb0(A...); undefined4 * __thiscall m_FUN_10b8fc30(undefined4 param_2); template<class... A> int m_FUN_10b8fc30(A...); undefined4 * __thiscall m_FUN_10b8fd20(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b8fd20(A...); undefined4 * __thiscall m_FUN_10b8fd30(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b8fd30(A...); undefined4 * __thiscall m_FUN_10b8fd60(undefined4 *param_2); template<class... A> int m_FUN_10b8fd60(A...); undefined4 * __thiscall m_FUN_10b8fd70(undefined4 param_2); template<class... A> int m_FUN_10b8fd70(A...); undefined4 * __thiscall m_FUN_10b8ff40(undefined4 param_2); template<class... A> int m_FUN_10b8ff40(A...); undefined4 * __thiscall m_FUN_10b902f0(undefined4 param_2); template<class... A> int m_FUN_10b902f0(A...); undefined4 * __thiscall m_FUN_10b90330(undefined4 param_2); template<class... A> int m_FUN_10b90330(A...); undefined4 * __thiscall m_FUN_10b90810(undefined4 param_2); template<class... A> int m_FUN_10b90810(A...); int * __thiscall m_FUN_10b91c40(int *param_2); template<class... A> int m_FUN_10b91c40(A...); bool __thiscall m_FUN_10b91d10(int *param_2); template<class... A> int m_FUN_10b91d10(A...); bool __thiscall m_FUN_10b91d30(int *param_2); template<class... A> int m_FUN_10b91d30(A...); void __thiscall m_FUN_10b91e00(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10b91e00(A...); int * __thiscall m_FUN_10b930b0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10b930b0(A...); void __thiscall m_FUN_10b932a0(int param_2); template<class... A> int m_FUN_10b932a0(A...); void __thiscall m_FUN_10b93390(undefined4 *param_2); template<class... A> int m_FUN_10b93390(A...); void __thiscall m_FUN_10b933b0(undefined4 *param_2); template<class... A> int m_FUN_10b933b0(A...); void __thiscall m_FUN_10b933c0(undefined4 *param_2); template<class... A> int m_FUN_10b933c0(A...); void __thiscall m_FUN_10b933d0(undefined4 *param_2); template<class... A> int m_FUN_10b933d0(A...); uint __thiscall m_FUN_10b93530(undefined4 *param_2); template<class... A> int m_FUN_10b93530(A...); void __thiscall m_FUN_10b93780(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10b93780(A...); int * __thiscall m_FUN_10b95490(undefined4 param_2,int *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b95490(A...); undefined4 * __thiscall m_FUN_10b954e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b954e0(A...); undefined4 * __thiscall m_FUN_10b95500(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b95500(A...); undefined4 * __thiscall m_FUN_10b95520(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b95520(A...); undefined1 * __thiscall m_FUN_10b95770(undefined4 param_2,undefined4 *param_3); template<class... A> int m_FUN_10b95770(A...); undefined4 * __thiscall m_FUN_10b95790(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b95790(A...); undefined4 * __thiscall m_FUN_10b957b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10b957b0(A...); undefined1 * __thiscall m_FUN_10b95810(undefined4 param_2,undefined4 param_3,undefined4 *param_4); template<class... A> int m_FUN_10b95810(A...); int * __thiscall m_FUN_10b95830(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10b95830(A...); undefined4 * __thiscall m_FUN_10b95880(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10b95880(A...); int * __thiscall m_FUN_10b958b0(int *param_2); template<class... A> int m_FUN_10b958b0(A...); int * __thiscall m_FUN_10b958d0(int *param_2); template<class... A> int m_FUN_10b958d0(A...); int * __thiscall m_FUN_10b958f0(int *param_2); template<class... A> int m_FUN_10b958f0(A...); int * __thiscall m_FUN_10b95930(int *param_2); template<class... A> int m_FUN_10b95930(A...); int * __thiscall m_FUN_10b95950(int *param_2); template<class... A> int m_FUN_10b95950(A...); int * __thiscall m_FUN_10b95970(int *param_2); template<class... A> int m_FUN_10b95970(A...); void __thiscall m_FUN_10b95b60(undefined4 *param_2); template<class... A> int m_FUN_10b95b60(A...); void __thiscall m_FUN_10b95b80(undefined4 *param_2); template<class... A> int m_FUN_10b95b80(A...); int __thiscall m_FUN_10b964f0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10b964f0(A...); undefined4 * __thiscall m_FUN_10b96c10(undefined4 *param_2); template<class... A> int m_FUN_10b96c10(A...); undefined4 * __thiscall m_FUN_10b96ca0(undefined4 *param_2); template<class... A> int m_FUN_10b96ca0(A...); int * __thiscall m_FUN_10b96e10(int *param_2); template<class... A> int m_FUN_10b96e10(A...); undefined4 * __thiscall m_FUN_10b96e90(undefined4 param_2); template<class... A> int m_FUN_10b96e90(A...); undefined4 * __thiscall m_FUN_10b96eb0(undefined4 param_2); template<class... A> int m_FUN_10b96eb0(A...); undefined4 * __thiscall m_FUN_10b97090(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b97090(A...); undefined4 * __thiscall m_FUN_10b970b0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b970b0(A...); undefined4 * __thiscall m_FUN_10b970d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b970d0(A...); undefined4 * __thiscall m_FUN_10b970f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b970f0(A...); undefined4 * __thiscall m_FUN_10b97110(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b97110(A...); undefined4 * __thiscall m_FUN_10b97130(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b97130(A...); undefined4 * __thiscall m_FUN_10b97150(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b97150(A...); undefined4 * __thiscall m_FUN_10b97160(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b97160(A...); undefined8 * __thiscall m_FUN_10b971d0(undefined8 *param_2); template<class... A> int m_FUN_10b971d0(A...); undefined4 * __thiscall m_FUN_10b971f0(undefined4 *param_2); template<class... A> int m_FUN_10b971f0(A...); undefined4 * __thiscall m_FUN_10b97200(undefined4 param_2); template<class... A> int m_FUN_10b97200(A...); undefined4 * __thiscall m_FUN_10b97220(undefined4 param_2); template<class... A> int m_FUN_10b97220(A...); undefined4 * __thiscall m_FUN_10b97e60(undefined4 param_2); template<class... A> int m_FUN_10b97e60(A...); undefined4 * __thiscall m_FUN_10b98340(undefined4 param_2); template<class... A> int m_FUN_10b98340(A...); undefined4 * __thiscall m_FUN_10b98390(undefined4 param_2); template<class... A> int m_FUN_10b98390(A...); undefined4 * __thiscall m_FUN_10b983a0(undefined4 param_2); template<class... A> int m_FUN_10b983a0(A...); int * __thiscall m_FUN_10b99460(int *param_2); template<class... A> int m_FUN_10b99460(A...); int * __thiscall m_FUN_10b994c0(int *param_2); template<class... A> int m_FUN_10b994c0(A...); int * __thiscall m_FUN_10b996e0(int *param_2); template<class... A> int m_FUN_10b996e0(A...); bool __thiscall m_FUN_10b99750(int *param_2); template<class... A> int m_FUN_10b99750(A...); bool __thiscall m_FUN_10b99770(int *param_2); template<class... A> int m_FUN_10b99770(A...); bool __thiscall m_FUN_10b99790(int *param_2); template<class... A> int m_FUN_10b99790(A...); bool __thiscall m_FUN_10b997b0(int *param_2); template<class... A> int m_FUN_10b997b0(A...); bool __thiscall m_FUN_10b997d0(int *param_2); template<class... A> int m_FUN_10b997d0(A...); bool __thiscall m_FUN_10b997f0(int *param_2); template<class... A> int m_FUN_10b997f0(A...); bool __thiscall m_FUN_10b99810(int *param_2); template<class... A> int m_FUN_10b99810(A...); bool __thiscall m_FUN_10b99830(int *param_2); template<class... A> int m_FUN_10b99830(A...); void __thiscall m_FUN_10b99a80(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b99a80(A...); void __thiscall m_FUN_10b99aa0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10b99aa0(A...); void __thiscall m_FUN_10b9a930(int *param_2,int param_3); template<class... A> int m_FUN_10b9a930(A...); void __thiscall m_FUN_10b9a980(int *param_2,int param_3); template<class... A> int m_FUN_10b9a980(A...); int * __thiscall m_FUN_10b9af60(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10b9af60(A...); int * __thiscall m_FUN_10b9afe0(uint param_2,int param_3,int *param_4); template<class... A> int m_FUN_10b9afe0(A...); void __thiscall m_FUN_10b9b370(int param_2); template<class... A> int m_FUN_10b9b370(A...); void __thiscall m_FUN_10b9b390(undefined4 param_2); template<class... A> int m_FUN_10b9b390(A...); void __thiscall m_FUN_10b9b530(undefined4 *param_2); template<class... A> int m_FUN_10b9b530(A...); void __thiscall m_FUN_10b9b550(undefined4 *param_2); template<class... A> int m_FUN_10b9b550(A...); void __thiscall m_FUN_10b9b570(undefined4 *param_2); template<class... A> int m_FUN_10b9b570(A...); void __thiscall m_FUN_10b9b580(undefined4 *param_2); template<class... A> int m_FUN_10b9b580(A...); void __thiscall m_FUN_10b9b590(undefined4 *param_2); template<class... A> int m_FUN_10b9b590(A...); void __thiscall m_FUN_10b9b5a0(undefined4 *param_2); template<class... A> int m_FUN_10b9b5a0(A...); void __thiscall m_FUN_10b9b5b0(undefined4 *param_2); template<class... A> int m_FUN_10b9b5b0(A...); void __thiscall m_FUN_10b9b5c0(undefined4 *param_2); template<class... A> int m_FUN_10b9b5c0(A...); int __thiscall m_FUN_10b9b670(int *param_2); template<class... A> int m_FUN_10b9b670(A...); void __thiscall m_FUN_10b9bcd0(undefined4 *param_2); template<class... A> int m_FUN_10b9bcd0(A...); void __thiscall m_FUN_10b9bcf0(undefined4 *param_2); template<class... A> int m_FUN_10b9bcf0(A...); void __thiscall m_FUN_10b9bd10(undefined4 *param_2); template<class... A> int m_FUN_10b9bd10(A...); void __thiscall m_FUN_10b9bd20(undefined4 *param_2); template<class... A> int m_FUN_10b9bd20(A...); uint __thiscall m_FUN_10b9bd30(byte *param_2); template<class... A> int m_FUN_10b9bd30(A...); uint __thiscall m_FUN_10b9bd90(undefined4 *param_2); template<class... A> int m_FUN_10b9bd90(A...); void __thiscall m_FUN_10b9c4b0(undefined4 *param_2); template<class... A> int m_FUN_10b9c4b0(A...); void __thiscall m_FUN_10b9c4c0(undefined4 *param_2); template<class... A> int m_FUN_10b9c4c0(A...); void __thiscall m_FUN_10b9c4d0(undefined4 *param_2); template<class... A> int m_FUN_10b9c4d0(A...); void __thiscall m_FUN_10b9c4e0(undefined4 *param_2); template<class... A> int m_FUN_10b9c4e0(A...); void __thiscall m_FUN_10ba0ad0(undefined4 param_2); template<class... A> int m_FUN_10ba0ad0(A...); void __thiscall m_FUN_10ba0b00(undefined4 param_2); template<class... A> int m_FUN_10ba0b00(A...); void __thiscall m_FUN_10ba0b10(undefined4 param_2); template<class... A> int m_FUN_10ba0b10(A...); void __thiscall m_FUN_10ba0b20(undefined4 param_2); template<class... A> int m_FUN_10ba0b20(A...); void __thiscall m_FUN_10ba0b90(undefined4 param_2); template<class... A> int m_FUN_10ba0b90(A...); void __thiscall m_FUN_10ba1240(byte *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ba1240(A...); undefined4 * __thiscall m_FUN_10ba1b20(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ba1b20(A...); undefined4 * __thiscall m_FUN_10ba1b40(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ba1b40(A...); undefined4 * __thiscall m_FUN_10ba1b60(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10ba1b60(A...); undefined4 * __thiscall m_FUN_10ba1b80(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba1b80(A...); undefined4 * __thiscall m_FUN_10ba1bd0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba1bd0(A...); undefined4 * __thiscall m_FUN_10ba1c00(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ba1c00(A...); undefined4 * __thiscall m_FUN_10ba1c20(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ba1c20(A...); undefined4 * __thiscall m_FUN_10ba1f90(undefined4 *param_2,uint param_3,uint param_4,char param_5,
            char param_6); template<class... A> int m_FUN_10ba1f90(A...); undefined4 * __thiscall m_FUN_10ba20a0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ba20a0(A...); undefined4 * __thiscall m_FUN_10ba20c0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10ba20c0(A...); undefined4 * __thiscall m_FUN_10ba2140(int *param_2); template<class... A> int m_FUN_10ba2140(A...); undefined4 * __thiscall m_FUN_10ba22e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10ba22e0(A...); undefined4 * __thiscall m_FUN_10ba2330(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10ba2330(A...); int * __thiscall m_FUN_10ba2360(int *param_2); template<class... A> int m_FUN_10ba2360(A...); int * __thiscall m_FUN_10ba23e0(int *param_2); template<class... A> int m_FUN_10ba23e0(A...); undefined4 * __thiscall m_FUN_10ba2400(undefined4 *param_2); template<class... A> int m_FUN_10ba2400(A...); int * __thiscall m_FUN_10ba2420(int *param_2); template<class... A> int m_FUN_10ba2420(A...); int * __thiscall m_FUN_10ba2440(int *param_2); template<class... A> int m_FUN_10ba2440(A...); int * __thiscall m_FUN_10ba2540(int *param_2); template<class... A> int m_FUN_10ba2540(A...); int * __thiscall m_FUN_10ba2620(int *param_2); template<class... A> int m_FUN_10ba2620(A...); void __thiscall m_FUN_10ba2780(int param_2,uint param_3,char param_4,char param_5); template<class... A> int m_FUN_10ba2780(A...); void __thiscall m_FUN_10ba2ac0(undefined4 param_2); template<class... A> int m_FUN_10ba2ac0(A...); void __thiscall m_FUN_10ba2c30(undefined4 param_2); template<class... A> int m_FUN_10ba2c30(A...); void __thiscall m_FUN_10ba2ee0(int *param_2,int *param_3); template<class... A> int m_FUN_10ba2ee0(A...); void __thiscall m_FUN_10ba2f80(int *param_2,int *param_3); template<class... A> int m_FUN_10ba2f80(A...); int * __thiscall m_FUN_10ba33a0(int *param_2,int *param_3); template<class... A> int m_FUN_10ba33a0(A...); undefined4 * __thiscall m_FUN_10ba36c0(uint param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba36c0(A...); void __thiscall m_FUN_10ba37f0(int *param_2); template<class... A> int m_FUN_10ba37f0(A...); void __thiscall m_FUN_10ba4490(undefined4 param_2); template<class... A> int m_FUN_10ba4490(A...); undefined4 * __thiscall m_FUN_10ba5190(undefined4 param_2); template<class... A> int m_FUN_10ba5190(A...); undefined4 * __thiscall m_FUN_10ba51d0(undefined4 param_2); template<class... A> int m_FUN_10ba51d0(A...); undefined4 * __thiscall m_FUN_10ba51f0(undefined4 param_2); template<class... A> int m_FUN_10ba51f0(A...); undefined4 * __thiscall m_FUN_10ba52d0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba52d0(A...); undefined4 * __thiscall m_FUN_10ba52e0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba52e0(A...); undefined4 * __thiscall m_FUN_10ba52f0(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba52f0(A...); undefined4 * __thiscall m_FUN_10ba5300(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba5300(A...); undefined4 * __thiscall m_FUN_10ba5410(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba5410(A...); undefined4 * __thiscall m_FUN_10ba5420(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba5420(A...); undefined4 * __thiscall m_FUN_10ba5430(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba5430(A...); undefined4 * __thiscall m_FUN_10ba5440(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba5440(A...); undefined4 * __thiscall m_FUN_10ba5490(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ba5490(A...); undefined4 * __thiscall m_FUN_10ba5c00(undefined4 param_2); template<class... A> int m_FUN_10ba5c00(A...); undefined4 * __thiscall m_FUN_10ba6050(int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,char param_7); template<class... A> int m_FUN_10ba6050(A...); SCStr * __thiscall m_FUN_10ba60f0(SCStr *param_2); template<class... A> int m_FUN_10ba60f0(A...); SCStr * __thiscall m_FUN_10ba6120(SCStr *param_2,undefined4 param_3); template<class... A> int m_FUN_10ba6120(A...); undefined4 * __thiscall m_FUN_10ba66e0(int *param_2); template<class... A> int m_FUN_10ba66e0(A...); SCStr * __thiscall m_FUN_10ba7730(SCStr *param_2); template<class... A> int m_FUN_10ba7730(A...); bool __thiscall m_FUN_10ba7770(int *param_2); template<class... A> int m_FUN_10ba7770(A...); bool __thiscall m_FUN_10ba7790(int *param_2); template<class... A> int m_FUN_10ba7790(A...); bool __thiscall m_FUN_10ba77b0(int *param_2); template<class... A> int m_FUN_10ba77b0(A...); bool __thiscall m_FUN_10ba77d0(int *param_2); template<class... A> int m_FUN_10ba77d0(A...); bool __thiscall m_FUN_10ba77f0(int *param_2); template<class... A> int m_FUN_10ba77f0(A...); undefined4 __thiscall m_FUN_10ba7810(int *param_2); template<class... A> int m_FUN_10ba7810(A...); bool __thiscall m_FUN_10ba7830(int *param_2); template<class... A> int m_FUN_10ba7830(A...); bool __thiscall m_FUN_10ba7850(int *param_2); template<class... A> int m_FUN_10ba7850(A...); bool __thiscall m_FUN_10ba7870(int *param_2); template<class... A> int m_FUN_10ba7870(A...); bool __thiscall m_FUN_10ba7890(int *param_2); template<class... A> int m_FUN_10ba7890(A...); bool __thiscall m_FUN_10ba78b0(int *param_2); template<class... A> int m_FUN_10ba78b0(A...); int __thiscall m_FUN_10ba7b00(int param_2); template<class... A> int m_FUN_10ba7b00(A...); undefined4 * __thiscall m_FUN_10ba7c80(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba7c80(A...); undefined4 * __thiscall m_FUN_10ba7d10(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba7d10(A...); undefined4 * __thiscall m_FUN_10ba7da0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10ba7da0(A...); void __thiscall m_FUN_10ba7e10(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ba7e10(A...); void __thiscall m_FUN_10ba7e40(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10ba7e40(A...); void __thiscall m_FUN_10ba8530(int param_2); template<class... A> int m_FUN_10ba8530(A...); uint __thiscall m_FUN_10ba8560(uint param_2); template<class... A> int m_FUN_10ba8560(A...); void __thiscall m_FUN_10ba8890(int param_2); template<class... A> int m_FUN_10ba8890(A...); int __thiscall m_FUN_10ba88c0(int param_2,int param_3); template<class... A> int m_FUN_10ba88c0(A...); int __thiscall m_FUN_10ba8b60(int param_2,int param_3); template<class... A> int m_FUN_10ba8b60(A...); undefined4 __thiscall m_FUN_10ba8bf0(undefined4 param_2); template<class... A> int m_FUN_10ba8bf0(A...); void __thiscall m_FUN_10ba97c0(void *param_2,uint param_3,uint param_4); template<class... A> int m_FUN_10ba97c0(A...); undefined4 __thiscall m_FUN_10ba9ed0(byte *param_2,byte *param_3); template<class... A> int m_FUN_10ba9ed0(A...); undefined1 __thiscall m_FUN_10ba9f00(byte param_2); template<class... A> int m_FUN_10ba9f00(A...); void __thiscall m_FUN_10baa060(int param_2); template<class... A> int m_FUN_10baa060(A...); void __thiscall m_FUN_10baa080(int param_2); template<class... A> int m_FUN_10baa080(A...); void __thiscall m_FUN_10baa0a0(int *param_2); template<class... A> int m_FUN_10baa0a0(A...); void __thiscall m_FUN_10baa1e0(undefined4 param_2); template<class... A> int m_FUN_10baa1e0(A...); int __thiscall m_FUN_10baa1f0(uint param_2,char param_3); template<class... A> int m_FUN_10baa1f0(A...); undefined4 __thiscall m_FUN_10baa240(uint param_2); template<class... A> int m_FUN_10baa240(A...); void __thiscall m_FUN_10baa610(undefined4 *param_2); template<class... A> int m_FUN_10baa610(A...); void __thiscall m_FUN_10baa620(undefined4 *param_2); template<class... A> int m_FUN_10baa620(A...); void __thiscall m_FUN_10baa8b0(undefined4 *param_2); template<class... A> int m_FUN_10baa8b0(A...); void __thiscall m_FUN_10baa8c0(undefined4 *param_2); template<class... A> int m_FUN_10baa8c0(A...); void __thiscall m_FUN_10bab2f0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bab2f0(A...); void __thiscall m_FUN_10bab3d0(undefined4 *param_2); template<class... A> int m_FUN_10bab3d0(A...); void __thiscall m_FUN_10bab3e0(undefined4 *param_2); template<class... A> int m_FUN_10bab3e0(A...); undefined4 * __thiscall m_FUN_10baba00(uint param_2); template<class... A> int m_FUN_10baba00(A...); int __thiscall m_FUN_10baba90(char param_2,uint param_3); template<class... A> int m_FUN_10baba90(A...); void __thiscall m_FUN_10babae0(byte *param_2,uint param_3); template<class... A> int m_FUN_10babae0(A...); void __thiscall m_FUN_10bb3190(undefined4 param_2); template<class... A> int m_FUN_10bb3190(A...); int __thiscall m_FUN_10bb42d0(uint param_2,char param_3); template<class... A> int m_FUN_10bb42d0(A...); void __thiscall m_FUN_10bb4360(undefined4 param_2); template<class... A> int m_FUN_10bb4360(A...); void __thiscall m_FUN_10bb4380(undefined1 param_2); template<class... A> int m_FUN_10bb4380(A...); SCStr * __thiscall m_FUN_10bb4790(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bb4790(A...); undefined4 * __thiscall m_FUN_10bb47e0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bb47e0(A...); SCStr * __thiscall m_FUN_10bb49c0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bb49c0(A...); undefined4 * __thiscall m_FUN_10bb49f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bb49f0(A...); SCStr * __thiscall m_FUN_10bb4a90(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bb4a90(A...); SCStr * __thiscall m_FUN_10bb4ad0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bb4ad0(A...); undefined4 * __thiscall m_FUN_10bb52d0(undefined4 param_2); template<class... A> int m_FUN_10bb52d0(A...); undefined4 * __thiscall m_FUN_10bb52f0(undefined4 param_2); template<class... A> int m_FUN_10bb52f0(A...); undefined4 * __thiscall m_FUN_10bb54c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bb54c0(A...); undefined4 * __thiscall m_FUN_10bb55c0(int param_2,undefined4 param_3); template<class... A> int m_FUN_10bb55c0(A...); undefined4 * __thiscall m_FUN_10bb57d0(undefined4 param_2); template<class... A> int m_FUN_10bb57d0(A...); undefined4 * __thiscall m_FUN_10bb57f0(undefined4 param_2); template<class... A> int m_FUN_10bb57f0(A...); undefined4 * __thiscall m_FUN_10bb5810(undefined4 param_2); template<class... A> int m_FUN_10bb5810(A...); undefined4 * __thiscall m_FUN_10bb5830(undefined4 param_2); template<class... A> int m_FUN_10bb5830(A...); undefined4 * __thiscall m_FUN_10bb5850(undefined4 param_2); template<class... A> int m_FUN_10bb5850(A...); undefined4 * __thiscall m_FUN_10bb5870(undefined4 param_2); template<class... A> int m_FUN_10bb5870(A...); undefined4 * __thiscall m_FUN_10bb5890(undefined4 param_2); template<class... A> int m_FUN_10bb5890(A...); void __thiscall m_FUN_10bb6a40(int param_2); template<class... A> int m_FUN_10bb6a40(A...); void __thiscall m_FUN_10bb6ac0(int *param_2); template<class... A> int m_FUN_10bb6ac0(A...); SCStr * __thiscall m_FUN_10bb7eb0(SCStr *param_2); template<class... A> int m_FUN_10bb7eb0(A...); void __thiscall m_FUN_10bbb3a0(SCStr *param_2); template<class... A> int m_FUN_10bbb3a0(A...); undefined4 * __thiscall m_FUN_10bbb5c0(undefined4 param_2); template<class... A> int m_FUN_10bbb5c0(A...); undefined4 * __thiscall m_FUN_10bbb600(undefined4 param_2); template<class... A> int m_FUN_10bbb600(A...); undefined4 * __thiscall m_FUN_10bbb670(undefined4 param_2); template<class... A> int m_FUN_10bbb670(A...); int * __thiscall m_FUN_10bbd8e0(int *param_2); template<class... A> int m_FUN_10bbd8e0(A...); void __thiscall m_FUN_10bbdbb0(undefined4 *param_2); template<class... A> int m_FUN_10bbdbb0(A...); void __thiscall m_FUN_10bbde20(undefined4 *param_2); template<class... A> int m_FUN_10bbde20(A...); int __thiscall m_FUN_10bbe370(int param_2); template<class... A> int m_FUN_10bbe370(A...); uint __thiscall m_FUN_10bbe550(uint param_2); template<class... A> int m_FUN_10bbe550(A...); void __thiscall m_FUN_10bbed10(undefined4 *param_2); template<class... A> int m_FUN_10bbed10(A...); int * __thiscall m_FUN_10bbf070(int *param_2); template<class... A> int m_FUN_10bbf070(A...); undefined4 * __thiscall m_FUN_10bbf440(undefined4 *param_2,undefined4 *param_3); template<class... A> int m_FUN_10bbf440(A...); undefined4 * __thiscall m_FUN_10bbf460(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bbf460(A...); SCStr * __thiscall m_FUN_10bbf5c0(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bbf5c0(A...); undefined4 * __thiscall m_FUN_10bbf5f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bbf5f0(A...); SCStr * __thiscall m_FUN_10bbf7a0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bbf7a0(A...); int * __thiscall m_FUN_10bbf7d0(int *param_2); template<class... A> int m_FUN_10bbf7d0(A...); int * __thiscall m_FUN_10bbf9f0(int *param_2,SCStr *param_3); template<class... A> int m_FUN_10bbf9f0(A...); undefined4 * __thiscall m_FUN_10bc00e0(undefined4 param_2); template<class... A> int m_FUN_10bc00e0(A...); undefined4 * __thiscall m_FUN_10bc0180(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bc0180(A...); undefined4 * __thiscall m_FUN_10bc0190(undefined4 param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bc0190(A...); bool __thiscall m_FUN_10bc0640(int *param_2); template<class... A> int m_FUN_10bc0640(A...); bool __thiscall m_FUN_10bc0660(int *param_2); template<class... A> int m_FUN_10bc0660(A...); undefined4 * __thiscall m_FUN_10bc07d0(undefined4 *param_2, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bc07d0(A...); void __thiscall m_FUN_10bc1650(undefined4 *param_2); template<class... A> int m_FUN_10bc1650(A...); int * __thiscall m_FUN_10bc36a0(int *param_2); template<class... A> int m_FUN_10bc36a0(A...); void __thiscall m_FUN_10bc3970(undefined4 *param_2); template<class... A> int m_FUN_10bc3970(A...); void __thiscall m_FUN_10bc3be0(undefined4 *param_2); template<class... A> int m_FUN_10bc3be0(A...); int __thiscall m_FUN_10bc4210(int param_2); template<class... A> int m_FUN_10bc4210(A...); uint __thiscall m_FUN_10bc4470(uint param_2); template<class... A> int m_FUN_10bc4470(A...); void __thiscall m_FUN_10bc4d30(undefined4 *param_2); template<class... A> int m_FUN_10bc4d30(A...); undefined4 * __thiscall m_FUN_10bc5370(int *param_2); template<class... A> int m_FUN_10bc5370(A...); int * __thiscall m_FUN_10bc5650(int *param_2); template<class... A> int m_FUN_10bc5650(A...); void __thiscall m_FUN_10bc5af0(int *param_2); template<class... A> int m_FUN_10bc5af0(A...); undefined4 * __thiscall m_FUN_10bc6320(undefined4 param_2); template<class... A> int m_FUN_10bc6320(A...); undefined4 * __thiscall m_FUN_10bc6360(undefined4 param_2); template<class... A> int m_FUN_10bc6360(A...); void __thiscall m_FUN_10bc6db0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bc6db0(A...); void __thiscall m_FUN_10bc6de0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bc6de0(A...); void __thiscall m_FUN_10bc7560(int param_2); template<class... A> int m_FUN_10bc7560(A...); void __thiscall m_FUN_10bc7580(int param_2); template<class... A> int m_FUN_10bc7580(A...); void __thiscall m_FUN_10bc75a0(int *param_2); template<class... A> int m_FUN_10bc75a0(A...); void __thiscall m_FUN_10bc7600(undefined4 param_2); template<class... A> int m_FUN_10bc7600(A...); void __thiscall m_FUN_10bc7610(undefined4 param_2); template<class... A> int m_FUN_10bc7610(A...); void __thiscall m_FUN_10bc79c0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bc79c0(A...); int * __thiscall m_FUN_10bc97e0(int *param_2); template<class... A> int m_FUN_10bc97e0(A...); void __thiscall m_FUN_10bc9840(undefined4 *param_2); template<class... A> int m_FUN_10bc9840(A...); void __thiscall m_FUN_10bc9a80(undefined4 *param_2); template<class... A> int m_FUN_10bc9a80(A...); int __thiscall m_FUN_10bc9fb0(int param_2); template<class... A> int m_FUN_10bc9fb0(A...); uint __thiscall m_FUN_10bca010(uint param_2); template<class... A> int m_FUN_10bca010(A...); void __thiscall m_FUN_10bcb420(undefined4 *param_2); template<class... A> int m_FUN_10bcb420(A...); SCStr * __thiscall m_FUN_10bcb650(undefined4 param_2,SCStr *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bcb650(A...); undefined4 * __thiscall m_FUN_10bcb680(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bcb680(A...); undefined4 * __thiscall m_FUN_10bcb6a0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bcb6a0(A...); undefined4 * __thiscall m_FUN_10bcb860(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcb860(A...); undefined4 * __thiscall m_FUN_10bcb880(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bcb880(A...); undefined4 * __thiscall m_FUN_10bcb8b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcb8b0(A...); undefined4 * __thiscall m_FUN_10bcb8d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcb8d0(A...); undefined4 * __thiscall m_FUN_10bcb8f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcb8f0(A...); undefined4 * __thiscall m_FUN_10bcb910(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcb910(A...); undefined4 * __thiscall m_FUN_10bcb930(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcb930(A...); undefined4 * __thiscall m_FUN_10bcb950(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcb950(A...); undefined4 * __thiscall m_FUN_10bcb970(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcb970(A...); undefined4 * __thiscall m_FUN_10bcb990(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcb990(A...); undefined4 * __thiscall m_FUN_10bcc210(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bcc210(A...); undefined4 * __thiscall m_FUN_10bcc250(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bcc250(A...); undefined4 * __thiscall m_FUN_10bcc280(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bcc280(A...); undefined4 * __thiscall m_FUN_10bcc2b0(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bcc2b0(A...); undefined4 * __thiscall m_FUN_10bcc390(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc390(A...); undefined4 * __thiscall m_FUN_10bcc3b0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc3b0(A...); undefined4 * __thiscall m_FUN_10bcc3d0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc3d0(A...); undefined4 * __thiscall m_FUN_10bcc3f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc3f0(A...); undefined4 * __thiscall m_FUN_10bcc410(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc410(A...); undefined4 * __thiscall m_FUN_10bcc430(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc430(A...); undefined4 * __thiscall m_FUN_10bcc450(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc450(A...); undefined4 * __thiscall m_FUN_10bcc470(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc470(A...); undefined4 * __thiscall m_FUN_10bcc490(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc490(A...); undefined4 * __thiscall m_FUN_10bcc4d0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bcc4d0(A...); undefined4 * __thiscall m_FUN_10bcc4e0(undefined4 param_2,undefined4 param_3); template<class... A> int m_FUN_10bcc4e0(A...); undefined4 * __thiscall m_FUN_10bcc4f0(undefined4 *param_2,undefined1 *param_3); template<class... A> int m_FUN_10bcc4f0(A...); undefined4 * __thiscall m_FUN_10bcc510(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_10bcc510(A...); undefined4 * __thiscall m_FUN_10bcc560(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_10bcc560(A...); undefined4 * __thiscall m_FUN_10bcc590(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6); template<class... A> int m_FUN_10bcc590(A...); SCStr * __thiscall m_FUN_10bcc5c0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bcc5c0(A...); undefined4 * __thiscall m_FUN_10bcc5f0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bcc5f0(A...); undefined4 * __thiscall m_FUN_10bcc620(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bcc620(A...); undefined4 * __thiscall m_FUN_10bcc660(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bcc660(A...); undefined4 * __thiscall m_FUN_10bcc690(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bcc690(A...); undefined4 * __thiscall m_FUN_10bcc6d0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bcc6d0(A...); undefined4 * __thiscall m_FUN_10bcc700(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bcc700(A...); undefined4 * __thiscall m_FUN_10bcc730(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2); template<class... A> int m_FUN_10bcc730(A...); int * __thiscall m_FUN_10bcc8a0(int *param_2); template<class... A> int m_FUN_10bcc8a0(A...); int * __thiscall m_FUN_10bcc8e0(int *param_2); template<class... A> int m_FUN_10bcc8e0(A...); undefined4 * __thiscall m_FUN_10bcc900(undefined4 param_2); template<class... A> int m_FUN_10bcc900(A...); undefined4 * __thiscall m_FUN_10bcc910(undefined4 param_2); template<class... A> int m_FUN_10bcc910(A...); undefined4 * __thiscall m_FUN_10bcc920(undefined4 param_2); template<class... A> int m_FUN_10bcc920(A...); undefined4 * __thiscall m_FUN_10bcc930(undefined4 param_2); template<class... A> int m_FUN_10bcc930(A...); void __thiscall m_FUN_10bccbb0(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bccbb0(A...); void __thiscall m_FUN_10bcd350(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10bcd350(A...); void __thiscall m_FUN_10bcd3e0(int *param_2,undefined4 param_3); template<class... A> int m_FUN_10bcd3e0(A...); void __thiscall m_FUN_10bcdd70(undefined4 *param_2); template<class... A> int m_FUN_10bcdd70(A...); void __thiscall m_FUN_10bcdda0(undefined4 *param_2); template<class... A> int m_FUN_10bcdda0(A...); void __thiscall m_FUN_10bcde50(undefined4 param_2); template<class... A> int m_FUN_10bcde50(A...); void __thiscall m_FUN_10bcde70(undefined4 *param_2); template<class... A> int m_FUN_10bcde70(A...); void __thiscall m_FUN_10bcdea0(undefined4 *param_2); template<class... A> int m_FUN_10bcdea0(A...); void __thiscall m_FUN_10bcdec0(undefined4 *param_2); template<class... A> int m_FUN_10bcdec0(A...); void __thiscall m_FUN_10bcdf70(undefined4 param_2); template<class... A> int m_FUN_10bcdf70(A...); void __thiscall m_FUN_10bcdf90(undefined4 *param_2); template<class... A> int m_FUN_10bcdf90(A...); int * __thiscall m_FUN_10bcfb30(int *param_2,int *param_3); template<class... A> int m_FUN_10bcfb30(A...); void __thiscall m_FUN_10bd06f0(void *param_2,int param_3, unsigned int recovered_unused_stack_0); template<class... A> int m_FUN_10bd06f0(A...); };

extern int FUN_10b879c0(...);
extern int FUN_10b879d0(...);
extern int FUN_10b879f0(...);
extern int FUN_10b90fe0(...);
extern int FUN_10ba4768(...);
extern int LOCK(...);
extern __declspec(dllimport) int Ordinal_14(...);
extern int UNLOCK(...);
extern __declspec(dllimport) int _invalid_parameter_noinfo_noreturn(...);
extern __declspec(dllimport) int memchr(...);
extern __declspec(dllimport) int memmove(...);
extern int operator_new(...);
extern __declspec(dllimport) int strchr(...);
extern __declspec(dllimport) int strtoul(...);
extern int swi(...);
template<class... A> int __stdcall thunk_FUN_10118c40(A...);
extern int thunk_FUN_1012a2a0(...);
extern int thunk_FUN_1012a4c0(...);
template<class... A> int __stdcall thunk_FUN_1012cab0(A...);
extern int thunk_FUN_101a9bd0(...);
extern int thunk_FUN_101a9c10(...);
extern int thunk_FUN_101ba0d0(...);
extern int thunk_FUN_101c82e0(...);
extern int thunk_FUN_101dd3a0(...);
template<class... A> int __stdcall thunk_FUN_102bcb30(A...);
extern int thunk_FUN_102bcd50(...);
extern int thunk_FUN_102cc870(...);
extern int thunk_FUN_103beae0(...);
extern int thunk_FUN_10475400(...);
extern int thunk_FUN_106a5620(...);
template<class... A> int __stdcall thunk_FUN_10b8b660(A...);
extern int thunk_FUN_10b8e250(...);
extern int thunk_FUN_10b8f4a0(...);
extern int thunk_FUN_10b90fe0(...);
extern int thunk_FUN_10b91160(...);
extern int thunk_FUN_10b913e0(...);
extern int thunk_FUN_10b95cf0(...);
extern int thunk_FUN_10b966e0(...);
extern int thunk_FUN_10b98980(...);
extern int thunk_FUN_10b98a00(...);
extern int thunk_FUN_10b98c90(...);
extern int thunk_FUN_10b98d60(...);
template<class... A> int __stdcall thunk_FUN_10ba2c50(A...);
extern int thunk_FUN_10ba31f0(...);
extern int thunk_FUN_10ba4650(...);
extern int thunk_FUN_10ba5d90(...);
extern int thunk_FUN_10ba6fd0(...);
extern int thunk_FUN_10ba8c30(...);
extern int thunk_FUN_10ba92f0(...);
extern int thunk_FUN_10baa630(...);
extern int thunk_FUN_10baa650(...);
extern int thunk_FUN_10baa760(...);
extern int thunk_FUN_10baec50(...);
extern int thunk_FUN_10bbdbd0(...);
extern int thunk_FUN_10bc3990(...);
extern int thunk_FUN_10bc9860(...);
template<class... A> int __stdcall thunk_FUN_10bcd530(A...);
template<class... A> int __stdcall thunk_FUN_10bcd670(A...);
extern int thunk_FUN_10bd4920(...);
template<class... A> int __stdcall thunk_FUN_10bd5dc0(A...);
extern int thunk_FUN_10bd7130(...);
extern int thunk_FUN_10bd9ba0(...);
template<class... A> int __stdcall thunk_FUN_10f56a40(A...);
extern int thunk_FUN_1106a8d0(...);
extern int thunk_FUN_110828b0(...);
extern int thunk_FUN_1109f0a0(...);
extern int thunk_FUN_1109f7f0(...);
extern int thunk_FUN_110ce190(...);
extern int thunk_FUN_110d3ac0(...);
extern int thunk_FUN_110da8b0(...);
extern int thunk_FUN_111c05a0(...);
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
extern int thunk_FUN_1125b880(...);
extern int thunk_FUN_112af4e0(...);
extern int thunk_FUN_113cfb70(...);
extern int thunk_FUN_1148a50e(...);
extern int thunk_FUN_1148ac28(...);
extern int DAT_00004498;
extern int DAT_0000449c;
extern int DAT_1186d2ee;
extern int DAT_11880fb0;
extern int DAT_1188e740;
extern int DAT_12126b84;
extern int DAT_122e8a30;
extern int g_lSCObjCount;
extern int ghidra_vftable_RControlAIOOpCB;
extern int ghidra_vftable_RControlAIOOpImpl;
extern int ghidra_vftable_RControlAIOOpRef;
extern int ghidra_vftable_RControlAIOOpRefBase;
extern int ghidra_vftable_RDeviceOpBase;
extern int ghidra_vftable_RDeviceOpRequest;
extern int ghidra_vftable_RHTTPDeleteReqHeadersBuilder;
extern int ghidra_vftable_RHttpBaseNoRedirectAIOOp;
extern int ghidra_vftable_RHttpDeleteNoRedirectAIOOp;
extern int ghidra_vftable_RHttpPutNoRedirectAIOOp;
extern int ghidra_vftable_RITQHandler;
extern int ghidra_vftable_RUpnpACDestroyAlarmAIOOp;
extern int ghidra_vftable_RUpnpAsyncIOOperation;
extern int ghidra_vftable_SCAbilityManager_Listener;
extern int ghidra_vftable_SCBTClassicConnectionCallback;
extern int ghidra_vftable_SCChirpManager;
extern int ghidra_vftable_SCEntitlementsManager;
extern int ghidra_vftable_SCEventSubscriptionImpl_EventSink;
extern int ghidra_vftable_SCGetAASessionCallback;
extern int ghidra_vftable_SCIAlarmManager;
extern int ghidra_vftable_SCIArtworkCache;
extern int ghidra_vftable_SCIArtworkCacheManager;
extern int ghidra_vftable_SCIArtworkData;
extern int ghidra_vftable_SCIBTClassicConnectionManager;
extern int ghidra_vftable_SCIChirpListener;
extern int ghidra_vftable_SCILogoArtworkCache;
extern int ghidra_vftable_SCINetworkManagement;
extern int ghidra_vftable_SCINfcListener;
extern int ghidra_vftable_SCIObj;
extern int ghidra_vftable_SCIObjImpl;
extern int ghidra_vftable_SCIOpCBDelegate;
extern int ghidra_vftable_SCIOpDeviceDelete;
extern int ghidra_vftable_SCIOpDeviceGet;
extern int ghidra_vftable_SCIOpDevicePost;
extern int ghidra_vftable_SCIOpDevicePut;
extern int ghidra_vftable_SCIOwnedObjImpl;
extern int ghidra_vftable_SCITearOffObjImpl;
extern int ghidra_vftable_SCLegacyJoinExistingWizardButtonPressState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardCompleteState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardFirewallSubwizardState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardInitState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardIntroState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardSetupNotAllowedState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardSuccessState;
extern int ghidra_vftable_SCLegacyJoinExistingWizardTimeoutState;
extern int ghidra_vftable_SCLoggingHelper;
extern int ghidra_vftable_SCNetworkManagement;
extern int ghidra_vftable_SCNfcManager;
extern int ghidra_vftable_SCOpDeviceDelete;
extern int ghidra_vftable_SCOpDeviceGet;
extern int ghidra_vftable_SCOpDevicePut;
extern int ghidra_vftable_SCOpImpl;
extern int ghidra_vftable_SCOpRef;
extern int ghidra_vftable_SCSettingsReplicator;
extern int ghidra_vftable_SCSettingsReplicatorCustom;
extern int ghidra_vftable_SCSettingsReplicatorRoomName;
extern int ghidra_vftable_SCSettingsReplicatorSonosNetChannel;
extern int ghidra_vftable_SCSwfObjACListener;
extern int ghidra_vftable_SCSwfObjDDListener;
extern int ghidra_vftable_SCWizardState;
extern int ghidra_vftable_SCWizardStateFor;
extern int ghidra_vftable_SCWrapperHelper;
extern int ghidra_vftable_SCWrapperObj;
extern int ghidra_vftable_SvgExtractor;
extern int ghidra_vftable_SvgFileParser;
extern int ghidra_vftable_SvgFileParserCB;
extern int ghidra_vftable_SwfObjDeviceDiscovery_ProductListener;
extern int ghidra_vftable_std_Func_impl_no_alloc;
extern int in_EAX;
extern int uStack_4;
extern int uStack_8;
extern int uStack_c10;
extern int uStack_c1c;
extern undefined1 LAB_100537fb[];
extern undefined1 LAB_1008a49a[];
extern undefined1 LAB_10ba1270[];
extern undefined1 LAB_10ba1275[];
extern undefined1 LAB_10ba12b7[];
extern undefined1 LAB_10ba12bc[];
extern undefined1 LAB_10ba12f0[];
extern undefined1 LAB_10ba12f5[];
extern undefined1 LAB_10ba13c0[];
extern undefined1 LAB_10ba13c5[];
extern undefined1 LAB_10ba1407[];
extern undefined1 LAB_10ba140c[];
extern undefined1 LAB_10ba1440[];
extern undefined1 LAB_10ba1445[];
extern undefined1 LAB_10ba203b[];
extern undefined1 LAB_10ba2058[];
extern undefined1 LAB_10ba205f[];
extern undefined1 LAB_10ba280f[];
extern undefined1 LAB_10ba282e[];
extern undefined1 LAB_114f5ce0[];
extern undefined1 LAB_116be800[];
extern undefined1 LAB_116be830[];
extern undefined1 LAB_116be890[];
extern undefined1 LAB_116c0150[];
extern undefined1 LAB_116c01e0[];
extern undefined1 LAB_116c1820[];
extern undefined1 LAB_116c29f5[];
extern undefined1 LAB_116c31b0[];
extern undefined1 LAB_116c40fd[];
extern void *ExceptionList;
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b80320(undefined4 *param_1);
template<class... A> int FUN_10b80320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b80340(undefined4 *param_1);
template<class... A> int FUN_10b80340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b80360(undefined4 *param_1);
template<class... A> int FUN_10b80360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b80380(undefined4 *param_1);
template<class... A> int FUN_10b80380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b803a0(undefined4 *param_1);
template<class... A> int FUN_10b803a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b803b0(undefined4 *param_1);
template<class... A> int FUN_10b803b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b803c0(undefined4 *param_1);
template<class... A> int FUN_10b803c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ ulong __fastcall FUN_10b80440(int param_1);
template<class... A> int FUN_10b80440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b818e0(int param_1);
template<class... A> int FUN_10b818e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b81d50(int param_1);
template<class... A> int FUN_10b81d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b81d60(int param_1);
template<class... A> int FUN_10b81d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b81d70(int param_1);
template<class... A> int FUN_10b81d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b81d80(int param_1);
template<class... A> int FUN_10b81d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b825f0(void);
template<class... A> int FUN_10b825f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b82640(void);
template<class... A> int FUN_10b82640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b82650(void);
template<class... A> int FUN_10b82650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b82660(void);
template<class... A> int FUN_10b82660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b82670(void);
template<class... A> int FUN_10b82670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b829d0(int *param_1);
template<class... A> int FUN_10b829d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b829e0(int *param_1);
template<class... A> int FUN_10b829e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b829f0(int *param_1);
template<class... A> int FUN_10b829f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b82a00(int *param_1);
template<class... A> int FUN_10b82a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b82a10(int *param_1);
template<class... A> int FUN_10b82a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b82a80(int param_1);
template<class... A> int FUN_10b82a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82ae0(int param_1);
template<class... A> int FUN_10b82ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint FUN_10b82b00(void);
template<class... A> int FUN_10b82b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b82b90(int param_1);
template<class... A> int FUN_10b82b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82e30(undefined4 *param_1);
template<class... A> int FUN_10b82e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82e40(undefined4 *param_1);
template<class... A> int FUN_10b82e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82e50(undefined4 *param_1);
template<class... A> int FUN_10b82e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b82e60(undefined4 *param_1);
template<class... A> int FUN_10b82e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84170(undefined4 *param_1);
template<class... A> int FUN_10b84170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b841a0(undefined4 *param_1);
template<class... A> int FUN_10b841a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b841d0(undefined4 *param_1);
template<class... A> int FUN_10b841d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84200(undefined4 *param_1);
template<class... A> int FUN_10b84200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84230(undefined4 *param_1);
template<class... A> int FUN_10b84230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84260(undefined4 *param_1);
template<class... A> int FUN_10b84260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b84290(undefined4 *param_1);
template<class... A> int FUN_10b84290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b842c0(undefined4 *param_1);
template<class... A> int FUN_10b842c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b842f0(int *param_1);
template<class... A> int FUN_10b842f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b84950(void);
template<class... A> int FUN_10b84950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b84960(void);
template<class... A> int FUN_10b84960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b84970(void);
template<class... A> int FUN_10b84970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b84c80(undefined4 *param_1);
template<class... A> int FUN_10b84c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b84cb0(undefined4 *param_1);
template<class... A> int FUN_10b84cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b84ce0(undefined4 *param_1);
template<class... A> int FUN_10b84ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b84d10(undefined4 *param_1);
template<class... A> int FUN_10b84d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b85f90(undefined4 *param_1);
template<class... A> int FUN_10b85f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b86d50(undefined4 *param_1);
template<class... A> int FUN_10b86d50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b86d60(undefined4 *param_1);
template<class... A> int FUN_10b86d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b86d70(undefined4 *param_1);
template<class... A> int FUN_10b86d70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b86d80(undefined4 *param_1);
template<class... A> int FUN_10b86d80(A...);
/* WARNING: Removing unreachable block (ram,0x101ba14a) */ void __fastcall FUN_10b879c0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10b879d0 (ram,0x101ba14a) */ void __fastcall FUN_10b879d0(undefined4 *param_1);
/* WARNING: Removing unreachable block_10b879f0 (ram,0x101ba14a) */ void __fastcall FUN_10b879f0(undefined4 *param_1);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88730(undefined4 *param_1);
template<class... A> int FUN_10b88730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88750(undefined4 *param_1);
template<class... A> int FUN_10b88750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88770(undefined4 *param_1);
template<class... A> int FUN_10b88770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88780(undefined4 *param_1);
template<class... A> int FUN_10b88780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88790(undefined4 *param_1);
template<class... A> int FUN_10b88790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b887a0(undefined4 *param_1);
template<class... A> int FUN_10b887a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b887b0(undefined4 *param_1);
template<class... A> int FUN_10b887b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b887d0(undefined4 *param_1);
template<class... A> int FUN_10b887d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b88810(undefined4 *param_1);
template<class... A> int FUN_10b88810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b88830(int param_1);
template<class... A> int FUN_10b88830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b88840(int param_1);
template<class... A> int FUN_10b88840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b88850(int param_1);
template<class... A> int FUN_10b88850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __fastcall FUN_10b88860(int param_1);
template<class... A> int FUN_10b88860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10b8b620(undefined4 param_1);
template<class... A> int __stdcall FUN_10b8b620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10b8b640(undefined4 param_1);
template<class... A> int __stdcall FUN_10b8b640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10b8b770(undefined4 param_1);
template<class... A> int __stdcall FUN_10b8b770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b8b8d0(int param_1);
template<class... A> int FUN_10b8b8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b8b8e0(int param_1);
template<class... A> int FUN_10b8b8e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b8b8f0(int param_1);
template<class... A> int FUN_10b8b8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10b8b900(int param_1);
template<class... A> int FUN_10b8b900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8ba50(int param_1);
template<class... A> int FUN_10b8ba50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b8ce00(void);
template<class... A> int FUN_10b8ce00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b8ce10(void);
template<class... A> int FUN_10b8ce10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b8ce20(void);
template<class... A> int FUN_10b8ce20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8dab0(undefined4 *param_1);
template<class... A> int FUN_10b8dab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8dae0(undefined4 *param_1);
template<class... A> int FUN_10b8dae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8db10(undefined4 *param_1);
template<class... A> int FUN_10b8db10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8db40(undefined4 *param_1);
template<class... A> int FUN_10b8db40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8e1d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b8e1d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10b8e1f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10b8e1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8e220(void);
template<class... A> int FUN_10b8e220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8e400(undefined4 *param_1);
template<class... A> int FUN_10b8e400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8e410(undefined4 param_1);
template<class... A> int FUN_10b8e410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b8e420(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10b8e420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8e450(undefined4 param_1);
template<class... A> int FUN_10b8e450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8e460(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10b8e460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8e4a0(undefined4 param_1);
template<class... A> int FUN_10b8e4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8e4d0(undefined4 *param_1);
template<class... A> int FUN_10b8e4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e4f0(undefined4 param_1);
template<class... A> int FUN_10b8e4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8e500(undefined4 *param_1);
template<class... A> int FUN_10b8e500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e670(undefined4 *param_1);
template<class... A> int FUN_10b8e670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e680(undefined4 *param_1);
template<class... A> int FUN_10b8e680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b8e690(int *param_1);
template<class... A> int FUN_10b8e690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b8e6a0(int *param_1);
template<class... A> int FUN_10b8e6a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b8e7f0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10b8e7f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b8e800(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10b8e800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e810(undefined4 param_1);
template<class... A> int FUN_10b8e810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e820(undefined4 param_1);
template<class... A> int FUN_10b8e820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e830(undefined4 param_1);
template<class... A> int FUN_10b8e830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8e840(undefined4 param_1);
template<class... A> int FUN_10b8e840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b8e850(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10b8e850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10b8e8d0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10b8e8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b8e900(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10b8e900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b8e930(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10b8e930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b8e9a0(uint param_1);
template<class... A> int FUN_10b8e9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b8ea20(int *param_1);
template<class... A> int FUN_10b8ea20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b8ea30(undefined4 *param_1);
template<class... A> int FUN_10b8ea30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b8ea40(int param_1,int param_2);
template<class... A> int FUN_10b8ea40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8ead0(void);
template<class... A> int FUN_10b8ead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8eae0(void);
template<class... A> int FUN_10b8eae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8ec50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10b8ec50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8ec70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10b8ec70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8ec90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b8ec90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8ecd0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b8ecd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8ece0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b8ece0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10b8ef40(int param_1);
template<class... A> int FUN_10b8ef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef50(void);
template<class... A> int FUN_10b8ef50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef60(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b8ef60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef70(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b8ef70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef80(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b8ef80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8ef90(void);
template<class... A> int FUN_10b8ef90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8efa0(void);
template<class... A> int FUN_10b8efa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f0a0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10b8f0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f0e0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10b8f0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f100(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10b8f100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f120(undefined4 *param_1);
template<class... A> int FUN_10b8f120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f130(undefined4 param_1);
template<class... A> int FUN_10b8f130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f3d0(undefined4 param_1);
template<class... A> int FUN_10b8f3d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f3e0(undefined4 param_1);
template<class... A> int FUN_10b8f3e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f3f0(undefined4 param_1);
template<class... A> int FUN_10b8f3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f400(undefined4 param_1);
template<class... A> int FUN_10b8f400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f410(undefined4 param_1);
template<class... A> int FUN_10b8f410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f420(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10b8f420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f470(undefined4 param_1,int *param_2);
template<class... A> int FUN_10b8f470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f480(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b8f480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f520(undefined4 param_1);
template<class... A> int FUN_10b8f520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f530(undefined4 param_1);
template<class... A> int FUN_10b8f530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f540(undefined4 param_1);
template<class... A> int FUN_10b8f540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f550(undefined4 param_1);
template<class... A> int FUN_10b8f550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b8f560(undefined4 param_1);
template<class... A> int FUN_10b8f560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b8f570(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10b8f570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8fd40(undefined4 *param_1);
template<class... A> int FUN_10b8fd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b8fd90(undefined4 *param_1);
template<class... A> int FUN_10b8fd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b8fdb0(undefined4 param_1);
template<class... A> int FUN_10b8fdb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b90820(void);
template<class... A> int FUN_10b90820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b910f0(void);
template<class... A> int FUN_10b910f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b91230(void);
template<class... A> int FUN_10b91230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b91240(undefined4 *param_1);
template<class... A> int FUN_10b91240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b916f0(undefined4 *param_1);
template<class... A> int FUN_10b916f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91700(undefined4 *param_1);
template<class... A> int FUN_10b91700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91b90(undefined4 *param_1);
template<class... A> int FUN_10b91b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91ba0(undefined4 *param_1);
template<class... A> int FUN_10b91ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b91d80(undefined4 *param_1);
template<class... A> int FUN_10b91d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b91d90(undefined4 *param_1);
template<class... A> int FUN_10b91d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b91da0(int param_1);
template<class... A> int FUN_10b91da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91db0(int *param_1);
template<class... A> int FUN_10b91db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b91dc0(int *param_1);
template<class... A> int FUN_10b91dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b91dd0(undefined4 *param_1);
template<class... A> int FUN_10b91dd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b91de0(undefined4 *param_1);
template<class... A> int FUN_10b91de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b91df0(int *param_1);
template<class... A> int FUN_10b91df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b92b00(undefined4 *param_1);
template<class... A> int FUN_10b92b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b92c60(int param_1);
template<class... A> int FUN_10b92c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b92c80(float *param_1);
template<class... A> int FUN_10b92c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93050(undefined4 param_1);
template<class... A> int FUN_10b93050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93060(undefined4 param_1);
template<class... A> int FUN_10b93060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93070(undefined4 param_1);
template<class... A> int FUN_10b93070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93080(undefined4 param_1);
template<class... A> int FUN_10b93080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93090(undefined4 param_1);
template<class... A> int FUN_10b93090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b930a0(undefined4 param_1);
template<class... A> int FUN_10b930a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93130(undefined4 param_1);
template<class... A> int FUN_10b93130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93140(undefined4 param_1);
template<class... A> int FUN_10b93140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b931c0(void);
template<class... A> int FUN_10b931c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93280(int param_1);
template<class... A> int FUN_10b93280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b93290(undefined4 *param_1);
template<class... A> int FUN_10b93290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b933e0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10b933e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b93440(uint param_1);
template<class... A> int FUN_10b93440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b934c0(uint param_1);
template<class... A> int FUN_10b934c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93560(int param_1);
template<class... A> int FUN_10b93560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b93570(int param_1);
template<class... A> int FUN_10b93570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b93660(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10b93660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b936b0(int param_1,int param_2);
template<class... A> int FUN_10b936b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b93700(int param_1,int param_2);
template<class... A> int FUN_10b93700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93750(undefined4 *param_1);
template<class... A> int FUN_10b93750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93760(undefined4 *param_1);
template<class... A> int FUN_10b93760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b93770(undefined4 *param_1);
template<class... A> int FUN_10b93770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10b94e70(float *param_1);
template<class... A> int FUN_10b94e70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b94e80(void);
template<class... A> int FUN_10b94e80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b94e90(void);
template<class... A> int FUN_10b94e90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b94ea0(void);
template<class... A> int FUN_10b94ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b94eb0(void);
template<class... A> int FUN_10b94eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b94ed0(undefined4 *param_1);
template<class... A> int FUN_10b94ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b94ee0(undefined4 *param_1);
template<class... A> int FUN_10b94ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b94ff0(undefined4 *param_1);
template<class... A> int FUN_10b94ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95020(undefined4 *param_1);
template<class... A> int FUN_10b95020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95050(undefined4 *param_1);
template<class... A> int FUN_10b95050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95080(undefined4 *param_1);
template<class... A> int FUN_10b95080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b950b0(undefined4 *param_1);
template<class... A> int FUN_10b950b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b950e0(undefined4 *param_1);
template<class... A> int FUN_10b950e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95110(undefined4 *param_1);
template<class... A> int FUN_10b95110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95140(undefined4 *param_1);
template<class... A> int FUN_10b95140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95170(undefined4 *param_1);
template<class... A> int FUN_10b95170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b951a0(undefined4 *param_1);
template<class... A> int FUN_10b951a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b951d0(undefined4 *param_1);
template<class... A> int FUN_10b951d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b95200(undefined4 *param_1);
template<class... A> int FUN_10b95200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b952e0(int *param_1);
template<class... A> int FUN_10b952e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b956b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10b956b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b956d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10b956d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b956f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b956f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b95710(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10b95710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b95730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10b95730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b95750(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b95750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b957d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b957d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b957e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b957e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b957f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b957f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b95800(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b95800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10b959e0(byte *param_1);
template<class... A> int __stdcall FUN_10b959e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10b95a30(int *param_1,int *param_2);
template<class... A> int FUN_10b95a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10b95a50(byte *param_1);
template<class... A> int FUN_10b95a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95aa0(void);
template<class... A> int FUN_10b95aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95ab0(void);
template<class... A> int FUN_10b95ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95ac0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b95ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95ad0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b95ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95ae0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b95ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95af0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b95af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b00(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b95b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b10(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b95b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b20(void);
template<class... A> int FUN_10b95b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b30(void);
template<class... A> int FUN_10b95b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b40(void);
template<class... A> int FUN_10b95b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95b50(void);
template<class... A> int FUN_10b95b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95db0(undefined4 param_1,undefined4 *param_2);
template<class... A> int FUN_10b95db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95df0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10b95df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95e10(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10b95e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b95eb0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10b95eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b95ed0(undefined4 *param_1);
template<class... A> int FUN_10b95ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b95ee0(undefined4 *param_1);
template<class... A> int FUN_10b95ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b95ef0(undefined4 param_1);
template<class... A> int FUN_10b95ef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b95f00(undefined4 param_1);
template<class... A> int FUN_10b95f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96430(undefined4 param_1);
template<class... A> int FUN_10b96430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96440(undefined4 param_1);
template<class... A> int FUN_10b96440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96450(undefined4 param_1);
template<class... A> int FUN_10b96450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96460(undefined4 param_1);
template<class... A> int FUN_10b96460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96470(undefined4 param_1);
template<class... A> int FUN_10b96470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96480(undefined4 param_1);
template<class... A> int FUN_10b96480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96490(undefined4 param_1);
template<class... A> int FUN_10b96490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964a0(undefined4 param_1);
template<class... A> int FUN_10b964a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964b0(undefined4 param_1);
template<class... A> int FUN_10b964b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964c0(undefined4 param_1);
template<class... A> int FUN_10b964c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964d0(undefined4 param_1);
template<class... A> int FUN_10b964d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b964e0(undefined4 param_1);
template<class... A> int FUN_10b964e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b965a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10b965a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b965d0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10b965d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b96690(undefined4 param_1,int *param_2);
template<class... A> int FUN_10b96690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b966a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b966a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b966c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10b966c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b967e0(undefined4 param_1);
template<class... A> int FUN_10b967e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b967f0(undefined4 param_1);
template<class... A> int FUN_10b967f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96800(undefined4 param_1);
template<class... A> int FUN_10b96800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96810(undefined4 param_1);
template<class... A> int FUN_10b96810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96820(undefined4 param_1);
template<class... A> int FUN_10b96820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96830(undefined4 param_1);
template<class... A> int FUN_10b96830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96840(undefined4 param_1);
template<class... A> int FUN_10b96840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96850(undefined4 param_1);
template<class... A> int FUN_10b96850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96860(undefined4 param_1);
template<class... A> int FUN_10b96860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96870(undefined4 param_1);
template<class... A> int FUN_10b96870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b96880(undefined4 param_1);
template<class... A> int FUN_10b96880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b96890(void);
template<class... A> int FUN_10b96890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b968a0(void);
template<class... A> int FUN_10b968a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b968b0(void);
template<class... A> int FUN_10b968b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b968c0(void);
template<class... A> int FUN_10b968c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b968d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10b968d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b96900(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10b96900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96af0(undefined4 *param_1);
template<class... A> int FUN_10b96af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96b20(undefined4 *param_1);
template<class... A> int FUN_10b96b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96b50(undefined4 *param_1);
template<class... A> int FUN_10b96b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96b80(undefined4 *param_1);
template<class... A> int FUN_10b96b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96bb0(undefined4 *param_1);
template<class... A> int FUN_10b96bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96c80(undefined4 *param_1);
template<class... A> int FUN_10b96c80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96d10(undefined4 *param_1);
template<class... A> int FUN_10b96d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96d30(undefined4 *param_1);
template<class... A> int FUN_10b96d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96d90(undefined4 *param_1);
template<class... A> int FUN_10b96d90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b96db0(undefined4 *param_1);
template<class... A> int FUN_10b96db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b96ed0(int param_1);
template<class... A> int FUN_10b96ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b970a0(undefined4 *param_1);
template<class... A> int FUN_10b970a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b970c0(undefined4 *param_1);
template<class... A> int FUN_10b970c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b970e0(undefined4 *param_1);
template<class... A> int FUN_10b970e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97100(undefined4 *param_1);
template<class... A> int FUN_10b97100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97120(undefined4 *param_1);
template<class... A> int FUN_10b97120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97140(undefined4 *param_1);
template<class... A> int FUN_10b97140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97170(undefined4 *param_1);
template<class... A> int FUN_10b97170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97190(undefined4 *param_1);
template<class... A> int FUN_10b97190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10b971b0(undefined1 *param_1);
template<class... A> int FUN_10b971b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97240(undefined4 *param_1);
template<class... A> int FUN_10b97240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97260(undefined4 *param_1);
template<class... A> int FUN_10b97260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b97280(undefined4 param_1);
template<class... A> int FUN_10b97280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b97290(undefined4 param_1);
template<class... A> int FUN_10b97290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b972a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10b972a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97ea0(undefined4 *param_1);
template<class... A> int FUN_10b97ea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97eb0(undefined4 *param_1);
template<class... A> int FUN_10b97eb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97ec0(undefined4 *param_1);
template<class... A> int FUN_10b97ec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b97ed0(undefined4 *param_1);
template<class... A> int FUN_10b97ed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b98310(undefined4 *param_1);
template<class... A> int FUN_10b98310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b98380(undefined4 *param_1);
template<class... A> int FUN_10b98380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b983c0(int param_1);
template<class... A> int FUN_10b983c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b98c20(void);
template<class... A> int FUN_10b98c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b98c30(void);
template<class... A> int FUN_10b98c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b98e30(int param_1);
template<class... A> int FUN_10b98e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b98e40(int param_1);
template<class... A> int FUN_10b98e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99210(undefined4 *param_1);
template<class... A> int FUN_10b99210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99230(undefined4 *param_1);
template<class... A> int FUN_10b99230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99240(undefined4 *param_1);
template<class... A> int FUN_10b99240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99250(undefined4 *param_1);
template<class... A> int FUN_10b99250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b99260(undefined4 *param_1);
template<class... A> int FUN_10b99260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b993e0(undefined4 *param_1);
template<class... A> int FUN_10b993e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b993f0(int *param_1);
template<class... A> int FUN_10b993f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b998b0(undefined4 *param_1);
template<class... A> int FUN_10b998b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b998c0(int *param_1);
template<class... A> int FUN_10b998c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b998d0(undefined4 *param_1);
template<class... A> int FUN_10b998d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b998e0(int *param_1);
template<class... A> int FUN_10b998e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b998f0(int *param_1);
template<class... A> int FUN_10b998f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99900(undefined4 *param_1);
template<class... A> int FUN_10b99900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b99910(int *param_1);
template<class... A> int FUN_10b99910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99920(undefined4 *param_1);
template<class... A> int FUN_10b99920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b99930(int param_1);
template<class... A> int FUN_10b99930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99940(int param_1);
template<class... A> int FUN_10b99940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99950(undefined4 *param_1);
template<class... A> int FUN_10b99950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99960(undefined4 *param_1);
template<class... A> int FUN_10b99960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99970(undefined4 *param_1);
template<class... A> int FUN_10b99970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99980(undefined4 *param_1);
template<class... A> int FUN_10b99980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b99990(undefined4 *param_1);
template<class... A> int FUN_10b99990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b999a0(undefined4 *param_1);
template<class... A> int FUN_10b999a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b999b0(undefined4 *param_1);
template<class... A> int FUN_10b999b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b999c0(int *param_1);
template<class... A> int FUN_10b999c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b999d0(int *param_1);
template<class... A> int FUN_10b999d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b999e0(int *param_1);
template<class... A> int FUN_10b999e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b999f0(int *param_1);
template<class... A> int FUN_10b999f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a00(int *param_1);
template<class... A> int FUN_10b99a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a10(int *param_1);
template<class... A> int FUN_10b99a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a20(int *param_1);
template<class... A> int FUN_10b99a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a30(int *param_1);
template<class... A> int FUN_10b99a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a40(int *param_1);
template<class... A> int FUN_10b99a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b99a50(int *param_1);
template<class... A> int FUN_10b99a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99a60(undefined4 *param_1);
template<class... A> int FUN_10b99a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99a70(undefined4 *param_1);
template<class... A> int FUN_10b99a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99ac0(undefined4 *param_1);
template<class... A> int FUN_10b99ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99ad0(undefined4 *param_1);
template<class... A> int FUN_10b99ad0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99ae0(undefined4 *param_1);
template<class... A> int FUN_10b99ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10b99af0(undefined4 *param_1);
template<class... A> int FUN_10b99af0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b99b00(int *param_1);
template<class... A> int FUN_10b99b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __fastcall FUN_10b99b10(int *param_1);
template<class... A> int FUN_10b99b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10b99b20(int *param_1,int *param_2);
template<class... A> int FUN_10b99b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __stdcall FUN_10b99b40(byte *param_1);
template<class... A> int __stdcall FUN_10b99b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __stdcall FUN_10b99b90(int *param_1,int *param_2);
template<class... A> int FUN_10b99b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9a400(undefined4 *param_1);
template<class... A> int FUN_10b9a400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9a420(undefined4 *param_1);
template<class... A> int FUN_10b9a420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9a6c0(int param_1);
template<class... A> int FUN_10b9a6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9a6e0(int param_1);
template<class... A> int FUN_10b9a6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b9a700(int param_1);
template<class... A> int FUN_10b9a700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b9a760(float *param_1);
template<class... A> int FUN_10b9a760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b9a920(int param_1);
template<class... A> int FUN_10b9a920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae50(undefined4 param_1);
template<class... A> int FUN_10b9ae50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae60(undefined4 param_1);
template<class... A> int FUN_10b9ae60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae70(undefined4 param_1);
template<class... A> int FUN_10b9ae70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae80(undefined4 param_1);
template<class... A> int FUN_10b9ae80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9ae90(undefined4 param_1);
template<class... A> int FUN_10b9ae90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aea0(undefined4 param_1);
template<class... A> int FUN_10b9aea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aeb0(undefined4 param_1);
template<class... A> int FUN_10b9aeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aec0(undefined4 param_1);
template<class... A> int FUN_10b9aec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aed0(undefined4 param_1);
template<class... A> int FUN_10b9aed0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9aee0(undefined4 param_1);
template<class... A> int FUN_10b9aee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b9aef0(int param_1);
template<class... A> int FUN_10b9aef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b9af00(int param_1);
template<class... A> int FUN_10b9af00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af10(undefined4 param_1);
template<class... A> int FUN_10b9af10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af20(undefined4 param_1);
template<class... A> int FUN_10b9af20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af30(undefined4 param_1);
template<class... A> int FUN_10b9af30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af40(undefined4 param_1);
template<class... A> int FUN_10b9af40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9af50(int param_1);
template<class... A> int FUN_10b9af50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b9b060(int param_1);
template<class... A> int FUN_10b9b060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b9b070(int param_1);
template<class... A> int FUN_10b9b070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10b9b080(int param_1);
template<class... A> int FUN_10b9b080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9b090(undefined4 param_1);
template<class... A> int FUN_10b9b090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9b0a0(undefined4 param_1);
template<class... A> int FUN_10b9b0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b190(void);
template<class... A> int FUN_10b9b190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b1a0(void);
template<class... A> int FUN_10b9b1a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9b1b0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10b9b1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9b1c0(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10b9b1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9b330(int param_1);
template<class... A> int FUN_10b9b330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9b340(int param_1);
template<class... A> int FUN_10b9b340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9b350(undefined4 *param_1);
template<class... A> int FUN_10b9b350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9b360(undefined4 *param_1);
template<class... A> int FUN_10b9b360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b6b0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10b9b6b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9b6f0(int param_1,int param_2,int param_3);
template<class... A> int FUN_10b9b6f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b9baf0(uint param_1);
template<class... A> int FUN_10b9baf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b9bb70(uint param_1);
template<class... A> int FUN_10b9bb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b9bbf0(uint param_1);
template<class... A> int FUN_10b9bbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10b9bc60(uint param_1);
template<class... A> int FUN_10b9bc60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9bdc0(int param_1);
template<class... A> int FUN_10b9bdc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9bdd0(int param_1);
template<class... A> int FUN_10b9bdd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9bf70(int param_1);
template<class... A> int FUN_10b9bf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9c160(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10b9c160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9c1b0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10b9c1b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9c200(int param_1,int param_2);
template<class... A> int FUN_10b9c200(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9c250(int param_1,int param_2);
template<class... A> int FUN_10b9c250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9c2a0(int param_1,int param_2);
template<class... A> int FUN_10b9c2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10b9c2f0(int param_1,int param_2);
template<class... A> int FUN_10b9c2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9c340(undefined4 *param_1);
template<class... A> int FUN_10b9c340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9c360(undefined4 *param_1);
template<class... A> int FUN_10b9c360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9c4f0(void);
template<class... A> int FUN_10b9c4f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9c730(int param_1);
template<class... A> int FUN_10b9c730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9de50(int param_1);
template<class... A> int FUN_10b9de50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9e070(int param_1);
template<class... A> int FUN_10b9e070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9e530(int param_1);
template<class... A> int FUN_10b9e530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b9e8f0(void);
template<class... A> int FUN_10b9e8f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b9e900(void);
template<class... A> int FUN_10b9e900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b9e910(void);
template<class... A> int FUN_10b9e910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10b9e920(void);
template<class... A> int FUN_10b9e920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10b9eba0(int *param_1);
template<class... A> int FUN_10b9eba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9ebb0(char *param_1,uint param_2);
template<class... A> int FUN_10b9ebb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10b9f030(undefined1 param_1);
template<class... A> int FUN_10b9f030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10b9f040(int param_1);
template<class... A> int FUN_10b9f040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ float10 __fastcall FUN_10b9f050(float *param_1);
template<class... A> int FUN_10b9f050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f060(void);
template<class... A> int FUN_10b9f060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f070(void);
template<class... A> int FUN_10b9f070(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f080(void);
template<class... A> int FUN_10b9f080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f090(void);
template<class... A> int FUN_10b9f090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f0a0(void);
template<class... A> int FUN_10b9f0a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f0b0(void);
template<class... A> int FUN_10b9f0b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f0c0(void);
template<class... A> int FUN_10b9f0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f0d0(void);
template<class... A> int FUN_10b9f0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f450(int param_1);
template<class... A> int FUN_10b9f450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f5f0(undefined4 param_1);
template<class... A> int FUN_10b9f5f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10b9f600(undefined4 param_1);
template<class... A> int FUN_10b9f600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f610(undefined4 *param_1);
template<class... A> int FUN_10b9f610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f620(undefined4 *param_1);
template<class... A> int FUN_10b9f620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f630(undefined4 *param_1);
template<class... A> int FUN_10b9f630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f640(undefined4 *param_1);
template<class... A> int FUN_10b9f640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f650(undefined4 *param_1);
template<class... A> int FUN_10b9f650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10b9f660(undefined4 *param_1);
template<class... A> int FUN_10b9f660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fbf0(undefined4 *param_1);
template<class... A> int FUN_10b9fbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fc20(undefined4 *param_1);
template<class... A> int FUN_10b9fc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fc50(undefined4 *param_1);
template<class... A> int FUN_10b9fc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fc80(undefined4 *param_1);
template<class... A> int FUN_10b9fc80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fcb0(undefined4 *param_1);
template<class... A> int FUN_10b9fcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fce0(undefined4 *param_1);
template<class... A> int FUN_10b9fce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fd10(undefined4 *param_1);
template<class... A> int FUN_10b9fd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10b9fd40(int *param_1);
template<class... A> int FUN_10b9fd40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba0bd0(int *param_1);
template<class... A> int FUN_10ba0bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba0be0(int *param_1);
template<class... A> int FUN_10ba0be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba1390(int param_1,byte *param_2,undefined4 *param_3);
template<class... A> int FUN_10ba1390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba1ab0(int param_1);
template<class... A> int FUN_10ba1ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ba1ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1ae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ba1ae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1b00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10ba1b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1c40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10ba1c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba1c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10ba1c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba2120(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10ba2120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10ba2690(int param_1);
template<class... A> int FUN_10ba2690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26a0(void);
template<class... A> int FUN_10ba26a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26b0(void);
template<class... A> int FUN_10ba26b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26c0(void);
template<class... A> int FUN_10ba26c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26d0(void);
template<class... A> int FUN_10ba26d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba26f0(void);
template<class... A> int FUN_10ba26f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba2740(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_10ba2740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba2870(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ba2870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba2880(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ba2880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba2890(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ba2890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba28a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ba28a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba28b0(void);
template<class... A> int FUN_10ba28b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba28c0(void);
template<class... A> int FUN_10ba28c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba28d0(int param_1,int param_2);
template<class... A> int FUN_10ba28d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba3400(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10ba3400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba3420(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10ba3420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba3440(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10ba3440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba34e0(undefined4 param_1);
template<class... A> int FUN_10ba34e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba34f0(undefined4 param_1);
template<class... A> int FUN_10ba34f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3500(undefined4 param_1);
template<class... A> int FUN_10ba3500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3510(undefined4 *param_1);
template<class... A> int FUN_10ba3510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3640(undefined4 param_1);
template<class... A> int FUN_10ba3640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3650(undefined4 param_1);
template<class... A> int FUN_10ba3650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10ba3660(int param_1,uint *param_2);
template<class... A> int FUN_10ba3660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10ba3690(int param_1,uint *param_2);
template<class... A> int FUN_10ba3690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10ba38a0(int param_1);
template<class... A> int FUN_10ba38a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba38b0(int param_1,uint param_2,uint param_3,byte *param_4,int param_5);
template<class... A> int FUN_10ba38b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba39a0(int param_1,uint param_2,uint param_3,void *param_4,size_t param_5);
template<class... A> int FUN_10ba39a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3d30(undefined4 param_1);
template<class... A> int FUN_10ba3d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3f60(undefined4 param_1);
template<class... A> int FUN_10ba3f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3f70(undefined4 param_1);
template<class... A> int FUN_10ba3f70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3f80(undefined4 param_1);
template<class... A> int FUN_10ba3f80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3f90(undefined4 param_1);
template<class... A> int FUN_10ba3f90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3fb0(undefined4 param_1);
template<class... A> int FUN_10ba3fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3fc0(undefined4 param_1);
template<class... A> int FUN_10ba3fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3fd0(undefined4 param_1);
template<class... A> int FUN_10ba3fd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3fe0(undefined4 param_1);
template<class... A> int FUN_10ba3fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba3ff0(undefined4 param_1);
template<class... A> int FUN_10ba3ff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4000(undefined4 param_1);
template<class... A> int FUN_10ba4000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4010(undefined4 param_1);
template<class... A> int FUN_10ba4010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4020(undefined4 param_1);
template<class... A> int FUN_10ba4020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4030(undefined4 param_1);
template<class... A> int FUN_10ba4030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ba4040(undefined4 *param_1,undefined4 param_2);
template<class... A> int FUN_10ba4040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4080(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10ba4080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba40d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10ba40d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4100(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10ba4100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4120(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10ba4120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4290(undefined4 param_1,undefined4 param_2,undefined4 param_3);
template<class... A> int FUN_10ba4290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba42b0(void);
template<class... A> int FUN_10ba42b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba4330(undefined4 param_1,int param_2);
template<class... A> int FUN_10ba4330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba4340(int *param_1,int *param_2);
template<class... A> int FUN_10ba4340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba43b0(int *param_1,int *param_2);
template<class... A> int FUN_10ba43b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba4420(int *param_1,int *param_2);
template<class... A> int FUN_10ba4420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba44d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ba44d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba44f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ba44f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4510(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ba4510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4530(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10ba4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4550(undefined4 param_1);
template<class... A> int FUN_10ba4550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4560(undefined4 param_1);
template<class... A> int FUN_10ba4560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4570(undefined4 param_1);
template<class... A> int FUN_10ba4570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4580(undefined4 param_1);
template<class... A> int FUN_10ba4580(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4590(undefined4 param_1);
template<class... A> int FUN_10ba4590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45a0(undefined4 param_1);
template<class... A> int FUN_10ba45a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45c0(undefined4 param_1);
template<class... A> int FUN_10ba45c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45d0(undefined4 param_1);
template<class... A> int FUN_10ba45d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45e0(undefined4 param_1);
template<class... A> int FUN_10ba45e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba45f0(undefined4 param_1);
template<class... A> int FUN_10ba45f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4600(undefined4 param_1);
template<class... A> int FUN_10ba4600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4620(undefined4 param_1);
template<class... A> int FUN_10ba4620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4630(undefined4 param_1);
template<class... A> int FUN_10ba4630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ba4640(void);
template<class... A> int FUN_10ba4640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ basic_istream<char,std::char_traits<char>> *
FUN_10ba4810(basic_istream<char,std::char_traits<char>> *param_1,undefined4 *param_2,
                  byte param_3);
template<class... A> int FUN_10ba4810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10ba49f0(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_10ba49f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4a30(undefined4 param_1);
template<class... A> int FUN_10ba4a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4a50(undefined4 param_1);
template<class... A> int FUN_10ba4a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10ba4a60(undefined4 param_1);
template<class... A> int FUN_10ba4a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba4cf0(undefined4 *param_1);
template<class... A> int FUN_10ba4cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba4fb0(undefined4 *param_1);
template<class... A> int FUN_10ba4fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5060(undefined4 *param_1);
template<class... A> int FUN_10ba5060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba50c0(undefined4 *param_1);
template<class... A> int FUN_10ba50c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba50e0(undefined4 *param_1);
template<class... A> int FUN_10ba50e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5100(undefined4 *param_1);
template<class... A> int FUN_10ba5100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5120(undefined4 *param_1);
template<class... A> int FUN_10ba5120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5160(undefined4 *param_1);
template<class... A> int FUN_10ba5160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba5210(undefined4 param_1);
template<class... A> int FUN_10ba5210(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba5220(int param_1);
template<class... A> int FUN_10ba5220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __fastcall FUN_10ba5230(void *param_1);
template<class... A> int FUN_10ba5230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5450(undefined4 *param_1);
template<class... A> int FUN_10ba5450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5470(undefined4 *param_1);
template<class... A> int FUN_10ba5470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba54b0(undefined4 *param_1);
template<class... A> int FUN_10ba54b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba54d0(undefined4 param_1);
template<class... A> int FUN_10ba54d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba54e0(undefined4 param_1);
template<class... A> int FUN_10ba54e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba54f0(undefined4 param_1);
template<class... A> int FUN_10ba54f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5860(undefined4 *param_1);
template<class... A> int FUN_10ba5860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba59e0(undefined4 *param_1);
template<class... A> int FUN_10ba59e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5a30(undefined4 *param_1);
template<class... A> int FUN_10ba5a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba5ba0(undefined4 *param_1);
template<class... A> int FUN_10ba5ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __fastcall FUN_10ba5bc0(undefined1 *param_1);
template<class... A> int FUN_10ba5bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba5ee0(int param_1);
template<class... A> int FUN_10ba5ee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba6020(undefined4 *param_1);
template<class... A> int FUN_10ba6020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined2 * __fastcall FUN_10ba6040(undefined2 *param_1);
template<class... A> int FUN_10ba6040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba6150(undefined4 *param_1);
template<class... A> int FUN_10ba6150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba66c0(undefined4 *param_1);
template<class... A> int FUN_10ba66c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10ba66d0(undefined4 *param_1);
template<class... A> int FUN_10ba66d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6950(undefined4 *param_1);
template<class... A> int FUN_10ba6950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6ca0(int param_1);
template<class... A> int FUN_10ba6ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6d60(int param_1);
template<class... A> int FUN_10ba6d60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6e10(int param_1);
template<class... A> int FUN_10ba6e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6e30(int param_1);
template<class... A> int FUN_10ba6e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba6fb0(undefined4 *param_1);
template<class... A> int FUN_10ba6fb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba7170(undefined4 *param_1);
template<class... A> int FUN_10ba7170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba7440(undefined4 *param_1);
template<class... A> int FUN_10ba7440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba7480(int *param_1);
template<class... A> int FUN_10ba7480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b20(undefined4 *param_1);
template<class... A> int FUN_10ba7b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b30(undefined4 *param_1);
template<class... A> int FUN_10ba7b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b40(undefined4 *param_1);
template<class... A> int FUN_10ba7b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b50(undefined4 *param_1);
template<class... A> int FUN_10ba7b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ba7b60(int param_1);
template<class... A> int FUN_10ba7b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ba7b70(int param_1);
template<class... A> int FUN_10ba7b70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10ba7b80(int param_1);
template<class... A> int FUN_10ba7b80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7b90(undefined4 *param_1);
template<class... A> int FUN_10ba7b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7ba0(undefined4 *param_1);
template<class... A> int FUN_10ba7ba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7bb0(undefined4 *param_1);
template<class... A> int FUN_10ba7bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7bc0(undefined4 *param_1);
template<class... A> int FUN_10ba7bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7bd0(undefined4 *param_1);
template<class... A> int FUN_10ba7bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba7be0(undefined4 *param_1);
template<class... A> int FUN_10ba7be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7bf0(int *param_1);
template<class... A> int FUN_10ba7bf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c00(int *param_1);
template<class... A> int FUN_10ba7c00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c10(int *param_1);
template<class... A> int FUN_10ba7c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c20(int *param_1);
template<class... A> int FUN_10ba7c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c30(int *param_1);
template<class... A> int FUN_10ba7c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10ba7c40(int *param_1);
template<class... A> int FUN_10ba7c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10ba7df0(void *param_1,void *param_2,int param_3);
template<class... A> int FUN_10ba7df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10ba8410(void);
template<class... A> int FUN_10ba8410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba8420(undefined4 *param_1);
template<class... A> int FUN_10ba8420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba8450(undefined4 *param_1);
template<class... A> int FUN_10ba8450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba8670(int param_1);
template<class... A> int FUN_10ba8670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10ba8690(int param_1);
template<class... A> int FUN_10ba8690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ba8880(int param_1);
template<class... A> int FUN_10ba8880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10ba8980(undefined4 param_1);
template<class... A> int __stdcall FUN_10ba8980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9670(undefined4 param_1);
template<class... A> int FUN_10ba9670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9680(undefined4 param_1);
template<class... A> int FUN_10ba9680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9690(undefined4 param_1);
template<class... A> int FUN_10ba9690(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96a0(undefined4 param_1);
template<class... A> int FUN_10ba96a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96b0(undefined4 param_1);
template<class... A> int FUN_10ba96b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96c0(undefined4 param_1);
template<class... A> int FUN_10ba96c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96d0(undefined4 param_1);
template<class... A> int FUN_10ba96d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96e0(undefined4 param_1);
template<class... A> int FUN_10ba96e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba96f0(undefined4 param_1);
template<class... A> int FUN_10ba96f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9700(undefined4 param_1);
template<class... A> int FUN_10ba9700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9710(undefined4 param_1);
template<class... A> int FUN_10ba9710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9720(undefined4 param_1);
template<class... A> int FUN_10ba9720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9730(undefined4 param_1);
template<class... A> int FUN_10ba9730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9740(undefined4 param_1);
template<class... A> int FUN_10ba9740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9750(undefined4 param_1);
template<class... A> int FUN_10ba9750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9760(undefined4 param_1);
template<class... A> int FUN_10ba9760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9770(undefined4 param_1);
template<class... A> int FUN_10ba9770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9780(undefined4 param_1);
template<class... A> int FUN_10ba9780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba9790(undefined4 param_1);
template<class... A> int FUN_10ba9790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba97a0(undefined4 param_1);
template<class... A> int FUN_10ba97a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10ba97b0(int param_1);
template<class... A> int FUN_10ba97b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10ba9de0(int param_1);
template<class... A> int FUN_10ba9de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba9f10(int param_1);
template<class... A> int FUN_10ba9f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10ba9f40(int param_1);
template<class... A> int FUN_10ba9f40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10baa000(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10baa000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10baa010(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10baa010(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10baa020(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10baa020(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10baa030(int param_1);
template<class... A> int FUN_10baa030(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10baa040(int param_1);
template<class... A> int FUN_10baa040(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10baa050(undefined4 *param_1);
template<class... A> int FUN_10baa050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10baa670(uint param_1);
template<class... A> int FUN_10baa670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10baa6e0(uint param_1);
template<class... A> int FUN_10baa6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10baa7e0(int *param_1);
template<class... A> int FUN_10baa7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10baa8a0(int param_1);
template<class... A> int FUN_10baa8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10baa8d0(int *param_1);
template<class... A> int FUN_10baa8d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10baa9f0(int param_1);
template<class... A> int FUN_10baa9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bab090(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10bab090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bab0e0(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10bab0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bab130(int param_1,int param_2);
template<class... A> int FUN_10bab130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bab180(int param_1,int param_2);
template<class... A> int FUN_10bab180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bab230(undefined4 *param_1);
template<class... A> int FUN_10bab230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bab250(undefined4 *param_1);
template<class... A> int FUN_10bab250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10bab350(SCStr *param_1);
template<class... A> int __stdcall FUN_10bab350(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bab3b0(int param_1);
template<class... A> int FUN_10bab3b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bab3c0(int *param_1);
template<class... A> int FUN_10bab3c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bac670(int param_1);
template<class... A> int FUN_10bac670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bacbc0(int param_1);
template<class... A> int FUN_10bacbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bad870(void);
template<class... A> int FUN_10bad870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bae9c0(undefined4 param_1,SCStr *param_2);
template<class... A> int FUN_10bae9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bb2290(int *param_1);
template<class... A> int FUN_10bb2290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bb22a0(int *param_1);
template<class... A> int FUN_10bb22a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bb22b0(int *param_1);
template<class... A> int FUN_10bb22b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb24c0(void);
template<class... A> int FUN_10bb24c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb24d0(void);
template<class... A> int FUN_10bb24d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb24e0(void);
template<class... A> int FUN_10bb24e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb24f0(void);
template<class... A> int FUN_10bb24f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb2500(void);
template<class... A> int FUN_10bb2500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb2510(void);
template<class... A> int FUN_10bb2510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb2520(int *param_1);
template<class... A> int FUN_10bb2520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb3100(undefined4 param_1);
template<class... A> int FUN_10bb3100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb3110(undefined4 param_1);
template<class... A> int FUN_10bb3110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb3120(undefined4 param_1);
template<class... A> int FUN_10bb3120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb3130(int param_1);
template<class... A> int FUN_10bb3130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb3160(undefined4 *param_1);
template<class... A> int FUN_10bb3160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb3170(undefined4 *param_1);
template<class... A> int FUN_10bb3170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb3180(undefined4 *param_1);
template<class... A> int FUN_10bb3180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb3370(undefined4 *param_1);
template<class... A> int FUN_10bb3370(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb33a0(undefined4 *param_1);
template<class... A> int FUN_10bb33a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb33d0(undefined4 *param_1);
template<class... A> int FUN_10bb33d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb3400(undefined4 *param_1);
template<class... A> int FUN_10bb3400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb42c0(undefined4 param_1);
template<class... A> int FUN_10bb42c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb4390(int param_1);
template<class... A> int FUN_10bb4390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb43a0(int param_1);
template<class... A> int FUN_10bb43a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bb43b0(int *param_1);
template<class... A> int FUN_10bb43b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb47c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bb47c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb4800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bb4800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb4b10(undefined4 *param_1);
template<class... A> int FUN_10bb4b10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4b90(void);
template<class... A> int FUN_10bb4b90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4bb0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bb4bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4bc0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bb4bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4bd0(void);
template<class... A> int FUN_10bb4bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb4d80(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bb4d80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb4e50(undefined4 param_1);
template<class... A> int FUN_10bb4e50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10bb4e60(int param_1,SCStr *param_2);
template<class... A> int FUN_10bb4e60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5110(undefined4 param_1);
template<class... A> int FUN_10bb5110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5120(undefined4 param_1);
template<class... A> int FUN_10bb5120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5130(undefined4 param_1);
template<class... A> int FUN_10bb5130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5140(undefined4 param_1);
template<class... A> int FUN_10bb5140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5150(undefined4 param_1);
template<class... A> int FUN_10bb5150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb5160(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bb5160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb5190(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bb5190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5260(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bb5260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb5280(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bb5280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb52a0(undefined4 param_1);
template<class... A> int FUN_10bb52a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb52b0(undefined4 param_1);
template<class... A> int FUN_10bb52b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bb52c0(undefined4 param_1);
template<class... A> int FUN_10bb52c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb53d0(undefined4 *param_1);
template<class... A> int FUN_10bb53d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb53f0(undefined4 param_1);
template<class... A> int FUN_10bb53f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb5400(undefined4 *param_1);
template<class... A> int FUN_10bb5400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb5450(undefined4 *param_1);
template<class... A> int FUN_10bb5450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb58b0(undefined4 *param_1);
template<class... A> int FUN_10bb58b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb58c0(undefined4 *param_1);
template<class... A> int FUN_10bb58c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5ce0(undefined4 *param_1);
template<class... A> int FUN_10bb5ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5de0(undefined4 *param_1);
template<class... A> int FUN_10bb5de0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5df0(undefined4 *param_1);
template<class... A> int FUN_10bb5df0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5e00(undefined4 *param_1);
template<class... A> int FUN_10bb5e00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5e10(undefined4 *param_1);
template<class... A> int FUN_10bb5e10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5e30(undefined4 *param_1);
template<class... A> int FUN_10bb5e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb5e40(undefined4 *param_1);
template<class... A> int FUN_10bb5e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6080(undefined4 *param_1);
template<class... A> int FUN_10bb6080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb66c0(undefined4 *param_1);
template<class... A> int FUN_10bb66c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bb6710(int param_1);
template<class... A> int FUN_10bb6710(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6730(undefined4 param_1);
template<class... A> int FUN_10bb6730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6740(undefined4 param_1);
template<class... A> int FUN_10bb6740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6750(undefined4 param_1);
template<class... A> int FUN_10bb6750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6760(undefined4 param_1);
template<class... A> int FUN_10bb6760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6770(undefined4 param_1);
template<class... A> int FUN_10bb6770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6780(undefined4 param_1);
template<class... A> int FUN_10bb6780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6790(undefined4 param_1);
template<class... A> int FUN_10bb6790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb67a0(undefined4 param_1);
template<class... A> int FUN_10bb67a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bb6ab0(int param_1);
template<class... A> int FUN_10bb6ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bb6f10(uint param_1);
template<class... A> int FUN_10bb6f10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bb77d0(int param_1);
template<class... A> int FUN_10bb77d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bb7960(undefined4 param_1,int param_2,int param_3);
template<class... A> int FUN_10bb7960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bb79b0(int param_1,int param_2);
template<class... A> int FUN_10bb79b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bbabb0(SCStr *param_1);
template<class... A> int __stdcall FUN_10bbabb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbabd0(void);
template<class... A> int FUN_10bbabd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbabe0(void);
template<class... A> int FUN_10bbabe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbb590(undefined4 *param_1);
template<class... A> int FUN_10bbb590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbb660(undefined4 *param_1);
template<class... A> int FUN_10bbb660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbb6c0(undefined4 *param_1);
template<class... A> int FUN_10bbb6c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbb6e0(undefined4 *param_1);
template<class... A> int FUN_10bbb6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbb700(undefined4 *param_1);
template<class... A> int FUN_10bbb700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbb720(undefined4 *param_1);
template<class... A> int FUN_10bbb720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bbc050(int param_1);
template<class... A> int FUN_10bbc050(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbd8c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bbd8c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bbdb70(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bbdb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbdba0(void);
template<class... A> int FUN_10bbdba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbdd80(undefined4 *param_1);
template<class... A> int FUN_10bbdd80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbdd90(undefined4 param_1);
template<class... A> int FUN_10bbdd90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bbdda0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bbdda0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbde00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bbde00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbde10(void);
template<class... A> int FUN_10bbde10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbde50(undefined4 param_1);
template<class... A> int FUN_10bbde50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bbde60(void);
template<class... A> int FUN_10bbde60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bbde70(void);
template<class... A> int FUN_10bbde70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbde80(undefined4 *param_1);
template<class... A> int FUN_10bbde80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdef0(undefined4 *param_1);
template<class... A> int FUN_10bbdef0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdf10(undefined4 *param_1);
template<class... A> int FUN_10bbdf10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdf20(undefined4 *param_1);
template<class... A> int FUN_10bbdf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbdf40(undefined4 param_1);
template<class... A> int FUN_10bbdf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdf50(undefined4 *param_1);
template<class... A> int FUN_10bbdf50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdf70(undefined4 *param_1);
template<class... A> int FUN_10bbdf70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbdff0(undefined4 *param_1);
template<class... A> int FUN_10bbdff0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbe000(undefined4 *param_1);
template<class... A> int FUN_10bbe000(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbe2f0(undefined4 *param_1);
template<class... A> int FUN_10bbe2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe380(undefined4 *param_1);
template<class... A> int FUN_10bbe380(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe390(undefined4 *param_1);
template<class... A> int FUN_10bbe390(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bbe600(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bbe600(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe610(undefined4 param_1);
template<class... A> int FUN_10bbe610(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe620(undefined4 param_1);
template<class... A> int FUN_10bbe620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe630(undefined4 param_1);
template<class... A> int FUN_10bbe630(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbe640(undefined4 param_1);
template<class... A> int FUN_10bbe640(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bbe650(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bbe650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bbe6d0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bbe6d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bbe700(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bbe700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bbe730(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bbe730(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bbe7b0(uint param_1);
template<class... A> int FUN_10bbe7b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bbe820(int *param_1);
template<class... A> int FUN_10bbe820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bbe830(int param_1,int param_2);
template<class... A> int FUN_10bbe830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10bbe880(SCStr *param_1);
template<class... A> int __stdcall FUN_10bbe880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bbead0(void);
template<class... A> int FUN_10bbead0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bbeae0(void);
template<class... A> int FUN_10bbeae0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bbeaf0(int *param_1);
template<class... A> int FUN_10bbeaf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bbeb00(int *param_1);
template<class... A> int FUN_10bbeb00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbeb10(void);
template<class... A> int FUN_10bbeb10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbeb20(void);
template<class... A> int FUN_10bbeb20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbece0(int param_1);
template<class... A> int FUN_10bbece0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbecf0(undefined4 *param_1);
template<class... A> int FUN_10bbecf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbed00(undefined4 *param_1);
template<class... A> int FUN_10bbed00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbeee0(undefined4 *param_1);
template<class... A> int FUN_10bbeee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbef10(undefined4 *param_1);
template<class... A> int FUN_10bbef10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbef40(int *param_1);
template<class... A> int FUN_10bbef40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bbefc0(int *param_1);
template<class... A> int FUN_10bbefc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bbf0d0(undefined4 *param_1);
template<class... A> int FUN_10bbf0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbf170(undefined4 *param_1);
template<class... A> int FUN_10bbf170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbf190(undefined4 *param_1);
template<class... A> int FUN_10bbf190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bbf360(undefined4 *param_1);
template<class... A> int FUN_10bbf360(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bbf3f0(undefined4 *param_1);
template<class... A> int FUN_10bbf3f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbf8a0(void);
template<class... A> int FUN_10bbf8a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbf910(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bbf910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbfa60(undefined4 param_1);
template<class... A> int FUN_10bbfa60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbfb90(undefined4 param_1);
template<class... A> int FUN_10bbfb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10bbfba0(int param_1,SCStr *param_2);
template<class... A> int FUN_10bbfba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbfe70(undefined4 param_1);
template<class... A> int FUN_10bbfe70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bbfe80(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4);
template<class... A> int FUN_10bbfe80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bbfeb0(int *param_1,int *param_2);
template<class... A> int FUN_10bbfeb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbff20(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bbff20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbff40(undefined4 param_1);
template<class... A> int FUN_10bbff40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bbff80(undefined4 param_1);
template<class... A> int FUN_10bbff80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc0a70(int param_1);
template<class... A> int FUN_10bc0a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11b0(undefined4 param_1);
template<class... A> int FUN_10bc11b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11c0(undefined4 param_1);
template<class... A> int FUN_10bc11c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11d0(undefined4 param_1);
template<class... A> int FUN_10bc11d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11e0(undefined4 param_1);
template<class... A> int FUN_10bc11e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc11f0(undefined4 param_1);
template<class... A> int FUN_10bc11f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bc1500(int param_1);
template<class... A> int FUN_10bc1500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc1590(unsigned int recovered_unused_stack_0);
template<class... A> int __stdcall FUN_10bc1590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc15a0(int param_1);
template<class... A> int FUN_10bc15a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc19c0(int param_1,int param_2);
template<class... A> int FUN_10bc19c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc1a10(undefined4 *param_1);
template<class... A> int FUN_10bc1a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc1e30(void);
template<class... A> int FUN_10bc1e30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc1e40(void);
template<class... A> int FUN_10bc1e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3680(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bc3680(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bc3930(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bc3930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc3960(void);
template<class... A> int FUN_10bc3960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc3b40(undefined4 *param_1);
template<class... A> int FUN_10bc3b40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc3b50(undefined4 param_1);
template<class... A> int FUN_10bc3b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bc3b60(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bc3b60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc3bc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bc3bc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc3bd0(void);
template<class... A> int FUN_10bc3bd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc3c10(undefined4 param_1);
template<class... A> int FUN_10bc3c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc3c20(void);
template<class... A> int FUN_10bc3c20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc3c30(void);
template<class... A> int FUN_10bc3c30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3c40(undefined4 *param_1);
template<class... A> int FUN_10bc3c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3c70(undefined4 *param_1);
template<class... A> int FUN_10bc3c70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3cd0(undefined4 *param_1);
template<class... A> int FUN_10bc3cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3ce0(undefined4 *param_1);
template<class... A> int FUN_10bc3ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc3d00(undefined4 param_1);
template<class... A> int FUN_10bc3d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3d10(undefined4 *param_1);
template<class... A> int FUN_10bc3d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3db0(undefined4 *param_1);
template<class... A> int FUN_10bc3db0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc3dc0(undefined4 *param_1);
template<class... A> int FUN_10bc3dc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc3e40(undefined4 *param_1);
template<class... A> int FUN_10bc3e40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4080(undefined4 *param_1);
template<class... A> int FUN_10bc4080(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4220(undefined4 *param_1);
template<class... A> int FUN_10bc4220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4230(undefined4 *param_1);
template<class... A> int FUN_10bc4230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc4520(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bc4520(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4530(undefined4 param_1);
template<class... A> int FUN_10bc4530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4540(undefined4 param_1);
template<class... A> int FUN_10bc4540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4550(undefined4 param_1);
template<class... A> int FUN_10bc4550(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4560(undefined4 param_1);
template<class... A> int FUN_10bc4560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc4570(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bc4570(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bc45f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bc45f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc4620(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bc4620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc4650(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bc4650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bc46d0(uint param_1);
template<class... A> int FUN_10bc46d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bc4740(int *param_1);
template<class... A> int FUN_10bc4740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bc4750(int param_1,int param_2);
template<class... A> int FUN_10bc4750(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __stdcall FUN_10bc47a0(SCStr *param_1);
template<class... A> int __stdcall FUN_10bc47a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc4a00(void);
template<class... A> int FUN_10bc4a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc4a10(void);
template<class... A> int FUN_10bc4a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc4a20(int *param_1);
template<class... A> int FUN_10bc4a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __fastcall FUN_10bc4a30(int param_1);
template<class... A> int FUN_10bc4a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc4a40(void);
template<class... A> int FUN_10bc4a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc4a50(void);
template<class... A> int FUN_10bc4a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4b50(int param_1);
template<class... A> int FUN_10bc4b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4d10(undefined4 *param_1);
template<class... A> int FUN_10bc4d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc4d20(undefined4 *param_1);
template<class... A> int FUN_10bc4d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4f00(undefined4 *param_1);
template<class... A> int FUN_10bc4f00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4f30(undefined4 *param_1);
template<class... A> int FUN_10bc4f30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc4f60(int *param_1);
template<class... A> int FUN_10bc4f60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bc4fe0(int *param_1);
template<class... A> int FUN_10bc4fe0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10bc58e0(int param_1);
template<class... A> int FUN_10bc58e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc5960(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_10bc5960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool FUN_10bc5bb0(int param_1);
template<class... A> int FUN_10bc5bb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5be0(undefined4 param_1);
template<class... A> int FUN_10bc5be0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5c40(undefined4 param_1);
template<class... A> int FUN_10bc5c40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5c50(undefined4 param_1);
template<class... A> int FUN_10bc5c50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5c60(undefined4 param_1);
template<class... A> int FUN_10bc5c60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5c90(undefined4 param_1);
template<class... A> int FUN_10bc5c90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc5ca0(void);
template<class... A> int FUN_10bc5ca0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc5cb0(void);
template<class... A> int FUN_10bc5cb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc5cc0(void);
template<class... A> int FUN_10bc5cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc5d40(int param_1,undefined4 *param_2,undefined4 param_3);
template<class... A> int FUN_10bc5d40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc5da0(undefined4 param_1);
template<class... A> int FUN_10bc5da0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6060(undefined4 *param_1);
template<class... A> int FUN_10bc6060(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6090(undefined4 *param_1);
template<class... A> int FUN_10bc6090(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6140(undefined4 *param_1);
template<class... A> int FUN_10bc6140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6160(undefined4 *param_1);
template<class... A> int FUN_10bc6160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6180(undefined4 param_1);
template<class... A> int FUN_10bc6180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bc6190(int param_1);
template<class... A> int FUN_10bc6190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bc61a0(int param_1);
template<class... A> int FUN_10bc61a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc6530(undefined4 *param_1);
template<class... A> int FUN_10bc6530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6670(undefined4 *param_1);
template<class... A> int FUN_10bc6670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc68c0(int param_1);
template<class... A> int FUN_10bc68c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6950(undefined4 *param_1);
template<class... A> int FUN_10bc6950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6970(undefined4 *param_1);
template<class... A> int FUN_10bc6970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6b20(undefined4 *param_1);
template<class... A> int FUN_10bc6b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc6b50(int *param_1);
template<class... A> int FUN_10bc6b50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6cc0(undefined4 *param_1);
template<class... A> int FUN_10bc6cc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6cd0(undefined4 *param_1);
template<class... A> int FUN_10bc6cd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6ce0(undefined4 *param_1);
template<class... A> int FUN_10bc6ce0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc6cf0(int *param_1);
template<class... A> int FUN_10bc6cf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc6d00(int param_1);
template<class... A> int FUN_10bc6d00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc6d10(int param_1);
template<class... A> int FUN_10bc6d10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6d20(undefined4 *param_1);
template<class... A> int FUN_10bc6d20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc6d30(undefined4 *param_1);
template<class... A> int FUN_10bc6d30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc7490(int param_1);
template<class... A> int FUN_10bc7490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc74a0(int param_1);
template<class... A> int FUN_10bc74a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc74e0(int param_1);
template<class... A> int FUN_10bc74e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc74f0(int param_1);
template<class... A> int FUN_10bc74f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc7500(int param_1);
template<class... A> int FUN_10bc7500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc7510(int param_1);
template<class... A> int FUN_10bc7510(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc8650(void);
template<class... A> int FUN_10bc8650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc8660(void);
template<class... A> int FUN_10bc8660(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ char * FUN_10bc8670(void);
template<class... A> int FUN_10bc8670(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __fastcall FUN_10bc8c10(int *param_1);
template<class... A> int FUN_10bc8c10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc90b0(undefined4 *param_1);
template<class... A> int FUN_10bc90b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc90c0(undefined4 *param_1);
template<class... A> int FUN_10bc90c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc90d0(undefined4 *param_1);
template<class... A> int FUN_10bc90d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc90e0(undefined4 *param_1);
template<class... A> int FUN_10bc90e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc93b0(undefined4 *param_1);
template<class... A> int FUN_10bc93b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc93e0(undefined4 *param_1);
template<class... A> int FUN_10bc93e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc9410(undefined4 *param_1);
template<class... A> int FUN_10bc9410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bc9440(int *param_1);
template<class... A> int FUN_10bc9440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc97c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bc97c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bc9800(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bc9800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc9830(void);
template<class... A> int FUN_10bc9830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc9a10(undefined4 *param_1);
template<class... A> int FUN_10bc9a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc9a20(undefined4 param_1);
template<class... A> int FUN_10bc9a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bc9a30(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bc9a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc9a60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3);
template<class... A> int FUN_10bc9a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bc9a70(void);
template<class... A> int FUN_10bc9a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bc9ab0(undefined4 param_1);
template<class... A> int FUN_10bc9ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc9b00(undefined4 *param_1);
template<class... A> int FUN_10bc9b00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc9b20(undefined4 param_1);
template<class... A> int FUN_10bc9b20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bc9b30(undefined4 *param_1);
template<class... A> int FUN_10bc9b30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bc9fc0(undefined4 *param_1);
template<class... A> int FUN_10bc9fc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bca0c0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bca0c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bca0d0(undefined4 param_1);
template<class... A> int FUN_10bca0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bca0e0(undefined4 param_1);
template<class... A> int FUN_10bca0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bca0f0(undefined4 param_1);
template<class... A> int FUN_10bca0f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bca100(undefined4 param_1);
template<class... A> int FUN_10bca100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bca110(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int FUN_10bca110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bca190(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bca190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bca1c0(void *param_1, int param_2, void *param_3, unsigned int recovered_unused_stack_0);
template<class... A> int FUN_10bca1c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bca1f0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bca1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bca230(uint param_1);
template<class... A> int FUN_10bca230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bca2a0(void);
template<class... A> int FUN_10bca2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bca2b0(int *param_1);
template<class... A> int FUN_10bca2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __stdcall FUN_10bca2c0(int param_1,int param_2);
template<class... A> int FUN_10bca2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bcad80(int param_1);
template<class... A> int FUN_10bcad80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bcb0d0(void);
template<class... A> int FUN_10bcb0d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bcb0e0(void);
template<class... A> int FUN_10bcb0e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __fastcall FUN_10bcb400(int param_1);
template<class... A> int FUN_10bcb400(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __fastcall FUN_10bcb410(undefined4 *param_1);
template<class... A> int FUN_10bcb410(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __fastcall FUN_10bcb5b0(int *param_1);
template<class... A> int FUN_10bcb5b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb6e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb6e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb700(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb720(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb720(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb740(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb740(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb760(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb7a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb7a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb7c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb7c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb7e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb7e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb840(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1);
template<class... A> int __stdcall FUN_10bcb840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb9b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bcb9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb9d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bcb9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcb9f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bcb9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bcba10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bcba30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bcba50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bcba70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcba90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bcba90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcbab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3);
template<class... A> int FUN_10bcbab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcc1f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10bcc1f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcc4b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4);
template<class... A> int FUN_10bcc4b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __fastcall FUN_10bcc540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2);
template<class... A> int FUN_10bcc540(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccb60(void);
template<class... A> int FUN_10bccb60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccb70(void);
template<class... A> int FUN_10bccb70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccb80(void);
template<class... A> int FUN_10bccb80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccb90(void);
template<class... A> int FUN_10bccb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccba0(void);
template<class... A> int FUN_10bccba0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcce60(void);
template<class... A> int FUN_10bcce60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcce80(void);
template<class... A> int FUN_10bcce80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccea0(void);
template<class... A> int FUN_10bccea0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccec0(void);
template<class... A> int FUN_10bccec0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccee0(void);
template<class... A> int FUN_10bccee0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccf00(void);
template<class... A> int FUN_10bccf00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccf20(void);
template<class... A> int FUN_10bccf20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccf40(void);
template<class... A> int FUN_10bccf40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bccf60(void);
template<class... A> int FUN_10bccf60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bcd220(undefined4 param_1);
template<class... A> int FUN_10bcd220(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd230(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd240(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd250(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd260(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd260(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd270(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd270(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd280(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd290(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd290(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2a0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd2a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2b0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd2b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2c0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd2c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2d0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd2d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd2e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd2f0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd2f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd300(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd310(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd320(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd330(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd340(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bcd340(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bcd470(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bcd470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bcd4a0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bcd4a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bcd4d0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bcd4d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int FUN_10bcd500(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bcd500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd990(void);
template<class... A> int FUN_10bcd990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9a0(void);
template<class... A> int FUN_10bcd9a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9b0(void);
template<class... A> int FUN_10bcd9b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9c0(void);
template<class... A> int FUN_10bcd9c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9d0(void);
template<class... A> int FUN_10bcd9d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9e0(void);
template<class... A> int FUN_10bcd9e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcd9f0(void);
template<class... A> int FUN_10bcd9f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcda00(void);
template<class... A> int FUN_10bcda00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcda10(void);
template<class... A> int FUN_10bcda10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcda20(void);
template<class... A> int FUN_10bcda20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcda30(void);
template<class... A> int FUN_10bcda30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfb90(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10bcfb90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfbc0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10bcfbc0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfbf0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10bcfbf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfc20(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10bcfc20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfc50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfc50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfc70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfc70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfc90(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfc90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfcb0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfcb0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfcd0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfcd0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfcf0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfcf0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfd10(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfd10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfd30(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfd30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfd50(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfd50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcfd70(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcfd70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bcff10(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bcff10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd00b0(undefined4 param_1,undefined4 param_2);
template<class... A> int FUN_10bd00b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd00d0(undefined4 *param_1);
template<class... A> int FUN_10bd00d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd00e0(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd00e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd00f0(undefined4 param_1);
template<class... A> int FUN_10bd00f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0100(undefined4 *param_1);
template<class... A> int FUN_10bd0100(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0110(undefined4 *param_1);
template<class... A> int FUN_10bd0110(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0120(undefined4 *param_1);
template<class... A> int FUN_10bd0120(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0130(undefined4 *param_1);
template<class... A> int FUN_10bd0130(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0140(undefined4 *param_1);
template<class... A> int FUN_10bd0140(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0150(undefined4 *param_1);
template<class... A> int FUN_10bd0150(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0160(undefined4 *param_1);
template<class... A> int FUN_10bd0160(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0170(undefined4 param_1);
template<class... A> int FUN_10bd0170(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0180(undefined4 *param_1);
template<class... A> int FUN_10bd0180(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0190(undefined4 param_1);
template<class... A> int FUN_10bd0190(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0420(undefined4 param_1);
template<class... A> int FUN_10bd0420(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0430(undefined4 param_1);
template<class... A> int FUN_10bd0430(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0440(undefined4 param_1);
template<class... A> int FUN_10bd0440(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0450(undefined4 param_1);
template<class... A> int FUN_10bd0450(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0460(undefined4 param_1);
template<class... A> int FUN_10bd0460(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0470(undefined4 param_1);
template<class... A> int FUN_10bd0470(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0480(undefined4 param_1);
template<class... A> int FUN_10bd0480(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0490(undefined4 param_1);
template<class... A> int FUN_10bd0490(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10bd04a0(int param_1,uint *param_2);
template<class... A> int FUN_10bd04a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10bd04d0(int param_1,SCStr *param_2);
template<class... A> int FUN_10bd04d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 __stdcall FUN_10bd0500(int param_1,SCStr *param_2);
template<class... A> int FUN_10bd0500(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10bd0530(int param_1,uint *param_2);
template<class... A> int FUN_10bd0530(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10bd0560(int param_1,uint *param_2);
template<class... A> int FUN_10bd0560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10bd0590(int param_1,uint *param_2);
template<class... A> int FUN_10bd0590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10bd05c0(int param_1,uint *param_2);
template<class... A> int FUN_10bd05c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10bd05f0(int param_1,uint *param_2);
template<class... A> int FUN_10bd05f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ uint __stdcall FUN_10bd0620(int param_1,uint *param_2);
template<class... A> int FUN_10bd0620(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10bd0650(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10bd0650(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd06d0(void);
template<class... A> int FUN_10bd06d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd06e0(void);
template<class... A> int FUN_10bd06e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd0760(undefined4 param_1);
template<class... A> int FUN_10bd0760(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd0770(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd0770(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd0780(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd0780(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void FUN_10bd0790(undefined4 *param_1,undefined4 *param_2);
template<class... A> int FUN_10bd0790(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1230(undefined4 *param_1);
template<class... A> int FUN_10bd1230(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1240(undefined4 *param_1);
template<class... A> int FUN_10bd1240(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * __stdcall FUN_10bd1250(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bd1250(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __stdcall FUN_10bd1280(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10bd1280(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1300(undefined4 param_1);
template<class... A> int FUN_10bd1300(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1310(undefined4 param_1);
template<class... A> int FUN_10bd1310(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1320(undefined4 param_1);
template<class... A> int FUN_10bd1320(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1330(undefined4 param_1);
template<class... A> int FUN_10bd1330(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bd14b0(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bd14b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * FUN_10bd14e0(int *param_1,int *param_2,int *param_3);
template<class... A> int FUN_10bd14e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bd1560(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bd1560(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void * FUN_10bd1590(void *param_1,int param_2,void *param_3);
template<class... A> int FUN_10bd1590(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd17d0(undefined4 param_1);
template<class... A> int FUN_10bd17d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd17e0(undefined4 param_1);
template<class... A> int FUN_10bd17e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd17f0(undefined4 param_1);
template<class... A> int FUN_10bd17f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1800(undefined4 param_1);
template<class... A> int FUN_10bd1800(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1810(undefined4 param_1);
template<class... A> int FUN_10bd1810(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1820(undefined4 param_1);
template<class... A> int FUN_10bd1820(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1830(undefined4 param_1);
template<class... A> int FUN_10bd1830(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1840(undefined4 param_1);
template<class... A> int FUN_10bd1840(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1850(undefined4 param_1);
template<class... A> int FUN_10bd1850(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1860(undefined4 param_1);
template<class... A> int FUN_10bd1860(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1870(undefined4 param_1);
template<class... A> int FUN_10bd1870(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1880(undefined4 param_1);
template<class... A> int FUN_10bd1880(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1890(undefined4 param_1);
template<class... A> int FUN_10bd1890(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18a0(undefined4 param_1);
template<class... A> int FUN_10bd18a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18b0(undefined4 param_1);
template<class... A> int FUN_10bd18b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18c0(undefined4 param_1);
template<class... A> int FUN_10bd18c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18d0(undefined4 param_1);
template<class... A> int FUN_10bd18d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18e0(undefined4 param_1);
template<class... A> int FUN_10bd18e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd18f0(undefined4 param_1);
template<class... A> int FUN_10bd18f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1900(undefined4 param_1);
template<class... A> int FUN_10bd1900(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1910(undefined4 param_1);
template<class... A> int FUN_10bd1910(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1920(undefined4 param_1);
template<class... A> int FUN_10bd1920(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1930(undefined4 param_1);
template<class... A> int FUN_10bd1930(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1940(undefined4 param_1);
template<class... A> int FUN_10bd1940(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1950(undefined4 param_1);
template<class... A> int FUN_10bd1950(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1960(undefined4 param_1);
template<class... A> int FUN_10bd1960(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1970(undefined4 param_1);
template<class... A> int FUN_10bd1970(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1980(undefined4 param_1);
template<class... A> int FUN_10bd1980(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1990(undefined4 param_1);
template<class... A> int FUN_10bd1990(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19a0(undefined4 param_1);
template<class... A> int FUN_10bd19a0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19b0(undefined4 param_1);
template<class... A> int FUN_10bd19b0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19c0(undefined4 param_1);
template<class... A> int FUN_10bd19c0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19d0(undefined4 param_1);
template<class... A> int FUN_10bd19d0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19e0(undefined4 param_1);
template<class... A> int FUN_10bd19e0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd19f0(undefined4 param_1);
template<class... A> int FUN_10bd19f0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a00(undefined4 param_1);
template<class... A> int FUN_10bd1a00(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a10(undefined4 param_1);
template<class... A> int FUN_10bd1a10(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a20(undefined4 param_1);
template<class... A> int FUN_10bd1a20(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a30(undefined4 param_1);
template<class... A> int FUN_10bd1a30(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a40(undefined4 param_1);
template<class... A> int FUN_10bd1a40(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a50(undefined4 param_1);
template<class... A> int FUN_10bd1a50(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a60(undefined4 param_1);
template<class... A> int FUN_10bd1a60(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a70(undefined4 param_1);
template<class... A> int FUN_10bd1a70(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a80(undefined4 param_1);
template<class... A> int FUN_10bd1a80(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1a90(undefined4 param_1);
template<class... A> int FUN_10bd1a90(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1aa0(undefined4 param_1);
template<class... A> int FUN_10bd1aa0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1ab0(undefined4 param_1);
template<class... A> int FUN_10bd1ab0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1ac0(undefined4 param_1);
template<class... A> int FUN_10bd1ac0(A...);
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 FUN_10bd1ad0(undefined4 param_1);
template<class... A> int FUN_10bd1ad0(A...);
extern void __fastcall FUN_101ba0d0(void *param_1);

extern void __fastcall thunk_FUN_101ba0d0(void *param_1);

extern int ghidra_vftable_RControlAIOOpRef_RDeviceDeleteAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RDeviceGetAIOOp_;
extern int ghidra_vftable_RControlAIOOpRef_RDevicePutAIOOp_;

// Reference entry 10b80320; body size 16 bytes.
extern int __stdcall thunk_FUN_103beae0(int a1,int a2);
extern int __stdcall thunk_FUN_10475400(int a1);
extern int __stdcall thunk_FUN_10ba31f0(int a1,int a2);
extern int __stdcall thunk_FUN_10ba5d90(int a1);
extern int __stdcall thunk_FUN_10bcd530(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_10bcd670(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_1109f0a0(int a1,int a2,int a3);
extern int __stdcall thunk_FUN_111c05a0(int a1,int a2,int a3,int a4,int a5,int a6,int a7);
extern int __stdcall thunk_FUN_111c0760(int a1,int a2,int a3,int a4,int a5,int a6,int a7,int a8);
extern int __stdcall thunk_FUN_1124a200(int a1,int a2);
extern int __stdcall thunk_FUN_1125b880(int a1,int a2,int a3);
struct SCFp_72_0 { char _p[72]; int (__thiscall *v)(void); };
struct SCFp_76_0 { char _p[76]; int (__thiscall *v)(void); };
struct SCVtbl_0_0 { virtual int v(void); };
struct SCVtbl_0_1 { virtual int v(int a1); };
struct SCVtbl_1_2 { virtual void _p0(); virtual int v(int a1,int a2); };
struct SCVtbl_2_1 { virtual void _p0(); virtual void _p1(); virtual int v(int a1); };
struct SCVtbl_2_2 { virtual void _p0(); virtual void _p1(); virtual int v(int a1,int a2); };
struct SCVtbl_5_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual int v(int a1); };
struct SCVtbl_20_4 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual int v(int a1,int a2,int a3,int a4); };
struct SCVtbl_1_0 { virtual void _p0(); virtual int v(void); };
struct SCVtbl_1_1 { virtual void _p0(); virtual int v(int a1); };
struct SCVtbl_2_0 { virtual void _p0(); virtual void _p1(); virtual int v(void); };
struct SCVtbl_3_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual int v(void); };
struct SCVtbl_4_1 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual int v(int a1); };
struct SCVtbl_21_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual int v(void); };
struct SCVtbl_23_0 { virtual void _p0(); virtual void _p1(); virtual void _p2(); virtual void _p3(); virtual void _p4(); virtual void _p5(); virtual void _p6(); virtual void _p7(); virtual void _p8(); virtual void _p9(); virtual void _p10(); virtual void _p11(); virtual void _p12(); virtual void _p13(); virtual void _p14(); virtual void _p15(); virtual void _p16(); virtual void _p17(); virtual void _p18(); virtual void _p19(); virtual void _p20(); virtual void _p21(); virtual void _p22(); virtual int v(void); };
int FUN_100186fb();
int FUN_1006a64f();
int FUN_10044c88();
int FUN_10018b38();
int FUN_1006fe74(void);
int FUN_1005c743(void);
int FUN_1006fe74(...);
int FUN_1006fe74(...);
int FUN_1005c743(...);
template<class... A> int FUN_1005c743(A...);
template<class... A> int FUN_1006fe74(A...);
#line 1 "ENTRY_10b80320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b80320(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b80340; body size 16 bytes.
#line 1 "ENTRY_10b80340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b80340(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b80360; body size 16 bytes.
#line 1 "ENTRY_10b80360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b80360(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b80380; body size 16 bytes.
#line 1 "ENTRY_10b80380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b80380(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b803a0; body size 9 bytes.
#line 1 "ENTRY_10b803a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b803a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b803b0; body size 9 bytes.
#line 1 "ENTRY_10b803b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b803b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b803c0; body size 9 bytes.
#line 1 "ENTRY_10b803c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b803c0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b80440; body size 8 bytes.
#line 1 "ENTRY_10b80440"

__declspec(naked) void FUN_10b80440(void)

{
  __asm add ecx, 8
  __asm jmp LAB_1006da57
}





// Reference entry 10b818e0; body size 7 bytes.
#line 1 "ENTRY_10b818e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b818e0(int param_1)

{
  return (int)(param_1 + 0xd7d0);
}


// Reference entry 10b81d50; body size 4 bytes.
#line 1 "ENTRY_10b81d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b81d50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10b81d60; body size 8 bytes.
#line 1 "ENTRY_10b81d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b81d60(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10b81d70; body size 8 bytes.
#line 1 "ENTRY_10b81d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b81d70(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10b81d80; body size 8 bytes.
#line 1 "ENTRY_10b81d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b81d80(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10b825f0; body size 57 bytes.
#line 1 "ENTRY_10b825f0"

__declspec(naked) undefined4 FUN_10b825f0(void)

{
  __asm push esi
  __asm call LAB_1000e23c
  __asm lea ecx, [eax + 0x1c]
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax]
  __asm mov esi, eax
  __asm test esi, esi
  __asm je 0x10b82625
  __asm mov ecx, esi
  __asm call LAB_100632a0
  __asm test al, al
  __asm je 0x10b82625
  __asm mov ecx, esi
  __asm call LAB_1007e870
  __asm test eax, eax
  __asm je 0x10b82625
  __asm mov ecx, esi
  __asm call LAB_1007e870
  __asm pop esi
  __asm mov eax, dword ptr [eax + 0x2c]
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm ret
}



// Reference entry 10b82640; body size 6 bytes.
#line 1 "ENTRY_10b82640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b82640(void)

{
  return (char *)("SCIBrowseService");
}


// Reference entry 10b82650; body size 6 bytes.
#line 1 "ENTRY_10b82650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b82650(void)

{
  return (char *)("SCIOpReplaceAccount");
}


// Reference entry 10b82660; body size 6 bytes.
#line 1 "ENTRY_10b82660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b82660(void)

{
  return (char *)("SCIScrobblingService");
}


// Reference entry 10b82670; body size 6 bytes.
#line 1 "ENTRY_10b82670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b82670(void)

{
  return (char *)("SCISimpleMessagingService");
}


// Reference entry 10b829d0; body size 7 bytes.
#line 1 "ENTRY_10b829d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b829d0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10b829e0; body size 7 bytes.
#line 1 "ENTRY_10b829e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b829e0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10b829f0; body size 7 bytes.
#line 1 "ENTRY_10b829f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b829f0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10b82a00; body size 7 bytes.
#line 1 "ENTRY_10b82a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b82a00(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10b82a10; body size 7 bytes.
#line 1 "ENTRY_10b82a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b82a10(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10b82a80; body size 61 bytes.
#line 1 "ENTRY_10b82a80"

__declspec(naked) void FUN_10b82a80(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push esi
  __asm test ecx, ecx
  __asm je 0x10b82ab9
  __asm call LAB_1009a700
  __asm mov esi, eax
  __asm test esi, esi
  __asm je 0x10b82ab9
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 0x54]
  __asm cmp eax, 1
  __asm jne 0x10b82ab9
  __asm mov eax, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [eax + 0x5c]
  __asm mov eax, dword ptr [eax + 4]
  __asm and eax, 0x7f
  __asm dec eax
  __asm and eax, 0xfffffffe
  __asm cmp eax, 0xa
  __asm jne 0x10b82ab9
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10b82ae0; body size 17 bytes.
#line 1 "ENTRY_10b82ae0"

__declspec(naked) void FUN_10b82ae0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm and eax, 0xffffff00
  __asm cmp eax, 0x12f00
  __asm sete al
  __asm ret
}



// Reference entry 10b82b00; body size 53 bytes.
#line 1 "ENTRY_10b82b00"

__declspec(naked) uint FUN_10b82b00(void)

{
  __asm mov ecx, dword ptr [ecx + 8]
  __asm push esi
  __asm call LAB_1009a700
  __asm mov esi, eax
  __asm mov ecx, esi
  __asm mov edx, dword ptr [esi]
  __asm call dword ptr [edx + 0x54]
  __asm cmp eax, 1
  __asm jne 0x10b82b31
  __asm mov edx, dword ptr [esi]
  __asm mov ecx, esi
  __asm call dword ptr [edx + 0x5c]
  __asm mov eax, dword ptr [eax + 4]
  __asm and eax, 0xffffff00
  __asm cmp eax, 0x12f00
  __asm jne 0x10b82b31
  __asm mov al, 1
  __asm pop esi
  __asm ret
  __asm xor al, al
  __asm pop esi
  __asm ret
}



// Reference entry 10b82b90; body size 26 bytes.
#line 1 "ENTRY_10b82b90"

__declspec(naked) void FUN_10b82b90(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm test ecx, ecx
  __asm je 0x10b82ba7
  __asm mov eax, ecx
  __asm and al, 0x81
  __asm cmp al, 0x80
  __asm je 0x10b82ba7
  __asm test cl, 1
  __asm jne 0x10b82ba7
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10b82e30; body size 3 bytes.
#line 1 "ENTRY_10b82e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b82e30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b82e40; body size 3 bytes.
#line 1 "ENTRY_10b82e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b82e40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b82e50; body size 3 bytes.
#line 1 "ENTRY_10b82e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b82e50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b82e60; body size 3 bytes.
#line 1 "ENTRY_10b82e60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b82e60(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b84170; body size 28 bytes.
#line 1 "ENTRY_10b84170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84170(undefined4 *param_1)

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


// Reference entry 10b841a0; body size 28 bytes.
#line 1 "ENTRY_10b841a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b841a0(undefined4 *param_1)

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


// Reference entry 10b841d0; body size 28 bytes.
#line 1 "ENTRY_10b841d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b841d0(undefined4 *param_1)

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


// Reference entry 10b84200; body size 28 bytes.
#line 1 "ENTRY_10b84200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84200(undefined4 *param_1)

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


// Reference entry 10b84230; body size 28 bytes.
#line 1 "ENTRY_10b84230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84230(undefined4 *param_1)

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


// Reference entry 10b84260; body size 28 bytes.
#line 1 "ENTRY_10b84260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84260(undefined4 *param_1)

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


// Reference entry 10b84290; body size 28 bytes.
#line 1 "ENTRY_10b84290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b84290(undefined4 *param_1)

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


// Reference entry 10b842c0; body size 28 bytes.
#line 1 "ENTRY_10b842c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b842c0(undefined4 *param_1)

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


// Reference entry 10b842f0; body size 20 bytes.
#line 1 "ENTRY_10b842f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b842f0(int *param_1)

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


// Reference entry 10b84950; body size 6 bytes.
#line 1 "ENTRY_10b84950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b84950(void)

{
  return (char *)("SCIOpDeviceDelete");
}


// Reference entry 10b84960; body size 6 bytes.
#line 1 "ENTRY_10b84960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b84960(void)

{
  return (char *)("SCIOpDeviceGet");
}


// Reference entry 10b84970; body size 6 bytes.
#line 1 "ENTRY_10b84970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b84970(void)

{
  return (char *)("SCIOpDevicePut");
}


// Reference entry 10b84c00; body size 18 bytes.
#line 1 "ENTRY_10b84c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b84c00(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  return (undefined4 *)(param_1);
}


// Reference entry 10b84c20; body size 18 bytes.
#line 1 "ENTRY_10b84c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b84c20(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  return (undefined4 *)(param_1);
}


// Reference entry 10b84c40; body size 18 bytes.
#line 1 "ENTRY_10b84c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b84c40(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  return (undefined4 *)(param_1);
}


// Reference entry 10b84c60; body size 18 bytes.
#line 1 "ENTRY_10b84c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b84c60(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  param_1[1] = (undefined4)(param_2);
  *param_1 = (undefined4)((uint)&ghidra_vftable_RDeviceOpRequest);
  return (undefined4 *)(param_1);
}


// Reference entry 10b84c80; body size 27 bytes.
#line 1 "ENTRY_10b84c80"

__declspec(naked) void FUN_10b84c80(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1190eacc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10b84cb0; body size 27 bytes.
#line 1 "ENTRY_10b84cb0"

__declspec(naked) void FUN_10b84cb0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1190e778
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10b84ce0; body size 27 bytes.
#line 1 "ENTRY_10b84ce0"

__declspec(naked) void FUN_10b84ce0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1190e894
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10b84d10; body size 27 bytes.
#line 1 "ENTRY_10b84d10"

__declspec(naked) void FUN_10b84d10(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1190e9b0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10b85400; body size 136 bytes.
#line 1 "ENTRY_10b85400"

__declspec(naked) void FUN_10b85400(void)

{
  __asm push ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x18]
  __asm add ebp, dword ptr [esp + 0x20]
  __asm push esi
  __asm push edi
  __asm mov edi, ecx
  __asm mov esi, 0xf
  __asm mov ebx, edi
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm cmp ebp, esi
  __asm jbe 0x10b85452
  __asm mov esi, ebp
  __asm or esi, 0xf
  __asm cmp esi, 0x7fffffff
  __asm jbe 0x10b8543b
  __asm mov esi, 0x7fffffff
  __asm jmp 0x10b85445
  __asm mov eax, 0x16
  __asm cmp esi, eax
  __asm cmovb esi, eax
  __asm lea eax, [esi + 1]
  __asm push eax
  __asm call LAB_1000b73a
  __asm mov ebx, eax
  __asm mov dword ptr [edi], ebx
  __asm mov dword ptr [edi + 0x14], esi
  __asm mov esi, dword ptr [esp + 0x20]
  __asm push esi
  __asm push dword ptr [esp + 0x20]
  __asm mov dword ptr [edi + 0x10], ebp
  __asm push ebx
  __asm call LAB_1148cded
  __asm push dword ptr [esp + 0x34]
  __asm lea eax, [ebx + esi]
  __asm push dword ptr [esp + 0x34]
  __asm push eax
  __asm call LAB_1148cded
  __asm add esp, 0x18
  __asm mov byte ptr [ebx + ebp], 0
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret 0x18
}



// Reference entry 10b85f90; body size 129 bytes.
#line 1 "ENTRY_10b85f90"

__declspec(naked) void FUN_10b85f90(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov word ptr [ecx + 0x10], 1
  __asm mov byte ptr [ecx + 0x12], 0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1190ebe8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x28 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x34 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x40 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10b86c80; body size 34 bytes.
#line 1 "ENTRY_10b86c80"

__declspec(naked) void FUN_10b86c80(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x10]
  __asm mov dword ptr [esp + 0xc], esi
  __asm call LAB_1005f6c8
  __asm mov dword ptr [esi], LAB_1190e3e4
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10b86cb0; body size 61 bytes.
#line 1 "ENTRY_10b86cb0"

__declspec(naked) void FUN_10b86cb0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x24]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x24]
  __asm mov dword ptr [esp + 0xc], esi
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm call LAB_10071f8a
  __asm mov dword ptr [esi], LAB_1190e484
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x60], LAB_1190e4cc
  __asm pop esi
  __asm pop ecx
  __asm ret 0x1c
}



// Reference entry 10b86d00; body size 61 bytes.
#line 1 "ENTRY_10b86d00"

__declspec(naked) void FUN_10b86d00(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0x24]
  __asm mov esi, ecx
  __asm push dword ptr [esp + 0x24]
  __asm mov dword ptr [esp + 0xc], esi
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm push dword ptr [esp + 0x24]
  __asm call LAB_10071f8a
  __asm mov dword ptr [esi], LAB_1190e400
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x60], LAB_1190e448
  __asm pop esi
  __asm pop ecx
  __asm ret 0x1c
}



// Reference entry 10b86d50; body size 9 bytes.
#line 1 "ENTRY_10b86d50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b86d50(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDeviceDelete);
  return (undefined4 *)(param_1);
}


// Reference entry 10b86d60; body size 9 bytes.
#line 1 "ENTRY_10b86d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b86d60(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDeviceGet);
  return (undefined4 *)(param_1);
}


// Reference entry 10b86d70; body size 9 bytes.
#line 1 "ENTRY_10b86d70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b86d70(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePost);
  return (undefined4 *)(param_1);
}


// Reference entry 10b86d80; body size 9 bytes.
#line 1 "ENTRY_10b86d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b86d80(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIOpDevicePut);
  return (undefined4 *)(param_1);
}


// Reference entry 10b879c0; body size 11 bytes.
#line 1 "ENTRY_10b879c0"

/* WARNING: Removing unreachable block (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b879c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RDeviceDeleteAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10b879d0; body size 11 bytes.
#line 1 "ENTRY_10b879d0"

/* WARNING: Removing unreachable block_10b879d0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b879d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RDeviceGetAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10b879f0; body size 11 bytes.
#line 1 "ENTRY_10b879f0"

/* WARNING: Removing unreachable block_10b879f0 (ram,0x101ba14a) */
/* WARNING: Removing unreachable block (ram,0x101ba15a) */
/* WARNING: Removing unreachable block (ram,0x101ba15e) */
/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b879f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_RControlAIOOpRef_RDevicePutAIOOp_);

  thunk_FUN_101ba0d0(param_1);

}


// Reference entry 10b88730; body size 18 bytes.
#line 1 "ENTRY_10b88730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88730(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RHttpDeleteNoRedirectAIOOp);
  FUN_1006fe74<>();
  return;
}


// Reference entry 10b88750; body size 18 bytes.
#line 1 "ENTRY_10b88750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88750(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RHttpPutNoRedirectAIOOp);
  FUN_1006fe74<>();
  return;
}


// Reference entry 10b88770; body size 7 bytes.
#line 1 "ENTRY_10b88770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88770(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b88780; body size 7 bytes.
#line 1 "ENTRY_10b88780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88780(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b88790; body size 7 bytes.
#line 1 "ENTRY_10b88790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b88790(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b887a0; body size 7 bytes.
#line 1 "ENTRY_10b887a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b887a0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b887b0; body size 18 bytes.
#line 1 "ENTRY_10b887b0"

__declspec(naked) void FUN_10b887b0(void)

{
  __asm mov dword ptr [ecx], LAB_1190eb84
  __asm mov dword ptr [ecx + 8], LAB_1190ebd8
  __asm jmp LAB_10007c2f
}



// Reference entry 10b887d0; body size 18 bytes.
#line 1 "ENTRY_10b887d0"

__declspec(naked) void FUN_10b887d0(void)

{
  __asm mov dword ptr [ecx], LAB_1190e830
  __asm mov dword ptr [ecx + 8], LAB_1190e884
  __asm jmp LAB_1001d01b
}



// Reference entry 10b88810; body size 18 bytes.
#line 1 "ENTRY_10b88810"

__declspec(naked) void FUN_10b88810(void)

{
  __asm mov dword ptr [ecx], LAB_1190ea68
  __asm mov dword ptr [ecx + 8], LAB_1190eabc
  __asm jmp LAB_10061e4b
}



// Reference entry 10b88830; body size 13 bytes.
#line 1 "ENTRY_10b88830"

__declspec(naked) void FUN_10b88830(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm lea ecx, [eax - 8]
  __asm neg eax
  __asm sbb eax, eax
  __asm and eax, ecx
  __asm ret
}



// Reference entry 10b88840; body size 13 bytes.
#line 1 "ENTRY_10b88840"

__declspec(naked) void FUN_10b88840(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm lea ecx, [eax - 8]
  __asm neg eax
  __asm sbb eax, eax
  __asm and eax, ecx
  __asm ret
}



// Reference entry 10b88850; body size 13 bytes.
#line 1 "ENTRY_10b88850"

__declspec(naked) void FUN_10b88850(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm lea ecx, [eax - 8]
  __asm neg eax
  __asm sbb eax, eax
  __asm and eax, ecx
  __asm ret
}



// Reference entry 10b88860; body size 13 bytes.
#line 1 "ENTRY_10b88860"

__declspec(naked) void FUN_10b88860(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm lea ecx, [eax - 8]
  __asm neg eax
  __asm sbb eax, eax
  __asm and eax, ecx
  __asm ret
}



// Reference entry 10b8b420; body size 28 bytes.
#line 1 "ENTRY_10b8b420"

__declspec(naked) void FUN_10b8b420(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6250]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10b8b436
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10b8b450; body size 20 bytes.
#line 1 "ENTRY_10b8b450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b8b450(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x30));
  return (SCStr *)(param_2);
}


// Reference entry 10b8b470; body size 20 bytes.
#line 1 "ENTRY_10b8b470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b8b470(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x34));
  return (SCStr *)(param_2);
}


// Reference entry 10b8b490; body size 25 bytes.
#line 1 "ENTRY_10b8b490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b8b490(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 4) + 0x6244));
  return (SCStr *)(param_2);
}


// Reference entry 10b8b4b0; body size 25 bytes.
#line 1 "ENTRY_10b8b4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b8b4b0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 4) + 0x6144));
  return (SCStr *)(param_2);
}


// Reference entry 10b8b4d0; body size 20 bytes.
#line 1 "ENTRY_10b8b4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b8b4d0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x38));
  return (SCStr *)(param_2);
}


// Reference entry 10b8b510; body size 25 bytes.
#line 1 "ENTRY_10b8b510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b8b510(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(*(int *)(param_1 + 4) + 0x6244));
  return (SCStr *)(param_2);
}


// Reference entry 10b8b5f0; body size 28 bytes.
#line 1 "ENTRY_10b8b5f0"

__declspec(naked) void FUN_10b8b5f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6250]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10b8b606
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10b8b620; body size 25 bytes.
#line 1 "ENTRY_10b8b620"

__declspec(naked) void FUN_10b8b620(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm push dword ptr [esp + 4]
  __asm add ecx, 0x620c
  __asm call LAB_1003084b
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10b8b640; body size 25 bytes.
#line 1 "ENTRY_10b8b640"

__declspec(naked) void FUN_10b8b640(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm push dword ptr [esp + 4]
  __asm add ecx, 0x610c
  __asm call LAB_1003084b
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10b8b770; body size 25 bytes.
#line 1 "ENTRY_10b8b770"

__declspec(naked) void FUN_10b8b770(void)

{
  __asm mov ecx, dword ptr [ecx + 4]
  __asm push dword ptr [esp + 4]
  __asm add ecx, 0x620c
  __asm call LAB_1003084b
  __asm mov eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10b8b890; body size 28 bytes.
#line 1 "ENTRY_10b8b890"

__declspec(naked) void FUN_10b8b890(void)

{
  __asm mov ecx, dword ptr [ecx + 0x6250]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], ecx
  __asm test ecx, ecx
  __asm je 0x10b8b8a6
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10b8b8d0; body size 7 bytes.
#line 1 "ENTRY_10b8b8d0"

__declspec(naked) void FUN_10b8b8d0(void)

{
  __asm mov al, byte ptr [ecx + 0x4498]
  __asm ret
}



// Reference entry 10b8b8e0; body size 7 bytes.
#line 1 "ENTRY_10b8b8e0"

__declspec(naked) void FUN_10b8b8e0(void)

{
  __asm mov al, byte ptr [ecx + 0x449c]
  __asm ret
}



// Reference entry 10b8b8f0; body size 7 bytes.
#line 1 "ENTRY_10b8b8f0"

__declspec(naked) void FUN_10b8b8f0(void)

{
  __asm mov al, byte ptr [ecx + 0x4498]
  __asm ret
}



// Reference entry 10b8b900; body size 7 bytes.
#line 1 "ENTRY_10b8b900"

__declspec(naked) void FUN_10b8b900(void)

{
  __asm mov al, byte ptr [ecx + 0x4498]
  __asm ret
}



// Reference entry 10b8ba50; body size 7 bytes.
#line 1 "ENTRY_10b8ba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8ba50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x2478));
}


// Reference entry 10b8ba60; body size 20 bytes.
#line 1 "ENTRY_10b8ba60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10b8ba60(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0x2c));
  return (SCStr *)(param_2);
}


// Reference entry 10b8ce00; body size 6 bytes.
#line 1 "ENTRY_10b8ce00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b8ce00(void)

{
  return (char *)("SCIOpDeviceDelete");
}


// Reference entry 10b8ce10; body size 6 bytes.
#line 1 "ENTRY_10b8ce10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b8ce10(void)

{
  return (char *)("SCIOpDeviceGet");
}


// Reference entry 10b8ce20; body size 6 bytes.
#line 1 "ENTRY_10b8ce20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b8ce20(void)

{
  return (char *)("SCIOpDevicePut");
}


// Reference entry 10b8dab0; body size 28 bytes.
#line 1 "ENTRY_10b8dab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8dab0(undefined4 *param_1)

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


// Reference entry 10b8dae0; body size 28 bytes.
#line 1 "ENTRY_10b8dae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8dae0(undefined4 *param_1)

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


// Reference entry 10b8db10; body size 28 bytes.
#line 1 "ENTRY_10b8db10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8db10(undefined4 *param_1)

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


// Reference entry 10b8db40; body size 28 bytes.
#line 1 "ENTRY_10b8db40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8db40(undefined4 *param_1)

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


// Reference entry 10b8e1d0; body size 25 bytes.
#line 1 "ENTRY_10b8e1d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8e1d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8e1f0; body size 33 bytes.
#line 1 "ENTRY_10b8e1f0"

__declspec(naked) void FUN_10b8e1f0(void)

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



// Reference entry 10b8e220; body size 3 bytes.
#line 1 "ENTRY_10b8e220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8e220(void)

{
  return;
}


// Reference entry 10b8e230; body size 18 bytes.
#line 1 "ENTRY_10b8e230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b8e230(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10b8e400; body size 7 bytes.
#line 1 "ENTRY_10b8e400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8e400(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b8e410; body size 5 bytes.
#line 1 "ENTRY_10b8e410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8e410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8e420; body size 36 bytes.
#line 1 "ENTRY_10b8e420"

__declspec(naked) void FUN_10b8e420(void)

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



// Reference entry 10b8e450; body size 5 bytes.
#line 1 "ENTRY_10b8e450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8e450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8e460; body size 13 bytes.
#line 1 "ENTRY_10b8e460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8e460(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10b8e470; body size 36 bytes.
#line 1 "ENTRY_10b8e470"

__declspec(naked) void FUN_10b8e470(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10b8e487
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_1001e6fa
  __asm ret 4
}



// Reference entry 10b8e4a0; body size 5 bytes.
#line 1 "ENTRY_10b8e4a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8e4a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8e4b0; body size 11 bytes.
#line 1 "ENTRY_10b8e4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8e4b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8e4c0; body size 11 bytes.
#line 1 "ENTRY_10b8e4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8e4c0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8e4d0; body size 23 bytes.
#line 1 "ENTRY_10b8e4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8e4d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8e4f0; body size 3 bytes.
#line 1 "ENTRY_10b8e4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e4f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8e500; body size 23 bytes.
#line 1 "ENTRY_10b8e500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8e500(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8e630; body size 14 bytes.
#line 1 "ENTRY_10b8e630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b8e630(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b8e650; body size 14 bytes.
#line 1 "ENTRY_10b8e650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b8e650(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b8e670; body size 3 bytes.
#line 1 "ENTRY_10b8e670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e670(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b8e680; body size 3 bytes.
#line 1 "ENTRY_10b8e680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e680(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b8e690; body size 6 bytes.
#line 1 "ENTRY_10b8e690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b8e690(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10b8e6a0; body size 6 bytes.
#line 1 "ENTRY_10b8e6a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b8e6a0(int *param_1)

{
  *param_1 = (int)(*param_1 + 4);
  return (int *)(param_1);
}


// Reference entry 10b8e740; body size 49 bytes.
#line 1 "ENTRY_10b8e740"

__declspec(naked) void FUN_10b8e740(void)

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
  __asm jbe 0x10b8e761
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10b8e7f0; body size 3 bytes.
#line 1 "ENTRY_10b8e7f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b8e7f0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10b8e800; body size 3 bytes.
#line 1 "ENTRY_10b8e800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b8e800(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10b8e810; body size 3 bytes.
#line 1 "ENTRY_10b8e810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8e820; body size 3 bytes.
#line 1 "ENTRY_10b8e820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8e830; body size 3 bytes.
#line 1 "ENTRY_10b8e830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8e840; body size 3 bytes.
#line 1 "ENTRY_10b8e840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8e840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8e850; body size 3 bytes.
#line 1 "ENTRY_10b8e850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b8e850(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10b8e8d0; body size 38 bytes.
#line 1 "ENTRY_10b8e8d0"

__declspec(naked) void FUN_10b8e8d0(void)

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



// Reference entry 10b8e900; body size 27 bytes.
#line 1 "ENTRY_10b8e900"

__declspec(naked) void FUN_10b8e900(void)

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



// Reference entry 10b8e930; body size 27 bytes.
#line 1 "ENTRY_10b8e930"

__declspec(naked) void FUN_10b8e930(void)

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



// Reference entry 10b8e9a0; body size 87 bytes.
#line 1 "ENTRY_10b8e9a0"

__declspec(naked) void FUN_10b8e9a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10b8e9f2
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10b8e9dd
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10b8e9f2
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10b8e9d7
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10b8e9ed
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10b8ea10; body size 11 bytes.
#line 1 "ENTRY_10b8ea10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b8ea10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b8ea20; body size 9 bytes.
#line 1 "ENTRY_10b8ea20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b8ea20(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10b8ea30; body size 7 bytes.
#line 1 "ENTRY_10b8ea30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b8ea30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return;
}


// Reference entry 10b8ea40; body size 61 bytes.
#line 1 "ENTRY_10b8ea40"

__declspec(naked) void FUN_10b8ea40(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10b8ea69
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b8ea76
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10b8eac0; body size 12 bytes.
#line 1 "ENTRY_10b8eac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b8eac0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b8ead0; body size 6 bytes.
#line 1 "ENTRY_10b8ead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8ead0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b8eae0; body size 6 bytes.
#line 1 "ENTRY_10b8eae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8eae0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b8eaf0; body size 36 bytes.
#line 1 "ENTRY_10b8eaf0"

__declspec(naked) void FUN_10b8eaf0(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10b8eb07
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_1001e6fa
  __asm ret 4
}



// Reference entry 10b8eb20; body size 61 bytes.
#line 1 "ENTRY_10b8eb20"

__declspec(naked) void FUN_10b8eb20(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm je 0x10b8eb48
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm jge 0x10b8eb48
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



// Reference entry 10b8eb70; body size 22 bytes.
#line 1 "ENTRY_10b8eb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8eb70(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8ec50; body size 18 bytes.
#line 1 "ENTRY_10b8ec50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8ec50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8ec70; body size 25 bytes.
#line 1 "ENTRY_10b8ec70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8ec70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8ec90; body size 25 bytes.
#line 1 "ENTRY_10b8ec90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8ec90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8ecb0; body size 22 bytes.
#line 1 "ENTRY_10b8ecb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8ecb0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8ecd0; body size 5 bytes.
#line 1 "ENTRY_10b8ecd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8ecd0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8ece0; body size 5 bytes.
#line 1 "ENTRY_10b8ece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8ece0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8ecf0; body size 63 bytes.
#line 1 "ENTRY_10b8ecf0"

__declspec(naked) void FUN_10b8ecf0(void)

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
  __asm je 0x10b8ed1a
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm jge 0x10b8ed1a
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



// Reference entry 10b8ed40; body size 26 bytes.
#line 1 "ENTRY_10b8ed40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b8ed40(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b8ed60; body size 26 bytes.
#line 1 "ENTRY_10b8ed60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b8ed60(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b8ed80; body size 78 bytes.
#line 1 "ENTRY_10b8ed80"

__declspec(naked) void FUN_10b8ed80(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10b8eda9
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10b8edc0
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



// Reference entry 10b8edf0; body size 78 bytes.
#line 1 "ENTRY_10b8edf0"

__declspec(naked) void FUN_10b8edf0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10b8ee19
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10b8ee30
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



// Reference entry 10b8ee60; body size 78 bytes.
#line 1 "ENTRY_10b8ee60"

__declspec(naked) void FUN_10b8ee60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10b8ee89
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10b8eea0
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



// Reference entry 10b8eed0; body size 78 bytes.
#line 1 "ENTRY_10b8eed0"

__declspec(naked) void FUN_10b8eed0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10b8eef9
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10b8ef10
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



// Reference entry 10b8ef40; body size 12 bytes.
#line 1 "ENTRY_10b8ef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10b8ef40(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10b8ef50; body size 3 bytes.
#line 1 "ENTRY_10b8ef50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef50(void)

{
  return;
}


// Reference entry 10b8ef60; body size 13 bytes.
#line 1 "ENTRY_10b8ef60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef60(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b8ef70; body size 13 bytes.
#line 1 "ENTRY_10b8ef70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef70(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b8ef80; body size 13 bytes.
#line 1 "ENTRY_10b8ef80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef80(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b8ef90; body size 3 bytes.
#line 1 "ENTRY_10b8ef90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8ef90(void)

{
  return;
}


// Reference entry 10b8efa0; body size 3 bytes.
#line 1 "ENTRY_10b8efa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8efa0(void)

{
  return;
}


// Reference entry 10b8efb0; body size 18 bytes.
#line 1 "ENTRY_10b8efb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b8efb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10b8f0a0; body size 51 bytes.
#line 1 "ENTRY_10b8f0a0"

__declspec(naked) void FUN_10b8f0a0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [esi + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [esi]
  __asm test esi, esi
  __asm je 0x10b8f0d1
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm lea ecx, [esi + 8]
  __asm call LAB_10059c69
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov esi, edi
  __asm test edi, edi
  __asm jne 0x10b8f0b5
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10b8f0e0; body size 15 bytes.
#line 1 "ENTRY_10b8f0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8f0e0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b8f100; body size 26 bytes.
#line 1 "ENTRY_10b8f100"

__declspec(naked) void FUN_10b8f100(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea ecx, [esi + 8]
  __asm call LAB_10059c69
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 10b8f120; body size 7 bytes.
#line 1 "ENTRY_10b8f120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b8f130; body size 5 bytes.
#line 1 "ENTRY_10b8f130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f3d0; body size 5 bytes.
#line 1 "ENTRY_10b8f3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f3d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f3e0; body size 5 bytes.
#line 1 "ENTRY_10b8f3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f3e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f3f0; body size 5 bytes.
#line 1 "ENTRY_10b8f3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f3f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f400; body size 5 bytes.
#line 1 "ENTRY_10b8f400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f400(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f410; body size 5 bytes.
#line 1 "ENTRY_10b8f410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f410(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f420; body size 55 bytes.
#line 1 "ENTRY_10b8f420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b8f420(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

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


// Reference entry 10b8f470; body size 9 bytes.
#line 1 "ENTRY_10b8f470"

__declspec(naked) void FUN_10b8f470(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm jmp LAB_10059c69
}



// Reference entry 10b8f480; body size 15 bytes.
#line 1 "ENTRY_10b8f480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f480(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10b8f520; body size 5 bytes.
#line 1 "ENTRY_10b8f520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f520(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f530; body size 5 bytes.
#line 1 "ENTRY_10b8f530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f540; body size 5 bytes.
#line 1 "ENTRY_10b8f540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f550; body size 5 bytes.
#line 1 "ENTRY_10b8f550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f560; body size 5 bytes.
#line 1 "ENTRY_10b8f560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b8f560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8f570; body size 30 bytes.
#line 1 "ENTRY_10b8f570"

__declspec(naked) void FUN_10b8f570(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm je 0x10b8f58d
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm jne 0x10b8f581
  __asm pop esi
  __asm ret
}



// Reference entry 10b8fc30; body size 18 bytes.
#line 1 "ENTRY_10b8fc30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8fc30(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fd20; body size 11 bytes.
#line 1 "ENTRY_10b8fd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8fd20(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fd30; body size 11 bytes.
#line 1 "ENTRY_10b8fd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8fd30(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fd40; body size 16 bytes.
#line 1 "ENTRY_10b8fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8fd40(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fd60; body size 13 bytes.
#line 1 "ENTRY_10b8fd60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8fd60(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fd70; body size 14 bytes.
#line 1 "ENTRY_10b8fd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b8fd70(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fd90; body size 23 bytes.
#line 1 "ENTRY_10b8fd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b8fd90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b8fdb0; body size 3 bytes.
#line 1 "ENTRY_10b8fdb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b8fdb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b8ff40; body size 42 bytes.
#line 1 "ENTRY_10b8ff40"

__declspec(naked) void FUN_10b8ff40(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1190faa8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10b902f0; body size 47 bytes.
#line 1 "ENTRY_10b902f0"

__declspec(naked) void FUN_10b902f0(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_100665b3
  __asm mov dword ptr [esi], LAB_1190f280
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_1190f2dc
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10b90330; body size 47 bytes.
#line 1 "ENTRY_10b90330"

__declspec(naked) void FUN_10b90330(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_100665b3
  __asm mov dword ptr [esi], LAB_1190f200
  __asm mov eax, esi
  __asm mov dword ptr [esi + 0x10], LAB_1190f25c
  __asm _emit 0xc7 __asm _emit 0x86 __asm _emit 0x00 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10b90810; body size 11 bytes.
#line 1 "ENTRY_10b90810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b90810(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b90820; body size 5 bytes.
#line 1 "ENTRY_10b90820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b90820(void)

{
  FUN_10b90fe0();
  return;
}


// Reference entry 10b910f0; body size 3 bytes.
#line 1 "ENTRY_10b910f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b910f0(void)

{
  return;
}


// Reference entry 10b91230; body size 5 bytes.
#line 1 "ENTRY_10b91230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b91230(void)

{
  FUN_10b90fe0();
  return;
}


// Reference entry 10b91240; body size 19 bytes.
#line 1 "ENTRY_10b91240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b91240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b916f0; body size 5 bytes.
#line 1 "ENTRY_10b916f0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b916f0(undefined4 *param_1)

{ __asm jmp FUN_100186fb }


// Reference entry 10b91700; body size 5 bytes.
#line 1 "ENTRY_10b91700"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91700(undefined4 *param_1)

{ __asm jmp FUN_100186fb }


// Reference entry 10b91b90; body size 5 bytes.
#line 1 "ENTRY_10b91b90"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91b90(undefined4 *param_1)

{ __asm jmp FUN_100186fb }


// Reference entry 10b91ba0; body size 5 bytes.
#line 1 "ENTRY_10b91ba0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91ba0(undefined4 *param_1)

{ __asm jmp FUN_100186fb }


// Reference entry 10b91c40; body size 65 bytes.
#line 1 "ENTRY_10b91c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b91c40(int *param_2)
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


// Reference entry 10b91d10; body size 14 bytes.
#line 1 "ENTRY_10b91d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b91d10(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b91d30; body size 14 bytes.
#line 1 "ENTRY_10b91d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b91d30(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b91d80; body size 3 bytes.
#line 1 "ENTRY_10b91d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b91d80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b91d90; body size 3 bytes.
#line 1 "ENTRY_10b91d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b91d90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b91da0; body size 8 bytes.
#line 1 "ENTRY_10b91da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b91da0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10b91db0; body size 6 bytes.
#line 1 "ENTRY_10b91db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91db0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b91dc0; body size 6 bytes.
#line 1 "ENTRY_10b91dc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b91dc0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b91dd0; body size 9 bytes.
#line 1 "ENTRY_10b91dd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b91dd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b91de0; body size 9 bytes.
#line 1 "ENTRY_10b91de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b91de0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b91df0; body size 10 bytes.
#line 1 "ENTRY_10b91df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b91df0(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10b91e00; body size 29 bytes.
#line 1 "ENTRY_10b91e00"

__declspec(naked) void FUN_10b91e00(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10b91e18
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 10b92b00; body size 22 bytes.
#line 1 "ENTRY_10b92b00"

__declspec(naked) void FUN_10b92b00(void)

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



// Reference entry 10b92c60; body size 20 bytes.
#line 1 "ENTRY_10b92c60"

__declspec(naked) void FUN_10b92c60(void)

{
  __asm cmp dword ptr [ecx + 8], 0xccccccc
  __asm je 0x10b92c6a
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}



// Reference entry 10b92c80; body size 66 bytes.
#line 1 "ENTRY_10b92c80"

__declspec(naked) void FUN_10b92c80(void)

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



// Reference entry 10b93050; body size 3 bytes.
#line 1 "ENTRY_10b93050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93050(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b93060; body size 3 bytes.
#line 1 "ENTRY_10b93060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93060(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b93070; body size 3 bytes.
#line 1 "ENTRY_10b93070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93070(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b93080; body size 3 bytes.
#line 1 "ENTRY_10b93080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93080(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b93090; body size 3 bytes.
#line 1 "ENTRY_10b93090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b930a0; body size 3 bytes.
#line 1 "ENTRY_10b930a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b930a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b930b0; body size 92 bytes.
#line 1 "ENTRY_10b930b0"

__declspec(naked) void FUN_10b930b0(void)

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
  __asm jne 0x10b930ee
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [eax + 4], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp ecx, edi
  __asm jne 0x10b930fc
  __asm mov dword ptr [eax], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp dword ptr [eax + 4], ebx
  __asm jne 0x10b93104
  __asm mov dword ptr [eax + 4], esi
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
}



// Reference entry 10b93130; body size 3 bytes.
#line 1 "ENTRY_10b93130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b93140; body size 3 bytes.
#line 1 "ENTRY_10b93140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b931c0; body size 3 bytes.
#line 1 "ENTRY_10b931c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b931c0(void)

{
  return;
}


// Reference entry 10b93280; body size 11 bytes.
#line 1 "ENTRY_10b93280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93280(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b93290; body size 6 bytes.
#line 1 "ENTRY_10b93290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b93290(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10b932a0; body size 26 bytes.
#line 1 "ENTRY_10b932a0"

__declspec(naked) void FUN_10b932a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10b932b6
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10b93390; body size 14 bytes.
#line 1 "ENTRY_10b93390"

__declspec(naked) void FUN_10b93390(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 10b933b0; body size 13 bytes.
#line 1 "ENTRY_10b933b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b933b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b933c0; body size 12 bytes.
#line 1 "ENTRY_10b933c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b933c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b933d0; body size 11 bytes.
#line 1 "ENTRY_10b933d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b933d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b933e0; body size 43 bytes.
#line 1 "ENTRY_10b933e0"

__declspec(naked) void FUN_10b933e0(void)

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



// Reference entry 10b93440; body size 90 bytes.
#line 1 "ENTRY_10b93440"

__declspec(naked) void FUN_10b93440(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xccccccc
  __asm ja 0x10b93495
  __asm lea eax, [eax + eax*4]
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10b93480
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10b93495
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10b9347a
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10b93490
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10b934c0; body size 87 bytes.
#line 1 "ENTRY_10b934c0"

__declspec(naked) void FUN_10b934c0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10b93512
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10b934fd
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10b93512
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10b934f7
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10b9350d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10b93530; body size 35 bytes.
#line 1 "ENTRY_10b93530"

__declspec(naked) void FUN_10b93530(void)

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



// Reference entry 10b93560; body size 4 bytes.
#line 1 "ENTRY_10b93560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93560(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10b93570; body size 108 bytes.
#line 1 "ENTRY_10b93570"

__declspec(naked) void FUN_10b93570(void)

{
  __asm push ecx
  __asm push ebx
  __asm mov ebx, ecx
  __asm cmp dword ptr [ebx + 8], 0
  __asm je 0x10b935d9
  __asm mov edx, dword ptr [ebx + 4]
  __asm push edi
  __asm mov eax, dword ptr [edx + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov edi, dword ptr [edx]
  __asm test edi, edi
  __asm je 0x10b935ac
  __asm push esi
  __asm nop
  __asm mov esi, dword ptr [edi]
  __asm lea ecx, [edi + 8]
  __asm call LAB_10059c69
  __asm push 0x14
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov edi, esi
  __asm test esi, esi
  __asm jne 0x10b93590
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
  __asm call LAB_1009807c
  __asm add esp, 0xc
  __asm pop edi
  __asm pop ebx
  __asm pop ecx
  __asm ret
}



// Reference entry 10b93660; body size 57 bytes.
#line 1 "ENTRY_10b93660"

__declspec(naked) void FUN_10b93660(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*4]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10b93688
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b93693
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10b936b0; body size 60 bytes.
#line 1 "ENTRY_10b936b0"

__declspec(naked) void FUN_10b936b0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*4]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10b936d8
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b936e5
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10b93700; body size 61 bytes.
#line 1 "ENTRY_10b93700"

__declspec(naked) void FUN_10b93700(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10b93729
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b93736
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10b93750; body size 9 bytes.
#line 1 "ENTRY_10b93750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93750(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b93760; body size 9 bytes.
#line 1 "ENTRY_10b93760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93760(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b93770; body size 9 bytes.
#line 1 "ENTRY_10b93770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b93770(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b93780; body size 32 bytes.
#line 1 "ENTRY_10b93780"

__declspec(naked) void FUN_10b93780(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm test ecx, ecx
  __asm je 0x10b9379d
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}



// Reference entry 10b94e70; body size 3 bytes.
#line 1 "ENTRY_10b94e70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10b94e70(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10b94e80; body size 6 bytes.
#line 1 "ENTRY_10b94e80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b94e80(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b94e90; body size 6 bytes.
#line 1 "ENTRY_10b94e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b94e90(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b94ea0; body size 6 bytes.
#line 1 "ENTRY_10b94ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b94ea0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b94eb0; body size 6 bytes.
#line 1 "ENTRY_10b94eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b94eb0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b94ed0; body size 3 bytes.
#line 1 "ENTRY_10b94ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b94ed0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b94ee0; body size 3 bytes.
#line 1 "ENTRY_10b94ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b94ee0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b94ff0; body size 28 bytes.
#line 1 "ENTRY_10b94ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b94ff0(undefined4 *param_1)

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


// Reference entry 10b95020; body size 28 bytes.
#line 1 "ENTRY_10b95020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95020(undefined4 *param_1)

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


// Reference entry 10b95050; body size 28 bytes.
#line 1 "ENTRY_10b95050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95050(undefined4 *param_1)

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


// Reference entry 10b95080; body size 28 bytes.
#line 1 "ENTRY_10b95080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95080(undefined4 *param_1)

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


// Reference entry 10b950b0; body size 28 bytes.
#line 1 "ENTRY_10b950b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b950b0(undefined4 *param_1)

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


// Reference entry 10b950e0; body size 28 bytes.
#line 1 "ENTRY_10b950e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b950e0(undefined4 *param_1)

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


// Reference entry 10b95110; body size 28 bytes.
#line 1 "ENTRY_10b95110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95110(undefined4 *param_1)

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


// Reference entry 10b95140; body size 28 bytes.
#line 1 "ENTRY_10b95140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95140(undefined4 *param_1)

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


// Reference entry 10b95170; body size 28 bytes.
#line 1 "ENTRY_10b95170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95170(undefined4 *param_1)

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


// Reference entry 10b951a0; body size 28 bytes.
#line 1 "ENTRY_10b951a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b951a0(undefined4 *param_1)

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


// Reference entry 10b951d0; body size 28 bytes.
#line 1 "ENTRY_10b951d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b951d0(undefined4 *param_1)

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


// Reference entry 10b95200; body size 28 bytes.
#line 1 "ENTRY_10b95200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b95200(undefined4 *param_1)

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


// Reference entry 10b952e0; body size 9 bytes.
#line 1 "ENTRY_10b952e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b952e0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10b95490; body size 61 bytes.
#line 1 "ENTRY_10b95490"

__declspec(naked) void FUN_10b95490(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm test eax, eax
  __asm je 0x10b954b8
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm jge 0x10b954b8
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



// Reference entry 10b954e0; body size 22 bytes.
#line 1 "ENTRY_10b954e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b954e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b95500; body size 22 bytes.
#line 1 "ENTRY_10b95500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b95500(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b95520; body size 32 bytes.
#line 1 "ENTRY_10b95520"

__declspec(naked) void FUN_10b95520(void)

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



// Reference entry 10b956b0; body size 18 bytes.
#line 1 "ENTRY_10b956b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b956b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b956d0; body size 25 bytes.
#line 1 "ENTRY_10b956d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b956d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b956f0; body size 25 bytes.
#line 1 "ENTRY_10b956f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b956f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b95710; body size 18 bytes.
#line 1 "ENTRY_10b95710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b95710(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b95730; body size 25 bytes.
#line 1 "ENTRY_10b95730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b95730(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b95750; body size 25 bytes.
#line 1 "ENTRY_10b95750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b95750(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b95770; body size 17 bytes.
#line 1 "ENTRY_10b95770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10b95770(undefined4 param_2,undefined4 *param_3)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(*param_3);
  return (undefined1 *)(param_1);
}


// Reference entry 10b95790; body size 22 bytes.
#line 1 "ENTRY_10b95790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b95790(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b957b0; body size 22 bytes.
#line 1 "ENTRY_10b957b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b957b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10b957d0; body size 5 bytes.
#line 1 "ENTRY_10b957d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b957d0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b957e0; body size 5 bytes.
#line 1 "ENTRY_10b957e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b957e0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b957f0; body size 5 bytes.
#line 1 "ENTRY_10b957f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b957f0(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b95800; body size 5 bytes.
#line 1 "ENTRY_10b95800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b95800(undefined4 param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b95810; body size 21 bytes.
#line 1 "ENTRY_10b95810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 * __thiscall Recovered_Bulk::m_FUN_10b95810(undefined4 param_2,undefined4 param_3,undefined4 *param_4)
{
  undefined1 *param_1 = (undefined1 *)this;
  *param_1 = (undefined1)(0);
  param_1[4] = (undefined1)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(*param_4);
  return (undefined1 *)(param_1);
}


// Reference entry 10b95830; body size 63 bytes.
#line 1 "ENTRY_10b95830"

__declspec(naked) void FUN_10b95830(void)

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
  __asm je 0x10b9585a
  __asm add eax, -0x10
  __asm cmp dword ptr [eax], 0xffff
  __asm jge 0x10b9585a
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



// Reference entry 10b95880; body size 34 bytes.
#line 1 "ENTRY_10b95880"

__declspec(naked) void FUN_10b95880(void)

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



// Reference entry 10b958b0; body size 26 bytes.
#line 1 "ENTRY_10b958b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b958b0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b958d0; body size 26 bytes.
#line 1 "ENTRY_10b958d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b958d0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b958f0; body size 43 bytes.
#line 1 "ENTRY_10b958f0"

__declspec(naked) void FUN_10b958f0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10b95915
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



// Reference entry 10b95930; body size 26 bytes.
#line 1 "ENTRY_10b95930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b95930(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b95950; body size 26 bytes.
#line 1 "ENTRY_10b95950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b95950(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10b95970; body size 83 bytes.
#line 1 "ENTRY_10b95970"

__declspec(naked) void FUN_10b95970(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm cmp edi, dword ptr [esi]
  __asm je 0x10b959bc
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10b95997
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10b959b5
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



// Reference entry 10b959e0; body size 57 bytes.
#line 1 "ENTRY_10b959e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10b959e0(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10b95a30; body size 18 bytes.
#line 1 "ENTRY_10b95a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10b95a30(int *param_1,int *param_2)

{
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b95a50; body size 55 bytes.
#line 1 "ENTRY_10b95a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int FUN_10b95a50(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10b95aa0; body size 3 bytes.
#line 1 "ENTRY_10b95aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95aa0(void)

{
  return;
}


// Reference entry 10b95ab0; body size 3 bytes.
#line 1 "ENTRY_10b95ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95ab0(void)

{
  return;
}


// Reference entry 10b95ac0; body size 13 bytes.
#line 1 "ENTRY_10b95ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95ac0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95ad0; body size 13 bytes.
#line 1 "ENTRY_10b95ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95ad0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95ae0; body size 13 bytes.
#line 1 "ENTRY_10b95ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95ae0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95af0; body size 13 bytes.
#line 1 "ENTRY_10b95af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95af0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95b00; body size 13 bytes.
#line 1 "ENTRY_10b95b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b00(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95b10; body size 13 bytes.
#line 1 "ENTRY_10b95b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b10(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10b95b20; body size 3 bytes.
#line 1 "ENTRY_10b95b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b20(void)

{
  return;
}


// Reference entry 10b95b30; body size 3 bytes.
#line 1 "ENTRY_10b95b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b30(void)

{
  return;
}


// Reference entry 10b95b40; body size 3 bytes.
#line 1 "ENTRY_10b95b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b40(void)

{
  return;
}


// Reference entry 10b95b50; body size 3 bytes.
#line 1 "ENTRY_10b95b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95b50(void)

{
  return;
}


// Reference entry 10b95b60; body size 18 bytes.
#line 1 "ENTRY_10b95b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b95b60(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10b95b80; body size 18 bytes.
#line 1 "ENTRY_10b95b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b95b80(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10b95db0; body size 51 bytes.
#line 1 "ENTRY_10b95db0"

__declspec(naked) void FUN_10b95db0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm mov eax, dword ptr [esi + 4]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, dword ptr [esi]
  __asm test esi, esi
  __asm je 0x10b95de1
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm lea ecx, [esi + 8]
  __asm call LAB_1003ef36
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov esi, edi
  __asm test edi, edi
  __asm jne 0x10b95dc5
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10b95df0; body size 15 bytes.
#line 1 "ENTRY_10b95df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95df0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b95e10; body size 15 bytes.
#line 1 "ENTRY_10b95e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b95e10(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10b95eb0; body size 26 bytes.
#line 1 "ENTRY_10b95eb0"

__declspec(naked) void FUN_10b95eb0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea ecx, [esi + 8]
  __asm call LAB_1003ef36
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 10b95ed0; body size 7 bytes.
#line 1 "ENTRY_10b95ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b95ed0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b95ee0; body size 7 bytes.
#line 1 "ENTRY_10b95ee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b95ee0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b95ef0; body size 5 bytes.
#line 1 "ENTRY_10b95ef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b95ef0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b95f00; body size 5 bytes.
#line 1 "ENTRY_10b95f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b95f00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96430; body size 5 bytes.
#line 1 "ENTRY_10b96430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96440; body size 5 bytes.
#line 1 "ENTRY_10b96440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96450; body size 5 bytes.
#line 1 "ENTRY_10b96450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96460; body size 5 bytes.
#line 1 "ENTRY_10b96460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96470; body size 5 bytes.
#line 1 "ENTRY_10b96470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96480; body size 5 bytes.
#line 1 "ENTRY_10b96480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96490; body size 5 bytes.
#line 1 "ENTRY_10b96490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b964a0; body size 5 bytes.
#line 1 "ENTRY_10b964a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b964b0; body size 5 bytes.
#line 1 "ENTRY_10b964b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b964c0; body size 5 bytes.
#line 1 "ENTRY_10b964c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b964d0; body size 5 bytes.
#line 1 "ENTRY_10b964d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b964e0; body size 5 bytes.
#line 1 "ENTRY_10b964e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b964e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b964f0; body size 130 bytes.
#line 1 "ENTRY_10b964f0"

__declspec(naked) void FUN_10b964f0(void)

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
  __asm je 0x10b96526
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi + 4], edi
  __asm test edi, edi
  __asm je 0x10b9654f
  __asm mov eax, dword ptr [edi]
  __asm mov ecx, edi
  __asm call dword ptr [eax + 0xc]
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esi + 8], eax
  __asm test ecx, ecx
  __asm je 0x10b96556
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



// Reference entry 10b965a0; body size 29 bytes.
#line 1 "ENTRY_10b965a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b965a0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10b965d0; body size 55 bytes.
#line 1 "ENTRY_10b965d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b965d0(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 *param_4)

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


// Reference entry 10b96690; body size 9 bytes.
#line 1 "ENTRY_10b96690"

__declspec(naked) void FUN_10b96690(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm jmp LAB_1003ef36
}



// Reference entry 10b966a0; body size 15 bytes.
#line 1 "ENTRY_10b966a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b966a0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10b966c0; body size 15 bytes.
#line 1 "ENTRY_10b966c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b966c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10b967e0; body size 5 bytes.
#line 1 "ENTRY_10b967e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b967e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b967f0; body size 5 bytes.
#line 1 "ENTRY_10b967f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b967f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96800; body size 5 bytes.
#line 1 "ENTRY_10b96800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96810; body size 5 bytes.
#line 1 "ENTRY_10b96810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96820; body size 5 bytes.
#line 1 "ENTRY_10b96820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96830; body size 5 bytes.
#line 1 "ENTRY_10b96830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96840; body size 5 bytes.
#line 1 "ENTRY_10b96840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96850; body size 5 bytes.
#line 1 "ENTRY_10b96850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96860; body size 5 bytes.
#line 1 "ENTRY_10b96860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96870; body size 5 bytes.
#line 1 "ENTRY_10b96870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96880; body size 5 bytes.
#line 1 "ENTRY_10b96880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b96880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b96890; body size 6 bytes.
#line 1 "ENTRY_10b96890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b96890(void)

{
  return (char *)("SCIArtworkCache");
}


// Reference entry 10b968a0; body size 6 bytes.
#line 1 "ENTRY_10b968a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b968a0(void)

{
  return (char *)("SCIArtworkCacheManager");
}


// Reference entry 10b968b0; body size 6 bytes.
#line 1 "ENTRY_10b968b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b968b0(void)

{
  return (char *)("SCIArtworkData");
}


// Reference entry 10b968c0; body size 6 bytes.
#line 1 "ENTRY_10b968c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b968c0(void)

{
  return (char *)("SCILogoArtworkCache");
}


// Reference entry 10b968d0; body size 30 bytes.
#line 1 "ENTRY_10b968d0"

__declspec(naked) void FUN_10b968d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm je 0x10b968ed
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm jne 0x10b968e1
  __asm pop esi
  __asm ret
}



// Reference entry 10b96900; body size 30 bytes.
#line 1 "ENTRY_10b96900"

__declspec(naked) void FUN_10b96900(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm cmp eax, edx
  __asm je 0x10b9691d
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm mov ecx, dword ptr [esi]
  __asm mov dword ptr [eax], ecx
  __asm add eax, 4
  __asm cmp eax, edx
  __asm jne 0x10b96911
  __asm pop esi
  __asm ret
}



// Reference entry 10b96af0; body size 27 bytes.
#line 1 "ENTRY_10b96af0"

__declspec(naked) void FUN_10b96af0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1190fdc8
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10b96b20; body size 27 bytes.
#line 1 "ENTRY_10b96b20"

__declspec(naked) void FUN_10b96b20(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1190fe98
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10b96b50; body size 27 bytes.
#line 1 "ENTRY_10b96b50"

__declspec(naked) void FUN_10b96b50(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1190fbe0
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10b96b80; body size 27 bytes.
#line 1 "ENTRY_10b96b80"

__declspec(naked) void FUN_10b96b80(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_1190fe2c
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10b96bb0; body size 70 bytes.
#line 1 "ENTRY_10b96bb0"

__declspec(naked) void FUN_10b96bb0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx], LAB_1190fcf4
  __asm mov dword ptr [ecx + 0xc], LAB_1190fd04
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10b96c10; body size 32 bytes.
#line 1 "ENTRY_10b96c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b96c10(undefined4 *param_2)
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


// Reference entry 10b96c80; body size 16 bytes.
#line 1 "ENTRY_10b96c80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96c80(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b96ca0; body size 32 bytes.
#line 1 "ENTRY_10b96ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b96ca0(undefined4 *param_2)
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


// Reference entry 10b96d10; body size 16 bytes.
#line 1 "ENTRY_10b96d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b96d30; body size 16 bytes.
#line 1 "ENTRY_10b96d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96d30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b96d90; body size 16 bytes.
#line 1 "ENTRY_10b96d90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96d90(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b96db0; body size 16 bytes.
#line 1 "ENTRY_10b96db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b96db0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b96e10; body size 48 bytes.
#line 1 "ENTRY_10b96e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b96e10(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  *param_1 = (int)(0);
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)*param_1);
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10b96e90; body size 18 bytes.
#line 1 "ENTRY_10b96e90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b96e90(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b96eb0; body size 18 bytes.
#line 1 "ENTRY_10b96eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b96eb0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b96ed0; body size 10 bytes.
#line 1 "ENTRY_10b96ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b96ed0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10b97090; body size 11 bytes.
#line 1 "ENTRY_10b97090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b97090(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b970a0; body size 9 bytes.
#line 1 "ENTRY_10b970a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b970a0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b970b0; body size 11 bytes.
#line 1 "ENTRY_10b970b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b970b0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b970c0; body size 9 bytes.
#line 1 "ENTRY_10b970c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b970c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b970d0; body size 11 bytes.
#line 1 "ENTRY_10b970d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b970d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b970e0; body size 9 bytes.
#line 1 "ENTRY_10b970e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b970e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b970f0; body size 11 bytes.
#line 1 "ENTRY_10b970f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b970f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97100; body size 9 bytes.
#line 1 "ENTRY_10b97100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97110; body size 11 bytes.
#line 1 "ENTRY_10b97110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b97110(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97120; body size 9 bytes.
#line 1 "ENTRY_10b97120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97130; body size 11 bytes.
#line 1 "ENTRY_10b97130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b97130(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97140; body size 9 bytes.
#line 1 "ENTRY_10b97140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97150; body size 11 bytes.
#line 1 "ENTRY_10b97150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b97150(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97160; body size 11 bytes.
#line 1 "ENTRY_10b97160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b97160(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97170; body size 16 bytes.
#line 1 "ENTRY_10b97170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97170(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97190; body size 16 bytes.
#line 1 "ENTRY_10b97190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97190(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b971b0; body size 17 bytes.
#line 1 "ENTRY_10b971b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10b971b0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  param_1[4] = (undefined1)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 10b971d0; body size 23 bytes.
#line 1 "ENTRY_10b971d0"

__declspec(naked) void FUN_10b971d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x7e __asm _emit 0x00
  __asm movq qword ptr [ecx], xmm0
  __asm mov eax, dword ptr [eax + 8]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm ret 4
}



// Reference entry 10b971f0; body size 13 bytes.
#line 1 "ENTRY_10b971f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b971f0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97200; body size 14 bytes.
#line 1 "ENTRY_10b97200"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b97200(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97220; body size 14 bytes.
#line 1 "ENTRY_10b97220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b97220(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97240; body size 23 bytes.
#line 1 "ENTRY_10b97240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97240(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97260; body size 23 bytes.
#line 1 "ENTRY_10b97260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97260(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97280; body size 3 bytes.
#line 1 "ENTRY_10b97280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b97280(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b97290; body size 3 bytes.
#line 1 "ENTRY_10b97290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b97290(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b972a0; body size 12 bytes.
#line 1 "ENTRY_10b972a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b972a0(int param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10b97e60; body size 42 bytes.
#line 1 "ENTRY_10b97e60"

__declspec(naked) void FUN_10b97e60(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_118abe0c
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_1190ff1c
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10b97ea0; body size 9 bytes.
#line 1 "ENTRY_10b97ea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97ea0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArtworkCache);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97eb0; body size 9 bytes.
#line 1 "ENTRY_10b97eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97eb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArtworkCacheManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97ec0; body size 9 bytes.
#line 1 "ENTRY_10b97ec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97ec0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIArtworkData);
  return (undefined4 *)(param_1);
}


// Reference entry 10b97ed0; body size 9 bytes.
#line 1 "ENTRY_10b97ed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b97ed0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCILogoArtworkCache);
  return (undefined4 *)(param_1);
}


// Reference entry 10b98310; body size 32 bytes.
#line 1 "ENTRY_10b98310"

__declspec(naked) void FUN_10b98310(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_1190ffc4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov byte ptr [ecx + 0xc], 0
  __asm pop ecx
  __asm ret
}



// Reference entry 10b98340; body size 44 bytes.
#line 1 "ENTRY_10b98340"

__declspec(naked) void FUN_10b98340(void)

{
  __asm push ecx
  __asm push esi
  __asm push offset LAB_1008a49a
  __asm mov esi, ecx
  __asm push offset LAB_100537fb
  __asm push esi
  __asm mov dword ptr [esp + 0x10], esi
  __asm call LAB_1006306b
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [esi + 8], eax
  __asm mov eax, esi
  __asm mov dword ptr [esi], LAB_1190ffa4
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10b98380; body size 9 bytes.
#line 1 "ENTRY_10b98380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b98380(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgFileParserCB);
  return (undefined4 *)(param_1);
}


// Reference entry 10b98390; body size 11 bytes.
#line 1 "ENTRY_10b98390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b98390(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b983a0; body size 11 bytes.
#line 1 "ENTRY_10b983a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10b983a0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10b983c0; body size 5 bytes.
#line 1 "ENTRY_10b983c0"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b983c0(int param_1)

{ __asm jmp FUN_1006a64f }


// Reference entry 10b98c20; body size 3 bytes.
#line 1 "ENTRY_10b98c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b98c20(void)

{
  return;
}


// Reference entry 10b98c30; body size 3 bytes.
#line 1 "ENTRY_10b98c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b98c30(void)

{
  return;
}


// Reference entry 10b98e30; body size 5 bytes.
#line 1 "ENTRY_10b98e30"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b98e30(int param_1)

{ __asm jmp FUN_10044c88 }


// Reference entry 10b98e40; body size 5 bytes.
#line 1 "ENTRY_10b98e40"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b98e40(int param_1)

{ __asm jmp FUN_1006a64f }


// Reference entry 10b99210; body size 19 bytes.
#line 1 "ENTRY_10b99210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99210(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99230; body size 7 bytes.
#line 1 "ENTRY_10b99230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99230(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99240; body size 7 bytes.
#line 1 "ENTRY_10b99240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99240(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99250; body size 7 bytes.
#line 1 "ENTRY_10b99250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99250(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b99260; body size 7 bytes.
#line 1 "ENTRY_10b99260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b99260(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10b993e0; body size 7 bytes.
#line 1 "ENTRY_10b993e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b993e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SvgFileParserCB);
  return;
}


// Reference entry 10b993f0; body size 72 bytes.
#line 1 "ENTRY_10b993f0"

__declspec(naked) void FUN_10b993f0(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, dword ptr [ecx]
  __asm test edi, edi
  __asm je 0x10b99435
  __asm cmp dword ptr [edi + 0x10], 0
  __asm je 0x10b99435
  __asm push esi
  __asm push dword ptr [edi + 0xc]
  __asm lea esi, [edi + 0xc]
  __asm push esi
  __asm call LAB_100284b6
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [esp + 0x10], eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push dword ptr [edi + 0x18]
  __asm push dword ptr [edi + 0x14]
  __asm call LAB_1002f757
  __asm add esp, 0x14
  __asm pop esi
  __asm pop edi
  __asm pop ecx
  __asm ret
}



// Reference entry 10b99460; body size 65 bytes.
#line 1 "ENTRY_10b99460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b99460(int *param_2)
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


// Reference entry 10b994c0; body size 65 bytes.
#line 1 "ENTRY_10b994c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b994c0(int *param_2)
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


// Reference entry 10b996e0; body size 42 bytes.
#line 1 "ENTRY_10b996e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10b996e0(int *param_2)
{
  int *param_1 = (int *)this;
  int iVar1;
  int *piVar2;
  
  iVar1 = (int)(*param_2);
  *param_2 = (int)(0);
  piVar2 = (int *)((int *)*param_1);
  if ((int *)(piVar2) != (int *)(0x0)) {
    *param_1 = (int)(0);
    ((SCVtbl_2_0*)(piVar2))->v();
  }
  *param_1 = (int)(iVar1);
  return (int *)(param_1);
}


// Reference entry 10b99750; body size 14 bytes.
#line 1 "ENTRY_10b99750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b99750(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b99770; body size 14 bytes.
#line 1 "ENTRY_10b99770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b99770(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b99790; body size 14 bytes.
#line 1 "ENTRY_10b99790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b99790(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b997b0; body size 14 bytes.
#line 1 "ENTRY_10b997b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b997b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b997d0; body size 14 bytes.
#line 1 "ENTRY_10b997d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b997d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b997f0; body size 14 bytes.
#line 1 "ENTRY_10b997f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b997f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b99810; body size 14 bytes.
#line 1 "ENTRY_10b99810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b99810(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b99830; body size 14 bytes.
#line 1 "ENTRY_10b99830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10b99830(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10b998b0; body size 3 bytes.
#line 1 "ENTRY_10b998b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b998b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b998c0; body size 7 bytes.
#line 1 "ENTRY_10b998c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b998c0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b998d0; body size 3 bytes.
#line 1 "ENTRY_10b998d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b998d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b998e0; body size 7 bytes.
#line 1 "ENTRY_10b998e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b998e0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b998f0; body size 7 bytes.
#line 1 "ENTRY_10b998f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b998f0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b99900; body size 3 bytes.
#line 1 "ENTRY_10b99900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99900(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b99910; body size 7 bytes.
#line 1 "ENTRY_10b99910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b99910(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10b99920; body size 3 bytes.
#line 1 "ENTRY_10b99920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99920(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b99930; body size 8 bytes.
#line 1 "ENTRY_10b99930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b99930(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10b99940; body size 4 bytes.
#line 1 "ENTRY_10b99940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99940(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b99950; body size 3 bytes.
#line 1 "ENTRY_10b99950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99950(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b99960; body size 3 bytes.
#line 1 "ENTRY_10b99960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99960(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b99970; body size 3 bytes.
#line 1 "ENTRY_10b99970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99970(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b99980; body size 3 bytes.
#line 1 "ENTRY_10b99980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99980(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b99990; body size 3 bytes.
#line 1 "ENTRY_10b99990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b99990(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b999a0; body size 3 bytes.
#line 1 "ENTRY_10b999a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b999a0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b999b0; body size 3 bytes.
#line 1 "ENTRY_10b999b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b999b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b999c0; body size 6 bytes.
#line 1 "ENTRY_10b999c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b999c0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b999d0; body size 6 bytes.
#line 1 "ENTRY_10b999d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b999d0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b999e0; body size 6 bytes.
#line 1 "ENTRY_10b999e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b999e0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b999f0; body size 6 bytes.
#line 1 "ENTRY_10b999f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b999f0(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b99a00; body size 6 bytes.
#line 1 "ENTRY_10b99a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a00(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b99a10; body size 6 bytes.
#line 1 "ENTRY_10b99a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a10(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b99a20; body size 6 bytes.
#line 1 "ENTRY_10b99a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a20(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b99a30; body size 6 bytes.
#line 1 "ENTRY_10b99a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a30(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b99a40; body size 6 bytes.
#line 1 "ENTRY_10b99a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a40(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b99a50; body size 6 bytes.
#line 1 "ENTRY_10b99a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b99a50(int *param_1)

{
  return (int)(*param_1 + 8);
}


// Reference entry 10b99a60; body size 9 bytes.
#line 1 "ENTRY_10b99a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99a60(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b99a70; body size 9 bytes.
#line 1 "ENTRY_10b99a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99a70(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b99a80; body size 15 bytes.
#line 1 "ENTRY_10b99a80"

__declspec(naked) void FUN_10b99a80(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], edx
  __asm mov edx, dword ptr [edx]
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}



// Reference entry 10b99aa0; body size 15 bytes.
#line 1 "ENTRY_10b99aa0"

__declspec(naked) void FUN_10b99aa0(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], edx
  __asm mov edx, dword ptr [edx]
  __asm mov dword ptr [ecx], edx
  __asm ret 8
}



// Reference entry 10b99ac0; body size 9 bytes.
#line 1 "ENTRY_10b99ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99ac0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b99ad0; body size 9 bytes.
#line 1 "ENTRY_10b99ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99ad0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b99ae0; body size 9 bytes.
#line 1 "ENTRY_10b99ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99ae0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b99af0; body size 9 bytes.
#line 1 "ENTRY_10b99af0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10b99af0(undefined4 *param_1)

{
  *param_1 = (undefined4)(*(undefined4 *)*param_1);
  return (undefined4 *)(param_1);
}


// Reference entry 10b99b00; body size 10 bytes.
#line 1 "ENTRY_10b99b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b99b00(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10b99b10; body size 10 bytes.
#line 1 "ENTRY_10b99b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int * __fastcall FUN_10b99b10(int *param_1)

{
  *param_1 = (int)(*(int *)(*param_1 + 4));
  return (int *)(param_1);
}


// Reference entry 10b99b20; body size 18 bytes.
#line 1 "ENTRY_10b99b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10b99b20(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b99b40; body size 57 bytes.
#line 1 "ENTRY_10b99b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __stdcall FUN_10b99b40(byte *param_1)

{
  return (int)(((((*param_1 ^ 0x811c9dc5) * 0x1000193 ^ (uint)param_1[1]) * 0x1000193 ^ (uint)param_1[2]) * 0x1000193 ^ (uint)param_1[3]) * 0x1000193);
}


// Reference entry 10b99b90; body size 18 bytes.
#line 1 "ENTRY_10b99b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __stdcall FUN_10b99b90(int *param_1,int *param_2)

{
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10b9a400; body size 22 bytes.
#line 1 "ENTRY_10b9a400"

__declspec(naked) void FUN_10b9a400(void)

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



// Reference entry 10b9a420; body size 22 bytes.
#line 1 "ENTRY_10b9a420"

__declspec(naked) void FUN_10b9a420(void)

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



// Reference entry 10b9a6c0; body size 20 bytes.
#line 1 "ENTRY_10b9a6c0"

__declspec(naked) void FUN_10b9a6c0(void)

{
  __asm cmp dword ptr [ecx + 0x10], 0xccccccc
  __asm je 0x10b9a6ca
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}



// Reference entry 10b9a6e0; body size 20 bytes.
#line 1 "ENTRY_10b9a6e0"

__declspec(naked) void FUN_10b9a6e0(void)

{
  __asm cmp dword ptr [ecx + 8], 0xccccccc
  __asm je 0x10b9a6ea
  __asm ret
  __asm push offset LAB_11880f54
  __asm call LAB_1148a054
}



// Reference entry 10b9a700; body size 67 bytes.
#line 1 "ENTRY_10b9a700"

__declspec(naked) void FUN_10b9a700(void)

{
  __asm mov eax, dword ptr [ecx + 0x10]
  __asm inc eax
  __asm movd xmm0, eax
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0
  __asm shr eax, 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm mov eax, dword ptr [ecx + 0x24]
  __asm cvtpd2ps xmm1, xmm0
  __asm movd xmm0, eax
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0xe6 __asm _emit 0xc0
  __asm shr eax, 0x1f
  __asm addsd xmm0, qword ptr [eax*8 + LAB_11880fb0]
  __asm cvtpd2ps xmm0, xmm0
  __asm _emit 0xf3 __asm _emit 0x0f __asm _emit 0x5e __asm _emit 0xc8
  __asm comiss xmm1, dword ptr [ecx + 8]
  __asm seta al
  __asm ret
}



// Reference entry 10b9a760; body size 66 bytes.
#line 1 "ENTRY_10b9a760"

__declspec(naked) void FUN_10b9a760(void)

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



// Reference entry 10b9a920; body size 8 bytes.
#line 1 "ENTRY_10b9a920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b9a920(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10b9a930; body size 54 bytes.
#line 1 "ENTRY_10b9a930"

__declspec(naked) void FUN_10b9a930(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, dword ptr [ecx + 0x14]
  __asm lea edx, [edx + eax*8]
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [edx + 4], eax
  __asm jne 0x10b9a95b
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10b9a952
  __asm mov eax, dword ptr [ecx + 0xc]
  __asm mov dword ptr [edx], eax
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10b9a963
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm ret 8
}



// Reference entry 10b9a980; body size 54 bytes.
#line 1 "ENTRY_10b9a980"

__declspec(naked) void FUN_10b9a980(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, dword ptr [ecx + 0xc]
  __asm lea edx, [edx + eax*8]
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [edx + 4], eax
  __asm jne 0x10b9a9ab
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10b9a9a2
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov dword ptr [edx], eax
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm mov eax, dword ptr [eax + 4]
  __asm mov dword ptr [edx + 4], eax
  __asm ret 8
  __asm cmp dword ptr [edx], eax
  __asm jne 0x10b9a9b3
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm ret 8
}



// Reference entry 10b9ae50; body size 3 bytes.
#line 1 "ENTRY_10b9ae50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9ae60; body size 3 bytes.
#line 1 "ENTRY_10b9ae60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9ae70; body size 3 bytes.
#line 1 "ENTRY_10b9ae70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9ae80; body size 3 bytes.
#line 1 "ENTRY_10b9ae80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9ae90; body size 3 bytes.
#line 1 "ENTRY_10b9ae90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9ae90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9aea0; body size 3 bytes.
#line 1 "ENTRY_10b9aea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aea0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9aeb0; body size 3 bytes.
#line 1 "ENTRY_10b9aeb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aeb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9aec0; body size 3 bytes.
#line 1 "ENTRY_10b9aec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aec0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9aed0; body size 3 bytes.
#line 1 "ENTRY_10b9aed0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aed0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9aee0; body size 3 bytes.
#line 1 "ENTRY_10b9aee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9aee0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9aef0; body size 4 bytes.
#line 1 "ENTRY_10b9aef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b9aef0(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10b9af00; body size 4 bytes.
#line 1 "ENTRY_10b9af00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b9af00(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10b9af10; body size 3 bytes.
#line 1 "ENTRY_10b9af10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9af20; body size 3 bytes.
#line 1 "ENTRY_10b9af20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9af30; body size 3 bytes.
#line 1 "ENTRY_10b9af30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9af40; body size 3 bytes.
#line 1 "ENTRY_10b9af40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9af50; body size 4 bytes.
#line 1 "ENTRY_10b9af50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9af50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10b9af60; body size 92 bytes.
#line 1 "ENTRY_10b9af60"

__declspec(naked) void FUN_10b9af60(void)

{
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm mov edx, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm mov ebx, dword ptr [edi + 4]
  __asm inc dword ptr [edx + 0x10]
  __asm mov dword ptr [esi], edi
  __asm mov dword ptr [esi + 4], ebx
  __asm mov dword ptr [ebx], esi
  __asm mov dword ptr [edi + 4], esi
  __asm mov eax, dword ptr [edx + 0x20]
  __asm mov ecx, dword ptr [edx + 0x14]
  __asm and eax, dword ptr [esp + 0x10]
  __asm lea eax, [ecx + eax*8]
  __asm mov ecx, dword ptr [eax]
  __asm cmp ecx, dword ptr [edx + 0xc]
  __asm jne 0x10b9af9e
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [eax + 4], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp ecx, edi
  __asm jne 0x10b9afac
  __asm mov dword ptr [eax], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp dword ptr [eax + 4], ebx
  __asm jne 0x10b9afb4
  __asm mov dword ptr [eax + 4], esi
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
}



// Reference entry 10b9afe0; body size 92 bytes.
#line 1 "ENTRY_10b9afe0"

__declspec(naked) void FUN_10b9afe0(void)

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
  __asm jne 0x10b9b01e
  __asm mov dword ptr [eax], esi
  __asm mov dword ptr [eax + 4], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp ecx, edi
  __asm jne 0x10b9b02c
  __asm mov dword ptr [eax], esi
  __asm mov eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
  __asm cmp dword ptr [eax + 4], ebx
  __asm jne 0x10b9b034
  __asm mov dword ptr [eax + 4], esi
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
}



// Reference entry 10b9b060; body size 7 bytes.
#line 1 "ENTRY_10b9b060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b9b060(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10b9b070; body size 4 bytes.
#line 1 "ENTRY_10b9b070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b9b070(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10b9b080; body size 4 bytes.
#line 1 "ENTRY_10b9b080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10b9b080(int param_1)

{
  return (int)(param_1 + 8);
}


// Reference entry 10b9b090; body size 3 bytes.
#line 1 "ENTRY_10b9b090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9b090(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9b0a0; body size 3 bytes.
#line 1 "ENTRY_10b9b0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9b0a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9b190; body size 3 bytes.
#line 1 "ENTRY_10b9b190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9b190(void)

{
  return;
}


// Reference entry 10b9b1a0; body size 3 bytes.
#line 1 "ENTRY_10b9b1a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9b1a0(void)

{
  return;
}


// Reference entry 10b9b1b0; body size 3 bytes.
#line 1 "ENTRY_10b9b1b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b9b1b0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10b9b1c0; body size 3 bytes.
#line 1 "ENTRY_10b9b1c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10b9b1c0(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10b9b330; body size 11 bytes.
#line 1 "ENTRY_10b9b330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9b330(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b9b340; body size 11 bytes.
#line 1 "ENTRY_10b9b340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9b340(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b9b350; body size 6 bytes.
#line 1 "ENTRY_10b9b350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9b350(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10b9b360; body size 6 bytes.
#line 1 "ENTRY_10b9b360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9b360(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10b9b370; body size 26 bytes.
#line 1 "ENTRY_10b9b370"

__declspec(naked) void FUN_10b9b370(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10b9b386
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10b9b390; body size 10 bytes.
#line 1 "ENTRY_10b9b390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9b390(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10b9b530; body size 14 bytes.
#line 1 "ENTRY_10b9b530"

__declspec(naked) void FUN_10b9b530(void)

{
  __asm mov eax, dword ptr [ecx + 0xc]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 10b9b550; body size 14 bytes.
#line 1 "ENTRY_10b9b550"

__declspec(naked) void FUN_10b9b550(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 10b9b570; body size 13 bytes.
#line 1 "ENTRY_10b9b570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9b570(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b9b580; body size 13 bytes.
#line 1 "ENTRY_10b9b580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9b580(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b9b590; body size 12 bytes.
#line 1 "ENTRY_10b9b590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9b590(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10b9b5a0; body size 12 bytes.
#line 1 "ENTRY_10b9b5a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9b5a0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b9b5b0; body size 11 bytes.
#line 1 "ENTRY_10b9b5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9b5b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b9b5c0; body size 11 bytes.
#line 1 "ENTRY_10b9b5c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9b5c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b9b670; body size 48 bytes.
#line 1 "ENTRY_10b9b670"

__declspec(naked) void FUN_10b9b670(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esi]
  __asm dec dword ptr [ecx + 4]
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [eax], edi
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [edi + 4], ecx
  __asm lea ecx, [esi + 8]
  __asm call LAB_1003ef36
  __asm push 0x14
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10b9b6b0; body size 43 bytes.
#line 1 "ENTRY_10b9b6b0"

__declspec(naked) void FUN_10b9b6b0(void)

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



// Reference entry 10b9b6f0; body size 43 bytes.
#line 1 "ENTRY_10b9b6f0"

__declspec(naked) void FUN_10b9b6f0(void)

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



// Reference entry 10b9baf0; body size 90 bytes.
#line 1 "ENTRY_10b9baf0"

__declspec(naked) void FUN_10b9baf0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xccccccc
  __asm ja 0x10b9bb45
  __asm lea eax, [eax + eax*4]
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10b9bb30
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10b9bb45
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10b9bb2a
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10b9bb40
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10b9bb70; body size 90 bytes.
#line 1 "ENTRY_10b9bb70"

__declspec(naked) void FUN_10b9bb70(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0xccccccc
  __asm ja 0x10b9bbc5
  __asm lea eax, [eax + eax*4]
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10b9bbb0
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10b9bbc5
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10b9bbaa
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10b9bbc0
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10b9bbf0; body size 87 bytes.
#line 1 "ENTRY_10b9bbf0"

__declspec(naked) void FUN_10b9bbf0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10b9bc42
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10b9bc2d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10b9bc42
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10b9bc27
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10b9bc3d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10b9bc60; body size 87 bytes.
#line 1 "ENTRY_10b9bc60"

__declspec(naked) void FUN_10b9bc60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10b9bcb2
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10b9bc9d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10b9bcb2
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10b9bc97
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10b9bcad
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10b9bcd0; body size 14 bytes.
#line 1 "ENTRY_10b9bcd0"

__declspec(naked) void FUN_10b9bcd0(void)

{
  __asm mov eax, dword ptr [ecx + 0xc]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 10b9bcf0; body size 14 bytes.
#line 1 "ENTRY_10b9bcf0"

__declspec(naked) void FUN_10b9bcf0(void)

{
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov ecx, dword ptr [eax]
  __asm mov eax, dword ptr [esp + 4]
  __asm mov dword ptr [eax], ecx
  __asm ret 4
}



// Reference entry 10b9bd10; body size 13 bytes.
#line 1 "ENTRY_10b9bd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9bd10(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b9bd20; body size 13 bytes.
#line 1 "ENTRY_10b9bd20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9bd20(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10b9bd30; body size 68 bytes.
#line 1 "ENTRY_10b9bd30"

__declspec(naked) void FUN_10b9bd30(void)

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
  __asm mov eax, dword ptr [edi + 0x20]
  __asm imul ecx, ecx, 0x1000193
  __asm pop edi
  __asm pop esi
  __asm and eax, ecx
  __asm ret 4
}



// Reference entry 10b9bd90; body size 35 bytes.
#line 1 "ENTRY_10b9bd90"

__declspec(naked) void FUN_10b9bd90(void)

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



// Reference entry 10b9bdc0; body size 4 bytes.
#line 1 "ENTRY_10b9bdc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9bdc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10b9bdd0; body size 4 bytes.
#line 1 "ENTRY_10b9bdd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9bdd0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x1c));
}


// Reference entry 10b9bf70; body size 68 bytes.
#line 1 "ENTRY_10b9bf70"

__declspec(naked) void FUN_10b9bf70(void)

{
  __asm push ecx
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x10], 0
  __asm je 0x10b9bfb1
  __asm push esi
  __asm push dword ptr [edi + 0xc]
  __asm lea esi, [edi + 0xc]
  __asm push esi
  __asm call LAB_100284b6
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax], eax
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [eax + 4], eax
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [esp + 0x10], eax
  __asm lea eax, [esp + 0x10]
  __asm push eax
  __asm push dword ptr [edi + 0x18]
  __asm push dword ptr [edi + 0x14]
  __asm call LAB_1002f757
  __asm add esp, 0x14
  __asm pop esi
  __asm pop edi
  __asm pop ecx
  __asm ret
}



// Reference entry 10b9c160; body size 57 bytes.
#line 1 "ENTRY_10b9c160"

__declspec(naked) void FUN_10b9c160(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*4]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10b9c188
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b9c193
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10b9c1b0; body size 57 bytes.
#line 1 "ENTRY_10b9c1b0"

__declspec(naked) void FUN_10b9c1b0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm lea ecx, [eax + eax*4]
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10b9c1d8
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b9c1e3
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10b9c200; body size 60 bytes.
#line 1 "ENTRY_10b9c200"

__declspec(naked) void FUN_10b9c200(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*4]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10b9c228
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b9c235
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10b9c250; body size 60 bytes.
#line 1 "ENTRY_10b9c250"

__declspec(naked) void FUN_10b9c250(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*4]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10b9c278
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b9c285
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10b9c2a0; body size 61 bytes.
#line 1 "ENTRY_10b9c2a0"

__declspec(naked) void FUN_10b9c2a0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10b9c2c9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b9c2d6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10b9c2f0; body size 61 bytes.
#line 1 "ENTRY_10b9c2f0"

__declspec(naked) void FUN_10b9c2f0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10b9c319
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10b9c326
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10b9c340; body size 16 bytes.
#line 1 "ENTRY_10b9c340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9c340(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b9c360; body size 9 bytes.
#line 1 "ENTRY_10b9c360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9c360(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10b9c4b0; body size 12 bytes.
#line 1 "ENTRY_10b9c4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9c4b0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 0xc));
  return;
}


// Reference entry 10b9c4c0; body size 12 bytes.
#line 1 "ENTRY_10b9c4c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9c4c0(undefined4 *param_2)
{
  int param_1 = (int )this;
  *param_2 = (undefined4)(*(undefined4 *)(param_1 + 4));
  return;
}


// Reference entry 10b9c4d0; body size 11 bytes.
#line 1 "ENTRY_10b9c4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9c4d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b9c4e0; body size 11 bytes.
#line 1 "ENTRY_10b9c4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10b9c4e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10b9c4f0; body size 3 bytes.
#line 1 "ENTRY_10b9c4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10b9c4f0(void)

{
  return;
}


// Reference entry 10b9c730; body size 4 bytes.
#line 1 "ENTRY_10b9c730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9c730(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x2c));
}


// Reference entry 10b9de50; body size 4 bytes.
#line 1 "ENTRY_10b9de50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9de50(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x78));
}


// Reference entry 10b9e070; body size 4 bytes.
#line 1 "ENTRY_10b9e070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9e070(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b9e530; body size 4 bytes.
#line 1 "ENTRY_10b9e530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9e530(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10b9e8f0; body size 6 bytes.
#line 1 "ENTRY_10b9e8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b9e8f0(void)

{
  return (char *)("SCIArtworkCache");
}


// Reference entry 10b9e900; body size 6 bytes.
#line 1 "ENTRY_10b9e900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b9e900(void)

{
  return (char *)("SCIArtworkCacheManager");
}


// Reference entry 10b9e910; body size 6 bytes.
#line 1 "ENTRY_10b9e910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b9e910(void)

{
  return (char *)("SCIArtworkData");
}


// Reference entry 10b9e920; body size 6 bytes.
#line 1 "ENTRY_10b9e920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10b9e920(void)

{
  return (char *)("SCILogoArtworkCache");
}


// Reference entry 10b9eba0; body size 7 bytes.
#line 1 "ENTRY_10b9eba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10b9eba0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10b9ebb0; body size 34 bytes.
#line 1 "ENTRY_10b9ebb0"

__declspec(naked) void FUN_10b9ebb0(void)

{
  __asm cmp dword ptr [esp + 8], 3
  __asm jb 0x10b9ebcf
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax], 0xff
  __asm jne 0x10b9ebcf
  __asm cmp byte ptr [eax + 1], 0xd8
  __asm jne 0x10b9ebcf
  __asm cmp byte ptr [eax + 2], 0xff
  __asm jne 0x10b9ebcf
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10b9f030; body size 10 bytes.
#line 1 "ENTRY_10b9f030"

__declspec(naked) void FUN_10b9f030(void)

{
  __asm mov al, byte ptr [esp + 4]
  __asm mov byte ptr [LAB_122e8a30], al
  __asm ret
}



// Reference entry 10b9f040; body size 4 bytes.
#line 1 "ENTRY_10b9f040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10b9f040(int param_1)

{
  return (float10)((float10)*(float *)(param_1 + 8));
}


// Reference entry 10b9f050; body size 3 bytes.
#line 1 "ENTRY_10b9f050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

float10 __fastcall FUN_10b9f050(float *param_1)

{
  return (float10)((float10)*param_1);
}


// Reference entry 10b9f060; body size 6 bytes.
#line 1 "ENTRY_10b9f060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f060(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b9f070; body size 6 bytes.
#line 1 "ENTRY_10b9f070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f070(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b9f080; body size 6 bytes.
#line 1 "ENTRY_10b9f080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f080(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b9f090; body size 6 bytes.
#line 1 "ENTRY_10b9f090"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f090(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b9f0a0; body size 6 bytes.
#line 1 "ENTRY_10b9f0a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f0a0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b9f0b0; body size 6 bytes.
#line 1 "ENTRY_10b9f0b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f0b0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10b9f0c0; body size 6 bytes.
#line 1 "ENTRY_10b9f0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f0c0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b9f0d0; body size 6 bytes.
#line 1 "ENTRY_10b9f0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f0d0(void)

{
  return (undefined4)(0xccccccc);
}


// Reference entry 10b9f450; body size 107 bytes.
#line 1 "ENTRY_10b9f450"

__declspec(naked) void FUN_10b9f450(void)

{
  __asm push edi
  __asm mov edi, ecx
  __asm cmp dword ptr [edi + 0x40], 0x18
  __asm jbe 0x10b9f4b7
  __asm mov eax, dword ptr [edi + 0xc8]
  __asm cmp byte ptr [eax], 0x89
  __asm jne 0x10b9f4b7
  __asm cmp byte ptr [eax + 1], 0x50
  __asm jne 0x10b9f4b7
  __asm cmp byte ptr [eax + 2], 0x4e
  __asm jne 0x10b9f4b7
  __asm cmp byte ptr [eax + 3], 0x47
  __asm jne 0x10b9f4b7
  __asm cmp byte ptr [eax + 0xc], 0x49
  __asm jne 0x10b9f4b7
  __asm cmp byte ptr [eax + 0xd], 0x48
  __asm jne 0x10b9f4b7
  __asm cmp byte ptr [eax + 0xe], 0x44
  __asm jne 0x10b9f4b7
  __asm cmp byte ptr [eax + 0xf], 0x52
  __asm jne 0x10b9f4b7
  __asm push dword ptr [eax + 0x10]
  __asm call dword ptr [LAB_122fc64c]
  __asm mov dword ptr [edi + 0x44], eax
  __asm mov eax, dword ptr [edi + 0xc8]
  __asm push dword ptr [eax + 0x14]
  __asm call dword ptr [LAB_122fc64c]
  __asm mov dword ptr [edi + 0x48], eax
  __asm mov al, 1
  __asm _emit 0xc7 __asm _emit 0x47 __asm _emit 0x4c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop edi
  __asm ret
  __asm xor al, al
  __asm pop edi
  __asm ret
}



// Reference entry 10b9f5f0; body size 5 bytes.
#line 1 "ENTRY_10b9f5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f5f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9f600; body size 5 bytes.
#line 1 "ENTRY_10b9f600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10b9f600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10b9f610; body size 3 bytes.
#line 1 "ENTRY_10b9f610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f610(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b9f620; body size 3 bytes.
#line 1 "ENTRY_10b9f620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f620(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b9f630; body size 3 bytes.
#line 1 "ENTRY_10b9f630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f630(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b9f640; body size 3 bytes.
#line 1 "ENTRY_10b9f640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f640(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b9f650; body size 3 bytes.
#line 1 "ENTRY_10b9f650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f650(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b9f660; body size 3 bytes.
#line 1 "ENTRY_10b9f660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10b9f660(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10b9fbf0; body size 28 bytes.
#line 1 "ENTRY_10b9fbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fbf0(undefined4 *param_1)

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


// Reference entry 10b9fc20; body size 28 bytes.
#line 1 "ENTRY_10b9fc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fc20(undefined4 *param_1)

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


// Reference entry 10b9fc50; body size 28 bytes.
#line 1 "ENTRY_10b9fc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fc50(undefined4 *param_1)

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


// Reference entry 10b9fc80; body size 28 bytes.
#line 1 "ENTRY_10b9fc80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fc80(undefined4 *param_1)

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


// Reference entry 10b9fcb0; body size 28 bytes.
#line 1 "ENTRY_10b9fcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fcb0(undefined4 *param_1)

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


// Reference entry 10b9fce0; body size 28 bytes.
#line 1 "ENTRY_10b9fce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fce0(undefined4 *param_1)

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


// Reference entry 10b9fd10; body size 28 bytes.
#line 1 "ENTRY_10b9fd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fd10(undefined4 *param_1)

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


// Reference entry 10b9fd40; body size 20 bytes.
#line 1 "ENTRY_10b9fd40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10b9fd40(int *param_1)

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


// Reference entry 10ba0ad0; body size 27 bytes.
#line 1 "ENTRY_10ba0ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ba0ad0(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x8040,param_2,0x4002);
  return;
}


// Reference entry 10ba0b00; body size 10 bytes.
#line 1 "ENTRY_10ba0b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ba0b00(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x78) = (undefined4)(param_2);
  return;
}


// Reference entry 10ba0b10; body size 10 bytes.
#line 1 "ENTRY_10ba0b10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ba0b10(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x38) = (undefined4)(param_2);
  return;
}


// Reference entry 10ba0b20; body size 10 bytes.
#line 1 "ENTRY_10ba0b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ba0b20(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x50) = (undefined4)(param_2);
  return;
}


// Reference entry 10ba0b90; body size 49 bytes.
#line 1 "ENTRY_10ba0b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10ba0b90(undefined4 param_2)
{
  int param_1 = (int )this;
  thunk_FUN_1106a8d0(param_1 + 0x403e,param_2,0x4002);
  thunk_FUN_1106a8d0(param_1 + 0x3c,param_2,0x4002);
  return;
}


// Reference entry 10ba0bd0; body size 9 bytes.
#line 1 "ENTRY_10ba0bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba0bd0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10ba0be0; body size 9 bytes.
#line 1 "ENTRY_10ba0be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba0be0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10ba1240; body size 267 bytes.
#line 1 "ENTRY_10ba1240"

__declspec(naked) void FUN_10ba1240(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov edx, offset LAB_1188e740
  __asm mov dword ptr [esp], ecx
  __asm push ebx
  __asm nop
  __asm mov bl, byte ptr [eax]
  __asm cmp bl, byte ptr [edx]
  __asm jne 0x10ba1270
  __asm test bl, bl
  __asm je 0x10ba126c
  __asm mov cl, byte ptr [eax + 1]
  __asm cmp cl, byte ptr [edx + 1]
  __asm jne 0x10ba1270
  __asm add eax, 2
  __asm add edx, 2
  __asm test cl, cl
  __asm jne 0x10ba1250
  __asm xor eax, eax
  __asm jmp 0x10ba1275
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm jne LAB_10ba1346
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm xor ebp, ebp
  __asm push edi
  __asm mov dword ptr [esp + 0x18], ebp
  __asm mov edx, dword ptr [esi]
  __asm test edx, edx
  __asm je 0x10ba130a
  __asm mov ecx, offset LAB_1190ffb0
  __asm mov eax, edx
  __asm mov bl, byte ptr [eax]
  __asm cmp bl, byte ptr [ecx]
  __asm jne 0x10ba12b7
  __asm test bl, bl
  __asm je 0x10ba12b3
  __asm mov bl, byte ptr [eax + 1]
  __asm cmp bl, byte ptr [ecx + 1]
  __asm jne 0x10ba12b7
  __asm add eax, 2
  __asm add ecx, 2
  __asm test bl, bl
  __asm jne 0x10ba1297
  __asm xor eax, eax
  __asm jmp 0x10ba12bc
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm jne 0x10ba12c5
  __asm mov ebp, dword ptr [esi + 4]
  __asm jmp 0x10ba1300
  __asm mov eax, offset LAB_1190ffb8
  __asm nop word ptr [eax + eax]
  __asm mov cl, byte ptr [edx]
  __asm cmp cl, byte ptr [eax]
  __asm jne 0x10ba12f0
  __asm test cl, cl
  __asm je 0x10ba12ec
  __asm mov cl, byte ptr [edx + 1]
  __asm cmp cl, byte ptr [eax + 1]
  __asm jne 0x10ba12f0
  __asm add edx, 2
  __asm add eax, 2
  __asm test cl, cl
  __asm jne 0x10ba12d0
  __asm xor eax, eax
  __asm jmp 0x10ba12f5
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm jne 0x10ba1300
  __asm mov eax, dword ptr [esi + 4]
  __asm mov dword ptr [esp + 0x18], eax
  __asm mov edx, dword ptr [esi + 8]
  __asm add esi, 8
  __asm test edx, edx
  __asm jne 0x10ba1290
  __asm mov esi, dword ptr [LAB_122fc6c4]
  __asm xor ebx, ebx
  __asm xor edi, edi
  __asm test ebp, ebp
  __asm je 0x10ba1323
  __asm push 0xa
  __asm push edi
  __asm push ebp
  __asm call esi
  __asm add esp, 0xc
  __asm mov ebx, eax
  __asm cmp dword ptr [esp + 0x18], edi
  __asm je 0x10ba1335
  __asm push 0xa
  __asm push 0
  __asm push ebp
  __asm call esi
  __asm add esp, 0xc
  __asm mov edi, eax
  __asm mov ecx, dword ptr [esp + 0x10]
  __asm push edi
  __asm push ebx
  __asm mov ecx, dword ptr [ecx + 8]
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10ba1390; body size 264 bytes.
#line 1 "ENTRY_10ba1390"

__declspec(naked) void FUN_10ba1390(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm mov ecx, offset LAB_1188e740
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x10]
  __asm nop
  __asm mov dl, byte ptr [eax]
  __asm cmp dl, byte ptr [ecx]
  __asm jne 0x10ba13c0
  __asm test dl, dl
  __asm je 0x10ba13bc
  __asm mov dl, byte ptr [eax + 1]
  __asm cmp dl, byte ptr [ecx + 1]
  __asm jne 0x10ba13c0
  __asm add eax, 2
  __asm add ecx, 2
  __asm test dl, dl
  __asm jne 0x10ba13a0
  __asm xor eax, eax
  __asm jmp 0x10ba13c5
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm jne LAB_10ba1496
  __asm mov eax, dword ptr [esi]
  __asm push ebx
  __asm push ebp
  __asm xor ebp, ebp
  __asm mov dword ptr [esp + 0x18], ebp
  __asm push edi
  __asm test eax, eax
  __asm je LAB_10ba145a
  __asm mov edx, offset LAB_1190ffb0
  __asm mov ecx, eax
  __asm mov bl, byte ptr [ecx]
  __asm cmp bl, byte ptr [edx]
  __asm jne 0x10ba1407
  __asm test bl, bl
  __asm je 0x10ba1403
  __asm mov bl, byte ptr [ecx + 1]
  __asm cmp bl, byte ptr [edx + 1]
  __asm jne 0x10ba1407
  __asm add ecx, 2
  __asm add edx, 2
  __asm test bl, bl
  __asm jne 0x10ba13e7
  __asm xor ecx, ecx
  __asm jmp 0x10ba140c
  __asm sbb ecx, ecx
  __asm or ecx, 1
  __asm test ecx, ecx
  __asm jne 0x10ba1415
  __asm mov ebp, dword ptr [esi + 4]
  __asm jmp 0x10ba1450
  __asm mov ecx, offset LAB_1190ffb8
  __asm nop word ptr [eax + eax]
  __asm mov dl, byte ptr [eax]
  __asm cmp dl, byte ptr [ecx]
  __asm jne 0x10ba1440
  __asm test dl, dl
  __asm je 0x10ba143c
  __asm mov dl, byte ptr [eax + 1]
  __asm cmp dl, byte ptr [ecx + 1]
  __asm jne 0x10ba1440
  __asm add eax, 2
  __asm add ecx, 2
  __asm test dl, dl
  __asm jne 0x10ba1420
  __asm xor eax, eax
  __asm jmp 0x10ba1445
  __asm sbb eax, eax
  __asm or eax, 1
  __asm test eax, eax
  __asm jne 0x10ba1450
  __asm mov ecx, dword ptr [esi + 4]
  __asm mov dword ptr [esp + 0x1c], ecx
  __asm mov eax, dword ptr [esi + 8]
  __asm add esi, 8
  __asm test eax, eax
  __asm jne 0x10ba13e0
  __asm mov esi, dword ptr [LAB_122fc6c4]
  __asm xor ebx, ebx
  __asm xor edi, edi
  __asm test ebp, ebp
  __asm je 0x10ba1473
  __asm push 0xa
  __asm push edi
  __asm push ebp
  __asm call esi
  __asm add esp, 0xc
  __asm mov ebx, eax
  __asm cmp dword ptr [esp + 0x1c], edi
  __asm je 0x10ba1485
  __asm push 0xa
  __asm push 0
  __asm push ebp
  __asm call esi
  __asm add esp, 0xc
  __asm mov edi, eax
  __asm mov ecx, dword ptr [esp + 0x14]
  __asm push edi
  __asm push ebx
  __asm mov ecx, dword ptr [ecx + 8]
  __asm mov edx, dword ptr [ecx]
  __asm call dword ptr [edx + 4]
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm pop esi
  __asm ret
}



// Reference entry 10ba1ab0; body size 4 bytes.
#line 1 "ENTRY_10ba1ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba1ab0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10ba1ac0; body size 18 bytes.
#line 1 "ENTRY_10ba1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1ac0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1ae0; body size 18 bytes.
#line 1 "ENTRY_10ba1ae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1ae0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1b00; body size 25 bytes.
#line 1 "ENTRY_10ba1b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1b00(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1b20; body size 22 bytes.
#line 1 "ENTRY_10ba1b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba1b20(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1b40; body size 22 bytes.
#line 1 "ENTRY_10ba1b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba1b40(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1b60; body size 22 bytes.
#line 1 "ENTRY_10ba1b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba1b60(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1b80; body size 52 bytes.
#line 1 "ENTRY_10ba1b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba1b80(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1bd0; body size 32 bytes.
#line 1 "ENTRY_10ba1bd0"

__declspec(naked) void FUN_10ba1bd0(void)

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



// Reference entry 10ba1c00; body size 22 bytes.
#line 1 "ENTRY_10ba1c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba1c00(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1c20; body size 22 bytes.
#line 1 "ENTRY_10ba1c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba1c20(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1c40; body size 18 bytes.
#line 1 "ENTRY_10ba1c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1c40(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1c60; body size 18 bytes.
#line 1 "ENTRY_10ba1c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba1c60(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba1f90; body size 214 bytes.
#line 1 "ENTRY_10ba1f90"

__declspec(naked) void FUN_10ba1f90(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov edx, dword ptr [esp + 8]
  __asm push ebp
  __asm mov ebp, ecx
  __asm mov ecx, dword ptr [eax + 0x10]
  __asm cmp ecx, edx
  __asm jb LAB_10ba205f
  __asm sub ecx, edx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm cmp ecx, esi
  __asm cmovb esi, ecx
  __asm cmp dword ptr [eax + 0x14], 0x10
  __asm jb 0x10ba1fba
  __asm mov eax, dword ptr [eax]
  __asm push ebx
  __asm lea ebx, [eax + edx]
  __asm mov dword ptr [esp + 0x10], ebx
  __asm push edi
  __asm cmp esi, 7
  __asm jbe 0x10ba1fec
  __asm mov dl, byte ptr [esp + 0x24]
  __asm mov eax, 7
  __asm mov ch, byte ptr [esp + 0x20]
  __asm mov cl, byte ptr [eax + ebx]
  __asm cmp dl, cl
  __asm je 0x10ba1fe0
  __asm cmp ch, cl
  __asm jne 0x10ba2058
  __asm inc eax
  __asm cmp eax, esi
  __asm jb 0x10ba1fd5
  __asm mov esi, 7
  __asm jmp 0x10ba1ff2
  __asm xor edx, edx
  __asm test esi, esi
  __asm je 0x10ba203b
  __asm lea edi, [ebx + esi]
  __asm xor ecx, ecx
  __asm mov bh, byte ptr [esp + 0x24]
  __asm xor esi, esi
  __asm xor edx, edx
  __asm nop
  __asm mov bl, byte ptr [edi - 1]
  __asm dec edi
  __asm xor eax, eax
  __asm cmp bh, bl
  __asm sete al
  __asm shl eax, cl
  __asm or esi, eax
  __asm cmp bh, bl
  __asm je 0x10ba2019
  __asm cmp byte ptr [esp + 0x20], bl
  __asm jne 0x10ba2058
  __asm inc ecx
  __asm cmp ecx, 0x20
  __asm jne 0x10ba2028
  __asm mov dword ptr [ebp + edx*4], esi
  __asm inc edx
  __asm xor esi, esi
  __asm xor ecx, ecx
  __asm cmp dword ptr [esp + 0x14], edi
  __asm jne 0x10ba2000
  __asm test ecx, ecx
  __asm je 0x10ba2037
  __asm mov dword ptr [ebp + edx*4], esi
  __asm inc edx
  __asm test edx, edx
  __asm jne 0x10ba204f
  __asm shl edx, 2
  __asm mov ecx, 4
  __asm sub ecx, edx
  __asm shr ecx, 2
  __asm xor eax, eax
  __asm lea edi, [edx + ebp]
  __asm _emit 0xf3 __asm _emit 0xab
  __asm pop edi
  __asm pop ebx
  __asm pop esi
  __asm mov eax, ebp
  __asm pop ebp
  __asm ret 0x14
  __asm mov ecx, ebp
  __asm call LAB_10037ce0
  __asm mov ecx, ebp
  __asm call LAB_10035805
}



// Reference entry 10ba20a0; body size 22 bytes.
#line 1 "ENTRY_10ba20a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba20a0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba20c0; body size 22 bytes.
#line 1 "ENTRY_10ba20c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba20c0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba2120; body size 25 bytes.
#line 1 "ENTRY_10ba2120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba2120(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba2140; body size 106 bytes.
#line 1 "ENTRY_10ba2140"

__declspec(naked) void FUN_10ba2140(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], LAB_11910b44
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ba21a1
  __asm cmp ecx, edi
  __asm jne 0x10ba2197
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ba21a1
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



// Reference entry 10ba22e0; body size 54 bytes.
#line 1 "ENTRY_10ba22e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba22e0(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(0);
  param_1[2] = (undefined4)(0);
  param_1[3] = (undefined4)(0);
  param_1[4] = (undefined4)(0);
  param_1[5] = (undefined4)(0);
  param_1[6] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba2330; body size 34 bytes.
#line 1 "ENTRY_10ba2330"

__declspec(naked) void FUN_10ba2330(void)

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



// Reference entry 10ba2360; body size 91 bytes.
#line 1 "ENTRY_10ba2360"

__declspec(naked) void FUN_10ba2360(void)

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
  __asm je 0x10ba2396
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10ba23ad
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



// Reference entry 10ba23e0; body size 26 bytes.
#line 1 "ENTRY_10ba23e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ba23e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10ba2400; body size 25 bytes.
#line 1 "ENTRY_10ba2400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba2400(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  undefined4 uVar1;
  
  *param_1 = (undefined4)(0);
  uVar1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(0);
  *param_1 = (undefined4)(uVar1);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba2420; body size 26 bytes.
#line 1 "ENTRY_10ba2420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ba2420(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10ba2440; body size 26 bytes.
#line 1 "ENTRY_10ba2440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10ba2440(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10ba2540; body size 78 bytes.
#line 1 "ENTRY_10ba2540"

__declspec(naked) void FUN_10ba2540(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10ba2569
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10ba2580
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



// Reference entry 10ba2620; body size 78 bytes.
#line 1 "ENTRY_10ba2620"

__declspec(naked) void FUN_10ba2620(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10ba2649
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10ba2660
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



// Reference entry 10ba2690; body size 12 bytes.
#line 1 "ENTRY_10ba2690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10ba2690(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ba26a0; body size 3 bytes.
#line 1 "ENTRY_10ba26a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba26a0(void)

{
  return;
}


// Reference entry 10ba26b0; body size 3 bytes.
#line 1 "ENTRY_10ba26b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba26b0(void)

{
  return;
}


// Reference entry 10ba26c0; body size 3 bytes.
#line 1 "ENTRY_10ba26c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba26c0(void)

{
  return;
}


// Reference entry 10ba26d0; body size 25 bytes.
#line 1 "ENTRY_10ba26d0"

__declspec(naked) void FUN_10ba26d0(void)

{
  __asm push 0x2c
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [eax], eax
  __asm mov dword ptr [eax + 4], eax
  __asm mov dword ptr [eax + 8], eax
  __asm mov word ptr [eax + 0xc], 0x101
  __asm ret
}



// Reference entry 10ba26f0; body size 25 bytes.
#line 1 "ENTRY_10ba26f0"

__declspec(naked) void FUN_10ba26f0(void)

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



// Reference entry 10ba2740; body size 40 bytes.
#line 1 "ENTRY_10ba2740"

__declspec(naked) void FUN_10ba2740(void)

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



// Reference entry 10ba2780; body size 182 bytes.
#line 1 "ENTRY_10ba2780"

__declspec(naked) void FUN_10ba2780(void)

{
  __asm push ecx
  __asm push ebx
  __asm mov bh, byte ptr [esp + 0x18]
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 0x10], edi
  __asm cmp esi, 7
  __asm jbe 0x10ba27bc
  __asm mov dl, byte ptr [esp + 0x20]
  __asm mov eax, 7
  __asm mov cl, byte ptr [eax + ebp]
  __asm cmp bh, cl
  __asm je 0x10ba27b0
  __asm cmp dl, cl
  __asm jne 0x10ba282e
  __asm inc eax
  __asm cmp eax, esi
  __asm jb 0x10ba27a5
  __asm mov esi, 7
  __asm jmp 0x10ba27c2
  __asm xor edx, edx
  __asm test esi, esi
  __asm je 0x10ba280f
  __asm lea edi, [esi + ebp]
  __asm xor ecx, ecx
  __asm xor esi, esi
  __asm xor edx, edx
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x44 __asm _emit 0x00 __asm _emit 0x00
  __asm mov bl, byte ptr [edi - 1]
  __asm dec edi
  __asm xor eax, eax
  __asm cmp bh, bl
  __asm sete al
  __asm shl eax, cl
  __asm or esi, eax
  __asm cmp bh, bl
  __asm je 0x10ba27e9
  __asm cmp byte ptr [esp + 0x20], bl
  __asm jne 0x10ba282a
  __asm mov eax, dword ptr [esp + 0x10]
  __asm inc ecx
  __asm cmp ecx, 0x20
  __asm jne 0x10ba27fb
  __asm mov dword ptr [eax + edx*4], esi
  __asm inc edx
  __asm xor esi, esi
  __asm xor ecx, ecx
  __asm cmp ebp, edi
  __asm jne 0x10ba27d0
  __asm test ecx, ecx
  __asm je 0x10ba2807
  __asm mov dword ptr [eax + edx*4], esi
  __asm inc edx
  __asm test edx, edx
  __asm jne 0x10ba2822
  __asm mov edi, dword ptr [esp + 0x10]
  __asm shl edx, 2
  __asm mov ecx, 4
  __asm sub ecx, edx
  __asm xor eax, eax
  __asm shr ecx, 2
  __asm add edi, edx
  __asm _emit 0xf3 __asm _emit 0xab
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x10
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov ecx, edi
  __asm call LAB_10037ce0
  __asm _emit 0xcc
}



// Reference entry 10ba2870; body size 13 bytes.
#line 1 "ENTRY_10ba2870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba2870(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ba2880; body size 13 bytes.
#line 1 "ENTRY_10ba2880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba2880(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ba2890; body size 13 bytes.
#line 1 "ENTRY_10ba2890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba2890(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ba28a0; body size 13 bytes.
#line 1 "ENTRY_10ba28a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba28a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10ba28b0; body size 3 bytes.
#line 1 "ENTRY_10ba28b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba28b0(void)

{
  return;
}


// Reference entry 10ba28c0; body size 3 bytes.
#line 1 "ENTRY_10ba28c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba28c0(void)

{
  return;
}


// Reference entry 10ba28d0; body size 33 bytes.
#line 1 "ENTRY_10ba28d0"

__declspec(naked) void FUN_10ba28d0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp esi, edi
  __asm je 0x10ba28ee
  __asm nop
  __asm mov ecx, esi
  __asm call LAB_1007b0d5
  __asm add esi, 0x24
  __asm cmp esi, edi
  __asm jne 0x10ba28e0
  __asm pop edi
  __asm pop esi
  __asm ret
}



// Reference entry 10ba2ac0; body size 23 bytes.
#line 1 "ENTRY_10ba2ac0"

__declspec(naked) void FUN_10ba2ac0(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_100311d8
  __asm add dword ptr [esi + 4], 0x24
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ba2c30; body size 23 bytes.
#line 1 "ENTRY_10ba2c30"

__declspec(naked) void FUN_10ba2c30(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_100311d8
  __asm add dword ptr [esi + 4], 0x24
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ba2ee0; body size 118 bytes.
#line 1 "ENTRY_10ba2ee0"

__declspec(naked) void FUN_10ba2ee0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [ecx]
  __asm mov edx, ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov ecx, eax
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10ba2f23
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebp]
  __asm nop word ptr [eax + eax]
  __asm mov esi, dword ptr [ecx + 0x10]
  __asm cmp esi, edi
  __asm jge 0x10ba2f0c
  __asm mov ecx, dword ptr [ecx + 8]
  __asm jmp 0x10ba2f1b
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba2f17
  __asm cmp edi, esi
  __asm cmovl edx, ecx
  __asm mov ebx, ecx
  __asm mov ecx, dword ptr [ecx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm je 0x10ba2f00
  __asm pop edi
  __asm pop esi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10ba2f2b
  __asm mov eax, dword ptr [edx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10ba2f48
  __asm mov ecx, dword ptr [ebp]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jge 0x10ba2f3f
  __asm mov edx, eax
  __asm mov eax, dword ptr [eax]
  __asm jmp 0x10ba2f42
  __asm mov eax, dword ptr [eax + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ba2f34
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop ebp
  __asm mov dword ptr [eax], ebx
  __asm mov dword ptr [eax + 4], edx
  __asm pop ebx
  __asm ret 8
}



// Reference entry 10ba2f80; body size 118 bytes.
#line 1 "ENTRY_10ba2f80"

__declspec(naked) void FUN_10ba2f80(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [ecx]
  __asm mov edx, ebx
  __asm push ebp
  __asm mov ebp, dword ptr [esp + 0x10]
  __asm mov eax, dword ptr [ebx + 4]
  __asm mov ecx, eax
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10ba2fc3
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [ebp]
  __asm nop word ptr [eax + eax]
  __asm mov esi, dword ptr [ecx + 0x10]
  __asm cmp esi, edi
  __asm jge 0x10ba2fac
  __asm mov ecx, dword ptr [ecx + 8]
  __asm jmp 0x10ba2fbb
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba2fb7
  __asm cmp edi, esi
  __asm cmovl edx, ecx
  __asm mov ebx, ecx
  __asm mov ecx, dword ptr [ecx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm je 0x10ba2fa0
  __asm pop edi
  __asm pop esi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10ba2fcb
  __asm mov eax, dword ptr [edx]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10ba2fe8
  __asm mov ecx, dword ptr [ebp]
  __asm cmp ecx, dword ptr [eax + 0x10]
  __asm jge 0x10ba2fdf
  __asm mov edx, eax
  __asm mov eax, dword ptr [eax]
  __asm jmp 0x10ba2fe2
  __asm mov eax, dword ptr [eax + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ba2fd4
  __asm mov eax, dword ptr [esp + 0xc]
  __asm pop ebp
  __asm mov dword ptr [eax], ebx
  __asm mov dword ptr [eax + 4], edx
  __asm pop ebx
  __asm ret 8
}



// Reference entry 10ba33a0; body size 73 bytes.
#line 1 "ENTRY_10ba33a0"

__declspec(naked) void FUN_10ba33a0(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov dword ptr [edx], eax
  __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edx + 8], ecx
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10ba33e4
  __asm mov ecx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm mov dword ptr [edx], eax
  __asm cmp dword ptr [eax + 0x10], esi
  __asm jge 0x10ba33d0
  __asm mov eax, dword ptr [eax + 8]
  __asm xor ecx, ecx
  __asm jmp 0x10ba33da
  __asm mov dword ptr [edx + 8], eax
  __asm mov ecx, 1
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx + 4], ecx
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ba33c2
  __asm pop esi
  __asm mov eax, edx
  __asm ret 8
}



// Reference entry 10ba3400; body size 15 bytes.
#line 1 "ENTRY_10ba3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba3400(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x2c);
  return;
}


// Reference entry 10ba3420; body size 15 bytes.
#line 1 "ENTRY_10ba3420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba3420(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10ba3440; body size 15 bytes.
#line 1 "ENTRY_10ba3440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba3440(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x2c);
  return;
}


// Reference entry 10ba34e0; body size 5 bytes.
#line 1 "ENTRY_10ba34e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba34e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba34f0; body size 5 bytes.
#line 1 "ENTRY_10ba34f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba34f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3500; body size 5 bytes.
#line 1 "ENTRY_10ba3500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3500(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3510; body size 7 bytes.
#line 1 "ENTRY_10ba3510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3510(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba3640; body size 5 bytes.
#line 1 "ENTRY_10ba3640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3650; body size 5 bytes.
#line 1 "ENTRY_10ba3650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3650(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3660; body size 31 bytes.
#line 1 "ENTRY_10ba3660"

__declspec(naked) void FUN_10ba3660(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10ba367a
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10ba367a
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10ba3690; body size 31 bytes.
#line 1 "ENTRY_10ba3690"

__declspec(naked) void FUN_10ba3690(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10ba36aa
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10ba36aa
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10ba36c0; body size 212 bytes.
#line 1 "ENTRY_10ba36c0"

__declspec(naked) void FUN_10ba36c0(void)

{
  __asm push ecx
  __asm mov edx, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, 0x7fffffff
  __asm mov eax, ecx
  __asm mov ebx, dword ptr [esi + 0x10]
  __asm sub eax, ebx
  __asm mov dword ptr [esp + 8], ebx
  __asm cmp eax, edx
  __asm jb LAB_10ba378f
  __asm push ebp
  __asm mov ebp, dword ptr [esi + 0x14]
  __asm lea eax, [ebx + edx]
  __asm push edi
  __asm mov edi, eax
  __asm mov dword ptr [esp + 0x18], eax
  __asm or edi, 0xf
  __asm cmp edi, ecx
  __asm jbe 0x10ba36fa
  __asm mov edi, ecx
  __asm jmp 0x10ba3712
  __asm mov eax, ebp
  __asm _emit 0xd1 __asm _emit 0xe8
  __asm sub ecx, eax
  __asm cmp ebp, ecx
  __asm jbe 0x10ba370b
  __asm mov edi, 0x7fffffff
  __asm jmp 0x10ba3712
  __asm add eax, ebp
  __asm cmp edi, eax
  __asm cmovb edi, eax
  __asm lea eax, [edi + 1]
  __asm mov ecx, esi
  __asm push eax
  __asm call LAB_1000b73a
  __asm mov ebx, eax
  __asm mov dword ptr [esi + 0x14], edi
  __asm mov eax, dword ptr [esp + 0x18]
  __asm mov dword ptr [esi + 0x10], eax
  __asm mov eax, dword ptr [esp + 0x10]
  __asm inc eax
  __asm push eax
  __asm cmp ebp, 0x10
  __asm jb 0x10ba3779
  __asm mov edi, dword ptr [esi]
  __asm push edi
  __asm push ebx
  __asm call LAB_1148cded
  __asm lea ecx, [ebp + 1]
  __asm add esp, 0xc
  __asm cmp ecx, 0x1000
  __asm jb 0x10ba375d
  __asm mov edx, dword ptr [edi - 4]
  __asm add ecx, 0x23
  __asm sub edi, edx
  __asm lea eax, [edi - 4]
  __asm cmp eax, 0x1f
  __asm ja 0x10ba3773
  __asm mov edi, edx
  __asm push ecx
  __asm push edi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm mov dword ptr [esi], ebx
  __asm mov eax, esi
  __asm pop edi
  __asm pop ebp
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm push esi
  __asm push ebx
  __asm call LAB_1148cded
  __asm add esp, 0xc
  __asm mov dword ptr [esi], ebx
  __asm mov eax, esi
  __asm pop edi
  __asm pop ebp
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 8
  __asm call LAB_10046a33
}



// Reference entry 10ba37f0; body size 122 bytes.
#line 1 "ENTRY_10ba37f0"

__declspec(naked) void FUN_10ba37f0(void)

{
  __asm push ebp
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov ebp, ecx
  __asm cmp dword ptr [edi + 0x24], 0
  __asm je 0x10ba3865
  __asm push ebx
  __asm push esi
  __asm push 0x30
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esi], LAB_11910b44
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ba3860
  __asm cmp ecx, edi
  __asm jne 0x10ba3856
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ba3860
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



// Reference entry 10ba38a0; body size 12 bytes.
#line 1 "ENTRY_10ba38a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10ba38a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ba38b0; body size 180 bytes.
#line 1 "ENTRY_10ba38b0"

__declspec(naked) void FUN_10ba38b0(void)

{
  __asm sub esp, 0x104
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x100], eax
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x110]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x11c]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x11c]
  __asm cmp edi, ebx
  __asm jae 0x10ba392f
  __asm push 0x100
  __asm lea eax, [esp + 0x10]
  __asm push 0
  __asm push eax
  __asm call LAB_1148ce0b
  __asm mov ecx, dword ptr [esp + 0x130]
  __asm add esp, 0xc
  __asm add ecx, esi
  __asm cmp esi, ecx
  __asm je 0x10ba390e
  __asm movzx eax, byte ptr [esi]
  __asm inc esi
  __asm mov byte ptr [esp + eax + 0xc], 1
  __asm cmp esi, ecx
  __asm jne 0x10ba3901
  __asm mov esi, dword ptr [esp + 0x114]
  __asm lea edx, [esi + ebx]
  __asm lea eax, [esi + edi]
  __asm cmp eax, edx
  __asm jae 0x10ba392f
  __asm nop
  __asm movzx ecx, byte ptr [eax]
  __asm cmp byte ptr [esp + ecx + 0xc], 0
  __asm je 0x10ba394a
  __asm inc eax
  __asm cmp eax, edx
  __asm jb 0x10ba3920
  __asm pop edi
  __asm pop esi
  __asm or eax, 0xffffffff
  __asm pop ebx
  __asm mov ecx, dword ptr [esp + 0x100]
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x104
  __asm ret
  __asm mov ecx, dword ptr [esp + 0x10c]
  __asm sub eax, esi
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x104
  __asm ret
}



// Reference entry 10ba39a0; body size 80 bytes.
#line 1 "ENTRY_10ba39a0"

__declspec(naked) void FUN_10ba39a0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm push edi
  __asm cmp eax, ecx
  __asm jae 0x10ba39dd
  __asm mov edx, dword ptr [esp + 0x14]
  __asm lea edi, [edx + ecx]
  __asm lea esi, [edx + eax]
  __asm cmp esi, edi
  __asm jae 0x10ba39dd
  __asm mov ebx, dword ptr [esp + 0x24]
  __asm mov ebp, dword ptr [esp + 0x20]
  __asm movsx eax, byte ptr [esi]
  __asm push ebx
  __asm push eax
  __asm push ebp
  __asm call LAB_1148ce11
  __asm add esp, 0xc
  __asm test eax, eax
  __asm je 0x10ba39e5
  __asm inc esi
  __asm cmp esi, edi
  __asm jb 0x10ba39c6
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm or eax, 0xffffffff
  __asm pop ebx
  __asm ret
  __asm sub esi, dword ptr [esp + 0x14]
  __asm pop edi
  __asm mov eax, esi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm ret
}



// Reference entry 10ba3d30; body size 5 bytes.
#line 1 "ENTRY_10ba3d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3d30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3f60; body size 5 bytes.
#line 1 "ENTRY_10ba3f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3f60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3f70; body size 5 bytes.
#line 1 "ENTRY_10ba3f70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3f70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3f80; body size 5 bytes.
#line 1 "ENTRY_10ba3f80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3f80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3f90; body size 5 bytes.
#line 1 "ENTRY_10ba3f90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3f90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3fb0; body size 5 bytes.
#line 1 "ENTRY_10ba3fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3fb0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3fc0; body size 5 bytes.
#line 1 "ENTRY_10ba3fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3fc0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3fd0; body size 5 bytes.
#line 1 "ENTRY_10ba3fd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3fd0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3fe0; body size 5 bytes.
#line 1 "ENTRY_10ba3fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3fe0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba3ff0; body size 5 bytes.
#line 1 "ENTRY_10ba3ff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba3ff0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4000; body size 5 bytes.
#line 1 "ENTRY_10ba4000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4000(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4010; body size 5 bytes.
#line 1 "ENTRY_10ba4010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4010(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4020; body size 5 bytes.
#line 1 "ENTRY_10ba4020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4020(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4030; body size 5 bytes.
#line 1 "ENTRY_10ba4030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4030(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4040; body size 40 bytes.
#line 1 "ENTRY_10ba4040"

__declspec(naked) void FUN_10ba4040(void)

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



// Reference entry 10ba4080; body size 54 bytes.
#line 1 "ENTRY_10ba4080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba4080(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  *(undefined1*)(param_2 + 1) = (undefined1)(0);
  param_2[2] = (undefined4)(0);
  param_2[3] = (undefined4)(0);
  param_2[4] = (undefined4)(0);
  param_2[5] = (undefined4)(0);
  param_2[6] = (undefined4)(0);
  return;
}


// Reference entry 10ba40d0; body size 29 bytes.
#line 1 "ENTRY_10ba40d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba40d0(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4)

{
  *param_2 = (undefined4)(*(undefined4 *)*param_4);
  param_2[1] = (undefined4)(0);
  param_2[2] = (undefined4)(0);
  return;
}


// Reference entry 10ba4100; body size 14 bytes.
#line 1 "ENTRY_10ba4100"

__declspec(naked) void FUN_10ba4100(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_100311d8
  __asm ret
}



// Reference entry 10ba4120; body size 14 bytes.
#line 1 "ENTRY_10ba4120"

__declspec(naked) void FUN_10ba4120(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_100311d8
  __asm ret
}



// Reference entry 10ba4290; body size 14 bytes.
#line 1 "ENTRY_10ba4290"

__declspec(naked) void FUN_10ba4290(void)

{
  __asm push dword ptr [esp + 0xc]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm call LAB_10051bcc
  __asm ret
}



// Reference entry 10ba42b0; body size 3 bytes.
#line 1 "ENTRY_10ba42b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10ba42b0(void)

{
  return;
}


// Reference entry 10ba4330; body size 9 bytes.
#line 1 "ENTRY_10ba4330"

__declspec(naked) void FUN_10ba4330(void)

{
  __asm mov ecx, dword ptr [esp + 8]
  __asm jmp LAB_1007b0d5
}



// Reference entry 10ba4340; body size 86 bytes.
#line 1 "ENTRY_10ba4340"

__declspec(naked) void FUN_10ba4340(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm xor edi, edi
  __asm cmp eax, ecx
  __asm je 0x10ba4392
  __asm push esi
  __asm mov edx, dword ptr [eax + 8]
  __asm inc edi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba4377
  __asm mov edx, dword ptr [eax + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10ba4373
  __asm cmp eax, dword ptr [edx + 8]
  __asm jne 0x10ba4373
  __asm mov eax, edx
  __asm mov edx, dword ptr [edx + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba4363
  __asm mov eax, edx
  __asm jmp 0x10ba438d
  __asm mov eax, edx
  __asm mov esi, dword ptr [eax]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10ba438d
  __asm mov edx, dword ptr [esi]
  __asm mov eax, esi
  __asm mov esi, edx
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba4381
  __asm cmp eax, ecx
  __asm jne 0x10ba4350
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret
}



// Reference entry 10ba43b0; body size 86 bytes.
#line 1 "ENTRY_10ba43b0"

__declspec(naked) void FUN_10ba43b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm xor edi, edi
  __asm cmp eax, ecx
  __asm je 0x10ba4402
  __asm push esi
  __asm mov edx, dword ptr [eax + 8]
  __asm inc edi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba43e7
  __asm mov edx, dword ptr [eax + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10ba43e3
  __asm cmp eax, dword ptr [edx + 8]
  __asm jne 0x10ba43e3
  __asm mov eax, edx
  __asm mov edx, dword ptr [edx + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba43d3
  __asm mov eax, edx
  __asm jmp 0x10ba43fd
  __asm mov eax, edx
  __asm mov esi, dword ptr [eax]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10ba43fd
  __asm mov edx, dword ptr [esi]
  __asm mov eax, esi
  __asm mov esi, edx
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba43f1
  __asm cmp eax, ecx
  __asm jne 0x10ba43c0
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret
}



// Reference entry 10ba4420; body size 86 bytes.
#line 1 "ENTRY_10ba4420"

__declspec(naked) void FUN_10ba4420(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm xor edi, edi
  __asm cmp eax, ecx
  __asm je 0x10ba4472
  __asm push esi
  __asm mov edx, dword ptr [eax + 8]
  __asm inc edi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba4457
  __asm mov edx, dword ptr [eax + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10ba4453
  __asm cmp eax, dword ptr [edx + 8]
  __asm jne 0x10ba4453
  __asm mov eax, edx
  __asm mov edx, dword ptr [edx + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba4443
  __asm mov eax, edx
  __asm jmp 0x10ba446d
  __asm mov eax, edx
  __asm mov esi, dword ptr [eax]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10ba446d
  __asm mov edx, dword ptr [esi]
  __asm mov eax, esi
  __asm mov esi, edx
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10ba4461
  __asm cmp eax, ecx
  __asm jne 0x10ba4430
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret
}



// Reference entry 10ba4490; body size 40 bytes.
#line 1 "ENTRY_10ba4490"

__declspec(naked) void FUN_10ba4490(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm cmp eax, dword ptr [esi + 8]
  __asm je 0x10ba44ae
  __asm mov ecx, eax
  __asm call LAB_100311d8
  __asm add dword ptr [esi + 4], 0x24
  __asm pop esi
  __asm ret 4
  __asm push eax
  __asm call LAB_1007dd2b
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ba44d0; body size 15 bytes.
#line 1 "ENTRY_10ba44d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba44d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ba44f0; body size 15 bytes.
#line 1 "ENTRY_10ba44f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba44f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ba4510; body size 15 bytes.
#line 1 "ENTRY_10ba4510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4510(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ba4530; body size 15 bytes.
#line 1 "ENTRY_10ba4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4530(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10ba4550; body size 5 bytes.
#line 1 "ENTRY_10ba4550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4560; body size 5 bytes.
#line 1 "ENTRY_10ba4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4570; body size 5 bytes.
#line 1 "ENTRY_10ba4570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4570(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4580; body size 5 bytes.
#line 1 "ENTRY_10ba4580"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4580(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4590; body size 5 bytes.
#line 1 "ENTRY_10ba4590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4590(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba45a0; body size 5 bytes.
#line 1 "ENTRY_10ba45a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba45c0; body size 5 bytes.
#line 1 "ENTRY_10ba45c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba45d0; body size 5 bytes.
#line 1 "ENTRY_10ba45d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba45e0; body size 5 bytes.
#line 1 "ENTRY_10ba45e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba45f0; body size 5 bytes.
#line 1 "ENTRY_10ba45f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba45f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4600; body size 5 bytes.
#line 1 "ENTRY_10ba4600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4600(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4620; body size 5 bytes.
#line 1 "ENTRY_10ba4620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4620(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4630; body size 5 bytes.
#line 1 "ENTRY_10ba4630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4640; body size 6 bytes.
#line 1 "ENTRY_10ba4640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ba4640(void)

{
  return (char *)("SCIAlarmManager");
}


// Reference entry 10ba4810; body size 5 bytes.
#line 1 "ENTRY_10ba4810"

__declspec(naked) /* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

basic_istream<char,std::char_traits<char>> *
FUN_10ba4810(basic_istream<char,std::char_traits<char>> *param_1,undefined4 *param_2,
                  byte param_3)

{ __asm jmp FUN_10018b38 }


// Reference entry 10ba49f0; body size 40 bytes.
#line 1 "ENTRY_10ba49f0"

__declspec(naked) void FUN_10ba49f0(void)

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



// Reference entry 10ba4a30; body size 5 bytes.
#line 1 "ENTRY_10ba4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4a50; body size 5 bytes.
#line 1 "ENTRY_10ba4a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4a60; body size 5 bytes.
#line 1 "ENTRY_10ba4a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10ba4a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba4cf0; body size 14 bytes.
#line 1 "ENTRY_10ba4cf0"

__declspec(naked) void FUN_10ba4cf0(void)

{
  __asm push ecx
  __asm mov dword ptr [esp], ecx
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10ba4fb0; body size 27 bytes.
#line 1 "ENTRY_10ba4fb0"

__declspec(naked) void FUN_10ba4fb0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_119103bc
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10ba5060; body size 16 bytes.
#line 1 "ENTRY_10ba5060"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5060(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba50c0; body size 16 bytes.
#line 1 "ENTRY_10ba50c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba50c0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba50e0; body size 16 bytes.
#line 1 "ENTRY_10ba50e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba50e0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5100; body size 16 bytes.
#line 1 "ENTRY_10ba5100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5100(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5120; body size 16 bytes.
#line 1 "ENTRY_10ba5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5120(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5160; body size 28 bytes.
#line 1 "ENTRY_10ba5160"

__declspec(naked) void FUN_10ba5160(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11910af0
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10ba5190; body size 42 bytes.
#line 1 "ENTRY_10ba5190"

__declspec(naked) void FUN_10ba5190(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_119103bc
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11910438
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10ba51d0; body size 18 bytes.
#line 1 "ENTRY_10ba51d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba51d0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba51f0; body size 18 bytes.
#line 1 "ENTRY_10ba51f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba51f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5210; body size 3 bytes.
#line 1 "ENTRY_10ba5210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba5210(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba5220; body size 10 bytes.
#line 1 "ENTRY_10ba5220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba5220(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10ba5230; body size 23 bytes.
#line 1 "ENTRY_10ba5230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void * __fastcall FUN_10ba5230(void *param_1)

{
  memset(param_1,0,0x100);
  return (void *)(param_1);
}


// Reference entry 10ba52d0; body size 11 bytes.
#line 1 "ENTRY_10ba52d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba52d0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba52e0; body size 11 bytes.
#line 1 "ENTRY_10ba52e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba52e0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba52f0; body size 11 bytes.
#line 1 "ENTRY_10ba52f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba52f0(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5300; body size 11 bytes.
#line 1 "ENTRY_10ba5300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba5300(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5410; body size 11 bytes.
#line 1 "ENTRY_10ba5410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba5410(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5420; body size 11 bytes.
#line 1 "ENTRY_10ba5420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba5420(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5430; body size 11 bytes.
#line 1 "ENTRY_10ba5430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba5430(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5440; body size 11 bytes.
#line 1 "ENTRY_10ba5440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba5440(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5450; body size 16 bytes.
#line 1 "ENTRY_10ba5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5450(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5470; body size 16 bytes.
#line 1 "ENTRY_10ba5470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5470(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5490; body size 21 bytes.
#line 1 "ENTRY_10ba5490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10ba5490(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(param_2);
  param_1[2] = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba54b0; body size 23 bytes.
#line 1 "ENTRY_10ba54b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba54b0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba54d0; body size 3 bytes.
#line 1 "ENTRY_10ba54d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba54d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba54e0; body size 3 bytes.
#line 1 "ENTRY_10ba54e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba54e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba54f0; body size 3 bytes.
#line 1 "ENTRY_10ba54f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba54f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba5860; body size 9 bytes.
#line 1 "ENTRY_10ba5860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5860(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba59e0; body size 52 bytes.
#line 1 "ENTRY_10ba59e0"

__declspec(naked) void FUN_10ba59e0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, ecx
  __asm push 0x2c
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



// Reference entry 10ba5a30; body size 52 bytes.
#line 1 "ENTRY_10ba5a30"

__declspec(naked) void FUN_10ba5a30(void)

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



// Reference entry 10ba5ba0; body size 23 bytes.
#line 1 "ENTRY_10ba5ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba5ba0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba5bc0; body size 41 bytes.
#line 1 "ENTRY_10ba5bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 * __fastcall FUN_10ba5bc0(undefined1 *param_1)

{
  *param_1 = (undefined1)(0);
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  *(undefined4*)(param_1 + 8) = (undefined4)(0);
  *(undefined4*)(param_1 + 0xc) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x10) = (undefined4)(0);
  *(undefined4*)(param_1 + 0x14) = (undefined4)(0);
  return (undefined1 *)(param_1);
}


// Reference entry 10ba5c00; body size 42 bytes.
#line 1 "ENTRY_10ba5c00"

__declspec(naked) void FUN_10ba5c00(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11910ac8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10ba5ee0; body size 50 bytes.
#line 1 "ENTRY_10ba5ee0"

__declspec(naked) void FUN_10ba5ee0(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x08 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10ba6020; body size 23 bytes.
#line 1 "ENTRY_10ba6020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba6020(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba6040; body size 12 bytes.
#line 1 "ENTRY_10ba6040"

__declspec(naked) void FUN_10ba6040(void)

{
  __asm mov word ptr [ecx], 0
  __asm mov eax, ecx
  __asm mov byte ptr [ecx + 2], 0
  __asm ret
}



// Reference entry 10ba6050; body size 127 bytes.
#line 1 "ENTRY_10ba6050"

__declspec(naked) void FUN_10ba6050(void)

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
  __asm je 0x10ba6077
  __asm call dword ptr [eax + 0x4c]
  __asm jmp 0x10ba607a
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
  __asm push offset LAB_119102f0
  __asm push offset LAB_11910224
  __asm push ebx
  __asm mov ecx, edi
  __asm call LAB_10013336
  __asm mov dword ptr [edi], LAB_11910260
  __asm mov eax, edi
  __asm mov dword ptr [edi + 0x60], LAB_119102a8
  __asm mov dword ptr [edi + 0x46c], LAB_119102e4
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 0x18
}



// Reference entry 10ba60f0; body size 33 bytes.
#line 1 "ENTRY_10ba60f0"

__declspec(naked) void FUN_10ba60f0(void)

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
  __asm mov dword ptr [edi + 4], eax
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10ba6120; body size 31 bytes.
#line 1 "ENTRY_10ba6120"

__declspec(naked) void FUN_10ba6120(void)

{
  __asm push ecx
  __asm push esi
  __asm push dword ptr [esp + 0xc]
  __asm mov esi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm call LAB_10036c23
  __asm mov eax, dword ptr [esp + 0x10]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10ba6150; body size 21 bytes.
#line 1 "ENTRY_10ba6150"

__declspec(naked) void FUN_10ba6150(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10ba66c0; body size 9 bytes.
#line 1 "ENTRY_10ba66c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba66c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIAlarmManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba66d0; body size 9 bytes.
#line 1 "ENTRY_10ba66d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10ba66d0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjACListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10ba66e0; body size 33 bytes.
#line 1 "ENTRY_10ba66e0"

__declspec(naked) void FUN_10ba66e0(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov dword ptr [esi], edx
  __asm mov eax, dword ptr [edx]
  __asm mov eax, dword ptr [eax + 4]
  __asm mov ecx, dword ptr [eax + edx + 0x38]
  __asm test ecx, ecx
  __asm je 0x10ba66fb
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm mov eax, esi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ba6950; body size 19 bytes.
#line 1 "ENTRY_10ba6950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ba6ca0; body size 34 bytes.
#line 1 "ENTRY_10ba6ca0"

__declspec(naked) void FUN_10ba6ca0(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ba6cc0
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



// Reference entry 10ba6d60; body size 19 bytes.
#line 1 "ENTRY_10ba6d60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6d60(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 10ba6e10; body size 19 bytes.
#line 1 "ENTRY_10ba6e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6e10(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x2c);
  }
  return;
}


// Reference entry 10ba6e30; body size 19 bytes.
#line 1 "ENTRY_10ba6e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6e30(int param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    thunk_FUN_1148a50e(*(int *)(param_1 + 4),0x1c);
  }
  return;
}


// Reference entry 10ba6fb0; body size 19 bytes.
#line 1 "ENTRY_10ba6fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba6fb0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ba7170; body size 28 bytes.
#line 1 "ENTRY_10ba7170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba7170(undefined4 *param_1)

{
  undefined4 *pa_1 = (undefined4 *)param_1;
  *pa_1 = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  pa_1[24] = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  pa_1[283] = (undefined4)((uint)&ghidra_vftable_RUpnpACDestroyAlarmAIOOp);
  FUN_1005c743<>();
  return;
}


// Reference entry 10ba7440; body size 7 bytes.
#line 1 "ENTRY_10ba7440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba7440(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10ba7480; body size 18 bytes.
#line 1 "ENTRY_10ba7480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10ba7480(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10ba7730; body size 41 bytes.
#line 1 "ENTRY_10ba7730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10ba7730(SCStr *param_2)
{
  SCStr *param_1 = (SCStr *)this;
  if ((SCStr *)((param_2)) != (SCStr *)(param_1)) {
    ((SCStr *)(param_1))->int_release();
    *(undefined4*)param_1 = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(param_1))->int_addref();
  }
  *(undefined4*)(param_1 + 4) = (undefined4)(*(undefined4 *)(param_2 + 4));
  return (SCStr *)(param_1);
}


// Reference entry 10ba7770; body size 14 bytes.
#line 1 "ENTRY_10ba7770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba7770(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ba7790; body size 14 bytes.
#line 1 "ENTRY_10ba7790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba7790(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ba77b0; body size 14 bytes.
#line 1 "ENTRY_10ba77b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba77b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ba77d0; body size 14 bytes.
#line 1 "ENTRY_10ba77d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba77d0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ba77f0; body size 14 bytes.
#line 1 "ENTRY_10ba77f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba77f0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10ba7810; body size 14 bytes.
#line 1 "ENTRY_10ba7810"

__declspec(naked) void FUN_10ba7810(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx]
  __asm cmp eax, dword ptr [edx]
  __asm sete al
  __asm ret 4
}



// Reference entry 10ba7830; body size 14 bytes.
#line 1 "ENTRY_10ba7830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba7830(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ba7850; body size 14 bytes.
#line 1 "ENTRY_10ba7850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba7850(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ba7870; body size 14 bytes.
#line 1 "ENTRY_10ba7870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba7870(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ba7890; body size 14 bytes.
#line 1 "ENTRY_10ba7890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba7890(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ba78b0; body size 14 bytes.
#line 1 "ENTRY_10ba78b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10ba78b0(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10ba7b00; body size 15 bytes.
#line 1 "ENTRY_10ba7b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10ba7b00(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 0x24);
}


// Reference entry 10ba7b20; body size 3 bytes.
#line 1 "ENTRY_10ba7b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7b30; body size 3 bytes.
#line 1 "ENTRY_10ba7b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7b40; body size 3 bytes.
#line 1 "ENTRY_10ba7b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7b50; body size 3 bytes.
#line 1 "ENTRY_10ba7b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b50(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7b60; body size 8 bytes.
#line 1 "ENTRY_10ba7b60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ba7b60(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ba7b70; body size 8 bytes.
#line 1 "ENTRY_10ba7b70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ba7b70(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10ba7b80; body size 4 bytes.
#line 1 "ENTRY_10ba7b80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10ba7b80(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 4));
}


// Reference entry 10ba7b90; body size 3 bytes.
#line 1 "ENTRY_10ba7b90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7b90(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7ba0; body size 3 bytes.
#line 1 "ENTRY_10ba7ba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7ba0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7bb0; body size 3 bytes.
#line 1 "ENTRY_10ba7bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7bb0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7bc0; body size 3 bytes.
#line 1 "ENTRY_10ba7bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7bc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7bd0; body size 3 bytes.
#line 1 "ENTRY_10ba7bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7bd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7be0; body size 3 bytes.
#line 1 "ENTRY_10ba7be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba7be0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10ba7bf0; body size 6 bytes.
#line 1 "ENTRY_10ba7bf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7bf0(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10ba7c00; body size 6 bytes.
#line 1 "ENTRY_10ba7c00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c00(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10ba7c10; body size 6 bytes.
#line 1 "ENTRY_10ba7c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c10(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10ba7c20; body size 6 bytes.
#line 1 "ENTRY_10ba7c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c20(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10ba7c30; body size 6 bytes.
#line 1 "ENTRY_10ba7c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c30(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10ba7c40; body size 6 bytes.
#line 1 "ENTRY_10ba7c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10ba7c40(int *param_1)

{
  return (int)(*param_1 + 0x10);
}


// Reference entry 10ba7c80; body size 20 bytes.
#line 1 "ENTRY_10ba7c80"

__declspec(naked) void FUN_10ba7c80(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_100097af
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ba7d10; body size 20 bytes.
#line 1 "ENTRY_10ba7d10"

__declspec(naked) void FUN_10ba7d10(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_10052a3b
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ba7da0; body size 20 bytes.
#line 1 "ENTRY_10ba7da0"

__declspec(naked) void FUN_10ba7da0(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_10015a73
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ba7df0; body size 25 bytes.
#line 1 "ENTRY_10ba7df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10ba7df0(void *param_1,void *param_2,int param_3)

{
  memcpy(param_1,param_2,param_3 + 1);
  return;
}


// Reference entry 10ba7e10; body size 29 bytes.
#line 1 "ENTRY_10ba7e10"

__declspec(naked) void FUN_10ba7e10(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ba7e28
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 10ba7e40; body size 29 bytes.
#line 1 "ENTRY_10ba7e40"

__declspec(naked) void FUN_10ba7e40(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10ba7e58
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 10ba8410; body size 6 bytes.
#line 1 "ENTRY_10ba8410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10ba8410(void)

{
  return (char *)("SCAlarmManager");
}


// Reference entry 10ba8420; body size 31 bytes.
#line 1 "ENTRY_10ba8420"

__declspec(naked) void FUN_10ba8420(void)

{
  __asm push esi
  __asm push 0x2c
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



// Reference entry 10ba8450; body size 31 bytes.
#line 1 "ENTRY_10ba8450"

__declspec(naked) void FUN_10ba8450(void)

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



// Reference entry 10ba8530; body size 33 bytes.
#line 1 "ENTRY_10ba8530"

__declspec(naked) void FUN_10ba8530(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push esi
  __asm mov edi, ecx
  __asm call LAB_100533a0
  __asm mov dword ptr [edi], eax
  __asm lea ecx, [esi + esi*8]
  __asm mov dword ptr [edi + 4], eax
  __asm lea eax, [eax + ecx*4]
  __asm mov dword ptr [edi + 8], eax
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10ba8560; body size 63 bytes.
#line 1 "ENTRY_10ba8560"

__declspec(naked) void FUN_10ba8560(void)

{
  __asm mov edx, dword ptr [ecx + 8]
  __asm mov eax, 0x38e38e39
  __asm sub edx, dword ptr [ecx]
  __asm mov ecx, 0x71c71c7
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
  __asm jbe 0x10ba858f
  __asm mov eax, 0x71c71c7
  __asm pop esi
  __asm ret 4
  __asm lea eax, [edx + esi]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10ba8670; body size 14 bytes.
#line 1 "ENTRY_10ba8670"

__declspec(naked) void FUN_10ba8670(void)

{
  __asm cmp dword ptr [ecx + 4], 0x5d1745d
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10ba8690; body size 14 bytes.
#line 1 "ENTRY_10ba8690"

__declspec(naked) void FUN_10ba8690(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10ba8880; body size 8 bytes.
#line 1 "ENTRY_10ba8880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ba8880(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10ba8890; body size 29 bytes.
#line 1 "ENTRY_10ba8890"

__declspec(naked) void FUN_10ba8890(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov dword ptr [ecx + 0x10], edx
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm jb 0x10ba88a6
  __asm mov eax, dword ptr [ecx]
  __asm mov byte ptr [eax + edx], 0
  __asm ret 4
  __asm mov byte ptr [ecx + edx], 0
  __asm ret 4
}



// Reference entry 10ba88c0; body size 142 bytes.
#line 1 "ENTRY_10ba88c0"

__declspec(naked) void FUN_10ba88c0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [edi]
  __asm cmp esi, dword ptr [ebx]
  __asm jne 0x10ba891b
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ba891b
  __asm mov esi, dword ptr [ebx + 4]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10ba8902
  __asm push dword ptr [esi + 8]
  __asm mov ecx, edi
  __asm push edi
  __asm call LAB_1003061b
  __asm mov eax, esi
  __asm mov esi, dword ptr [esi]
  __asm push 0x2c
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x10ba88e2
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
  __asm je 0x10ba8948
  __asm nop
  __asm lea ecx, [esp + 0x10]
  __asm call LAB_100097af
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_1007699f
  __asm push 0x2c
  __asm push eax
  __asm call LAB_100131d8
  __asm mov esi, dword ptr [esp + 0x18]
  __asm add esp, 8
  __asm mov eax, dword ptr [esp + 0x14]
  __asm cmp esi, eax
  __asm jne 0x10ba8920
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}



// Reference entry 10ba8980; body size 51 bytes.
#line 1 "ENTRY_10ba8980"

__declspec(naked) void FUN_10ba8980(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esp + 8]
  __asm call LAB_100097af
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_1007699f
  __asm push 0x2c
  __asm push eax
  __asm call LAB_100131d8
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10ba8b60; body size 109 bytes.
#line 1 "ENTRY_10ba8b60"

__declspec(naked) void FUN_10ba8b60(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ebx, dword ptr [edi]
  __asm cmp esi, dword ptr [ebx]
  __asm jne 0x10ba8b9b
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ba8b9b
  __asm push dword ptr [ebx + 4]
  __asm push edi
  __asm call LAB_100202d9
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
  __asm je 0x10ba8bc7
  __asm nop
  __asm lea ecx, [esp + 0x10]
  __asm call LAB_10015a73
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_100072f7
  __asm push eax
  __asm push edi
  __asm call LAB_10022435
  __asm mov esi, dword ptr [esp + 0x18]
  __asm add esp, 8
  __asm mov eax, dword ptr [esp + 0x14]
  __asm cmp esi, eax
  __asm jne 0x10ba8ba0
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 8
}



// Reference entry 10ba8bf0; body size 50 bytes.
#line 1 "ENTRY_10ba8bf0"

__declspec(naked) void FUN_10ba8bf0(void)

{
  __asm push ecx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, ecx
  __asm mov dword ptr [esp + 8], esi
  __asm lea ecx, [esp + 8]
  __asm call LAB_10015a73
  __asm push esi
  __asm mov ecx, edi
  __asm call LAB_100072f7
  __asm push eax
  __asm push edi
  __asm call LAB_10022435
  __asm mov eax, dword ptr [esp + 0x10]
  __asm add esp, 8
  __asm pop edi
  __asm pop esi
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10ba9670; body size 3 bytes.
#line 1 "ENTRY_10ba9670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9670(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9680; body size 3 bytes.
#line 1 "ENTRY_10ba9680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9680(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9690; body size 3 bytes.
#line 1 "ENTRY_10ba9690"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9690(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba96a0; body size 3 bytes.
#line 1 "ENTRY_10ba96a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba96b0; body size 3 bytes.
#line 1 "ENTRY_10ba96b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba96c0; body size 3 bytes.
#line 1 "ENTRY_10ba96c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba96d0; body size 3 bytes.
#line 1 "ENTRY_10ba96d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba96e0; body size 3 bytes.
#line 1 "ENTRY_10ba96e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba96f0; body size 3 bytes.
#line 1 "ENTRY_10ba96f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba96f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9700; body size 3 bytes.
#line 1 "ENTRY_10ba9700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9700(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9710; body size 3 bytes.
#line 1 "ENTRY_10ba9710"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9710(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9720; body size 3 bytes.
#line 1 "ENTRY_10ba9720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9720(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9730; body size 3 bytes.
#line 1 "ENTRY_10ba9730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9740; body size 3 bytes.
#line 1 "ENTRY_10ba9740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9750; body size 3 bytes.
#line 1 "ENTRY_10ba9750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9760; body size 3 bytes.
#line 1 "ENTRY_10ba9760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9770; body size 3 bytes.
#line 1 "ENTRY_10ba9770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9780; body size 3 bytes.
#line 1 "ENTRY_10ba9780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba9790; body size 3 bytes.
#line 1 "ENTRY_10ba9790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba9790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba97a0; body size 3 bytes.
#line 1 "ENTRY_10ba97a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba97a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10ba97b0; body size 4 bytes.
#line 1 "ENTRY_10ba97b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10ba97b0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10ba97c0; body size 197 bytes.
#line 1 "ENTRY_10ba97c0"

__declspec(naked) void FUN_10ba97c0(void)

{
  __asm push esi
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm mov esi, ecx
  __asm cmp edi, 0x7fffffff
  __asm ja LAB_10ba9880
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x18]
  __asm test edi, edi
  __asm je LAB_10ba9870
  __asm mov eax, ebx
  __asm and eax, 6
  __asm cmp al, 6
  __asm je LAB_10ba9870
  __asm push ebp
  __asm push edi
  __asm lea ecx, [esi + 0x40]
  __asm call LAB_1000b73a
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm mov ebp, eax
  __asm push ebp
  __asm call LAB_1148cded
  __asm mov eax, ebx
  __asm lea ecx, [edi + ebp]
  __asm add esp, 0xc
  __asm mov dword ptr [esi + 0x38], ecx
  __asm and eax, 4
  __asm mov dword ptr [esp + 0x18], eax
  __asm jne 0x10ba9828
  __asm mov eax, dword ptr [esi + 0xc]
  __asm mov dword ptr [eax], ebp
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm mov dword ptr [eax], ebp
  __asm mov eax, dword ptr [esi + 0x2c]
  __asm mov dword ptr [eax], edi
  __asm test bl, 2
  __asm jne 0x10ba9863
  __asm mov eax, dword ptr [esi + 0x10]
  __asm test bl, 0x18
  __asm mov edx, dword ptr [esi + 0x38]
  __asm mov ecx, ebp
  __asm cmovne ecx, edx
  __asm sub edx, ecx
  __asm cmp dword ptr [esp + 0x18], 0
  __asm mov dword ptr [eax], ebp
  __asm mov eax, dword ptr [esi + 0x20]
  __asm mov dword ptr [eax], ecx
  __asm mov eax, dword ptr [esi + 0x30]
  __asm mov dword ptr [eax], edx
  __asm je 0x10ba9863
  __asm mov eax, dword ptr [esi + 0xc]
  __asm mov dword ptr [eax], ebp
  __asm mov eax, dword ptr [esi + 0x1c]
  __asm _emit 0xc7 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esi + 0x2c]
  __asm mov dword ptr [eax], ebp
  __asm or ebx, 1
  __asm pop ebp
  __asm mov dword ptr [esi + 0x3c], ebx
  __asm pop ebx
  __asm pop edi
  __asm pop esi
  __asm ret 0xc
  __asm mov dword ptr [esi + 0x3c], ebx
  __asm pop ebx
  __asm pop edi
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop esi
  __asm ret 0xc
  __asm call LAB_1148a066
}



// Reference entry 10ba9de0; body size 7 bytes.
#line 1 "ENTRY_10ba9de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10ba9de0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10ba9ed0; body size 34 bytes.
#line 1 "ENTRY_10ba9ed0"

__declspec(naked) void FUN_10ba9ed0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm cmp eax, esi
  __asm je 0x10ba9eec
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm movzx edx, byte ptr [eax]
  __asm inc eax
  __asm mov byte ptr [edx + ecx], 1
  __asm cmp eax, esi
  __asm jne 0x10ba9ee0
  __asm mov al, 1
  __asm pop esi
  __asm ret 8
}



// Reference entry 10ba9f00; body size 11 bytes.
#line 1 "ENTRY_10ba9f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined1 __thiscall Recovered_Bulk::m_FUN_10ba9f00(byte param_2)
{
  int param_1 = (int )this;
  return (undefined1)(*(undefined1 *)((uint)param_2 + param_1));
}


// Reference entry 10ba9f10; body size 30 bytes.
#line 1 "ENTRY_10ba9f10"

__declspec(naked) void FUN_10ba9f10(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10ba9f2b
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ba9f20
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 10ba9f40; body size 30 bytes.
#line 1 "ENTRY_10ba9f40"

__declspec(naked) void FUN_10ba9f40(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10ba9f5b
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10ba9f50
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 10baa000; body size 3 bytes.
#line 1 "ENTRY_10baa000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10baa000(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10baa010; body size 3 bytes.
#line 1 "ENTRY_10baa010"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10baa010(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10baa020; body size 3 bytes.
#line 1 "ENTRY_10baa020"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10baa020(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10baa030; body size 11 bytes.
#line 1 "ENTRY_10baa030"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10baa030(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10baa040; body size 11 bytes.
#line 1 "ENTRY_10baa040"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10baa040(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10baa050; body size 6 bytes.
#line 1 "ENTRY_10baa050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10baa050(undefined4 *param_1)

{
  *param_1 = (undefined4)(param_1[1]);
  return;
}


// Reference entry 10baa060; body size 26 bytes.
#line 1 "ENTRY_10baa060"

__declspec(naked) void FUN_10baa060(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10baa076
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10baa080; body size 26 bytes.
#line 1 "ENTRY_10baa080"

__declspec(naked) void FUN_10baa080(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10baa096
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10baa0a0; body size 76 bytes.
#line 1 "ENTRY_10baa0a0"

__declspec(naked) void FUN_10baa0a0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10baa0e7
  __asm cmp ecx, esi
  __asm jne 0x10baa0dd
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [edi + 0x24], eax
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10baa0e7
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



// Reference entry 10baa1e0; body size 10 bytes.
#line 1 "ENTRY_10baa1e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10baa1e0(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10baa1f0; body size 56 bytes.
#line 1 "ENTRY_10baa1f0"

__declspec(naked) void FUN_10baa1f0(void)

{
  __asm mov edx, ecx
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, ecx
  __asm and ecx, 0x1f
  __asm shr eax, 5
  __asm push esi
  __asm lea esi, [edx + eax*4]
  __asm mov eax, 1
  __asm shl eax, cl
  __asm cmp byte ptr [esp + 0xc], 0
  __asm mov ecx, dword ptr [esi]
  __asm je 0x10baa21c
  __asm or ecx, eax
  __asm mov eax, edx
  __asm mov dword ptr [esi], ecx
  __asm pop esi
  __asm ret 8
  __asm not eax
  __asm and eax, ecx
  __asm mov dword ptr [esi], eax
  __asm mov eax, edx
  __asm pop esi
  __asm ret 8
}



// Reference entry 10baa240; body size 32 bytes.
#line 1 "ENTRY_10baa240"

__declspec(naked) void FUN_10baa240(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, 1
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, edx
  __asm and ecx, 0x1f
  __asm shr edx, 5
  __asm shl eax, cl
  __asm test dword ptr [esi + edx*4], eax
  __asm pop esi
  __asm setne al
  __asm ret 4
}



// Reference entry 10baa610; body size 13 bytes.
#line 1 "ENTRY_10baa610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10baa610(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10baa620; body size 13 bytes.
#line 1 "ENTRY_10baa620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10baa620(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10baa670; body size 87 bytes.
#line 1 "ENTRY_10baa670"

__declspec(naked) void FUN_10baa670(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x5d1745d
  __asm ja 0x10baa6c2
  __asm imul eax, eax, 0x2c
  __asm cmp eax, 0x1000
  __asm jb 0x10baa6ad
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10baa6c2
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10baa6a7
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10baa6bd
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10baa6e0; body size 97 bytes.
#line 1 "ENTRY_10baa6e0"

__declspec(naked) void FUN_10baa6e0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 0x9249249
  __asm ja 0x10baa73c
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub eax, ecx
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10baa727
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10baa73c
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10baa721
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10baa737
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10baa7e0; body size 19 bytes.
#line 1 "ENTRY_10baa7e0"

__declspec(naked) void FUN_10baa7e0(void)

{
  __asm xor eax, eax
  __asm cmp dword ptr [ecx + eax*4], 0
  __asm jne 0x10baa7f0
  __asm add eax, 1
  __asm je 0x10baa7e2
  __asm xor al, al
  __asm ret
  __asm mov al, 1
  __asm ret
}



// Reference entry 10baa8a0; body size 7 bytes.
#line 1 "ENTRY_10baa8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10baa8a0(int param_1)

{
  return (int)(*(int *)(param_1 + 4) + -4);
}


// Reference entry 10baa8b0; body size 13 bytes.
#line 1 "ENTRY_10baa8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10baa8b0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10baa8c0; body size 13 bytes.
#line 1 "ENTRY_10baa8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10baa8c0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10baa8d0; body size 23 bytes.
#line 1 "ENTRY_10baa8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10baa8d0(int *param_1)

{
  return (int)((param_1[2] - *param_1) / 0x24);
}


// Reference entry 10baa9f0; body size 8 bytes.
#line 1 "ENTRY_10baa9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10baa9f0(int param_1)

{
  *(undefined4*)(param_1 + 0x1c) = (undefined4)(0);
  return;
}


// Reference entry 10bab090; body size 52 bytes.
#line 1 "ENTRY_10bab090"

__declspec(naked) void FUN_10bab090(void)

{
  __asm imul ecx, dword ptr [esp + 0xc], 0x2c
  __asm mov eax, dword ptr [esp + 8]
  __asm cmp ecx, 0x1000
  __asm jb 0x10bab0b3
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bab0be
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10bab0e0; body size 63 bytes.
#line 1 "ENTRY_10bab0e0"

__declspec(naked) void FUN_10bab0e0(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10bab10e
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bab119
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10bab130; body size 55 bytes.
#line 1 "ENTRY_10bab130"

__declspec(naked) void FUN_10bab130(void)

{
  __asm imul ecx, dword ptr [esp + 8], 0x2c
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10bab153
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bab160
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10bab180; body size 66 bytes.
#line 1 "ENTRY_10bab180"

__declspec(naked) void FUN_10bab180(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10bab1ae
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bab1bb
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10bab230; body size 16 bytes.
#line 1 "ENTRY_10bab230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bab230(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bab250; body size 9 bytes.
#line 1 "ENTRY_10bab250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bab250(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bab2f0; body size 32 bytes.
#line 1 "ENTRY_10bab2f0"

__declspec(naked) void FUN_10bab2f0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm test ecx, ecx
  __asm je 0x10bab30d
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}



// Reference entry 10bab350; body size 21 bytes.
#line 1 "ENTRY_10bab350"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10bab350(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCAlarmManager");
  return (SCStr *)(param_1);
}


// Reference entry 10bab3b0; body size 8 bytes.
#line 1 "ENTRY_10bab3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bab3b0(int param_1)

{
  return (bool)(*(int *)(param_1 + 4) == 0);
}


// Reference entry 10bab3c0; body size 9 bytes.
#line 1 "ENTRY_10bab3c0"

__declspec(naked) void FUN_10bab3c0(void)

{
  __asm mov eax, dword ptr [ecx]
  __asm cmp eax, dword ptr [ecx + 4]
  __asm sete al
  __asm ret
}



// Reference entry 10bab3d0; body size 11 bytes.
#line 1 "ENTRY_10bab3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bab3d0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10bab3e0; body size 11 bytes.
#line 1 "ENTRY_10bab3e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bab3e0(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*param_1);
  return;
}


// Reference entry 10baba00; body size 36 bytes.
#line 1 "ENTRY_10baba00"

__declspec(naked) void FUN_10baba00(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp dword ptr [ecx + 0x10], eax
  __asm jb 0x10baba1f
  __asm mov dword ptr [ecx + 0x10], eax
  __asm mov edx, ecx
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm jb 0x10baba16
  __asm mov edx, dword ptr [ecx]
  __asm mov byte ptr [edx + eax], 0
  __asm mov eax, ecx
  __asm ret 4
  __asm call LAB_10092c0d
}



// Reference entry 10baba90; body size 60 bytes.
#line 1 "ENTRY_10baba90"

__declspec(naked) void FUN_10baba90(void)

{
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm push esi
  __asm mov esi, ecx
  __asm jb 0x10baba9b
  __asm mov esi, dword ptr [ecx]
  __asm mov eax, dword ptr [ecx + 0x10]
  __asm mov ecx, dword ptr [esp + 0xc]
  __asm cmp ecx, eax
  __asm jae 0x10babac5
  __asm sub eax, ecx
  __asm push eax
  __asm movsx eax, byte ptr [esp + 0xc]
  __asm push eax
  __asm lea eax, [esi + ecx]
  __asm push eax
  __asm call LAB_1148ce11
  __asm add esp, 0xc
  __asm test eax, eax
  __asm je 0x10babac5
  __asm sub eax, esi
  __asm pop esi
  __asm ret 8
  __asm or eax, 0xffffffff
  __asm pop esi
  __asm ret 8
}



// Reference entry 10babae0; body size 179 bytes.
#line 1 "ENTRY_10babae0"

__declspec(naked) void FUN_10babae0(void)

{
  __asm sub esp, 0x104
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, esp
  __asm mov dword ptr [esp + 0x100], eax
  __asm push ebx
  __asm push ebp
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x114]
  __asm push edi
  __asm mov edi, esi
  __asm lea edx, [edi + 1]
  __asm mov al, byte ptr [edi]
  __asm inc edi
  __asm test al, al
  __asm jne 0x10babb04
  __asm sub edi, edx
  __asm mov ebx, ecx
  __asm cmp dword ptr [ecx + 0x14], 0x10
  __asm jb 0x10babb17
  __asm mov ebx, dword ptr [ecx]
  __asm mov ebp, dword ptr [ecx + 0x10]
  __asm cmp dword ptr [esp + 0x11c], ebp
  __asm jae 0x10babb6f
  __asm push 0x100
  __asm lea eax, [esp + 0x14]
  __asm push 0
  __asm push eax
  __asm call LAB_1148ce0b
  __asm lea ecx, [esi + edi]
  __asm add esp, 0xc
  __asm cmp esi, ecx
  __asm je 0x10babb4d
  __asm nop
  __asm movzx eax, byte ptr [esi]
  __asm inc esi
  __asm mov byte ptr [esp + eax + 0x10], 1
  __asm cmp esi, ecx
  __asm jne 0x10babb40
  __asm mov ecx, dword ptr [esp + 0x11c]
  __asm lea edx, [ebx + ebp]
  __asm add ecx, ebx
  __asm cmp ecx, edx
  __asm jae 0x10babb6f
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm movzx eax, byte ptr [ecx]
  __asm cmp byte ptr [esp + eax + 0x10], 0
  __asm je 0x10babb8d
  __asm inc ecx
  __asm cmp ecx, edx
  __asm jb 0x10babb60
  __asm or eax, 0xffffffff
  __asm mov ecx, dword ptr [esp + 0x110]
  __asm pop edi
  __asm pop esi
  __asm pop ebp
  __asm pop ebx
  __asm xor ecx, esp
  __asm call LAB_100382f3
  __asm add esp, 0x104
  __asm ret 8
  __asm sub ecx, ebx
  __asm mov eax, ecx
  __asm jmp 0x10babb72
}



// Reference entry 10bac670; body size 4 bytes.
#line 1 "ENTRY_10bac670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bac670(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bacbc0; body size 4 bytes.
#line 1 "ENTRY_10bacbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bacbc0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 8));
}


// Reference entry 10bad870; body size 6 bytes.
#line 1 "ENTRY_10bad870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bad870(void)

{
  return (char *)("SCIAlarmManager");
}


// Reference entry 10bae9c0; body size 307 bytes.
#line 1 "ENTRY_10bae9c0"

__declspec(naked) void FUN_10bae9c0(void)

{
  __asm push ebp
  __asm lea ebp, [esp - 0xc08]
  __asm sub esp, 0xc08
  __asm push -1
  __asm push offset LAB_116c40fd
  __asm _emit 0x64 __asm _emit 0xa1 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm push eax
  __asm sub esp, 0x10
  __asm mov eax, dword ptr [LAB_12126b84]
  __asm xor eax, ebp
  __asm mov dword ptr [ebp + 0xc04], eax
  __asm push ebx
  __asm push esi
  __asm push edi
  __asm push eax
  __asm lea eax, [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0xa3 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ebp + 0xc10]
  __asm mov edi, dword ptr [ebp + 0xc14]
  __asm push 0xc01
  __asm mov dword ptr [ebp - 0x1c], eax
  __asm lea eax, [ebp]
  __asm push 0
  __asm push eax
  __asm call LAB_1148ce0b
  __asm add esp, 0xc
  __asm lea ecx, [ebp - 0x10]
  __asm push offset LAB_119106c0
  __asm call LAB_1005273e
  __asm mov eax, dword ptr [edi]
  __asm mov ebx, offset LAB_1186d2ee
  __asm test eax, eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov esi, ebx
  __asm mov ecx, edi
  __asm cmovne esi, eax
  __asm call LAB_10039a68
  __asm push eax
  __asm push esi
  __asm lea ecx, [ebp - 0x10]
  __asm call LAB_1007302e
  __asm push eax
  __asm lea ecx, [ebp - 0x18]
  __asm call LAB_10036c23
  __asm lea ecx, [ebp - 0x10]
  __asm mov byte ptr [ebp - 4], 3
  __asm call LAB_1005c315
  __asm mov eax, dword ptr [ebp - 0x18]
  __asm test eax, eax
  __asm push 0xc01
  __asm cmovne ebx, eax
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xf0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm lea eax, [ebp]
  __asm mov byte ptr [ebp - 4], 2
  __asm push eax
  __asm push ebx
  __asm call LAB_1004ec47
  __asm mov ecx, eax
  __asm call LAB_1004dff4
  __asm cmp byte ptr [ebp], 0
  __asm je 0x10baeac1
  __asm lea eax, [ebp]
  __asm push eax
  __asm lea ecx, [ebp - 0x14]
  __asm call LAB_1005273e
  __asm push 0
  __asm push 0
  __asm push dword ptr [ebp - 0x1c]
  __asm lea eax, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 5
  __asm push eax
  __asm call LAB_100307b5
  __asm add esp, 0x10
  __asm lea ecx, [ebp - 0x14]
  __asm mov byte ptr [ebp - 4], 6
  __asm call LAB_1005c315
  __asm lea ecx, [ebp - 0x18]
  __asm _emit 0xc7 __asm _emit 0x45 __asm _emit 0xfc __asm _emit 0x07 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_1005c315
  __asm mov ecx, dword ptr [ebp - 0xc]
  __asm _emit 0x64 __asm _emit 0x89 __asm _emit 0x0d __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm mov ecx, dword ptr [ebp + 0xc04]
  __asm xor ecx, ebp
  __asm call LAB_100382f3
  __asm lea esp, [ebp + 0xc08]
  __asm pop ebp
  __asm ret
}



// Reference entry 10bb2290; body size 7 bytes.
#line 1 "ENTRY_10bb2290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bb2290(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10bb22a0; body size 7 bytes.
#line 1 "ENTRY_10bb22a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bb22a0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10bb22b0; body size 7 bytes.
#line 1 "ENTRY_10bb22b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bb22b0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bb24c0; body size 6 bytes.
#line 1 "ENTRY_10bb24c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb24c0(void)

{
  return (undefined4)(0x5d1745d);
}


// Reference entry 10bb24d0; body size 6 bytes.
#line 1 "ENTRY_10bb24d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb24d0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10bb24e0; body size 6 bytes.
#line 1 "ENTRY_10bb24e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb24e0(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10bb24f0; body size 6 bytes.
#line 1 "ENTRY_10bb24f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb24f0(void)

{
  return (undefined4)(0x5d1745d);
}


// Reference entry 10bb2500; body size 6 bytes.
#line 1 "ENTRY_10bb2500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb2500(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10bb2510; body size 6 bytes.
#line 1 "ENTRY_10bb2510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb2510(void)

{
  return (undefined4)(0x71c71c7);
}


// Reference entry 10bb2520; body size 19 bytes.
#line 1 "ENTRY_10bb2520"

__declspec(naked) void FUN_10bb2520(void)

{
  __asm xor eax, eax
  __asm cmp dword ptr [ecx + eax*4], 0
  __asm jne 0x10bb2530
  __asm add eax, 1
  __asm je 0x10bb2522
  __asm mov al, 1
  __asm ret
  __asm xor al, al
  __asm ret
}



// Reference entry 10bb3100; body size 5 bytes.
#line 1 "ENTRY_10bb3100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb3100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb3110; body size 5 bytes.
#line 1 "ENTRY_10bb3110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb3110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb3120; body size 5 bytes.
#line 1 "ENTRY_10bb3120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb3120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb3130; body size 5 bytes.
#line 1 "ENTRY_10bb3130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb3130(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  return;
}


// Reference entry 10bb3160; body size 3 bytes.
#line 1 "ENTRY_10bb3160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb3160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bb3170; body size 3 bytes.
#line 1 "ENTRY_10bb3170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb3170(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bb3180; body size 3 bytes.
#line 1 "ENTRY_10bb3180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb3180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bb3190; body size 40 bytes.
#line 1 "ENTRY_10bb3190"

__declspec(naked) void FUN_10bb3190(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov eax, dword ptr [esi + 4]
  __asm cmp eax, dword ptr [esi + 8]
  __asm je 0x10bb31ae
  __asm mov ecx, eax
  __asm call LAB_100311d8
  __asm add dword ptr [esi + 4], 0x24
  __asm pop esi
  __asm ret 4
  __asm push eax
  __asm call LAB_1007dd2b
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bb3370; body size 28 bytes.
#line 1 "ENTRY_10bb3370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb3370(undefined4 *param_1)

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


// Reference entry 10bb33a0; body size 28 bytes.
#line 1 "ENTRY_10bb33a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb33a0(undefined4 *param_1)

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


// Reference entry 10bb33d0; body size 28 bytes.
#line 1 "ENTRY_10bb33d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb33d0(undefined4 *param_1)

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


// Reference entry 10bb3400; body size 28 bytes.
#line 1 "ENTRY_10bb3400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb3400(undefined4 *param_1)

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


// Reference entry 10bb42c0; body size 5 bytes.
#line 1 "ENTRY_10bb42c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb42c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb42d0; body size 68 bytes.
#line 1 "ENTRY_10bb42d0"

__declspec(naked) void FUN_10bb42d0(void)

{
  __asm mov edx, ecx
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 7
  __asm jae 0x10bb430d
  __asm mov eax, ecx
  __asm and ecx, 0x1f
  __asm shr eax, 5
  __asm push esi
  __asm lea esi, [edx + eax*4]
  __asm mov eax, 1
  __asm shl eax, cl
  __asm cmp byte ptr [esp + 0xc], 0
  __asm mov ecx, dword ptr [esi]
  __asm je 0x10bb4301
  __asm or ecx, eax
  __asm mov eax, edx
  __asm mov dword ptr [esi], ecx
  __asm pop esi
  __asm ret 8
  __asm not eax
  __asm and ecx, eax
  __asm mov eax, edx
  __asm mov dword ptr [esi], ecx
  __asm pop esi
  __asm ret 8
  __asm mov ecx, edx
  __asm call LAB_10035805
}



// Reference entry 10bb4360; body size 10 bytes.
#line 1 "ENTRY_10bb4360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bb4360(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 4) = (undefined4)(param_2);
  return;
}


// Reference entry 10bb4380; body size 13 bytes.
#line 1 "ENTRY_10bb4380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bb4380(undefined1 param_2)
{
  int param_1 = (int )this;
  *(undefined1*)(param_1 + 0x178) = (undefined1)(param_2);
  return;
}


// Reference entry 10bb4390; body size 4 bytes.
#line 1 "ENTRY_10bb4390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb4390(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bb43a0; body size 4 bytes.
#line 1 "ENTRY_10bb43a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb43a0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bb43b0; body size 23 bytes.
#line 1 "ENTRY_10bb43b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bb43b0(int *param_1)

{
  return (int)((param_1[1] - *param_1) / 0x24);
}


// Reference entry 10bb4790; body size 38 bytes.
#line 1 "ENTRY_10bb4790"

__declspec(naked) void FUN_10bb4790(void)

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



// Reference entry 10bb47c0; body size 18 bytes.
#line 1 "ENTRY_10bb47c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb47c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb47e0; body size 22 bytes.
#line 1 "ENTRY_10bb47e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb47e0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb4800; body size 18 bytes.
#line 1 "ENTRY_10bb4800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb4800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb49c0; body size 38 bytes.
#line 1 "ENTRY_10bb49c0"

__declspec(naked) void FUN_10bb49c0(void)

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



// Reference entry 10bb49f0; body size 22 bytes.
#line 1 "ENTRY_10bb49f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb49f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb4a90; body size 40 bytes.
#line 1 "ENTRY_10bb4a90"

__declspec(naked) void FUN_10bb4a90(void)

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



// Reference entry 10bb4ad0; body size 40 bytes.
#line 1 "ENTRY_10bb4ad0"

__declspec(naked) void FUN_10bb4ad0(void)

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



// Reference entry 10bb4b10; body size 21 bytes.
#line 1 "ENTRY_10bb4b10"

__declspec(naked) void FUN_10bb4b10(void)

{
  __asm push ecx
  __asm _emit 0xc7 __asm _emit 0x01 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10bb4b90; body size 25 bytes.
#line 1 "ENTRY_10bb4b90"

__declspec(naked) void FUN_10bb4b90(void)

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



// Reference entry 10bb4bb0; body size 13 bytes.
#line 1 "ENTRY_10bb4bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb4bb0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bb4bc0; body size 13 bytes.
#line 1 "ENTRY_10bb4bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb4bc0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bb4bd0; body size 3 bytes.
#line 1 "ENTRY_10bb4bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb4bd0(void)

{
  return;
}


// Reference entry 10bb4d80; body size 15 bytes.
#line 1 "ENTRY_10bb4d80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb4d80(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bb4e50; body size 5 bytes.
#line 1 "ENTRY_10bb4e50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb4e50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb4e60; body size 37 bytes.
#line 1 "ENTRY_10bb4e60"

__declspec(naked) void FUN_10bb4e60(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10bb4e80
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10bb4e80
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bb5110; body size 5 bytes.
#line 1 "ENTRY_10bb5110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5110(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb5120; body size 5 bytes.
#line 1 "ENTRY_10bb5120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5120(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb5130; body size 5 bytes.
#line 1 "ENTRY_10bb5130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5130(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb5140; body size 5 bytes.
#line 1 "ENTRY_10bb5140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5140(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb5150; body size 5 bytes.
#line 1 "ENTRY_10bb5150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5150(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb5160; body size 34 bytes.
#line 1 "ENTRY_10bb5160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb5160(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10bb5190; body size 34 bytes.
#line 1 "ENTRY_10bb5190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bb5190(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  *(undefined4*)(param_2 + 8) = (undefined4)(0);
  return;
}


// Reference entry 10bb5260; body size 15 bytes.
#line 1 "ENTRY_10bb5260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5260(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bb5280; body size 15 bytes.
#line 1 "ENTRY_10bb5280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb5280(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bb52a0; body size 5 bytes.
#line 1 "ENTRY_10bb52a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb52a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb52b0; body size 5 bytes.
#line 1 "ENTRY_10bb52b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb52b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb52c0; body size 5 bytes.
#line 1 "ENTRY_10bb52c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bb52c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb52d0; body size 26 bytes.
#line 1 "ENTRY_10bb52d0"

__declspec(naked) void FUN_10bb52d0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11910f40
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bb52f0; body size 18 bytes.
#line 1 "ENTRY_10bb52f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bb52f0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb53d0; body size 16 bytes.
#line 1 "ENTRY_10bb53d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb53d0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb53f0; body size 3 bytes.
#line 1 "ENTRY_10bb53f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb53f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb5400; body size 52 bytes.
#line 1 "ENTRY_10bb5400"

__declspec(naked) void FUN_10bb5400(void)

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



// Reference entry 10bb5450; body size 9 bytes.
#line 1 "ENTRY_10bb5450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb5450(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SwfObjDeviceDiscovery_ProductListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb54c0; body size 201 bytes.
#line 1 "ENTRY_10bb54c0"

__declspec(naked) void FUN_10bb54c0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, dword ptr [esp + 0xc]
  __asm mov dword ptr [ecx + 0xc], LAB_11883984
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x18], LAB_11910e58
  __asm mov dword ptr [ecx + 0x20], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11911708
  __asm mov dword ptr [ecx + 0xc], LAB_119117c0
  __asm mov dword ptr [ecx + 0x18], LAB_119117d4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x2c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x30 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x38 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x3c __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [ecx + 0x28], LAB_118900d8
  __asm mov dword ptr [ecx + 0x34], LAB_118900e8
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x64 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x8c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x90 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x94 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0x98 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7
  __asm _emit 0x81 __asm _emit 0x9c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xa0 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x81 __asm _emit 0xa4 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10bb55c0; body size 66 bytes.
#line 1 "ENTRY_10bb55c0"

__declspec(naked) void FUN_10bb55c0(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x14]
  __asm mov ebx, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm push esi
  __asm push offset LAB_118afb08
  __asm push 5
  __asm push offset LAB_11885328
  __asm mov dword ptr [esp + 0x1c], ebx
  __asm mov dword ptr [ebx + 4], edi
  __asm mov dword ptr [ebx + 8], edi
  __asm mov dword ptr [ebx], LAB_11911b80
  __asm call LAB_100238df
  __asm add esp, 0x10
  __asm mov dword ptr [edi + 0x94], esi
  __asm mov eax, ebx
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm pop ecx
  __asm ret 8
}



// Reference entry 10bb57d0; body size 26 bytes.
#line 1 "ENTRY_10bb57d0"

__declspec(naked) void FUN_10bb57d0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119112c0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bb57f0; body size 26 bytes.
#line 1 "ENTRY_10bb57f0"

__declspec(naked) void FUN_10bb57f0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119110b0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bb5810; body size 26 bytes.
#line 1 "ENTRY_10bb5810"

__declspec(naked) void FUN_10bb5810(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11911188
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bb5830; body size 26 bytes.
#line 1 "ENTRY_10bb5830"

__declspec(naked) void FUN_10bb5830(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119119bc
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bb5850; body size 26 bytes.
#line 1 "ENTRY_10bb5850"

__declspec(naked) void FUN_10bb5850(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11910ff8
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bb5870; body size 26 bytes.
#line 1 "ENTRY_10bb5870"

__declspec(naked) void FUN_10bb5870(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11911aa4
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bb5890; body size 26 bytes.
#line 1 "ENTRY_10bb5890"

__declspec(naked) void FUN_10bb5890(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119118e0
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bb58b0; body size 9 bytes.
#line 1 "ENTRY_10bb58b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bb58b0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCSwfObjDDListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10bb58c0; body size 7 bytes.
#line 1 "ENTRY_10bb58c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb58c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5ce0; body size 7 bytes.
#line 1 "ENTRY_10bb5ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5de0; body size 7 bytes.
#line 1 "ENTRY_10bb5de0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5de0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5df0; body size 7 bytes.
#line 1 "ENTRY_10bb5df0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5df0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5e00; body size 7 bytes.
#line 1 "ENTRY_10bb5e00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5e00(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5e10; body size 7 bytes.
#line 1 "ENTRY_10bb5e10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5e10(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5e30; body size 7 bytes.
#line 1 "ENTRY_10bb5e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5e30(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb5e40; body size 7 bytes.
#line 1 "ENTRY_10bb5e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bb5e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCWizardState);
  return;
}


// Reference entry 10bb6080; body size 3 bytes.
#line 1 "ENTRY_10bb6080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6080(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bb66c0; body size 31 bytes.
#line 1 "ENTRY_10bb66c0"

__declspec(naked) void FUN_10bb66c0(void)

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



// Reference entry 10bb6710; body size 14 bytes.
#line 1 "ENTRY_10bb6710"

__declspec(naked) void FUN_10bb6710(void)

{
  __asm cmp dword ptr [ecx + 4], 0x9249249
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10bb6730; body size 3 bytes.
#line 1 "ENTRY_10bb6730"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6730(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb6740; body size 3 bytes.
#line 1 "ENTRY_10bb6740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6740(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb6750; body size 3 bytes.
#line 1 "ENTRY_10bb6750"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6750(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb6760; body size 3 bytes.
#line 1 "ENTRY_10bb6760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb6770; body size 3 bytes.
#line 1 "ENTRY_10bb6770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6770(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb6780; body size 3 bytes.
#line 1 "ENTRY_10bb6780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6780(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb6790; body size 3 bytes.
#line 1 "ENTRY_10bb6790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6790(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb67a0; body size 3 bytes.
#line 1 "ENTRY_10bb67a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb67a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bb6a40; body size 79 bytes.
#line 1 "ENTRY_10bb6a40"

__declspec(naked) void FUN_10bb6a40(void)

{
  __asm mov edx, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, dword ptr [edx + 8]
  __asm mov eax, dword ptr [esi]
  __asm mov dword ptr [edx + 8], eax
  __asm mov eax, dword ptr [esi]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10bb6a58
  __asm mov dword ptr [eax + 4], edx
  __asm mov eax, dword ptr [edx + 4]
  __asm mov dword ptr [esi + 4], eax
  __asm mov eax, dword ptr [ecx]
  __asm cmp edx, dword ptr [eax + 4]
  __asm jne 0x10bb6a71
  __asm mov dword ptr [eax + 4], esi
  __asm mov dword ptr [esi], edx
  __asm mov dword ptr [edx + 4], esi
  __asm pop esi
  __asm ret 4
  __asm mov eax, dword ptr [edx + 4]
  __asm cmp edx, dword ptr [eax]
  __asm jne 0x10bb6a83
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



// Reference entry 10bb6ab0; body size 11 bytes.
#line 1 "ENTRY_10bb6ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bb6ab0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bb6ac0; body size 83 bytes.
#line 1 "ENTRY_10bb6ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bb6ac0(int *param_2)
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


// Reference entry 10bb6f10; body size 97 bytes.
#line 1 "ENTRY_10bb6f10"

__declspec(naked) void FUN_10bb6f10(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp ecx, 0x9249249
  __asm ja 0x10bb6f6c
  __asm _emit 0x8d __asm _emit 0x04 __asm _emit 0xcd __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub eax, ecx
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10bb6f57
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10bb6f6c
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10bb6f51
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10bb6f67
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10bb77d0; body size 45 bytes.
#line 1 "ENTRY_10bb77d0"

__declspec(naked) void FUN_10bb77d0(void)

{
  __asm push ecx
  __asm push esi
  __asm push 0xc
  __asm mov esi, ecx
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm mov dword ptr [esp + 4], eax
  __asm test eax, eax
  __asm je 0x10bb77f8
  __asm mov ecx, dword ptr [esi + 8]
  __asm mov dword ptr [eax + 4], ecx
  __asm mov dword ptr [eax + 8], ecx
  __asm mov dword ptr [eax], LAB_11911188
  __asm pop esi
  __asm pop ecx
  __asm ret
  __asm xor eax, eax
  __asm pop esi
  __asm pop ecx
  __asm ret
}



// Reference entry 10bb7960; body size 63 bytes.
#line 1 "ENTRY_10bb7960"

__declspec(naked) void FUN_10bb7960(void)

{
  __asm mov eax, dword ptr [esp + 0xc]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 8]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10bb798e
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bb7999
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret
  __asm jmp dword ptr [LAB_122fc888]
}



// Reference entry 10bb79b0; body size 66 bytes.
#line 1 "ENTRY_10bb79b0"

__declspec(naked) void FUN_10bb79b0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0xc5 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm sub ecx, eax
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 2
  __asm cmp ecx, 0x1000
  __asm jb 0x10bb79de
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bb79eb
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10bb7eb0; body size 23 bytes.
#line 1 "ENTRY_10bb7eb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ SCStr * __thiscall Recovered_Bulk::m_FUN_10bb7eb0(SCStr *param_2)
{
  int param_1 = (int )this;
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)(param_1 + 0xd0));
  return (SCStr *)(param_2);
}


// Reference entry 10bbabb0; body size 17 bytes.
#line 1 "ENTRY_10bbabb0"

__declspec(naked) void FUN_10bbabb0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm push offset LAB_1187afec
  __asm call LAB_1008ca83
  __asm ret 4
}



// Reference entry 10bbabd0; body size 6 bytes.
#line 1 "ENTRY_10bbabd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbabd0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10bbabe0; body size 6 bytes.
#line 1 "ENTRY_10bbabe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbabe0(void)

{
  return (undefined4)(0x9249249);
}


// Reference entry 10bbb3a0; body size 39 bytes.
#line 1 "ENTRY_10bbb3a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bbb3a0(SCStr *param_2)
{
  int param_1 = (int )this;
  SCStr *this_;
  
  this_ = (SCStr *)((SCStr *)(param_1 + 0xd0));
  if ((SCStr *)((param_2)) != (SCStr *)(this_)) {
    ((SCStr *)(this_))->int_release();
    *(undefined4*)this_ = (undefined4)((SCStr *)(*(undefined4 *)param_2));
    ((SCStr *)(this_))->int_addref();
  }
  return;
}


// Reference entry 10bbb590; body size 27 bytes.
#line 1 "ENTRY_10bbb590"

__declspec(naked) void FUN_10bbb590(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11911cb4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10bbb5c0; body size 42 bytes.
#line 1 "ENTRY_10bbb5c0"

__declspec(naked) void FUN_10bbb5c0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11911cb4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11911d08
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bbb600; body size 42 bytes.
#line 1 "ENTRY_10bbb600"

__declspec(naked) void FUN_10bbb600(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11911cb4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11911d64
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bbb660; body size 9 bytes.
#line 1 "ENTRY_10bbb660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbb660(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINetworkManagement);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbb670; body size 63 bytes.
#line 1 "ENTRY_10bbb670"

__declspec(naked) void FUN_10bbb670(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11911cb4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [ecx], LAB_11911dc0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x0c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bbb6c0; body size 19 bytes.
#line 1 "ENTRY_10bbb6c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbb6c0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbb6e0; body size 26 bytes.
#line 1 "ENTRY_10bbb6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbb6e0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbb700; body size 26 bytes.
#line 1 "ENTRY_10bbb700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbb700(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  param_1[2] = (undefined4)(0);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbb720; body size 7 bytes.
#line 1 "ENTRY_10bbb720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbb720(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbc050; body size 8 bytes.
#line 1 "ENTRY_10bbc050"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bbc050(int param_1)

{
  return (bool)(*(int *)(param_1 + 8) != 0);
}


// Reference entry 10bbd8c0; body size 25 bytes.
#line 1 "ENTRY_10bbd8c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbd8c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbd8e0; body size 83 bytes.
#line 1 "ENTRY_10bbd8e0"

__declspec(naked) void FUN_10bbd8e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm cmp edi, dword ptr [esi]
  __asm je 0x10bbd92c
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10bbd907
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10bbd925
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



// Reference entry 10bbdb70; body size 33 bytes.
#line 1 "ENTRY_10bbdb70"

__declspec(naked) void FUN_10bbdb70(void)

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



// Reference entry 10bbdba0; body size 3 bytes.
#line 1 "ENTRY_10bbdba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbdba0(void)

{
  return;
}


// Reference entry 10bbdbb0; body size 18 bytes.
#line 1 "ENTRY_10bbdbb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bbdbb0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10bbdd80; body size 7 bytes.
#line 1 "ENTRY_10bbdd80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbdd80(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bbdd90; body size 5 bytes.
#line 1 "ENTRY_10bbdd90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbdd90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbdda0; body size 36 bytes.
#line 1 "ENTRY_10bbdda0"

__declspec(naked) void FUN_10bbdda0(void)

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



// Reference entry 10bbde00; body size 13 bytes.
#line 1 "ENTRY_10bbde00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbde00(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10bbde10; body size 3 bytes.
#line 1 "ENTRY_10bbde10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbde10(void)

{
  return;
}


// Reference entry 10bbde20; body size 36 bytes.
#line 1 "ENTRY_10bbde20"

__declspec(naked) void FUN_10bbde20(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10bbde37
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_1007d204
  __asm ret 4
}



// Reference entry 10bbde50; body size 5 bytes.
#line 1 "ENTRY_10bbde50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbde50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbde60; body size 6 bytes.
#line 1 "ENTRY_10bbde60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bbde60(void)

{
  return (char *)("SCIChirpDelegate");
}


// Reference entry 10bbde70; body size 6 bytes.
#line 1 "ENTRY_10bbde70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bbde70(void)

{
  return (char *)("SCIChirpListener");
}


// Reference entry 10bbde80; body size 27 bytes.
#line 1 "ENTRY_10bbde80"

__declspec(naked) void FUN_10bbde80(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11911f70
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10bbdef0; body size 16 bytes.
#line 1 "ENTRY_10bbdef0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdef0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbdf10; body size 9 bytes.
#line 1 "ENTRY_10bbdf10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdf10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbdf20; body size 23 bytes.
#line 1 "ENTRY_10bbdf20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdf20(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbdf40; body size 3 bytes.
#line 1 "ENTRY_10bbdf40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbdf40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbdf50; body size 23 bytes.
#line 1 "ENTRY_10bbdf50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdf50(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbdf70; body size 96 bytes.
#line 1 "ENTRY_10bbdf70"

__declspec(naked) void FUN_10bbdf70(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11911f70
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], LAB_118a38d8
  __asm mov dword ptr [ecx + 0xc], LAB_11881144
  __asm mov dword ptr [ecx], LAB_11911f94
  __asm mov dword ptr [ecx + 8], LAB_11911fb8
  __asm mov dword ptr [ecx + 0xc], LAB_11911fd4
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x20 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm pop ecx
  __asm ret
}



// Reference entry 10bbdff0; body size 9 bytes.
#line 1 "ENTRY_10bbdff0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bbdff0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIChirpListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbe000; body size 19 bytes.
#line 1 "ENTRY_10bbe000"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbe000(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbe2f0; body size 7 bytes.
#line 1 "ENTRY_10bbe2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbe2f0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbe370; body size 12 bytes.
#line 1 "ENTRY_10bbe370"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10bbe370(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10bbe380; body size 3 bytes.
#line 1 "ENTRY_10bbe380"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe380(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bbe390; body size 3 bytes.
#line 1 "ENTRY_10bbe390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe390(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bbe550; body size 49 bytes.
#line 1 "ENTRY_10bbe550"

__declspec(naked) void FUN_10bbe550(void)

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
  __asm jbe 0x10bbe571
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10bbe600; body size 3 bytes.
#line 1 "ENTRY_10bbe600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bbe600(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bbe610; body size 3 bytes.
#line 1 "ENTRY_10bbe610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe610(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbe620; body size 3 bytes.
#line 1 "ENTRY_10bbe620"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe620(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbe630; body size 3 bytes.
#line 1 "ENTRY_10bbe630"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe630(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbe640; body size 3 bytes.
#line 1 "ENTRY_10bbe640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbe640(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbe650; body size 3 bytes.
#line 1 "ENTRY_10bbe650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bbe650(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bbe6d0; body size 38 bytes.
#line 1 "ENTRY_10bbe6d0"

__declspec(naked) void FUN_10bbe6d0(void)

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



// Reference entry 10bbe700; body size 27 bytes.
#line 1 "ENTRY_10bbe700"

__declspec(naked) void FUN_10bbe700(void)

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



// Reference entry 10bbe730; body size 27 bytes.
#line 1 "ENTRY_10bbe730"

__declspec(naked) void FUN_10bbe730(void)

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



// Reference entry 10bbe7b0; body size 87 bytes.
#line 1 "ENTRY_10bbe7b0"

__declspec(naked) void FUN_10bbe7b0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10bbe802
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10bbe7ed
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10bbe802
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10bbe7e7
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10bbe7fd
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10bbe820; body size 9 bytes.
#line 1 "ENTRY_10bbe820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bbe820(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10bbe830; body size 61 bytes.
#line 1 "ENTRY_10bbe830"

__declspec(naked) void FUN_10bbe830(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10bbe859
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bbe866
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10bbe880; body size 21 bytes.
#line 1 "ENTRY_10bbe880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10bbe880(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCChirpManager");
  return (SCStr *)(param_1);
}


// Reference entry 10bbead0; body size 6 bytes.
#line 1 "ENTRY_10bbead0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bbead0(void)

{
  return (char *)("SCIChirpDelegate");
}


// Reference entry 10bbeae0; body size 6 bytes.
#line 1 "ENTRY_10bbeae0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bbeae0(void)

{
  return (char *)("SCIChirpListener");
}


// Reference entry 10bbeaf0; body size 7 bytes.
#line 1 "ENTRY_10bbeaf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bbeaf0(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10bbeb00; body size 7 bytes.
#line 1 "ENTRY_10bbeb00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bbeb00(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bbeb10; body size 6 bytes.
#line 1 "ENTRY_10bbeb10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbeb10(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bbeb20; body size 6 bytes.
#line 1 "ENTRY_10bbeb20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbeb20(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bbece0; body size 5 bytes.
#line 1 "ENTRY_10bbece0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbece0(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  return;
}


// Reference entry 10bbecf0; body size 3 bytes.
#line 1 "ENTRY_10bbecf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbecf0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bbed00; body size 3 bytes.
#line 1 "ENTRY_10bbed00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbed00(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bbed10; body size 36 bytes.
#line 1 "ENTRY_10bbed10"

__declspec(naked) void FUN_10bbed10(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10bbed27
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_1007d204
  __asm ret 4
}



// Reference entry 10bbeee0; body size 28 bytes.
#line 1 "ENTRY_10bbeee0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbeee0(undefined4 *param_1)

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


// Reference entry 10bbef10; body size 28 bytes.
#line 1 "ENTRY_10bbef10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbef10(undefined4 *param_1)

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


// Reference entry 10bbef40; body size 20 bytes.
#line 1 "ENTRY_10bbef40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbef40(int *param_1)

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


// Reference entry 10bbefc0; body size 9 bytes.
#line 1 "ENTRY_10bbefc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bbefc0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10bbf070; body size 26 bytes.
#line 1 "ENTRY_10bbf070"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bbf070(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10bbf0d0; body size 33 bytes.
#line 1 "ENTRY_10bbf0d0"

__declspec(naked) void FUN_10bbf0d0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11881068
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11912094
  __asm pop ecx
  __asm ret
}



// Reference entry 10bbf170; body size 19 bytes.
#line 1 "ENTRY_10bbf170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbf170(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bbf190; body size 3 bytes.
#line 1 "ENTRY_10bbf190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbf190(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bbf360; body size 3 bytes.
#line 1 "ENTRY_10bbf360"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bbf360(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bbf3f0; body size 28 bytes.
#line 1 "ENTRY_10bbf3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bbf3f0(undefined4 *param_1)

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


// Reference entry 10bbf440; body size 22 bytes.
#line 1 "ENTRY_10bbf440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbf440(undefined4 *param_2,undefined4 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  param_1[1] = (undefined4)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbf460; body size 22 bytes.
#line 1 "ENTRY_10bbf460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbf460(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbf5c0; body size 31 bytes.
#line 1 "ENTRY_10bbf5c0"

__declspec(naked) void FUN_10bbf5c0(void)

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



// Reference entry 10bbf5f0; body size 22 bytes.
#line 1 "ENTRY_10bbf5f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bbf5f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bbf7a0; body size 33 bytes.
#line 1 "ENTRY_10bbf7a0"

__declspec(naked) void FUN_10bbf7a0(void)

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



// Reference entry 10bbf7d0; body size 91 bytes.
#line 1 "ENTRY_10bbf7d0"

__declspec(naked) void FUN_10bbf7d0(void)

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
  __asm je 0x10bbf806
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10bbf81d
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



// Reference entry 10bbf8a0; body size 3 bytes.
#line 1 "ENTRY_10bbf8a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbf8a0(void)

{
  return;
}


// Reference entry 10bbf910; body size 13 bytes.
#line 1 "ENTRY_10bbf910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbf910(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bbf9f0; body size 83 bytes.
#line 1 "ENTRY_10bbf9f0"

__declspec(naked) void FUN_10bbf9f0(void)

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
  __asm jne 0x10bbfa3c
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0x14]
  __asm push ebx
  __asm lea ecx, [esi + 0x10]
  __asm mov dword ptr [edi], esi
  __asm call LAB_10070fbd
  __asm test al, al
  __asm je 0x10bbfa28
  __asm mov esi, dword ptr [esi + 8]
  __asm xor eax, eax
  __asm jmp 0x10bbfa32
  __asm mov dword ptr [edi + 8], esi
  __asm mov eax, 1
  __asm mov esi, dword ptr [esi]
  __asm mov dword ptr [edi + 4], eax
  __asm cmp byte ptr [esi + 0xd], 0
  __asm je 0x10bbfa12
  __asm pop ebx
  __asm mov eax, edi
  __asm pop edi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10bbfa60; body size 5 bytes.
#line 1 "ENTRY_10bbfa60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbfa60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbfb90; body size 5 bytes.
#line 1 "ENTRY_10bbfb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbfb90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbfba0; body size 37 bytes.
#line 1 "ENTRY_10bbfba0"

__declspec(naked) void FUN_10bbfba0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10bbfbc0
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10bbfbc0
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bbfe70; body size 5 bytes.
#line 1 "ENTRY_10bbfe70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbfe70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbfe80; body size 27 bytes.
#line 1 "ENTRY_10bbfe80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bbfe80(undefined4 param_1,SCStr *param_2,undefined4 param_3,undefined4 *param_4)

{
  ((SCStr *)(param_2))->m_op_ctor((SCStr *)*param_4);
  *(undefined4*)(param_2 + 4) = (undefined4)(0);
  return;
}


// Reference entry 10bbfeb0; body size 86 bytes.
#line 1 "ENTRY_10bbfeb0"

__declspec(naked) void FUN_10bbfeb0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm xor edi, edi
  __asm cmp eax, ecx
  __asm je 0x10bbff02
  __asm push esi
  __asm mov edx, dword ptr [eax + 8]
  __asm inc edi
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10bbfee7
  __asm mov edx, dword ptr [eax + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10bbfee3
  __asm cmp eax, dword ptr [edx + 8]
  __asm jne 0x10bbfee3
  __asm mov eax, edx
  __asm mov edx, dword ptr [edx + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10bbfed3
  __asm mov eax, edx
  __asm jmp 0x10bbfefd
  __asm mov eax, edx
  __asm mov esi, dword ptr [eax]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10bbfefd
  __asm mov edx, dword ptr [esi]
  __asm mov eax, esi
  __asm mov esi, edx
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10bbfef1
  __asm cmp eax, ecx
  __asm jne 0x10bbfec0
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret
}



// Reference entry 10bbff20; body size 15 bytes.
#line 1 "ENTRY_10bbff20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbff20(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  return (undefined4)(uVar1);
}


// Reference entry 10bbff40; body size 5 bytes.
#line 1 "ENTRY_10bbff40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbff40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bbff80; body size 5 bytes.
#line 1 "ENTRY_10bbff80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bbff80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc00e0; body size 18 bytes.
#line 1 "ENTRY_10bc00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc00e0(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc0180; body size 11 bytes.
#line 1 "ENTRY_10bc0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc0180(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc0190; body size 11 bytes.
#line 1 "ENTRY_10bc0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bc0190(undefined4 param_2, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc0640; body size 14 bytes.
#line 1 "ENTRY_10bc0640"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bc0640(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 == (int)(*(param_2)));
}


// Reference entry 10bc0660; body size 14 bytes.
#line 1 "ENTRY_10bc0660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ bool __thiscall Recovered_Bulk::m_FUN_10bc0660(int *param_2)
{
  int *param_1 = (int *)this;
  return (bool)(*param_1 != (int)(*(param_2)));
}


// Reference entry 10bc07d0; body size 20 bytes.
#line 1 "ENTRY_10bc07d0"

__declspec(naked) void FUN_10bc07d0(void)

{
  __asm mov edx, dword ptr [ecx]
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm mov dword ptr [esi], edx
  __asm call LAB_1009780c
  __asm mov eax, esi
  __asm pop esi
  __asm ret 8
}



// Reference entry 10bc0a70; body size 14 bytes.
#line 1 "ENTRY_10bc0a70"

__declspec(naked) void FUN_10bc0a70(void)

{
  __asm cmp dword ptr [ecx + 4], 0xaaaaaaa
  __asm je LAB_1000d4ae
  __asm ret
}



// Reference entry 10bc11b0; body size 3 bytes.
#line 1 "ENTRY_10bc11b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc11c0; body size 3 bytes.
#line 1 "ENTRY_10bc11c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc11d0; body size 3 bytes.
#line 1 "ENTRY_10bc11d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc11e0; body size 3 bytes.
#line 1 "ENTRY_10bc11e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc11f0; body size 3 bytes.
#line 1 "ENTRY_10bc11f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc11f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc1500; body size 30 bytes.
#line 1 "ENTRY_10bc1500"

__declspec(naked) void FUN_10bc1500(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10bc151b
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x00
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10bc1510
  __asm mov eax, ecx
  __asm ret
}



// Reference entry 10bc1590; body size 3 bytes.
#line 1 "ENTRY_10bc1590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bc1590(unsigned int recovered_unused_stack_0)

{
  return;
}


// Reference entry 10bc15a0; body size 11 bytes.
#line 1 "ENTRY_10bc15a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc15a0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*(undefined4 *)(param_1 + 4));
  *(undefined4*)(param_1 + 4) = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bc1650; body size 13 bytes.
#line 1 "ENTRY_10bc1650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bc1650(undefined4 *param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_2 = (undefined4)(*(undefined4 *)*param_1);
  return;
}


// Reference entry 10bc19c0; body size 60 bytes.
#line 1 "ENTRY_10bc19c0"

__declspec(naked) void FUN_10bc19c0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm lea ecx, [eax + eax*2]
  __asm mov eax, dword ptr [esp + 4]
  __asm shl ecx, 3
  __asm cmp ecx, 0x1000
  __asm jb 0x10bc19e8
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bc19f5
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10bc1a10; body size 9 bytes.
#line 1 "ENTRY_10bc1a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc1a10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(0);
  return (undefined4)(uVar1);
}


// Reference entry 10bc1e30; body size 6 bytes.
#line 1 "ENTRY_10bc1e30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc1e30(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10bc1e40; body size 6 bytes.
#line 1 "ENTRY_10bc1e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc1e40(void)

{
  return (undefined4)(0xaaaaaaa);
}


// Reference entry 10bc3680; body size 25 bytes.
#line 1 "ENTRY_10bc3680"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3680(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc36a0; body size 83 bytes.
#line 1 "ENTRY_10bc36a0"

__declspec(naked) void FUN_10bc36a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm cmp edi, dword ptr [esi]
  __asm je 0x10bc36ec
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10bc36c7
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10bc36e5
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



// Reference entry 10bc3930; body size 33 bytes.
#line 1 "ENTRY_10bc3930"

__declspec(naked) void FUN_10bc3930(void)

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



// Reference entry 10bc3960; body size 3 bytes.
#line 1 "ENTRY_10bc3960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc3960(void)

{
  return;
}


// Reference entry 10bc3970; body size 18 bytes.
#line 1 "ENTRY_10bc3970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bc3970(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10bc3b40; body size 7 bytes.
#line 1 "ENTRY_10bc3b40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc3b40(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc3b50; body size 5 bytes.
#line 1 "ENTRY_10bc3b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc3b50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc3b60; body size 36 bytes.
#line 1 "ENTRY_10bc3b60"

__declspec(naked) void FUN_10bc3b60(void)

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



// Reference entry 10bc3bc0; body size 13 bytes.
#line 1 "ENTRY_10bc3bc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc3bc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10bc3bd0; body size 3 bytes.
#line 1 "ENTRY_10bc3bd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc3bd0(void)

{
  return;
}


// Reference entry 10bc3be0; body size 36 bytes.
#line 1 "ENTRY_10bc3be0"

__declspec(naked) void FUN_10bc3be0(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10bc3bf7
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10076f1c
  __asm ret 4
}



// Reference entry 10bc3c10; body size 5 bytes.
#line 1 "ENTRY_10bc3c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc3c10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc3c20; body size 6 bytes.
#line 1 "ENTRY_10bc3c20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc3c20(void)

{
  return (char *)("SCINfcDelegate");
}


// Reference entry 10bc3c30; body size 6 bytes.
#line 1 "ENTRY_10bc3c30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc3c30(void)

{
  return (char *)("SCINfcListener");
}


// Reference entry 10bc3c40; body size 27 bytes.
#line 1 "ENTRY_10bc3c40"

__declspec(naked) void FUN_10bc3c40(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_119123c4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10bc3c70; body size 16 bytes.
#line 1 "ENTRY_10bc3c70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3c70(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc3cd0; body size 9 bytes.
#line 1 "ENTRY_10bc3cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3cd0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc3ce0; body size 23 bytes.
#line 1 "ENTRY_10bc3ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3ce0(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc3d00; body size 3 bytes.
#line 1 "ENTRY_10bc3d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc3d00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc3d10; body size 23 bytes.
#line 1 "ENTRY_10bc3d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3d10(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc3db0; body size 9 bytes.
#line 1 "ENTRY_10bc3db0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc3db0(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCINfcListener);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc3dc0; body size 100 bytes.
#line 1 "ENTRY_10bc3dc0"

__declspec(naked) void FUN_10bc3dc0(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_119123c4
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], LAB_11881144
  __asm mov dword ptr [ecx + 0xc], LAB_11881130
  __asm mov dword ptr [ecx], LAB_119123e8
  __asm mov dword ptr [ecx + 8], LAB_1191240c
  __asm mov dword ptr [ecx + 0xc], LAB_11912430
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x10 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x14 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41
  __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x1c __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x20 __asm _emit 0x00
  __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [esp], ecx
  __asm mov byte ptr [ecx + 0x24], 0
  __asm pop ecx
  __asm ret
}



// Reference entry 10bc3e40; body size 19 bytes.
#line 1 "ENTRY_10bc3e40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc3e40(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc4080; body size 7 bytes.
#line 1 "ENTRY_10bc4080"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4080(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc4210; body size 12 bytes.
#line 1 "ENTRY_10bc4210"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10bc4210(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10bc4220; body size 3 bytes.
#line 1 "ENTRY_10bc4220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4220(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc4230; body size 3 bytes.
#line 1 "ENTRY_10bc4230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc4470; body size 49 bytes.
#line 1 "ENTRY_10bc4470"

__declspec(naked) void FUN_10bc4470(void)

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
  __asm jbe 0x10bc4491
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10bc4520; body size 3 bytes.
#line 1 "ENTRY_10bc4520"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bc4520(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bc4530; body size 3 bytes.
#line 1 "ENTRY_10bc4530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4530(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc4540; body size 3 bytes.
#line 1 "ENTRY_10bc4540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4540(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc4550; body size 3 bytes.
#line 1 "ENTRY_10bc4550"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4550(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc4560; body size 3 bytes.
#line 1 "ENTRY_10bc4560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4560(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc4570; body size 3 bytes.
#line 1 "ENTRY_10bc4570"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bc4570(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bc45f0; body size 38 bytes.
#line 1 "ENTRY_10bc45f0"

__declspec(naked) void FUN_10bc45f0(void)

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



// Reference entry 10bc4620; body size 27 bytes.
#line 1 "ENTRY_10bc4620"

__declspec(naked) void FUN_10bc4620(void)

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



// Reference entry 10bc4650; body size 27 bytes.
#line 1 "ENTRY_10bc4650"

__declspec(naked) void FUN_10bc4650(void)

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



// Reference entry 10bc46d0; body size 87 bytes.
#line 1 "ENTRY_10bc46d0"

__declspec(naked) void FUN_10bc46d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10bc4722
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10bc470d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10bc4722
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10bc4707
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10bc471d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10bc4740; body size 9 bytes.
#line 1 "ENTRY_10bc4740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bc4740(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10bc4750; body size 61 bytes.
#line 1 "ENTRY_10bc4750"

__declspec(naked) void FUN_10bc4750(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10bc4779
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bc4786
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10bc47a0; body size 21 bytes.
#line 1 "ENTRY_10bc47a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

SCStr * __stdcall FUN_10bc47a0(SCStr *param_1)

{
  ((SCStr *)(param_1))->int_allocRep("SCNfcManager");
  return (SCStr *)(param_1);
}


// Reference entry 10bc4a00; body size 6 bytes.
#line 1 "ENTRY_10bc4a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc4a00(void)

{
  return (char *)("SCINfcDelegate");
}


// Reference entry 10bc4a10; body size 6 bytes.
#line 1 "ENTRY_10bc4a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc4a10(void)

{
  return (char *)("SCINfcListener");
}


// Reference entry 10bc4a20; body size 7 bytes.
#line 1 "ENTRY_10bc4a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc4a20(int *param_1)

{
  return (bool)(*param_1 == (int)((0)));
}


// Reference entry 10bc4a30; body size 4 bytes.
#line 1 "ENTRY_10bc4a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined1 __fastcall FUN_10bc4a30(int param_1)

{
  return (undefined1)(*(undefined1 *)(param_1 + 0x24));
}


// Reference entry 10bc4a40; body size 6 bytes.
#line 1 "ENTRY_10bc4a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc4a40(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bc4a50; body size 6 bytes.
#line 1 "ENTRY_10bc4a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc4a50(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bc4b50; body size 5 bytes.
#line 1 "ENTRY_10bc4b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4b50(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  return;
}


// Reference entry 10bc4d10; body size 3 bytes.
#line 1 "ENTRY_10bc4d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4d10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc4d20; body size 3 bytes.
#line 1 "ENTRY_10bc4d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc4d20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc4d30; body size 36 bytes.
#line 1 "ENTRY_10bc4d30"

__declspec(naked) void FUN_10bc4d30(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10bc4d47
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10076f1c
  __asm ret 4
}



// Reference entry 10bc4f00; body size 28 bytes.
#line 1 "ENTRY_10bc4f00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4f00(undefined4 *param_1)

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


// Reference entry 10bc4f30; body size 28 bytes.
#line 1 "ENTRY_10bc4f30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4f30(undefined4 *param_1)

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


// Reference entry 10bc4f60; body size 20 bytes.
#line 1 "ENTRY_10bc4f60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc4f60(int *param_1)

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


// Reference entry 10bc4fe0; body size 9 bytes.
#line 1 "ENTRY_10bc4fe0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bc4fe0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10bc5370; body size 106 bytes.
#line 1 "ENTRY_10bc5370"

__declspec(naked) void FUN_10bc5370(void)

{
  __asm push ecx
  __asm push ebx
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esp + 0xc], esi
  __asm mov dword ptr [esi], LAB_11912a3c
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc53d1
  __asm cmp ecx, edi
  __asm jne 0x10bc53c7
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc53d1
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



// Reference entry 10bc5650; body size 83 bytes.
#line 1 "ENTRY_10bc5650"

__declspec(naked) void FUN_10bc5650(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm push edi
  __asm mov edi, dword ptr [eax]
  __asm cmp edi, dword ptr [esi]
  __asm je 0x10bc569c
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10bc5677
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov dword ptr [esi], edi
  __asm test edi, edi
  __asm je 0x10bc5695
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



// Reference entry 10bc58e0; body size 12 bytes.
#line 1 "ENTRY_10bc58e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10bc58e0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10bc5960; body size 40 bytes.
#line 1 "ENTRY_10bc5960"

__declspec(naked) void FUN_10bc5960(void)

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



// Reference entry 10bc5af0; body size 122 bytes.
#line 1 "ENTRY_10bc5af0"

__declspec(naked) void FUN_10bc5af0(void)

{
  __asm push ebp
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm mov ebp, ecx
  __asm cmp dword ptr [edi + 0x24], 0
  __asm je 0x10bc5b65
  __asm push ebx
  __asm push esi
  __asm push 0x30
  __asm call LAB_10024f14
  __asm mov esi, eax
  __asm add esp, 4
  __asm lea ebx, [esi + 8]
  __asm mov dword ptr [esi], LAB_11912a3c
  __asm _emit 0xc7 __asm _emit 0x43 __asm _emit 0x24 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc5b60
  __asm cmp ecx, edi
  __asm jne 0x10bc5b56
  __asm mov eax, dword ptr [ecx]
  __asm push ebx
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [ebx + 0x24], eax
  __asm mov ecx, dword ptr [edi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc5b60
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



// Reference entry 10bc5bb0; body size 12 bytes.
#line 1 "ENTRY_10bc5bb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool FUN_10bc5bb0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10bc5be0; body size 5 bytes.
#line 1 "ENTRY_10bc5be0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5be0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc5c40; body size 5 bytes.
#line 1 "ENTRY_10bc5c40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5c40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc5c50; body size 5 bytes.
#line 1 "ENTRY_10bc5c50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5c50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc5c60; body size 5 bytes.
#line 1 "ENTRY_10bc5c60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5c60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc5c90; body size 5 bytes.
#line 1 "ENTRY_10bc5c90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5c90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc5ca0; body size 6 bytes.
#line 1 "ENTRY_10bc5ca0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc5ca0(void)

{
  return (char *)("SCIBTClassicConnectionCallback");
}


// Reference entry 10bc5cb0; body size 6 bytes.
#line 1 "ENTRY_10bc5cb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc5cb0(void)

{
  return (char *)("SCIBTClassicConnectionManager");
}


// Reference entry 10bc5cc0; body size 6 bytes.
#line 1 "ENTRY_10bc5cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc5cc0(void)

{
  return (char *)("SCIBTClassicConnectionProvider");
}


// Reference entry 10bc5d40; body size 40 bytes.
#line 1 "ENTRY_10bc5d40"

__declspec(naked) void FUN_10bc5d40(void)

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



// Reference entry 10bc5da0; body size 5 bytes.
#line 1 "ENTRY_10bc5da0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc5da0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc6060; body size 27 bytes.
#line 1 "ENTRY_10bc6060"

__declspec(naked) void FUN_10bc6060(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11912648
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10bc6090; body size 27 bytes.
#line 1 "ENTRY_10bc6090"

__declspec(naked) void FUN_10bc6090(void)

{
  __asm push ecx
  __asm mov dword ptr [ecx], LAB_11912518
  __asm mov eax, ecx
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [esp], ecx
  __asm pop ecx
  __asm ret
}



// Reference entry 10bc6140; body size 16 bytes.
#line 1 "ENTRY_10bc6140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc6140(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc6160; body size 16 bytes.
#line 1 "ENTRY_10bc6160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc6160(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc6180; body size 3 bytes.
#line 1 "ENTRY_10bc6180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6180(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc6190; body size 10 bytes.
#line 1 "ENTRY_10bc6190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bc6190(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10bc61a0; body size 10 bytes.
#line 1 "ENTRY_10bc61a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bc61a0(int param_1)

{
  *(undefined4*)(param_1 + 0x24) = (undefined4)(0);
  return (int)(param_1);
}


// Reference entry 10bc6320; body size 42 bytes.
#line 1 "ENTRY_10bc6320"

__declspec(naked) void FUN_10bc6320(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11881498
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_119129cc
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bc6360; body size 42 bytes.
#line 1 "ENTRY_10bc6360"

__declspec(naked) void FUN_10bc6360(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm mov dword ptr [ecx], LAB_11912648
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm inc dword ptr [LAB_121a0e68]
  __asm mov dword ptr [ecx + 8], eax
  __asm mov eax, ecx
  __asm mov dword ptr [esp], ecx
  __asm mov dword ptr [ecx], LAB_11912678
  __asm pop ecx
  __asm ret 4
}



// Reference entry 10bc6530; body size 9 bytes.
#line 1 "ENTRY_10bc6530"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc6530(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIBTClassicConnectionManager);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc6670; body size 19 bytes.
#line 1 "ENTRY_10bc6670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6670(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc68c0; body size 34 bytes.
#line 1 "ENTRY_10bc68c0"

__declspec(naked) void FUN_10bc68c0(void)

{
  __asm push esi
  __asm lea esi, [ecx + 8]
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc68e0
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



// Reference entry 10bc6950; body size 19 bytes.
#line 1 "ENTRY_10bc6950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6950(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc6970; body size 19 bytes.
#line 1 "ENTRY_10bc6970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6970(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObjImpl);
  g_lSCObjCount = (int)(g_lSCObjCount + -1);
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc6b20; body size 7 bytes.
#line 1 "ENTRY_10bc6b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6b20(undefined4 *param_1)

{
  *param_1 = (undefined4)((uint)&ghidra_vftable_SCIObj);
  return;
}


// Reference entry 10bc6b50; body size 18 bytes.
#line 1 "ENTRY_10bc6b50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc6b50(int *param_1)

{
  if (*param_1 != (int)((0))) {
    thunk_FUN_1148a50e(*param_1,0x30);
  }
  return;
}


// Reference entry 10bc6cc0; body size 3 bytes.
#line 1 "ENTRY_10bc6cc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6cc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc6cd0; body size 3 bytes.
#line 1 "ENTRY_10bc6cd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6cd0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc6ce0; body size 3 bytes.
#line 1 "ENTRY_10bc6ce0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6ce0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc6cf0; body size 7 bytes.
#line 1 "ENTRY_10bc6cf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc6cf0(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bc6d00; body size 8 bytes.
#line 1 "ENTRY_10bc6d00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc6d00(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10bc6d10; body size 8 bytes.
#line 1 "ENTRY_10bc6d10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc6d10(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) != 0);
}


// Reference entry 10bc6d20; body size 3 bytes.
#line 1 "ENTRY_10bc6d20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6d20(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc6d30; body size 3 bytes.
#line 1 "ENTRY_10bc6d30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc6d30(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc6db0; body size 29 bytes.
#line 1 "ENTRY_10bc6db0"

__declspec(naked) void FUN_10bc6db0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc6dc8
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 10bc6de0; body size 29 bytes.
#line 1 "ENTRY_10bc6de0"

__declspec(naked) void FUN_10bc6de0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc6df8
  __asm push dword ptr [esp + 8]
  __asm mov eax, dword ptr [ecx]
  __asm lea edx, [esp + 8]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
  __asm call LAB_1148a05a
}



// Reference entry 10bc7490; body size 8 bytes.
#line 1 "ENTRY_10bc7490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc7490(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10bc74a0; body size 8 bytes.
#line 1 "ENTRY_10bc74a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc74a0(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == 0);
}


// Reference entry 10bc74e0; body size 4 bytes.
#line 1 "ENTRY_10bc74e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc74e0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10bc74f0; body size 4 bytes.
#line 1 "ENTRY_10bc74f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc74f0(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 0x24));
}


// Reference entry 10bc7500; body size 7 bytes.
#line 1 "ENTRY_10bc7500"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc7500(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10bc7510; body size 7 bytes.
#line 1 "ENTRY_10bc7510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc7510(int param_1)

{
  return (bool)(*(int *)(param_1 + 0x24) == (int)(param_1));
}


// Reference entry 10bc7560; body size 26 bytes.
#line 1 "ENTRY_10bc7560"

__declspec(naked) void FUN_10bc7560(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc7576
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bc7580; body size 26 bytes.
#line 1 "ENTRY_10bc7580"

__declspec(naked) void FUN_10bc7580(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc7596
  __asm mov eax, dword ptr [ecx]
  __asm push esi
  __asm call dword ptr [eax]
  __asm mov dword ptr [esi + 0x24], eax
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bc75a0; body size 76 bytes.
#line 1 "ENTRY_10bc75a0"

__declspec(naked) void FUN_10bc75a0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, ecx
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc75e7
  __asm cmp ecx, esi
  __asm jne 0x10bc75dd
  __asm mov eax, dword ptr [ecx]
  __asm push edi
  __asm call dword ptr [eax + 4]
  __asm mov dword ptr [edi + 0x24], eax
  __asm mov ecx, dword ptr [esi + 0x24]
  __asm test ecx, ecx
  __asm je 0x10bc75e7
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



// Reference entry 10bc7600; body size 10 bytes.
#line 1 "ENTRY_10bc7600"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bc7600(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10bc7610; body size 10 bytes.
#line 1 "ENTRY_10bc7610"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bc7610(undefined4 param_2)
{
  int param_1 = (int )this;
  *(undefined4*)(param_1 + 0x24) = (undefined4)(param_2);
  return;
}


// Reference entry 10bc79c0; body size 32 bytes.
#line 1 "ENTRY_10bc79c0"

__declspec(naked) void FUN_10bc79c0(void)

{
  __asm mov ecx, dword ptr [ecx + 0x3c]
  __asm test ecx, ecx
  __asm je 0x10bc79dd
  __asm mov eax, dword ptr [esp + 4]
  __asm lea edx, [esp + 4]
  __asm push dword ptr [esp + 8]
  __asm mov dword ptr [esp + 8], eax
  __asm mov eax, dword ptr [ecx]
  __asm push edx
  __asm call dword ptr [eax + 8]
  __asm ret 8
}



// Reference entry 10bc8650; body size 6 bytes.
#line 1 "ENTRY_10bc8650"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc8650(void)

{
  return (char *)("SCIBTClassicConnectionCallback");
}


// Reference entry 10bc8660; body size 6 bytes.
#line 1 "ENTRY_10bc8660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc8660(void)

{
  return (char *)("SCIBTClassicConnectionManager");
}


// Reference entry 10bc8670; body size 6 bytes.
#line 1 "ENTRY_10bc8670"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

char * FUN_10bc8670(void)

{
  return (char *)("SCIBTClassicConnectionProvider");
}


// Reference entry 10bc8c10; body size 7 bytes.
#line 1 "ENTRY_10bc8c10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

bool __fastcall FUN_10bc8c10(int *param_1)

{
  return (bool)(*param_1 != (int)((0)));
}


// Reference entry 10bc90b0; body size 3 bytes.
#line 1 "ENTRY_10bc90b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc90b0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc90c0; body size 3 bytes.
#line 1 "ENTRY_10bc90c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc90c0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc90d0; body size 3 bytes.
#line 1 "ENTRY_10bc90d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc90d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc90e0; body size 3 bytes.
#line 1 "ENTRY_10bc90e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc90e0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc93b0; body size 28 bytes.
#line 1 "ENTRY_10bc93b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc93b0(undefined4 *param_1)

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


// Reference entry 10bc93e0; body size 28 bytes.
#line 1 "ENTRY_10bc93e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc93e0(undefined4 *param_1)

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


// Reference entry 10bc9410; body size 28 bytes.
#line 1 "ENTRY_10bc9410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc9410(undefined4 *param_1)

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


// Reference entry 10bc9440; body size 20 bytes.
#line 1 "ENTRY_10bc9440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bc9440(int *param_1)

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


// Reference entry 10bc97c0; body size 25 bytes.
#line 1 "ENTRY_10bc97c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc97c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc97e0; body size 26 bytes.
#line 1 "ENTRY_10bc97e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bc97e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10bc9800; body size 33 bytes.
#line 1 "ENTRY_10bc9800"

__declspec(naked) void FUN_10bc9800(void)

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



// Reference entry 10bc9830; body size 3 bytes.
#line 1 "ENTRY_10bc9830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc9830(void)

{
  return;
}


// Reference entry 10bc9840; body size 18 bytes.
#line 1 "ENTRY_10bc9840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bc9840(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10bc9a10; body size 7 bytes.
#line 1 "ENTRY_10bc9a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc9a10(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bc9a20; body size 5 bytes.
#line 1 "ENTRY_10bc9a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc9a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc9a30; body size 36 bytes.
#line 1 "ENTRY_10bc9a30"

__declspec(naked) void FUN_10bc9a30(void)

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



// Reference entry 10bc9a60; body size 13 bytes.
#line 1 "ENTRY_10bc9a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc9a60(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = (undefined4)(*param_3);
  return;
}


// Reference entry 10bc9a70; body size 3 bytes.
#line 1 "ENTRY_10bc9a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bc9a70(void)

{
  return;
}


// Reference entry 10bc9a80; body size 36 bytes.
#line 1 "ENTRY_10bc9a80"

__declspec(naked) void FUN_10bc9a80(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10bc9a97
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10077f48
  __asm ret 4
}



// Reference entry 10bc9ab0; body size 5 bytes.
#line 1 "ENTRY_10bc9ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bc9ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc9b00; body size 23 bytes.
#line 1 "ENTRY_10bc9b00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc9b00(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc9b20; body size 3 bytes.
#line 1 "ENTRY_10bc9b20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc9b20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bc9b30; body size 23 bytes.
#line 1 "ENTRY_10bc9b30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bc9b30(undefined4 *param_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bc9fb0; body size 12 bytes.
#line 1 "ENTRY_10bc9fb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int __thiscall Recovered_Bulk::m_FUN_10bc9fb0(int param_2)
{
  int *param_1 = (int *)this;
  return (int)(*param_1 + param_2 * 4);
}


// Reference entry 10bc9fc0; body size 3 bytes.
#line 1 "ENTRY_10bc9fc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bc9fc0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bca010; body size 49 bytes.
#line 1 "ENTRY_10bca010"

__declspec(naked) void FUN_10bca010(void)

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
  __asm jbe 0x10bca031
  __asm mov eax, 0x3fffffff
  __asm pop esi
  __asm ret 4
  __asm lea eax, [esi + edx]
  __asm cmp eax, dword ptr [esp + 8]
  __asm pop esi
  __asm cmovb eax, dword ptr [esp + 4]
  __asm ret 4
}



// Reference entry 10bca0c0; body size 3 bytes.
#line 1 "ENTRY_10bca0c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bca0c0(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bca0d0; body size 3 bytes.
#line 1 "ENTRY_10bca0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bca0d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bca0e0; body size 3 bytes.
#line 1 "ENTRY_10bca0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bca0e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bca0f0; body size 3 bytes.
#line 1 "ENTRY_10bca0f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bca0f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bca100; body size 3 bytes.
#line 1 "ENTRY_10bca100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bca100(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bca110; body size 3 bytes.
#line 1 "ENTRY_10bca110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __stdcall FUN_10bca110(unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  return;
}


// Reference entry 10bca190; body size 38 bytes.
#line 1 "ENTRY_10bca190"

__declspec(naked) void FUN_10bca190(void)

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



// Reference entry 10bca1c0; body size 27 bytes.
#line 1 "ENTRY_10bca1c0"

__declspec(naked) void FUN_10bca1c0(void)

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



// Reference entry 10bca1f0; body size 27 bytes.
#line 1 "ENTRY_10bca1f0"

__declspec(naked) void FUN_10bca1f0(void)

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



// Reference entry 10bca230; body size 87 bytes.
#line 1 "ENTRY_10bca230"

__declspec(naked) void FUN_10bca230(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp eax, 0x3fffffff
  __asm ja 0x10bca282
  __asm shl eax, 2
  __asm cmp eax, 0x1000
  __asm jb 0x10bca26d
  __asm lea ecx, [eax + 0x23]
  __asm cmp ecx, eax
  __asm jbe 0x10bca282
  __asm push ecx
  __asm call LAB_10024f14
  __asm mov ecx, eax
  __asm add esp, 4
  __asm test ecx, ecx
  __asm je 0x10bca267
  __asm lea eax, [ecx + 0x23]
  __asm and eax, 0xffffffe0
  __asm mov dword ptr [eax - 4], ecx
  __asm ret 4
  __asm call dword ptr [LAB_122fc888]
  __asm test eax, eax
  __asm je 0x10bca27d
  __asm push eax
  __asm call LAB_10024f14
  __asm add esp, 4
  __asm ret 4
  __asm xor eax, eax
  __asm ret 4
  __asm call LAB_10070f3b
}



// Reference entry 10bca2a0; body size 3 bytes.
#line 1 "ENTRY_10bca2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bca2a0(void)

{
  return;
}


// Reference entry 10bca2b0; body size 9 bytes.
#line 1 "ENTRY_10bca2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bca2b0(int *param_1)

{
  return (int)(param_1[2] - *param_1 >> 2);
}


// Reference entry 10bca2c0; body size 61 bytes.
#line 1 "ENTRY_10bca2c0"

__declspec(naked) void FUN_10bca2c0(void)

{
  __asm mov eax, dword ptr [esp + 8]
  __asm _emit 0x8d __asm _emit 0x0c __asm _emit 0x85 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp ecx, 0x1000
  __asm jb 0x10bca2e9
  __asm mov edx, dword ptr [eax - 4]
  __asm add ecx, 0x23
  __asm sub eax, edx
  __asm add eax, -4
  __asm cmp eax, 0x1f
  __asm ja 0x10bca2f6
  __asm mov eax, edx
  __asm push ecx
  __asm push eax
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm ret 8
  __asm call dword ptr [LAB_122fc888]
  __asm _emit 0xcc
}



// Reference entry 10bcad80; body size 4 bytes.
#line 1 "ENTRY_10bcad80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bcad80(int param_1)

{
  return (undefined4)(*(undefined4 *)(param_1 + 4));
}


// Reference entry 10bcb0d0; body size 6 bytes.
#line 1 "ENTRY_10bcb0d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bcb0d0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bcb0e0; body size 6 bytes.
#line 1 "ENTRY_10bcb0e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bcb0e0(void)

{
  return (undefined4)(0x3fffffff);
}


// Reference entry 10bcb400; body size 5 bytes.
#line 1 "ENTRY_10bcb400"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void __fastcall FUN_10bcb400(int param_1)

{
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + -4);
  return;
}


// Reference entry 10bcb410; body size 3 bytes.
#line 1 "ENTRY_10bcb410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 __fastcall FUN_10bcb410(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bcb420; body size 36 bytes.
#line 1 "ENTRY_10bcb420"

__declspec(naked) void FUN_10bcb420(void)

{
  __asm mov edx, dword ptr [ecx + 4]
  __asm cmp edx, dword ptr [ecx + 8]
  __asm je 0x10bcb437
  __asm mov eax, dword ptr [esp + 4]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx], eax
  __asm add dword ptr [ecx + 4], 4
  __asm ret 4
  __asm push dword ptr [esp + 4]
  __asm push edx
  __asm call LAB_10077f48
  __asm ret 4
}



// Reference entry 10bcb5b0; body size 9 bytes.
#line 1 "ENTRY_10bcb5b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

int __fastcall FUN_10bcb5b0(int *param_1)

{
  return (int)(param_1[1] - *param_1 >> 2);
}


// Reference entry 10bcb650; body size 31 bytes.
#line 1 "ENTRY_10bcb650"

__declspec(naked) void FUN_10bcb650(void)

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



// Reference entry 10bcb680; body size 25 bytes.
#line 1 "ENTRY_10bcb680"

__declspec(naked) void FUN_10bcb680(void)

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



// Reference entry 10bcb6a0; body size 49 bytes.
#line 1 "ENTRY_10bcb6a0"

__declspec(naked) void FUN_10bcb6a0(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm xorps xmm0, xmm0
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm movups xmmword ptr [ecx], xmm0
  __asm movq qword ptr [ecx + 0x10], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10068156
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}



// Reference entry 10bcb6e0; body size 25 bytes.
#line 1 "ENTRY_10bcb6e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb6e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb700; body size 18 bytes.
#line 1 "ENTRY_10bcb700"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb700(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb720; body size 18 bytes.
#line 1 "ENTRY_10bcb720"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb720(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb740; body size 18 bytes.
#line 1 "ENTRY_10bcb740"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb740(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb760; body size 18 bytes.
#line 1 "ENTRY_10bcb760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb760(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb780; body size 18 bytes.
#line 1 "ENTRY_10bcb780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb780(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb7a0; body size 18 bytes.
#line 1 "ENTRY_10bcb7a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb7a0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb7c0; body size 18 bytes.
#line 1 "ENTRY_10bcb7c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb7c0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb7e0; body size 18 bytes.
#line 1 "ENTRY_10bcb7e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb7e0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb800; body size 18 bytes.
#line 1 "ENTRY_10bcb800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb800(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb820; body size 25 bytes.
#line 1 "ENTRY_10bcb820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb820(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb840; body size 25 bytes.
#line 1 "ENTRY_10bcb840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb840(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb860; body size 22 bytes.
#line 1 "ENTRY_10bcb860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb860(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb880; body size 27 bytes.
#line 1 "ENTRY_10bcb880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb880(undefined4 param_2,undefined4 *param_3, unsigned int recovered_unused_stack_0)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_3);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb8b0; body size 22 bytes.
#line 1 "ENTRY_10bcb8b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb8b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb8d0; body size 22 bytes.
#line 1 "ENTRY_10bcb8d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb8d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb8f0; body size 22 bytes.
#line 1 "ENTRY_10bcb8f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb8f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb910; body size 22 bytes.
#line 1 "ENTRY_10bcb910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb910(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb930; body size 22 bytes.
#line 1 "ENTRY_10bcb930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb930(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb950; body size 22 bytes.
#line 1 "ENTRY_10bcb950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb950(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb970; body size 22 bytes.
#line 1 "ENTRY_10bcb970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb970(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb990; body size 22 bytes.
#line 1 "ENTRY_10bcb990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcb990(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb9b0; body size 18 bytes.
#line 1 "ENTRY_10bcb9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb9b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb9d0; body size 18 bytes.
#line 1 "ENTRY_10bcb9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb9d0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcb9f0; body size 18 bytes.
#line 1 "ENTRY_10bcb9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcb9f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcba10; body size 18 bytes.
#line 1 "ENTRY_10bcba10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba10(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcba30; body size 18 bytes.
#line 1 "ENTRY_10bcba30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba30(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcba50; body size 18 bytes.
#line 1 "ENTRY_10bcba50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba50(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcba70; body size 18 bytes.
#line 1 "ENTRY_10bcba70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba70(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcba90; body size 18 bytes.
#line 1 "ENTRY_10bcba90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcba90(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcbab0; body size 18 bytes.
#line 1 "ENTRY_10bcbab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcbab0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc1f0; body size 25 bytes.
#line 1 "ENTRY_10bcc1f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcc1f0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc210; body size 49 bytes.
#line 1 "ENTRY_10bcc210"

__declspec(naked) void FUN_10bcc210(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 0xc]
  __asm xorps xmm0, xmm0
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm movups xmmword ptr [ecx], xmm0
  __asm movq qword ptr [ecx + 0x10], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10068156
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0xc
}



// Reference entry 10bcc250; body size 32 bytes.
#line 1 "ENTRY_10bcc250"

__declspec(naked) void FUN_10bcc250(void)

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



// Reference entry 10bcc280; body size 32 bytes.
#line 1 "ENTRY_10bcc280"

__declspec(naked) void FUN_10bcc280(void)

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



// Reference entry 10bcc2b0; body size 32 bytes.
#line 1 "ENTRY_10bcc2b0"

__declspec(naked) void FUN_10bcc2b0(void)

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



// Reference entry 10bcc390; body size 22 bytes.
#line 1 "ENTRY_10bcc390"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc390(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc3b0; body size 22 bytes.
#line 1 "ENTRY_10bcc3b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc3b0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc3d0; body size 22 bytes.
#line 1 "ENTRY_10bcc3d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc3d0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc3f0; body size 22 bytes.
#line 1 "ENTRY_10bcc3f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc3f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc410; body size 22 bytes.
#line 1 "ENTRY_10bcc410"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc410(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc430; body size 22 bytes.
#line 1 "ENTRY_10bcc430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc430(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc450; body size 22 bytes.
#line 1 "ENTRY_10bcc450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc450(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc470; body size 22 bytes.
#line 1 "ENTRY_10bcc470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc470(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc490; body size 22 bytes.
#line 1 "ENTRY_10bcc490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc490(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc4b0; body size 18 bytes.
#line 1 "ENTRY_10bcc4b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcc4b0(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2, unsigned int recovered_unused_stack_3, unsigned int recovered_unused_stack_4)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc4d0; body size 11 bytes.
#line 1 "ENTRY_10bcc4d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc4d0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc4e0; body size 11 bytes.
#line 1 "ENTRY_10bcc4e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc4e0(undefined4 param_2,undefined4 param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc4f0; body size 22 bytes.
#line 1 "ENTRY_10bcc4f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc4f0(undefined4 *param_2,undefined1 *param_3)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*param_2);
  *(undefined1*)(param_1 + 1) = (undefined1)(*param_3);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc510; body size 33 bytes.
#line 1 "ENTRY_10bcc510"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc510(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10bcc540; body size 18 bytes.
#line 1 "ENTRY_10bcc540"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 * __fastcall FUN_10bcc540(undefined4 *param_1, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)

{
  *param_1 = (undefined4)(0);
  param_1[1] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc560; body size 33 bytes.
#line 1 "ENTRY_10bcc560"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc560(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10bcc590; body size 33 bytes.
#line 1 "ENTRY_10bcc590"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc590(undefined4 param_2,undefined4 param_3,undefined4 *param_4,
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


// Reference entry 10bcc5c0; body size 33 bytes.
#line 1 "ENTRY_10bcc5c0"

__declspec(naked) void FUN_10bcc5c0(void)

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



// Reference entry 10bcc5f0; body size 27 bytes.
#line 1 "ENTRY_10bcc5f0"

__declspec(naked) void FUN_10bcc5f0(void)

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



// Reference entry 10bcc620; body size 51 bytes.
#line 1 "ENTRY_10bcc620"

__declspec(naked) void FUN_10bcc620(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm xorps xmm0, xmm0
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm movups xmmword ptr [ecx], xmm0
  __asm movq qword ptr [ecx + 0x10], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10068156
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}



// Reference entry 10bcc660; body size 29 bytes.
#line 1 "ENTRY_10bcc660"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc660(undefined4 *param_2, unsigned int recovered_unused_stack_0, unsigned int recovered_unused_stack_1, unsigned int recovered_unused_stack_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(*(undefined4 *)*param_2);
  param_1[1] = (undefined4)(0);
  param_1[2] = (undefined4)(0);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc690; body size 51 bytes.
#line 1 "ENTRY_10bcc690"

__declspec(naked) void FUN_10bcc690(void)

{
  __asm push ecx
  __asm mov eax, dword ptr [esp + 8]
  __asm xorps xmm0, xmm0
  __asm push esi
  __asm mov esi, ecx
  __asm lea ecx, [esi + 4]
  __asm mov dword ptr [esp + 4], esi
  __asm mov eax, dword ptr [eax]
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [esi], eax
  __asm movups xmmword ptr [ecx], xmm0
  __asm movq qword ptr [ecx + 0x10], xmm0
  __asm _emit 0xc7 __asm _emit 0x41 __asm _emit 0x18 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm call LAB_10068156
  __asm mov eax, esi
  __asm pop esi
  __asm pop ecx
  __asm ret 0x10
}



// Reference entry 10bcc6d0; body size 34 bytes.
#line 1 "ENTRY_10bcc6d0"

__declspec(naked) void FUN_10bcc6d0(void)

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



// Reference entry 10bcc700; body size 34 bytes.
#line 1 "ENTRY_10bcc700"

__declspec(naked) void FUN_10bcc700(void)

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



// Reference entry 10bcc730; body size 34 bytes.
#line 1 "ENTRY_10bcc730"

__declspec(naked) void FUN_10bcc730(void)

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



// Reference entry 10bcc8a0; body size 43 bytes.
#line 1 "ENTRY_10bcc8a0"

__declspec(naked) void FUN_10bcc8a0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [eax]
  __asm mov dword ptr [esi], ecx
  __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm test ecx, ecx
  __asm je 0x10bcc8c5
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



// Reference entry 10bcc8e0; body size 26 bytes.
#line 1 "ENTRY_10bcc8e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ int * __thiscall Recovered_Bulk::m_FUN_10bcc8e0(int *param_2)
{
  int *param_1 = (int *)this;
  param_2 = (int *)((int *)*param_2);
  *param_1 = (int)((int)param_2);
  if ((int *)(param_2) != (int *)(0x0)) {
    ((SCVtbl_1_0*)(param_2))->v();
  }
  return (int *)(param_1);
}


// Reference entry 10bcc900; body size 11 bytes.
#line 1 "ENTRY_10bcc900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc900(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc910; body size 11 bytes.
#line 1 "ENTRY_10bcc910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc910(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc920; body size 11 bytes.
#line 1 "ENTRY_10bcc920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc920(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bcc930; body size 11 bytes.
#line 1 "ENTRY_10bcc930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ undefined4 * __thiscall Recovered_Bulk::m_FUN_10bcc930(undefined4 param_2)
{
  undefined4 *param_1 = (undefined4 *)this;
  *param_1 = (undefined4)(param_2);
  return (undefined4 *)(param_1);
}


// Reference entry 10bccb60; body size 3 bytes.
#line 1 "ENTRY_10bccb60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccb60(void)

{
  return;
}


// Reference entry 10bccb70; body size 3 bytes.
#line 1 "ENTRY_10bccb70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccb70(void)

{
  return;
}


// Reference entry 10bccb80; body size 3 bytes.
#line 1 "ENTRY_10bccb80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccb80(void)

{
  return;
}


// Reference entry 10bccb90; body size 3 bytes.
#line 1 "ENTRY_10bccb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccb90(void)

{
  return;
}


// Reference entry 10bccba0; body size 3 bytes.
#line 1 "ENTRY_10bccba0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bccba0(void)

{
  return;
}


// Reference entry 10bccbb0; body size 68 bytes.
#line 1 "ENTRY_10bccbb0"

__declspec(naked) void FUN_10bccbb0(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm sub ebx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, ecx
  __asm mov ecx, ebx
  __asm push edi
  __asm sar ecx, 2
  __asm mov eax, dword ptr [esi + 8]
  __asm mov edi, dword ptr [esi]
  __asm sub eax, edi
  __asm sar eax, 2
  __asm cmp ecx, eax
  __asm jbe 0x10bccbda
  __asm push ecx
  __asm mov ecx, esi
  __asm call LAB_10005d80
  __asm mov edi, dword ptr [esi]
  __asm push ebx
  __asm push dword ptr [esp + 0x14]
  __asm push edi
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [edi + ebx]
  __asm mov dword ptr [esi + 4], eax
  __asm pop edi
  __asm pop esi
  __asm pop ebx
  __asm ret 0xc
}



// Reference entry 10bcce60; body size 25 bytes.
#line 1 "ENTRY_10bcce60"

__declspec(naked) void FUN_10bcce60(void)

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



// Reference entry 10bcce80; body size 25 bytes.
#line 1 "ENTRY_10bcce80"

__declspec(naked) void FUN_10bcce80(void)

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



// Reference entry 10bccea0; body size 25 bytes.
#line 1 "ENTRY_10bccea0"

__declspec(naked) void FUN_10bccea0(void)

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



// Reference entry 10bccec0; body size 25 bytes.
#line 1 "ENTRY_10bccec0"

__declspec(naked) void FUN_10bccec0(void)

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



// Reference entry 10bccee0; body size 25 bytes.
#line 1 "ENTRY_10bccee0"

__declspec(naked) void FUN_10bccee0(void)

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



// Reference entry 10bccf00; body size 25 bytes.
#line 1 "ENTRY_10bccf00"

__declspec(naked) void FUN_10bccf00(void)

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



// Reference entry 10bccf20; body size 25 bytes.
#line 1 "ENTRY_10bccf20"

__declspec(naked) void FUN_10bccf20(void)

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



// Reference entry 10bccf40; body size 25 bytes.
#line 1 "ENTRY_10bccf40"

__declspec(naked) void FUN_10bccf40(void)

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



// Reference entry 10bccf60; body size 25 bytes.
#line 1 "ENTRY_10bccf60"

__declspec(naked) void FUN_10bccf60(void)

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



// Reference entry 10bcd220; body size 5 bytes.
#line 1 "ENTRY_10bcd220"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bcd220(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bcd230; body size 13 bytes.
#line 1 "ENTRY_10bcd230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd230(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd240; body size 13 bytes.
#line 1 "ENTRY_10bcd240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd240(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd250; body size 13 bytes.
#line 1 "ENTRY_10bcd250"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd250(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd260; body size 13 bytes.
#line 1 "ENTRY_10bcd260"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd260(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd270; body size 13 bytes.
#line 1 "ENTRY_10bcd270"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd270(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd280; body size 13 bytes.
#line 1 "ENTRY_10bcd280"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd280(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd290; body size 13 bytes.
#line 1 "ENTRY_10bcd290"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd290(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2a0; body size 13 bytes.
#line 1 "ENTRY_10bcd2a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2a0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2b0; body size 13 bytes.
#line 1 "ENTRY_10bcd2b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2b0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2c0; body size 13 bytes.
#line 1 "ENTRY_10bcd2c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2c0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2d0; body size 13 bytes.
#line 1 "ENTRY_10bcd2d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2d0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2e0; body size 13 bytes.
#line 1 "ENTRY_10bcd2e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd2f0; body size 13 bytes.
#line 1 "ENTRY_10bcd2f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd2f0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd300; body size 13 bytes.
#line 1 "ENTRY_10bcd300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd300(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd310; body size 13 bytes.
#line 1 "ENTRY_10bcd310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd310(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd320; body size 13 bytes.
#line 1 "ENTRY_10bcd320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd320(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd330; body size 13 bytes.
#line 1 "ENTRY_10bcd330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd330(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd340; body size 13 bytes.
#line 1 "ENTRY_10bcd340"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd340(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bcd350; body size 113 bytes.
#line 1 "ENTRY_10bcd350"

__declspec(naked) void FUN_10bcd350(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_10028c0e
  __asm mov ecx, dword ptr [edi]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov esi, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm mov edx, dword ptr [esi + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10bcd3b5
  __asm mov ecx, dword ptr [edx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10bcd392
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, ecx
  __asm mov ecx, eax
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10bcd386
  __asm mov dword ptr [esi], edx
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10bcd3ad
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10bcd3a2
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



// Reference entry 10bcd3e0; body size 113 bytes.
#line 1 "ENTRY_10bcd3e0"

__declspec(naked) void FUN_10bcd3e0(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 8]
  __asm push edi
  __asm push dword ptr [esp + 0x10]
  __asm mov edi, ecx
  __asm mov eax, dword ptr [esi]
  __asm push dword ptr [edi]
  __asm push dword ptr [eax + 4]
  __asm call LAB_1006ab18
  __asm mov ecx, dword ptr [edi]
  __asm mov dword ptr [ecx + 4], eax
  __asm mov eax, dword ptr [esi + 4]
  __asm mov esi, dword ptr [edi]
  __asm mov dword ptr [edi + 4], eax
  __asm mov edx, dword ptr [esi + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10bcd445
  __asm mov ecx, dword ptr [edx]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10bcd422
  __asm mov eax, dword ptr [ecx]
  __asm mov edx, ecx
  __asm mov ecx, eax
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10bcd416
  __asm mov dword ptr [esi], edx
  __asm mov edx, dword ptr [edi]
  __asm mov ecx, dword ptr [edx + 4]
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10bcd43d
  __asm mov ecx, eax
  __asm mov eax, dword ptr [ecx + 8]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10bcd432
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



// Reference entry 10bcd470; body size 33 bytes.
#line 1 "ENTRY_10bcd470"

__declspec(naked) void FUN_10bcd470(void)

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



// Reference entry 10bcd4a0; body size 33 bytes.
#line 1 "ENTRY_10bcd4a0"

__declspec(naked) void FUN_10bcd4a0(void)

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



// Reference entry 10bcd4d0; body size 33 bytes.
#line 1 "ENTRY_10bcd4d0"

__declspec(naked) void FUN_10bcd4d0(void)

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



// Reference entry 10bcd500; body size 33 bytes.
#line 1 "ENTRY_10bcd500"

__declspec(naked) void FUN_10bcd500(void)

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



// Reference entry 10bcd990; body size 3 bytes.
#line 1 "ENTRY_10bcd990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd990(void)

{
  return;
}


// Reference entry 10bcd9a0; body size 3 bytes.
#line 1 "ENTRY_10bcd9a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9a0(void)

{
  return;
}


// Reference entry 10bcd9b0; body size 3 bytes.
#line 1 "ENTRY_10bcd9b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9b0(void)

{
  return;
}


// Reference entry 10bcd9c0; body size 3 bytes.
#line 1 "ENTRY_10bcd9c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9c0(void)

{
  return;
}


// Reference entry 10bcd9d0; body size 3 bytes.
#line 1 "ENTRY_10bcd9d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9d0(void)

{
  return;
}


// Reference entry 10bcd9e0; body size 3 bytes.
#line 1 "ENTRY_10bcd9e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9e0(void)

{
  return;
}


// Reference entry 10bcd9f0; body size 3 bytes.
#line 1 "ENTRY_10bcd9f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcd9f0(void)

{
  return;
}


// Reference entry 10bcda00; body size 3 bytes.
#line 1 "ENTRY_10bcda00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcda00(void)

{
  return;
}


// Reference entry 10bcda10; body size 3 bytes.
#line 1 "ENTRY_10bcda10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcda10(void)

{
  return;
}


// Reference entry 10bcda20; body size 3 bytes.
#line 1 "ENTRY_10bcda20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcda20(void)

{
  return;
}


// Reference entry 10bcda30; body size 3 bytes.
#line 1 "ENTRY_10bcda30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcda30(void)

{
  return;
}


// Reference entry 10bcdd70; body size 39 bytes.
#line 1 "ENTRY_10bcdd70"

__declspec(naked) void FUN_10bcdd70(void)

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
  __asm je 0x10bcdd8e
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bcdda0; body size 18 bytes.
#line 1 "ENTRY_10bcdda0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bcdda0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10bcde50; body size 23 bytes.
#line 1 "ENTRY_10bcde50"

__declspec(naked) void FUN_10bcde50(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_10035954
  __asm add dword ptr [esi + 4], 0x1c
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bcde70; body size 39 bytes.
#line 1 "ENTRY_10bcde70"

__declspec(naked) void FUN_10bcde70(void)

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
  __asm je 0x10bcde8e
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bcdea0; body size 18 bytes.
#line 1 "ENTRY_10bcdea0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bcdea0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10bcdec0; body size 18 bytes.
#line 1 "ENTRY_10bcdec0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */ void __thiscall Recovered_Bulk::m_FUN_10bcdec0(undefined4 *param_2)
{
  int param_1 = (int )this;
  **(undefined4**)(param_1 + 4) = (undefined4)(*param_2);
  *(int*)(param_1 + 4) = (int)(*(int *)(param_1 + 4) + 4);
  return;
}


// Reference entry 10bcdf70; body size 23 bytes.
#line 1 "ENTRY_10bcdf70"

__declspec(naked) void FUN_10bcdf70(void)

{
  __asm push esi
  __asm push dword ptr [esp + 8]
  __asm mov esi, ecx
  __asm mov ecx, dword ptr [esi + 4]
  __asm call LAB_1000897c
  __asm add dword ptr [esi + 4], 0x1c
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bcdf90; body size 39 bytes.
#line 1 "ENTRY_10bcdf90"

__declspec(naked) void FUN_10bcdf90(void)

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
  __asm je 0x10bcdfae
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add dword ptr [edi + 4], 8
  __asm pop edi
  __asm pop esi
  __asm ret 4
}



// Reference entry 10bcfb30; body size 73 bytes.
#line 1 "ENTRY_10bcfb30"

__declspec(naked) void FUN_10bcfb30(void)

{
  __asm mov ecx, dword ptr [ecx]
  __asm mov edx, dword ptr [esp + 4]
  __asm mov eax, dword ptr [ecx + 4]
  __asm mov dword ptr [edx], eax
  __asm _emit 0xc7 __asm _emit 0x42 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov dword ptr [edx + 8], ecx
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10bcfb74
  __asm mov ecx, dword ptr [esp + 8]
  __asm push esi
  __asm mov esi, dword ptr [ecx]
  __asm mov dword ptr [edx], eax
  __asm cmp dword ptr [eax + 0x10], esi
  __asm jge 0x10bcfb60
  __asm mov eax, dword ptr [eax + 8]
  __asm xor ecx, ecx
  __asm jmp 0x10bcfb6a
  __asm mov dword ptr [edx + 8], eax
  __asm mov ecx, 1
  __asm mov eax, dword ptr [eax]
  __asm mov dword ptr [edx + 4], ecx
  __asm cmp byte ptr [eax + 0xd], 0
  __asm je 0x10bcfb52
  __asm pop esi
  __asm mov eax, edx
  __asm ret 8
}



// Reference entry 10bcfb90; body size 30 bytes.
#line 1 "ENTRY_10bcfb90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfb90(int *param_1,int *param_2,int *param_3)

{
  if ((int *)(param_1) != (int *)(param_2)) {
    do {
      if (*param_1 == (int)(*(param_3))) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while ((int *)(param_1) != (int *)(param_2));
  }
  return;
}


// Reference entry 10bcfbc0; body size 30 bytes.
#line 1 "ENTRY_10bcfbc0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfbc0(int *param_1,int *param_2,int *param_3)

{
  if ((int *)(param_1) != (int *)(param_2)) {
    do {
      if (*param_1 == (int)(*(param_3))) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while ((int *)(param_1) != (int *)(param_2));
  }
  return;
}


// Reference entry 10bcfbf0; body size 30 bytes.
#line 1 "ENTRY_10bcfbf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfbf0(int *param_1,int *param_2,int *param_3)

{
  if ((int *)(param_1) != (int *)(param_2)) {
    do {
      if (*param_1 == (int)(*(param_3))) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while ((int *)(param_1) != (int *)(param_2));
  }
  return;
}


// Reference entry 10bcfc20; body size 30 bytes.
#line 1 "ENTRY_10bcfc20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfc20(int *param_1,int *param_2,int *param_3)

{
  if ((int *)(param_1) != (int *)(param_2)) {
    do {
      if (*param_1 == (int)(*(param_3))) {
        return;
      }
      param_1 = (int *)(param_1 + 1);
    } while ((int *)(param_1) != (int *)(param_2));
  }
  return;
}


// Reference entry 10bcfc50; body size 15 bytes.
#line 1 "ENTRY_10bcfc50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfc50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcfc70; body size 15 bytes.
#line 1 "ENTRY_10bcfc70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfc70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10bcfc90; body size 15 bytes.
#line 1 "ENTRY_10bcfc90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfc90(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10bcfcb0; body size 15 bytes.
#line 1 "ENTRY_10bcfcb0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfcb0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x18);
  return;
}


// Reference entry 10bcfcd0; body size 15 bytes.
#line 1 "ENTRY_10bcfcd0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfcd0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x30);
  return;
}


// Reference entry 10bcfcf0; body size 15 bytes.
#line 1 "ENTRY_10bcfcf0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfcf0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcfd10; body size 15 bytes.
#line 1 "ENTRY_10bcfd10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfd10(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcfd30; body size 15 bytes.
#line 1 "ENTRY_10bcfd30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfd30(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcfd50; body size 15 bytes.
#line 1 "ENTRY_10bcfd50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfd50(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10bcfd70; body size 15 bytes.
#line 1 "ENTRY_10bcfd70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bcfd70(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x1c);
  return;
}


// Reference entry 10bcff10; body size 26 bytes.
#line 1 "ENTRY_10bcff10"

__declspec(naked) void FUN_10bcff10(void)

{
  __asm push esi
  __asm mov esi, dword ptr [esp + 0xc]
  __asm lea ecx, [esi + 0x14]
  __asm call LAB_10088bd6
  __asm push 0x30
  __asm push esi
  __asm call LAB_100131d8
  __asm add esp, 8
  __asm pop esi
  __asm ret
}



// Reference entry 10bd00b0; body size 15 bytes.
#line 1 "ENTRY_10bd00b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd00b0(undefined4 param_1,undefined4 param_2)

{
  thunk_FUN_1148a50e(param_2,0x14);
  return;
}


// Reference entry 10bd00d0; body size 7 bytes.
#line 1 "ENTRY_10bd00d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd00d0(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd00e0; body size 13 bytes.
#line 1 "ENTRY_10bd00e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd00e0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bd00f0; body size 5 bytes.
#line 1 "ENTRY_10bd00f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd00f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0100; body size 7 bytes.
#line 1 "ENTRY_10bd0100"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0100(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd0110; body size 7 bytes.
#line 1 "ENTRY_10bd0110"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0110(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd0120; body size 7 bytes.
#line 1 "ENTRY_10bd0120"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0120(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd0130; body size 7 bytes.
#line 1 "ENTRY_10bd0130"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0130(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd0140; body size 7 bytes.
#line 1 "ENTRY_10bd0140"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0140(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd0150; body size 7 bytes.
#line 1 "ENTRY_10bd0150"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0150(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd0160; body size 7 bytes.
#line 1 "ENTRY_10bd0160"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0160(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd0170; body size 5 bytes.
#line 1 "ENTRY_10bd0170"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0170(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0180; body size 7 bytes.
#line 1 "ENTRY_10bd0180"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0180(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd0190; body size 5 bytes.
#line 1 "ENTRY_10bd0190"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0190(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0420; body size 5 bytes.
#line 1 "ENTRY_10bd0420"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0420(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0430; body size 5 bytes.
#line 1 "ENTRY_10bd0430"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0430(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0440; body size 5 bytes.
#line 1 "ENTRY_10bd0440"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0440(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0450; body size 5 bytes.
#line 1 "ENTRY_10bd0450"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0450(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0460; body size 5 bytes.
#line 1 "ENTRY_10bd0460"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0460(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0470; body size 5 bytes.
#line 1 "ENTRY_10bd0470"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0470(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0480; body size 5 bytes.
#line 1 "ENTRY_10bd0480"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0480(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0490; body size 5 bytes.
#line 1 "ENTRY_10bd0490"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0490(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd04a0; body size 31 bytes.
#line 1 "ENTRY_10bd04a0"

__declspec(naked) void FUN_10bd04a0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10bd04ba
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jb 0x10bd04ba
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bd04d0; body size 37 bytes.
#line 1 "ENTRY_10bd04d0"

__declspec(naked) void FUN_10bd04d0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10bd04f0
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10bd04f0
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bd0500; body size 37 bytes.
#line 1 "ENTRY_10bd0500"

__declspec(naked) void FUN_10bd0500(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm cmp byte ptr [eax + 0xd], 0
  __asm jne 0x10bd0520
  __asm mov ecx, dword ptr [esp + 8]
  __asm add eax, 0x10
  __asm push eax
  __asm call LAB_10070fbd
  __asm test al, al
  __asm jne 0x10bd0520
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bd0530; body size 31 bytes.
#line 1 "ENTRY_10bd0530"

__declspec(naked) void FUN_10bd0530(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10bd054a
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10bd054a
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bd0560; body size 31 bytes.
#line 1 "ENTRY_10bd0560"

__declspec(naked) void FUN_10bd0560(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10bd057a
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10bd057a
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bd0590; body size 31 bytes.
#line 1 "ENTRY_10bd0590"

__declspec(naked) void FUN_10bd0590(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10bd05aa
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10bd05aa
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bd05c0; body size 31 bytes.
#line 1 "ENTRY_10bd05c0"

__declspec(naked) void FUN_10bd05c0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10bd05da
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10bd05da
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bd05f0; body size 31 bytes.
#line 1 "ENTRY_10bd05f0"

__declspec(naked) void FUN_10bd05f0(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10bd060a
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10bd060a
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bd0620; body size 31 bytes.
#line 1 "ENTRY_10bd0620"

__declspec(naked) void FUN_10bd0620(void)

{
  __asm mov ecx, dword ptr [esp + 4]
  __asm cmp byte ptr [ecx + 0xd], 0
  __asm jne 0x10bd063a
  __asm mov eax, dword ptr [esp + 8]
  __asm mov eax, dword ptr [eax]
  __asm cmp eax, dword ptr [ecx + 0x10]
  __asm jl 0x10bd063a
  __asm mov al, 1
  __asm ret 8
  __asm xor al, al
  __asm ret 8
}



// Reference entry 10bd0650; body size 92 bytes.
#line 1 "ENTRY_10bd0650"

__declspec(naked) void FUN_10bd0650(void)

{
  __asm push ebx
  __asm mov ebx, dword ptr [esp + 0xc]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0xc]
  __asm cmp edi, ebx
  __asm je 0x10bd06a5
  __asm push esi
  __asm mov esi, dword ptr [esp + 0x18]
  __asm mov eax, dword ptr [edi]
  __asm cmp eax, dword ptr [esi]
  __asm je 0x10bd0695
  __asm mov ecx, dword ptr [esi + 4]
  __asm test ecx, ecx
  __asm je 0x10bd0684
  __asm _emit 0xc7 __asm _emit 0x06 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0xc7 __asm _emit 0x46 __asm _emit 0x04 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00 __asm _emit 0x00
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 8]
  __asm mov eax, dword ptr [edi]
  __asm mov dword ptr [esi], eax
  __asm mov ecx, dword ptr [edi + 4]
  __asm mov dword ptr [esi + 4], ecx
  __asm test ecx, ecx
  __asm je 0x10bd0695
  __asm mov eax, dword ptr [ecx]
  __asm call dword ptr [eax + 4]
  __asm add edi, 8
  __asm add esi, 8
  __asm cmp edi, ebx
  __asm jne 0x10bd0663
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



// Reference entry 10bd06d0; body size 3 bytes.
#line 1 "ENTRY_10bd06d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd06d0(void)

{
  return;
}


// Reference entry 10bd06e0; body size 3 bytes.
#line 1 "ENTRY_10bd06e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd06e0(void)

{
  return;
}


// Reference entry 10bd06f0; body size 84 bytes.
#line 1 "ENTRY_10bd06f0"

__declspec(naked) void FUN_10bd06f0(void)

{
  __asm push ebx
  __asm push ebp
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x14]
  __asm mov ebp, ecx
  __asm sub edi, dword ptr [esp + 0x10]
  __asm mov ebx, edi
  __asm sar ebx, 2
  __asm cmp edi, 4
  __asm jb 0x10bd0739
  __asm cmp ebx, 0x3fffffff
  __asm ja 0x10bd073f
  __asm push esi
  __asm push ebx
  __asm call LAB_10033ab9
  __asm mov esi, eax
  __asm push edi
  __asm push dword ptr [esp + 0x18]
  __asm mov dword ptr [ebp], esi
  __asm lea ecx, [esi + ebx*4]
  __asm mov dword ptr [ebp + 4], esi
  __asm push esi
  __asm mov dword ptr [ebp + 8], ecx
  __asm call LAB_1148cdf3
  __asm add esp, 0xc
  __asm lea eax, [esi + ebx*4]
  __asm mov dword ptr [ebp + 4], eax
  __asm pop esi
  __asm pop edi
  __asm pop ebp
  __asm pop ebx
  __asm ret 0xc
  __asm call LAB_1005af92
}



// Reference entry 10bd0760; body size 5 bytes.
#line 1 "ENTRY_10bd0760"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd0760(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd0770; body size 13 bytes.
#line 1 "ENTRY_10bd0770"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd0770(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bd0780; body size 13 bytes.
#line 1 "ENTRY_10bd0780"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd0780(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = (undefined4)(*param_2);
  return;
}


// Reference entry 10bd0790; body size 19 bytes.
#line 1 "ENTRY_10bd0790"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

void FUN_10bd0790(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(*param_1);
  *param_1 = (undefined4)(*param_2);
  *param_2 = (undefined4)(uVar1);
  return;
}


// Reference entry 10bd1230; body size 7 bytes.
#line 1 "ENTRY_10bd1230"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1230(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd1240; body size 7 bytes.
#line 1 "ENTRY_10bd1240"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1240(undefined4 *param_1)

{
  return (undefined4)(*param_1);
}


// Reference entry 10bd1250; body size 38 bytes.
#line 1 "ENTRY_10bd1250"

__declspec(naked) void FUN_10bd1250(void)

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



// Reference entry 10bd1280; body size 103 bytes.
#line 1 "ENTRY_10bd1280"

__declspec(naked) void FUN_10bd1280(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp eax, ecx
  __asm je 0x10bd12e1
  __asm push esi
  __asm mov edx, dword ptr [eax + 0x10]
  __asm mov dword ptr [edi], edx
  __asm add edi, 4
  __asm mov edx, dword ptr [eax + 8]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10bd12c4
  __asm mov edx, dword ptr [eax + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10bd12c0
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm cmp eax, dword ptr [edx + 8]
  __asm jne 0x10bd12c0
  __asm mov eax, edx
  __asm mov edx, dword ptr [edx + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10bd12b0
  __asm mov eax, edx
  __asm jmp 0x10bd12dc
  __asm mov eax, edx
  __asm mov esi, dword ptr [eax]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10bd12dc
  __asm nop
  __asm mov edx, dword ptr [esi]
  __asm mov eax, esi
  __asm mov esi, edx
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10bd12d0
  __asm cmp eax, ecx
  __asm jne 0x10bd1292
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret 0xc
}



// Reference entry 10bd1300; body size 5 bytes.
#line 1 "ENTRY_10bd1300"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1300(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1310; body size 5 bytes.
#line 1 "ENTRY_10bd1310"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1310(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1320; body size 5 bytes.
#line 1 "ENTRY_10bd1320"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1320(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1330; body size 5 bytes.
#line 1 "ENTRY_10bd1330"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1330(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd14b0; body size 36 bytes.
#line 1 "ENTRY_10bd14b0"

__declspec(naked) void FUN_10bd14b0(void)

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



// Reference entry 10bd14e0; body size 101 bytes.
#line 1 "ENTRY_10bd14e0"

__declspec(naked) void FUN_10bd14e0(void)

{
  __asm mov eax, dword ptr [esp + 4]
  __asm mov ecx, dword ptr [esp + 8]
  __asm push edi
  __asm mov edi, dword ptr [esp + 0x10]
  __asm cmp eax, ecx
  __asm je 0x10bd1541
  __asm push esi
  __asm mov edx, dword ptr [eax + 0x10]
  __asm mov dword ptr [edi], edx
  __asm add edi, 4
  __asm mov edx, dword ptr [eax + 8]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10bd1524
  __asm mov edx, dword ptr [eax + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm jne 0x10bd1520
  __asm _emit 0x0f __asm _emit 0x1f __asm _emit 0x40 __asm _emit 0x00
  __asm cmp eax, dword ptr [edx + 8]
  __asm jne 0x10bd1520
  __asm mov eax, edx
  __asm mov edx, dword ptr [edx + 4]
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10bd1510
  __asm mov eax, edx
  __asm jmp 0x10bd153c
  __asm mov eax, edx
  __asm mov esi, dword ptr [eax]
  __asm cmp byte ptr [esi + 0xd], 0
  __asm jne 0x10bd153c
  __asm nop
  __asm mov edx, dword ptr [esi]
  __asm mov eax, esi
  __asm mov esi, edx
  __asm cmp byte ptr [edx + 0xd], 0
  __asm je 0x10bd1530
  __asm cmp eax, ecx
  __asm jne 0x10bd14f2
  __asm pop esi
  __asm mov eax, edi
  __asm pop edi
  __asm ret
}



// Reference entry 10bd1560; body size 36 bytes.
#line 1 "ENTRY_10bd1560"

__declspec(naked) void FUN_10bd1560(void)

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



// Reference entry 10bd1590; body size 36 bytes.
#line 1 "ENTRY_10bd1590"

__declspec(naked) void FUN_10bd1590(void)

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



// Reference entry 10bd17d0; body size 5 bytes.
#line 1 "ENTRY_10bd17d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd17d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd17e0; body size 5 bytes.
#line 1 "ENTRY_10bd17e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd17e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd17f0; body size 5 bytes.
#line 1 "ENTRY_10bd17f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd17f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1800; body size 5 bytes.
#line 1 "ENTRY_10bd1800"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1800(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1810; body size 5 bytes.
#line 1 "ENTRY_10bd1810"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1810(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1820; body size 5 bytes.
#line 1 "ENTRY_10bd1820"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1820(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1830; body size 5 bytes.
#line 1 "ENTRY_10bd1830"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1830(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1840; body size 5 bytes.
#line 1 "ENTRY_10bd1840"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1840(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1850; body size 5 bytes.
#line 1 "ENTRY_10bd1850"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1850(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1860; body size 5 bytes.
#line 1 "ENTRY_10bd1860"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1860(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1870; body size 5 bytes.
#line 1 "ENTRY_10bd1870"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1870(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1880; body size 5 bytes.
#line 1 "ENTRY_10bd1880"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1880(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1890; body size 5 bytes.
#line 1 "ENTRY_10bd1890"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1890(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd18a0; body size 5 bytes.
#line 1 "ENTRY_10bd18a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd18b0; body size 5 bytes.
#line 1 "ENTRY_10bd18b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd18c0; body size 5 bytes.
#line 1 "ENTRY_10bd18c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd18d0; body size 5 bytes.
#line 1 "ENTRY_10bd18d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd18e0; body size 5 bytes.
#line 1 "ENTRY_10bd18e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd18f0; body size 5 bytes.
#line 1 "ENTRY_10bd18f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd18f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1900; body size 5 bytes.
#line 1 "ENTRY_10bd1900"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1900(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1910; body size 5 bytes.
#line 1 "ENTRY_10bd1910"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1910(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1920; body size 5 bytes.
#line 1 "ENTRY_10bd1920"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1920(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1930; body size 5 bytes.
#line 1 "ENTRY_10bd1930"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1930(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1940; body size 5 bytes.
#line 1 "ENTRY_10bd1940"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1940(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1950; body size 5 bytes.
#line 1 "ENTRY_10bd1950"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1950(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1960; body size 5 bytes.
#line 1 "ENTRY_10bd1960"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1960(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1970; body size 5 bytes.
#line 1 "ENTRY_10bd1970"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1970(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1980; body size 5 bytes.
#line 1 "ENTRY_10bd1980"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1980(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1990; body size 5 bytes.
#line 1 "ENTRY_10bd1990"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1990(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd19a0; body size 5 bytes.
#line 1 "ENTRY_10bd19a0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19a0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd19b0; body size 5 bytes.
#line 1 "ENTRY_10bd19b0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19b0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd19c0; body size 5 bytes.
#line 1 "ENTRY_10bd19c0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19c0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd19d0; body size 5 bytes.
#line 1 "ENTRY_10bd19d0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19d0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd19e0; body size 5 bytes.
#line 1 "ENTRY_10bd19e0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19e0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd19f0; body size 5 bytes.
#line 1 "ENTRY_10bd19f0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd19f0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a00; body size 5 bytes.
#line 1 "ENTRY_10bd1a00"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a00(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a10; body size 5 bytes.
#line 1 "ENTRY_10bd1a10"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a10(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a20; body size 5 bytes.
#line 1 "ENTRY_10bd1a20"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a20(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a30; body size 5 bytes.
#line 1 "ENTRY_10bd1a30"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a30(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a40; body size 5 bytes.
#line 1 "ENTRY_10bd1a40"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a40(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a50; body size 5 bytes.
#line 1 "ENTRY_10bd1a50"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a50(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a60; body size 5 bytes.
#line 1 "ENTRY_10bd1a60"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a60(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a70; body size 5 bytes.
#line 1 "ENTRY_10bd1a70"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a70(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a80; body size 5 bytes.
#line 1 "ENTRY_10bd1a80"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a80(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1a90; body size 5 bytes.
#line 1 "ENTRY_10bd1a90"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1a90(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1aa0; body size 5 bytes.
#line 1 "ENTRY_10bd1aa0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1aa0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1ab0; body size 5 bytes.
#line 1 "ENTRY_10bd1ab0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1ab0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1ac0; body size 5 bytes.
#line 1 "ENTRY_10bd1ac0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1ac0(undefined4 param_1)

{
  return (undefined4)(param_1);
}


// Reference entry 10bd1ad0; body size 5 bytes.
#line 1 "ENTRY_10bd1ad0"

/* Recovered from a missing 5-byte E9 call destination by this_ Ghidra pass. */

undefined4 FUN_10bd1ad0(undefined4 param_1)

{
  return (undefined4)(param_1);
}

